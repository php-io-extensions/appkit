
extern zend_class_entry *appkit_ns_nstoolbaritem_nstoolbaritem_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSToolbarItem_NSToolbarItem);

PHP_METHOD(AppKit_NS_NSToolbarItem_NSToolbarItem, create);
PHP_METHOD(AppKit_NS_NSToolbarItem_NSToolbarItem, wrap);
PHP_METHOD(AppKit_NS_NSToolbarItem_NSToolbarItem, destroy);
PHP_METHOD(AppKit_NS_NSToolbarItem_NSToolbarItem, nsToolbarItem);
PHP_METHOD(AppKit_NS_NSToolbarItem_NSToolbarItem, getItemIdentifier);
PHP_METHOD(AppKit_NS_NSToolbarItem_NSToolbarItem, setLabel);
PHP_METHOD(AppKit_NS_NSToolbarItem_NSToolbarItem, getLabel);
PHP_METHOD(AppKit_NS_NSToolbarItem_NSToolbarItem, setPaletteLabel);
PHP_METHOD(AppKit_NS_NSToolbarItem_NSToolbarItem, getPaletteLabel);
PHP_METHOD(AppKit_NS_NSToolbarItem_NSToolbarItem, setToolTip);
PHP_METHOD(AppKit_NS_NSToolbarItem_NSToolbarItem, getToolTip);
PHP_METHOD(AppKit_NS_NSToolbarItem_NSToolbarItem, setTag);
PHP_METHOD(AppKit_NS_NSToolbarItem_NSToolbarItem, getTag);
PHP_METHOD(AppKit_NS_NSToolbarItem_NSToolbarItem, setEnabled);
PHP_METHOD(AppKit_NS_NSToolbarItem_NSToolbarItem, isEnabled);
PHP_METHOD(AppKit_NS_NSToolbarItem_NSToolbarItem, setTitle);
PHP_METHOD(AppKit_NS_NSToolbarItem_NSToolbarItem, getTitle);
PHP_METHOD(AppKit_NS_NSToolbarItem_NSToolbarItem, setBordered);
PHP_METHOD(AppKit_NS_NSToolbarItem_NSToolbarItem, isBordered);
PHP_METHOD(AppKit_NS_NSToolbarItem_NSToolbarItem, setNavigational);
PHP_METHOD(AppKit_NS_NSToolbarItem_NSToolbarItem, isNavigational);
PHP_METHOD(AppKit_NS_NSToolbarItem_NSToolbarItem, setHidden);
PHP_METHOD(AppKit_NS_NSToolbarItem_NSToolbarItem, isHidden);
PHP_METHOD(AppKit_NS_NSToolbarItem_NSToolbarItem, setVisibilityPriority);
PHP_METHOD(AppKit_NS_NSToolbarItem_NSToolbarItem, getVisibilityPriority);
PHP_METHOD(AppKit_NS_NSToolbarItem_NSToolbarItem, setAutovalidates);
PHP_METHOD(AppKit_NS_NSToolbarItem_NSToolbarItem, autovalidates);
PHP_METHOD(AppKit_NS_NSToolbarItem_NSToolbarItem, isVisible);
PHP_METHOD(AppKit_NS_NSToolbarItem_NSToolbarItem, setImage);
PHP_METHOD(AppKit_NS_NSToolbarItem_NSToolbarItem, setView);
PHP_METHOD(AppKit_NS_NSToolbarItem_NSToolbarItem, getView);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstoolbaritem_nstoolbaritem_create, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, identifier, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstoolbaritem_nstoolbaritem_wrap, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, nsToolbarItemPtr, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstoolbaritem_nstoolbaritem_destroy, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstoolbaritem_nstoolbaritem_nstoolbaritem, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstoolbaritem_nstoolbaritem_getitemidentifier, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstoolbaritem_nstoolbaritem_setlabel, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, label, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstoolbaritem_nstoolbaritem_getlabel, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstoolbaritem_nstoolbaritem_setpalettelabel, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, label, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstoolbaritem_nstoolbaritem_getpalettelabel, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstoolbaritem_nstoolbaritem_settooltip, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, tip, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstoolbaritem_nstoolbaritem_gettooltip, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstoolbaritem_nstoolbaritem_settag, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, tag, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstoolbaritem_nstoolbaritem_gettag, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstoolbaritem_nstoolbaritem_setenabled, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, flag, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstoolbaritem_nstoolbaritem_isenabled, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstoolbaritem_nstoolbaritem_settitle, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, title, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstoolbaritem_nstoolbaritem_gettitle, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstoolbaritem_nstoolbaritem_setbordered, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, flag, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstoolbaritem_nstoolbaritem_isbordered, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstoolbaritem_nstoolbaritem_setnavigational, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, flag, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstoolbaritem_nstoolbaritem_isnavigational, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstoolbaritem_nstoolbaritem_sethidden, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, flag, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstoolbaritem_nstoolbaritem_ishidden, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstoolbaritem_nstoolbaritem_setvisibilitypriority, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, priority, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstoolbaritem_nstoolbaritem_getvisibilitypriority, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstoolbaritem_nstoolbaritem_setautovalidates, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, flag, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstoolbaritem_nstoolbaritem_autovalidates, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstoolbaritem_nstoolbaritem_isvisible, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstoolbaritem_nstoolbaritem_setimage, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, image, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstoolbaritem_nstoolbaritem_setview, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, view, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstoolbaritem_nstoolbaritem_getview, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nstoolbaritem_nstoolbaritem_method_entry) {
	PHP_ME(AppKit_NS_NSToolbarItem_NSToolbarItem, create, arginfo_appkit_ns_nstoolbaritem_nstoolbaritem_create, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSToolbarItem_NSToolbarItem, wrap, arginfo_appkit_ns_nstoolbaritem_nstoolbaritem_wrap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSToolbarItem_NSToolbarItem, destroy, arginfo_appkit_ns_nstoolbaritem_nstoolbaritem_destroy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSToolbarItem_NSToolbarItem, nsToolbarItem, arginfo_appkit_ns_nstoolbaritem_nstoolbaritem_nstoolbaritem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSToolbarItem_NSToolbarItem, getItemIdentifier, arginfo_appkit_ns_nstoolbaritem_nstoolbaritem_getitemidentifier, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSToolbarItem_NSToolbarItem, setLabel, arginfo_appkit_ns_nstoolbaritem_nstoolbaritem_setlabel, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSToolbarItem_NSToolbarItem, getLabel, arginfo_appkit_ns_nstoolbaritem_nstoolbaritem_getlabel, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSToolbarItem_NSToolbarItem, setPaletteLabel, arginfo_appkit_ns_nstoolbaritem_nstoolbaritem_setpalettelabel, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSToolbarItem_NSToolbarItem, getPaletteLabel, arginfo_appkit_ns_nstoolbaritem_nstoolbaritem_getpalettelabel, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSToolbarItem_NSToolbarItem, setToolTip, arginfo_appkit_ns_nstoolbaritem_nstoolbaritem_settooltip, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSToolbarItem_NSToolbarItem, getToolTip, arginfo_appkit_ns_nstoolbaritem_nstoolbaritem_gettooltip, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSToolbarItem_NSToolbarItem, setTag, arginfo_appkit_ns_nstoolbaritem_nstoolbaritem_settag, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSToolbarItem_NSToolbarItem, getTag, arginfo_appkit_ns_nstoolbaritem_nstoolbaritem_gettag, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSToolbarItem_NSToolbarItem, setEnabled, arginfo_appkit_ns_nstoolbaritem_nstoolbaritem_setenabled, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSToolbarItem_NSToolbarItem, isEnabled, arginfo_appkit_ns_nstoolbaritem_nstoolbaritem_isenabled, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSToolbarItem_NSToolbarItem, setTitle, arginfo_appkit_ns_nstoolbaritem_nstoolbaritem_settitle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSToolbarItem_NSToolbarItem, getTitle, arginfo_appkit_ns_nstoolbaritem_nstoolbaritem_gettitle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSToolbarItem_NSToolbarItem, setBordered, arginfo_appkit_ns_nstoolbaritem_nstoolbaritem_setbordered, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSToolbarItem_NSToolbarItem, isBordered, arginfo_appkit_ns_nstoolbaritem_nstoolbaritem_isbordered, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSToolbarItem_NSToolbarItem, setNavigational, arginfo_appkit_ns_nstoolbaritem_nstoolbaritem_setnavigational, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSToolbarItem_NSToolbarItem, isNavigational, arginfo_appkit_ns_nstoolbaritem_nstoolbaritem_isnavigational, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSToolbarItem_NSToolbarItem, setHidden, arginfo_appkit_ns_nstoolbaritem_nstoolbaritem_sethidden, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSToolbarItem_NSToolbarItem, isHidden, arginfo_appkit_ns_nstoolbaritem_nstoolbaritem_ishidden, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSToolbarItem_NSToolbarItem, setVisibilityPriority, arginfo_appkit_ns_nstoolbaritem_nstoolbaritem_setvisibilitypriority, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSToolbarItem_NSToolbarItem, getVisibilityPriority, arginfo_appkit_ns_nstoolbaritem_nstoolbaritem_getvisibilitypriority, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSToolbarItem_NSToolbarItem, setAutovalidates, arginfo_appkit_ns_nstoolbaritem_nstoolbaritem_setautovalidates, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSToolbarItem_NSToolbarItem, autovalidates, arginfo_appkit_ns_nstoolbaritem_nstoolbaritem_autovalidates, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSToolbarItem_NSToolbarItem, isVisible, arginfo_appkit_ns_nstoolbaritem_nstoolbaritem_isvisible, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSToolbarItem_NSToolbarItem, setImage, arginfo_appkit_ns_nstoolbaritem_nstoolbaritem_setimage, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSToolbarItem_NSToolbarItem, setView, arginfo_appkit_ns_nstoolbaritem_nstoolbaritem_setview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSToolbarItem_NSToolbarItem, getView, arginfo_appkit_ns_nstoolbaritem_nstoolbaritem_getview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
