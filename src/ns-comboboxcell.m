#include "ns-comboboxcell.h"
#include "ns-value.h"

/* ====================================================================== */
/* NSComboBoxCell                                                         */
/* ====================================================================== */

zend_long ns_nscomboboxcell_init_text_cell(zval *string_)
{
    @autoreleasepool {
        return ns_handle_for([[NSComboBoxCell alloc] initTextCell:ns_arg_string(string_)]);
    }
}

zend_long ns_nscomboboxcell_has_vertical_scroller(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSComboBoxCell *c = NS_ARG_AS(NSComboBoxCell, handle);
        r = (c != nil && [c hasVerticalScroller]) ? 1 : 0;
    }
    return r;
}

void ns_nscomboboxcell_set_has_vertical_scroller(zval *handle, zval *hasVerticalScroller)
{
    @autoreleasepool {
        NSComboBoxCell *c = NS_ARG_AS(NSComboBoxCell, handle);
        if (c == nil) return;
        [c setHasVerticalScroller:ns_arg_bool(hasVerticalScroller)];
    }
}

void ns_nscomboboxcell_intercell_spacing(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSComboBoxCell *c = NS_ARG_AS(NSComboBoxCell, handle);
        ns_ret_size(return_value, c != nil ? [c intercellSpacing] : NSZeroSize);
    }
}

void ns_nscomboboxcell_set_intercell_spacing(zval *handle, zval *width, zval *height)
{
    @autoreleasepool {
        NSComboBoxCell *c = NS_ARG_AS(NSComboBoxCell, handle);
        if (c == nil) return;
        [c setIntercellSpacing:ns_arg_size(width, height)];
    }
}

double ns_nscomboboxcell_item_height(zval *handle)
{
    double r = 0.0;
    @autoreleasepool {
        NSComboBoxCell *c = NS_ARG_AS(NSComboBoxCell, handle);
        r = c != nil ? (double) [c itemHeight] : 0.0;
    }
    return r;
}

void ns_nscomboboxcell_set_item_height(zval *handle, zval *itemHeight)
{
    @autoreleasepool {
        NSComboBoxCell *c = NS_ARG_AS(NSComboBoxCell, handle);
        if (c == nil) return;
        [c setItemHeight:(CGFloat) ns_arg_double(itemHeight)];
    }
}

zend_long ns_nscomboboxcell_number_of_visible_items(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSComboBoxCell *c = NS_ARG_AS(NSComboBoxCell, handle);
        r = c != nil ? (zend_long) [c numberOfVisibleItems] : 0;
    }
    return r;
}

void ns_nscomboboxcell_set_number_of_visible_items(zval *handle, zval *numberOfVisibleItems)
{
    @autoreleasepool {
        NSComboBoxCell *c = NS_ARG_AS(NSComboBoxCell, handle);
        if (c == nil) return;
        [c setNumberOfVisibleItems:(NSInteger) ns_arg_long(numberOfVisibleItems)];
    }
}

zend_long ns_nscomboboxcell_is_button_bordered(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSComboBoxCell *c = NS_ARG_AS(NSComboBoxCell, handle);
        r = (c != nil && [c isButtonBordered]) ? 1 : 0;
    }
    return r;
}

void ns_nscomboboxcell_set_button_bordered(zval *handle, zval *buttonBordered)
{
    @autoreleasepool {
        NSComboBoxCell *c = NS_ARG_AS(NSComboBoxCell, handle);
        if (c == nil) return;
        [c setButtonBordered:ns_arg_bool(buttonBordered)];
    }
}

void ns_nscomboboxcell_reload_data(zval *handle)
{
    @autoreleasepool {
        NSComboBoxCell *c = NS_ARG_AS(NSComboBoxCell, handle);
        if (c == nil) return;
        [c reloadData];
    }
}

void ns_nscomboboxcell_note_number_of_items_changed(zval *handle)
{
    @autoreleasepool {
        NSComboBoxCell *c = NS_ARG_AS(NSComboBoxCell, handle);
        if (c == nil) return;
        [c noteNumberOfItemsChanged];
    }
}

zend_long ns_nscomboboxcell_uses_data_source(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSComboBoxCell *c = NS_ARG_AS(NSComboBoxCell, handle);
        r = (c != nil && [c usesDataSource]) ? 1 : 0;
    }
    return r;
}

void ns_nscomboboxcell_set_uses_data_source(zval *handle, zval *usesDataSource)
{
    @autoreleasepool {
        NSComboBoxCell *c = NS_ARG_AS(NSComboBoxCell, handle);
        if (c == nil) return;
        [c setUsesDataSource:ns_arg_bool(usesDataSource)];
    }
}

void ns_nscomboboxcell_scroll_item_at_index_to_top(zval *handle, zval *index)
{
    @autoreleasepool {
        NSComboBoxCell *c = NS_ARG_AS(NSComboBoxCell, handle);
        if (c == nil) return;
        [c scrollItemAtIndexToTop:(NSInteger) ns_arg_long(index)];
    }
}

void ns_nscomboboxcell_scroll_item_at_index_to_visible(zval *handle, zval *index)
{
    @autoreleasepool {
        NSComboBoxCell *c = NS_ARG_AS(NSComboBoxCell, handle);
        if (c == nil) return;
        [c scrollItemAtIndexToVisible:(NSInteger) ns_arg_long(index)];
    }
}

void ns_nscomboboxcell_select_item_at_index(zval *handle, zval *index)
{
    @autoreleasepool {
        NSComboBoxCell *c = NS_ARG_AS(NSComboBoxCell, handle);
        if (c == nil) return;
        [c selectItemAtIndex:(NSInteger) ns_arg_long(index)];
    }
}

void ns_nscomboboxcell_deselect_item_at_index(zval *handle, zval *index)
{
    @autoreleasepool {
        NSComboBoxCell *c = NS_ARG_AS(NSComboBoxCell, handle);
        if (c == nil) return;
        [c deselectItemAtIndex:(NSInteger) ns_arg_long(index)];
    }
}

zend_long ns_nscomboboxcell_index_of_selected_item(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSComboBoxCell *c = NS_ARG_AS(NSComboBoxCell, handle);
        r = c != nil ? (zend_long) [c indexOfSelectedItem] : 0;
    }
    return r;
}

zend_long ns_nscomboboxcell_number_of_items(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSComboBoxCell *c = NS_ARG_AS(NSComboBoxCell, handle);
        r = c != nil ? (zend_long) [c numberOfItems] : 0;
    }
    return r;
}

zend_long ns_nscomboboxcell_completes(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSComboBoxCell *c = NS_ARG_AS(NSComboBoxCell, handle);
        r = (c != nil && [c completes]) ? 1 : 0;
    }
    return r;
}

void ns_nscomboboxcell_set_completes(zval *handle, zval *completes)
{
    @autoreleasepool {
        NSComboBoxCell *c = NS_ARG_AS(NSComboBoxCell, handle);
        if (c == nil) return;
        [c setCompletes:ns_arg_bool(completes)];
    }
}

void ns_nscomboboxcell_completed_string(zval *return_value, zval *handle, zval *string_)
{
    @autoreleasepool {
        NSComboBoxCell *c = NS_ARG_AS(NSComboBoxCell, handle);
        ns_ret_string(return_value, c != nil ? [c completedString:ns_arg_string(string_)] : nil);
    }
}

zend_long ns_nscomboboxcell_data_source(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSComboBoxCell *c = NS_ARG_AS(NSComboBoxCell, handle);
        h = ns_handle_for(c != nil ? [c dataSource] : nil);
    }
    return h;
}

void ns_nscomboboxcell_set_data_source(zval *handle, zval *dataSource)
{
    @autoreleasepool {
        NSComboBoxCell *c = NS_ARG_AS(NSComboBoxCell, handle);
        if (c == nil) return;
        [c setDataSource:ns_arg_object(dataSource)];
    }
}

void ns_nscomboboxcell_add_item_with_object_value(zval *handle, zval *object_)
{
    @autoreleasepool {
        NSComboBoxCell *c = NS_ARG_AS(NSComboBoxCell, handle);
        if (c == nil) return;
        [c addItemWithObjectValue:ns_arg_object(object_)];
    }
}

void ns_nscomboboxcell_add_items_with_object_values(zval *handle, zval *objects)
{
    @autoreleasepool {
        NSComboBoxCell *c = NS_ARG_AS(NSComboBoxCell, handle);
        if (c == nil) return;
        [c addItemsWithObjectValues:ns_arg_object_array(objects)];
    }
}

void ns_nscomboboxcell_insert_item_with_object_value_at_index(zval *handle, zval *object_, zval *index)
{
    @autoreleasepool {
        NSComboBoxCell *c = NS_ARG_AS(NSComboBoxCell, handle);
        if (c == nil) return;
        [c insertItemWithObjectValue:ns_arg_object(object_) atIndex:(NSInteger) ns_arg_long(index)];
    }
}

void ns_nscomboboxcell_remove_item_with_object_value(zval *handle, zval *object_)
{
    @autoreleasepool {
        NSComboBoxCell *c = NS_ARG_AS(NSComboBoxCell, handle);
        if (c == nil) return;
        [c removeItemWithObjectValue:ns_arg_object(object_)];
    }
}

void ns_nscomboboxcell_remove_item_at_index(zval *handle, zval *index)
{
    @autoreleasepool {
        NSComboBoxCell *c = NS_ARG_AS(NSComboBoxCell, handle);
        if (c == nil) return;
        [c removeItemAtIndex:(NSInteger) ns_arg_long(index)];
    }
}

void ns_nscomboboxcell_remove_all_items(zval *handle)
{
    @autoreleasepool {
        NSComboBoxCell *c = NS_ARG_AS(NSComboBoxCell, handle);
        if (c == nil) return;
        [c removeAllItems];
    }
}

void ns_nscomboboxcell_select_item_with_object_value(zval *handle, zval *object_)
{
    @autoreleasepool {
        NSComboBoxCell *c = NS_ARG_AS(NSComboBoxCell, handle);
        if (c == nil) return;
        [c selectItemWithObjectValue:ns_arg_object(object_)];
    }
}

zend_long ns_nscomboboxcell_item_object_value_at_index(zval *handle, zval *index)
{
    zend_long h = 0;
    @autoreleasepool {
        NSComboBoxCell *c = NS_ARG_AS(NSComboBoxCell, handle);
        h = ns_handle_for(c != nil ? [c itemObjectValueAtIndex:(NSInteger) ns_arg_long(index)] : nil);
    }
    return h;
}

zend_long ns_nscomboboxcell_object_value_of_selected_item(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSComboBoxCell *c = NS_ARG_AS(NSComboBoxCell, handle);
        h = ns_handle_for(c != nil ? [c objectValueOfSelectedItem] : nil);
    }
    return h;
}

zend_long ns_nscomboboxcell_index_of_item_with_object_value(zval *handle, zval *object_)
{
    zend_long r = 0;
    @autoreleasepool {
        NSComboBoxCell *c = NS_ARG_AS(NSComboBoxCell, handle);
        r = c != nil ? (zend_long) [c indexOfItemWithObjectValue:ns_arg_object(object_)] : 0;
    }
    return r;
}

void ns_nscomboboxcell_object_values(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSComboBoxCell *c = NS_ARG_AS(NSComboBoxCell, handle);
        if (c == nil) { ZVAL_NULL(return_value); return; }
        ns_ret_object_array(return_value, [c objectValues]);
    }
}
