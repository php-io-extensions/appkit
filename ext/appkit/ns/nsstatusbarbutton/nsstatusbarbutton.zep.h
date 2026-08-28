
extern zend_class_entry *appkit_ns_nsstatusbarbutton_nsstatusbarbutton_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSStatusBarButton_NSStatusBarButton);

PHP_METHOD(AppKit_NS_NSStatusBarButton_NSStatusBarButton, initWithFrame);
PHP_METHOD(AppKit_NS_NSStatusBarButton_NSStatusBarButton, appearsDisabled);
PHP_METHOD(AppKit_NS_NSStatusBarButton_NSStatusBarButton, setAppearsDisabled);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsstatusbarbutton_nsstatusbarbutton_initwithframe, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsstatusbarbutton_nsstatusbarbutton_appearsdisabled, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsstatusbarbutton_nsstatusbarbutton_setappearsdisabled, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, appearsDisabled, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nsstatusbarbutton_nsstatusbarbutton_method_entry) {
	PHP_ME(AppKit_NS_NSStatusBarButton_NSStatusBarButton, initWithFrame, arginfo_appkit_ns_nsstatusbarbutton_nsstatusbarbutton_initwithframe, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSStatusBarButton_NSStatusBarButton, appearsDisabled, arginfo_appkit_ns_nsstatusbarbutton_nsstatusbarbutton_appearsdisabled, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSStatusBarButton_NSStatusBarButton, setAppearsDisabled, arginfo_appkit_ns_nsstatusbarbutton_nsstatusbarbutton_setappearsdisabled, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
