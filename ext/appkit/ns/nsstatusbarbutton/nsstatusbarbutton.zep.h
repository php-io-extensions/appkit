
extern zend_class_entry *appkit_ns_nsstatusbarbutton_nsstatusbarbutton_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSStatusBarButton_NSStatusBarButton);

PHP_METHOD(AppKit_NS_NSStatusBarButton_NSStatusBarButton, wrap);
PHP_METHOD(AppKit_NS_NSStatusBarButton_NSStatusBarButton, fromStatusItem);
PHP_METHOD(AppKit_NS_NSStatusBarButton_NSStatusBarButton, destroy);
PHP_METHOD(AppKit_NS_NSStatusBarButton_NSStatusBarButton, setTitle);
PHP_METHOD(AppKit_NS_NSStatusBarButton_NSStatusBarButton, getTitle);
PHP_METHOD(AppKit_NS_NSStatusBarButton_NSStatusBarButton, setAppearsDisabled);
PHP_METHOD(AppKit_NS_NSStatusBarButton_NSStatusBarButton, appearsDisabled);
PHP_METHOD(AppKit_NS_NSStatusBarButton_NSStatusBarButton, setImage);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsstatusbarbutton_nsstatusbarbutton_wrap, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, nsStatusBarButtonPtr, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsstatusbarbutton_nsstatusbarbutton_fromstatusitem, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsstatusbarbutton_nsstatusbarbutton_destroy, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, button, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsstatusbarbutton_nsstatusbarbutton_settitle, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, button, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, title, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsstatusbarbutton_nsstatusbarbutton_gettitle, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, button, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsstatusbarbutton_nsstatusbarbutton_setappearsdisabled, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, button, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, flag, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsstatusbarbutton_nsstatusbarbutton_appearsdisabled, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, button, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsstatusbarbutton_nsstatusbarbutton_setimage, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, button, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, image, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nsstatusbarbutton_nsstatusbarbutton_method_entry) {
	PHP_ME(AppKit_NS_NSStatusBarButton_NSStatusBarButton, wrap, arginfo_appkit_ns_nsstatusbarbutton_nsstatusbarbutton_wrap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSStatusBarButton_NSStatusBarButton, fromStatusItem, arginfo_appkit_ns_nsstatusbarbutton_nsstatusbarbutton_fromstatusitem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSStatusBarButton_NSStatusBarButton, destroy, arginfo_appkit_ns_nsstatusbarbutton_nsstatusbarbutton_destroy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSStatusBarButton_NSStatusBarButton, setTitle, arginfo_appkit_ns_nsstatusbarbutton_nsstatusbarbutton_settitle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSStatusBarButton_NSStatusBarButton, getTitle, arginfo_appkit_ns_nsstatusbarbutton_nsstatusbarbutton_gettitle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSStatusBarButton_NSStatusBarButton, setAppearsDisabled, arginfo_appkit_ns_nsstatusbarbutton_nsstatusbarbutton_setappearsdisabled, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSStatusBarButton_NSStatusBarButton, appearsDisabled, arginfo_appkit_ns_nsstatusbarbutton_nsstatusbarbutton_appearsdisabled, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSStatusBarButton_NSStatusBarButton, setImage, arginfo_appkit_ns_nsstatusbarbutton_nsstatusbarbutton_setimage, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
