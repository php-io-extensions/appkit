/*
 * The two trampolines a PHP callable needs to stand where AppKit wants an
 * object: a delegate answering a protocol's selectors, and a target answering
 * action:. Both hold their callables as callout records, released when the
 * Objective-C object deallocates, inert after request end.
 */

#include "runtime.h"
#include "../stubs/ObjCGlue_arginfo.h"

#include <objc/runtime.h>

/* ---- argument and return conversion ------------------------------------ */

/* Skip the method-qualifier characters (const, in, out, ...) in front of a type encoding. */
static const char *appkit_bare_type(const char *type)
{
	while (*type != '\0' && strchr("rnNoORV", *type) != NULL) {
		type++;
	}

	return type;
}

static void appkit_invocation_arg(zval *out, NSInvocation *invocation, NSUInteger index)
{
	const char *type = appkit_bare_type([[invocation methodSignature] getArgumentTypeAtIndex:index]);

	switch (type[0]) {
		case '@': {
			__unsafe_unretained id value = nil;
			[invocation getArgument:&value atIndex:index];
			appkit_box_objc(out, value);
			return;
		}
		case '#': {
			Class value = Nil;
			[invocation getArgument:&value atIndex:index];
			if (value == Nil) {
				ZVAL_NULL(out);
			} else {
				ZVAL_STRING(out, class_getName(value));
			}
			return;
		}
		case ':': {
			SEL value = NULL;
			[invocation getArgument:&value atIndex:index];
			if (value == NULL) {
				ZVAL_NULL(out);
			} else {
				ZVAL_STRING(out, sel_getName(value));
			}
			return;
		}
		case 'B': { bool value; [invocation getArgument:&value atIndex:index]; ZVAL_BOOL(out, value); return; }
		case 'c': { signed char value; [invocation getArgument:&value atIndex:index]; ZVAL_BOOL(out, value != 0); return; }
		case 'C': { unsigned char value; [invocation getArgument:&value atIndex:index]; ZVAL_LONG(out, value); return; }
		case 's': { short value; [invocation getArgument:&value atIndex:index]; ZVAL_LONG(out, value); return; }
		case 'S': { unsigned short value; [invocation getArgument:&value atIndex:index]; ZVAL_LONG(out, value); return; }
		case 'i': { int value; [invocation getArgument:&value atIndex:index]; ZVAL_LONG(out, value); return; }
		case 'I': { unsigned int value; [invocation getArgument:&value atIndex:index]; ZVAL_LONG(out, (zend_long) value); return; }
		case 'l': { long value; [invocation getArgument:&value atIndex:index]; ZVAL_LONG(out, (zend_long) value); return; }
		case 'L': { unsigned long value; [invocation getArgument:&value atIndex:index]; ZVAL_LONG(out, (zend_long) value); return; }
		case 'q': { long long value; [invocation getArgument:&value atIndex:index]; ZVAL_LONG(out, (zend_long) value); return; }
		case 'Q': { unsigned long long value; [invocation getArgument:&value atIndex:index]; ZVAL_LONG(out, (zend_long) value); return; }
		case 'f': { float value; [invocation getArgument:&value atIndex:index]; ZVAL_DOUBLE(out, value); return; }
		case 'd': { double value; [invocation getArgument:&value atIndex:index]; ZVAL_DOUBLE(out, value); return; }
		case '^': { void *value = NULL; [invocation getArgument:&value atIndex:index]; ZVAL_LONG(out, (zend_long) (uintptr_t) value); return; }
		case '*': {
			char *value = NULL;
			[invocation getArgument:&value atIndex:index];
			if (value == NULL) {
				ZVAL_NULL(out);
			} else {
				ZVAL_STRING(out, value);
			}
			return;
		}
		case '{':
			if (strncmp(type, "{CGRect=", 8) == 0) {
				NSRect value;
				[invocation getArgument:&value atIndex:index];
				appkit_return_rect(out, value);
				return;
			}
			if (strncmp(type, "{CGSize=", 8) == 0) {
				NSSize value;
				[invocation getArgument:&value atIndex:index];
				appkit_return_size(out, value);
				return;
			}
			if (strncmp(type, "{CGPoint=", 9) == 0) {
				NSPoint value;
				[invocation getArgument:&value atIndex:index];
				appkit_return_point(out, value);
				return;
			}
			break;
	}

	ZVAL_NULL(out);
}

/* The PHP return value written into the invocation's return slot, typed by the selector's signature. */
static void appkit_invocation_return(NSInvocation *invocation, zval *value)
{
	const char *type = appkit_bare_type([[invocation methodSignature] methodReturnType]);

	switch (type[0]) {
		case 'v': return;
		case 'B': { bool out = zend_is_true(value); [invocation setReturnValue:&out]; return; }
		case 'c': { signed char out = zend_is_true(value) ? 1 : 0; [invocation setReturnValue:&out]; return; }
		case 'C': { unsigned char out = (unsigned char) zval_get_long(value); [invocation setReturnValue:&out]; return; }
		case 's': { short out = (short) zval_get_long(value); [invocation setReturnValue:&out]; return; }
		case 'S': { unsigned short out = (unsigned short) zval_get_long(value); [invocation setReturnValue:&out]; return; }
		case 'i': { int out = (int) zval_get_long(value); [invocation setReturnValue:&out]; return; }
		case 'I': { unsigned int out = (unsigned int) zval_get_long(value); [invocation setReturnValue:&out]; return; }
		case 'l': { long out = (long) zval_get_long(value); [invocation setReturnValue:&out]; return; }
		case 'L': { unsigned long out = (unsigned long) zval_get_long(value); [invocation setReturnValue:&out]; return; }
		case 'q': { long long out = (long long) zval_get_long(value); [invocation setReturnValue:&out]; return; }
		case 'Q': { unsigned long long out = (unsigned long long) zval_get_long(value); [invocation setReturnValue:&out]; return; }
		case 'f': { float out = (float) zval_get_double(value); [invocation setReturnValue:&out]; return; }
		case 'd': { double out = zval_get_double(value); [invocation setReturnValue:&out]; return; }
		case '@': {
			__unsafe_unretained id out = nil;
			switch (Z_TYPE_P(value)) {
				case IS_OBJECT:
					/* +1 for the caller, released by the pool it is running in: the PHP value may be the object's only owner and dies right after this returns. */
					if (instanceof_function(Z_OBJCE_P(value), appkit_ce_NSObject)) {
						out = [[APPKIT_ID(Z_OBJ_P(value)) retain] autorelease];
					}
					break;
				case IS_STRING: out = appkit_nsstring(Z_STR_P(value)); break;
				case IS_LONG:   out = [NSNumber numberWithLongLong:(long long) Z_LVAL_P(value)]; break;
				case IS_DOUBLE: out = [NSNumber numberWithDouble:Z_DVAL_P(value)]; break;
				case IS_TRUE:   out = [NSNumber numberWithBool:YES]; break;
				case IS_FALSE:  out = [NSNumber numberWithBool:NO]; break;
			}
			[invocation setReturnValue:&out];
			return;
		}
	}
}

/* ---- PHPAppKitDelegate -------------------------------------------------- */

@interface PHPAppKitDelegate : NSObject {
@public
	Protocol *protocol;
	NSMutableDictionary<NSString *, NSValue *> *handlers;  /* selector name => appkit_callout* */
}
- (instancetype)initWithProtocol:(Protocol *)aProtocol;
- (void)setHandler:(appkit_callout *)callout forSelector:(NSString *)name;
- (void)removeHandlerForSelector:(NSString *)name;
@end

@implementation PHPAppKitDelegate

- (instancetype)initWithProtocol:(Protocol *)aProtocol
{
	if ((self = [super init])) {
		protocol = aProtocol;
		handlers = [[NSMutableDictionary alloc] init];
	}

	return self;
}

- (void)dealloc
{
	for (NSValue *value in [handlers allValues]) {
		appkit_callout_release([value pointerValue]);
	}
	[handlers release];
	[super dealloc];
}

- (void)setHandler:(appkit_callout *)callout forSelector:(NSString *)name
{
	[self removeHandlerForSelector:name];
	handlers[name] = [NSValue valueWithPointer:callout];
}

- (void)removeHandlerForSelector:(NSString *)name
{
	NSValue *existing = handlers[name];

	if (existing != nil) {
		appkit_callout *callout = [existing pointerValue];
		[handlers removeObjectForKey:name];
		appkit_callout_release(callout);
	}
}

- (BOOL)conformsToProtocol:(Protocol *)aProtocol
{
	return aProtocol == protocol || [super conformsToProtocol:aProtocol];
}

- (BOOL)respondsToSelector:(SEL)selector
{
	return handlers[NSStringFromSelector(selector)] != nil || [super respondsToSelector:selector];
}

- (NSMethodSignature *)methodSignatureForSelector:(SEL)selector
{
	NSMethodSignature *signature = [super methodSignatureForSelector:selector];

	if (signature != nil) {
		return signature;
	}

	struct objc_method_description description = protocol_getMethodDescription(protocol, selector, NO, YES);
	if (description.types == NULL) {
		description = protocol_getMethodDescription(protocol, selector, YES, YES);
	}

	return description.types != NULL ? [NSMethodSignature signatureWithObjCTypes:description.types] : nil;
}

- (void)forwardInvocation:(NSInvocation *)invocation
{
	NSValue *handler = handlers[NSStringFromSelector([invocation selector])];

	if (handler == nil) {
		[super forwardInvocation:invocation];
		return;
	}
	if (!appkit_callout_can_enter([handler pointerValue])) {
		return;
	}

	NSUInteger count = [[invocation methodSignature] numberOfArguments];
	uint32_t argc = (uint32_t) (count > 2 ? count - 2 : 0);
	zval *argv = argc > 0 ? safe_emalloc(argc, sizeof(zval), 0) : NULL;
	zval retval;

	for (uint32_t i = 0; i < argc; i++) {
		appkit_invocation_arg(&argv[i], invocation, i + 2);
	}

	if (appkit_callout_call([handler pointerValue], argc, argv, &retval)) {
		appkit_invocation_return(invocation, &retval);
	}
	zval_ptr_dtor(&retval);

	for (uint32_t i = 0; i < argc; i++) {
		zval_ptr_dtor(&argv[i]);
	}
	if (argv != NULL) {
		efree(argv);
	}
}

@end

/* ---- PHPAppKitTarget ---------------------------------------------------- */

@interface PHPAppKitTarget : NSObject {
@public
	appkit_callout *callout;
}
- (void)action:(id)sender;
@end

@implementation PHPAppKitTarget

- (void)dealloc
{
	if (callout != NULL) {
		appkit_callout_release(callout);
	}
	[super dealloc];
}

- (void)action:(id)sender
{
	zval argv[1];

	if (!appkit_callout_can_enter(callout)) {
		return;
	}

	appkit_box_objc(&argv[0], sender);
	appkit_callout_invoke(callout, 1, argv);
	zval_ptr_dtor(&argv[0]);
}

@end

/* ---- PHPAppKitObserver -------------------------------------------------- */

@interface PHPAppKitObserver : NSObject {
@public
	appkit_callout *callout;
	NSMutableArray<NSArray *> *observed;  /* (object, keyPath) pairs still registered */
}
@end

@implementation PHPAppKitObserver

- (instancetype)init
{
	if ((self = [super init])) {
		observed = [[NSMutableArray alloc] init];
	}

	return self;
}

- (void)dealloc
{
	/* Every recorded pair was registered; the guard keeps a dealloc from ever raising out of PHP's object free. */
	for (NSArray *pair in observed) {
		@try {
			[pair[0] removeObserver:self forKeyPath:pair[1]];
		} @catch (NSException *ignored) {
		}
	}
	[observed release];
	if (callout != NULL) {
		appkit_callout_release(callout);
	}
	[super dealloc];
}

- (NSUInteger)indexOfObject:(id)object keyPath:(NSString *)keyPath
{
	return [observed indexOfObjectPassingTest:^BOOL(NSArray *pair, NSUInteger idx, BOOL *stop) {
		return pair[0] == object && [pair[1] isEqualToString:keyPath];
	}];
}

- (void)observeValueForKeyPath:(NSString *)keyPath ofObject:(id)object change:(NSDictionary *)change context:(void *)context
{
	zval argv[3];
	id value;

	if (!appkit_callout_can_enter(callout)) {
		return;
	}
	ZVAL_STR(&argv[0], appkit_zend_string((CFStringRef) keyPath));
	appkit_box_objc(&argv[1], object);
	array_init(&argv[2]);
	if ((value = change[NSKeyValueChangeNewKey]) != nil) {
		zval zv;
		appkit_zval_from_id(&zv, value);
		add_assoc_zval(&argv[2], "new", &zv);
	}
	if ((value = change[NSKeyValueChangeOldKey]) != nil) {
		zval zv;
		appkit_zval_from_id(&zv, value);
		add_assoc_zval(&argv[2], "old", &zv);
	}

	appkit_callout_invoke(callout, 3, argv);

	for (int i = 0; i < 3; i++) {
		zval_ptr_dtor(&argv[i]);
	}
}

@end

/* ---- PHP classes -------------------------------------------------------- */

void appkit_register_ObjCGlue(void)
{
	appkit_ce_ObjCDelegate = register_class_ObjCDelegate(appkit_ce_NSObject);
	appkit_object_setup(appkit_ce_ObjCDelegate);
	appkit_map_objc_class("PHPAppKitDelegate", appkit_ce_ObjCDelegate);

	appkit_ce_ObjCTarget = register_class_ObjCTarget(appkit_ce_NSObject);
	appkit_object_setup(appkit_ce_ObjCTarget);
	appkit_map_objc_class("PHPAppKitTarget", appkit_ce_ObjCTarget);

	appkit_ce_ObjCObserver = register_class_ObjCObserver(appkit_ce_NSObject);
	appkit_object_setup(appkit_ce_ObjCObserver);
	appkit_map_objc_class("PHPAppKitObserver", appkit_ce_ObjCObserver);
}

#define THIS_DELEGATE ((PHPAppKitDelegate *) APPKIT_ID(Z_OBJ_P(ZEND_THIS)))

static bool appkit_require_unconstructed(zval *this_zv)
{
	if (appkit_object_from(Z_OBJ_P(this_zv))->ptr != NULL) {
		zend_throw_error(NULL, "%s::__construct() called twice", ZSTR_VAL(Z_OBJCE_P(this_zv)->name));
		return false;
	}

	return true;
}

ZEND_METHOD(ObjCDelegate, __construct)
{
	zend_string *protocol_name;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(protocol_name)
	ZEND_PARSE_PARAMETERS_END();

	if (!appkit_require_unconstructed(ZEND_THIS)) {
		RETURN_THROWS();
	}

	Protocol *protocol = objc_getProtocol(ZSTR_VAL(protocol_name));
	if (protocol == NULL) {
		zend_argument_value_error(1, "names no Objective-C protocol known to this process");
		RETURN_THROWS();
	}

	APPKIT_BEGIN
		appkit_adopt_objc(Z_OBJ_P(ZEND_THIS), [[PHPAppKitDelegate alloc] initWithProtocol:protocol]);
	APPKIT_END
}

ZEND_METHOD(ObjCDelegate, on)
{
	zend_string *selector_name;
	zval *handler;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_STR(selector_name)
		Z_PARAM_ZVAL(handler)
	ZEND_PARSE_PARAMETERS_END();

	if (!zend_is_callable(handler, 0, NULL)) {
		zend_argument_type_error(2, "must be a valid callback");
		RETURN_THROWS();
	}

	PHPAppKitDelegate *delegate = THIS_DELEGATE;
	SEL selector = sel_registerName(ZSTR_VAL(selector_name));

	if (protocol_getMethodDescription(delegate->protocol, selector, NO, YES).types == NULL
			&& protocol_getMethodDescription(delegate->protocol, selector, YES, YES).types == NULL) {
		zend_argument_value_error(1, "is not an instance selector of %s", protocol_getName(delegate->protocol));
		RETURN_THROWS();
	}

	APPKIT_BEGIN
		/* No detach: a callout whose callable is freed at request end goes inert, and dealloc frees the record. */
		appkit_callout *callout = appkit_callout_new(handler, NULL);
		appkit_callout_retain(callout);
		[delegate setHandler:callout forSelector:[NSString stringWithUTF8String:ZSTR_VAL(selector_name)]];
	APPKIT_END
}

ZEND_METHOD(ObjCDelegate, off)
{
	zend_string *selector_name;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(selector_name)
	ZEND_PARSE_PARAMETERS_END();

	APPKIT_BEGIN
		[THIS_DELEGATE removeHandlerForSelector:[NSString stringWithUTF8String:ZSTR_VAL(selector_name)]];
	APPKIT_END
}

ZEND_METHOD(ObjCDelegate, protocolName)
{
	ZEND_PARSE_PARAMETERS_NONE();

	RETURN_STRING(protocol_getName(THIS_DELEGATE->protocol));
}

ZEND_METHOD(ObjCTarget, __construct)
{
	zval *handler;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ZVAL(handler)
	ZEND_PARSE_PARAMETERS_END();

	if (!appkit_require_unconstructed(ZEND_THIS)) {
		RETURN_THROWS();
	}

	if (!zend_is_callable(handler, 0, NULL)) {
		zend_argument_type_error(1, "must be a valid callback");
		RETURN_THROWS();
	}

	APPKIT_BEGIN
		PHPAppKitTarget *target = [[PHPAppKitTarget alloc] init];
		target->callout = appkit_callout_new(handler, NULL);
		appkit_callout_retain(target->callout);
		appkit_adopt_objc(Z_OBJ_P(ZEND_THIS), target);
	APPKIT_END
}

#define THIS_OBSERVER ((PHPAppKitObserver *) APPKIT_ID(Z_OBJ_P(ZEND_THIS)))

ZEND_METHOD(ObjCObserver, __construct)
{
	zval *handler;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ZVAL(handler)
	ZEND_PARSE_PARAMETERS_END();

	if (!appkit_require_unconstructed(ZEND_THIS)) {
		RETURN_THROWS();
	}

	if (!zend_is_callable(handler, 0, NULL)) {
		zend_argument_type_error(1, "must be a valid callback");
		RETURN_THROWS();
	}

	APPKIT_BEGIN
		PHPAppKitObserver *observer = [[PHPAppKitObserver alloc] init];
		observer->callout = appkit_callout_new(handler, NULL);
		appkit_callout_retain(observer->callout);
		appkit_adopt_objc(Z_OBJ_P(ZEND_THIS), observer);
	APPKIT_END
}

ZEND_METHOD(ObjCObserver, observe)
{
	zend_object *object;
	zend_string *key_path;
	zend_long options;

	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_OBJ_OF_CLASS(object, appkit_ce_NSObject)
		Z_PARAM_STR(key_path)
		Z_PARAM_LONG(options)
	ZEND_PARSE_PARAMETERS_END();
	APPKIT_REQUIRE_MAIN_THREAD();

	APPKIT_BEGIN
		id target = APPKIT_ID(object);
		NSString *path = appkit_nsstring(key_path);

		if ([THIS_OBSERVER indexOfObject:target keyPath:path] != NSNotFound) {
			zend_throw_exception_ex(appkit_ce_AppKitException, 0, "ObjCObserver already observes \"%s\" on this object; stop() it first", ZSTR_VAL(key_path));
			RETURN_THROWS();
		}
		/* Recorded first so an OPTION_INITIAL handler can stop() it; dropped again when AppKit refuses the key path. */
		NSArray *pair = @[target, path];
		[THIS_OBSERVER->observed addObject:pair];
		@try {
			[target addObserver:THIS_OBSERVER forKeyPath:path options:(NSKeyValueObservingOptions) options context:NULL];
		} @catch (NSException *refused) {
			[THIS_OBSERVER->observed removeObjectIdenticalTo:pair];
			@throw;
		}
	APPKIT_END
}

ZEND_METHOD(ObjCObserver, stop)
{
	zend_object *object;
	zend_string *key_path;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_OBJ_OF_CLASS(object, appkit_ce_NSObject)
		Z_PARAM_STR(key_path)
	ZEND_PARSE_PARAMETERS_END();
	APPKIT_REQUIRE_MAIN_THREAD();

	APPKIT_BEGIN
		id target = APPKIT_ID(object);
		NSString *path = appkit_nsstring(key_path);
		NSUInteger index = [THIS_OBSERVER indexOfObject:target keyPath:path];

		if (index == NSNotFound) {
			zend_throw_exception_ex(appkit_ce_AppKitException, 0, "ObjCObserver does not observe \"%s\" on this object", ZSTR_VAL(key_path));
			RETURN_THROWS();
		}
		[THIS_OBSERVER->observed removeObjectAtIndex:index];
		[target removeObserver:THIS_OBSERVER forKeyPath:path];
	APPKIT_END
}
