#include "ns-combobox.h"
#include "ns-value.h"

/* ====================================================================== */
/* NSComboBox                                                             */
/* ====================================================================== */

zend_long ns_nscombobox_init_with_frame(zval *x, zval *y, zval *width, zval *height)
{
    @autoreleasepool {
        return ns_handle_for([[NSComboBox alloc] initWithFrame:ns_arg_rect(x, y, width, height)]);
    }
}

zend_long ns_nscombobox_has_vertical_scroller(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSComboBox *b = NS_ARG_AS(NSComboBox, handle);
        r = (b != nil && [b hasVerticalScroller]) ? 1 : 0;
    }
    return r;
}

void ns_nscombobox_set_has_vertical_scroller(zval *handle, zval *hasVerticalScroller)
{
    @autoreleasepool {
        NSComboBox *b = NS_ARG_AS(NSComboBox, handle);
        if (b == nil) return;
        [b setHasVerticalScroller:ns_arg_bool(hasVerticalScroller)];
    }
}

void ns_nscombobox_intercell_spacing(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSComboBox *b = NS_ARG_AS(NSComboBox, handle);
        ns_ret_size(return_value, b != nil ? [b intercellSpacing] : NSZeroSize);
    }
}

void ns_nscombobox_set_intercell_spacing(zval *handle, zval *width, zval *height)
{
    @autoreleasepool {
        NSComboBox *b = NS_ARG_AS(NSComboBox, handle);
        if (b == nil) return;
        [b setIntercellSpacing:ns_arg_size(width, height)];
    }
}

double ns_nscombobox_item_height(zval *handle)
{
    double r = 0.0;
    @autoreleasepool {
        NSComboBox *b = NS_ARG_AS(NSComboBox, handle);
        r = b != nil ? (double) [b itemHeight] : 0.0;
    }
    return r;
}

void ns_nscombobox_set_item_height(zval *handle, zval *itemHeight)
{
    @autoreleasepool {
        NSComboBox *b = NS_ARG_AS(NSComboBox, handle);
        if (b == nil) return;
        [b setItemHeight:(CGFloat) ns_arg_double(itemHeight)];
    }
}

zend_long ns_nscombobox_number_of_visible_items(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSComboBox *b = NS_ARG_AS(NSComboBox, handle);
        r = b != nil ? (zend_long) [b numberOfVisibleItems] : 0;
    }
    return r;
}

void ns_nscombobox_set_number_of_visible_items(zval *handle, zval *numberOfVisibleItems)
{
    @autoreleasepool {
        NSComboBox *b = NS_ARG_AS(NSComboBox, handle);
        if (b == nil) return;
        [b setNumberOfVisibleItems:(NSInteger) ns_arg_long(numberOfVisibleItems)];
    }
}

zend_long ns_nscombobox_is_button_bordered(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSComboBox *b = NS_ARG_AS(NSComboBox, handle);
        r = (b != nil && [b isButtonBordered]) ? 1 : 0;
    }
    return r;
}

void ns_nscombobox_set_button_bordered(zval *handle, zval *buttonBordered)
{
    @autoreleasepool {
        NSComboBox *b = NS_ARG_AS(NSComboBox, handle);
        if (b == nil) return;
        [b setButtonBordered:ns_arg_bool(buttonBordered)];
    }
}

void ns_nscombobox_reload_data(zval *handle)
{
    @autoreleasepool {
        NSComboBox *b = NS_ARG_AS(NSComboBox, handle);
        if (b == nil) return;
        [b reloadData];
    }
}

void ns_nscombobox_note_number_of_items_changed(zval *handle)
{
    @autoreleasepool {
        NSComboBox *b = NS_ARG_AS(NSComboBox, handle);
        if (b == nil) return;
        [b noteNumberOfItemsChanged];
    }
}

zend_long ns_nscombobox_uses_data_source(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSComboBox *b = NS_ARG_AS(NSComboBox, handle);
        r = (b != nil && [b usesDataSource]) ? 1 : 0;
    }
    return r;
}

void ns_nscombobox_set_uses_data_source(zval *handle, zval *usesDataSource)
{
    @autoreleasepool {
        NSComboBox *b = NS_ARG_AS(NSComboBox, handle);
        if (b == nil) return;
        [b setUsesDataSource:ns_arg_bool(usesDataSource)];
    }
}

void ns_nscombobox_scroll_item_at_index_to_top(zval *handle, zval *index)
{
    @autoreleasepool {
        NSComboBox *b = NS_ARG_AS(NSComboBox, handle);
        if (b == nil) return;
        [b scrollItemAtIndexToTop:(NSInteger) ns_arg_long(index)];
    }
}

void ns_nscombobox_scroll_item_at_index_to_visible(zval *handle, zval *index)
{
    @autoreleasepool {
        NSComboBox *b = NS_ARG_AS(NSComboBox, handle);
        if (b == nil) return;
        [b scrollItemAtIndexToVisible:(NSInteger) ns_arg_long(index)];
    }
}

void ns_nscombobox_select_item_at_index(zval *handle, zval *index)
{
    @autoreleasepool {
        NSComboBox *b = NS_ARG_AS(NSComboBox, handle);
        if (b == nil) return;
        [b selectItemAtIndex:(NSInteger) ns_arg_long(index)];
    }
}

void ns_nscombobox_deselect_item_at_index(zval *handle, zval *index)
{
    @autoreleasepool {
        NSComboBox *b = NS_ARG_AS(NSComboBox, handle);
        if (b == nil) return;
        [b deselectItemAtIndex:(NSInteger) ns_arg_long(index)];
    }
}

zend_long ns_nscombobox_index_of_selected_item(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSComboBox *b = NS_ARG_AS(NSComboBox, handle);
        r = b != nil ? (zend_long) [b indexOfSelectedItem] : 0;
    }
    return r;
}

zend_long ns_nscombobox_number_of_items(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSComboBox *b = NS_ARG_AS(NSComboBox, handle);
        r = b != nil ? (zend_long) [b numberOfItems] : 0;
    }
    return r;
}

zend_long ns_nscombobox_completes(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSComboBox *b = NS_ARG_AS(NSComboBox, handle);
        r = (b != nil && [b completes]) ? 1 : 0;
    }
    return r;
}

void ns_nscombobox_set_completes(zval *handle, zval *completes)
{
    @autoreleasepool {
        NSComboBox *b = NS_ARG_AS(NSComboBox, handle);
        if (b == nil) return;
        [b setCompletes:ns_arg_bool(completes)];
    }
}

zend_long ns_nscombobox_delegate(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSComboBox *b = NS_ARG_AS(NSComboBox, handle);
        h = ns_handle_for(b != nil ? [b delegate] : nil);
    }
    return h;
}

void ns_nscombobox_set_delegate(zval *handle, zval *delegate)
{
    @autoreleasepool {
        NSComboBox *b = NS_ARG_AS(NSComboBox, handle);
        if (b == nil) return;
        [b setDelegate:ns_arg_object(delegate)];
    }
}

zend_long ns_nscombobox_data_source(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSComboBox *b = NS_ARG_AS(NSComboBox, handle);
        h = ns_handle_for(b != nil ? [b dataSource] : nil);
    }
    return h;
}

void ns_nscombobox_set_data_source(zval *handle, zval *dataSource)
{
    @autoreleasepool {
        NSComboBox *b = NS_ARG_AS(NSComboBox, handle);
        if (b == nil) return;
        [b setDataSource:ns_arg_object(dataSource)];
    }
}

void ns_nscombobox_add_item_with_object_value(zval *handle, zval *object_)
{
    @autoreleasepool {
        NSComboBox *b = NS_ARG_AS(NSComboBox, handle);
        if (b == nil) return;
        [b addItemWithObjectValue:ns_arg_object(object_)];
    }
}

void ns_nscombobox_add_items_with_object_values(zval *handle, zval *objects)
{
    @autoreleasepool {
        NSComboBox *b = NS_ARG_AS(NSComboBox, handle);
        if (b == nil) return;
        [b addItemsWithObjectValues:ns_arg_object_array(objects)];
    }
}

void ns_nscombobox_insert_item_with_object_value_at_index(zval *handle, zval *object_, zval *index)
{
    @autoreleasepool {
        NSComboBox *b = NS_ARG_AS(NSComboBox, handle);
        if (b == nil) return;
        [b insertItemWithObjectValue:ns_arg_object(object_) atIndex:(NSInteger) ns_arg_long(index)];
    }
}

void ns_nscombobox_remove_item_with_object_value(zval *handle, zval *object_)
{
    @autoreleasepool {
        NSComboBox *b = NS_ARG_AS(NSComboBox, handle);
        if (b == nil) return;
        [b removeItemWithObjectValue:ns_arg_object(object_)];
    }
}

void ns_nscombobox_remove_item_at_index(zval *handle, zval *index)
{
    @autoreleasepool {
        NSComboBox *b = NS_ARG_AS(NSComboBox, handle);
        if (b == nil) return;
        [b removeItemAtIndex:(NSInteger) ns_arg_long(index)];
    }
}

void ns_nscombobox_remove_all_items(zval *handle)
{
    @autoreleasepool {
        NSComboBox *b = NS_ARG_AS(NSComboBox, handle);
        if (b == nil) return;
        [b removeAllItems];
    }
}

void ns_nscombobox_select_item_with_object_value(zval *handle, zval *object_)
{
    @autoreleasepool {
        NSComboBox *b = NS_ARG_AS(NSComboBox, handle);
        if (b == nil) return;
        [b selectItemWithObjectValue:ns_arg_object(object_)];
    }
}

zend_long ns_nscombobox_item_object_value_at_index(zval *handle, zval *index)
{
    zend_long h = 0;
    @autoreleasepool {
        NSComboBox *b = NS_ARG_AS(NSComboBox, handle);
        h = ns_handle_for(b != nil ? [b itemObjectValueAtIndex:(NSInteger) ns_arg_long(index)] : nil);
    }
    return h;
}

zend_long ns_nscombobox_object_value_of_selected_item(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSComboBox *b = NS_ARG_AS(NSComboBox, handle);
        h = ns_handle_for(b != nil ? [b objectValueOfSelectedItem] : nil);
    }
    return h;
}

zend_long ns_nscombobox_index_of_item_with_object_value(zval *handle, zval *object_)
{
    zend_long r = 0;
    @autoreleasepool {
        NSComboBox *b = NS_ARG_AS(NSComboBox, handle);
        r = b != nil ? (zend_long) [b indexOfItemWithObjectValue:ns_arg_object(object_)] : 0;
    }
    return r;
}

void ns_nscombobox_object_values(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSComboBox *b = NS_ARG_AS(NSComboBox, handle);
        if (b == nil) { ZVAL_NULL(return_value); return; }
        ns_ret_object_array(return_value, [b objectValues]);
    }
}
