
extern zend_class_entry *appkit_ns_nsdatepicker_nsdatepicker_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSDatePicker_NSDatePicker);

PHP_METHOD(AppKit_NS_NSDatePicker_NSDatePicker, create);
PHP_METHOD(AppKit_NS_NSDatePicker_NSDatePicker, destroy);
PHP_METHOD(AppKit_NS_NSDatePicker_NSDatePicker, setTimestamp);
PHP_METHOD(AppKit_NS_NSDatePicker_NSDatePicker, getTimestamp);
PHP_METHOD(AppKit_NS_NSDatePicker_NSDatePicker, pollChange);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsdatepicker_nsdatepicker_create, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsdatepicker_nsdatepicker_destroy, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, picker, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsdatepicker_nsdatepicker_settimestamp, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, picker, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, timestamp, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsdatepicker_nsdatepicker_gettimestamp, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, picker, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsdatepicker_nsdatepicker_pollchange, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, picker, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nsdatepicker_nsdatepicker_method_entry) {
	PHP_ME(AppKit_NS_NSDatePicker_NSDatePicker, create, arginfo_appkit_ns_nsdatepicker_nsdatepicker_create, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSDatePicker_NSDatePicker, destroy, arginfo_appkit_ns_nsdatepicker_nsdatepicker_destroy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSDatePicker_NSDatePicker, setTimestamp, arginfo_appkit_ns_nsdatepicker_nsdatepicker_settimestamp, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSDatePicker_NSDatePicker, getTimestamp, arginfo_appkit_ns_nsdatepicker_nsdatepicker_gettimestamp, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSDatePicker_NSDatePicker, pollChange, arginfo_appkit_ns_nsdatepicker_nsdatepicker_pollchange, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
