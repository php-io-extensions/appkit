
extern zend_class_entry *appkit_ns_nstoolbar_nstoolbar_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSToolbar_NSToolbar);

PHP_METHOD(AppKit_NS_NSToolbar_NSToolbar, create);
PHP_METHOD(AppKit_NS_NSToolbar_NSToolbar, destroy);
PHP_METHOD(AppKit_NS_NSToolbar_NSToolbar, addItem);
PHP_METHOD(AppKit_NS_NSToolbar_NSToolbar, install);
PHP_METHOD(AppKit_NS_NSToolbar_NSToolbar, pollAction);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstoolbar_nstoolbar_create, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstoolbar_nstoolbar_destroy, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, toolbar, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstoolbar_nstoolbar_additem, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, toolbar, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, title, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, actionId, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstoolbar_nstoolbar_install, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, toolbar, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, window, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstoolbar_nstoolbar_pollaction, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, toolbar, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nstoolbar_nstoolbar_method_entry) {
	PHP_ME(AppKit_NS_NSToolbar_NSToolbar, create, arginfo_appkit_ns_nstoolbar_nstoolbar_create, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSToolbar_NSToolbar, destroy, arginfo_appkit_ns_nstoolbar_nstoolbar_destroy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSToolbar_NSToolbar, addItem, arginfo_appkit_ns_nstoolbar_nstoolbar_additem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSToolbar_NSToolbar, install, arginfo_appkit_ns_nstoolbar_nstoolbar_install, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSToolbar_NSToolbar, pollAction, arginfo_appkit_ns_nstoolbar_nstoolbar_pollaction, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
