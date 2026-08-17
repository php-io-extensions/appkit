
extern zend_class_entry *appkit_ns_nsmenu_nsmenu_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSMenu_NSMenu);

PHP_METHOD(AppKit_NS_NSMenu_NSMenu, installDefault);
PHP_METHOD(AppKit_NS_NSMenu_NSMenu, addItem);
PHP_METHOD(AppKit_NS_NSMenu_NSMenu, enableAbout);
PHP_METHOD(AppKit_NS_NSMenu_NSMenu, pollAction);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsmenu_nsmenu_installdefault, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, appName, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsmenu_nsmenu_additem, 0, 4, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, menuTitle, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, itemTitle, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, keyEquivalent, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, actionId, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsmenu_nsmenu_enableabout, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, enabled, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, actionId, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsmenu_nsmenu_pollaction, 0, 0, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nsmenu_nsmenu_method_entry) {
	PHP_ME(AppKit_NS_NSMenu_NSMenu, installDefault, arginfo_appkit_ns_nsmenu_nsmenu_installdefault, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSMenu_NSMenu, addItem, arginfo_appkit_ns_nsmenu_nsmenu_additem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSMenu_NSMenu, enableAbout, arginfo_appkit_ns_nsmenu_nsmenu_enableabout, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSMenu_NSMenu, pollAction, arginfo_appkit_ns_nsmenu_nsmenu_pollaction, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
