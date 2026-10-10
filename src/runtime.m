#include "runtime.h"
#include "php_network.h"

/* Inside php-src the header is there whether or not ext/sockets is built; HAVE_SOCKETS says it is. */
#if __has_include("ext/sockets/php_sockets.h")
# include "ext/sockets/php_sockets.h"
# ifdef HAVE_SOCKETS
#  define APPKIT_HAVE_SOCKETS 1
# endif
#endif

#include <objc/runtime.h>
#include <pthread.h>

#import <AppKit/AppKit.h>

static zend_object_handlers appkit_handlers;

/* Objective-C class name => PHP class, for boxing an id as its nearest bound class. */
static HashTable appkit_objc_classes;
static bool appkit_objc_classes_ready = false;

static zend_object *appkit_create_object(zend_class_entry *ce)
{
	appkit_object *intern = zend_object_alloc(sizeof(appkit_object), ce);

	zend_object_std_init(&intern->std, ce);
	object_properties_init(&intern->std, ce);
	intern->std.handlers = &appkit_handlers;

	return &intern->std;
}

static void appkit_free_object(zend_object *object)
{
	appkit_object *intern = appkit_object_from(object);

	if (intern->ptr != NULL) {
		zend_hash_index_del(&APPKIT_G(boxes), (zend_ulong) (uintptr_t) intern->ptr);

		if (intern->cf) {
			CFRelease((CFTypeRef) intern->ptr);
		} else {
			@autoreleasepool {
				[(id) intern->ptr release];
			}
		}

		intern->ptr = NULL;
	}

	zend_object_std_dtor(object);
}

void appkit_object_setup(zend_class_entry *ce)
{
	static bool handlers_ready = false;

	if (!handlers_ready) {
		memcpy(&appkit_handlers, zend_get_std_object_handlers(), sizeof(zend_object_handlers));
		appkit_handlers.offset = XtOffsetOf(appkit_object, std);
		appkit_handlers.free_obj = appkit_free_object;
		appkit_handlers.clone_obj = NULL;
		appkit_handlers.compare = zend_objects_not_comparable;
		handlers_ready = true;
	}

	ce->create_object = appkit_create_object;
	ce->default_object_handlers = &appkit_handlers;
}

void appkit_map_objc_class(const char *objc_class, zend_class_entry *ce)
{
	if (!appkit_objc_classes_ready) {
		zend_hash_init(&appkit_objc_classes, 16, NULL, NULL, 1);
		appkit_objc_classes_ready = true;
	}

	zend_hash_str_update_ptr(&appkit_objc_classes, objc_class, strlen(objc_class), ce);
}

/* The PHP object already standing for this native object, with a new reference. */
static bool appkit_box_existing(zval *rv, const void *ptr)
{
	zend_object *existing = zend_hash_index_find_ptr(&APPKIT_G(boxes), (zend_ulong) (uintptr_t) ptr);

	if (existing == NULL) {
		return false;
	}

	ZVAL_OBJ_COPY(rv, existing);
	return true;
}

static void appkit_box_new(zval *rv, zend_class_entry *ce, void *retained, bool cf)
{
	zend_object *object = appkit_create_object(ce);
	appkit_object *intern = appkit_object_from(object);

	intern->ptr = retained;
	intern->cf = cf;
	zend_hash_index_add_new_ptr(&APPKIT_G(boxes), (zend_ulong) (uintptr_t) retained, object);

	ZVAL_OBJ(rv, object);
}

void appkit_box_objc(zval *rv, id obj)
{
	if (obj == nil) {
		ZVAL_NULL(rv);
		return;
	}

	if (appkit_box_existing(rv, (const void *) obj)) {
		return;
	}

	zend_class_entry *ce = appkit_ce_NSObject;

	for (Class cls = object_getClass(obj); cls != Nil; cls = class_getSuperclass(cls)) {
		const char *name = class_getName(cls);
		zend_class_entry *mapped = zend_hash_str_find_ptr(&appkit_objc_classes, name, strlen(name));

		if (mapped != NULL) {
			ce = mapped;
			break;
		}
	}

	appkit_box_new(rv, ce, (void *) [obj retain], false);
}

/*
 * The native class a static constructor or factory was called on: the PHP class name
 * where it names an Objective-C class, else the nearest parent that does. So
 * NSTextField::initWithFrame() allocates an NSTextField, as [NSTextField alloc] would.
 */
Class appkit_called_class(zend_execute_data *execute_data)
{
	for (zend_class_entry *ce = zend_get_called_scope(execute_data); ce != NULL; ce = ce->parent) {
		Class cls = objc_getClass(ZSTR_VAL(ce->name));

		/* A glue class stands for a runtime class of another name (ObjCStageWindow → PHPStageWindow). */
		if (cls == Nil && appkit_objc_classes_ready) {
			zend_string *objc_name;
			zend_class_entry *mapped;

			ZEND_HASH_FOREACH_STR_KEY_PTR(&appkit_objc_classes, objc_name, mapped) {
				if (mapped == ce) {
					cls = objc_getClass(ZSTR_VAL(objc_name));
					break;
				}
			} ZEND_HASH_FOREACH_END();
		}

		if (cls != Nil) {
			return cls;
		}
	}

	return Nil;
}

/* A constructor's new object: the wrapper takes the +1 reference alloc/init returned. */
void appkit_adopt_objc(zend_object *wrapper, id retained)
{
	appkit_object *intern = appkit_object_from(wrapper);

	intern->ptr = (void *) retained;
	intern->cf = false;
	zend_hash_index_update_ptr(&APPKIT_G(boxes), (zend_ulong) (uintptr_t) retained, wrapper);
}

void appkit_box_cf(zval *rv, CFTypeRef ref)
{
	if (ref == NULL) {
		ZVAL_NULL(rv);
		return;
	}

	if (appkit_box_existing(rv, ref)) {
		return;
	}

	CFTypeID type = CFGetTypeID(ref);
	zend_class_entry *ce = appkit_ce_CFType;

	if (type == CFRunLoopGetTypeID()) {
		ce = appkit_ce_CFRunLoop;
	} else if (type == CFRunLoopSourceGetTypeID()) {
		ce = appkit_ce_CFRunLoopSource;
	} else if (type == CFFileDescriptorGetTypeID()) {
		ce = appkit_ce_CFFileDescriptor;
	} else if (type == CFDataGetTypeID()) {
		ce = appkit_ce_CFData;
	} else if (type == CGDataProviderGetTypeID()) {
		ce = appkit_ce_CGDataProvider;
	} else if (type == CGColorSpaceGetTypeID()) {
		ce = appkit_ce_CGColorSpace;
	} else if (type == CGImageGetTypeID()) {
		ce = appkit_ce_CGImage;
	} else if (type == CGContextGetTypeID()) {
		ce = appkit_ce_CGContext;
	} else if (type == CGDisplayModeGetTypeID()) {
		ce = appkit_ce_CGDisplayMode;
	} else if (type == CGEventGetTypeID()) {
		ce = appkit_ce_CGEvent;
	}

	appkit_box_new(rv, ce, (void *) CFRetain(ref), true);
}

NSString *appkit_nsstring(zend_string *str)
{
	return [[[NSString alloc] initWithBytes:ZSTR_VAL(str) length:ZSTR_LEN(str) encoding:NSUTF8StringEncoding] autorelease];
}

/*
 * A run-loop mode as the constant object when the text names one. CFRunLoop
 * recognises kCFRunLoopCommonModes by pointer, not by text: an equal string
 * built from PHP would register a mode that is literally named that.
 * Returns a +1 reference.
 */
CFStringRef appkit_run_loop_mode(zend_string *mode)
{
	CFStringRef known[] = {
		kCFRunLoopDefaultMode,
		kCFRunLoopCommonModes,
		(CFStringRef) NSEventTrackingRunLoopMode,
		(CFStringRef) NSModalPanelRunLoopMode,
	};
	CFStringRef given = CFStringCreateWithBytes(kCFAllocatorDefault, (const UInt8 *) ZSTR_VAL(mode), (CFIndex) ZSTR_LEN(mode), kCFStringEncodingUTF8, false);

	for (size_t i = 0; i < sizeof(known) / sizeof(known[0]); i++) {
		if (CFStringCompare(given, known[i], 0) == kCFCompareEqualTo) {
			CFRelease(given);
			return (CFStringRef) CFRetain(known[i]);
		}
	}

	return given;
}

zend_string *appkit_zend_string(CFStringRef str)
{
	CFIndex length = CFStringGetLength(str);
	CFIndex max = CFStringGetMaximumSizeForEncoding(length, kCFStringEncodingUTF8);
	zend_string *out = zend_string_alloc(max, 0);
	CFIndex used = 0;

	CFStringGetBytes(str, CFRangeMake(0, length), kCFStringEncodingUTF8, '?', false, (UInt8 *) ZSTR_VAL(out), max, &used);
	ZSTR_VAL(out)[used] = '\0';
	ZSTR_LEN(out) = used;

	return out;
}

/* For MINIT constant registration: REGISTER_STRING_CONSTANT copies the result straight away. */
const char *appkit_cfstring_constant(CFStringRef str)
{
	static char buffer[256];

	if (!CFStringGetCString(str, buffer, sizeof(buffer), kCFStringEncodingUTF8)) {
		buffer[0] = '\0';
	}

	return buffer;
}

/* A parameter typed Enum|int arrives as either the case object or the plain integer. */
zend_long appkit_enum_value(zend_object *obj_or_null, zend_long fallback)
{
	return obj_or_null != NULL ? Z_LVAL_P(zend_enum_fetch_case_value(obj_or_null)) : fallback;
}

void appkit_return_enum(zval *rv, zend_class_entry *ce, zend_long value, bool int_fallback)
{
	zend_object *case_obj = NULL;

	if (zend_enum_get_case_by_value(&case_obj, ce, value, NULL, int_fallback) == SUCCESS) {
		ZVAL_OBJ_COPY(rv, case_obj);
		return;
	}

	if (int_fallback) {
		ZVAL_LONG(rv, value);
		return;
	}

	ZVAL_NULL(rv);
}

bool appkit_fd_from_zval(zval *zfd, uint32_t arg_num, int *fd)
{
	switch (Z_TYPE_P(zfd)) {
		case IS_LONG:
			if (Z_LVAL_P(zfd) < 0 || Z_LVAL_P(zfd) > INT_MAX) {
				zend_argument_value_error(arg_num, "must be a valid file descriptor");
				return false;
			}
			*fd = (int) Z_LVAL_P(zfd);
			return true;

		case IS_RESOURCE: {
			php_stream *stream = (php_stream *) zend_fetch_resource2_ex(
				zfd, NULL, php_file_le_stream(), php_file_le_pstream()
			);
			php_socket_t stream_fd = -1;

			if (stream == NULL) {
				zend_argument_type_error(arg_num, "must be a valid stream resource");
				return false;
			}

			if (php_stream_cast(stream, PHP_STREAM_AS_FD_FOR_SELECT | PHP_STREAM_CAST_INTERNAL,
					(void **) &stream_fd, 0) != SUCCESS || stream_fd < 0) {
				zend_argument_value_error(arg_num, "must be a stream backed by a file descriptor");
				return false;
			}

			*fd = (int) stream_fd;
			return true;
		}

#ifdef APPKIT_HAVE_SOCKETS
		case IS_OBJECT: {
			/* Resolved by name so appkit.so never links against ext/sockets symbols. */
			zend_class_entry *socket_class = zend_hash_str_find_ptr(CG(class_table), "socket", sizeof("socket") - 1);

			if (socket_class != NULL && Z_OBJCE_P(zfd) == socket_class) {
				php_socket *socket = Z_SOCKET_P(zfd);

				if (socket->bsd_socket < 0) {
					zend_argument_value_error(arg_num, "has already been closed");
					return false;
				}

				*fd = (int) socket->bsd_socket;
				return true;
			}
			break;
		}
#endif
	}

	zend_argument_type_error(arg_num, "must be of type Socket|resource|int, %s given", zend_zval_value_name(zfd));
	return false;
}

void appkit_throw_nsexception(NSException *e)
{
	if (EG(exception) != NULL) {
		return;
	}

	zend_throw_exception_ex(appkit_ce_AppKitException, 0, "%s: %s",
		[[e name] UTF8String] ?: "NSException",
		[[e reason] UTF8String] ?: "(no reason)");
}

bool appkit_on_main_thread(void)
{
	return pthread_main_np() != 0;
}

appkit_callout *appkit_callout_new(zval *callable, void (*detach)(CFTypeRef))
{
	appkit_callout *callout = pecalloc(1, sizeof(appkit_callout), 1);

	ZVAL_COPY(&callout->callable, callable);
	callout->detach = detach;
	callout->thread = pthread_self();

	callout->next = APPKIT_G(callouts);
	if (callout->next != NULL) {
		callout->next->prev = callout;
	}
	APPKIT_G(callouts) = callout;

	return callout;
}

static void appkit_callout_unlink(appkit_callout *callout)
{
	if (callout->prev != NULL) {
		callout->prev->next = callout->next;
	} else if (APPKIT_G(callouts) == callout) {
		APPKIT_G(callouts) = callout->next;
	}

	if (callout->next != NULL) {
		callout->next->prev = callout->prev;
	}

	callout->prev = callout->next = NULL;
}

const void *appkit_callout_retain(const void *info)
{
	((appkit_callout *) info)->refcount++;
	return info;
}

void appkit_callout_release(const void *info)
{
	appkit_callout *callout = (appkit_callout *) info;

	if (--callout->refcount > 0) {
		return;
	}

	if (!Z_ISUNDEF(callout->callable)) {
		/*
		 * The last native reference went away on another thread: the callable belongs
		 * to the owner thread's request, so leave the record linked, with nothing left
		 * to detach, for that thread's request end to free.
		 */
		if (!pthread_equal(callout->thread, pthread_self())) {
			callout->owner = NULL;
			callout->detach = NULL;
			return;
		}
		appkit_callout_unlink(callout);
		zval_ptr_dtor(&callout->callable);
		ZVAL_UNDEF(&callout->callable);
	}

	pefree(callout, 1);
}

void appkit_callout_invoke(appkit_callout *callout, uint32_t argc, zval *argv)
{
	zval retval;

	appkit_callout_call(callout, argc, argv, &retval);
	zval_ptr_dtor(&retval);
}

/*
 * Whether native code may enter this callable now: only on the thread that made it
 * (PHP's state is per thread; another thread would run it against the wrong engine,
 * or none), only while attached, and not while a PHP exception is on its way out.
 * Native entry points check this before boxing anything.
 */
bool appkit_callout_can_enter(appkit_callout *callout)
{
	return pthread_equal(callout->thread, pthread_self()) && !Z_ISUNDEF(callout->callable) && EG(exception) == NULL;
}

/* Calls the PHP callable; false when it did not run (another thread, detached, or an exception already pending). */
bool appkit_callout_call(appkit_callout *callout, uint32_t argc, zval *argv, zval *retval)
{
	ZVAL_UNDEF(retval);

	/* A PHP exception already on its way out wins; later callbacks in the same native call wait for the next one. */
	if (!appkit_callout_can_enter(callout)) {
		return false;
	}

	zval callable;
	bool called;

	/* The callable may drop the last native reference to its own record (invalidate()), so hold both. */
	appkit_callout_retain(callout);
	ZVAL_COPY(&callable, &callout->callable);

	called = call_user_function(NULL, NULL, &callable, retval, argc, argv) == SUCCESS && EG(exception) == NULL;

	zval_ptr_dtor(&callable);
	appkit_callout_release(callout);

	return called;
}

/*
 * At request end every native object still able to call back is stopped and its
 * callable freed while the engine can still free it. The records themselves stay
 * until the native side lets go of them.
 */
void appkit_callouts_detach_all(void)
{
	while (APPKIT_G(callouts) != NULL) {
		appkit_callout *callout = APPKIT_G(callouts);
		zval callable;

		ZVAL_COPY_VALUE(&callable, &callout->callable);
		ZVAL_UNDEF(&callout->callable);
		appkit_callout_unlink(callout);

		/* Detaching can make the native side let go of the record: hold it across the call. */
		appkit_callout_retain(callout);
		if (callout->owner != NULL && callout->detach != NULL) {
			callout->detach(callout->owner);
		}
		appkit_callout_release(callout);

		zval_ptr_dtor(&callable);
	}
}

static bool appkit_double_props(zend_object *object, uint32_t arg_num, int count, double *out)
{
	for (int i = 0; i < count; i++) {
		zval *prop = OBJ_PROP_NUM(object, i);

		if (Z_TYPE_P(prop) != IS_DOUBLE) {
			zend_argument_value_error(arg_num, "must have every property initialized");
			return false;
		}
		out[i] = Z_DVAL_P(prop);
	}

	return true;
}

bool appkit_rect_from(zend_object *rect, uint32_t arg_num, NSRect *out)
{
	double v[4];

	if (!appkit_double_props(rect, arg_num, 4, v)) {
		return false;
	}
	*out = NSMakeRect(v[0], v[1], v[2], v[3]);
	return true;
}

bool appkit_point_from(zend_object *point, uint32_t arg_num, NSPoint *out)
{
	double v[2];

	if (!appkit_double_props(point, arg_num, 2, v)) {
		return false;
	}
	*out = NSMakePoint(v[0], v[1]);
	return true;
}

bool appkit_size_from(zend_object *size, uint32_t arg_num, NSSize *out)
{
	double v[2];

	if (!appkit_double_props(size, arg_num, 2, v)) {
		return false;
	}
	*out = NSMakeSize(v[0], v[1]);
	return true;
}

static void appkit_return_doubles(zval *rv, zend_class_entry *ce, int count, const double *values)
{
	object_init_ex(rv, ce);
	for (int i = 0; i < count; i++) {
		ZVAL_DOUBLE(OBJ_PROP_NUM(Z_OBJ_P(rv), i), values[i]);
	}
}

void appkit_return_rect(zval *rv, NSRect rect)
{
	double v[4] = { rect.origin.x, rect.origin.y, rect.size.width, rect.size.height };
	appkit_return_doubles(rv, appkit_ce_NSRect, 4, v);
}

void appkit_return_size(zval *rv, NSSize size)
{
	double v[2] = { size.width, size.height };
	appkit_return_doubles(rv, appkit_ce_NSSize, 2, v);
}

void appkit_return_point(zval *rv, NSPoint point)
{
	double v[2] = { point.x, point.y };
	appkit_return_doubles(rv, appkit_ce_NSPoint, 2, v);
}

/*
 * A Foundation value as PHP: NSNull → null, NSString → string, NSNumber → bool/int/float
 * by its type, an NSValue holding a rect/size/point → NSRect/NSSize/NSPoint, anything else boxed.
 */
void appkit_zval_from_id(zval *out, id value)
{
	if (value == nil || value == [NSNull null]) {
		ZVAL_NULL(out);
	} else if ([value isKindOfClass:[NSString class]]) {
		ZVAL_STR(out, appkit_zend_string((CFStringRef) value));
	} else if ([value isKindOfClass:[NSNumber class]]) {
		const char *type = [(NSNumber *) value objCType];

		if (CFGetTypeID((CFTypeRef) value) == CFBooleanGetTypeID()) {
			ZVAL_BOOL(out, [(NSNumber *) value boolValue]);
		} else if (type[0] == 'f' || type[0] == 'd') {
			ZVAL_DOUBLE(out, [(NSNumber *) value doubleValue]);
		} else {
			ZVAL_LONG(out, (zend_long) [(NSNumber *) value longLongValue]);
		}
	} else if ([value isKindOfClass:[NSValue class]] && strncmp([(NSValue *) value objCType], "{CGRect=", 8) == 0) {
		appkit_return_rect(out, [(NSValue *) value rectValue]);
	} else if ([value isKindOfClass:[NSValue class]] && strncmp([(NSValue *) value objCType], "{CGSize=", 8) == 0) {
		appkit_return_size(out, [(NSValue *) value sizeValue]);
	} else if ([value isKindOfClass:[NSValue class]] && strncmp([(NSValue *) value objCType], "{CGPoint=", 9) == 0) {
		appkit_return_point(out, [(NSValue *) value pointValue]);
	} else {
		appkit_box_objc(out, value);
	}
}

/* A PHP array as an NSDictionary: string keys; string, int, float, bool or NSObject values. Autoreleased. */
NSDictionary *appkit_nsdictionary(HashTable *ht, uint32_t arg_num)
{
	NSMutableDictionary *dict = [NSMutableDictionary dictionaryWithCapacity:zend_hash_num_elements(ht)];
	zend_string *key;
	zval *value;

	ZEND_HASH_FOREACH_STR_KEY_VAL(ht, key, value) {
		id object = nil;

		if (key == NULL) {
			zend_argument_value_error(arg_num, "must have string keys only");
			return nil;
		}

		ZVAL_DEREF(value);
		switch (Z_TYPE_P(value)) {
			case IS_STRING: object = appkit_nsstring(Z_STR_P(value)); break;
			case IS_LONG:   object = [NSNumber numberWithLongLong:(long long) Z_LVAL_P(value)]; break;
			case IS_DOUBLE: object = [NSNumber numberWithDouble:Z_DVAL_P(value)]; break;
			case IS_TRUE:   object = [NSNumber numberWithBool:YES]; break;
			case IS_FALSE:  object = [NSNumber numberWithBool:NO]; break;
			case IS_OBJECT:
				if (instanceof_function(Z_OBJCE_P(value), appkit_ce_NSObject)) {
					object = APPKIT_ID(Z_OBJ_P(value));
				}
				break;
		}

		if (object == nil) {
			zend_argument_type_error(arg_num, "value for key \"%s\" must be string, int, float, bool or NSObject, %s given",
				ZSTR_VAL(key), zend_zval_value_name(value));
			return nil;
		}

		dict[appkit_nsstring(key)] = object;
	} ZEND_HASH_FOREACH_END();

	return dict;
}
