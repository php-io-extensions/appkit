#include "runtime.h"
#include "controls.h"
#include "../stubs/NSProcessInfo_arginfo.h"

_Static_assert(NSActivityBackground == 0xFF && NSActivityIdleSystemSleepDisabled == 0x100000 && NSActivitySuddenTerminationDisabled == 0x4000
	&& NSActivityAutomaticTerminationDisabled == 0x8000 && NSActivityUserInitiatedAllowingIdleSystemSleep == 0xEFFFFF && NSActivityUserInitiated == 0xFFFFFF
	&& NSActivityLatencyCritical == 0xFF00000000ULL && NSActivityUserInteractive == 0xFF00FFFFFFULL && NSActivityIdleDisplaySleepDisabled == 0x10000000000ULL
	&& NSActivityAnimationTrackingEnabled == 0x200000000000ULL && NSActivityTrackingEnabled == 0x400000000000ULL, "NSActivityOptions values moved");

void appkit_register_NSProcessInfo(void)
{
	appkit_ce_NSActivityOptions = register_class_NSActivityOptions();
	APPKIT_MAP(NSProcessInfo, appkit_ce_NSObject);
}

METHOD(NSProcessInfo, processInfo, PARSE_NONE, appkit_box_objc(return_value, [NSProcessInfo processInfo]);)

ZEND_METHOD(NSProcessInfo, beginActivityWithOptionsReason)
{
	zend_object *options_case = NULL;
	zend_long options_long = 0;
	zend_string *reason;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_OBJ_OF_CLASS_OR_LONG(options_case, appkit_ce_NSActivityOptions, options_long)
		Z_PARAM_STR(reason)
	ZEND_PARSE_PARAMETERS_END();

	APPKIT_BEGIN
		id<NSObject> activity = [SELF(NSProcessInfo) beginActivityWithOptions:(NSActivityOptions) appkit_enum_value(options_case, options_long)
			reason:appkit_nsstring(reason)];
		appkit_box_objc(return_value, (id) activity);
	APPKIT_END
}

ZEND_METHOD(NSProcessInfo, endActivity)
{
	zend_object *activity;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_OBJ_OF_CLASS(activity, appkit_ce_NSObject)
	ZEND_PARSE_PARAMETERS_END();

	APPKIT_BEGIN
		[SELF(NSProcessInfo) endActivity:(id<NSObject>) APPKIT_ID(activity)];
	APPKIT_END
}
