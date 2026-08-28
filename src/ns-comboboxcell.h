#ifndef PHP_APPKIT_NS_COMBOBOXCELL_H
#define PHP_APPKIT_NS_COMBOBOXCELL_H

/*
 * Faithful 1:1 binding of AppKit NSComboBoxCell.h. Every member of
 * the class (the single base interface; no same-file categories) is
 * either bound or reserved. Nothing is reserved — the header has no
 * blocks, NSCoder, NSAttributedString, NSData, Class, or
 * API_DEPRECATED members. The NSComboBoxCellDataSource protocol
 * is not a class member. Inherited NSTextFieldCell / NSActionCell /
 * NSCell members stay on those classes. No designated initializer
 * is declared here — construction is synthesized initTextCell
 * (allocs NSComboBoxCell). intercellSpacing follows the NSSize
 * convention. completedString: takes a string and returns a
 * nullable string. id object values and objectValues cross as
 * handles. Nullable objectValueOfSelectedItem is handle 0.
 */

#include "php.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ---- NSComboBoxCell ---- */

/*@zep-construct NS\NSComboBoxCell initTextCell(string string_) -> int */
zend_long ns_nscomboboxcell_init_text_cell(zval *string_);

/*@zep NS\NSComboBoxCell hasVerticalScroller(int handle) -> bool */
zend_long ns_nscomboboxcell_has_vertical_scroller(zval *handle);
/*@zep NS\NSComboBoxCell setHasVerticalScroller(int handle, bool hasVerticalScroller) -> void */
void ns_nscomboboxcell_set_has_vertical_scroller(zval *handle, zval *hasVerticalScroller);

/*@zep NS\NSComboBoxCell intercellSpacing(int handle) -> array */
void ns_nscomboboxcell_intercell_spacing(zval *return_value, zval *handle);
/*@zep NS\NSComboBoxCell setIntercellSpacing(int handle, double width, double height) -> void */
void ns_nscomboboxcell_set_intercell_spacing(zval *handle, zval *width, zval *height);

/*@zep NS\NSComboBoxCell itemHeight(int handle) -> double */
double ns_nscomboboxcell_item_height(zval *handle);
/*@zep NS\NSComboBoxCell setItemHeight(int handle, double itemHeight) -> void */
void ns_nscomboboxcell_set_item_height(zval *handle, zval *itemHeight);

/*@zep NS\NSComboBoxCell numberOfVisibleItems(int handle) -> int */
zend_long ns_nscomboboxcell_number_of_visible_items(zval *handle);
/*@zep NS\NSComboBoxCell setNumberOfVisibleItems(int handle, int numberOfVisibleItems) -> void */
void ns_nscomboboxcell_set_number_of_visible_items(zval *handle, zval *numberOfVisibleItems);

/*@zep NS\NSComboBoxCell isButtonBordered(int handle) -> bool */
zend_long ns_nscomboboxcell_is_button_bordered(zval *handle);
/*@zep NS\NSComboBoxCell setButtonBordered(int handle, bool buttonBordered) -> void */
void ns_nscomboboxcell_set_button_bordered(zval *handle, zval *buttonBordered);

/*@zep NS\NSComboBoxCell reloadData(int handle) -> void */
void ns_nscomboboxcell_reload_data(zval *handle);
/*@zep NS\NSComboBoxCell noteNumberOfItemsChanged(int handle) -> void */
void ns_nscomboboxcell_note_number_of_items_changed(zval *handle);

/*@zep NS\NSComboBoxCell usesDataSource(int handle) -> bool */
zend_long ns_nscomboboxcell_uses_data_source(zval *handle);
/*@zep NS\NSComboBoxCell setUsesDataSource(int handle, bool usesDataSource) -> void */
void ns_nscomboboxcell_set_uses_data_source(zval *handle, zval *usesDataSource);

/*@zep NS\NSComboBoxCell scrollItemAtIndexToTop(int handle, int index) -> void */
void ns_nscomboboxcell_scroll_item_at_index_to_top(zval *handle, zval *index);
/*@zep NS\NSComboBoxCell scrollItemAtIndexToVisible(int handle, int index) -> void */
void ns_nscomboboxcell_scroll_item_at_index_to_visible(zval *handle, zval *index);

/*@zep NS\NSComboBoxCell selectItemAtIndex(int handle, int index) -> void */
void ns_nscomboboxcell_select_item_at_index(zval *handle, zval *index);
/*@zep NS\NSComboBoxCell deselectItemAtIndex(int handle, int index) -> void */
void ns_nscomboboxcell_deselect_item_at_index(zval *handle, zval *index);

/*@zep NS\NSComboBoxCell indexOfSelectedItem(int handle) -> int */
zend_long ns_nscomboboxcell_index_of_selected_item(zval *handle);
/*@zep NS\NSComboBoxCell numberOfItems(int handle) -> int */
zend_long ns_nscomboboxcell_number_of_items(zval *handle);

/*@zep NS\NSComboBoxCell completes(int handle) -> bool */
zend_long ns_nscomboboxcell_completes(zval *handle);
/*@zep NS\NSComboBoxCell setCompletes(int handle, bool completes) -> void */
void ns_nscomboboxcell_set_completes(zval *handle, zval *completes);

/*@zep NS\NSComboBoxCell completedString(int handle, string string_) -> var */
void ns_nscomboboxcell_completed_string(zval *return_value, zval *handle, zval *string_);

/*@zep NS\NSComboBoxCell dataSource(int handle) -> int */
zend_long ns_nscomboboxcell_data_source(zval *handle);
/*@zep NS\NSComboBoxCell setDataSource(int handle, int dataSource) -> void */
void ns_nscomboboxcell_set_data_source(zval *handle, zval *dataSource);

/*@zep NS\NSComboBoxCell addItemWithObjectValue(int handle, int object_) -> void */
void ns_nscomboboxcell_add_item_with_object_value(zval *handle, zval *object_);
/*@zep NS\NSComboBoxCell addItemsWithObjectValues(int handle, array objects) -> void */
void ns_nscomboboxcell_add_items_with_object_values(zval *handle, zval *objects);
/*@zep NS\NSComboBoxCell insertItemWithObjectValueAtIndex(int handle, int object_, int index) -> void */
void ns_nscomboboxcell_insert_item_with_object_value_at_index(zval *handle, zval *object_, zval *index);
/*@zep NS\NSComboBoxCell removeItemWithObjectValue(int handle, int object_) -> void */
void ns_nscomboboxcell_remove_item_with_object_value(zval *handle, zval *object_);
/*@zep NS\NSComboBoxCell removeItemAtIndex(int handle, int index) -> void */
void ns_nscomboboxcell_remove_item_at_index(zval *handle, zval *index);
/*@zep NS\NSComboBoxCell removeAllItems(int handle) -> void */
void ns_nscomboboxcell_remove_all_items(zval *handle);
/*@zep NS\NSComboBoxCell selectItemWithObjectValue(int handle, int object_) -> void */
void ns_nscomboboxcell_select_item_with_object_value(zval *handle, zval *object_);
/*@zep NS\NSComboBoxCell itemObjectValueAtIndex(int handle, int index) -> int */
zend_long ns_nscomboboxcell_item_object_value_at_index(zval *handle, zval *index);
/*@zep NS\NSComboBoxCell objectValueOfSelectedItem(int handle) -> int */
zend_long ns_nscomboboxcell_object_value_of_selected_item(zval *handle);
/*@zep NS\NSComboBoxCell indexOfItemWithObjectValue(int handle, int object_) -> int */
zend_long ns_nscomboboxcell_index_of_item_with_object_value(zval *handle, zval *object_);
/*@zep NS\NSComboBoxCell objectValues(int handle) -> array */
void ns_nscomboboxcell_object_values(zval *return_value, zval *handle);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_COMBOBOXCELL_H */
