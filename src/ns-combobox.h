#ifndef PHP_APPKIT_NS_COMBOBOX_H
#define PHP_APPKIT_NS_COMBOBOX_H

/*
 * Faithful 1:1 binding of AppKit NSComboBox.h. Every member of
 * the class (the single base interface; no same-file categories) is
 * either bound or reserved. Nothing is reserved — the header has no
 * blocks, NSCoder, NSAttributedString, NSData, Class, or
 * API_DEPRECATED members. The NSComboBoxDataSource and
 * NSComboBoxDelegate protocols are not class members. The
 * notification names (NSComboBoxWillPopUpNotification and
 * siblings) are not class members. Inherited NSTextField /
 * NSControl / NSView members stay on those classes. The
 * redeclared delegate property binds here. No designated
 * initializer is declared here — construction is synthesized
 * initWithFrame (allocs NSComboBox). intercellSpacing follows
 * the NSSize convention. id object values and objectValues
 * cross as handles. Nullable objectValueOfSelectedItem is
 * handle 0.
 */

#include "php.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ---- NSComboBox ---- */

/*@zep-construct NS\NSComboBox initWithFrame(double x, double y, double width, double height) -> int */
zend_long ns_nscombobox_init_with_frame(zval *x, zval *y, zval *width, zval *height);

/*@zep NS\NSComboBox hasVerticalScroller(int handle) -> bool */
zend_long ns_nscombobox_has_vertical_scroller(zval *handle);
/*@zep NS\NSComboBox setHasVerticalScroller(int handle, bool hasVerticalScroller) -> void */
void ns_nscombobox_set_has_vertical_scroller(zval *handle, zval *hasVerticalScroller);

/*@zep NS\NSComboBox intercellSpacing(int handle) -> array */
void ns_nscombobox_intercell_spacing(zval *return_value, zval *handle);
/*@zep NS\NSComboBox setIntercellSpacing(int handle, double width, double height) -> void */
void ns_nscombobox_set_intercell_spacing(zval *handle, zval *width, zval *height);

/*@zep NS\NSComboBox itemHeight(int handle) -> double */
double ns_nscombobox_item_height(zval *handle);
/*@zep NS\NSComboBox setItemHeight(int handle, double itemHeight) -> void */
void ns_nscombobox_set_item_height(zval *handle, zval *itemHeight);

/*@zep NS\NSComboBox numberOfVisibleItems(int handle) -> int */
zend_long ns_nscombobox_number_of_visible_items(zval *handle);
/*@zep NS\NSComboBox setNumberOfVisibleItems(int handle, int numberOfVisibleItems) -> void */
void ns_nscombobox_set_number_of_visible_items(zval *handle, zval *numberOfVisibleItems);

/*@zep NS\NSComboBox isButtonBordered(int handle) -> bool */
zend_long ns_nscombobox_is_button_bordered(zval *handle);
/*@zep NS\NSComboBox setButtonBordered(int handle, bool buttonBordered) -> void */
void ns_nscombobox_set_button_bordered(zval *handle, zval *buttonBordered);

/*@zep NS\NSComboBox reloadData(int handle) -> void */
void ns_nscombobox_reload_data(zval *handle);
/*@zep NS\NSComboBox noteNumberOfItemsChanged(int handle) -> void */
void ns_nscombobox_note_number_of_items_changed(zval *handle);

/*@zep NS\NSComboBox usesDataSource(int handle) -> bool */
zend_long ns_nscombobox_uses_data_source(zval *handle);
/*@zep NS\NSComboBox setUsesDataSource(int handle, bool usesDataSource) -> void */
void ns_nscombobox_set_uses_data_source(zval *handle, zval *usesDataSource);

/*@zep NS\NSComboBox scrollItemAtIndexToTop(int handle, int index) -> void */
void ns_nscombobox_scroll_item_at_index_to_top(zval *handle, zval *index);
/*@zep NS\NSComboBox scrollItemAtIndexToVisible(int handle, int index) -> void */
void ns_nscombobox_scroll_item_at_index_to_visible(zval *handle, zval *index);

/*@zep NS\NSComboBox selectItemAtIndex(int handle, int index) -> void */
void ns_nscombobox_select_item_at_index(zval *handle, zval *index);
/*@zep NS\NSComboBox deselectItemAtIndex(int handle, int index) -> void */
void ns_nscombobox_deselect_item_at_index(zval *handle, zval *index);

/*@zep NS\NSComboBox indexOfSelectedItem(int handle) -> int */
zend_long ns_nscombobox_index_of_selected_item(zval *handle);
/*@zep NS\NSComboBox numberOfItems(int handle) -> int */
zend_long ns_nscombobox_number_of_items(zval *handle);

/*@zep NS\NSComboBox completes(int handle) -> bool */
zend_long ns_nscombobox_completes(zval *handle);
/*@zep NS\NSComboBox setCompletes(int handle, bool completes) -> void */
void ns_nscombobox_set_completes(zval *handle, zval *completes);

/*@zep NS\NSComboBox delegate(int handle) -> int */
zend_long ns_nscombobox_delegate(zval *handle);
/*@zep NS\NSComboBox setDelegate(int handle, int delegate) -> void */
void ns_nscombobox_set_delegate(zval *handle, zval *delegate);

/*@zep NS\NSComboBox dataSource(int handle) -> int */
zend_long ns_nscombobox_data_source(zval *handle);
/*@zep NS\NSComboBox setDataSource(int handle, int dataSource) -> void */
void ns_nscombobox_set_data_source(zval *handle, zval *dataSource);

/*@zep NS\NSComboBox addItemWithObjectValue(int handle, int object_) -> void */
void ns_nscombobox_add_item_with_object_value(zval *handle, zval *object_);
/*@zep NS\NSComboBox addItemsWithObjectValues(int handle, array objects) -> void */
void ns_nscombobox_add_items_with_object_values(zval *handle, zval *objects);
/*@zep NS\NSComboBox insertItemWithObjectValueAtIndex(int handle, int object_, int index) -> void */
void ns_nscombobox_insert_item_with_object_value_at_index(zval *handle, zval *object_, zval *index);
/*@zep NS\NSComboBox removeItemWithObjectValue(int handle, int object_) -> void */
void ns_nscombobox_remove_item_with_object_value(zval *handle, zval *object_);
/*@zep NS\NSComboBox removeItemAtIndex(int handle, int index) -> void */
void ns_nscombobox_remove_item_at_index(zval *handle, zval *index);
/*@zep NS\NSComboBox removeAllItems(int handle) -> void */
void ns_nscombobox_remove_all_items(zval *handle);
/*@zep NS\NSComboBox selectItemWithObjectValue(int handle, int object_) -> void */
void ns_nscombobox_select_item_with_object_value(zval *handle, zval *object_);
/*@zep NS\NSComboBox itemObjectValueAtIndex(int handle, int index) -> int */
zend_long ns_nscombobox_item_object_value_at_index(zval *handle, zval *index);
/*@zep NS\NSComboBox objectValueOfSelectedItem(int handle) -> int */
zend_long ns_nscombobox_object_value_of_selected_item(zval *handle);
/*@zep NS\NSComboBox indexOfItemWithObjectValue(int handle, int object_) -> int */
zend_long ns_nscombobox_index_of_item_with_object_value(zval *handle, zval *object_);
/*@zep NS\NSComboBox objectValues(int handle) -> array */
void ns_nscombobox_object_values(zval *return_value, zval *handle);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_COMBOBOX_H */
