
extern zend_class_entry *appkit_ns_nstabviewitem_nstabviewitem_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSTabViewItem_NSTabViewItem);

PHP_METHOD(AppKit_NS_NSTabViewItem_NSTabViewItem, create);
PHP_METHOD(AppKit_NS_NSTabViewItem_NSTabViewItem, createWithViewController);
PHP_METHOD(AppKit_NS_NSTabViewItem_NSTabViewItem, wrap);
PHP_METHOD(AppKit_NS_NSTabViewItem_NSTabViewItem, destroy);
PHP_METHOD(AppKit_NS_NSTabViewItem_NSTabViewItem, nsTabViewItem);
PHP_METHOD(AppKit_NS_NSTabViewItem_NSTabViewItem, setLabel);
PHP_METHOD(AppKit_NS_NSTabViewItem_NSTabViewItem, getLabel);
PHP_METHOD(AppKit_NS_NSTabViewItem_NSTabViewItem, setToolTip);
PHP_METHOD(AppKit_NS_NSTabViewItem_NSTabViewItem, getToolTip);
PHP_METHOD(AppKit_NS_NSTabViewItem_NSTabViewItem, setView);
PHP_METHOD(AppKit_NS_NSTabViewItem_NSTabViewItem, view);
PHP_METHOD(AppKit_NS_NSTabViewItem_NSTabViewItem, setViewController);
PHP_METHOD(AppKit_NS_NSTabViewItem_NSTabViewItem, viewController);
PHP_METHOD(AppKit_NS_NSTabViewItem_NSTabViewItem, tabState);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstabviewitem_nstabviewitem_create, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, identifier, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstabviewitem_nstabviewitem_createwithviewcontroller, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, viewController, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstabviewitem_nstabviewitem_wrap, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, nsTabViewItemPtr, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstabviewitem_nstabviewitem_destroy, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstabviewitem_nstabviewitem_nstabviewitem, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstabviewitem_nstabviewitem_setlabel, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, label, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstabviewitem_nstabviewitem_getlabel, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstabviewitem_nstabviewitem_settooltip, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, tip, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstabviewitem_nstabviewitem_gettooltip, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstabviewitem_nstabviewitem_setview, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, view, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstabviewitem_nstabviewitem_view, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstabviewitem_nstabviewitem_setviewcontroller, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, viewController, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstabviewitem_nstabviewitem_viewcontroller, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstabviewitem_nstabviewitem_tabstate, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nstabviewitem_nstabviewitem_method_entry) {
	PHP_ME(AppKit_NS_NSTabViewItem_NSTabViewItem, create, arginfo_appkit_ns_nstabviewitem_nstabviewitem_create, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTabViewItem_NSTabViewItem, createWithViewController, arginfo_appkit_ns_nstabviewitem_nstabviewitem_createwithviewcontroller, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTabViewItem_NSTabViewItem, wrap, arginfo_appkit_ns_nstabviewitem_nstabviewitem_wrap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTabViewItem_NSTabViewItem, destroy, arginfo_appkit_ns_nstabviewitem_nstabviewitem_destroy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTabViewItem_NSTabViewItem, nsTabViewItem, arginfo_appkit_ns_nstabviewitem_nstabviewitem_nstabviewitem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTabViewItem_NSTabViewItem, setLabel, arginfo_appkit_ns_nstabviewitem_nstabviewitem_setlabel, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTabViewItem_NSTabViewItem, getLabel, arginfo_appkit_ns_nstabviewitem_nstabviewitem_getlabel, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTabViewItem_NSTabViewItem, setToolTip, arginfo_appkit_ns_nstabviewitem_nstabviewitem_settooltip, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTabViewItem_NSTabViewItem, getToolTip, arginfo_appkit_ns_nstabviewitem_nstabviewitem_gettooltip, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTabViewItem_NSTabViewItem, setView, arginfo_appkit_ns_nstabviewitem_nstabviewitem_setview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTabViewItem_NSTabViewItem, view, arginfo_appkit_ns_nstabviewitem_nstabviewitem_view, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTabViewItem_NSTabViewItem, setViewController, arginfo_appkit_ns_nstabviewitem_nstabviewitem_setviewcontroller, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTabViewItem_NSTabViewItem, viewController, arginfo_appkit_ns_nstabviewitem_nstabviewitem_viewcontroller, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTabViewItem_NSTabViewItem, tabState, arginfo_appkit_ns_nstabviewitem_nstabviewitem_tabstate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
