#ifndef PHP_APPKIT_NS_TOOLBARITEMGROUP_H
#define PHP_APPKIT_NS_TOOLBARITEMGROUP_H

/*
 * Faithful 1:1 binding of AppKit NSToolbarItemGroup.h. Every
 * member of the class (the single base interface) is either bound
 * or reserved. Nothing is omitted. The
 * NSToolbarItemGroupSelectionMode /
 * NSToolbarItemGroupControlRepresentation typedefs are not class
 * members. Inherited NSToolbarItem members stay on that class.
 * This header declares no initializer — construction is
 * synthesized initWithItemIdentifier (allocs NSToolbarItemGroup).
 * The audit blanks preprocessor lines, so both sides of the
 * !TARGET_OS_IPHONE images factory are counted: the NSImage form
 * binds; the UIImage form is reserved as a duplicate. Nullable
 * factory labels cross as var (null = nil). Nullable factory
 * target crosses as an int handle (0 = nil); nullable SEL action
 * crosses as var. titles is NSArray<NSString *> (array of
 * strings); images is NSArray<NSImage *> (array of handles).
 * subitems is NSArray of NSToolbarItem handles. Enums
 * (selectionMode / controlRepresentation) and selectedIndex
 * cross as int.
 */

#include "php.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ---- construction glue ---- */

/*@zep-construct NS\NSToolbarItemGroup initWithItemIdentifier(string itemIdentifier) -> int */
zend_long ns_nstoolbaritemgroup_init_with_item_identifier(zval *itemIdentifier);

/* ---- Factories ---- */

/*@zep NS\NSToolbarItemGroup groupWithItemIdentifierTitlesSelectionModeLabelsTargetAction(string itemIdentifier, array titles, int selectionMode, var labels, int target, var action) -> int */
zend_long ns_nstoolbaritemgroup_group_with_item_identifier_titles_selection_mode_labels_target_action(zval *itemIdentifier, zval *titles, zval *selectionMode, zval *labels, zval *target, zval *action);

/*@zep NS\NSToolbarItemGroup groupWithItemIdentifierImagesSelectionModeLabelsTargetAction(string itemIdentifier, array images, int selectionMode, var labels, int target, var action) -> int */
zend_long ns_nstoolbaritemgroup_group_with_item_identifier_images_selection_mode_labels_target_action(zval *itemIdentifier, zval *images, zval *selectionMode, zval *labels, zval *target, zval *action);
/*@reserved NS\NSToolbarItemGroup + (instancetype)groupWithItemIdentifier:(NSToolbarItemIdentifier)itemIdentifier images:(NSArray<UIImage *> *)images selectionMode:(NSToolbarItemGroupSelectionMode)selectionMode labels:(nullable NSArray<NSString *> *)labels target:(nullable id)target action:(nullable SEL)action — iOS duplicate */

/* ---- Subitems and representation ---- */

/*@zep NS\NSToolbarItemGroup subitems(int handle) -> array */
void ns_nstoolbaritemgroup_subitems(zval *return_value, zval *handle);
/*@zep NS\NSToolbarItemGroup setSubitems(int handle, array subitems) -> void */
void ns_nstoolbaritemgroup_set_subitems(zval *handle, zval *subitems);

/*@zep NS\NSToolbarItemGroup controlRepresentation(int handle) -> int */
zend_long ns_nstoolbaritemgroup_control_representation(zval *handle);
/*@zep NS\NSToolbarItemGroup setControlRepresentation(int handle, int controlRepresentation) -> void */
void ns_nstoolbaritemgroup_set_control_representation(zval *handle, zval *controlRepresentation);

/*@zep NS\NSToolbarItemGroup selectionMode(int handle) -> int */
zend_long ns_nstoolbaritemgroup_selection_mode(zval *handle);
/*@zep NS\NSToolbarItemGroup setSelectionMode(int handle, int selectionMode) -> void */
void ns_nstoolbaritemgroup_set_selection_mode(zval *handle, zval *selectionMode);

/*@zep NS\NSToolbarItemGroup selectedIndex(int handle) -> int */
zend_long ns_nstoolbaritemgroup_selected_index(zval *handle);
/*@zep NS\NSToolbarItemGroup setSelectedIndex(int handle, int selectedIndex) -> void */
void ns_nstoolbaritemgroup_set_selected_index(zval *handle, zval *selectedIndex);

/*@zep NS\NSToolbarItemGroup setSelectedAtIndex(int handle, bool selected, int index) -> void */
void ns_nstoolbaritemgroup_set_selected_at_index(zval *handle, zval *selected, zval *index);
/*@zep NS\NSToolbarItemGroup isSelectedAtIndex(int handle, int index) -> bool */
zend_long ns_nstoolbaritemgroup_is_selected_at_index(zval *handle, zval *index);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_TOOLBARITEMGROUP_H */
