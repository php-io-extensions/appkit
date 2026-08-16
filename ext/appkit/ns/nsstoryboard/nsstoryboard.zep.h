
extern zend_class_entry *appkit_ns_nsstoryboard_nsstoryboard_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSStoryboard_NSStoryboard);

PHP_METHOD(AppKit_NS_NSStoryboard_NSStoryboard, main);
PHP_METHOD(AppKit_NS_NSStoryboard_NSStoryboard, withName);
PHP_METHOD(AppKit_NS_NSStoryboard_NSStoryboard, wrap);
PHP_METHOD(AppKit_NS_NSStoryboard_NSStoryboard, destroy);
PHP_METHOD(AppKit_NS_NSStoryboard_NSStoryboard, nsStoryboard);
PHP_METHOD(AppKit_NS_NSStoryboard_NSStoryboard, instantiateInitialController);
PHP_METHOD(AppKit_NS_NSStoryboard_NSStoryboard, instantiateControllerWithIdentifier);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsstoryboard_nsstoryboard_main, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsstoryboard_nsstoryboard_withname, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, bundlePath, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsstoryboard_nsstoryboard_wrap, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, nsStoryboardPtr, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsstoryboard_nsstoryboard_destroy, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, storyboard, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsstoryboard_nsstoryboard_nsstoryboard, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, storyboard, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsstoryboard_nsstoryboard_instantiateinitialcontroller, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, storyboard, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsstoryboard_nsstoryboard_instantiatecontrollerwithidentifier, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, storyboard, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, identifier, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nsstoryboard_nsstoryboard_method_entry) {
	PHP_ME(AppKit_NS_NSStoryboard_NSStoryboard, main, arginfo_appkit_ns_nsstoryboard_nsstoryboard_main, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSStoryboard_NSStoryboard, withName, arginfo_appkit_ns_nsstoryboard_nsstoryboard_withname, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSStoryboard_NSStoryboard, wrap, arginfo_appkit_ns_nsstoryboard_nsstoryboard_wrap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSStoryboard_NSStoryboard, destroy, arginfo_appkit_ns_nsstoryboard_nsstoryboard_destroy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSStoryboard_NSStoryboard, nsStoryboard, arginfo_appkit_ns_nsstoryboard_nsstoryboard_nsstoryboard, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSStoryboard_NSStoryboard, instantiateInitialController, arginfo_appkit_ns_nsstoryboard_nsstoryboard_instantiateinitialcontroller, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSStoryboard_NSStoryboard, instantiateControllerWithIdentifier, arginfo_appkit_ns_nsstoryboard_nsstoryboard_instantiatecontrollerwithidentifier, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
