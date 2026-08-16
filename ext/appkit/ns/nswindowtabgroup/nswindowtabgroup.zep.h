
extern zend_class_entry *appkit_ns_nswindowtabgroup_nswindowtabgroup_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSWindowTabGroup_NSWindowTabGroup);

PHP_METHOD(AppKit_NS_NSWindowTabGroup_NSWindowTabGroup, wrap);
PHP_METHOD(AppKit_NS_NSWindowTabGroup_NSWindowTabGroup, destroy);
PHP_METHOD(AppKit_NS_NSWindowTabGroup_NSWindowTabGroup, nsWindowTabGroup);
PHP_METHOD(AppKit_NS_NSWindowTabGroup_NSWindowTabGroup, identifier);
PHP_METHOD(AppKit_NS_NSWindowTabGroup_NSWindowTabGroup, windowsCount);
PHP_METHOD(AppKit_NS_NSWindowTabGroup_NSWindowTabGroup, windowAt);
PHP_METHOD(AppKit_NS_NSWindowTabGroup_NSWindowTabGroup, isOverviewVisible);
PHP_METHOD(AppKit_NS_NSWindowTabGroup_NSWindowTabGroup, setOverviewVisible);
PHP_METHOD(AppKit_NS_NSWindowTabGroup_NSWindowTabGroup, isTabBarVisible);
PHP_METHOD(AppKit_NS_NSWindowTabGroup_NSWindowTabGroup, selectedWindow);
PHP_METHOD(AppKit_NS_NSWindowTabGroup_NSWindowTabGroup, setSelectedWindow);
PHP_METHOD(AppKit_NS_NSWindowTabGroup_NSWindowTabGroup, addWindow);
PHP_METHOD(AppKit_NS_NSWindowTabGroup_NSWindowTabGroup, insertWindow);
PHP_METHOD(AppKit_NS_NSWindowTabGroup_NSWindowTabGroup, removeWindow);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindowtabgroup_nswindowtabgroup_wrap, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, nsWindowTabGroupPtr, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindowtabgroup_nswindowtabgroup_destroy, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, group, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindowtabgroup_nswindowtabgroup_nswindowtabgroup, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, group, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindowtabgroup_nswindowtabgroup_identifier, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, group, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindowtabgroup_nswindowtabgroup_windowscount, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, group, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindowtabgroup_nswindowtabgroup_windowat, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, group, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindowtabgroup_nswindowtabgroup_isoverviewvisible, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, group, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindowtabgroup_nswindowtabgroup_setoverviewvisible, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, group, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, visible, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindowtabgroup_nswindowtabgroup_istabbarvisible, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, group, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindowtabgroup_nswindowtabgroup_selectedwindow, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, group, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindowtabgroup_nswindowtabgroup_setselectedwindow, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, group, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, window, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindowtabgroup_nswindowtabgroup_addwindow, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, group, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, window, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindowtabgroup_nswindowtabgroup_insertwindow, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, group, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, window, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindowtabgroup_nswindowtabgroup_removewindow, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, group, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, window, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nswindowtabgroup_nswindowtabgroup_method_entry) {
	PHP_ME(AppKit_NS_NSWindowTabGroup_NSWindowTabGroup, wrap, arginfo_appkit_ns_nswindowtabgroup_nswindowtabgroup_wrap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindowTabGroup_NSWindowTabGroup, destroy, arginfo_appkit_ns_nswindowtabgroup_nswindowtabgroup_destroy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindowTabGroup_NSWindowTabGroup, nsWindowTabGroup, arginfo_appkit_ns_nswindowtabgroup_nswindowtabgroup_nswindowtabgroup, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindowTabGroup_NSWindowTabGroup, identifier, arginfo_appkit_ns_nswindowtabgroup_nswindowtabgroup_identifier, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindowTabGroup_NSWindowTabGroup, windowsCount, arginfo_appkit_ns_nswindowtabgroup_nswindowtabgroup_windowscount, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindowTabGroup_NSWindowTabGroup, windowAt, arginfo_appkit_ns_nswindowtabgroup_nswindowtabgroup_windowat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindowTabGroup_NSWindowTabGroup, isOverviewVisible, arginfo_appkit_ns_nswindowtabgroup_nswindowtabgroup_isoverviewvisible, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindowTabGroup_NSWindowTabGroup, setOverviewVisible, arginfo_appkit_ns_nswindowtabgroup_nswindowtabgroup_setoverviewvisible, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindowTabGroup_NSWindowTabGroup, isTabBarVisible, arginfo_appkit_ns_nswindowtabgroup_nswindowtabgroup_istabbarvisible, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindowTabGroup_NSWindowTabGroup, selectedWindow, arginfo_appkit_ns_nswindowtabgroup_nswindowtabgroup_selectedwindow, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindowTabGroup_NSWindowTabGroup, setSelectedWindow, arginfo_appkit_ns_nswindowtabgroup_nswindowtabgroup_setselectedwindow, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindowTabGroup_NSWindowTabGroup, addWindow, arginfo_appkit_ns_nswindowtabgroup_nswindowtabgroup_addwindow, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindowTabGroup_NSWindowTabGroup, insertWindow, arginfo_appkit_ns_nswindowtabgroup_nswindowtabgroup_insertwindow, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindowTabGroup_NSWindowTabGroup, removeWindow, arginfo_appkit_ns_nswindowtabgroup_nswindowtabgroup_removewindow, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
