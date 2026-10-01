/*
 * The glue every binding shares: one PHP object per native object, retained
 * while PHP holds it; NSExceptions turned into AppKitException; PHP callables
 * that native code calls back into.
 */

#ifndef APPKIT_RUNTIME_H
#define APPKIT_RUNTIME_H

#ifdef HAVE_CONFIG_H
# include "config.h"
#endif

#include "php.h"
#include "zend_enum.h"
#include "zend_exceptions.h"
#include "php_appkit.h"

#import <Foundation/Foundation.h>
#import <CoreFoundation/CoreFoundation.h>

/* A PHP callable held for native code to call back into. */
typedef struct appkit_callout {
	zval callable;                 /* UNDEF once detached at request end */
	uint32_t refcount;             /* native references to this record */
	CFTypeRef owner;               /* the native object calling back, not retained */
	void (*detach)(CFTypeRef);     /* stops owner from calling back */
	struct appkit_callout *prev;
	struct appkit_callout *next;
} appkit_callout;

ZEND_BEGIN_MODULE_GLOBALS(appkit)
	HashTable boxes;               /* native address => zend_object*, not refcounted */
	appkit_callout *callouts;      /* every callout still attached this request */
ZEND_END_MODULE_GLOBALS(appkit)

ZEND_EXTERN_MODULE_GLOBALS(appkit)
#define APPKIT_G(v) ZEND_MODULE_GLOBALS_ACCESSOR(appkit, v)

typedef struct {
	void *ptr;                     /* retained id or CFTypeRef, NULL before boxing */
	bool cf;                       /* CFRelease() on free instead of -release */
	zend_object std;
} appkit_object;

static zend_always_inline appkit_object *appkit_object_from(zend_object *obj)
{
	return (appkit_object *) ((char *) obj - XtOffsetOf(appkit_object, std));
}

#define APPKIT_ID(zobj) ((id) appkit_object_from(zobj)->ptr)
#define APPKIT_CF(zobj) ((CFTypeRef) appkit_object_from(zobj)->ptr)

extern zend_class_entry *appkit_ce_AppKitException;
extern zend_class_entry *appkit_ce_NSObject;
extern zend_class_entry *appkit_ce_NSResponder;
extern zend_class_entry *appkit_ce_NSApplication;
extern zend_class_entry *appkit_ce_NSApplicationActivationPolicy;
extern zend_class_entry *appkit_ce_NSEvent;
extern zend_class_entry *appkit_ce_NSEventType;
extern zend_class_entry *appkit_ce_NSEventMask;
extern zend_class_entry *appkit_ce_NSEventModifierFlags;
extern zend_class_entry *appkit_ce_NSDate;
extern zend_class_entry *appkit_ce_NSPoint;
extern zend_class_entry *appkit_ce_CFType;
extern zend_class_entry *appkit_ce_CFRunLoop;
extern zend_class_entry *appkit_ce_CFRunLoopRunResult;
extern zend_class_entry *appkit_ce_CFRunLoopSource;
extern zend_class_entry *appkit_ce_CFFileDescriptor;

/* Class registration, one per stub, called from MINIT in hierarchy order. */
void appkit_register_NSObject(void);
void appkit_register_NSResponder(void);
void appkit_register_NSApplication(void);
void appkit_register_NSEvent(void);
void appkit_register_NSDate(void);
void appkit_register_NSPoint(void);
void appkit_register_CFType(void);
void appkit_register_CFRunLoop(void);
void appkit_register_CFFileDescriptor(void);

/* Object model. */
void appkit_object_setup(zend_class_entry *ce);
void appkit_map_objc_class(const char *objc_class, zend_class_entry *ce);
void appkit_box_objc(zval *rv, id obj);
void appkit_box_cf(zval *rv, CFTypeRef ref);

/* Values. */
NSString *appkit_nsstring(zend_string *str);
CFStringRef appkit_run_loop_mode(zend_string *mode);
zend_string *appkit_zend_string(CFStringRef str);
const char *appkit_cfstring_constant(CFStringRef str);
zend_long appkit_enum_value(zend_object *obj_or_null, zend_long fallback);
void appkit_return_enum(zval *rv, zend_class_entry *ce, zend_long value, bool int_fallback);
bool appkit_fd_from_zval(zval *zfd, uint32_t arg_num, int *fd);

/* Errors. */
void appkit_throw_nsexception(NSException *e);
bool appkit_on_main_thread(void);

/* Callouts. */
appkit_callout *appkit_callout_new(zval *callable, void (*detach)(CFTypeRef));
const void *appkit_callout_retain(const void *info);
void appkit_callout_release(const void *info);
void appkit_callout_invoke(appkit_callout *callout, uint32_t argc, zval *argv);
void appkit_callouts_detach_all(void);

/*
 * Every binding body runs inside an autorelease pool and turns an NSException
 * into AppKitException. RETURN_* inside the body is fine: the pool drains on
 * the way out and anything returned was boxed (retained) first.
 */
#define APPKIT_BEGIN @autoreleasepool { @try {
#define APPKIT_END } @catch (NSException *appkit_exception) { appkit_throw_nsexception(appkit_exception); RETURN_THROWS(); } }

/* AppKit asserts on the main thread; this makes the refusal a PHP exception. */
#define APPKIT_REQUIRE_MAIN_THREAD() do { \
	if (!appkit_on_main_thread()) { \
		zend_throw_exception_ex(appkit_ce_AppKitException, 0, \
			"%s::%s() must be called on the main thread", \
			ZSTR_VAL(EX(func)->common.scope->name), ZSTR_VAL(EX(func)->common.function_name)); \
		RETURN_THROWS(); \
	} \
} while (0)

#endif
