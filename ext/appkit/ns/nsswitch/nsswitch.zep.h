
extern zend_class_entry *appkit_ns_nsswitch_nsswitch_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSSwitch_NSSwitch);

PHP_METHOD(AppKit_NS_NSSwitch_NSSwitch, create);
PHP_METHOD(AppKit_NS_NSSwitch_NSSwitch, destroy);
PHP_METHOD(AppKit_NS_NSSwitch_NSSwitch, setOn);
PHP_METHOD(AppKit_NS_NSSwitch_NSSwitch, isOn);
PHP_METHOD(AppKit_NS_NSSwitch_NSSwitch, pollChange);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsswitch_nsswitch_create, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsswitch_nsswitch_destroy, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, toggle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsswitch_nsswitch_seton, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, toggle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, on, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsswitch_nsswitch_ison, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, toggle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsswitch_nsswitch_pollchange, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, toggle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nsswitch_nsswitch_method_entry) {
	PHP_ME(AppKit_NS_NSSwitch_NSSwitch, create, arginfo_appkit_ns_nsswitch_nsswitch_create, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSwitch_NSSwitch, destroy, arginfo_appkit_ns_nsswitch_nsswitch_destroy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSwitch_NSSwitch, setOn, arginfo_appkit_ns_nsswitch_nsswitch_seton, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSwitch_NSSwitch, isOn, arginfo_appkit_ns_nsswitch_nsswitch_ison, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSwitch_NSSwitch, pollChange, arginfo_appkit_ns_nsswitch_nsswitch_pollchange, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
