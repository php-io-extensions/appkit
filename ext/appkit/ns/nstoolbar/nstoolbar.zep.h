
extern zend_class_entry *appkit_ns_nstoolbar_nstoolbar_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSToolbar_NSToolbar);

PHP_METHOD(AppKit_NS_NSToolbar_NSToolbar, initWithIdentifier);
PHP_METHOD(AppKit_NS_NSToolbar_NSToolbar, init);
PHP_METHOD(AppKit_NS_NSToolbar_NSToolbar, insertItemWithItemIdentifierAtIndex);
PHP_METHOD(AppKit_NS_NSToolbar_NSToolbar, removeItemAtIndex);
PHP_METHOD(AppKit_NS_NSToolbar_NSToolbar, removeItemWithItemIdentifier);
PHP_METHOD(AppKit_NS_NSToolbar_NSToolbar, delegate);
PHP_METHOD(AppKit_NS_NSToolbar_NSToolbar, setDelegate);
PHP_METHOD(AppKit_NS_NSToolbar_NSToolbar, isVisible);
PHP_METHOD(AppKit_NS_NSToolbar_NSToolbar, setVisible);
PHP_METHOD(AppKit_NS_NSToolbar_NSToolbar, runCustomizationPalette);
PHP_METHOD(AppKit_NS_NSToolbar_NSToolbar, customizationPaletteIsRunning);
PHP_METHOD(AppKit_NS_NSToolbar_NSToolbar, displayMode);
PHP_METHOD(AppKit_NS_NSToolbar_NSToolbar, setDisplayMode);
PHP_METHOD(AppKit_NS_NSToolbar_NSToolbar, selectedItemIdentifier);
PHP_METHOD(AppKit_NS_NSToolbar_NSToolbar, setSelectedItemIdentifier);
PHP_METHOD(AppKit_NS_NSToolbar_NSToolbar, allowsUserCustomization);
PHP_METHOD(AppKit_NS_NSToolbar_NSToolbar, setAllowsUserCustomization);
PHP_METHOD(AppKit_NS_NSToolbar_NSToolbar, allowsDisplayModeCustomization);
PHP_METHOD(AppKit_NS_NSToolbar_NSToolbar, setAllowsDisplayModeCustomization);
PHP_METHOD(AppKit_NS_NSToolbar_NSToolbar, identifier);
PHP_METHOD(AppKit_NS_NSToolbar_NSToolbar, items);
PHP_METHOD(AppKit_NS_NSToolbar_NSToolbar, visibleItems);
PHP_METHOD(AppKit_NS_NSToolbar_NSToolbar, itemIdentifiers);
PHP_METHOD(AppKit_NS_NSToolbar_NSToolbar, setItemIdentifiers);
PHP_METHOD(AppKit_NS_NSToolbar_NSToolbar, centeredItemIdentifiers);
PHP_METHOD(AppKit_NS_NSToolbar_NSToolbar, setCenteredItemIdentifiers);
PHP_METHOD(AppKit_NS_NSToolbar_NSToolbar, autosavesConfiguration);
PHP_METHOD(AppKit_NS_NSToolbar_NSToolbar, setAutosavesConfiguration);
PHP_METHOD(AppKit_NS_NSToolbar_NSToolbar, validateVisibleItems);
PHP_METHOD(AppKit_NS_NSToolbar_NSToolbar, allowsExtensionItems);
PHP_METHOD(AppKit_NS_NSToolbar_NSToolbar, setAllowsExtensionItems);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstoolbar_nstoolbar_initwithidentifier, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, identifier, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstoolbar_nstoolbar_init, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstoolbar_nstoolbar_insertitemwithitemidentifieratindex, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, itemIdentifier, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstoolbar_nstoolbar_removeitematindex, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstoolbar_nstoolbar_removeitemwithitemidentifier, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, itemIdentifier, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstoolbar_nstoolbar_delegate, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstoolbar_nstoolbar_setdelegate, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, delegate, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstoolbar_nstoolbar_isvisible, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstoolbar_nstoolbar_setvisible, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, visible, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstoolbar_nstoolbar_runcustomizationpalette, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sender, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstoolbar_nstoolbar_customizationpaletteisrunning, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstoolbar_nstoolbar_displaymode, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstoolbar_nstoolbar_setdisplaymode, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, displayMode, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_appkit_ns_nstoolbar_nstoolbar_selecteditemidentifier, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstoolbar_nstoolbar_setselecteditemidentifier, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, selectedItemIdentifier)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstoolbar_nstoolbar_allowsusercustomization, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstoolbar_nstoolbar_setallowsusercustomization, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, allowsUserCustomization, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstoolbar_nstoolbar_allowsdisplaymodecustomization, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstoolbar_nstoolbar_setallowsdisplaymodecustomization, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, allowsDisplayModeCustomization, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstoolbar_nstoolbar_identifier, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstoolbar_nstoolbar_items, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstoolbar_nstoolbar_visibleitems, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstoolbar_nstoolbar_itemidentifiers, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstoolbar_nstoolbar_setitemidentifiers, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, itemIdentifiers, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstoolbar_nstoolbar_centereditemidentifiers, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstoolbar_nstoolbar_setcentereditemidentifiers, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, centeredItemIdentifiers, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstoolbar_nstoolbar_autosavesconfiguration, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstoolbar_nstoolbar_setautosavesconfiguration, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, autosavesConfiguration, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstoolbar_nstoolbar_validatevisibleitems, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstoolbar_nstoolbar_allowsextensionitems, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstoolbar_nstoolbar_setallowsextensionitems, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, allowsExtensionItems, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nstoolbar_nstoolbar_method_entry) {
	PHP_ME(AppKit_NS_NSToolbar_NSToolbar, initWithIdentifier, arginfo_appkit_ns_nstoolbar_nstoolbar_initwithidentifier, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSToolbar_NSToolbar, init, arginfo_appkit_ns_nstoolbar_nstoolbar_init, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSToolbar_NSToolbar, insertItemWithItemIdentifierAtIndex, arginfo_appkit_ns_nstoolbar_nstoolbar_insertitemwithitemidentifieratindex, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSToolbar_NSToolbar, removeItemAtIndex, arginfo_appkit_ns_nstoolbar_nstoolbar_removeitematindex, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSToolbar_NSToolbar, removeItemWithItemIdentifier, arginfo_appkit_ns_nstoolbar_nstoolbar_removeitemwithitemidentifier, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSToolbar_NSToolbar, delegate, arginfo_appkit_ns_nstoolbar_nstoolbar_delegate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSToolbar_NSToolbar, setDelegate, arginfo_appkit_ns_nstoolbar_nstoolbar_setdelegate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSToolbar_NSToolbar, isVisible, arginfo_appkit_ns_nstoolbar_nstoolbar_isvisible, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSToolbar_NSToolbar, setVisible, arginfo_appkit_ns_nstoolbar_nstoolbar_setvisible, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSToolbar_NSToolbar, runCustomizationPalette, arginfo_appkit_ns_nstoolbar_nstoolbar_runcustomizationpalette, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSToolbar_NSToolbar, customizationPaletteIsRunning, arginfo_appkit_ns_nstoolbar_nstoolbar_customizationpaletteisrunning, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSToolbar_NSToolbar, displayMode, arginfo_appkit_ns_nstoolbar_nstoolbar_displaymode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSToolbar_NSToolbar, setDisplayMode, arginfo_appkit_ns_nstoolbar_nstoolbar_setdisplaymode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSToolbar_NSToolbar, selectedItemIdentifier, arginfo_appkit_ns_nstoolbar_nstoolbar_selecteditemidentifier, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSToolbar_NSToolbar, setSelectedItemIdentifier, arginfo_appkit_ns_nstoolbar_nstoolbar_setselecteditemidentifier, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSToolbar_NSToolbar, allowsUserCustomization, arginfo_appkit_ns_nstoolbar_nstoolbar_allowsusercustomization, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSToolbar_NSToolbar, setAllowsUserCustomization, arginfo_appkit_ns_nstoolbar_nstoolbar_setallowsusercustomization, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSToolbar_NSToolbar, allowsDisplayModeCustomization, arginfo_appkit_ns_nstoolbar_nstoolbar_allowsdisplaymodecustomization, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSToolbar_NSToolbar, setAllowsDisplayModeCustomization, arginfo_appkit_ns_nstoolbar_nstoolbar_setallowsdisplaymodecustomization, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSToolbar_NSToolbar, identifier, arginfo_appkit_ns_nstoolbar_nstoolbar_identifier, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSToolbar_NSToolbar, items, arginfo_appkit_ns_nstoolbar_nstoolbar_items, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSToolbar_NSToolbar, visibleItems, arginfo_appkit_ns_nstoolbar_nstoolbar_visibleitems, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSToolbar_NSToolbar, itemIdentifiers, arginfo_appkit_ns_nstoolbar_nstoolbar_itemidentifiers, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSToolbar_NSToolbar, setItemIdentifiers, arginfo_appkit_ns_nstoolbar_nstoolbar_setitemidentifiers, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSToolbar_NSToolbar, centeredItemIdentifiers, arginfo_appkit_ns_nstoolbar_nstoolbar_centereditemidentifiers, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSToolbar_NSToolbar, setCenteredItemIdentifiers, arginfo_appkit_ns_nstoolbar_nstoolbar_setcentereditemidentifiers, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSToolbar_NSToolbar, autosavesConfiguration, arginfo_appkit_ns_nstoolbar_nstoolbar_autosavesconfiguration, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSToolbar_NSToolbar, setAutosavesConfiguration, arginfo_appkit_ns_nstoolbar_nstoolbar_setautosavesconfiguration, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSToolbar_NSToolbar, validateVisibleItems, arginfo_appkit_ns_nstoolbar_nstoolbar_validatevisibleitems, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSToolbar_NSToolbar, allowsExtensionItems, arginfo_appkit_ns_nstoolbar_nstoolbar_allowsextensionitems, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSToolbar_NSToolbar, setAllowsExtensionItems, arginfo_appkit_ns_nstoolbar_nstoolbar_setallowsextensionitems, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
