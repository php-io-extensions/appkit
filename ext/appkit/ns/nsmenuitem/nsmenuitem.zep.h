
extern zend_class_entry *appkit_ns_nsmenuitem_nsmenuitem_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSMenuItem_NSMenuItem);

PHP_METHOD(AppKit_NS_NSMenuItem_NSMenuItem, create);
PHP_METHOD(AppKit_NS_NSMenuItem_NSMenuItem, separator);
PHP_METHOD(AppKit_NS_NSMenuItem_NSMenuItem, sectionHeader);
PHP_METHOD(AppKit_NS_NSMenuItem_NSMenuItem, wrap);
PHP_METHOD(AppKit_NS_NSMenuItem_NSMenuItem, destroy);
PHP_METHOD(AppKit_NS_NSMenuItem_NSMenuItem, nsMenuItem);
PHP_METHOD(AppKit_NS_NSMenuItem_NSMenuItem, setTitle);
PHP_METHOD(AppKit_NS_NSMenuItem_NSMenuItem, getTitle);
PHP_METHOD(AppKit_NS_NSMenuItem_NSMenuItem, setSubtitle);
PHP_METHOD(AppKit_NS_NSMenuItem_NSMenuItem, getSubtitle);
PHP_METHOD(AppKit_NS_NSMenuItem_NSMenuItem, setKeyEquivalent);
PHP_METHOD(AppKit_NS_NSMenuItem_NSMenuItem, getKeyEquivalent);
PHP_METHOD(AppKit_NS_NSMenuItem_NSMenuItem, setEnabled);
PHP_METHOD(AppKit_NS_NSMenuItem_NSMenuItem, isEnabled);
PHP_METHOD(AppKit_NS_NSMenuItem_NSMenuItem, setHidden);
PHP_METHOD(AppKit_NS_NSMenuItem_NSMenuItem, isHidden);
PHP_METHOD(AppKit_NS_NSMenuItem_NSMenuItem, setState);
PHP_METHOD(AppKit_NS_NSMenuItem_NSMenuItem, getState);
PHP_METHOD(AppKit_NS_NSMenuItem_NSMenuItem, setTag);
PHP_METHOD(AppKit_NS_NSMenuItem_NSMenuItem, getTag);
PHP_METHOD(AppKit_NS_NSMenuItem_NSMenuItem, setToolTip);
PHP_METHOD(AppKit_NS_NSMenuItem_NSMenuItem, getToolTip);
PHP_METHOD(AppKit_NS_NSMenuItem_NSMenuItem, setIndentationLevel);
PHP_METHOD(AppKit_NS_NSMenuItem_NSMenuItem, getIndentationLevel);
PHP_METHOD(AppKit_NS_NSMenuItem_NSMenuItem, setRepresentedObject);
PHP_METHOD(AppKit_NS_NSMenuItem_NSMenuItem, getRepresentedObject);
PHP_METHOD(AppKit_NS_NSMenuItem_NSMenuItem, setView);
PHP_METHOD(AppKit_NS_NSMenuItem_NSMenuItem, view);
PHP_METHOD(AppKit_NS_NSMenuItem_NSMenuItem, isSeparator);
PHP_METHOD(AppKit_NS_NSMenuItem_NSMenuItem, isSectionHeader);
PHP_METHOD(AppKit_NS_NSMenuItem_NSMenuItem, hasSubmenu);
PHP_METHOD(AppKit_NS_NSMenuItem_NSMenuItem, add);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsmenuitem_nsmenuitem_create, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, title, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, keyEquivalent, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsmenuitem_nsmenuitem_separator, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsmenuitem_nsmenuitem_sectionheader, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, title, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsmenuitem_nsmenuitem_wrap, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, nsMenuItemPtr, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsmenuitem_nsmenuitem_destroy, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsmenuitem_nsmenuitem_nsmenuitem, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsmenuitem_nsmenuitem_settitle, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, title, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsmenuitem_nsmenuitem_gettitle, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsmenuitem_nsmenuitem_setsubtitle, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, subtitle, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsmenuitem_nsmenuitem_getsubtitle, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsmenuitem_nsmenuitem_setkeyequivalent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, key, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsmenuitem_nsmenuitem_getkeyequivalent, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsmenuitem_nsmenuitem_setenabled, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, flag, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsmenuitem_nsmenuitem_isenabled, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsmenuitem_nsmenuitem_sethidden, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, flag, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsmenuitem_nsmenuitem_ishidden, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsmenuitem_nsmenuitem_setstate, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, state, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsmenuitem_nsmenuitem_getstate, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsmenuitem_nsmenuitem_settag, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, tag, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsmenuitem_nsmenuitem_gettag, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsmenuitem_nsmenuitem_settooltip, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, tip, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsmenuitem_nsmenuitem_gettooltip, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsmenuitem_nsmenuitem_setindentationlevel, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, level, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsmenuitem_nsmenuitem_getindentationlevel, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsmenuitem_nsmenuitem_setrepresentedobject, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, token, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsmenuitem_nsmenuitem_getrepresentedobject, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsmenuitem_nsmenuitem_setview, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, view, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsmenuitem_nsmenuitem_view, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsmenuitem_nsmenuitem_isseparator, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsmenuitem_nsmenuitem_issectionheader, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsmenuitem_nsmenuitem_hassubmenu, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsmenuitem_nsmenuitem_add, 0, 4, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, menuTitle, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, itemTitle, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, keyEquivalent, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, actionId, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nsmenuitem_nsmenuitem_method_entry) {
	PHP_ME(AppKit_NS_NSMenuItem_NSMenuItem, create, arginfo_appkit_ns_nsmenuitem_nsmenuitem_create, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSMenuItem_NSMenuItem, separator, arginfo_appkit_ns_nsmenuitem_nsmenuitem_separator, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSMenuItem_NSMenuItem, sectionHeader, arginfo_appkit_ns_nsmenuitem_nsmenuitem_sectionheader, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSMenuItem_NSMenuItem, wrap, arginfo_appkit_ns_nsmenuitem_nsmenuitem_wrap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSMenuItem_NSMenuItem, destroy, arginfo_appkit_ns_nsmenuitem_nsmenuitem_destroy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSMenuItem_NSMenuItem, nsMenuItem, arginfo_appkit_ns_nsmenuitem_nsmenuitem_nsmenuitem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSMenuItem_NSMenuItem, setTitle, arginfo_appkit_ns_nsmenuitem_nsmenuitem_settitle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSMenuItem_NSMenuItem, getTitle, arginfo_appkit_ns_nsmenuitem_nsmenuitem_gettitle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSMenuItem_NSMenuItem, setSubtitle, arginfo_appkit_ns_nsmenuitem_nsmenuitem_setsubtitle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSMenuItem_NSMenuItem, getSubtitle, arginfo_appkit_ns_nsmenuitem_nsmenuitem_getsubtitle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSMenuItem_NSMenuItem, setKeyEquivalent, arginfo_appkit_ns_nsmenuitem_nsmenuitem_setkeyequivalent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSMenuItem_NSMenuItem, getKeyEquivalent, arginfo_appkit_ns_nsmenuitem_nsmenuitem_getkeyequivalent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSMenuItem_NSMenuItem, setEnabled, arginfo_appkit_ns_nsmenuitem_nsmenuitem_setenabled, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSMenuItem_NSMenuItem, isEnabled, arginfo_appkit_ns_nsmenuitem_nsmenuitem_isenabled, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSMenuItem_NSMenuItem, setHidden, arginfo_appkit_ns_nsmenuitem_nsmenuitem_sethidden, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSMenuItem_NSMenuItem, isHidden, arginfo_appkit_ns_nsmenuitem_nsmenuitem_ishidden, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSMenuItem_NSMenuItem, setState, arginfo_appkit_ns_nsmenuitem_nsmenuitem_setstate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSMenuItem_NSMenuItem, getState, arginfo_appkit_ns_nsmenuitem_nsmenuitem_getstate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSMenuItem_NSMenuItem, setTag, arginfo_appkit_ns_nsmenuitem_nsmenuitem_settag, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSMenuItem_NSMenuItem, getTag, arginfo_appkit_ns_nsmenuitem_nsmenuitem_gettag, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSMenuItem_NSMenuItem, setToolTip, arginfo_appkit_ns_nsmenuitem_nsmenuitem_settooltip, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSMenuItem_NSMenuItem, getToolTip, arginfo_appkit_ns_nsmenuitem_nsmenuitem_gettooltip, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSMenuItem_NSMenuItem, setIndentationLevel, arginfo_appkit_ns_nsmenuitem_nsmenuitem_setindentationlevel, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSMenuItem_NSMenuItem, getIndentationLevel, arginfo_appkit_ns_nsmenuitem_nsmenuitem_getindentationlevel, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSMenuItem_NSMenuItem, setRepresentedObject, arginfo_appkit_ns_nsmenuitem_nsmenuitem_setrepresentedobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSMenuItem_NSMenuItem, getRepresentedObject, arginfo_appkit_ns_nsmenuitem_nsmenuitem_getrepresentedobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSMenuItem_NSMenuItem, setView, arginfo_appkit_ns_nsmenuitem_nsmenuitem_setview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSMenuItem_NSMenuItem, view, arginfo_appkit_ns_nsmenuitem_nsmenuitem_view, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSMenuItem_NSMenuItem, isSeparator, arginfo_appkit_ns_nsmenuitem_nsmenuitem_isseparator, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSMenuItem_NSMenuItem, isSectionHeader, arginfo_appkit_ns_nsmenuitem_nsmenuitem_issectionheader, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSMenuItem_NSMenuItem, hasSubmenu, arginfo_appkit_ns_nsmenuitem_nsmenuitem_hassubmenu, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSMenuItem_NSMenuItem, add, arginfo_appkit_ns_nsmenuitem_nsmenuitem_add, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
