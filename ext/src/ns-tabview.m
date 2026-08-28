#include "ns-tabview.h"
#include "ns-value.h"

/* ====================================================================== */
/* NSTabView                                                              */
/* ====================================================================== */

zend_long ns_nstabview_init_with_frame(zval *x, zval *y, zval *width, zval *height)
{
    @autoreleasepool {
        return ns_handle_for([[NSTabView alloc] initWithFrame:ns_arg_rect(x, y, width, height)]);
    }
}

void ns_nstabview_select_tab_view_item(zval *handle, zval *tabViewItem)
{
    @autoreleasepool {
        NSTabView *v = NS_ARG_AS(NSTabView, handle);
        if (v == nil) return;
        [v selectTabViewItem:NS_ARG_AS(NSTabViewItem, tabViewItem)];
    }
}

void ns_nstabview_select_tab_view_item_at_index(zval *handle, zval *index)
{
    @autoreleasepool {
        NSTabView *v = NS_ARG_AS(NSTabView, handle);
        if (v == nil) return;
        [v selectTabViewItemAtIndex:(NSInteger) ns_arg_long(index)];
    }
}

void ns_nstabview_select_tab_view_item_with_identifier(zval *handle, zval *identifier)
{
    @autoreleasepool {
        NSTabView *v = NS_ARG_AS(NSTabView, handle);
        if (v == nil) return;
        [v selectTabViewItemWithIdentifier:ns_arg_object(identifier)];
    }
}

void ns_nstabview_take_selected_tab_view_item_from_sender(zval *handle, zval *sender)
{
    @autoreleasepool {
        NSTabView *v = NS_ARG_AS(NSTabView, handle);
        if (v == nil) return;
        [v takeSelectedTabViewItemFromSender:ns_arg_object(sender)];
    }
}

void ns_nstabview_select_first_tab_view_item(zval *handle, zval *sender)
{
    @autoreleasepool {
        NSTabView *v = NS_ARG_AS(NSTabView, handle);
        if (v == nil) return;
        [v selectFirstTabViewItem:ns_arg_object(sender)];
    }
}

void ns_nstabview_select_last_tab_view_item(zval *handle, zval *sender)
{
    @autoreleasepool {
        NSTabView *v = NS_ARG_AS(NSTabView, handle);
        if (v == nil) return;
        [v selectLastTabViewItem:ns_arg_object(sender)];
    }
}

void ns_nstabview_select_next_tab_view_item(zval *handle, zval *sender)
{
    @autoreleasepool {
        NSTabView *v = NS_ARG_AS(NSTabView, handle);
        if (v == nil) return;
        [v selectNextTabViewItem:ns_arg_object(sender)];
    }
}

void ns_nstabview_select_previous_tab_view_item(zval *handle, zval *sender)
{
    @autoreleasepool {
        NSTabView *v = NS_ARG_AS(NSTabView, handle);
        if (v == nil) return;
        [v selectPreviousTabViewItem:ns_arg_object(sender)];
    }
}

zend_long ns_nstabview_selected_tab_view_item(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSTabView *v = NS_ARG_AS(NSTabView, handle);
        h = ns_handle_for(v != nil ? [v selectedTabViewItem] : nil);
    }
    return h;
}

zend_long ns_nstabview_font(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSTabView *v = NS_ARG_AS(NSTabView, handle);
        h = ns_handle_for(v != nil ? [v font] : nil);
    }
    return h;
}

void ns_nstabview_set_font(zval *handle, zval *font)
{
    @autoreleasepool {
        NSTabView *v = NS_ARG_AS(NSTabView, handle);
        if (v == nil) return;
        [v setFont:NS_ARG_AS(NSFont, font)];
    }
}

zend_long ns_nstabview_tab_view_type(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSTabView *v = NS_ARG_AS(NSTabView, handle);
        r = v != nil ? (zend_long) [v tabViewType] : 0;
    }
    return r;
}

void ns_nstabview_set_tab_view_type(zval *handle, zval *tabViewType)
{
    @autoreleasepool {
        NSTabView *v = NS_ARG_AS(NSTabView, handle);
        if (v == nil) return;
        [v setTabViewType:(NSTabViewType) ns_arg_long(tabViewType)];
    }
}

zend_long ns_nstabview_tab_position(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSTabView *v = NS_ARG_AS(NSTabView, handle);
        r = v != nil ? (zend_long) [v tabPosition] : 0;
    }
    return r;
}

void ns_nstabview_set_tab_position(zval *handle, zval *tabPosition)
{
    @autoreleasepool {
        NSTabView *v = NS_ARG_AS(NSTabView, handle);
        if (v == nil) return;
        [v setTabPosition:(NSTabPosition) ns_arg_long(tabPosition)];
    }
}

zend_long ns_nstabview_tab_view_border_type(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSTabView *v = NS_ARG_AS(NSTabView, handle);
        r = v != nil ? (zend_long) [v tabViewBorderType] : 0;
    }
    return r;
}

void ns_nstabview_set_tab_view_border_type(zval *handle, zval *tabViewBorderType)
{
    @autoreleasepool {
        NSTabView *v = NS_ARG_AS(NSTabView, handle);
        if (v == nil) return;
        [v setTabViewBorderType:(NSTabViewBorderType) ns_arg_long(tabViewBorderType)];
    }
}

void ns_nstabview_tab_view_items(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSTabView *v = NS_ARG_AS(NSTabView, handle);
        if (v == nil) { ZVAL_NULL(return_value); return; }
        ns_ret_object_array(return_value, [v tabViewItems]);
    }
}

void ns_nstabview_set_tab_view_items(zval *handle, zval *tabViewItems)
{
    @autoreleasepool {
        NSTabView *v = NS_ARG_AS(NSTabView, handle);
        if (v == nil) return;
        [v setTabViewItems:ns_arg_object_array(tabViewItems)];
    }
}

zend_long ns_nstabview_allows_truncated_labels(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSTabView *v = NS_ARG_AS(NSTabView, handle);
        r = (v != nil && [v allowsTruncatedLabels]) ? 1 : 0;
    }
    return r;
}

void ns_nstabview_set_allows_truncated_labels(zval *handle, zval *allowsTruncatedLabels)
{
    @autoreleasepool {
        NSTabView *v = NS_ARG_AS(NSTabView, handle);
        if (v == nil) return;
        [v setAllowsTruncatedLabels:ns_arg_bool(allowsTruncatedLabels)];
    }
}

void ns_nstabview_minimum_size(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSTabView *v = NS_ARG_AS(NSTabView, handle);
        ns_ret_size(return_value, v != nil ? [v minimumSize] : NSZeroSize);
    }
}

zend_long ns_nstabview_draws_background(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSTabView *v = NS_ARG_AS(NSTabView, handle);
        r = (v != nil && [v drawsBackground]) ? 1 : 0;
    }
    return r;
}

void ns_nstabview_set_draws_background(zval *handle, zval *drawsBackground)
{
    @autoreleasepool {
        NSTabView *v = NS_ARG_AS(NSTabView, handle);
        if (v == nil) return;
        [v setDrawsBackground:ns_arg_bool(drawsBackground)];
    }
}

zend_long ns_nstabview_control_size(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSTabView *v = NS_ARG_AS(NSTabView, handle);
        r = v != nil ? (zend_long) [v controlSize] : 0;
    }
    return r;
}

void ns_nstabview_set_control_size(zval *handle, zval *controlSize)
{
    @autoreleasepool {
        NSTabView *v = NS_ARG_AS(NSTabView, handle);
        if (v == nil) return;
        [v setControlSize:(NSControlSize) ns_arg_long(controlSize)];
    }
}

void ns_nstabview_add_tab_view_item(zval *handle, zval *tabViewItem)
{
    @autoreleasepool {
        NSTabView *v = NS_ARG_AS(NSTabView, handle);
        if (v == nil) return;
        [v addTabViewItem:NS_ARG_AS(NSTabViewItem, tabViewItem)];
    }
}

void ns_nstabview_insert_tab_view_item_at_index(zval *handle, zval *tabViewItem, zval *index)
{
    @autoreleasepool {
        NSTabView *v = NS_ARG_AS(NSTabView, handle);
        if (v == nil) return;
        [v insertTabViewItem:NS_ARG_AS(NSTabViewItem, tabViewItem) atIndex:(NSInteger) ns_arg_long(index)];
    }
}

void ns_nstabview_remove_tab_view_item(zval *handle, zval *tabViewItem)
{
    @autoreleasepool {
        NSTabView *v = NS_ARG_AS(NSTabView, handle);
        if (v == nil) return;
        [v removeTabViewItem:NS_ARG_AS(NSTabViewItem, tabViewItem)];
    }
}

zend_long ns_nstabview_delegate(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSTabView *v = NS_ARG_AS(NSTabView, handle);
        h = ns_handle_for(v != nil ? [v delegate] : nil);
    }
    return h;
}

void ns_nstabview_set_delegate(zval *handle, zval *delegate)
{
    @autoreleasepool {
        NSTabView *v = NS_ARG_AS(NSTabView, handle);
        if (v == nil) return;
        [v setDelegate:ns_arg_object(delegate)];
    }
}

zend_long ns_nstabview_tab_view_item_at_point(zval *handle, zval *x, zval *y)
{
    zend_long h = 0;
    @autoreleasepool {
        NSTabView *v = NS_ARG_AS(NSTabView, handle);
        h = ns_handle_for(v != nil ? [v tabViewItemAtPoint:ns_arg_point(x, y)] : nil);
    }
    return h;
}

void ns_nstabview_content_rect(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSTabView *v = NS_ARG_AS(NSTabView, handle);
        ns_ret_rect(return_value, v != nil ? [v contentRect] : NSZeroRect);
    }
}

zend_long ns_nstabview_number_of_tab_view_items(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSTabView *v = NS_ARG_AS(NSTabView, handle);
        r = v != nil ? (zend_long) [v numberOfTabViewItems] : 0;
    }
    return r;
}

zend_long ns_nstabview_index_of_tab_view_item(zval *handle, zval *tabViewItem)
{
    zend_long r = 0;
    @autoreleasepool {
        NSTabView *v = NS_ARG_AS(NSTabView, handle);
        r = v != nil ? (zend_long) [v indexOfTabViewItem:NS_ARG_AS(NSTabViewItem, tabViewItem)] : 0;
    }
    return r;
}

zend_long ns_nstabview_tab_view_item_at_index(zval *handle, zval *index)
{
    zend_long h = 0;
    @autoreleasepool {
        NSTabView *v = NS_ARG_AS(NSTabView, handle);
        h = ns_handle_for(v != nil ? [v tabViewItemAtIndex:(NSInteger) ns_arg_long(index)] : nil);
    }
    return h;
}

zend_long ns_nstabview_index_of_tab_view_item_with_identifier(zval *handle, zval *identifier)
{
    zend_long r = 0;
    @autoreleasepool {
        NSTabView *v = NS_ARG_AS(NSTabView, handle);
        r = v != nil ? (zend_long) [v indexOfTabViewItemWithIdentifier:ns_arg_object(identifier)] : 0;
    }
    return r;
}
