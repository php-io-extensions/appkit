#ifndef PHP_APPKIT_NS_MENU_H
#define PHP_APPKIT_NS_MENU_H

/*
 * Faithful 1:1 binding of AppKit NSMenu.h. Every member of the
 * class (base interface + same-file NSPaletteMenus / NSSubmenuAction /
 * NSMenuPropertiesToUpdate / NSDeprecated categories) is either
 * bound or reserved. NSCoder, block palette factories, and
 * API_DEPRECATED members are reserved; nothing is omitted.
 * NSMenuDelegate / NSMenuItemValidation live on Bridge delegates,
 * not here. The NSObject(NSMenuValidation) category is not an
 * NSMenu member. initWithTitle is alloc+init construction glue.
 */

#include "php.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ---- NSMenu ---- */

/*@zep NS\NSMenu initWithTitle(string title) -> int */
zend_long ns_nsmenu_init_with_title(zval *title);
/*@reserved NS\NSMenu - (instancetype)initWithCoder:(NSCoder *)coder NS_DESIGNATED_INITIALIZER */

/*@zep NS\NSMenu title(int handle) -> string */
void ns_nsmenu_title(zval *return_value, zval *handle);
/*@zep NS\NSMenu setTitle(int handle, string title) -> void */
void ns_nsmenu_set_title(zval *handle, zval *title);

/*@zep NS\NSMenu popUpContextMenuWithEventForView(int menu, int event, int view) -> void */
void ns_nsmenu_pop_up_context_menu_with_event_for_view(zval *menu, zval *event, zval *view);
/*@zep NS\NSMenu popUpContextMenuWithEventForViewWithFont(int menu, int event, int view, int font) -> void */
void ns_nsmenu_pop_up_context_menu_with_event_for_view_with_font(zval *menu, zval *event, zval *view, zval *font);

/*@zep NS\NSMenu popUpMenuPositioningItemAtLocationInView(int handle, int item, double x, double y, int view) -> bool */
zend_long ns_nsmenu_pop_up_menu_positioning_item_at_location_in_view(zval *handle, zval *item, zval *x, zval *y, zval *view);

/*@zep NS\NSMenu setMenuBarVisible(bool visible) -> void */
void ns_nsmenu_set_menu_bar_visible(zval *visible);
/*@zep NS\NSMenu menuBarVisible() -> bool */
zend_long ns_nsmenu_menu_bar_visible(void);

/*@zep NS\NSMenu supermenu(int handle) -> int */
zend_long ns_nsmenu_supermenu(zval *handle);
/*@zep NS\NSMenu setSupermenu(int handle, int supermenu) -> void */
void ns_nsmenu_set_supermenu(zval *handle, zval *supermenu);

/*@zep NS\NSMenu insertItemAtIndex(int handle, int newItem, int index) -> void */
void ns_nsmenu_insert_item_at_index(zval *handle, zval *newItem, zval *index);
/*@zep NS\NSMenu addItem(int handle, int newItem) -> void */
void ns_nsmenu_add_item(zval *handle, zval *newItem);
/*@zep NS\NSMenu insertItemWithTitleActionKeyEquivalentAtIndex(int handle, string title, var action, string keyEquivalent, int index) -> int */
zend_long ns_nsmenu_insert_item_with_title_action_key_equivalent_at_index(zval *handle, zval *title, zval *action, zval *keyEquivalent, zval *index);
/*@zep NS\NSMenu addItemWithTitleActionKeyEquivalent(int handle, string title, var action, string keyEquivalent) -> int */
zend_long ns_nsmenu_add_item_with_title_action_key_equivalent(zval *handle, zval *title, zval *action, zval *keyEquivalent);

/*@zep NS\NSMenu removeItemAtIndex(int handle, int index) -> void */
void ns_nsmenu_remove_item_at_index(zval *handle, zval *index);
/*@zep NS\NSMenu removeItem(int handle, int item) -> void */
void ns_nsmenu_remove_item(zval *handle, zval *item);
/*@zep NS\NSMenu setSubmenuForItem(int handle, int menu, int item) -> void */
void ns_nsmenu_set_submenu_for_item(zval *handle, zval *menu, zval *item);
/*@zep NS\NSMenu removeAllItems(int handle) -> void */
void ns_nsmenu_remove_all_items(zval *handle);

/*@zep NS\NSMenu itemArray(int handle) -> array */
void ns_nsmenu_item_array(zval *return_value, zval *handle);
/*@zep NS\NSMenu setItemArray(int handle, array itemArray) -> void */
void ns_nsmenu_set_item_array(zval *handle, zval *itemArray);

/*@zep NS\NSMenu numberOfItems(int handle) -> int */
zend_long ns_nsmenu_number_of_items(zval *handle);

/*@zep NS\NSMenu itemAtIndex(int handle, int index) -> int */
zend_long ns_nsmenu_item_at_index(zval *handle, zval *index);
/*@zep NS\NSMenu indexOfItem(int handle, int item) -> int */
zend_long ns_nsmenu_index_of_item(zval *handle, zval *item);
/*@zep NS\NSMenu indexOfItemWithTitle(int handle, string title) -> int */
zend_long ns_nsmenu_index_of_item_with_title(zval *handle, zval *title);
/*@zep NS\NSMenu indexOfItemWithTag(int handle, int tag) -> int */
zend_long ns_nsmenu_index_of_item_with_tag(zval *handle, zval *tag);
/*@zep NS\NSMenu indexOfItemWithRepresentedObject(int handle, int representedObject) -> int */
zend_long ns_nsmenu_index_of_item_with_represented_object(zval *handle, zval *representedObject);
/*@zep NS\NSMenu indexOfItemWithSubmenu(int handle, int submenu) -> int */
zend_long ns_nsmenu_index_of_item_with_submenu(zval *handle, zval *submenu);
/*@zep NS\NSMenu indexOfItemWithTargetAndAction(int handle, int target, var action) -> int */
zend_long ns_nsmenu_index_of_item_with_target_and_action(zval *handle, zval *target, zval *action);

/*@zep NS\NSMenu itemWithTitle(int handle, string title) -> int */
zend_long ns_nsmenu_item_with_title(zval *handle, zval *title);
/*@zep NS\NSMenu itemWithTag(int handle, int tag) -> int */
zend_long ns_nsmenu_item_with_tag(zval *handle, zval *tag);

/*@zep NS\NSMenu autoenablesItems(int handle) -> bool */
zend_long ns_nsmenu_autoenables_items(zval *handle);
/*@zep NS\NSMenu setAutoenablesItems(int handle, bool flag) -> void */
void ns_nsmenu_set_autoenables_items(zval *handle, zval *flag);

/*@zep NS\NSMenu update(int handle) -> void */
void ns_nsmenu_update(zval *handle);

/*@zep NS\NSMenu performKeyEquivalent(int handle, int event) -> bool */
zend_long ns_nsmenu_perform_key_equivalent(zval *handle, zval *event);

/*@zep NS\NSMenu itemChanged(int handle, int item) -> void */
void ns_nsmenu_item_changed(zval *handle, zval *item);

/*@zep NS\NSMenu performActionForItemAtIndex(int handle, int index) -> void */
void ns_nsmenu_perform_action_for_item_at_index(zval *handle, zval *index);

/*@zep NS\NSMenu delegate(int handle) -> int */
zend_long ns_nsmenu_delegate(zval *handle);
/*@zep NS\NSMenu setDelegate(int handle, int delegate) -> void */
void ns_nsmenu_set_delegate(zval *handle, zval *delegate);

/*@zep NS\NSMenu menuBarHeight(int handle) -> double */
double ns_nsmenu_menu_bar_height(zval *handle);

/*@zep NS\NSMenu cancelTracking(int handle) -> void */
void ns_nsmenu_cancel_tracking(zval *handle);
/*@zep NS\NSMenu cancelTrackingWithoutAnimation(int handle) -> void */
void ns_nsmenu_cancel_tracking_without_animation(zval *handle);

/*@zep NS\NSMenu highlightedItem(int handle) -> int */
zend_long ns_nsmenu_highlighted_item(zval *handle);

/*@zep NS\NSMenu minimumWidth(int handle) -> double */
double ns_nsmenu_minimum_width(zval *handle);
/*@zep NS\NSMenu setMinimumWidth(int handle, double width) -> void */
void ns_nsmenu_set_minimum_width(zval *handle, zval *width);

/*@zep NS\NSMenu size(int handle) -> array */
void ns_nsmenu_size(zval *return_value, zval *handle);

/*@zep NS\NSMenu font(int handle) -> int */
zend_long ns_nsmenu_font(zval *handle);
/*@zep NS\NSMenu setFont(int handle, int font) -> void */
void ns_nsmenu_set_font(zval *handle, zval *font);

/*@zep NS\NSMenu allowsContextMenuPlugIns(int handle) -> bool */
zend_long ns_nsmenu_allows_context_menu_plug_ins(zval *handle);
/*@zep NS\NSMenu setAllowsContextMenuPlugIns(int handle, bool flag) -> void */
void ns_nsmenu_set_allows_context_menu_plug_ins(zval *handle, zval *flag);

/*@zep NS\NSMenu automaticallyInsertsWritingToolsItems(int handle) -> bool */
zend_long ns_nsmenu_automatically_inserts_writing_tools_items(zval *handle);
/*@zep NS\NSMenu setAutomaticallyInsertsWritingToolsItems(int handle, bool flag) -> void */
void ns_nsmenu_set_automatically_inserts_writing_tools_items(zval *handle, zval *flag);

/*@zep NS\NSMenu showsStateColumn(int handle) -> bool */
zend_long ns_nsmenu_shows_state_column(zval *handle);
/*@zep NS\NSMenu setShowsStateColumn(int handle, bool flag) -> void */
void ns_nsmenu_set_shows_state_column(zval *handle, zval *flag);

/*@zep NS\NSMenu userInterfaceLayoutDirection(int handle) -> int */
zend_long ns_nsmenu_user_interface_layout_direction(zval *handle);
/*@zep NS\NSMenu setUserInterfaceLayoutDirection(int handle, int direction) -> void */
void ns_nsmenu_set_user_interface_layout_direction(zval *handle, zval *direction);

/* ---- NSPaletteMenus ---- */

/*@reserved NS\NSMenu + (instancetype)paletteMenuWithColors:titles:selectionHandler: — block */
/*@reserved NS\NSMenu + (instancetype)paletteMenuWithColors:titles:templateImage:selectionHandler: — block */

/*@zep NS\NSMenu presentationStyle(int handle) -> int */
zend_long ns_nsmenu_presentation_style(zval *handle);
/*@zep NS\NSMenu setPresentationStyle(int handle, int style) -> void */
void ns_nsmenu_set_presentation_style(zval *handle, zval *style);

/*@zep NS\NSMenu selectionMode(int handle) -> int */
zend_long ns_nsmenu_selection_mode(zval *handle);
/*@zep NS\NSMenu setSelectionMode(int handle, int mode) -> void */
void ns_nsmenu_set_selection_mode(zval *handle, zval *mode);

/*@zep NS\NSMenu selectedItems(int handle) -> array */
void ns_nsmenu_selected_items(zval *return_value, zval *handle);
/*@zep NS\NSMenu setSelectedItems(int handle, array selectedItems) -> void */
void ns_nsmenu_set_selected_items(zval *handle, zval *selectedItems);

/* ---- NSSubmenuAction ---- */

/*@zep NS\NSMenu submenuAction(int handle, int sender) -> void */
void ns_nsmenu_submenu_action(zval *handle, zval *sender);

/* ---- NSMenuPropertiesToUpdate ---- */

/*@zep NS\NSMenu propertiesToUpdate(int handle) -> int */
zend_long ns_nsmenu_properties_to_update(zval *handle);

/* ---- NSDeprecated ---- */

/*@reserved NS\NSMenu - (void)setMenuRepresentation:(null_unspecified id)menuRep API_DEPRECATED */
/*@reserved NS\NSMenu - (null_unspecified id)menuRepresentation API_DEPRECATED */
/*@reserved NS\NSMenu - (void)setContextMenuRepresentation:(null_unspecified id)menuRep API_DEPRECATED */
/*@reserved NS\NSMenu - (null_unspecified id)contextMenuRepresentation API_DEPRECATED */
/*@reserved NS\NSMenu - (void)setTearOffMenuRepresentation:(null_unspecified id)menuRep API_DEPRECATED */
/*@reserved NS\NSMenu - (null_unspecified id)tearOffMenuRepresentation API_DEPRECATED */
/*@reserved NS\NSMenu + (null_unspecified NSZone *)menuZone API_DEPRECATED */
/*@reserved NS\NSMenu + (void)setMenuZone:(null_unspecified NSZone *)zone API_DEPRECATED */
/*@reserved NS\NSMenu - (null_unspecified NSMenu *)attachedMenu API_DEPRECATED */
/*@reserved NS\NSMenu - (BOOL)isAttached API_DEPRECATED */
/*@reserved NS\NSMenu - (void)sizeToFit API_DEPRECATED */
/*@reserved NS\NSMenu - (NSPoint)locationForSubmenu:(null_unspecified NSMenu *)submenu API_DEPRECATED */
/*@reserved NS\NSMenu @property BOOL menuChangedMessagesEnabled — getter */
/*@reserved NS\NSMenu @property BOOL menuChangedMessagesEnabled — setter */
/*@reserved NS\NSMenu - (void)helpRequested:(NSEvent *)eventPtr API_DEPRECATED */
/*@reserved NS\NSMenu @property (getter=isTornOff, readonly) BOOL tornOff API_DEPRECATED */

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_MENU_H */
