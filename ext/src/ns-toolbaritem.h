#ifndef PHP_APPKIT_NS_TOOLBARITEM_H
#define PHP_APPKIT_NS_TOOLBARITEM_H

/*
 * Faithful 1:1 binding of AppKit NSToolbarItem.h. Every member of
 * the class (the single base interface) is either bound or reserved.
 * Nothing is omitted. The empty NSToolbarItem() category only
 * adopts NSMenuItemValidation / NSValidatedUserInterfaceItem and
 * adds no members. Protocols NSToolbarItemValidation and
 * NSCloudSharingValidation, the NSObject(NSToolbarItemValidation)
 * category, and the APPKIT_EXTERN standard / deprecated item
 * identifiers are not class members. The
 * NSToolbarItemVisibilityPriority typedef and its static const
 * aliases are not class members. Inherited NSObject / NSCopying
 * members stay on those types (copyWithZone: is not redeclared).
 * Live construction is initWithItemIdentifier: (alloc+init glue).
 * The audit blanks preprocessor lines, so both sides of the
 * !TARGET_OS_IPHONE image property are counted: the NSImage pair
 * binds; the UIImage pair is reserved as a duplicate. minSize /
 * maxSize (getter+setter) and allowsDuplicatesInToolbar are
 * API_DEPRECATED and reserved. itemIdentifier is a non-null
 * NSToolbarItemIdentifier (string). label / paletteLabel / title
 * are non-null NSString (string). toolTip is a nullable NSString
 * (var). possibleLabels is NSSet<NSString *> (array of strings).
 * action is a nullable SEL (var). getter=isEnabled /
 * isBordered / isNavigational / isVisible / isHidden emit those
 * names. toolbar / menuFormRepresentation / target / image /
 * view cross as int handles (0 = nil). tag and
 * visibilityPriority cross as int.
 */

#include "php.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ---- Construction / identity ---- */

/*@zep NS\NSToolbarItem initWithItemIdentifier(string itemIdentifier) -> int */
zend_long ns_nstoolbaritem_init_with_item_identifier(zval *itemIdentifier);

/*@zep NS\NSToolbarItem itemIdentifier(int handle) -> string */
void ns_nstoolbaritem_item_identifier(zval *return_value, zval *handle);

/*@zep NS\NSToolbarItem toolbar(int handle) -> int */
zend_long ns_nstoolbaritem_toolbar(zval *handle);

/* ---- Setters and Getters ---- */

/*@zep NS\NSToolbarItem label(int handle) -> string */
void ns_nstoolbaritem_label(zval *return_value, zval *handle);
/*@zep NS\NSToolbarItem setLabel(int handle, string label) -> void */
void ns_nstoolbaritem_set_label(zval *handle, zval *label);

/*@zep NS\NSToolbarItem paletteLabel(int handle) -> string */
void ns_nstoolbaritem_palette_label(zval *return_value, zval *handle);
/*@zep NS\NSToolbarItem setPaletteLabel(int handle, string paletteLabel) -> void */
void ns_nstoolbaritem_set_palette_label(zval *handle, zval *paletteLabel);

/*@zep NS\NSToolbarItem possibleLabels(int handle) -> array */
void ns_nstoolbaritem_possible_labels(zval *return_value, zval *handle);
/*@zep NS\NSToolbarItem setPossibleLabels(int handle, array possibleLabels) -> void */
void ns_nstoolbaritem_set_possible_labels(zval *handle, zval *possibleLabels);

/*@zep NS\NSToolbarItem toolTip(int handle) -> var */
void ns_nstoolbaritem_tool_tip(zval *return_value, zval *handle);
/*@zep NS\NSToolbarItem setToolTip(int handle, var toolTip) -> void */
void ns_nstoolbaritem_set_tool_tip(zval *handle, zval *toolTip);

/*@zep NS\NSToolbarItem menuFormRepresentation(int handle) -> int */
zend_long ns_nstoolbaritem_menu_form_representation(zval *handle);
/*@zep NS\NSToolbarItem setMenuFormRepresentation(int handle, int menuFormRepresentation) -> void */
void ns_nstoolbaritem_set_menu_form_representation(zval *handle, zval *menuFormRepresentation);

/*@zep NS\NSToolbarItem tag(int handle) -> int */
zend_long ns_nstoolbaritem_tag(zval *handle);
/*@zep NS\NSToolbarItem setTag(int handle, int tag) -> void */
void ns_nstoolbaritem_set_tag(zval *handle, zval *tag);

/*@zep NS\NSToolbarItem target(int handle) -> int */
zend_long ns_nstoolbaritem_target(zval *handle);
/*@zep NS\NSToolbarItem setTarget(int handle, int target) -> void */
void ns_nstoolbaritem_set_target(zval *handle, zval *target);

/*@zep NS\NSToolbarItem action(int handle) -> var */
void ns_nstoolbaritem_action(zval *return_value, zval *handle);
/*@zep NS\NSToolbarItem setAction(int handle, var action) -> void */
void ns_nstoolbaritem_set_action(zval *handle, zval *action);

/*@zep NS\NSToolbarItem isEnabled(int handle) -> bool */
zend_long ns_nstoolbaritem_is_enabled(zval *handle);
/*@zep NS\NSToolbarItem setEnabled(int handle, bool enabled) -> void */
void ns_nstoolbaritem_set_enabled(zval *handle, zval *enabled);

/*@zep NS\NSToolbarItem image(int handle) -> int */
zend_long ns_nstoolbaritem_image(zval *handle);
/*@zep NS\NSToolbarItem setImage(int handle, int image) -> void */
void ns_nstoolbaritem_set_image(zval *handle, zval *image);
/*@reserved NS\NSToolbarItem @property (nullable, strong) UIImage *image API_AVAILABLE(ios(13.0)) — iOS duplicate getter */
/*@reserved NS\NSToolbarItem @property (nullable, strong) UIImage *image API_AVAILABLE(ios(13.0)) — iOS duplicate setter */

/*@zep NS\NSToolbarItem title(int handle) -> string */
void ns_nstoolbaritem_title(zval *return_value, zval *handle);
/*@zep NS\NSToolbarItem setTitle(int handle, string title) -> void */
void ns_nstoolbaritem_set_title(zval *handle, zval *title);

/*@zep NS\NSToolbarItem isBordered(int handle) -> bool */
zend_long ns_nstoolbaritem_is_bordered(zval *handle);
/*@zep NS\NSToolbarItem setBordered(int handle, bool bordered) -> void */
void ns_nstoolbaritem_set_bordered(zval *handle, zval *bordered);

/*@zep NS\NSToolbarItem isNavigational(int handle) -> bool */
zend_long ns_nstoolbaritem_is_navigational(zval *handle);
/*@zep NS\NSToolbarItem setNavigational(int handle, bool navigational) -> void */
void ns_nstoolbaritem_set_navigational(zval *handle, zval *navigational);

/*@zep NS\NSToolbarItem view(int handle) -> int */
zend_long ns_nstoolbaritem_view(zval *handle);
/*@zep NS\NSToolbarItem setView(int handle, int view) -> void */
void ns_nstoolbaritem_set_view(zval *handle, zval *view);

/*@zep NS\NSToolbarItem isVisible(int handle) -> bool */
zend_long ns_nstoolbaritem_is_visible(zval *handle);

/*@zep NS\NSToolbarItem isHidden(int handle) -> bool */
zend_long ns_nstoolbaritem_is_hidden(zval *handle);
/*@zep NS\NSToolbarItem setHidden(int handle, bool hidden) -> void */
void ns_nstoolbaritem_set_hidden(zval *handle, zval *hidden);

/*@reserved NS\NSToolbarItem @property NSSize minSize API_DEPRECATED — getter */
/*@reserved NS\NSToolbarItem @property NSSize minSize API_DEPRECATED — setter */
/*@reserved NS\NSToolbarItem @property NSSize maxSize API_DEPRECATED — getter */
/*@reserved NS\NSToolbarItem @property NSSize maxSize API_DEPRECATED — setter */

/*@zep NS\NSToolbarItem visibilityPriority(int handle) -> int */
zend_long ns_nstoolbaritem_visibility_priority(zval *handle);
/*@zep NS\NSToolbarItem setVisibilityPriority(int handle, int visibilityPriority) -> void */
void ns_nstoolbaritem_set_visibility_priority(zval *handle, zval *visibilityPriority);

/* ---- Validation of the items ---- */

/*@zep NS\NSToolbarItem validate(int handle) -> void */
void ns_nstoolbaritem_validate(zval *handle);

/*@zep NS\NSToolbarItem autovalidates(int handle) -> bool */
zend_long ns_nstoolbaritem_autovalidates(zval *handle);
/*@zep NS\NSToolbarItem setAutovalidates(int handle, bool autovalidates) -> void */
void ns_nstoolbaritem_set_autovalidates(zval *handle, zval *autovalidates);

/* ---- Controlling Duplicates In The Toolbar ---- */

/*@reserved NS\NSToolbarItem @property (readonly) BOOL allowsDuplicatesInToolbar API_DEPRECATED */

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_TOOLBARITEM_H */
