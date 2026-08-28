#include "ns-popover.h"
#include "ns-value.h"

/* ====================================================================== */
/* NSPopover                                                              */
/* ====================================================================== */

zend_long ns_nspopover_init(void)
{
    @autoreleasepool {
        return ns_handle_for([[NSPopover alloc] init]);
    }
}

zend_long ns_nspopover_delegate(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSPopover *p = NS_ARG_AS(NSPopover, handle);
        h = ns_handle_for(p != nil ? [p delegate] : nil);
    }
    return h;
}

void ns_nspopover_set_delegate(zval *handle, zval *delegate)
{
    @autoreleasepool {
        NSPopover *p = NS_ARG_AS(NSPopover, handle);
        if (p == nil) return;
        [p setDelegate:ns_arg_object(delegate)];
    }
}

zend_long ns_nspopover_appearance(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSPopover *p = NS_ARG_AS(NSPopover, handle);
        h = ns_handle_for(p != nil ? [p appearance] : nil);
    }
    return h;
}

void ns_nspopover_set_appearance(zval *handle, zval *appearance)
{
    @autoreleasepool {
        NSPopover *p = NS_ARG_AS(NSPopover, handle);
        if (p == nil) return;
        [p setAppearance:NS_ARG_AS(NSAppearance, appearance)];
    }
}

zend_long ns_nspopover_effective_appearance(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSPopover *p = NS_ARG_AS(NSPopover, handle);
        h = ns_handle_for(p != nil ? [p effectiveAppearance] : nil);
    }
    return h;
}

zend_long ns_nspopover_behavior(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSPopover *p = NS_ARG_AS(NSPopover, handle);
        r = p != nil ? (zend_long) [p behavior] : 0;
    }
    return r;
}

void ns_nspopover_set_behavior(zval *handle, zval *behavior)
{
    @autoreleasepool {
        NSPopover *p = NS_ARG_AS(NSPopover, handle);
        if (p == nil) return;
        [p setBehavior:(NSPopoverBehavior) ns_arg_long(behavior)];
    }
}

zend_long ns_nspopover_animates(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSPopover *p = NS_ARG_AS(NSPopover, handle);
        r = (p != nil && [p animates]) ? 1 : 0;
    }
    return r;
}

void ns_nspopover_set_animates(zval *handle, zval *animates)
{
    @autoreleasepool {
        NSPopover *p = NS_ARG_AS(NSPopover, handle);
        if (p == nil) return;
        [p setAnimates:ns_arg_bool(animates)];
    }
}

zend_long ns_nspopover_content_view_controller(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSPopover *p = NS_ARG_AS(NSPopover, handle);
        h = ns_handle_for(p != nil ? [p contentViewController] : nil);
    }
    return h;
}

void ns_nspopover_set_content_view_controller(zval *handle, zval *contentViewController)
{
    @autoreleasepool {
        NSPopover *p = NS_ARG_AS(NSPopover, handle);
        if (p == nil) return;
        [p setContentViewController:NS_ARG_AS(NSViewController, contentViewController)];
    }
}

void ns_nspopover_content_size(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSPopover *p = NS_ARG_AS(NSPopover, handle);
        ns_ret_size(return_value, p != nil ? [p contentSize] : NSZeroSize);
    }
}

void ns_nspopover_set_content_size(zval *handle, zval *width, zval *height)
{
    @autoreleasepool {
        NSPopover *p = NS_ARG_AS(NSPopover, handle);
        if (p == nil) return;
        [p setContentSize:ns_arg_size(width, height)];
    }
}

zend_long ns_nspopover_is_shown(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSPopover *p = NS_ARG_AS(NSPopover, handle);
        r = (p != nil && [p isShown]) ? 1 : 0;
    }
    return r;
}

zend_long ns_nspopover_is_detached(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSPopover *p = NS_ARG_AS(NSPopover, handle);
        r = (p != nil && [p isDetached]) ? 1 : 0;
    }
    return r;
}

void ns_nspopover_positioning_rect(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSPopover *p = NS_ARG_AS(NSPopover, handle);
        ns_ret_rect(return_value, p != nil ? [p positioningRect] : NSZeroRect);
    }
}

void ns_nspopover_set_positioning_rect(zval *handle, zval *x, zval *y, zval *width, zval *height)
{
    @autoreleasepool {
        NSPopover *p = NS_ARG_AS(NSPopover, handle);
        if (p == nil) return;
        [p setPositioningRect:ns_arg_rect(x, y, width, height)];
    }
}

zend_long ns_nspopover_has_full_size_content(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSPopover *p = NS_ARG_AS(NSPopover, handle);
        r = (p != nil && [p hasFullSizeContent]) ? 1 : 0;
    }
    return r;
}

void ns_nspopover_set_has_full_size_content(zval *handle, zval *hasFullSizeContent)
{
    @autoreleasepool {
        NSPopover *p = NS_ARG_AS(NSPopover, handle);
        if (p == nil) return;
        [p setHasFullSizeContent:ns_arg_bool(hasFullSizeContent)];
    }
}

void ns_nspopover_show_relative_to_rect_of_view_preferred_edge(zval *handle, zval *x, zval *y, zval *width, zval *height, zval *positioningView, zval *preferredEdge)
{
    @autoreleasepool {
        NSPopover *p = NS_ARG_AS(NSPopover, handle);
        if (p == nil) return;
        [p showRelativeToRect:ns_arg_rect(x, y, width, height)
                       ofView:NS_ARG_AS(NSView, positioningView)
                preferredEdge:(NSRectEdge) ns_arg_long(preferredEdge)];
    }
}

void ns_nspopover_show_relative_to_toolbar_item(zval *handle, zval *toolbarItem)
{
    @autoreleasepool {
        NSPopover *p = NS_ARG_AS(NSPopover, handle);
        if (p == nil) return;
        [p showRelativeToToolbarItem:NS_ARG_AS(NSToolbarItem, toolbarItem)];
    }
}

void ns_nspopover_perform_close(zval *handle, zval *sender)
{
    @autoreleasepool {
        NSPopover *p = NS_ARG_AS(NSPopover, handle);
        if (p == nil) return;
        [p performClose:ns_arg_object(sender)];
    }
}

void ns_nspopover_close(zval *handle)
{
    @autoreleasepool {
        NSPopover *p = NS_ARG_AS(NSPopover, handle);
        if (p == nil) return;
        [p close];
    }
}
