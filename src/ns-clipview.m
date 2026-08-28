#include "ns-clipview.h"
#include "ns-value.h"

/* ====================================================================== */
/* NSClipView                                                             */
/* ====================================================================== */

zend_long ns_nsclipview_init_with_frame(zval *x, zval *y, zval *width, zval *height)
{
    @autoreleasepool {
        return ns_handle_for([[NSClipView alloc] initWithFrame:ns_arg_rect(x, y, width, height)]);
    }
}

zend_long ns_nsclipview_background_color(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSClipView *v = NS_ARG_AS(NSClipView, handle);
        h = ns_handle_for(v != nil ? [v backgroundColor] : nil);
    }
    return h;
}

void ns_nsclipview_set_background_color(zval *handle, zval *backgroundColor)
{
    @autoreleasepool {
        NSClipView *v = NS_ARG_AS(NSClipView, handle);
        if (v == nil) return;
        [v setBackgroundColor:NS_ARG_AS(NSColor, backgroundColor)];
    }
}

zend_long ns_nsclipview_draws_background(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSClipView *v = NS_ARG_AS(NSClipView, handle);
        r = (v != nil && [v drawsBackground]) ? 1 : 0;
    }
    return r;
}

void ns_nsclipview_set_draws_background(zval *handle, zval *drawsBackground)
{
    @autoreleasepool {
        NSClipView *v = NS_ARG_AS(NSClipView, handle);
        if (v == nil) return;
        [v setDrawsBackground:ns_arg_bool(drawsBackground)];
    }
}

zend_long ns_nsclipview_document_view(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSClipView *v = NS_ARG_AS(NSClipView, handle);
        h = ns_handle_for(v != nil ? [v documentView] : nil);
    }
    return h;
}

void ns_nsclipview_set_document_view(zval *handle, zval *documentView)
{
    @autoreleasepool {
        NSClipView *v = NS_ARG_AS(NSClipView, handle);
        if (v == nil) return;
        [v setDocumentView:NS_ARG_AS(NSView, documentView)];
    }
}

void ns_nsclipview_document_rect(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSClipView *v = NS_ARG_AS(NSClipView, handle);
        ns_ret_rect(return_value, v != nil ? [v documentRect] : NSZeroRect);
    }
}

zend_long ns_nsclipview_document_cursor(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSClipView *v = NS_ARG_AS(NSClipView, handle);
        h = ns_handle_for(v != nil ? [v documentCursor] : nil);
    }
    return h;
}

void ns_nsclipview_set_document_cursor(zval *handle, zval *documentCursor)
{
    @autoreleasepool {
        NSClipView *v = NS_ARG_AS(NSClipView, handle);
        if (v == nil) return;
        [v setDocumentCursor:NS_ARG_AS(NSCursor, documentCursor)];
    }
}

void ns_nsclipview_document_visible_rect(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSClipView *v = NS_ARG_AS(NSClipView, handle);
        ns_ret_rect(return_value, v != nil ? [v documentVisibleRect] : NSZeroRect);
    }
}

void ns_nsclipview_view_frame_changed(zval *handle, zval *notification)
{
    @autoreleasepool {
        NSClipView *v = NS_ARG_AS(NSClipView, handle);
        if (v == nil) return;
        [v viewFrameChanged:NS_ARG_AS(NSNotification, notification)];
    }
}

void ns_nsclipview_view_bounds_changed(zval *handle, zval *notification)
{
    @autoreleasepool {
        NSClipView *v = NS_ARG_AS(NSClipView, handle);
        if (v == nil) return;
        [v viewBoundsChanged:NS_ARG_AS(NSNotification, notification)];
    }
}

zend_long ns_nsclipview_autoscroll(zval *handle, zval *event)
{
    zend_long r = 0;
    @autoreleasepool {
        NSClipView *v = NS_ARG_AS(NSClipView, handle);
        r = (v != nil && [v autoscroll:NS_ARG_AS(NSEvent, event)]) ? 1 : 0;
    }
    return r;
}

void ns_nsclipview_scroll_to_point(zval *handle, zval *x, zval *y)
{
    @autoreleasepool {
        NSClipView *v = NS_ARG_AS(NSClipView, handle);
        if (v == nil) return;
        [v scrollToPoint:ns_arg_point(x, y)];
    }
}

void ns_nsclipview_constrain_bounds_rect(zval *return_value, zval *handle, zval *x, zval *y, zval *width, zval *height)
{
    @autoreleasepool {
        NSClipView *v = NS_ARG_AS(NSClipView, handle);
        ns_ret_rect(return_value, v != nil ? [v constrainBoundsRect:ns_arg_rect(x, y, width, height)] : NSZeroRect);
    }
}

void ns_nsclipview_content_insets(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSClipView *v = NS_ARG_AS(NSClipView, handle);
        ns_ret_edge_insets(return_value, v != nil ? [v contentInsets] : NSEdgeInsetsZero);
    }
}

void ns_nsclipview_set_content_insets(zval *handle, zval *top, zval *left, zval *bottom, zval *right)
{
    @autoreleasepool {
        NSClipView *v = NS_ARG_AS(NSClipView, handle);
        if (v == nil) return;
        [v setContentInsets:NSEdgeInsetsMake(ns_arg_double(top), ns_arg_double(left), ns_arg_double(bottom), ns_arg_double(right))];
    }
}

zend_long ns_nsclipview_automatically_adjusts_content_insets(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSClipView *v = NS_ARG_AS(NSClipView, handle);
        r = (v != nil && [v automaticallyAdjustsContentInsets]) ? 1 : 0;
    }
    return r;
}

void ns_nsclipview_set_automatically_adjusts_content_insets(zval *handle, zval *automaticallyAdjustsContentInsets)
{
    @autoreleasepool {
        NSClipView *v = NS_ARG_AS(NSClipView, handle);
        if (v == nil) return;
        [v setAutomaticallyAdjustsContentInsets:ns_arg_bool(automaticallyAdjustsContentInsets)];
    }
}
