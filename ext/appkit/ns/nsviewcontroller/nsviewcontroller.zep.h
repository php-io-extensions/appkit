
extern zend_class_entry *appkit_ns_nsviewcontroller_nsviewcontroller_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSViewController_NSViewController);

PHP_METHOD(AppKit_NS_NSViewController_NSViewController, create);
PHP_METHOD(AppKit_NS_NSViewController_NSViewController, createWithView);
PHP_METHOD(AppKit_NS_NSViewController_NSViewController, wrap);
PHP_METHOD(AppKit_NS_NSViewController_NSViewController, destroy);
PHP_METHOD(AppKit_NS_NSViewController_NSViewController, nsViewController);
PHP_METHOD(AppKit_NS_NSViewController_NSViewController, setView);
PHP_METHOD(AppKit_NS_NSViewController_NSViewController, view);
PHP_METHOD(AppKit_NS_NSViewController_NSViewController, setTitle);
PHP_METHOD(AppKit_NS_NSViewController_NSViewController, getTitle);
PHP_METHOD(AppKit_NS_NSViewController_NSViewController, isViewLoaded);
PHP_METHOD(AppKit_NS_NSViewController_NSViewController, loadViewIfNeeded);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsviewcontroller_nsviewcontroller_create, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsviewcontroller_nsviewcontroller_createwithview, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, view, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsviewcontroller_nsviewcontroller_wrap, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, nsViewControllerPtr, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsviewcontroller_nsviewcontroller_destroy, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, controller, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsviewcontroller_nsviewcontroller_nsviewcontroller, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, controller, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsviewcontroller_nsviewcontroller_setview, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, controller, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, view, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsviewcontroller_nsviewcontroller_view, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, controller, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsviewcontroller_nsviewcontroller_settitle, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, controller, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, title, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsviewcontroller_nsviewcontroller_gettitle, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, controller, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsviewcontroller_nsviewcontroller_isviewloaded, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, controller, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsviewcontroller_nsviewcontroller_loadviewifneeded, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, controller, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nsviewcontroller_nsviewcontroller_method_entry) {
	PHP_ME(AppKit_NS_NSViewController_NSViewController, create, arginfo_appkit_ns_nsviewcontroller_nsviewcontroller_create, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSViewController_NSViewController, createWithView, arginfo_appkit_ns_nsviewcontroller_nsviewcontroller_createwithview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSViewController_NSViewController, wrap, arginfo_appkit_ns_nsviewcontroller_nsviewcontroller_wrap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSViewController_NSViewController, destroy, arginfo_appkit_ns_nsviewcontroller_nsviewcontroller_destroy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSViewController_NSViewController, nsViewController, arginfo_appkit_ns_nsviewcontroller_nsviewcontroller_nsviewcontroller, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSViewController_NSViewController, setView, arginfo_appkit_ns_nsviewcontroller_nsviewcontroller_setview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSViewController_NSViewController, view, arginfo_appkit_ns_nsviewcontroller_nsviewcontroller_view, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSViewController_NSViewController, setTitle, arginfo_appkit_ns_nsviewcontroller_nsviewcontroller_settitle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSViewController_NSViewController, getTitle, arginfo_appkit_ns_nsviewcontroller_nsviewcontroller_gettitle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSViewController_NSViewController, isViewLoaded, arginfo_appkit_ns_nsviewcontroller_nsviewcontroller_isviewloaded, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSViewController_NSViewController, loadViewIfNeeded, arginfo_appkit_ns_nsviewcontroller_nsviewcontroller_loadviewifneeded, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
