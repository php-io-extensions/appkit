#include "runtime.h"
#include "../stubs/NSTimer_arginfo.h"

void appkit_register_NSTimer(void)
{
	appkit_ce_NSTimer = register_class_NSTimer(appkit_ce_NSObject);
	appkit_object_setup(appkit_ce_NSTimer);
	appkit_map_objc_class("NSTimer", appkit_ce_NSTimer);
}

#define THIS_TIMER ((NSTimer *) APPKIT_ID(Z_OBJ_P(ZEND_THIS)))

ZEND_METHOD(NSTimer, scheduledTimerWithTimeIntervalTargetSelectorUserInfoRepeats)
{
	double interval;
	zend_object *target;
	zend_string *selector;
	zend_object *info = NULL;
	bool repeats;

	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_DOUBLE(interval)
		Z_PARAM_OBJ_OF_CLASS(target, appkit_ce_NSObject)
		Z_PARAM_STR(selector)
		Z_PARAM_OBJ_OF_CLASS_OR_NULL(info, appkit_ce_NSObject)
		Z_PARAM_BOOL(repeats)
	ZEND_PARSE_PARAMETERS_END();

	APPKIT_BEGIN
		appkit_box_objc(return_value, [NSTimer scheduledTimerWithTimeInterval:interval target:APPKIT_ID(target) selector:sel_registerName(ZSTR_VAL(selector))
			userInfo:(info != NULL ? APPKIT_ID(info) : nil) repeats:repeats]);
	APPKIT_END
}

ZEND_METHOD(NSTimer, timerWithTimeIntervalTargetSelectorUserInfoRepeats)
{
	double interval;
	zend_object *target;
	zend_string *selector;
	zend_object *info = NULL;
	bool repeats;

	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_DOUBLE(interval)
		Z_PARAM_OBJ_OF_CLASS(target, appkit_ce_NSObject)
		Z_PARAM_STR(selector)
		Z_PARAM_OBJ_OF_CLASS_OR_NULL(info, appkit_ce_NSObject)
		Z_PARAM_BOOL(repeats)
	ZEND_PARSE_PARAMETERS_END();

	APPKIT_BEGIN
		appkit_box_objc(return_value, [NSTimer timerWithTimeInterval:interval target:APPKIT_ID(target) selector:sel_registerName(ZSTR_VAL(selector))
			userInfo:(info != NULL ? APPKIT_ID(info) : nil) repeats:repeats]);
	APPKIT_END
}

ZEND_METHOD(NSTimer, invalidate)
{
	ZEND_PARSE_PARAMETERS_NONE();

	APPKIT_BEGIN
		[THIS_TIMER invalidate];
	APPKIT_END
}

ZEND_METHOD(NSTimer, isValid)
{
	ZEND_PARSE_PARAMETERS_NONE();

	APPKIT_BEGIN
		RETURN_BOOL([THIS_TIMER isValid]);
	APPKIT_END
}
