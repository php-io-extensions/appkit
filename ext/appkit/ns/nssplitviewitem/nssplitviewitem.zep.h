
extern zend_class_entry *appkit_ns_nssplitviewitem_nssplitviewitem_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSSplitViewItem_NSSplitViewItem);

PHP_METHOD(AppKit_NS_NSSplitViewItem_NSSplitViewItem, create);
PHP_METHOD(AppKit_NS_NSSplitViewItem_NSSplitViewItem, createSidebar);
PHP_METHOD(AppKit_NS_NSSplitViewItem_NSSplitViewItem, createContentList);
PHP_METHOD(AppKit_NS_NSSplitViewItem_NSSplitViewItem, createInspector);
PHP_METHOD(AppKit_NS_NSSplitViewItem_NSSplitViewItem, wrap);
PHP_METHOD(AppKit_NS_NSSplitViewItem_NSSplitViewItem, destroy);
PHP_METHOD(AppKit_NS_NSSplitViewItem_NSSplitViewItem, nsSplitViewItem);
PHP_METHOD(AppKit_NS_NSSplitViewItem_NSSplitViewItem, setViewController);
PHP_METHOD(AppKit_NS_NSSplitViewItem_NSSplitViewItem, viewController);
PHP_METHOD(AppKit_NS_NSSplitViewItem_NSSplitViewItem, setCollapsed);
PHP_METHOD(AppKit_NS_NSSplitViewItem_NSSplitViewItem, isCollapsed);
PHP_METHOD(AppKit_NS_NSSplitViewItem_NSSplitViewItem, setCanCollapse);
PHP_METHOD(AppKit_NS_NSSplitViewItem_NSSplitViewItem, canCollapse);
PHP_METHOD(AppKit_NS_NSSplitViewItem_NSSplitViewItem, setMinimumThickness);
PHP_METHOD(AppKit_NS_NSSplitViewItem_NSSplitViewItem, getMinimumThickness);
PHP_METHOD(AppKit_NS_NSSplitViewItem_NSSplitViewItem, setMaximumThickness);
PHP_METHOD(AppKit_NS_NSSplitViewItem_NSSplitViewItem, getMaximumThickness);
PHP_METHOD(AppKit_NS_NSSplitViewItem_NSSplitViewItem, setPreferredThicknessFraction);
PHP_METHOD(AppKit_NS_NSSplitViewItem_NSSplitViewItem, getPreferredThicknessFraction);
PHP_METHOD(AppKit_NS_NSSplitViewItem_NSSplitViewItem, setHoldingPriority);
PHP_METHOD(AppKit_NS_NSSplitViewItem_NSSplitViewItem, getHoldingPriority);
PHP_METHOD(AppKit_NS_NSSplitViewItem_NSSplitViewItem, setSpringLoaded);
PHP_METHOD(AppKit_NS_NSSplitViewItem_NSSplitViewItem, isSpringLoaded);
PHP_METHOD(AppKit_NS_NSSplitViewItem_NSSplitViewItem, getBehavior);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssplitviewitem_nssplitviewitem_create, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, viewController, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssplitviewitem_nssplitviewitem_createsidebar, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, viewController, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssplitviewitem_nssplitviewitem_createcontentlist, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, viewController, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssplitviewitem_nssplitviewitem_createinspector, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, viewController, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssplitviewitem_nssplitviewitem_wrap, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, nsSplitViewItemPtr, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssplitviewitem_nssplitviewitem_destroy, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssplitviewitem_nssplitviewitem_nssplitviewitem, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssplitviewitem_nssplitviewitem_setviewcontroller, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, viewController, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssplitviewitem_nssplitviewitem_viewcontroller, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssplitviewitem_nssplitviewitem_setcollapsed, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, flag, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssplitviewitem_nssplitviewitem_iscollapsed, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssplitviewitem_nssplitviewitem_setcancollapse, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, flag, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssplitviewitem_nssplitviewitem_cancollapse, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssplitviewitem_nssplitviewitem_setminimumthickness, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssplitviewitem_nssplitviewitem_getminimumthickness, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssplitviewitem_nssplitviewitem_setmaximumthickness, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssplitviewitem_nssplitviewitem_getmaximumthickness, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssplitviewitem_nssplitviewitem_setpreferredthicknessfraction, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssplitviewitem_nssplitviewitem_getpreferredthicknessfraction, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssplitviewitem_nssplitviewitem_setholdingpriority, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, priority, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssplitviewitem_nssplitviewitem_getholdingpriority, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssplitviewitem_nssplitviewitem_setspringloaded, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, flag, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssplitviewitem_nssplitviewitem_isspringloaded, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssplitviewitem_nssplitviewitem_getbehavior, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nssplitviewitem_nssplitviewitem_method_entry) {
	PHP_ME(AppKit_NS_NSSplitViewItem_NSSplitViewItem, create, arginfo_appkit_ns_nssplitviewitem_nssplitviewitem_create, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSplitViewItem_NSSplitViewItem, createSidebar, arginfo_appkit_ns_nssplitviewitem_nssplitviewitem_createsidebar, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSplitViewItem_NSSplitViewItem, createContentList, arginfo_appkit_ns_nssplitviewitem_nssplitviewitem_createcontentlist, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSplitViewItem_NSSplitViewItem, createInspector, arginfo_appkit_ns_nssplitviewitem_nssplitviewitem_createinspector, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSplitViewItem_NSSplitViewItem, wrap, arginfo_appkit_ns_nssplitviewitem_nssplitviewitem_wrap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSplitViewItem_NSSplitViewItem, destroy, arginfo_appkit_ns_nssplitviewitem_nssplitviewitem_destroy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSplitViewItem_NSSplitViewItem, nsSplitViewItem, arginfo_appkit_ns_nssplitviewitem_nssplitviewitem_nssplitviewitem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSplitViewItem_NSSplitViewItem, setViewController, arginfo_appkit_ns_nssplitviewitem_nssplitviewitem_setviewcontroller, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSplitViewItem_NSSplitViewItem, viewController, arginfo_appkit_ns_nssplitviewitem_nssplitviewitem_viewcontroller, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSplitViewItem_NSSplitViewItem, setCollapsed, arginfo_appkit_ns_nssplitviewitem_nssplitviewitem_setcollapsed, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSplitViewItem_NSSplitViewItem, isCollapsed, arginfo_appkit_ns_nssplitviewitem_nssplitviewitem_iscollapsed, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSplitViewItem_NSSplitViewItem, setCanCollapse, arginfo_appkit_ns_nssplitviewitem_nssplitviewitem_setcancollapse, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSplitViewItem_NSSplitViewItem, canCollapse, arginfo_appkit_ns_nssplitviewitem_nssplitviewitem_cancollapse, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSplitViewItem_NSSplitViewItem, setMinimumThickness, arginfo_appkit_ns_nssplitviewitem_nssplitviewitem_setminimumthickness, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSplitViewItem_NSSplitViewItem, getMinimumThickness, arginfo_appkit_ns_nssplitviewitem_nssplitviewitem_getminimumthickness, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSplitViewItem_NSSplitViewItem, setMaximumThickness, arginfo_appkit_ns_nssplitviewitem_nssplitviewitem_setmaximumthickness, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSplitViewItem_NSSplitViewItem, getMaximumThickness, arginfo_appkit_ns_nssplitviewitem_nssplitviewitem_getmaximumthickness, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSplitViewItem_NSSplitViewItem, setPreferredThicknessFraction, arginfo_appkit_ns_nssplitviewitem_nssplitviewitem_setpreferredthicknessfraction, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSplitViewItem_NSSplitViewItem, getPreferredThicknessFraction, arginfo_appkit_ns_nssplitviewitem_nssplitviewitem_getpreferredthicknessfraction, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSplitViewItem_NSSplitViewItem, setHoldingPriority, arginfo_appkit_ns_nssplitviewitem_nssplitviewitem_setholdingpriority, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSplitViewItem_NSSplitViewItem, getHoldingPriority, arginfo_appkit_ns_nssplitviewitem_nssplitviewitem_getholdingpriority, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSplitViewItem_NSSplitViewItem, setSpringLoaded, arginfo_appkit_ns_nssplitviewitem_nssplitviewitem_setspringloaded, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSplitViewItem_NSSplitViewItem, isSpringLoaded, arginfo_appkit_ns_nssplitviewitem_nssplitviewitem_isspringloaded, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSplitViewItem_NSSplitViewItem, getBehavior, arginfo_appkit_ns_nssplitviewitem_nssplitviewitem_getbehavior, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
