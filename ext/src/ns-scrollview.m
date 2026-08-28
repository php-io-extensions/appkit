#include "ns-scrollview.h"
#include "ns-value.h"

/* ====================================================================== */
/* NSScrollView                                                           */
/* ====================================================================== */

zend_long ns_nsscrollview_init_with_frame(zval *x, zval *y, zval *width, zval *height)
{
    @autoreleasepool {
        return ns_handle_for([[NSScrollView alloc] initWithFrame:ns_arg_rect(x, y, width, height)]);
    }
}

void ns_nsscrollview_document_visible_rect(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSScrollView *v = NS_ARG_AS(NSScrollView, handle);
        ns_ret_rect(return_value, v != nil ? [v documentVisibleRect] : NSZeroRect);
    }
}

void ns_nsscrollview_content_size(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSScrollView *v = NS_ARG_AS(NSScrollView, handle);
        ns_ret_size(return_value, v != nil ? [v contentSize] : NSZeroSize);
    }
}

zend_long ns_nsscrollview_document_view(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSScrollView *v = NS_ARG_AS(NSScrollView, handle);
        h = ns_handle_for(v != nil ? [v documentView] : nil);
    }
    return h;
}

void ns_nsscrollview_set_document_view(zval *handle, zval *documentView)
{
    @autoreleasepool {
        NSScrollView *v = NS_ARG_AS(NSScrollView, handle);
        if (v == nil) return;
        [v setDocumentView:NS_ARG_AS(NSView, documentView)];
    }
}

zend_long ns_nsscrollview_content_view(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSScrollView *v = NS_ARG_AS(NSScrollView, handle);
        h = ns_handle_for(v != nil ? [v contentView] : nil);
    }
    return h;
}

void ns_nsscrollview_set_content_view(zval *handle, zval *contentView)
{
    @autoreleasepool {
        NSScrollView *v = NS_ARG_AS(NSScrollView, handle);
        if (v == nil) return;
        [v setContentView:NS_ARG_AS(NSClipView, contentView)];
    }
}

zend_long ns_nsscrollview_document_cursor(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSScrollView *v = NS_ARG_AS(NSScrollView, handle);
        h = ns_handle_for(v != nil ? [v documentCursor] : nil);
    }
    return h;
}

void ns_nsscrollview_set_document_cursor(zval *handle, zval *documentCursor)
{
    @autoreleasepool {
        NSScrollView *v = NS_ARG_AS(NSScrollView, handle);
        if (v == nil) return;
        [v setDocumentCursor:NS_ARG_AS(NSCursor, documentCursor)];
    }
}

zend_long ns_nsscrollview_border_type(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSScrollView *v = NS_ARG_AS(NSScrollView, handle);
        r = v != nil ? (zend_long) [v borderType] : 0;
    }
    return r;
}

void ns_nsscrollview_set_border_type(zval *handle, zval *borderType)
{
    @autoreleasepool {
        NSScrollView *v = NS_ARG_AS(NSScrollView, handle);
        if (v == nil) return;
        [v setBorderType:(NSBorderType) ns_arg_long(borderType)];
    }
}

zend_long ns_nsscrollview_background_color(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSScrollView *v = NS_ARG_AS(NSScrollView, handle);
        h = ns_handle_for(v != nil ? [v backgroundColor] : nil);
    }
    return h;
}

void ns_nsscrollview_set_background_color(zval *handle, zval *backgroundColor)
{
    @autoreleasepool {
        NSScrollView *v = NS_ARG_AS(NSScrollView, handle);
        if (v == nil) return;
        [v setBackgroundColor:NS_ARG_AS(NSColor, backgroundColor)];
    }
}

zend_long ns_nsscrollview_draws_background(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSScrollView *v = NS_ARG_AS(NSScrollView, handle);
        r = (v != nil && [v drawsBackground]) ? 1 : 0;
    }
    return r;
}

void ns_nsscrollview_set_draws_background(zval *handle, zval *drawsBackground)
{
    @autoreleasepool {
        NSScrollView *v = NS_ARG_AS(NSScrollView, handle);
        if (v == nil) return;
        [v setDrawsBackground:ns_arg_bool(drawsBackground)];
    }
}

zend_long ns_nsscrollview_has_vertical_scroller(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSScrollView *v = NS_ARG_AS(NSScrollView, handle);
        r = (v != nil && [v hasVerticalScroller]) ? 1 : 0;
    }
    return r;
}

void ns_nsscrollview_set_has_vertical_scroller(zval *handle, zval *hasVerticalScroller)
{
    @autoreleasepool {
        NSScrollView *v = NS_ARG_AS(NSScrollView, handle);
        if (v == nil) return;
        [v setHasVerticalScroller:ns_arg_bool(hasVerticalScroller)];
    }
}

zend_long ns_nsscrollview_has_horizontal_scroller(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSScrollView *v = NS_ARG_AS(NSScrollView, handle);
        r = (v != nil && [v hasHorizontalScroller]) ? 1 : 0;
    }
    return r;
}

void ns_nsscrollview_set_has_horizontal_scroller(zval *handle, zval *hasHorizontalScroller)
{
    @autoreleasepool {
        NSScrollView *v = NS_ARG_AS(NSScrollView, handle);
        if (v == nil) return;
        [v setHasHorizontalScroller:ns_arg_bool(hasHorizontalScroller)];
    }
}

zend_long ns_nsscrollview_vertical_scroller(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSScrollView *v = NS_ARG_AS(NSScrollView, handle);
        h = ns_handle_for(v != nil ? [v verticalScroller] : nil);
    }
    return h;
}

void ns_nsscrollview_set_vertical_scroller(zval *handle, zval *verticalScroller)
{
    @autoreleasepool {
        NSScrollView *v = NS_ARG_AS(NSScrollView, handle);
        if (v == nil) return;
        [v setVerticalScroller:NS_ARG_AS(NSScroller, verticalScroller)];
    }
}

zend_long ns_nsscrollview_horizontal_scroller(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSScrollView *v = NS_ARG_AS(NSScrollView, handle);
        h = ns_handle_for(v != nil ? [v horizontalScroller] : nil);
    }
    return h;
}

void ns_nsscrollview_set_horizontal_scroller(zval *handle, zval *horizontalScroller)
{
    @autoreleasepool {
        NSScrollView *v = NS_ARG_AS(NSScrollView, handle);
        if (v == nil) return;
        [v setHorizontalScroller:NS_ARG_AS(NSScroller, horizontalScroller)];
    }
}

zend_long ns_nsscrollview_autohides_scrollers(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSScrollView *v = NS_ARG_AS(NSScrollView, handle);
        r = (v != nil && [v autohidesScrollers]) ? 1 : 0;
    }
    return r;
}

void ns_nsscrollview_set_autohides_scrollers(zval *handle, zval *autohidesScrollers)
{
    @autoreleasepool {
        NSScrollView *v = NS_ARG_AS(NSScrollView, handle);
        if (v == nil) return;
        [v setAutohidesScrollers:ns_arg_bool(autohidesScrollers)];
    }
}

double ns_nsscrollview_horizontal_line_scroll(zval *handle)
{
    double r = 0.0;
    @autoreleasepool {
        NSScrollView *v = NS_ARG_AS(NSScrollView, handle);
        r = v != nil ? (double) [v horizontalLineScroll] : 0.0;
    }
    return r;
}

void ns_nsscrollview_set_horizontal_line_scroll(zval *handle, zval *horizontalLineScroll)
{
    @autoreleasepool {
        NSScrollView *v = NS_ARG_AS(NSScrollView, handle);
        if (v == nil) return;
        [v setHorizontalLineScroll:ns_arg_double(horizontalLineScroll)];
    }
}

double ns_nsscrollview_vertical_line_scroll(zval *handle)
{
    double r = 0.0;
    @autoreleasepool {
        NSScrollView *v = NS_ARG_AS(NSScrollView, handle);
        r = v != nil ? (double) [v verticalLineScroll] : 0.0;
    }
    return r;
}

void ns_nsscrollview_set_vertical_line_scroll(zval *handle, zval *verticalLineScroll)
{
    @autoreleasepool {
        NSScrollView *v = NS_ARG_AS(NSScrollView, handle);
        if (v == nil) return;
        [v setVerticalLineScroll:ns_arg_double(verticalLineScroll)];
    }
}

double ns_nsscrollview_line_scroll(zval *handle)
{
    double r = 0.0;
    @autoreleasepool {
        NSScrollView *v = NS_ARG_AS(NSScrollView, handle);
        r = v != nil ? (double) [v lineScroll] : 0.0;
    }
    return r;
}

void ns_nsscrollview_set_line_scroll(zval *handle, zval *lineScroll)
{
    @autoreleasepool {
        NSScrollView *v = NS_ARG_AS(NSScrollView, handle);
        if (v == nil) return;
        [v setLineScroll:ns_arg_double(lineScroll)];
    }
}

double ns_nsscrollview_horizontal_page_scroll(zval *handle)
{
    double r = 0.0;
    @autoreleasepool {
        NSScrollView *v = NS_ARG_AS(NSScrollView, handle);
        r = v != nil ? (double) [v horizontalPageScroll] : 0.0;
    }
    return r;
}

void ns_nsscrollview_set_horizontal_page_scroll(zval *handle, zval *horizontalPageScroll)
{
    @autoreleasepool {
        NSScrollView *v = NS_ARG_AS(NSScrollView, handle);
        if (v == nil) return;
        [v setHorizontalPageScroll:ns_arg_double(horizontalPageScroll)];
    }
}

double ns_nsscrollview_vertical_page_scroll(zval *handle)
{
    double r = 0.0;
    @autoreleasepool {
        NSScrollView *v = NS_ARG_AS(NSScrollView, handle);
        r = v != nil ? (double) [v verticalPageScroll] : 0.0;
    }
    return r;
}

void ns_nsscrollview_set_vertical_page_scroll(zval *handle, zval *verticalPageScroll)
{
    @autoreleasepool {
        NSScrollView *v = NS_ARG_AS(NSScrollView, handle);
        if (v == nil) return;
        [v setVerticalPageScroll:ns_arg_double(verticalPageScroll)];
    }
}

double ns_nsscrollview_page_scroll(zval *handle)
{
    double r = 0.0;
    @autoreleasepool {
        NSScrollView *v = NS_ARG_AS(NSScrollView, handle);
        r = v != nil ? (double) [v pageScroll] : 0.0;
    }
    return r;
}

void ns_nsscrollview_set_page_scroll(zval *handle, zval *pageScroll)
{
    @autoreleasepool {
        NSScrollView *v = NS_ARG_AS(NSScrollView, handle);
        if (v == nil) return;
        [v setPageScroll:ns_arg_double(pageScroll)];
    }
}

zend_long ns_nsscrollview_scrolls_dynamically(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSScrollView *v = NS_ARG_AS(NSScrollView, handle);
        r = (v != nil && [v scrollsDynamically]) ? 1 : 0;
    }
    return r;
}

void ns_nsscrollview_set_scrolls_dynamically(zval *handle, zval *scrollsDynamically)
{
    @autoreleasepool {
        NSScrollView *v = NS_ARG_AS(NSScrollView, handle);
        if (v == nil) return;
        [v setScrollsDynamically:ns_arg_bool(scrollsDynamically)];
    }
}

void ns_nsscrollview_tile(zval *handle)
{
    @autoreleasepool {
        NSScrollView *v = NS_ARG_AS(NSScrollView, handle);
        if (v == nil) return;
        [v tile];
    }
}

void ns_nsscrollview_reflect_scrolled_clip_view(zval *handle, zval *clipView)
{
    @autoreleasepool {
        NSScrollView *v = NS_ARG_AS(NSScrollView, handle);
        if (v == nil) return;
        [v reflectScrolledClipView:NS_ARG_AS(NSClipView, clipView)];
    }
}

void ns_nsscrollview_scroll_wheel(zval *handle, zval *event)
{
    @autoreleasepool {
        NSScrollView *v = NS_ARG_AS(NSScrollView, handle);
        if (v == nil) return;
        [v scrollWheel:NS_ARG_AS(NSEvent, event)];
    }
}

zend_long ns_nsscrollview_scroller_style(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSScrollView *v = NS_ARG_AS(NSScrollView, handle);
        r = v != nil ? (zend_long) [v scrollerStyle] : 0;
    }
    return r;
}

void ns_nsscrollview_set_scroller_style(zval *handle, zval *scrollerStyle)
{
    @autoreleasepool {
        NSScrollView *v = NS_ARG_AS(NSScrollView, handle);
        if (v == nil) return;
        [v setScrollerStyle:(NSScrollerStyle) ns_arg_long(scrollerStyle)];
    }
}

zend_long ns_nsscrollview_scroller_knob_style(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSScrollView *v = NS_ARG_AS(NSScrollView, handle);
        r = v != nil ? (zend_long) [v scrollerKnobStyle] : 0;
    }
    return r;
}

void ns_nsscrollview_set_scroller_knob_style(zval *handle, zval *scrollerKnobStyle)
{
    @autoreleasepool {
        NSScrollView *v = NS_ARG_AS(NSScrollView, handle);
        if (v == nil) return;
        [v setScrollerKnobStyle:(NSScrollerKnobStyle) ns_arg_long(scrollerKnobStyle)];
    }
}

void ns_nsscrollview_flash_scrollers(zval *handle)
{
    @autoreleasepool {
        NSScrollView *v = NS_ARG_AS(NSScrollView, handle);
        if (v == nil) return;
        [v flashScrollers];
    }
}

zend_long ns_nsscrollview_horizontal_scroll_elasticity(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSScrollView *v = NS_ARG_AS(NSScrollView, handle);
        r = v != nil ? (zend_long) [v horizontalScrollElasticity] : 0;
    }
    return r;
}

void ns_nsscrollview_set_horizontal_scroll_elasticity(zval *handle, zval *horizontalScrollElasticity)
{
    @autoreleasepool {
        NSScrollView *v = NS_ARG_AS(NSScrollView, handle);
        if (v == nil) return;
        [v setHorizontalScrollElasticity:(NSScrollElasticity) ns_arg_long(horizontalScrollElasticity)];
    }
}

zend_long ns_nsscrollview_vertical_scroll_elasticity(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSScrollView *v = NS_ARG_AS(NSScrollView, handle);
        r = v != nil ? (zend_long) [v verticalScrollElasticity] : 0;
    }
    return r;
}

void ns_nsscrollview_set_vertical_scroll_elasticity(zval *handle, zval *verticalScrollElasticity)
{
    @autoreleasepool {
        NSScrollView *v = NS_ARG_AS(NSScrollView, handle);
        if (v == nil) return;
        [v setVerticalScrollElasticity:(NSScrollElasticity) ns_arg_long(verticalScrollElasticity)];
    }
}

zend_long ns_nsscrollview_uses_predominant_axis_scrolling(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSScrollView *v = NS_ARG_AS(NSScrollView, handle);
        r = (v != nil && [v usesPredominantAxisScrolling]) ? 1 : 0;
    }
    return r;
}

void ns_nsscrollview_set_uses_predominant_axis_scrolling(zval *handle, zval *usesPredominantAxisScrolling)
{
    @autoreleasepool {
        NSScrollView *v = NS_ARG_AS(NSScrollView, handle);
        if (v == nil) return;
        [v setUsesPredominantAxisScrolling:ns_arg_bool(usesPredominantAxisScrolling)];
    }
}

zend_long ns_nsscrollview_allows_magnification(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSScrollView *v = NS_ARG_AS(NSScrollView, handle);
        r = (v != nil && [v allowsMagnification]) ? 1 : 0;
    }
    return r;
}

void ns_nsscrollview_set_allows_magnification(zval *handle, zval *allowsMagnification)
{
    @autoreleasepool {
        NSScrollView *v = NS_ARG_AS(NSScrollView, handle);
        if (v == nil) return;
        [v setAllowsMagnification:ns_arg_bool(allowsMagnification)];
    }
}

double ns_nsscrollview_magnification(zval *handle)
{
    double r = 0.0;
    @autoreleasepool {
        NSScrollView *v = NS_ARG_AS(NSScrollView, handle);
        r = v != nil ? (double) [v magnification] : 0.0;
    }
    return r;
}

void ns_nsscrollview_set_magnification(zval *handle, zval *magnification)
{
    @autoreleasepool {
        NSScrollView *v = NS_ARG_AS(NSScrollView, handle);
        if (v == nil) return;
        [v setMagnification:ns_arg_double(magnification)];
    }
}

double ns_nsscrollview_max_magnification(zval *handle)
{
    double r = 0.0;
    @autoreleasepool {
        NSScrollView *v = NS_ARG_AS(NSScrollView, handle);
        r = v != nil ? (double) [v maxMagnification] : 0.0;
    }
    return r;
}

void ns_nsscrollview_set_max_magnification(zval *handle, zval *maxMagnification)
{
    @autoreleasepool {
        NSScrollView *v = NS_ARG_AS(NSScrollView, handle);
        if (v == nil) return;
        [v setMaxMagnification:ns_arg_double(maxMagnification)];
    }
}

double ns_nsscrollview_min_magnification(zval *handle)
{
    double r = 0.0;
    @autoreleasepool {
        NSScrollView *v = NS_ARG_AS(NSScrollView, handle);
        r = v != nil ? (double) [v minMagnification] : 0.0;
    }
    return r;
}

void ns_nsscrollview_set_min_magnification(zval *handle, zval *minMagnification)
{
    @autoreleasepool {
        NSScrollView *v = NS_ARG_AS(NSScrollView, handle);
        if (v == nil) return;
        [v setMinMagnification:ns_arg_double(minMagnification)];
    }
}

void ns_nsscrollview_magnify_to_fit_rect(zval *handle, zval *x, zval *y, zval *width, zval *height)
{
    @autoreleasepool {
        NSScrollView *v = NS_ARG_AS(NSScrollView, handle);
        if (v == nil) return;
        [v magnifyToFitRect:ns_arg_rect(x, y, width, height)];
    }
}

void ns_nsscrollview_set_magnification_centered_at_point(zval *handle, zval *magnification, zval *x, zval *y)
{
    @autoreleasepool {
        NSScrollView *v = NS_ARG_AS(NSScrollView, handle);
        if (v == nil) return;
        [v setMagnification:ns_arg_double(magnification) centeredAtPoint:ns_arg_point(x, y)];
    }
}

void ns_nsscrollview_add_floating_subview_for_axis(zval *handle, zval *view, zval *axis)
{
    @autoreleasepool {
        NSScrollView *v = NS_ARG_AS(NSScrollView, handle);
        if (v == nil) return;
        [v addFloatingSubview:NS_ARG_AS(NSView, view) forAxis:(NSEventGestureAxis) ns_arg_long(axis)];
    }
}

zend_long ns_nsscrollview_automatically_adjusts_content_insets(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSScrollView *v = NS_ARG_AS(NSScrollView, handle);
        r = (v != nil && [v automaticallyAdjustsContentInsets]) ? 1 : 0;
    }
    return r;
}

void ns_nsscrollview_set_automatically_adjusts_content_insets(zval *handle, zval *automaticallyAdjustsContentInsets)
{
    @autoreleasepool {
        NSScrollView *v = NS_ARG_AS(NSScrollView, handle);
        if (v == nil) return;
        [v setAutomaticallyAdjustsContentInsets:ns_arg_bool(automaticallyAdjustsContentInsets)];
    }
}

void ns_nsscrollview_content_insets(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSScrollView *v = NS_ARG_AS(NSScrollView, handle);
        ns_ret_edge_insets(return_value, v != nil ? [v contentInsets] : NSEdgeInsetsZero);
    }
}

void ns_nsscrollview_set_content_insets(zval *handle, zval *top, zval *left, zval *bottom, zval *right)
{
    @autoreleasepool {
        NSScrollView *v = NS_ARG_AS(NSScrollView, handle);
        if (v == nil) return;
        [v setContentInsets:NSEdgeInsetsMake(ns_arg_double(top), ns_arg_double(left), ns_arg_double(bottom), ns_arg_double(right))];
    }
}

void ns_nsscrollview_scroller_insets(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSScrollView *v = NS_ARG_AS(NSScrollView, handle);
        ns_ret_edge_insets(return_value, v != nil ? [v scrollerInsets] : NSEdgeInsetsZero);
    }
}

void ns_nsscrollview_set_scroller_insets(zval *handle, zval *top, zval *left, zval *bottom, zval *right)
{
    @autoreleasepool {
        NSScrollView *v = NS_ARG_AS(NSScrollView, handle);
        if (v == nil) return;
        [v setScrollerInsets:NSEdgeInsetsMake(ns_arg_double(top), ns_arg_double(left), ns_arg_double(bottom), ns_arg_double(right))];
    }
}

/* ====================================================================== */
/* NSRulerSupport                                                         */
/* ====================================================================== */

zend_long ns_nsscrollview_rulers_visible(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSScrollView *v = NS_ARG_AS(NSScrollView, handle);
        r = (v != nil && [v rulersVisible]) ? 1 : 0;
    }
    return r;
}

void ns_nsscrollview_set_rulers_visible(zval *handle, zval *rulersVisible)
{
    @autoreleasepool {
        NSScrollView *v = NS_ARG_AS(NSScrollView, handle);
        if (v == nil) return;
        [v setRulersVisible:ns_arg_bool(rulersVisible)];
    }
}

zend_long ns_nsscrollview_has_horizontal_ruler(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSScrollView *v = NS_ARG_AS(NSScrollView, handle);
        r = (v != nil && [v hasHorizontalRuler]) ? 1 : 0;
    }
    return r;
}

void ns_nsscrollview_set_has_horizontal_ruler(zval *handle, zval *hasHorizontalRuler)
{
    @autoreleasepool {
        NSScrollView *v = NS_ARG_AS(NSScrollView, handle);
        if (v == nil) return;
        [v setHasHorizontalRuler:ns_arg_bool(hasHorizontalRuler)];
    }
}

zend_long ns_nsscrollview_has_vertical_ruler(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSScrollView *v = NS_ARG_AS(NSScrollView, handle);
        r = (v != nil && [v hasVerticalRuler]) ? 1 : 0;
    }
    return r;
}

void ns_nsscrollview_set_has_vertical_ruler(zval *handle, zval *hasVerticalRuler)
{
    @autoreleasepool {
        NSScrollView *v = NS_ARG_AS(NSScrollView, handle);
        if (v == nil) return;
        [v setHasVerticalRuler:ns_arg_bool(hasVerticalRuler)];
    }
}

zend_long ns_nsscrollview_horizontal_ruler_view(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSScrollView *v = NS_ARG_AS(NSScrollView, handle);
        h = ns_handle_for(v != nil ? [v horizontalRulerView] : nil);
    }
    return h;
}

void ns_nsscrollview_set_horizontal_ruler_view(zval *handle, zval *horizontalRulerView)
{
    @autoreleasepool {
        NSScrollView *v = NS_ARG_AS(NSScrollView, handle);
        if (v == nil) return;
        [v setHorizontalRulerView:NS_ARG_AS(NSRulerView, horizontalRulerView)];
    }
}

zend_long ns_nsscrollview_vertical_ruler_view(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSScrollView *v = NS_ARG_AS(NSScrollView, handle);
        h = ns_handle_for(v != nil ? [v verticalRulerView] : nil);
    }
    return h;
}

void ns_nsscrollview_set_vertical_ruler_view(zval *handle, zval *verticalRulerView)
{
    @autoreleasepool {
        NSScrollView *v = NS_ARG_AS(NSScrollView, handle);
        if (v == nil) return;
        [v setVerticalRulerView:NS_ARG_AS(NSRulerView, verticalRulerView)];
    }
}

/* ====================================================================== */
/* NSFindBarSupport                                                       */
/* ====================================================================== */

zend_long ns_nsscrollview_find_bar_position(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSScrollView *v = NS_ARG_AS(NSScrollView, handle);
        r = v != nil ? (zend_long) [v findBarPosition] : 0;
    }
    return r;
}

void ns_nsscrollview_set_find_bar_position(zval *handle, zval *findBarPosition)
{
    @autoreleasepool {
        NSScrollView *v = NS_ARG_AS(NSScrollView, handle);
        if (v == nil) return;
        [v setFindBarPosition:(NSScrollViewFindBarPosition) ns_arg_long(findBarPosition)];
    }
}
