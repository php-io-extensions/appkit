
extern zend_class_entry *appkit_ns_nsswitch_nsswitch_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSSwitch_NSSwitch);

PHP_METHOD(AppKit_NS_NSSwitch_NSSwitch, initWithFrame);
PHP_METHOD(AppKit_NS_NSSwitch_NSSwitch, state);
PHP_METHOD(AppKit_NS_NSSwitch_NSSwitch, setState);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsswitch_nsswitch_initwithframe, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsswitch_nsswitch_state, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsswitch_nsswitch_setstate, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, state, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nsswitch_nsswitch_method_entry) {
	PHP_ME(AppKit_NS_NSSwitch_NSSwitch, initWithFrame, arginfo_appkit_ns_nsswitch_nsswitch_initwithframe, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSwitch_NSSwitch, state, arginfo_appkit_ns_nsswitch_nsswitch_state, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSwitch_NSSwitch, setState, arginfo_appkit_ns_nsswitch_nsswitch_setstate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
