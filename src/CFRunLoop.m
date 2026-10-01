#include "runtime.h"
#include "../stubs/CFRunLoop_arginfo.h"

void appkit_register_CFRunLoop(void)
{
	appkit_ce_CFRunLoopRunResult = register_class_CFRunLoopRunResult();

	appkit_ce_CFRunLoop = register_class_CFRunLoop(appkit_ce_CFType);
	appkit_object_setup(appkit_ce_CFRunLoop);

	appkit_ce_CFRunLoopSource = register_class_CFRunLoopSource(appkit_ce_CFType);
	appkit_object_setup(appkit_ce_CFRunLoopSource);
}

#define THIS_LOOP ((CFRunLoopRef) APPKIT_CF(Z_OBJ_P(ZEND_THIS)))
#define THIS_SOURCE ((CFRunLoopSourceRef) APPKIT_CF(Z_OBJ_P(ZEND_THIS)))

ZEND_METHOD(CFRunLoop, getMain)
{
	ZEND_PARSE_PARAMETERS_NONE();

	appkit_box_cf(return_value, CFRunLoopGetMain());
}

ZEND_METHOD(CFRunLoop, getCurrent)
{
	ZEND_PARSE_PARAMETERS_NONE();

	appkit_box_cf(return_value, CFRunLoopGetCurrent());
}

ZEND_METHOD(CFRunLoop, run)
{
	ZEND_PARSE_PARAMETERS_NONE();

	APPKIT_BEGIN
		CFRunLoopRun();
	APPKIT_END
}

ZEND_METHOD(CFRunLoop, runInMode)
{
	zend_string *mode;
	double seconds;
	bool return_after_source_handled;

	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_STR(mode)
		Z_PARAM_DOUBLE(seconds)
		Z_PARAM_BOOL(return_after_source_handled)
	ZEND_PARSE_PARAMETERS_END();

	CFStringRef cf_mode = appkit_run_loop_mode(mode);
	CFRunLoopRunResult result = kCFRunLoopRunFinished;

	@autoreleasepool {
		@try {
			result = CFRunLoopRunInMode(cf_mode, seconds, return_after_source_handled);
		} @catch (NSException *e) {
			CFRelease(cf_mode);
			appkit_throw_nsexception(e);
			RETURN_THROWS();
		}
	}

	CFRelease(cf_mode);
	appkit_return_enum(return_value, appkit_ce_CFRunLoopRunResult, (zend_long) result, false);
}

ZEND_METHOD(CFRunLoop, stop)
{
	ZEND_PARSE_PARAMETERS_NONE();

	CFRunLoopStop(THIS_LOOP);
}

ZEND_METHOD(CFRunLoop, wakeUp)
{
	ZEND_PARSE_PARAMETERS_NONE();

	CFRunLoopWakeUp(THIS_LOOP);
}

ZEND_METHOD(CFRunLoop, isWaiting)
{
	ZEND_PARSE_PARAMETERS_NONE();

	RETURN_BOOL(CFRunLoopIsWaiting(THIS_LOOP));
}

ZEND_METHOD(CFRunLoop, copyCurrentMode)
{
	ZEND_PARSE_PARAMETERS_NONE();

	CFStringRef mode = CFRunLoopCopyCurrentMode(THIS_LOOP);

	if (mode == NULL) {
		RETURN_NULL();
	}

	RETVAL_STR(appkit_zend_string(mode));
	CFRelease(mode);
}

ZEND_METHOD(CFRunLoop, addSource)
{
	zend_object *source;
	zend_string *mode;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_OBJ_OF_CLASS(source, appkit_ce_CFRunLoopSource)
		Z_PARAM_STR(mode)
	ZEND_PARSE_PARAMETERS_END();

	CFStringRef cf_mode = appkit_run_loop_mode(mode);
	CFRunLoopAddSource(THIS_LOOP, (CFRunLoopSourceRef) APPKIT_CF(source), cf_mode);
	CFRelease(cf_mode);
}

ZEND_METHOD(CFRunLoop, removeSource)
{
	zend_object *source;
	zend_string *mode;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_OBJ_OF_CLASS(source, appkit_ce_CFRunLoopSource)
		Z_PARAM_STR(mode)
	ZEND_PARSE_PARAMETERS_END();

	CFStringRef cf_mode = appkit_run_loop_mode(mode);
	CFRunLoopRemoveSource(THIS_LOOP, (CFRunLoopSourceRef) APPKIT_CF(source), cf_mode);
	CFRelease(cf_mode);
}

ZEND_METHOD(CFRunLoop, containsSource)
{
	zend_object *source;
	zend_string *mode;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_OBJ_OF_CLASS(source, appkit_ce_CFRunLoopSource)
		Z_PARAM_STR(mode)
	ZEND_PARSE_PARAMETERS_END();

	CFStringRef cf_mode = appkit_run_loop_mode(mode);
	RETVAL_BOOL(CFRunLoopContainsSource(THIS_LOOP, (CFRunLoopSourceRef) APPKIT_CF(source), cf_mode));
	CFRelease(cf_mode);
}

ZEND_METHOD(CFRunLoopSource, getOrder)
{
	ZEND_PARSE_PARAMETERS_NONE();

	RETURN_LONG((zend_long) CFRunLoopSourceGetOrder(THIS_SOURCE));
}

ZEND_METHOD(CFRunLoopSource, invalidate)
{
	ZEND_PARSE_PARAMETERS_NONE();

	CFRunLoopSourceInvalidate(THIS_SOURCE);
}

ZEND_METHOD(CFRunLoopSource, isValid)
{
	ZEND_PARSE_PARAMETERS_NONE();

	RETURN_BOOL(CFRunLoopSourceIsValid(THIS_SOURCE));
}

ZEND_METHOD(CFRunLoopSource, signal)
{
	ZEND_PARSE_PARAMETERS_NONE();

	CFRunLoopSourceSignal(THIS_SOURCE);
}
