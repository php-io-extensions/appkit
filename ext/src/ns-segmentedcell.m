#include "ns-segmentedcell.h"
#include "ns-value.h"

/* ====================================================================== */
/* NSSegmentedCell                                                        */
/* ====================================================================== */

zend_long ns_nssegmentedcell_init_text_cell(zval *string_)
{
    @autoreleasepool {
        return ns_handle_for([[NSSegmentedCell alloc] initTextCell:ns_arg_string(string_)]);
    }
}

zend_long ns_nssegmentedcell_init_image_cell(zval *image)
{
    @autoreleasepool {
        return ns_handle_for([[NSSegmentedCell alloc] initImageCell:NS_ARG_AS(NSImage, image)]);
    }
}

zend_long ns_nssegmentedcell_segment_count(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSSegmentedCell *c = NS_ARG_AS(NSSegmentedCell, handle);
        r = c != nil ? (zend_long) [c segmentCount] : 0;
    }
    return r;
}

void ns_nssegmentedcell_set_segment_count(zval *handle, zval *segmentCount)
{
    @autoreleasepool {
        NSSegmentedCell *c = NS_ARG_AS(NSSegmentedCell, handle);
        if (c == nil) return;
        [c setSegmentCount:(NSInteger) ns_arg_long(segmentCount)];
    }
}

zend_long ns_nssegmentedcell_selected_segment(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSSegmentedCell *c = NS_ARG_AS(NSSegmentedCell, handle);
        r = c != nil ? (zend_long) [c selectedSegment] : 0;
    }
    return r;
}

void ns_nssegmentedcell_set_selected_segment(zval *handle, zval *selectedSegment)
{
    @autoreleasepool {
        NSSegmentedCell *c = NS_ARG_AS(NSSegmentedCell, handle);
        if (c == nil) return;
        [c setSelectedSegment:(NSInteger) ns_arg_long(selectedSegment)];
    }
}

zend_long ns_nssegmentedcell_select_segment_with_tag(zval *handle, zval *tag)
{
    zend_long r = 0;
    @autoreleasepool {
        NSSegmentedCell *c = NS_ARG_AS(NSSegmentedCell, handle);
        r = (c != nil && [c selectSegmentWithTag:(NSInteger) ns_arg_long(tag)]) ? 1 : 0;
    }
    return r;
}

void ns_nssegmentedcell_make_next_segment_key(zval *handle)
{
    @autoreleasepool {
        NSSegmentedCell *c = NS_ARG_AS(NSSegmentedCell, handle);
        if (c == nil) return;
        [c makeNextSegmentKey];
    }
}

void ns_nssegmentedcell_make_previous_segment_key(zval *handle)
{
    @autoreleasepool {
        NSSegmentedCell *c = NS_ARG_AS(NSSegmentedCell, handle);
        if (c == nil) return;
        [c makePreviousSegmentKey];
    }
}

zend_long ns_nssegmentedcell_tracking_mode(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSSegmentedCell *c = NS_ARG_AS(NSSegmentedCell, handle);
        r = c != nil ? (zend_long) [c trackingMode] : 0;
    }
    return r;
}

void ns_nssegmentedcell_set_tracking_mode(zval *handle, zval *trackingMode)
{
    @autoreleasepool {
        NSSegmentedCell *c = NS_ARG_AS(NSSegmentedCell, handle);
        if (c == nil) return;
        [c setTrackingMode:(NSSegmentSwitchTracking) ns_arg_long(trackingMode)];
    }
}

void ns_nssegmentedcell_set_width_for_segment(zval *handle, zval *width, zval *segment)
{
    @autoreleasepool {
        NSSegmentedCell *c = NS_ARG_AS(NSSegmentedCell, handle);
        if (c == nil) return;
        [c setWidth:(CGFloat) ns_arg_double(width) forSegment:(NSInteger) ns_arg_long(segment)];
    }
}

double ns_nssegmentedcell_width_for_segment(zval *handle, zval *segment)
{
    double r = 0.0;
    @autoreleasepool {
        NSSegmentedCell *c = NS_ARG_AS(NSSegmentedCell, handle);
        r = c != nil ? (double) [c widthForSegment:(NSInteger) ns_arg_long(segment)] : 0.0;
    }
    return r;
}

void ns_nssegmentedcell_set_image_for_segment(zval *handle, zval *image, zval *segment)
{
    @autoreleasepool {
        NSSegmentedCell *c = NS_ARG_AS(NSSegmentedCell, handle);
        if (c == nil) return;
        [c setImage:NS_ARG_AS(NSImage, image) forSegment:(NSInteger) ns_arg_long(segment)];
    }
}

zend_long ns_nssegmentedcell_image_for_segment(zval *handle, zval *segment)
{
    zend_long h = 0;
    @autoreleasepool {
        NSSegmentedCell *c = NS_ARG_AS(NSSegmentedCell, handle);
        h = ns_handle_for(c != nil ? [c imageForSegment:(NSInteger) ns_arg_long(segment)] : nil);
    }
    return h;
}

void ns_nssegmentedcell_set_image_scaling_for_segment(zval *handle, zval *scaling, zval *segment)
{
    @autoreleasepool {
        NSSegmentedCell *c = NS_ARG_AS(NSSegmentedCell, handle);
        if (c == nil) return;
        [c setImageScaling:(NSImageScaling) ns_arg_long(scaling) forSegment:(NSInteger) ns_arg_long(segment)];
    }
}

zend_long ns_nssegmentedcell_image_scaling_for_segment(zval *handle, zval *segment)
{
    zend_long r = 0;
    @autoreleasepool {
        NSSegmentedCell *c = NS_ARG_AS(NSSegmentedCell, handle);
        r = c != nil ? (zend_long) [c imageScalingForSegment:(NSInteger) ns_arg_long(segment)] : 0;
    }
    return r;
}

void ns_nssegmentedcell_set_label_for_segment(zval *handle, zval *label, zval *segment)
{
    @autoreleasepool {
        NSSegmentedCell *c = NS_ARG_AS(NSSegmentedCell, handle);
        if (c == nil) return;
        [c setLabel:ns_arg_string(label) forSegment:(NSInteger) ns_arg_long(segment)];
    }
}

void ns_nssegmentedcell_label_for_segment(zval *return_value, zval *handle, zval *segment)
{
    @autoreleasepool {
        NSSegmentedCell *c = NS_ARG_AS(NSSegmentedCell, handle);
        ns_ret_string(return_value, c != nil ? [c labelForSegment:(NSInteger) ns_arg_long(segment)] : nil);
    }
}

void ns_nssegmentedcell_set_selected_for_segment(zval *handle, zval *selected, zval *segment)
{
    @autoreleasepool {
        NSSegmentedCell *c = NS_ARG_AS(NSSegmentedCell, handle);
        if (c == nil) return;
        [c setSelected:ns_arg_bool(selected) forSegment:(NSInteger) ns_arg_long(segment)];
    }
}

zend_long ns_nssegmentedcell_is_selected_for_segment(zval *handle, zval *segment)
{
    zend_long r = 0;
    @autoreleasepool {
        NSSegmentedCell *c = NS_ARG_AS(NSSegmentedCell, handle);
        r = (c != nil && [c isSelectedForSegment:(NSInteger) ns_arg_long(segment)]) ? 1 : 0;
    }
    return r;
}

void ns_nssegmentedcell_set_enabled_for_segment(zval *handle, zval *enabled, zval *segment)
{
    @autoreleasepool {
        NSSegmentedCell *c = NS_ARG_AS(NSSegmentedCell, handle);
        if (c == nil) return;
        [c setEnabled:ns_arg_bool(enabled) forSegment:(NSInteger) ns_arg_long(segment)];
    }
}

zend_long ns_nssegmentedcell_is_enabled_for_segment(zval *handle, zval *segment)
{
    zend_long r = 0;
    @autoreleasepool {
        NSSegmentedCell *c = NS_ARG_AS(NSSegmentedCell, handle);
        r = (c != nil && [c isEnabledForSegment:(NSInteger) ns_arg_long(segment)]) ? 1 : 0;
    }
    return r;
}

void ns_nssegmentedcell_set_menu_for_segment(zval *handle, zval *menu, zval *segment)
{
    @autoreleasepool {
        NSSegmentedCell *c = NS_ARG_AS(NSSegmentedCell, handle);
        if (c == nil) return;
        [c setMenu:NS_ARG_AS(NSMenu, menu) forSegment:(NSInteger) ns_arg_long(segment)];
    }
}

zend_long ns_nssegmentedcell_menu_for_segment(zval *handle, zval *segment)
{
    zend_long h = 0;
    @autoreleasepool {
        NSSegmentedCell *c = NS_ARG_AS(NSSegmentedCell, handle);
        h = ns_handle_for(c != nil ? [c menuForSegment:(NSInteger) ns_arg_long(segment)] : nil);
    }
    return h;
}

void ns_nssegmentedcell_set_tool_tip_for_segment(zval *handle, zval *toolTip, zval *segment)
{
    @autoreleasepool {
        NSSegmentedCell *c = NS_ARG_AS(NSSegmentedCell, handle);
        if (c == nil) return;
        [c setToolTip:ns_arg_string(toolTip) forSegment:(NSInteger) ns_arg_long(segment)];
    }
}

void ns_nssegmentedcell_tool_tip_for_segment(zval *return_value, zval *handle, zval *segment)
{
    @autoreleasepool {
        NSSegmentedCell *c = NS_ARG_AS(NSSegmentedCell, handle);
        ns_ret_string(return_value, c != nil ? [c toolTipForSegment:(NSInteger) ns_arg_long(segment)] : nil);
    }
}

void ns_nssegmentedcell_set_tag_for_segment(zval *handle, zval *tag, zval *segment)
{
    @autoreleasepool {
        NSSegmentedCell *c = NS_ARG_AS(NSSegmentedCell, handle);
        if (c == nil) return;
        [c setTag:(NSInteger) ns_arg_long(tag) forSegment:(NSInteger) ns_arg_long(segment)];
    }
}

zend_long ns_nssegmentedcell_tag_for_segment(zval *handle, zval *segment)
{
    zend_long r = 0;
    @autoreleasepool {
        NSSegmentedCell *c = NS_ARG_AS(NSSegmentedCell, handle);
        r = c != nil ? (zend_long) [c tagForSegment:(NSInteger) ns_arg_long(segment)] : 0;
    }
    return r;
}

zend_long ns_nssegmentedcell_segment_style(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSSegmentedCell *c = NS_ARG_AS(NSSegmentedCell, handle);
        r = c != nil ? (zend_long) [c segmentStyle] : 0;
    }
    return r;
}

void ns_nssegmentedcell_set_segment_style(zval *handle, zval *segmentStyle)
{
    @autoreleasepool {
        NSSegmentedCell *c = NS_ARG_AS(NSSegmentedCell, handle);
        if (c == nil) return;
        [c setSegmentStyle:(NSSegmentStyle) ns_arg_long(segmentStyle)];
    }
}

void ns_nssegmentedcell_draw_segment_in_frame_with_view(zval *handle, zval *segment, zval *x, zval *y, zval *width, zval *height, zval *controlView)
{
    @autoreleasepool {
        NSSegmentedCell *c = NS_ARG_AS(NSSegmentedCell, handle);
        if (c == nil) return;
        [c drawSegment:(NSInteger) ns_arg_long(segment) inFrame:ns_arg_rect(x, y, width, height) withView:NS_ARG_AS(NSView, controlView)];
    }
}

zend_long ns_nssegmentedcell_interior_background_style_for_segment(zval *handle, zval *segment)
{
    zend_long r = 0;
    @autoreleasepool {
        NSSegmentedCell *c = NS_ARG_AS(NSSegmentedCell, handle);
        r = c != nil ? (zend_long) [c interiorBackgroundStyleForSegment:(NSInteger) ns_arg_long(segment)] : 0;
    }
    return r;
}
