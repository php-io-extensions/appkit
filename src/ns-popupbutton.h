#ifndef PHP_APPKIT_NS_POPUPBUTTON_H
#define PHP_APPKIT_NS_POPUPBUTTON_H

/*
 * Faithful 1:1 binding of AppKit NSPopUpButton.h. Every member of
 * the class (the single base interface; no same-file categories) is
 * either bound or reserved. Nothing is reserved — the header has no
 * blocks, NSCoder, NSAttributedString, NSData, Class, or
 * API_DEPRECATED members. NSPopUpButtonCell has its own header and
 * is not bound here. The notification name
 * NSPopUpButtonWillPopUpNotification is not a class member.
 * Inherited NSButton / NSControl / NSView members stay on those
 * classes. initWithFramePullsDown is alloc+init construction glue.
 * The four convenience factories are single class-method sends.
 * Redeclared setTitle: binds here. Nullable SEL on
 * popUpButtonWithMenu:target:action: and
 * indexOfItemWithTarget:andAction: crosses as var. Nullable
 * titleOfSelectedItem crosses as var. itemArray is
 * NSArray<NSMenuItem *> (handles); itemTitles /
 * addItemsWithTitles: are NSArray<NSString *> (strings).
 * NSRectEdge and item indexes / tags cross as int. NSRect for
 * initWithFrame:pullsDown: crosses as component doubles.
 */

#include "php.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ---- Creating pop-up and pull-down buttons ---- */

/*@zep NS\NSPopUpButton popUpButtonWithMenuTargetAction(int menu, int target, var action) -> int */
zend_long ns_nspopupbutton_pop_up_button_with_menu_target_action(zval *menu, zval *target, zval *action);
/*@zep NS\NSPopUpButton pullDownButtonWithTitleMenu(string title, int menu) -> int */
zend_long ns_nspopupbutton_pull_down_button_with_title_menu(zval *title, zval *menu);
/*@zep NS\NSPopUpButton pullDownButtonWithImageMenu(int image, int menu) -> int */
zend_long ns_nspopupbutton_pull_down_button_with_image_menu(zval *image, zval *menu);
/*@zep NS\NSPopUpButton pullDownButtonWithTitleImageMenu(string title, int image, int menu) -> int */
zend_long ns_nspopupbutton_pull_down_button_with_title_image_menu(zval *title, zval *image, zval *menu);

/*@zep NS\NSPopUpButton initWithFramePullsDown(double x, double y, double width, double height, bool flag) -> int */
zend_long ns_nspopupbutton_init_with_frame_pulls_down(zval *x, zval *y, zval *width, zval *height, zval *flag);

/* ---- Configuration ---- */

/*@zep NS\NSPopUpButton menu(int handle) -> int */
zend_long ns_nspopupbutton_menu(zval *handle);
/*@zep NS\NSPopUpButton setMenu(int handle, int menu) -> void */
void ns_nspopupbutton_set_menu(zval *handle, zval *menu);

/*@zep NS\NSPopUpButton pullsDown(int handle) -> bool */
zend_long ns_nspopupbutton_pulls_down(zval *handle);
/*@zep NS\NSPopUpButton setPullsDown(int handle, bool pullsDown) -> void */
void ns_nspopupbutton_set_pulls_down(zval *handle, zval *pullsDown);

/*@zep NS\NSPopUpButton autoenablesItems(int handle) -> bool */
zend_long ns_nspopupbutton_autoenables_items(zval *handle);
/*@zep NS\NSPopUpButton setAutoenablesItems(int handle, bool autoenablesItems) -> void */
void ns_nspopupbutton_set_autoenables_items(zval *handle, zval *autoenablesItems);

/*@zep NS\NSPopUpButton preferredEdge(int handle) -> int */
zend_long ns_nspopupbutton_preferred_edge(zval *handle);
/*@zep NS\NSPopUpButton setPreferredEdge(int handle, int preferredEdge) -> void */
void ns_nspopupbutton_set_preferred_edge(zval *handle, zval *preferredEdge);

/*@zep NS\NSPopUpButton usesItemFromMenu(int handle) -> bool */
zend_long ns_nspopupbutton_uses_item_from_menu(zval *handle);
/*@zep NS\NSPopUpButton setUsesItemFromMenu(int handle, bool usesItemFromMenu) -> void */
void ns_nspopupbutton_set_uses_item_from_menu(zval *handle, zval *usesItemFromMenu);

/*@zep NS\NSPopUpButton altersStateOfSelectedItem(int handle) -> bool */
zend_long ns_nspopupbutton_alters_state_of_selected_item(zval *handle);
/*@zep NS\NSPopUpButton setAltersStateOfSelectedItem(int handle, bool altersStateOfSelectedItem) -> void */
void ns_nspopupbutton_set_alters_state_of_selected_item(zval *handle, zval *altersStateOfSelectedItem);

/* ---- Adding and Removing Items ---- */

/*@zep NS\NSPopUpButton addItemWithTitle(int handle, string title) -> void */
void ns_nspopupbutton_add_item_with_title(zval *handle, zval *title);
/*@zep NS\NSPopUpButton addItemsWithTitles(int handle, array itemTitles) -> void */
void ns_nspopupbutton_add_items_with_titles(zval *handle, zval *itemTitles);
/*@zep NS\NSPopUpButton insertItemWithTitleAtIndex(int handle, string title, int index) -> void */
void ns_nspopupbutton_insert_item_with_title_at_index(zval *handle, zval *title, zval *index);

/*@zep NS\NSPopUpButton removeItemWithTitle(int handle, string title) -> void */
void ns_nspopupbutton_remove_item_with_title(zval *handle, zval *title);
/*@zep NS\NSPopUpButton removeItemAtIndex(int handle, int index) -> void */
void ns_nspopupbutton_remove_item_at_index(zval *handle, zval *index);
/*@zep NS\NSPopUpButton removeAllItems(int handle) -> void */
void ns_nspopupbutton_remove_all_items(zval *handle);

/* ---- Accessing Items ---- */

/*@zep NS\NSPopUpButton itemArray(int handle) -> array */
void ns_nspopupbutton_item_array(zval *return_value, zval *handle);
/*@zep NS\NSPopUpButton numberOfItems(int handle) -> int */
zend_long ns_nspopupbutton_number_of_items(zval *handle);

/*@zep NS\NSPopUpButton indexOfItem(int handle, int item) -> int */
zend_long ns_nspopupbutton_index_of_item(zval *handle, zval *item);
/*@zep NS\NSPopUpButton indexOfItemWithTitle(int handle, string title) -> int */
zend_long ns_nspopupbutton_index_of_item_with_title(zval *handle, zval *title);
/*@zep NS\NSPopUpButton indexOfItemWithTag(int handle, int tag) -> int */
zend_long ns_nspopupbutton_index_of_item_with_tag(zval *handle, zval *tag);
/*@zep NS\NSPopUpButton indexOfItemWithRepresentedObject(int handle, int obj) -> int */
zend_long ns_nspopupbutton_index_of_item_with_represented_object(zval *handle, zval *obj);
/*@zep NS\NSPopUpButton indexOfItemWithTargetAndAction(int handle, int target, var action) -> int */
zend_long ns_nspopupbutton_index_of_item_with_target_and_action(zval *handle, zval *target, zval *action);

/*@zep NS\NSPopUpButton itemAtIndex(int handle, int index) -> int */
zend_long ns_nspopupbutton_item_at_index(zval *handle, zval *index);
/*@zep NS\NSPopUpButton itemWithTitle(int handle, string title) -> int */
zend_long ns_nspopupbutton_item_with_title(zval *handle, zval *title);
/*@zep NS\NSPopUpButton lastItem(int handle) -> int */
zend_long ns_nspopupbutton_last_item(zval *handle);

/* ---- Selecting Items ---- */

/*@zep NS\NSPopUpButton selectItem(int handle, int item) -> void */
void ns_nspopupbutton_select_item(zval *handle, zval *item);
/*@zep NS\NSPopUpButton selectItemAtIndex(int handle, int index) -> void */
void ns_nspopupbutton_select_item_at_index(zval *handle, zval *index);
/*@zep NS\NSPopUpButton selectItemWithTitle(int handle, string title) -> void */
void ns_nspopupbutton_select_item_with_title(zval *handle, zval *title);
/*@zep NS\NSPopUpButton selectItemWithTag(int handle, int tag) -> bool */
zend_long ns_nspopupbutton_select_item_with_tag(zval *handle, zval *tag);
/*@zep NS\NSPopUpButton setTitle(int handle, string title) -> void */
void ns_nspopupbutton_set_title(zval *handle, zval *title);

/*@zep NS\NSPopUpButton selectedItem(int handle) -> int */
zend_long ns_nspopupbutton_selected_item(zval *handle);
/*@zep NS\NSPopUpButton indexOfSelectedItem(int handle) -> int */
zend_long ns_nspopupbutton_index_of_selected_item(zval *handle);
/*@zep NS\NSPopUpButton selectedTag(int handle) -> int */
zend_long ns_nspopupbutton_selected_tag(zval *handle);
/*@zep NS\NSPopUpButton synchronizeTitleAndSelectedItem(int handle) -> void */
void ns_nspopupbutton_synchronize_title_and_selected_item(zval *handle);

/* ---- Item Title Conveniences ---- */

/*@zep NS\NSPopUpButton itemTitleAtIndex(int handle, int index) -> string */
void ns_nspopupbutton_item_title_at_index(zval *return_value, zval *handle, zval *index);
/*@zep NS\NSPopUpButton itemTitles(int handle) -> array */
void ns_nspopupbutton_item_titles(zval *return_value, zval *handle);
/*@zep NS\NSPopUpButton titleOfSelectedItem(int handle) -> var */
void ns_nspopupbutton_title_of_selected_item(zval *return_value, zval *handle);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_POPUPBUTTON_H */
