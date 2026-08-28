
extern zend_class_entry *appkit_ns_nsmenuitem_nsmenuitem_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSMenuItem_NSMenuItem);

PHP_METHOD(AppKit_NS_NSMenuItem_NSMenuItem, usesUserKeyEquivalents);
PHP_METHOD(AppKit_NS_NSMenuItem_NSMenuItem, setUsesUserKeyEquivalents);
PHP_METHOD(AppKit_NS_NSMenuItem_NSMenuItem, separatorItem);
PHP_METHOD(AppKit_NS_NSMenuItem_NSMenuItem, sectionHeaderWithTitle);
PHP_METHOD(AppKit_NS_NSMenuItem_NSMenuItem, writingToolsItems);
PHP_METHOD(AppKit_NS_NSMenuItem_NSMenuItem, initWithTitleActionKeyEquivalent);
PHP_METHOD(AppKit_NS_NSMenuItem_NSMenuItem, menu);
PHP_METHOD(AppKit_NS_NSMenuItem_NSMenuItem, setMenu);
PHP_METHOD(AppKit_NS_NSMenuItem_NSMenuItem, hasSubmenu);
PHP_METHOD(AppKit_NS_NSMenuItem_NSMenuItem, submenu);
PHP_METHOD(AppKit_NS_NSMenuItem_NSMenuItem, setSubmenu);
PHP_METHOD(AppKit_NS_NSMenuItem_NSMenuItem, parentItem);
PHP_METHOD(AppKit_NS_NSMenuItem_NSMenuItem, title);
PHP_METHOD(AppKit_NS_NSMenuItem_NSMenuItem, setTitle);
PHP_METHOD(AppKit_NS_NSMenuItem_NSMenuItem, subtitle);
PHP_METHOD(AppKit_NS_NSMenuItem_NSMenuItem, setSubtitle);
PHP_METHOD(AppKit_NS_NSMenuItem_NSMenuItem, isSeparatorItem);
PHP_METHOD(AppKit_NS_NSMenuItem_NSMenuItem, isSectionHeader);
PHP_METHOD(AppKit_NS_NSMenuItem_NSMenuItem, keyEquivalent);
PHP_METHOD(AppKit_NS_NSMenuItem_NSMenuItem, setKeyEquivalent);
PHP_METHOD(AppKit_NS_NSMenuItem_NSMenuItem, keyEquivalentModifierMask);
PHP_METHOD(AppKit_NS_NSMenuItem_NSMenuItem, setKeyEquivalentModifierMask);
PHP_METHOD(AppKit_NS_NSMenuItem_NSMenuItem, userKeyEquivalent);
PHP_METHOD(AppKit_NS_NSMenuItem_NSMenuItem, allowsKeyEquivalentWhenHidden);
PHP_METHOD(AppKit_NS_NSMenuItem_NSMenuItem, setAllowsKeyEquivalentWhenHidden);
PHP_METHOD(AppKit_NS_NSMenuItem_NSMenuItem, allowsAutomaticKeyEquivalentLocalization);
PHP_METHOD(AppKit_NS_NSMenuItem_NSMenuItem, setAllowsAutomaticKeyEquivalentLocalization);
PHP_METHOD(AppKit_NS_NSMenuItem_NSMenuItem, allowsAutomaticKeyEquivalentMirroring);
PHP_METHOD(AppKit_NS_NSMenuItem_NSMenuItem, setAllowsAutomaticKeyEquivalentMirroring);
PHP_METHOD(AppKit_NS_NSMenuItem_NSMenuItem, image);
PHP_METHOD(AppKit_NS_NSMenuItem_NSMenuItem, setImage);
PHP_METHOD(AppKit_NS_NSMenuItem_NSMenuItem, state);
PHP_METHOD(AppKit_NS_NSMenuItem_NSMenuItem, setState);
PHP_METHOD(AppKit_NS_NSMenuItem_NSMenuItem, onStateImage);
PHP_METHOD(AppKit_NS_NSMenuItem_NSMenuItem, setOnStateImage);
PHP_METHOD(AppKit_NS_NSMenuItem_NSMenuItem, offStateImage);
PHP_METHOD(AppKit_NS_NSMenuItem_NSMenuItem, setOffStateImage);
PHP_METHOD(AppKit_NS_NSMenuItem_NSMenuItem, mixedStateImage);
PHP_METHOD(AppKit_NS_NSMenuItem_NSMenuItem, setMixedStateImage);
PHP_METHOD(AppKit_NS_NSMenuItem_NSMenuItem, isEnabled);
PHP_METHOD(AppKit_NS_NSMenuItem_NSMenuItem, setEnabled);
PHP_METHOD(AppKit_NS_NSMenuItem_NSMenuItem, isAlternate);
PHP_METHOD(AppKit_NS_NSMenuItem_NSMenuItem, setAlternate);
PHP_METHOD(AppKit_NS_NSMenuItem_NSMenuItem, indentationLevel);
PHP_METHOD(AppKit_NS_NSMenuItem_NSMenuItem, setIndentationLevel);
PHP_METHOD(AppKit_NS_NSMenuItem_NSMenuItem, target);
PHP_METHOD(AppKit_NS_NSMenuItem_NSMenuItem, setTarget);
PHP_METHOD(AppKit_NS_NSMenuItem_NSMenuItem, action);
PHP_METHOD(AppKit_NS_NSMenuItem_NSMenuItem, setAction);
PHP_METHOD(AppKit_NS_NSMenuItem_NSMenuItem, tag);
PHP_METHOD(AppKit_NS_NSMenuItem_NSMenuItem, setTag);
PHP_METHOD(AppKit_NS_NSMenuItem_NSMenuItem, representedObject);
PHP_METHOD(AppKit_NS_NSMenuItem_NSMenuItem, setRepresentedObject);
PHP_METHOD(AppKit_NS_NSMenuItem_NSMenuItem, view);
PHP_METHOD(AppKit_NS_NSMenuItem_NSMenuItem, setView);
PHP_METHOD(AppKit_NS_NSMenuItem_NSMenuItem, isHighlighted);
PHP_METHOD(AppKit_NS_NSMenuItem_NSMenuItem, isHidden);
PHP_METHOD(AppKit_NS_NSMenuItem_NSMenuItem, setHidden);
PHP_METHOD(AppKit_NS_NSMenuItem_NSMenuItem, isHiddenOrHasHiddenAncestor);
PHP_METHOD(AppKit_NS_NSMenuItem_NSMenuItem, toolTip);
PHP_METHOD(AppKit_NS_NSMenuItem_NSMenuItem, setToolTip);
PHP_METHOD(AppKit_NS_NSMenuItem_NSMenuItem, badge);
PHP_METHOD(AppKit_NS_NSMenuItem_NSMenuItem, setBadge);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsmenuitem_nsmenuitem_usesuserkeyequivalents, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsmenuitem_nsmenuitem_setusesuserkeyequivalents, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, flag, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsmenuitem_nsmenuitem_separatoritem, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsmenuitem_nsmenuitem_sectionheaderwithtitle, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, title, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsmenuitem_nsmenuitem_writingtoolsitems, 0, 0, IS_ARRAY, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsmenuitem_nsmenuitem_initwithtitleactionkeyequivalent, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, title, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, action, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, keyEquivalent, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsmenuitem_nsmenuitem_menu, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsmenuitem_nsmenuitem_setmenu, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, menu, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsmenuitem_nsmenuitem_hassubmenu, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsmenuitem_nsmenuitem_submenu, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsmenuitem_nsmenuitem_setsubmenu, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, submenu, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsmenuitem_nsmenuitem_parentitem, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsmenuitem_nsmenuitem_title, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsmenuitem_nsmenuitem_settitle, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, title, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_appkit_ns_nsmenuitem_nsmenuitem_subtitle, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsmenuitem_nsmenuitem_setsubtitle, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, subtitle)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsmenuitem_nsmenuitem_isseparatoritem, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsmenuitem_nsmenuitem_issectionheader, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsmenuitem_nsmenuitem_keyequivalent, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsmenuitem_nsmenuitem_setkeyequivalent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, keyEquivalent, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsmenuitem_nsmenuitem_keyequivalentmodifiermask, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsmenuitem_nsmenuitem_setkeyequivalentmodifiermask, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, mask, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsmenuitem_nsmenuitem_userkeyequivalent, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsmenuitem_nsmenuitem_allowskeyequivalentwhenhidden, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsmenuitem_nsmenuitem_setallowskeyequivalentwhenhidden, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, flag, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsmenuitem_nsmenuitem_allowsautomatickeyequivalentlocalization, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsmenuitem_nsmenuitem_setallowsautomatickeyequivalentlocalization, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, flag, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsmenuitem_nsmenuitem_allowsautomatickeyequivalentmirroring, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsmenuitem_nsmenuitem_setallowsautomatickeyequivalentmirroring, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, flag, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsmenuitem_nsmenuitem_image, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsmenuitem_nsmenuitem_setimage, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, image, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsmenuitem_nsmenuitem_state, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsmenuitem_nsmenuitem_setstate, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, state, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsmenuitem_nsmenuitem_onstateimage, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsmenuitem_nsmenuitem_setonstateimage, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, image, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsmenuitem_nsmenuitem_offstateimage, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsmenuitem_nsmenuitem_setoffstateimage, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, image, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsmenuitem_nsmenuitem_mixedstateimage, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsmenuitem_nsmenuitem_setmixedstateimage, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, image, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsmenuitem_nsmenuitem_isenabled, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsmenuitem_nsmenuitem_setenabled, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, flag, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsmenuitem_nsmenuitem_isalternate, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsmenuitem_nsmenuitem_setalternate, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, flag, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsmenuitem_nsmenuitem_indentationlevel, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsmenuitem_nsmenuitem_setindentationlevel, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, level, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsmenuitem_nsmenuitem_target, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsmenuitem_nsmenuitem_settarget, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, target, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_appkit_ns_nsmenuitem_nsmenuitem_action, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsmenuitem_nsmenuitem_setaction, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, action)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsmenuitem_nsmenuitem_tag, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsmenuitem_nsmenuitem_settag, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, tag, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsmenuitem_nsmenuitem_representedobject, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsmenuitem_nsmenuitem_setrepresentedobject, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, representedObject, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsmenuitem_nsmenuitem_view, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsmenuitem_nsmenuitem_setview, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, view, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsmenuitem_nsmenuitem_ishighlighted, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsmenuitem_nsmenuitem_ishidden, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsmenuitem_nsmenuitem_sethidden, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, flag, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsmenuitem_nsmenuitem_ishiddenorhashiddenancestor, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_appkit_ns_nsmenuitem_nsmenuitem_tooltip, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsmenuitem_nsmenuitem_settooltip, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, toolTip)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsmenuitem_nsmenuitem_badge, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsmenuitem_nsmenuitem_setbadge, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, badge, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nsmenuitem_nsmenuitem_method_entry) {
	PHP_ME(AppKit_NS_NSMenuItem_NSMenuItem, usesUserKeyEquivalents, arginfo_appkit_ns_nsmenuitem_nsmenuitem_usesuserkeyequivalents, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSMenuItem_NSMenuItem, setUsesUserKeyEquivalents, arginfo_appkit_ns_nsmenuitem_nsmenuitem_setusesuserkeyequivalents, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSMenuItem_NSMenuItem, separatorItem, arginfo_appkit_ns_nsmenuitem_nsmenuitem_separatoritem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSMenuItem_NSMenuItem, sectionHeaderWithTitle, arginfo_appkit_ns_nsmenuitem_nsmenuitem_sectionheaderwithtitle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSMenuItem_NSMenuItem, writingToolsItems, arginfo_appkit_ns_nsmenuitem_nsmenuitem_writingtoolsitems, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSMenuItem_NSMenuItem, initWithTitleActionKeyEquivalent, arginfo_appkit_ns_nsmenuitem_nsmenuitem_initwithtitleactionkeyequivalent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSMenuItem_NSMenuItem, menu, arginfo_appkit_ns_nsmenuitem_nsmenuitem_menu, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSMenuItem_NSMenuItem, setMenu, arginfo_appkit_ns_nsmenuitem_nsmenuitem_setmenu, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSMenuItem_NSMenuItem, hasSubmenu, arginfo_appkit_ns_nsmenuitem_nsmenuitem_hassubmenu, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSMenuItem_NSMenuItem, submenu, arginfo_appkit_ns_nsmenuitem_nsmenuitem_submenu, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSMenuItem_NSMenuItem, setSubmenu, arginfo_appkit_ns_nsmenuitem_nsmenuitem_setsubmenu, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSMenuItem_NSMenuItem, parentItem, arginfo_appkit_ns_nsmenuitem_nsmenuitem_parentitem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSMenuItem_NSMenuItem, title, arginfo_appkit_ns_nsmenuitem_nsmenuitem_title, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSMenuItem_NSMenuItem, setTitle, arginfo_appkit_ns_nsmenuitem_nsmenuitem_settitle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSMenuItem_NSMenuItem, subtitle, arginfo_appkit_ns_nsmenuitem_nsmenuitem_subtitle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSMenuItem_NSMenuItem, setSubtitle, arginfo_appkit_ns_nsmenuitem_nsmenuitem_setsubtitle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSMenuItem_NSMenuItem, isSeparatorItem, arginfo_appkit_ns_nsmenuitem_nsmenuitem_isseparatoritem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSMenuItem_NSMenuItem, isSectionHeader, arginfo_appkit_ns_nsmenuitem_nsmenuitem_issectionheader, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSMenuItem_NSMenuItem, keyEquivalent, arginfo_appkit_ns_nsmenuitem_nsmenuitem_keyequivalent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSMenuItem_NSMenuItem, setKeyEquivalent, arginfo_appkit_ns_nsmenuitem_nsmenuitem_setkeyequivalent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSMenuItem_NSMenuItem, keyEquivalentModifierMask, arginfo_appkit_ns_nsmenuitem_nsmenuitem_keyequivalentmodifiermask, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSMenuItem_NSMenuItem, setKeyEquivalentModifierMask, arginfo_appkit_ns_nsmenuitem_nsmenuitem_setkeyequivalentmodifiermask, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSMenuItem_NSMenuItem, userKeyEquivalent, arginfo_appkit_ns_nsmenuitem_nsmenuitem_userkeyequivalent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSMenuItem_NSMenuItem, allowsKeyEquivalentWhenHidden, arginfo_appkit_ns_nsmenuitem_nsmenuitem_allowskeyequivalentwhenhidden, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSMenuItem_NSMenuItem, setAllowsKeyEquivalentWhenHidden, arginfo_appkit_ns_nsmenuitem_nsmenuitem_setallowskeyequivalentwhenhidden, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSMenuItem_NSMenuItem, allowsAutomaticKeyEquivalentLocalization, arginfo_appkit_ns_nsmenuitem_nsmenuitem_allowsautomatickeyequivalentlocalization, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSMenuItem_NSMenuItem, setAllowsAutomaticKeyEquivalentLocalization, arginfo_appkit_ns_nsmenuitem_nsmenuitem_setallowsautomatickeyequivalentlocalization, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSMenuItem_NSMenuItem, allowsAutomaticKeyEquivalentMirroring, arginfo_appkit_ns_nsmenuitem_nsmenuitem_allowsautomatickeyequivalentmirroring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSMenuItem_NSMenuItem, setAllowsAutomaticKeyEquivalentMirroring, arginfo_appkit_ns_nsmenuitem_nsmenuitem_setallowsautomatickeyequivalentmirroring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSMenuItem_NSMenuItem, image, arginfo_appkit_ns_nsmenuitem_nsmenuitem_image, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSMenuItem_NSMenuItem, setImage, arginfo_appkit_ns_nsmenuitem_nsmenuitem_setimage, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSMenuItem_NSMenuItem, state, arginfo_appkit_ns_nsmenuitem_nsmenuitem_state, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSMenuItem_NSMenuItem, setState, arginfo_appkit_ns_nsmenuitem_nsmenuitem_setstate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSMenuItem_NSMenuItem, onStateImage, arginfo_appkit_ns_nsmenuitem_nsmenuitem_onstateimage, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSMenuItem_NSMenuItem, setOnStateImage, arginfo_appkit_ns_nsmenuitem_nsmenuitem_setonstateimage, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSMenuItem_NSMenuItem, offStateImage, arginfo_appkit_ns_nsmenuitem_nsmenuitem_offstateimage, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSMenuItem_NSMenuItem, setOffStateImage, arginfo_appkit_ns_nsmenuitem_nsmenuitem_setoffstateimage, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSMenuItem_NSMenuItem, mixedStateImage, arginfo_appkit_ns_nsmenuitem_nsmenuitem_mixedstateimage, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSMenuItem_NSMenuItem, setMixedStateImage, arginfo_appkit_ns_nsmenuitem_nsmenuitem_setmixedstateimage, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSMenuItem_NSMenuItem, isEnabled, arginfo_appkit_ns_nsmenuitem_nsmenuitem_isenabled, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSMenuItem_NSMenuItem, setEnabled, arginfo_appkit_ns_nsmenuitem_nsmenuitem_setenabled, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSMenuItem_NSMenuItem, isAlternate, arginfo_appkit_ns_nsmenuitem_nsmenuitem_isalternate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSMenuItem_NSMenuItem, setAlternate, arginfo_appkit_ns_nsmenuitem_nsmenuitem_setalternate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSMenuItem_NSMenuItem, indentationLevel, arginfo_appkit_ns_nsmenuitem_nsmenuitem_indentationlevel, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSMenuItem_NSMenuItem, setIndentationLevel, arginfo_appkit_ns_nsmenuitem_nsmenuitem_setindentationlevel, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSMenuItem_NSMenuItem, target, arginfo_appkit_ns_nsmenuitem_nsmenuitem_target, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSMenuItem_NSMenuItem, setTarget, arginfo_appkit_ns_nsmenuitem_nsmenuitem_settarget, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSMenuItem_NSMenuItem, action, arginfo_appkit_ns_nsmenuitem_nsmenuitem_action, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSMenuItem_NSMenuItem, setAction, arginfo_appkit_ns_nsmenuitem_nsmenuitem_setaction, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSMenuItem_NSMenuItem, tag, arginfo_appkit_ns_nsmenuitem_nsmenuitem_tag, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSMenuItem_NSMenuItem, setTag, arginfo_appkit_ns_nsmenuitem_nsmenuitem_settag, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSMenuItem_NSMenuItem, representedObject, arginfo_appkit_ns_nsmenuitem_nsmenuitem_representedobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSMenuItem_NSMenuItem, setRepresentedObject, arginfo_appkit_ns_nsmenuitem_nsmenuitem_setrepresentedobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSMenuItem_NSMenuItem, view, arginfo_appkit_ns_nsmenuitem_nsmenuitem_view, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSMenuItem_NSMenuItem, setView, arginfo_appkit_ns_nsmenuitem_nsmenuitem_setview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSMenuItem_NSMenuItem, isHighlighted, arginfo_appkit_ns_nsmenuitem_nsmenuitem_ishighlighted, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSMenuItem_NSMenuItem, isHidden, arginfo_appkit_ns_nsmenuitem_nsmenuitem_ishidden, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSMenuItem_NSMenuItem, setHidden, arginfo_appkit_ns_nsmenuitem_nsmenuitem_sethidden, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSMenuItem_NSMenuItem, isHiddenOrHasHiddenAncestor, arginfo_appkit_ns_nsmenuitem_nsmenuitem_ishiddenorhashiddenancestor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSMenuItem_NSMenuItem, toolTip, arginfo_appkit_ns_nsmenuitem_nsmenuitem_tooltip, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSMenuItem_NSMenuItem, setToolTip, arginfo_appkit_ns_nsmenuitem_nsmenuitem_settooltip, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSMenuItem_NSMenuItem, badge, arginfo_appkit_ns_nsmenuitem_nsmenuitem_badge, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSMenuItem_NSMenuItem, setBadge, arginfo_appkit_ns_nsmenuitem_nsmenuitem_setbadge, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
