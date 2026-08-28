#include "ns-view.h"
#include "ns-value.h"
/* AppKit only forward-declares CIFilter; compositingFilter/contentFilters need the real interface. */
#import <CoreImage/CIFilter.h>


/* ---- NSView ---- */
zend_long ns_nsview_init_with_frame(zval *x, zval *y, zval *width, zval *height)
{
    @autoreleasepool {
        return ns_handle_for([[NSView alloc] initWithFrame:ns_arg_rect(x, y, width, height)]);
    }
}

zend_long ns_nsview_window(zval *handle)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return 0; }
        return ns_handle_for([v window]);
    }
}

zend_long ns_nsview_superview(zval *handle)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return 0; }
        return ns_handle_for([v superview]);
    }
}

void ns_nsview_subviews(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { ZVAL_NULL(return_value); return; }
        ns_ret_object_array(return_value, [v subviews]);
    }
}

void ns_nsview_set_subviews(zval *handle, zval *subviews)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return; }
        [v setSubviews:ns_arg_object_array(subviews)];
    }
}

zend_long ns_nsview_is_descendant_of(zval *handle, zval *view)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return 0; }
        return [v isDescendantOf:NS_ARG_AS(NSView, view)] ? 1 : 0;
    }
}

zend_long ns_nsview_ancestor_shared_with_view(zval *handle, zval *view)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return 0; }
        return ns_handle_for([v ancestorSharedWithView:NS_ARG_AS(NSView, view)]);
    }
}

zend_long ns_nsview_opaque_ancestor(zval *handle)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return 0; }
        return ns_handle_for([v opaqueAncestor]);
    }
}

zend_long ns_nsview_is_hidden(zval *handle)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return 0; }
        return [v isHidden] ? 1 : 0;
    }
}

void ns_nsview_set_hidden(zval *handle, zval *hidden)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return; }
        [v setHidden:ns_arg_bool(hidden)];
    }
}

zend_long ns_nsview_is_hidden_or_has_hidden_ancestor(zval *handle)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return 0; }
        return [v isHiddenOrHasHiddenAncestor] ? 1 : 0;
    }
}

void ns_nsview_get_rects_being_drawn_count(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { ZVAL_NULL(return_value); return; }
        const NSRect *rects = NULL;
        NSInteger count = 0;
        [v getRectsBeingDrawn:&rects count:&count];
        array_init(return_value);
        for (NSInteger i = 0; i < count; i++) {
            zval item;
            ns_ret_rect(&item, rects[i]);
            add_next_index_zval(return_value, &item);
        }
    }
}

zend_long ns_nsview_needs_to_draw_rect(zval *handle, zval *x, zval *y, zval *width, zval *height)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return 0; }
        return [v needsToDrawRect:ns_arg_rect(x, y, width, height)] ? 1 : 0;
    }
}

zend_long ns_nsview_wants_default_clipping(zval *handle)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return 0; }
        return [v wantsDefaultClipping] ? 1 : 0;
    }
}

void ns_nsview_view_did_hide(zval *handle)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return; }
        [v viewDidHide];
    }
}

void ns_nsview_view_did_unhide(zval *handle)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return; }
        [v viewDidUnhide];
    }
}

void ns_nsview_add_subview(zval *handle, zval *view)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return; }
        [v addSubview:NS_ARG_AS(NSView, view)];
    }
}

void ns_nsview_add_subview_positioned_relative_to(zval *handle, zval *view, zval *place, zval *otherView)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return; }
        [v addSubview:NS_ARG_AS(NSView, view) positioned:(NSWindowOrderingMode) ns_arg_long(place) relativeTo:NS_ARG_AS(NSView, otherView)];
    }
}

void ns_nsview_view_will_move_to_window(zval *handle, zval *newWindow)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return; }
        [v viewWillMoveToWindow:NS_ARG_AS(NSWindow, newWindow)];
    }
}

void ns_nsview_view_did_move_to_window(zval *handle)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return; }
        [v viewDidMoveToWindow];
    }
}

void ns_nsview_view_will_move_to_superview(zval *handle, zval *newSuperview)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return; }
        [v viewWillMoveToSuperview:NS_ARG_AS(NSView, newSuperview)];
    }
}

void ns_nsview_view_did_move_to_superview(zval *handle)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return; }
        [v viewDidMoveToSuperview];
    }
}

void ns_nsview_did_add_subview(zval *handle, zval *subview)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return; }
        [v didAddSubview:NS_ARG_AS(NSView, subview)];
    }
}

void ns_nsview_will_remove_subview(zval *handle, zval *subview)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return; }
        [v willRemoveSubview:NS_ARG_AS(NSView, subview)];
    }
}

void ns_nsview_remove_from_superview(zval *handle)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return; }
        [v removeFromSuperview];
    }
}

void ns_nsview_replace_subview_with(zval *handle, zval *oldView, zval *newView)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return; }
        [v replaceSubview:NS_ARG_AS(NSView, oldView) with:NS_ARG_AS(NSView, newView)];
    }
}

void ns_nsview_remove_from_superview_without_needing_display(zval *handle)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return; }
        [v removeFromSuperviewWithoutNeedingDisplay];
    }
}

void ns_nsview_view_did_change_backing_properties(zval *handle)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return; }
        [v viewDidChangeBackingProperties];
    }
}

zend_long ns_nsview_posts_frame_changed_notifications(zval *handle)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return 0; }
        return [v postsFrameChangedNotifications] ? 1 : 0;
    }
}

void ns_nsview_set_posts_frame_changed_notifications(zval *handle, zval *postsFrameChangedNotifications)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return; }
        [v setPostsFrameChangedNotifications:ns_arg_bool(postsFrameChangedNotifications)];
    }
}

void ns_nsview_resize_subviews_with_old_size(zval *handle, zval *width, zval *height)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return; }
        [v resizeSubviewsWithOldSize:ns_arg_size(width, height)];
    }
}

void ns_nsview_resize_with_old_superview_size(zval *handle, zval *width, zval *height)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return; }
        [v resizeWithOldSuperviewSize:ns_arg_size(width, height)];
    }
}

zend_long ns_nsview_autoresizes_subviews(zval *handle)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return 0; }
        return [v autoresizesSubviews] ? 1 : 0;
    }
}

void ns_nsview_set_autoresizes_subviews(zval *handle, zval *autoresizesSubviews)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return; }
        [v setAutoresizesSubviews:ns_arg_bool(autoresizesSubviews)];
    }
}

zend_long ns_nsview_autoresizing_mask(zval *handle)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return 0; }
        return (zend_long) [v autoresizingMask];
    }
}

void ns_nsview_set_autoresizing_mask(zval *handle, zval *autoresizingMask)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return; }
        [v setAutoresizingMask:(NSAutoresizingMaskOptions) ns_arg_long(autoresizingMask)];
    }
}

void ns_nsview_set_frame_origin(zval *handle, zval *x, zval *y)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return; }
        [v setFrameOrigin:ns_arg_point(x, y)];
    }
}

void ns_nsview_set_frame_size(zval *handle, zval *width, zval *height)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return; }
        [v setFrameSize:ns_arg_size(width, height)];
    }
}

void ns_nsview_frame(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { ZVAL_NULL(return_value); return; }
        ns_ret_rect(return_value, [v frame]);
    }
}

void ns_nsview_set_frame(zval *handle, zval *x, zval *y, zval *width, zval *height)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return; }
        [v setFrame:ns_arg_rect(x, y, width, height)];
    }
}

double ns_nsview_frame_rotation(zval *handle)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return 0; }
        return [v frameRotation];
    }
}

void ns_nsview_set_frame_rotation(zval *handle, zval *frameRotation)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return; }
        [v setFrameRotation:ns_arg_double(frameRotation)];
    }
}

double ns_nsview_frame_center_rotation(zval *handle)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return 0; }
        return [v frameCenterRotation];
    }
}

void ns_nsview_set_frame_center_rotation(zval *handle, zval *frameCenterRotation)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return; }
        [v setFrameCenterRotation:ns_arg_double(frameCenterRotation)];
    }
}

void ns_nsview_set_bounds_origin(zval *handle, zval *x, zval *y)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return; }
        [v setBoundsOrigin:ns_arg_point(x, y)];
    }
}

void ns_nsview_set_bounds_size(zval *handle, zval *width, zval *height)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return; }
        [v setBoundsSize:ns_arg_size(width, height)];
    }
}

double ns_nsview_bounds_rotation(zval *handle)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return 0; }
        return [v boundsRotation];
    }
}

void ns_nsview_set_bounds_rotation(zval *handle, zval *boundsRotation)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return; }
        [v setBoundsRotation:ns_arg_double(boundsRotation)];
    }
}

void ns_nsview_translate_origin_to_point(zval *handle, zval *x, zval *y)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return; }
        [v translateOriginToPoint:ns_arg_point(x, y)];
    }
}

void ns_nsview_scale_unit_square_to_size(zval *handle, zval *width, zval *height)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return; }
        [v scaleUnitSquareToSize:ns_arg_size(width, height)];
    }
}

void ns_nsview_rotate_by_angle(zval *handle, zval *angle)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return; }
        [v rotateByAngle:ns_arg_double(angle)];
    }
}

void ns_nsview_bounds(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { ZVAL_NULL(return_value); return; }
        ns_ret_rect(return_value, [v bounds]);
    }
}

void ns_nsview_set_bounds(zval *handle, zval *x, zval *y, zval *width, zval *height)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return; }
        [v setBounds:ns_arg_rect(x, y, width, height)];
    }
}

zend_long ns_nsview_is_flipped(zval *handle)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return 0; }
        return [v isFlipped] ? 1 : 0;
    }
}

zend_long ns_nsview_is_rotated_from_base(zval *handle)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return 0; }
        return [v isRotatedFromBase] ? 1 : 0;
    }
}

zend_long ns_nsview_is_rotated_or_scaled_from_base(zval *handle)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return 0; }
        return [v isRotatedOrScaledFromBase] ? 1 : 0;
    }
}

zend_long ns_nsview_is_opaque(zval *handle)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return 0; }
        return [v isOpaque] ? 1 : 0;
    }
}

void ns_nsview_convert_point_from_view(zval *return_value, zval *handle, zval *x, zval *y, zval *view)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { ZVAL_NULL(return_value); return; }
        ns_ret_point(return_value, [v convertPoint:ns_arg_point(x, y) fromView:NS_ARG_AS(NSView, view)]);
    }
}

void ns_nsview_convert_point_to_view(zval *return_value, zval *handle, zval *x, zval *y, zval *view)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { ZVAL_NULL(return_value); return; }
        ns_ret_point(return_value, [v convertPoint:ns_arg_point(x, y) toView:NS_ARG_AS(NSView, view)]);
    }
}

void ns_nsview_convert_size_from_view(zval *return_value, zval *handle, zval *width, zval *height, zval *view)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { ZVAL_NULL(return_value); return; }
        ns_ret_size(return_value, [v convertSize:ns_arg_size(width, height) fromView:NS_ARG_AS(NSView, view)]);
    }
}

void ns_nsview_convert_size_to_view(zval *return_value, zval *handle, zval *width, zval *height, zval *view)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { ZVAL_NULL(return_value); return; }
        ns_ret_size(return_value, [v convertSize:ns_arg_size(width, height) toView:NS_ARG_AS(NSView, view)]);
    }
}

void ns_nsview_convert_rect_from_view(zval *return_value, zval *handle, zval *x, zval *y, zval *width, zval *height, zval *view)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { ZVAL_NULL(return_value); return; }
        ns_ret_rect(return_value, [v convertRect:ns_arg_rect(x, y, width, height) fromView:NS_ARG_AS(NSView, view)]);
    }
}

void ns_nsview_convert_rect_to_view(zval *return_value, zval *handle, zval *x, zval *y, zval *width, zval *height, zval *view)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { ZVAL_NULL(return_value); return; }
        ns_ret_rect(return_value, [v convertRect:ns_arg_rect(x, y, width, height) toView:NS_ARG_AS(NSView, view)]);
    }
}

void ns_nsview_backing_aligned_rect_options(zval *return_value, zval *handle, zval *x, zval *y, zval *width, zval *height, zval *options)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { ZVAL_NULL(return_value); return; }
        ns_ret_rect(return_value, [v backingAlignedRect:ns_arg_rect(x, y, width, height) options:(NSAlignmentOptions) ns_arg_long(options)]);
    }
}

void ns_nsview_center_scan_rect(zval *return_value, zval *handle, zval *x, zval *y, zval *width, zval *height)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { ZVAL_NULL(return_value); return; }
        ns_ret_rect(return_value, [v centerScanRect:ns_arg_rect(x, y, width, height)]);
    }
}

void ns_nsview_convert_point_to_backing(zval *return_value, zval *handle, zval *x, zval *y)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { ZVAL_NULL(return_value); return; }
        ns_ret_point(return_value, [v convertPointToBacking:ns_arg_point(x, y)]);
    }
}

void ns_nsview_convert_point_from_backing(zval *return_value, zval *handle, zval *x, zval *y)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { ZVAL_NULL(return_value); return; }
        ns_ret_point(return_value, [v convertPointFromBacking:ns_arg_point(x, y)]);
    }
}

void ns_nsview_convert_size_to_backing(zval *return_value, zval *handle, zval *width, zval *height)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { ZVAL_NULL(return_value); return; }
        ns_ret_size(return_value, [v convertSizeToBacking:ns_arg_size(width, height)]);
    }
}

void ns_nsview_convert_size_from_backing(zval *return_value, zval *handle, zval *width, zval *height)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { ZVAL_NULL(return_value); return; }
        ns_ret_size(return_value, [v convertSizeFromBacking:ns_arg_size(width, height)]);
    }
}

void ns_nsview_convert_rect_to_backing(zval *return_value, zval *handle, zval *x, zval *y, zval *width, zval *height)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { ZVAL_NULL(return_value); return; }
        ns_ret_rect(return_value, [v convertRectToBacking:ns_arg_rect(x, y, width, height)]);
    }
}

void ns_nsview_convert_rect_from_backing(zval *return_value, zval *handle, zval *x, zval *y, zval *width, zval *height)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { ZVAL_NULL(return_value); return; }
        ns_ret_rect(return_value, [v convertRectFromBacking:ns_arg_rect(x, y, width, height)]);
    }
}

void ns_nsview_convert_point_to_layer(zval *return_value, zval *handle, zval *x, zval *y)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { ZVAL_NULL(return_value); return; }
        ns_ret_point(return_value, [v convertPointToLayer:ns_arg_point(x, y)]);
    }
}

void ns_nsview_convert_point_from_layer(zval *return_value, zval *handle, zval *x, zval *y)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { ZVAL_NULL(return_value); return; }
        ns_ret_point(return_value, [v convertPointFromLayer:ns_arg_point(x, y)]);
    }
}

void ns_nsview_convert_size_to_layer(zval *return_value, zval *handle, zval *width, zval *height)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { ZVAL_NULL(return_value); return; }
        ns_ret_size(return_value, [v convertSizeToLayer:ns_arg_size(width, height)]);
    }
}

void ns_nsview_convert_size_from_layer(zval *return_value, zval *handle, zval *width, zval *height)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { ZVAL_NULL(return_value); return; }
        ns_ret_size(return_value, [v convertSizeFromLayer:ns_arg_size(width, height)]);
    }
}

void ns_nsview_convert_rect_to_layer(zval *return_value, zval *handle, zval *x, zval *y, zval *width, zval *height)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { ZVAL_NULL(return_value); return; }
        ns_ret_rect(return_value, [v convertRectToLayer:ns_arg_rect(x, y, width, height)]);
    }
}

void ns_nsview_convert_rect_from_layer(zval *return_value, zval *handle, zval *x, zval *y, zval *width, zval *height)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { ZVAL_NULL(return_value); return; }
        ns_ret_rect(return_value, [v convertRectFromLayer:ns_arg_rect(x, y, width, height)]);
    }
}

zend_long ns_nsview_can_draw_concurrently(zval *handle)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return 0; }
        return [v canDrawConcurrently] ? 1 : 0;
    }
}

void ns_nsview_set_can_draw_concurrently(zval *handle, zval *canDrawConcurrently)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return; }
        [v setCanDrawConcurrently:ns_arg_bool(canDrawConcurrently)];
    }
}

void ns_nsview_set_needs_display_in_rect(zval *handle, zval *x, zval *y, zval *width, zval *height)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return; }
        [v setNeedsDisplayInRect:ns_arg_rect(x, y, width, height)];
    }
}

zend_long ns_nsview_needs_display(zval *handle)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return 0; }
        return [v needsDisplay] ? 1 : 0;
    }
}

void ns_nsview_set_needs_display(zval *handle, zval *needsDisplay)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return; }
        [v setNeedsDisplay:ns_arg_bool(needsDisplay)];
    }
}

zend_long ns_nsview_focus_view(void)
{
    @autoreleasepool {
        return ns_handle_for([NSView focusView]);
    }
}

void ns_nsview_visible_rect(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { ZVAL_NULL(return_value); return; }
        ns_ret_rect(return_value, [v visibleRect]);
    }
}

void ns_nsview_display(zval *handle)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return; }
        [v display];
    }
}

void ns_nsview_display_if_needed(zval *handle)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return; }
        [v displayIfNeeded];
    }
}

void ns_nsview_display_if_needed_ignoring_opacity(zval *handle)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return; }
        [v displayIfNeededIgnoringOpacity];
    }
}

void ns_nsview_display_rect(zval *handle, zval *x, zval *y, zval *width, zval *height)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return; }
        [v displayRect:ns_arg_rect(x, y, width, height)];
    }
}

void ns_nsview_display_if_needed_in_rect(zval *handle, zval *x, zval *y, zval *width, zval *height)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return; }
        [v displayIfNeededInRect:ns_arg_rect(x, y, width, height)];
    }
}

void ns_nsview_display_rect_ignoring_opacity(zval *handle, zval *x, zval *y, zval *width, zval *height)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return; }
        [v displayRectIgnoringOpacity:ns_arg_rect(x, y, width, height)];
    }
}

void ns_nsview_display_if_needed_in_rect_ignoring_opacity(zval *handle, zval *x, zval *y, zval *width, zval *height)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return; }
        [v displayIfNeededInRectIgnoringOpacity:ns_arg_rect(x, y, width, height)];
    }
}

void ns_nsview_draw_rect(zval *handle, zval *x, zval *y, zval *width, zval *height)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return; }
        [v drawRect:ns_arg_rect(x, y, width, height)];
    }
}

void ns_nsview_display_rect_ignoring_opacity_in_context(zval *handle, zval *x, zval *y, zval *width, zval *height, zval *context)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return; }
        [v displayRectIgnoringOpacity:ns_arg_rect(x, y, width, height) inContext:NS_ARG_AS(NSGraphicsContext, context)];
    }
}

zend_long ns_nsview_bitmap_image_rep_for_caching_display_in_rect(zval *handle, zval *x, zval *y, zval *width, zval *height)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return 0; }
        return ns_handle_for([v bitmapImageRepForCachingDisplayInRect:ns_arg_rect(x, y, width, height)]);
    }
}

void ns_nsview_cache_display_in_rect_to_bitmap_image_rep(zval *handle, zval *x, zval *y, zval *width, zval *height, zval *bitmapImageRep)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return; }
        [v cacheDisplayInRect:ns_arg_rect(x, y, width, height) toBitmapImageRep:NS_ARG_AS(NSBitmapImageRep, bitmapImageRep)];
    }
}

void ns_nsview_view_will_draw(zval *handle)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return; }
        [v viewWillDraw];
    }
}

void ns_nsview_scroll_point(zval *handle, zval *x, zval *y)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return; }
        [v scrollPoint:ns_arg_point(x, y)];
    }
}

zend_long ns_nsview_scroll_rect_to_visible(zval *handle, zval *x, zval *y, zval *width, zval *height)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return 0; }
        return [v scrollRectToVisible:ns_arg_rect(x, y, width, height)] ? 1 : 0;
    }
}

zend_long ns_nsview_autoscroll(zval *handle, zval *event)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return 0; }
        return [v autoscroll:NS_ARG_AS(NSEvent, event)] ? 1 : 0;
    }
}

void ns_nsview_adjust_scroll(zval *return_value, zval *handle, zval *x, zval *y, zval *width, zval *height)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { ZVAL_NULL(return_value); return; }
        ns_ret_rect(return_value, [v adjustScroll:ns_arg_rect(x, y, width, height)]);
    }
}

void ns_nsview_translate_rects_needing_display_in_rect_by(zval *handle, zval *clipRectX, zval *clipRectY, zval *clipRectWidth, zval *clipRectHeight, zval *deltaWidth, zval *deltaHeight)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return; }
        [v translateRectsNeedingDisplayInRect:ns_arg_rect(clipRectX, clipRectY, clipRectWidth, clipRectHeight) by:ns_arg_size(deltaWidth, deltaHeight)];
    }
}

zend_long ns_nsview_hit_test(zval *handle, zval *x, zval *y)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return 0; }
        return ns_handle_for([v hitTest:ns_arg_point(x, y)]);
    }
}

zend_long ns_nsview_mouse_in_rect(zval *handle, zval *pointX, zval *pointY, zval *rectX, zval *rectY, zval *rectWidth, zval *rectHeight)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return 0; }
        return [v mouse:ns_arg_point(pointX, pointY) inRect:ns_arg_rect(rectX, rectY, rectWidth, rectHeight)] ? 1 : 0;
    }
}

zend_long ns_nsview_view_with_tag(zval *handle, zval *tag)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return 0; }
        return ns_handle_for([v viewWithTag:ns_arg_long(tag)]);
    }
}

zend_long ns_nsview_tag(zval *handle)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return 0; }
        return (zend_long) [v tag];
    }
}

zend_long ns_nsview_perform_key_equivalent(zval *handle, zval *event)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return 0; }
        return [v performKeyEquivalent:NS_ARG_AS(NSEvent, event)] ? 1 : 0;
    }
}

zend_long ns_nsview_accepts_first_mouse(zval *handle, zval *event)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return 0; }
        return [v acceptsFirstMouse:NS_ARG_AS(NSEvent, event)] ? 1 : 0;
    }
}

zend_long ns_nsview_should_delay_window_ordering_for_event(zval *handle, zval *event)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return 0; }
        return [v shouldDelayWindowOrderingForEvent:NS_ARG_AS(NSEvent, event)] ? 1 : 0;
    }
}

zend_long ns_nsview_needs_panel_to_become_key(zval *handle)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return 0; }
        return [v needsPanelToBecomeKey] ? 1 : 0;
    }
}

zend_long ns_nsview_mouse_down_can_move_window(zval *handle)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return 0; }
        return [v mouseDownCanMoveWindow] ? 1 : 0;
    }
}

zend_long ns_nsview_wants_resting_touches(zval *handle)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return 0; }
        return [v wantsRestingTouches] ? 1 : 0;
    }
}

void ns_nsview_set_wants_resting_touches(zval *handle, zval *wantsRestingTouches)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return; }
        [v setWantsRestingTouches:ns_arg_bool(wantsRestingTouches)];
    }
}

zend_long ns_nsview_make_backing_layer(zval *handle)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return 0; }
        return ns_handle_for([v makeBackingLayer]);
    }
}

zend_long ns_nsview_layer_contents_redraw_policy(zval *handle)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return 0; }
        return (zend_long) [v layerContentsRedrawPolicy];
    }
}

void ns_nsview_set_layer_contents_redraw_policy(zval *handle, zval *layerContentsRedrawPolicy)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return; }
        [v setLayerContentsRedrawPolicy:(NSViewLayerContentsRedrawPolicy) ns_arg_long(layerContentsRedrawPolicy)];
    }
}

zend_long ns_nsview_layer_contents_placement(zval *handle)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return 0; }
        return (zend_long) [v layerContentsPlacement];
    }
}

void ns_nsview_set_layer_contents_placement(zval *handle, zval *layerContentsPlacement)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return; }
        [v setLayerContentsPlacement:(NSViewLayerContentsPlacement) ns_arg_long(layerContentsPlacement)];
    }
}

zend_long ns_nsview_wants_layer(zval *handle)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return 0; }
        return [v wantsLayer] ? 1 : 0;
    }
}

void ns_nsview_set_wants_layer(zval *handle, zval *wantsLayer)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return; }
        [v setWantsLayer:ns_arg_bool(wantsLayer)];
    }
}

zend_long ns_nsview_layer(zval *handle)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return 0; }
        return ns_handle_for([v layer]);
    }
}

void ns_nsview_set_layer(zval *handle, zval *layer)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return; }
        [v setLayer:NS_ARG_AS(CALayer, layer)];
    }
}

zend_long ns_nsview_wants_update_layer(zval *handle)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return 0; }
        return [v wantsUpdateLayer] ? 1 : 0;
    }
}

void ns_nsview_update_layer(zval *handle)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return; }
        [v updateLayer];
    }
}

zend_long ns_nsview_can_draw_subviews_into_layer(zval *handle)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return 0; }
        return [v canDrawSubviewsIntoLayer] ? 1 : 0;
    }
}

void ns_nsview_set_can_draw_subviews_into_layer(zval *handle, zval *canDrawSubviewsIntoLayer)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return; }
        [v setCanDrawSubviewsIntoLayer:ns_arg_bool(canDrawSubviewsIntoLayer)];
    }
}

void ns_nsview_layout_subtree_if_needed(zval *handle)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return; }
        [v layoutSubtreeIfNeeded];
    }
}

void ns_nsview_layout(zval *handle)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return; }
        [v layout];
    }
}

zend_long ns_nsview_needs_layout(zval *handle)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return 0; }
        return [v needsLayout] ? 1 : 0;
    }
}

void ns_nsview_set_needs_layout(zval *handle, zval *needsLayout)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return; }
        [v setNeedsLayout:ns_arg_bool(needsLayout)];
    }
}

double ns_nsview_alpha_value(zval *handle)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return 0; }
        return [v alphaValue];
    }
}

void ns_nsview_set_alpha_value(zval *handle, zval *alphaValue)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return; }
        [v setAlphaValue:ns_arg_double(alphaValue)];
    }
}

zend_long ns_nsview_layer_uses_core_image_filters(zval *handle)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return 0; }
        return [v layerUsesCoreImageFilters] ? 1 : 0;
    }
}

void ns_nsview_set_layer_uses_core_image_filters(zval *handle, zval *layerUsesCoreImageFilters)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return; }
        [v setLayerUsesCoreImageFilters:ns_arg_bool(layerUsesCoreImageFilters)];
    }
}

void ns_nsview_background_filters(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { ZVAL_NULL(return_value); return; }
        ns_ret_object_array(return_value, [v backgroundFilters]);
    }
}

void ns_nsview_set_background_filters(zval *handle, zval *backgroundFilters)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return; }
        [v setBackgroundFilters:ns_arg_object_array(backgroundFilters)];
    }
}

zend_long ns_nsview_compositing_filter(zval *handle)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return 0; }
        return ns_handle_for([v compositingFilter]);
    }
}

void ns_nsview_set_compositing_filter(zval *handle, zval *compositingFilter)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return; }
        [v setCompositingFilter:NS_ARG_AS(CIFilter, compositingFilter)];
    }
}

void ns_nsview_content_filters(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { ZVAL_NULL(return_value); return; }
        ns_ret_object_array(return_value, [v contentFilters]);
    }
}

void ns_nsview_set_content_filters(zval *handle, zval *contentFilters)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return; }
        [v setContentFilters:ns_arg_object_array(contentFilters)];
    }
}

zend_long ns_nsview_shadow(zval *handle)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return 0; }
        return ns_handle_for([v shadow]);
    }
}

void ns_nsview_set_shadow(zval *handle, zval *shadow)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return; }
        [v setShadow:NS_ARG_AS(NSShadow, shadow)];
    }
}

zend_long ns_nsview_clips_to_bounds(zval *handle)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return 0; }
        return [v clipsToBounds] ? 1 : 0;
    }
}

void ns_nsview_set_clips_to_bounds(zval *handle, zval *clipsToBounds)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return; }
        [v setClipsToBounds:ns_arg_bool(clipsToBounds)];
    }
}

zend_long ns_nsview_posts_bounds_changed_notifications(zval *handle)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return 0; }
        return [v postsBoundsChangedNotifications] ? 1 : 0;
    }
}

void ns_nsview_set_posts_bounds_changed_notifications(zval *handle, zval *postsBoundsChangedNotifications)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return; }
        [v setPostsBoundsChangedNotifications:ns_arg_bool(postsBoundsChangedNotifications)];
    }
}

zend_long ns_nsview_enclosing_scroll_view(zval *handle)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return 0; }
        return ns_handle_for([v enclosingScrollView]);
    }
}

zend_long ns_nsview_menu_for_event(zval *handle, zval *event)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return 0; }
        return ns_handle_for([v menuForEvent:NS_ARG_AS(NSEvent, event)]);
    }
}

zend_long ns_nsview_default_menu(void)
{
    @autoreleasepool {
        return ns_handle_for([NSView defaultMenu]);
    }
}

void ns_nsview_will_open_menu_with_event(zval *handle, zval *menu, zval *event)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return; }
        [v willOpenMenu:NS_ARG_AS(NSMenu, menu) withEvent:NS_ARG_AS(NSEvent, event)];
    }
}

void ns_nsview_did_close_menu_with_event(zval *handle, zval *menu, zval *event)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return; }
        [v didCloseMenu:NS_ARG_AS(NSMenu, menu) withEvent:NS_ARG_AS(NSEvent, event)];
    }
}

void ns_nsview_tool_tip(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { ZVAL_NULL(return_value); return; }
        ns_ret_string(return_value, [v toolTip]);
    }
}

void ns_nsview_set_tool_tip(zval *handle, zval *toolTip)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return; }
        [v setToolTip:ns_arg_string(toolTip)];
    }
}

zend_long ns_nsview_add_tool_tip_rect_owner_user_data(zval *handle, zval *x, zval *y, zval *width, zval *height, zval *owner, zval *data)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return 0; }
        return (zend_long) [v addToolTipRect:ns_arg_rect(x, y, width, height) owner:ns_arg_object(owner) userData:(void *)(uintptr_t) ns_arg_long(data)];
    }
}

void ns_nsview_remove_tool_tip(zval *handle, zval *tag)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return; }
        [v removeToolTip:ns_arg_long(tag)];
    }
}

void ns_nsview_remove_all_tool_tips(zval *handle)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return; }
        [v removeAllToolTips];
    }
}

void ns_nsview_view_will_start_live_resize(zval *handle)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return; }
        [v viewWillStartLiveResize];
    }
}

void ns_nsview_view_did_end_live_resize(zval *handle)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return; }
        [v viewDidEndLiveResize];
    }
}

zend_long ns_nsview_in_live_resize(zval *handle)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return 0; }
        return [v inLiveResize] ? 1 : 0;
    }
}

zend_long ns_nsview_preserves_content_during_live_resize(zval *handle)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return 0; }
        return [v preservesContentDuringLiveResize] ? 1 : 0;
    }
}

void ns_nsview_rect_preserved_during_live_resize(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { ZVAL_NULL(return_value); return; }
        ns_ret_rect(return_value, [v rectPreservedDuringLiveResize]);
    }
}

void ns_nsview_get_rects_exposed_during_live_resize_count(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { ZVAL_NULL(return_value); return; }
        NSRect exposed[4];
        NSInteger count = 0;
        [v getRectsExposedDuringLiveResize:exposed count:&count];
        array_init(return_value);
        for (NSInteger i = 0; i < count; i++) {
            zval item;
            ns_ret_rect(&item, exposed[i]);
            add_next_index_zval(return_value, &item);
        }
    }
}

zend_long ns_nsview_input_context(zval *handle)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return 0; }
        return ns_handle_for([v inputContext]);
    }
}

void ns_nsview_rect_for_smart_magnification_at_point_in_rect(zval *return_value, zval *handle, zval *locationX, zval *locationY, zval *visibleRectX, zval *visibleRectY, zval *visibleRectWidth, zval *visibleRectHeight)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { ZVAL_NULL(return_value); return; }
        ns_ret_rect(return_value, [v rectForSmartMagnificationAtPoint:ns_arg_point(locationX, locationY) inRect:ns_arg_rect(visibleRectX, visibleRectY, visibleRectWidth, visibleRectHeight)]);
    }
}

zend_long ns_nsview_user_interface_layout_direction(zval *handle)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return 0; }
        return (zend_long) [v userInterfaceLayoutDirection];
    }
}

void ns_nsview_set_user_interface_layout_direction(zval *handle, zval *userInterfaceLayoutDirection)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return; }
        [v setUserInterfaceLayoutDirection:(NSUserInterfaceLayoutDirection) ns_arg_long(userInterfaceLayoutDirection)];
    }
}

void ns_nsview_prepare_for_reuse(zval *handle)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return; }
        [v prepareForReuse];
    }
}

zend_long ns_nsview_is_compatible_with_responsive_scrolling(void)
{
    @autoreleasepool {
        return [NSView isCompatibleWithResponsiveScrolling] ? 1 : 0;
    }
}

void ns_nsview_prepare_content_in_rect(zval *handle, zval *x, zval *y, zval *width, zval *height)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return; }
        [v prepareContentInRect:ns_arg_rect(x, y, width, height)];
    }
}

void ns_nsview_prepared_content_rect(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { ZVAL_NULL(return_value); return; }
        ns_ret_rect(return_value, [v preparedContentRect]);
    }
}

void ns_nsview_set_prepared_content_rect(zval *handle, zval *x, zval *y, zval *width, zval *height)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return; }
        [v setPreparedContentRect:ns_arg_rect(x, y, width, height)];
    }
}

zend_long ns_nsview_allows_vibrancy(zval *handle)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return 0; }
        return [v allowsVibrancy] ? 1 : 0;
    }
}

void ns_nsview_view_did_change_effective_appearance(zval *handle)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return; }
        [v viewDidChangeEffectiveAppearance];
    }
}


/* ---- NSKeyboardUI ---- */
zend_long ns_nsview_next_key_view(zval *handle)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return 0; }
        return ns_handle_for([v nextKeyView]);
    }
}

void ns_nsview_set_next_key_view(zval *handle, zval *nextKeyView)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return; }
        [v setNextKeyView:NS_ARG_AS(NSView, nextKeyView)];
    }
}

zend_long ns_nsview_previous_key_view(zval *handle)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return 0; }
        return ns_handle_for([v previousKeyView]);
    }
}

zend_long ns_nsview_next_valid_key_view(zval *handle)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return 0; }
        return ns_handle_for([v nextValidKeyView]);
    }
}

zend_long ns_nsview_previous_valid_key_view(zval *handle)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return 0; }
        return ns_handle_for([v previousValidKeyView]);
    }
}

zend_long ns_nsview_can_become_key_view(zval *handle)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return 0; }
        return [v canBecomeKeyView] ? 1 : 0;
    }
}

void ns_nsview_set_keyboard_focus_ring_needs_display_in_rect(zval *handle, zval *x, zval *y, zval *width, zval *height)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return; }
        [v setKeyboardFocusRingNeedsDisplayInRect:ns_arg_rect(x, y, width, height)];
    }
}

zend_long ns_nsview_focus_ring_type(zval *handle)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return 0; }
        return (zend_long) [v focusRingType];
    }
}

void ns_nsview_set_focus_ring_type(zval *handle, zval *focusRingType)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return; }
        [v setFocusRingType:(NSFocusRingType) ns_arg_long(focusRingType)];
    }
}

zend_long ns_nsview_default_focus_ring_type(void)
{
    @autoreleasepool {
        return (zend_long) [NSView defaultFocusRingType];
    }
}

void ns_nsview_draw_focus_ring_mask(zval *handle)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return; }
        [v drawFocusRingMask];
    }
}

void ns_nsview_focus_ring_mask_bounds(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { ZVAL_NULL(return_value); return; }
        ns_ret_rect(return_value, [v focusRingMaskBounds]);
    }
}

void ns_nsview_note_focus_ring_mask_changed(zval *handle)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return; }
        [v noteFocusRingMaskChanged];
    }
}


/* ---- NSPrinting ---- */
void ns_nsview_write_epsinside_rect_to_pasteboard(zval *handle, zval *x, zval *y, zval *width, zval *height, zval *pasteboard)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return; }
        [v writeEPSInsideRect:ns_arg_rect(x, y, width, height) toPasteboard:NS_ARG_AS(NSPasteboard, pasteboard)];
    }
}

void ns_nsview_write_pdfinside_rect_to_pasteboard(zval *handle, zval *x, zval *y, zval *width, zval *height, zval *pasteboard)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return; }
        [v writePDFInsideRect:ns_arg_rect(x, y, width, height) toPasteboard:NS_ARG_AS(NSPasteboard, pasteboard)];
    }
}

void ns_nsview_print_(zval *handle, zval *sender)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return; }
        [v print:ns_arg_object(sender)];
    }
}

void ns_nsview_knows_page_range(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { ZVAL_NULL(return_value); return; }
        NSRange range = NSMakeRange(0, 0);
        BOOL knows = [v knowsPageRange:&range];
        array_init_size(return_value, 3);
        add_assoc_long(return_value, "knows", knows ? 1 : 0);
        add_assoc_long(return_value, "location", (zend_long) range.location);
        add_assoc_long(return_value, "length", (zend_long) range.length);
    }
}

double ns_nsview_height_adjust_limit(zval *handle)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return 0; }
        return [v heightAdjustLimit];
    }
}

double ns_nsview_width_adjust_limit(zval *handle)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return 0; }
        return [v widthAdjustLimit];
    }
}

void ns_nsview_adjust_page_width_new_left_right_limit(zval *return_value, zval *handle, zval *oldLeft, zval *oldRight, zval *rightLimit)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { ZVAL_NULL(return_value); return; }
        CGFloat newRight = 0;
        [v adjustPageWidthNew:&newRight left:ns_arg_double(oldLeft) right:ns_arg_double(oldRight) limit:ns_arg_double(rightLimit)];
        array_init_size(return_value, 1);
        add_assoc_double(return_value, "newRight", newRight);
    }
}

void ns_nsview_adjust_page_height_new_top_bottom_limit(zval *return_value, zval *handle, zval *oldTop, zval *oldBottom, zval *bottomLimit)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { ZVAL_NULL(return_value); return; }
        CGFloat newBottom = 0;
        [v adjustPageHeightNew:&newBottom top:ns_arg_double(oldTop) bottom:ns_arg_double(oldBottom) limit:ns_arg_double(bottomLimit)];
        array_init_size(return_value, 1);
        add_assoc_double(return_value, "newBottom", newBottom);
    }
}

void ns_nsview_rect_for_page(zval *return_value, zval *handle, zval *page)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { ZVAL_NULL(return_value); return; }
        ns_ret_rect(return_value, [v rectForPage:ns_arg_long(page)]);
    }
}

void ns_nsview_location_of_print_rect(zval *return_value, zval *handle, zval *x, zval *y, zval *width, zval *height)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { ZVAL_NULL(return_value); return; }
        ns_ret_point(return_value, [v locationOfPrintRect:ns_arg_rect(x, y, width, height)]);
    }
}

void ns_nsview_draw_page_border_with_size(zval *handle, zval *width, zval *height)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return; }
        [v drawPageBorderWithSize:ns_arg_size(width, height)];
    }
}

void ns_nsview_print_job_title(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { ZVAL_NULL(return_value); return; }
        ns_ret_string(return_value, [v printJobTitle]);
    }
}

void ns_nsview_begin_document(zval *handle)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return; }
        [v beginDocument];
    }
}

void ns_nsview_end_document(zval *handle)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return; }
        [v endDocument];
    }
}

void ns_nsview_begin_page_in_rect_at_placement(zval *handle, zval *rectX, zval *rectY, zval *rectWidth, zval *rectHeight, zval *locationX, zval *locationY)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return; }
        [v beginPageInRect:ns_arg_rect(rectX, rectY, rectWidth, rectHeight) atPlacement:ns_arg_point(locationX, locationY)];
    }
}

void ns_nsview_end_page(zval *handle)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return; }
        [v endPage];
    }
}


/* ---- NSDrag ---- */
zend_long ns_nsview_begin_dragging_session_with_items_event_source(zval *handle, zval *items, zval *event, zval *source)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return 0; }
        return ns_handle_for([v beginDraggingSessionWithItems:ns_arg_object_array(items) event:NS_ARG_AS(NSEvent, event) source:ns_arg_object(source)]);
    }
}

void ns_nsview_registered_dragged_types(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { ZVAL_NULL(return_value); return; }
        ns_ret_string_array(return_value, [v registeredDraggedTypes]);
    }
}

void ns_nsview_register_for_dragged_types(zval *handle, zval *newTypes)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return; }
        [v registerForDraggedTypes:ns_arg_string_array(newTypes)];
    }
}

void ns_nsview_unregister_dragged_types(zval *handle)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return; }
        [v unregisterDraggedTypes];
    }
}


/* ---- NSFullScreenMode ---- */
zend_long ns_nsview_enter_full_screen_mode_with_options(zval *handle, zval *screen, zval *options)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return 0; }
        return [v enterFullScreenMode:NS_ARG_AS(NSScreen, screen) withOptions:NS_ARG_AS(NSDictionary, options)] ? 1 : 0;
    }
}

void ns_nsview_exit_full_screen_mode_with_options(zval *handle, zval *options)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return; }
        [v exitFullScreenModeWithOptions:NS_ARG_AS(NSDictionary, options)];
    }
}

zend_long ns_nsview_is_in_full_screen_mode(zval *handle)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return 0; }
        return [v isInFullScreenMode] ? 1 : 0;
    }
}


/* ---- NSDefinition ---- */

/* ---- NSFindIndicator ---- */
zend_long ns_nsview_is_drawing_find_indicator(zval *handle)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return 0; }
        return [v isDrawingFindIndicator] ? 1 : 0;
    }
}


/* ---- NSGestureRecognizer ---- */
void ns_nsview_gesture_recognizers(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { ZVAL_NULL(return_value); return; }
        ns_ret_object_array(return_value, [v gestureRecognizers]);
    }
}

void ns_nsview_set_gesture_recognizers(zval *handle, zval *gestureRecognizers)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return; }
        [v setGestureRecognizers:ns_arg_object_array(gestureRecognizers)];
    }
}

void ns_nsview_add_gesture_recognizer(zval *handle, zval *gestureRecognizer)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return; }
        [v addGestureRecognizer:NS_ARG_AS(NSGestureRecognizer, gestureRecognizer)];
    }
}

void ns_nsview_remove_gesture_recognizer(zval *handle, zval *gestureRecognizer)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return; }
        [v removeGestureRecognizer:NS_ARG_AS(NSGestureRecognizer, gestureRecognizer)];
    }
}


/* ---- NSTouchBar ---- */
zend_long ns_nsview_allowed_touch_types(zval *handle)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return 0; }
        return (zend_long) [v allowedTouchTypes];
    }
}

void ns_nsview_set_allowed_touch_types(zval *handle, zval *allowedTouchTypes)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return; }
        [v setAllowedTouchTypes:(NSTouchTypeMask) ns_arg_long(allowedTouchTypes)];
    }
}


/* ---- NSSafeAreas ---- */
void ns_nsview_safe_area_insets(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { ZVAL_NULL(return_value); return; }
        ns_ret_edge_insets(return_value, [v safeAreaInsets]);
    }
}

void ns_nsview_additional_safe_area_insets(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { ZVAL_NULL(return_value); return; }
        ns_ret_edge_insets(return_value, [v additionalSafeAreaInsets]);
    }
}

void ns_nsview_set_additional_safe_area_insets(zval *handle, zval *top, zval *left, zval *bottom, zval *right)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return; }
        [v setAdditionalSafeAreaInsets:NSEdgeInsetsMake(ns_arg_double(top), ns_arg_double(left), ns_arg_double(bottom), ns_arg_double(right))];
    }
}

zend_long ns_nsview_safe_area_layout_guide(zval *handle)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return 0; }
        return ns_handle_for([v safeAreaLayoutGuide]);
    }
}

void ns_nsview_safe_area_rect(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { ZVAL_NULL(return_value); return; }
        ns_ret_rect(return_value, [v safeAreaRect]);
    }
}

zend_long ns_nsview_layout_margins_guide(zval *handle)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return 0; }
        return ns_handle_for([v layoutMarginsGuide]);
    }
}


/* ---- NSTrackingArea ---- */
void ns_nsview_add_tracking_area(zval *handle, zval *trackingArea)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return; }
        [v addTrackingArea:NS_ARG_AS(NSTrackingArea, trackingArea)];
    }
}

void ns_nsview_remove_tracking_area(zval *handle, zval *trackingArea)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return; }
        [v removeTrackingArea:NS_ARG_AS(NSTrackingArea, trackingArea)];
    }
}

void ns_nsview_tracking_areas(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { ZVAL_NULL(return_value); return; }
        ns_ret_object_array(return_value, [v trackingAreas]);
    }
}

void ns_nsview_update_tracking_areas(zval *handle)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return; }
        [v updateTrackingAreas];
    }
}

void ns_nsview_add_cursor_rect_cursor(zval *handle, zval *x, zval *y, zval *width, zval *height, zval *object_)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return; }
        [v addCursorRect:ns_arg_rect(x, y, width, height) cursor:NS_ARG_AS(NSCursor, object_)];
    }
}

void ns_nsview_remove_cursor_rect_cursor(zval *handle, zval *x, zval *y, zval *width, zval *height, zval *object_)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return; }
        [v removeCursorRect:ns_arg_rect(x, y, width, height) cursor:NS_ARG_AS(NSCursor, object_)];
    }
}

void ns_nsview_discard_cursor_rects(zval *handle)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return; }
        [v discardCursorRects];
    }
}

void ns_nsview_reset_cursor_rects(zval *handle)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return; }
        [v resetCursorRects];
    }
}

zend_long ns_nsview_add_tracking_rect_owner_user_data_assume_inside(zval *handle, zval *x, zval *y, zval *width, zval *height, zval *owner, zval *data, zval *flag)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return 0; }
        return (zend_long) [v addTrackingRect:ns_arg_rect(x, y, width, height) owner:ns_arg_object(owner) userData:(void *)(uintptr_t) ns_arg_long(data) assumeInside:ns_arg_bool(flag)];
    }
}

void ns_nsview_remove_tracking_rect(zval *handle, zval *tag)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return; }
        [v removeTrackingRect:ns_arg_long(tag)];
    }
}


/* ---- NSDisplayLink ---- */
zend_long ns_nsview_display_link_with_target_selector(zval *handle, zval *target, zval *selector)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return 0; }
        return ns_handle_for([v displayLinkWithTarget:ns_arg_object(target) selector:ns_arg_sel(selector)]);
    }
}


/* ---- NSDeprecated ---- */

/* ---- NSWritingToolsCoordinator ---- */
zend_long ns_nsview_writing_tools_coordinator(zval *handle)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return 0; }
        return ns_handle_for([v writingToolsCoordinator]);
    }
}

void ns_nsview_set_writing_tools_coordinator(zval *handle, zval *writingToolsCoordinator)
{
    @autoreleasepool {
        NSView *v = NS_ARG_AS(NSView, handle);
        if (v == nil) { return; }
        [v setWritingToolsCoordinator:NS_ARG_AS(NSWritingToolsCoordinator, writingToolsCoordinator)];
    }
}
