/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: f195a69a59b264721ad898cc835cb975f0eece30 */

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NSProcessInfo_processInfo, 0, 0, NSProcessInfo, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NSProcessInfo_beginActivityWithOptionsReason, 0, 2, NSObject, 0)
	ZEND_ARG_OBJ_TYPE_MASK(0, options, NSActivityOptions, MAY_BE_LONG, NULL)
	ZEND_ARG_TYPE_INFO(0, reason, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSProcessInfo_endActivity, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, activity, NSObject, 0)
ZEND_END_ARG_INFO()

ZEND_METHOD(NSProcessInfo, processInfo);
ZEND_METHOD(NSProcessInfo, beginActivityWithOptionsReason);
ZEND_METHOD(NSProcessInfo, endActivity);

static const zend_function_entry class_NSProcessInfo_methods[] = {
	ZEND_ME(NSProcessInfo, processInfo, arginfo_class_NSProcessInfo_processInfo, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(NSProcessInfo, beginActivityWithOptionsReason, arginfo_class_NSProcessInfo_beginActivityWithOptionsReason, ZEND_ACC_PUBLIC)
	ZEND_ME(NSProcessInfo, endActivity, arginfo_class_NSProcessInfo_endActivity, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static zend_class_entry *register_class_NSActivityOptions(void)
{
	zend_class_entry *class_entry = zend_register_internal_enum("NSActivityOptions", IS_LONG, NULL);

	zval enum_case_BACKGROUND_value;
	ZVAL_LONG(&enum_case_BACKGROUND_value, 0xff);
	zend_enum_add_case_cstr(class_entry, "BACKGROUND", &enum_case_BACKGROUND_value);

	zval enum_case_IDLE_SYSTEM_SLEEP_DISABLED_value;
	ZVAL_LONG(&enum_case_IDLE_SYSTEM_SLEEP_DISABLED_value, 0x100000);
	zend_enum_add_case_cstr(class_entry, "IDLE_SYSTEM_SLEEP_DISABLED", &enum_case_IDLE_SYSTEM_SLEEP_DISABLED_value);

	zval enum_case_SUDDEN_TERMINATION_DISABLED_value;
	ZVAL_LONG(&enum_case_SUDDEN_TERMINATION_DISABLED_value, 0x4000);
	zend_enum_add_case_cstr(class_entry, "SUDDEN_TERMINATION_DISABLED", &enum_case_SUDDEN_TERMINATION_DISABLED_value);

	zval enum_case_AUTOMATIC_TERMINATION_DISABLED_value;
	ZVAL_LONG(&enum_case_AUTOMATIC_TERMINATION_DISABLED_value, 0x8000);
	zend_enum_add_case_cstr(class_entry, "AUTOMATIC_TERMINATION_DISABLED", &enum_case_AUTOMATIC_TERMINATION_DISABLED_value);

	zval enum_case_USER_INITIATED_ALLOWING_IDLE_SYSTEM_SLEEP_value;
	ZVAL_LONG(&enum_case_USER_INITIATED_ALLOWING_IDLE_SYSTEM_SLEEP_value, 0xefffff);
	zend_enum_add_case_cstr(class_entry, "USER_INITIATED_ALLOWING_IDLE_SYSTEM_SLEEP", &enum_case_USER_INITIATED_ALLOWING_IDLE_SYSTEM_SLEEP_value);

	zval enum_case_USER_INITIATED_value;
	ZVAL_LONG(&enum_case_USER_INITIATED_value, 0xffffff);
	zend_enum_add_case_cstr(class_entry, "USER_INITIATED", &enum_case_USER_INITIATED_value);

	zval enum_case_LATENCY_CRITICAL_value;
	ZVAL_LONG(&enum_case_LATENCY_CRITICAL_value, 0xff00000000);
	zend_enum_add_case_cstr(class_entry, "LATENCY_CRITICAL", &enum_case_LATENCY_CRITICAL_value);

	zval enum_case_USER_INTERACTIVE_value;
	ZVAL_LONG(&enum_case_USER_INTERACTIVE_value, 0xff00ffffff);
	zend_enum_add_case_cstr(class_entry, "USER_INTERACTIVE", &enum_case_USER_INTERACTIVE_value);

	zval enum_case_IDLE_DISPLAY_SLEEP_DISABLED_value;
	ZVAL_LONG(&enum_case_IDLE_DISPLAY_SLEEP_DISABLED_value, 0x10000000000);
	zend_enum_add_case_cstr(class_entry, "IDLE_DISPLAY_SLEEP_DISABLED", &enum_case_IDLE_DISPLAY_SLEEP_DISABLED_value);

	zval enum_case_ANIMATION_TRACKING_ENABLED_value;
	ZVAL_LONG(&enum_case_ANIMATION_TRACKING_ENABLED_value, 0x200000000000);
	zend_enum_add_case_cstr(class_entry, "ANIMATION_TRACKING_ENABLED", &enum_case_ANIMATION_TRACKING_ENABLED_value);

	zval enum_case_TRACKING_ENABLED_value;
	ZVAL_LONG(&enum_case_TRACKING_ENABLED_value, 0x400000000000);
	zend_enum_add_case_cstr(class_entry, "TRACKING_ENABLED", &enum_case_TRACKING_ENABLED_value);

	return class_entry;
}

static zend_class_entry *register_class_NSProcessInfo(zend_class_entry *class_entry_NSObject)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "NSProcessInfo", class_NSProcessInfo_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, class_entry_NSObject, ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}
