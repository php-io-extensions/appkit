
extern zend_class_entry *appkit_ns_nstoolbaritem_nstoolbaritem_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSToolbarItem_NSToolbarItem);

PHP_METHOD(AppKit_NS_NSToolbarItem_NSToolbarItem, initWithItemIdentifier);
PHP_METHOD(AppKit_NS_NSToolbarItem_NSToolbarItem, itemIdentifier);
PHP_METHOD(AppKit_NS_NSToolbarItem_NSToolbarItem, toolbar);
PHP_METHOD(AppKit_NS_NSToolbarItem_NSToolbarItem, label);
PHP_METHOD(AppKit_NS_NSToolbarItem_NSToolbarItem, setLabel);
PHP_METHOD(AppKit_NS_NSToolbarItem_NSToolbarItem, paletteLabel);
PHP_METHOD(AppKit_NS_NSToolbarItem_NSToolbarItem, setPaletteLabel);
PHP_METHOD(AppKit_NS_NSToolbarItem_NSToolbarItem, possibleLabels);
PHP_METHOD(AppKit_NS_NSToolbarItem_NSToolbarItem, setPossibleLabels);
PHP_METHOD(AppKit_NS_NSToolbarItem_NSToolbarItem, toolTip);
PHP_METHOD(AppKit_NS_NSToolbarItem_NSToolbarItem, setToolTip);
PHP_METHOD(AppKit_NS_NSToolbarItem_NSToolbarItem, menuFormRepresentation);
PHP_METHOD(AppKit_NS_NSToolbarItem_NSToolbarItem, setMenuFormRepresentation);
PHP_METHOD(AppKit_NS_NSToolbarItem_NSToolbarItem, tag);
PHP_METHOD(AppKit_NS_NSToolbarItem_NSToolbarItem, setTag);
PHP_METHOD(AppKit_NS_NSToolbarItem_NSToolbarItem, target);
PHP_METHOD(AppKit_NS_NSToolbarItem_NSToolbarItem, setTarget);
PHP_METHOD(AppKit_NS_NSToolbarItem_NSToolbarItem, action);
PHP_METHOD(AppKit_NS_NSToolbarItem_NSToolbarItem, setAction);
PHP_METHOD(AppKit_NS_NSToolbarItem_NSToolbarItem, isEnabled);
PHP_METHOD(AppKit_NS_NSToolbarItem_NSToolbarItem, setEnabled);
PHP_METHOD(AppKit_NS_NSToolbarItem_NSToolbarItem, image);
PHP_METHOD(AppKit_NS_NSToolbarItem_NSToolbarItem, setImage);
PHP_METHOD(AppKit_NS_NSToolbarItem_NSToolbarItem, title);
PHP_METHOD(AppKit_NS_NSToolbarItem_NSToolbarItem, setTitle);
PHP_METHOD(AppKit_NS_NSToolbarItem_NSToolbarItem, isBordered);
PHP_METHOD(AppKit_NS_NSToolbarItem_NSToolbarItem, setBordered);
PHP_METHOD(AppKit_NS_NSToolbarItem_NSToolbarItem, isNavigational);
PHP_METHOD(AppKit_NS_NSToolbarItem_NSToolbarItem, setNavigational);
PHP_METHOD(AppKit_NS_NSToolbarItem_NSToolbarItem, view);
PHP_METHOD(AppKit_NS_NSToolbarItem_NSToolbarItem, setView);
PHP_METHOD(AppKit_NS_NSToolbarItem_NSToolbarItem, isVisible);
PHP_METHOD(AppKit_NS_NSToolbarItem_NSToolbarItem, isHidden);
PHP_METHOD(AppKit_NS_NSToolbarItem_NSToolbarItem, setHidden);
PHP_METHOD(AppKit_NS_NSToolbarItem_NSToolbarItem, visibilityPriority);
PHP_METHOD(AppKit_NS_NSToolbarItem_NSToolbarItem, setVisibilityPriority);
PHP_METHOD(AppKit_NS_NSToolbarItem_NSToolbarItem, validate);
PHP_METHOD(AppKit_NS_NSToolbarItem_NSToolbarItem, autovalidates);
PHP_METHOD(AppKit_NS_NSToolbarItem_NSToolbarItem, setAutovalidates);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstoolbaritem_nstoolbaritem_initwithitemidentifier, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, itemIdentifier, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstoolbaritem_nstoolbaritem_itemidentifier, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstoolbaritem_nstoolbaritem_toolbar, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstoolbaritem_nstoolbaritem_label, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstoolbaritem_nstoolbaritem_setlabel, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, label, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstoolbaritem_nstoolbaritem_palettelabel, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstoolbaritem_nstoolbaritem_setpalettelabel, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, paletteLabel, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstoolbaritem_nstoolbaritem_possiblelabels, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstoolbaritem_nstoolbaritem_setpossiblelabels, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, possibleLabels, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_appkit_ns_nstoolbaritem_nstoolbaritem_tooltip, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstoolbaritem_nstoolbaritem_settooltip, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, toolTip)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstoolbaritem_nstoolbaritem_menuformrepresentation, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstoolbaritem_nstoolbaritem_setmenuformrepresentation, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, menuFormRepresentation, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstoolbaritem_nstoolbaritem_tag, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstoolbaritem_nstoolbaritem_settag, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, tag, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstoolbaritem_nstoolbaritem_target, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstoolbaritem_nstoolbaritem_settarget, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, target, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_appkit_ns_nstoolbaritem_nstoolbaritem_action, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstoolbaritem_nstoolbaritem_setaction, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, action)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstoolbaritem_nstoolbaritem_isenabled, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstoolbaritem_nstoolbaritem_setenabled, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, enabled, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstoolbaritem_nstoolbaritem_image, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstoolbaritem_nstoolbaritem_setimage, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, image, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstoolbaritem_nstoolbaritem_title, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstoolbaritem_nstoolbaritem_settitle, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, title, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstoolbaritem_nstoolbaritem_isbordered, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstoolbaritem_nstoolbaritem_setbordered, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, bordered, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstoolbaritem_nstoolbaritem_isnavigational, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstoolbaritem_nstoolbaritem_setnavigational, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, navigational, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstoolbaritem_nstoolbaritem_view, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstoolbaritem_nstoolbaritem_setview, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, view, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstoolbaritem_nstoolbaritem_isvisible, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstoolbaritem_nstoolbaritem_ishidden, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstoolbaritem_nstoolbaritem_sethidden, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, hidden, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstoolbaritem_nstoolbaritem_visibilitypriority, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstoolbaritem_nstoolbaritem_setvisibilitypriority, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, visibilityPriority, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstoolbaritem_nstoolbaritem_validate, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstoolbaritem_nstoolbaritem_autovalidates, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstoolbaritem_nstoolbaritem_setautovalidates, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, autovalidates, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nstoolbaritem_nstoolbaritem_method_entry) {
	PHP_ME(AppKit_NS_NSToolbarItem_NSToolbarItem, initWithItemIdentifier, arginfo_appkit_ns_nstoolbaritem_nstoolbaritem_initwithitemidentifier, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSToolbarItem_NSToolbarItem, itemIdentifier, arginfo_appkit_ns_nstoolbaritem_nstoolbaritem_itemidentifier, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSToolbarItem_NSToolbarItem, toolbar, arginfo_appkit_ns_nstoolbaritem_nstoolbaritem_toolbar, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSToolbarItem_NSToolbarItem, label, arginfo_appkit_ns_nstoolbaritem_nstoolbaritem_label, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSToolbarItem_NSToolbarItem, setLabel, arginfo_appkit_ns_nstoolbaritem_nstoolbaritem_setlabel, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSToolbarItem_NSToolbarItem, paletteLabel, arginfo_appkit_ns_nstoolbaritem_nstoolbaritem_palettelabel, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSToolbarItem_NSToolbarItem, setPaletteLabel, arginfo_appkit_ns_nstoolbaritem_nstoolbaritem_setpalettelabel, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSToolbarItem_NSToolbarItem, possibleLabels, arginfo_appkit_ns_nstoolbaritem_nstoolbaritem_possiblelabels, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSToolbarItem_NSToolbarItem, setPossibleLabels, arginfo_appkit_ns_nstoolbaritem_nstoolbaritem_setpossiblelabels, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSToolbarItem_NSToolbarItem, toolTip, arginfo_appkit_ns_nstoolbaritem_nstoolbaritem_tooltip, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSToolbarItem_NSToolbarItem, setToolTip, arginfo_appkit_ns_nstoolbaritem_nstoolbaritem_settooltip, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSToolbarItem_NSToolbarItem, menuFormRepresentation, arginfo_appkit_ns_nstoolbaritem_nstoolbaritem_menuformrepresentation, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSToolbarItem_NSToolbarItem, setMenuFormRepresentation, arginfo_appkit_ns_nstoolbaritem_nstoolbaritem_setmenuformrepresentation, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSToolbarItem_NSToolbarItem, tag, arginfo_appkit_ns_nstoolbaritem_nstoolbaritem_tag, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSToolbarItem_NSToolbarItem, setTag, arginfo_appkit_ns_nstoolbaritem_nstoolbaritem_settag, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSToolbarItem_NSToolbarItem, target, arginfo_appkit_ns_nstoolbaritem_nstoolbaritem_target, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSToolbarItem_NSToolbarItem, setTarget, arginfo_appkit_ns_nstoolbaritem_nstoolbaritem_settarget, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSToolbarItem_NSToolbarItem, action, arginfo_appkit_ns_nstoolbaritem_nstoolbaritem_action, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSToolbarItem_NSToolbarItem, setAction, arginfo_appkit_ns_nstoolbaritem_nstoolbaritem_setaction, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSToolbarItem_NSToolbarItem, isEnabled, arginfo_appkit_ns_nstoolbaritem_nstoolbaritem_isenabled, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSToolbarItem_NSToolbarItem, setEnabled, arginfo_appkit_ns_nstoolbaritem_nstoolbaritem_setenabled, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSToolbarItem_NSToolbarItem, image, arginfo_appkit_ns_nstoolbaritem_nstoolbaritem_image, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSToolbarItem_NSToolbarItem, setImage, arginfo_appkit_ns_nstoolbaritem_nstoolbaritem_setimage, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSToolbarItem_NSToolbarItem, title, arginfo_appkit_ns_nstoolbaritem_nstoolbaritem_title, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSToolbarItem_NSToolbarItem, setTitle, arginfo_appkit_ns_nstoolbaritem_nstoolbaritem_settitle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSToolbarItem_NSToolbarItem, isBordered, arginfo_appkit_ns_nstoolbaritem_nstoolbaritem_isbordered, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSToolbarItem_NSToolbarItem, setBordered, arginfo_appkit_ns_nstoolbaritem_nstoolbaritem_setbordered, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSToolbarItem_NSToolbarItem, isNavigational, arginfo_appkit_ns_nstoolbaritem_nstoolbaritem_isnavigational, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSToolbarItem_NSToolbarItem, setNavigational, arginfo_appkit_ns_nstoolbaritem_nstoolbaritem_setnavigational, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSToolbarItem_NSToolbarItem, view, arginfo_appkit_ns_nstoolbaritem_nstoolbaritem_view, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSToolbarItem_NSToolbarItem, setView, arginfo_appkit_ns_nstoolbaritem_nstoolbaritem_setview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSToolbarItem_NSToolbarItem, isVisible, arginfo_appkit_ns_nstoolbaritem_nstoolbaritem_isvisible, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSToolbarItem_NSToolbarItem, isHidden, arginfo_appkit_ns_nstoolbaritem_nstoolbaritem_ishidden, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSToolbarItem_NSToolbarItem, setHidden, arginfo_appkit_ns_nstoolbaritem_nstoolbaritem_sethidden, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSToolbarItem_NSToolbarItem, visibilityPriority, arginfo_appkit_ns_nstoolbaritem_nstoolbaritem_visibilitypriority, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSToolbarItem_NSToolbarItem, setVisibilityPriority, arginfo_appkit_ns_nstoolbaritem_nstoolbaritem_setvisibilitypriority, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSToolbarItem_NSToolbarItem, validate, arginfo_appkit_ns_nstoolbaritem_nstoolbaritem_validate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSToolbarItem_NSToolbarItem, autovalidates, arginfo_appkit_ns_nstoolbaritem_nstoolbaritem_autovalidates, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSToolbarItem_NSToolbarItem, setAutovalidates, arginfo_appkit_ns_nstoolbaritem_nstoolbaritem_setautovalidates, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
