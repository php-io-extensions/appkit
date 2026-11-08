/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: 120a6fc5116dc35834fc84cc964293befd54e687 */

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NSTimer_timerWithTimeIntervalTargetSelectorUserInfoRepeats, 0, 5, NSTimer, 0)
	ZEND_ARG_TYPE_INFO(0, ti, IS_DOUBLE, 0)
	ZEND_ARG_OBJ_INFO(0, aTarget, NSObject, 0)
	ZEND_ARG_TYPE_INFO(0, aSelector, IS_STRING, 0)
	ZEND_ARG_OBJ_INFO(0, userInfo, NSObject, 1)
	ZEND_ARG_TYPE_INFO(0, yesOrNo, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_NSTimer_scheduledTimerWithTimeIntervalTargetSelectorUserInfoRepeats arginfo_class_NSTimer_timerWithTimeIntervalTargetSelectorUserInfoRepeats

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSTimer_invalidate, 0, 0, IS_VOID, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSTimer_isValid, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_METHOD(NSTimer, timerWithTimeIntervalTargetSelectorUserInfoRepeats);
ZEND_METHOD(NSTimer, scheduledTimerWithTimeIntervalTargetSelectorUserInfoRepeats);
ZEND_METHOD(NSTimer, invalidate);
ZEND_METHOD(NSTimer, isValid);

static const zend_function_entry class_NSTimer_methods[] = {
	ZEND_ME(NSTimer, timerWithTimeIntervalTargetSelectorUserInfoRepeats, arginfo_class_NSTimer_timerWithTimeIntervalTargetSelectorUserInfoRepeats, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(NSTimer, scheduledTimerWithTimeIntervalTargetSelectorUserInfoRepeats, arginfo_class_NSTimer_scheduledTimerWithTimeIntervalTargetSelectorUserInfoRepeats, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(NSTimer, invalidate, arginfo_class_NSTimer_invalidate, ZEND_ACC_PUBLIC)
	ZEND_ME(NSTimer, isValid, arginfo_class_NSTimer_isValid, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static zend_class_entry *register_class_NSTimer(zend_class_entry *class_entry_NSObject)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "NSTimer", class_NSTimer_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, class_entry_NSObject, ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}
