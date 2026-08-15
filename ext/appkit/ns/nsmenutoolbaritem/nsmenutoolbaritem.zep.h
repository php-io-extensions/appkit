
extern zend_class_entry *appkit_ns_nsmenutoolbaritem_nsmenutoolbaritem_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSMenuToolbarItem_NSMenuToolbarItem);

PHP_METHOD(AppKit_NS_NSMenuToolbarItem_NSMenuToolbarItem, create);
PHP_METHOD(AppKit_NS_NSMenuToolbarItem_NSMenuToolbarItem, wrap);
PHP_METHOD(AppKit_NS_NSMenuToolbarItem_NSMenuToolbarItem, destroy);
PHP_METHOD(AppKit_NS_NSMenuToolbarItem_NSMenuToolbarItem, nsMenuToolbarItem);
PHP_METHOD(AppKit_NS_NSMenuToolbarItem_NSMenuToolbarItem, setShowsIndicator);
PHP_METHOD(AppKit_NS_NSMenuToolbarItem_NSMenuToolbarItem, showsIndicator);
PHP_METHOD(AppKit_NS_NSMenuToolbarItem_NSMenuToolbarItem, setLabel);
PHP_METHOD(AppKit_NS_NSMenuToolbarItem_NSMenuToolbarItem, getLabel);
PHP_METHOD(AppKit_NS_NSMenuToolbarItem_NSMenuToolbarItem, setToolTip);
PHP_METHOD(AppKit_NS_NSMenuToolbarItem_NSMenuToolbarItem, getToolTip);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsmenutoolbaritem_nsmenutoolbaritem_create, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, identifier, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsmenutoolbaritem_nsmenutoolbaritem_wrap, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, nsMenuToolbarItemPtr, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsmenutoolbaritem_nsmenutoolbaritem_destroy, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsmenutoolbaritem_nsmenutoolbaritem_nsmenutoolbaritem, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsmenutoolbaritem_nsmenutoolbaritem_setshowsindicator, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, flag, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsmenutoolbaritem_nsmenutoolbaritem_showsindicator, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsmenutoolbaritem_nsmenutoolbaritem_setlabel, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, label, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsmenutoolbaritem_nsmenutoolbaritem_getlabel, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsmenutoolbaritem_nsmenutoolbaritem_settooltip, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, tip, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsmenutoolbaritem_nsmenutoolbaritem_gettooltip, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nsmenutoolbaritem_nsmenutoolbaritem_method_entry) {
	PHP_ME(AppKit_NS_NSMenuToolbarItem_NSMenuToolbarItem, create, arginfo_appkit_ns_nsmenutoolbaritem_nsmenutoolbaritem_create, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSMenuToolbarItem_NSMenuToolbarItem, wrap, arginfo_appkit_ns_nsmenutoolbaritem_nsmenutoolbaritem_wrap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSMenuToolbarItem_NSMenuToolbarItem, destroy, arginfo_appkit_ns_nsmenutoolbaritem_nsmenutoolbaritem_destroy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSMenuToolbarItem_NSMenuToolbarItem, nsMenuToolbarItem, arginfo_appkit_ns_nsmenutoolbaritem_nsmenutoolbaritem_nsmenutoolbaritem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSMenuToolbarItem_NSMenuToolbarItem, setShowsIndicator, arginfo_appkit_ns_nsmenutoolbaritem_nsmenutoolbaritem_setshowsindicator, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSMenuToolbarItem_NSMenuToolbarItem, showsIndicator, arginfo_appkit_ns_nsmenutoolbaritem_nsmenutoolbaritem_showsindicator, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSMenuToolbarItem_NSMenuToolbarItem, setLabel, arginfo_appkit_ns_nsmenutoolbaritem_nsmenutoolbaritem_setlabel, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSMenuToolbarItem_NSMenuToolbarItem, getLabel, arginfo_appkit_ns_nsmenutoolbaritem_nsmenutoolbaritem_getlabel, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSMenuToolbarItem_NSMenuToolbarItem, setToolTip, arginfo_appkit_ns_nsmenutoolbaritem_nsmenutoolbaritem_settooltip, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSMenuToolbarItem_NSMenuToolbarItem, getToolTip, arginfo_appkit_ns_nsmenutoolbaritem_nsmenutoolbaritem_gettooltip, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
