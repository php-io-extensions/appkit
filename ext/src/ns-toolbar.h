#ifndef PHP_APPKIT_NS_TOOLBAR_H
#define PHP_APPKIT_NS_TOOLBAR_H

/*
 * Faithful 1:1 binding of AppKit NSToolbar.h. Every member of the
 * class (base interface + same-file NSDeprecated category) is
 * either bound or reserved. Nothing is omitted. Protocol
 * NSToolbarDelegate is not a class member (delegate methods belong
 * to Bridge). The NSToolbarDisplayMode / NSToolbarSizeMode
 * typedefs, NSToolbarIdentifier / NSToolbarItemIdentifier /
 * NSToolbarUserInfoKey string typedefs, the APPKIT_EXTERN
 * notification names, and NSToolbarItemKey / NSToolbarNewIndexKey
 * are not class members. Inherited NSObject members stay on that
 * class. Live construction is initWithIdentifier: and init (each
 * alloc+init glue). Same-file NSDeprecated is reserved
 * (sizeMode, centeredItemIdentifier, fullScreenAccessoryView and
 * its min/max height, showsBaselineSeparator,
 * configurationDictionary, setConfigurationFromDictionary: are
 * API_DEPRECATED). identifier is a non-null NSToolbarIdentifier
 * (string). selectedItemIdentifier is a nullable
 * NSToolbarItemIdentifier (var). itemIdentifiers is
 * NSArray<NSToolbarItemIdentifier> (array of strings).
 * centeredItemIdentifiers is NSSet<NSToolbarItemIdentifier>
 * (array of strings). items / visibleItems are arrays of
 * handles. getter=isVisible emits isVisible. NSToolbarDisplayMode
 * crosses as int. BOOL customizationPaletteIsRunning /
 * allowsUserCustomization / allowsDisplayModeCustomization /
 * autosavesConfiguration / allowsExtensionItems have no
 * getter=is prefix. id<NSToolbarDelegate> / sender cross as int
 * handles (0 = nil).
 */

#include "php.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ---- Construction ---- */

/*@zep NS\NSToolbar initWithIdentifier(string identifier) -> int */
zend_long ns_nstoolbar_init_with_identifier(zval *identifier);

/*@zep NS\NSToolbar init() -> int */
zend_long ns_nstoolbar_init(void);

/* ---- Managing items ---- */

/*@zep NS\NSToolbar insertItemWithItemIdentifierAtIndex(int handle, string itemIdentifier, int index) -> void */
void ns_nstoolbar_insert_item_with_item_identifier_at_index(zval *handle, zval *itemIdentifier, zval *index);

/*@zep NS\NSToolbar removeItemAtIndex(int handle, int index) -> void */
void ns_nstoolbar_remove_item_at_index(zval *handle, zval *index);

/*@zep NS\NSToolbar removeItemWithItemIdentifier(int handle, string itemIdentifier) -> void */
void ns_nstoolbar_remove_item_with_item_identifier(zval *handle, zval *itemIdentifier);

/*@zep NS\NSToolbar delegate(int handle) -> int */
zend_long ns_nstoolbar_delegate(zval *handle);
/*@zep NS\NSToolbar setDelegate(int handle, int delegate) -> void */
void ns_nstoolbar_set_delegate(zval *handle, zval *delegate);

/*@zep NS\NSToolbar isVisible(int handle) -> bool */
zend_long ns_nstoolbar_is_visible(zval *handle);
/*@zep NS\NSToolbar setVisible(int handle, bool visible) -> void */
void ns_nstoolbar_set_visible(zval *handle, zval *visible);

/*@zep NS\NSToolbar runCustomizationPalette(int handle, int sender) -> void */
void ns_nstoolbar_run_customization_palette(zval *handle, zval *sender);

/*@zep NS\NSToolbar customizationPaletteIsRunning(int handle) -> bool */
zend_long ns_nstoolbar_customization_palette_is_running(zval *handle);

/* ---- Toolbar Attributes ---- */

/*@zep NS\NSToolbar displayMode(int handle) -> int */
zend_long ns_nstoolbar_display_mode(zval *handle);
/*@zep NS\NSToolbar setDisplayMode(int handle, int displayMode) -> void */
void ns_nstoolbar_set_display_mode(zval *handle, zval *displayMode);

/*@zep NS\NSToolbar selectedItemIdentifier(int handle) -> var */
void ns_nstoolbar_selected_item_identifier(zval *return_value, zval *handle);
/*@zep NS\NSToolbar setSelectedItemIdentifier(int handle, var selectedItemIdentifier) -> void */
void ns_nstoolbar_set_selected_item_identifier(zval *handle, zval *selectedItemIdentifier);

/*@zep NS\NSToolbar allowsUserCustomization(int handle) -> bool */
zend_long ns_nstoolbar_allows_user_customization(zval *handle);
/*@zep NS\NSToolbar setAllowsUserCustomization(int handle, bool allowsUserCustomization) -> void */
void ns_nstoolbar_set_allows_user_customization(zval *handle, zval *allowsUserCustomization);

/*@zep NS\NSToolbar allowsDisplayModeCustomization(int handle) -> bool */
zend_long ns_nstoolbar_allows_display_mode_customization(zval *handle);
/*@zep NS\NSToolbar setAllowsDisplayModeCustomization(int handle, bool allowsDisplayModeCustomization) -> void */
void ns_nstoolbar_set_allows_display_mode_customization(zval *handle, zval *allowsDisplayModeCustomization);

/* ---- Accessing toolbar info ---- */

/*@zep NS\NSToolbar identifier(int handle) -> string */
void ns_nstoolbar_identifier(zval *return_value, zval *handle);

/*@zep NS\NSToolbar items(int handle) -> array */
void ns_nstoolbar_items(zval *return_value, zval *handle);

/*@zep NS\NSToolbar visibleItems(int handle) -> array */
void ns_nstoolbar_visible_items(zval *return_value, zval *handle);

/*@zep NS\NSToolbar itemIdentifiers(int handle) -> array */
void ns_nstoolbar_item_identifiers(zval *return_value, zval *handle);
/*@zep NS\NSToolbar setItemIdentifiers(int handle, array itemIdentifiers) -> void */
void ns_nstoolbar_set_item_identifiers(zval *handle, zval *itemIdentifiers);

/*@zep NS\NSToolbar centeredItemIdentifiers(int handle) -> array */
void ns_nstoolbar_centered_item_identifiers(zval *return_value, zval *handle);
/*@zep NS\NSToolbar setCenteredItemIdentifiers(int handle, array centeredItemIdentifiers) -> void */
void ns_nstoolbar_set_centered_item_identifiers(zval *handle, zval *centeredItemIdentifiers);

/* ---- Autosaving The Configuration ---- */

/*@zep NS\NSToolbar autosavesConfiguration(int handle) -> bool */
zend_long ns_nstoolbar_autosaves_configuration(zval *handle);
/*@zep NS\NSToolbar setAutosavesConfiguration(int handle, bool autosavesConfiguration) -> void */
void ns_nstoolbar_set_autosaves_configuration(zval *handle, zval *autosavesConfiguration);

/* ---- Item Validation ---- */

/*@zep NS\NSToolbar validateVisibleItems(int handle) -> void */
void ns_nstoolbar_validate_visible_items(zval *handle);

/* ---- Extension toolbar items ---- */

/*@zep NS\NSToolbar allowsExtensionItems(int handle) -> bool */
zend_long ns_nstoolbar_allows_extension_items(zval *handle);
/*@zep NS\NSToolbar setAllowsExtensionItems(int handle, bool allowsExtensionItems) -> void */
void ns_nstoolbar_set_allows_extension_items(zval *handle, zval *allowsExtensionItems);

/* ---- NSDeprecated ---- */

/*@reserved NS\NSToolbar @property NSToolbarSizeMode sizeMode API_DEPRECATED — getter */
/*@reserved NS\NSToolbar @property NSToolbarSizeMode sizeMode API_DEPRECATED — setter */
/*@reserved NS\NSToolbar @property (nullable, copy) NSToolbarItemIdentifier centeredItemIdentifier API_DEPRECATED — getter */
/*@reserved NS\NSToolbar @property (nullable, copy) NSToolbarItemIdentifier centeredItemIdentifier API_DEPRECATED — setter */
/*@reserved NS\NSToolbar @property (nullable, strong) NSView *fullScreenAccessoryView API_DEPRECATED — getter */
/*@reserved NS\NSToolbar @property (nullable, strong) NSView *fullScreenAccessoryView API_DEPRECATED — setter */
/*@reserved NS\NSToolbar @property CGFloat fullScreenAccessoryViewMinHeight API_DEPRECATED — getter */
/*@reserved NS\NSToolbar @property CGFloat fullScreenAccessoryViewMinHeight API_DEPRECATED — setter */
/*@reserved NS\NSToolbar @property CGFloat fullScreenAccessoryViewMaxHeight API_DEPRECATED — getter */
/*@reserved NS\NSToolbar @property CGFloat fullScreenAccessoryViewMaxHeight API_DEPRECATED — setter */
/*@reserved NS\NSToolbar @property BOOL showsBaselineSeparator API_DEPRECATED — getter */
/*@reserved NS\NSToolbar @property BOOL showsBaselineSeparator API_DEPRECATED — setter */
/*@reserved NS\NSToolbar @property (readonly, copy) NSDictionary<NSString *, id> *configurationDictionary API_DEPRECATED */
/*@reserved NS\NSToolbar - (void)setConfigurationFromDictionary:(NSDictionary<NSString *, id> *)configDict API_DEPRECATED */

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_TOOLBAR_H */
