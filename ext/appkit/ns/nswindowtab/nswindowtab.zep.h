
extern zend_class_entry *appkit_ns_nswindowtab_nswindowtab_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSWindowTab_NSWindowTab);

PHP_METHOD(AppKit_NS_NSWindowTab_NSWindowTab, wrap);
PHP_METHOD(AppKit_NS_NSWindowTab_NSWindowTab, destroy);
PHP_METHOD(AppKit_NS_NSWindowTab_NSWindowTab, nsWindowTab);
PHP_METHOD(AppKit_NS_NSWindowTab_NSWindowTab, title);
PHP_METHOD(AppKit_NS_NSWindowTab_NSWindowTab, setTitle);
PHP_METHOD(AppKit_NS_NSWindowTab_NSWindowTab, toolTip);
PHP_METHOD(AppKit_NS_NSWindowTab_NSWindowTab, setToolTip);
PHP_METHOD(AppKit_NS_NSWindowTab_NSWindowTab, setAccessoryView);
PHP_METHOD(AppKit_NS_NSWindowTab_NSWindowTab, accessoryView);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindowtab_nswindowtab_wrap, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, nsWindowTabPtr, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindowtab_nswindowtab_destroy, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, tab, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindowtab_nswindowtab_nswindowtab, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, tab, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindowtab_nswindowtab_title, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, tab, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindowtab_nswindowtab_settitle, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, tab, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, title, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindowtab_nswindowtab_tooltip, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, tab, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindowtab_nswindowtab_settooltip, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, tab, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, toolTip, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindowtab_nswindowtab_setaccessoryview, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, tab, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, view, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindowtab_nswindowtab_accessoryview, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, tab, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nswindowtab_nswindowtab_method_entry) {
	PHP_ME(AppKit_NS_NSWindowTab_NSWindowTab, wrap, arginfo_appkit_ns_nswindowtab_nswindowtab_wrap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindowTab_NSWindowTab, destroy, arginfo_appkit_ns_nswindowtab_nswindowtab_destroy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindowTab_NSWindowTab, nsWindowTab, arginfo_appkit_ns_nswindowtab_nswindowtab_nswindowtab, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindowTab_NSWindowTab, title, arginfo_appkit_ns_nswindowtab_nswindowtab_title, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindowTab_NSWindowTab, setTitle, arginfo_appkit_ns_nswindowtab_nswindowtab_settitle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindowTab_NSWindowTab, toolTip, arginfo_appkit_ns_nswindowtab_nswindowtab_tooltip, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindowTab_NSWindowTab, setToolTip, arginfo_appkit_ns_nswindowtab_nswindowtab_settooltip, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindowTab_NSWindowTab, setAccessoryView, arginfo_appkit_ns_nswindowtab_nswindowtab_setaccessoryview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindowTab_NSWindowTab, accessoryView, arginfo_appkit_ns_nswindowtab_nswindowtab_accessoryview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
