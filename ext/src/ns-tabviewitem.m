#include "ns-tabviewitem.h"
#include "ns-value.h"

/* ====================================================================== */
/* NSTabViewItem                                                          */
/* ====================================================================== */

zend_long ns_nstabviewitem_tab_view_item_with_view_controller(zval *viewController)
{
    zend_long h = 0;
    @autoreleasepool {
        h = ns_handle_for([NSTabViewItem tabViewItemWithViewController:NS_ARG_AS(NSViewController, viewController)]);
    }
    return h;
}

zend_long ns_nstabviewitem_init_with_identifier(zval *identifier)
{
    @autoreleasepool {
        return ns_handle_for([[NSTabViewItem alloc] initWithIdentifier:ns_arg_object(identifier)]);
    }
}

zend_long ns_nstabviewitem_identifier(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSTabViewItem *item = NS_ARG_AS(NSTabViewItem, handle);
        h = ns_handle_for(item != nil ? [item identifier] : nil);
    }
    return h;
}

void ns_nstabviewitem_set_identifier(zval *handle, zval *identifier)
{
    @autoreleasepool {
        NSTabViewItem *item = NS_ARG_AS(NSTabViewItem, handle);
        if (item == nil) return;
        [item setIdentifier:ns_arg_object(identifier)];
    }
}

zend_long ns_nstabviewitem_color(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSTabViewItem *item = NS_ARG_AS(NSTabViewItem, handle);
        h = ns_handle_for(item != nil ? [item color] : nil);
    }
    return h;
}

void ns_nstabviewitem_set_color(zval *handle, zval *color)
{
    @autoreleasepool {
        NSTabViewItem *item = NS_ARG_AS(NSTabViewItem, handle);
        if (item == nil) return;
        [item setColor:NS_ARG_AS(NSColor, color)];
    }
}

void ns_nstabviewitem_label(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSTabViewItem *item = NS_ARG_AS(NSTabViewItem, handle);
        ns_ret_string(return_value, item != nil ? [item label] : nil);
    }
}

void ns_nstabviewitem_set_label(zval *handle, zval *label)
{
    @autoreleasepool {
        NSTabViewItem *item = NS_ARG_AS(NSTabViewItem, handle);
        if (item == nil) return;
        [item setLabel:ns_arg_string(label)];
    }
}

zend_long ns_nstabviewitem_image(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSTabViewItem *item = NS_ARG_AS(NSTabViewItem, handle);
        h = ns_handle_for(item != nil ? [item image] : nil);
    }
    return h;
}

void ns_nstabviewitem_set_image(zval *handle, zval *image)
{
    @autoreleasepool {
        NSTabViewItem *item = NS_ARG_AS(NSTabViewItem, handle);
        if (item == nil) return;
        [item setImage:NS_ARG_AS(NSImage, image)];
    }
}

zend_long ns_nstabviewitem_view(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSTabViewItem *item = NS_ARG_AS(NSTabViewItem, handle);
        h = ns_handle_for(item != nil ? [item view] : nil);
    }
    return h;
}

void ns_nstabviewitem_set_view(zval *handle, zval *view)
{
    @autoreleasepool {
        NSTabViewItem *item = NS_ARG_AS(NSTabViewItem, handle);
        if (item == nil) return;
        [item setView:NS_ARG_AS(NSView, view)];
    }
}

zend_long ns_nstabviewitem_view_controller(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSTabViewItem *item = NS_ARG_AS(NSTabViewItem, handle);
        h = ns_handle_for(item != nil ? [item viewController] : nil);
    }
    return h;
}

void ns_nstabviewitem_set_view_controller(zval *handle, zval *viewController)
{
    @autoreleasepool {
        NSTabViewItem *item = NS_ARG_AS(NSTabViewItem, handle);
        if (item == nil) return;
        [item setViewController:NS_ARG_AS(NSViewController, viewController)];
    }
}

zend_long ns_nstabviewitem_tab_state(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSTabViewItem *item = NS_ARG_AS(NSTabViewItem, handle);
        r = item != nil ? (zend_long) [item tabState] : 0;
    }
    return r;
}

zend_long ns_nstabviewitem_tab_view(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSTabViewItem *item = NS_ARG_AS(NSTabViewItem, handle);
        h = ns_handle_for(item != nil ? [item tabView] : nil);
    }
    return h;
}

zend_long ns_nstabviewitem_initial_first_responder(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSTabViewItem *item = NS_ARG_AS(NSTabViewItem, handle);
        h = ns_handle_for(item != nil ? [item initialFirstResponder] : nil);
    }
    return h;
}

void ns_nstabviewitem_set_initial_first_responder(zval *handle, zval *initialFirstResponder)
{
    @autoreleasepool {
        NSTabViewItem *item = NS_ARG_AS(NSTabViewItem, handle);
        if (item == nil) return;
        [item setInitialFirstResponder:NS_ARG_AS(NSView, initialFirstResponder)];
    }
}

void ns_nstabviewitem_tool_tip(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSTabViewItem *item = NS_ARG_AS(NSTabViewItem, handle);
        ns_ret_string(return_value, item != nil ? [item toolTip] : nil);
    }
}

void ns_nstabviewitem_set_tool_tip(zval *handle, zval *toolTip)
{
    @autoreleasepool {
        NSTabViewItem *item = NS_ARG_AS(NSTabViewItem, handle);
        if (item == nil) return;
        [item setToolTip:ns_arg_string(toolTip)];
    }
}

void ns_nstabviewitem_draw_label_in_rect(zval *handle, zval *shouldTruncateLabel, zval *x, zval *y, zval *width, zval *height)
{
    @autoreleasepool {
        NSTabViewItem *item = NS_ARG_AS(NSTabViewItem, handle);
        if (item == nil) return;
        [item drawLabel:ns_arg_bool(shouldTruncateLabel) inRect:ns_arg_rect(x, y, width, height)];
    }
}

void ns_nstabviewitem_size_of_label(zval *return_value, zval *handle, zval *computeMin)
{
    @autoreleasepool {
        NSTabViewItem *item = NS_ARG_AS(NSTabViewItem, handle);
        ns_ret_size(return_value, item != nil ? [item sizeOfLabel:ns_arg_bool(computeMin)] : NSZeroSize);
    }
}
