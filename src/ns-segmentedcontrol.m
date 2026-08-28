#include "ns-segmentedcontrol.h"
#include "ns-value.h"

/* ====================================================================== */
/* NSSegmentedControl                                                     */
/* ====================================================================== */

zend_long ns_nssegmentedcontrol_init_with_frame(zval *x, zval *y, zval *width, zval *height)
{
    @autoreleasepool {
        return ns_handle_for([[NSSegmentedControl alloc] initWithFrame:ns_arg_rect(x, y, width, height)]);
    }
}

zend_long ns_nssegmentedcontrol_segment_count(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSSegmentedControl *c = NS_ARG_AS(NSSegmentedControl, handle);
        r = c != nil ? (zend_long) [c segmentCount] : 0;
    }
    return r;
}

void ns_nssegmentedcontrol_set_segment_count(zval *handle, zval *segmentCount)
{
    @autoreleasepool {
        NSSegmentedControl *c = NS_ARG_AS(NSSegmentedControl, handle);
        if (c == nil) return;
        [c setSegmentCount:(NSInteger) ns_arg_long(segmentCount)];
    }
}

zend_long ns_nssegmentedcontrol_selected_segment(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSSegmentedControl *c = NS_ARG_AS(NSSegmentedControl, handle);
        r = c != nil ? (zend_long) [c selectedSegment] : 0;
    }
    return r;
}

void ns_nssegmentedcontrol_set_selected_segment(zval *handle, zval *selectedSegment)
{
    @autoreleasepool {
        NSSegmentedControl *c = NS_ARG_AS(NSSegmentedControl, handle);
        if (c == nil) return;
        [c setSelectedSegment:(NSInteger) ns_arg_long(selectedSegment)];
    }
}

zend_long ns_nssegmentedcontrol_select_segment_with_tag(zval *handle, zval *tag)
{
    zend_long r = 0;
    @autoreleasepool {
        NSSegmentedControl *c = NS_ARG_AS(NSSegmentedControl, handle);
        r = (c != nil && [c selectSegmentWithTag:(NSInteger) ns_arg_long(tag)]) ? 1 : 0;
    }
    return r;
}

void ns_nssegmentedcontrol_set_width_for_segment(zval *handle, zval *width, zval *segment)
{
    @autoreleasepool {
        NSSegmentedControl *c = NS_ARG_AS(NSSegmentedControl, handle);
        if (c == nil) return;
        [c setWidth:(CGFloat) ns_arg_double(width) forSegment:(NSInteger) ns_arg_long(segment)];
    }
}

double ns_nssegmentedcontrol_width_for_segment(zval *handle, zval *segment)
{
    double r = 0.0;
    @autoreleasepool {
        NSSegmentedControl *c = NS_ARG_AS(NSSegmentedControl, handle);
        r = c != nil ? (double) [c widthForSegment:(NSInteger) ns_arg_long(segment)] : 0.0;
    }
    return r;
}

void ns_nssegmentedcontrol_set_image_for_segment(zval *handle, zval *image, zval *segment)
{
    @autoreleasepool {
        NSSegmentedControl *c = NS_ARG_AS(NSSegmentedControl, handle);
        if (c == nil) return;
        [c setImage:NS_ARG_AS(NSImage, image) forSegment:(NSInteger) ns_arg_long(segment)];
    }
}

zend_long ns_nssegmentedcontrol_image_for_segment(zval *handle, zval *segment)
{
    zend_long h = 0;
    @autoreleasepool {
        NSSegmentedControl *c = NS_ARG_AS(NSSegmentedControl, handle);
        h = ns_handle_for(c != nil ? [c imageForSegment:(NSInteger) ns_arg_long(segment)] : nil);
    }
    return h;
}

void ns_nssegmentedcontrol_set_image_scaling_for_segment(zval *handle, zval *scaling, zval *segment)
{
    @autoreleasepool {
        NSSegmentedControl *c = NS_ARG_AS(NSSegmentedControl, handle);
        if (c == nil) return;
        [c setImageScaling:(NSImageScaling) ns_arg_long(scaling) forSegment:(NSInteger) ns_arg_long(segment)];
    }
}

zend_long ns_nssegmentedcontrol_image_scaling_for_segment(zval *handle, zval *segment)
{
    zend_long r = 0;
    @autoreleasepool {
        NSSegmentedControl *c = NS_ARG_AS(NSSegmentedControl, handle);
        r = c != nil ? (zend_long) [c imageScalingForSegment:(NSInteger) ns_arg_long(segment)] : 0;
    }
    return r;
}

void ns_nssegmentedcontrol_set_label_for_segment(zval *handle, zval *label, zval *segment)
{
    @autoreleasepool {
        NSSegmentedControl *c = NS_ARG_AS(NSSegmentedControl, handle);
        if (c == nil) return;
        [c setLabel:ns_arg_string(label) forSegment:(NSInteger) ns_arg_long(segment)];
    }
}

void ns_nssegmentedcontrol_label_for_segment(zval *return_value, zval *handle, zval *segment)
{
    @autoreleasepool {
        NSSegmentedControl *c = NS_ARG_AS(NSSegmentedControl, handle);
        ns_ret_string(return_value, c != nil ? [c labelForSegment:(NSInteger) ns_arg_long(segment)] : nil);
    }
}

void ns_nssegmentedcontrol_set_menu_for_segment(zval *handle, zval *menu, zval *segment)
{
    @autoreleasepool {
        NSSegmentedControl *c = NS_ARG_AS(NSSegmentedControl, handle);
        if (c == nil) return;
        [c setMenu:NS_ARG_AS(NSMenu, menu) forSegment:(NSInteger) ns_arg_long(segment)];
    }
}

zend_long ns_nssegmentedcontrol_menu_for_segment(zval *handle, zval *segment)
{
    zend_long h = 0;
    @autoreleasepool {
        NSSegmentedControl *c = NS_ARG_AS(NSSegmentedControl, handle);
        h = ns_handle_for(c != nil ? [c menuForSegment:(NSInteger) ns_arg_long(segment)] : nil);
    }
    return h;
}

void ns_nssegmentedcontrol_set_selected_for_segment(zval *handle, zval *selected, zval *segment)
{
    @autoreleasepool {
        NSSegmentedControl *c = NS_ARG_AS(NSSegmentedControl, handle);
        if (c == nil) return;
        [c setSelected:ns_arg_bool(selected) forSegment:(NSInteger) ns_arg_long(segment)];
    }
}

zend_long ns_nssegmentedcontrol_is_selected_for_segment(zval *handle, zval *segment)
{
    zend_long r = 0;
    @autoreleasepool {
        NSSegmentedControl *c = NS_ARG_AS(NSSegmentedControl, handle);
        r = (c != nil && [c isSelectedForSegment:(NSInteger) ns_arg_long(segment)]) ? 1 : 0;
    }
    return r;
}

void ns_nssegmentedcontrol_set_enabled_for_segment(zval *handle, zval *enabled, zval *segment)
{
    @autoreleasepool {
        NSSegmentedControl *c = NS_ARG_AS(NSSegmentedControl, handle);
        if (c == nil) return;
        [c setEnabled:ns_arg_bool(enabled) forSegment:(NSInteger) ns_arg_long(segment)];
    }
}

zend_long ns_nssegmentedcontrol_is_enabled_for_segment(zval *handle, zval *segment)
{
    zend_long r = 0;
    @autoreleasepool {
        NSSegmentedControl *c = NS_ARG_AS(NSSegmentedControl, handle);
        r = (c != nil && [c isEnabledForSegment:(NSInteger) ns_arg_long(segment)]) ? 1 : 0;
    }
    return r;
}

void ns_nssegmentedcontrol_set_tool_tip_for_segment(zval *handle, zval *toolTip, zval *segment)
{
    @autoreleasepool {
        NSSegmentedControl *c = NS_ARG_AS(NSSegmentedControl, handle);
        if (c == nil) return;
        [c setToolTip:ns_arg_string(toolTip) forSegment:(NSInteger) ns_arg_long(segment)];
    }
}

void ns_nssegmentedcontrol_tool_tip_for_segment(zval *return_value, zval *handle, zval *segment)
{
    @autoreleasepool {
        NSSegmentedControl *c = NS_ARG_AS(NSSegmentedControl, handle);
        ns_ret_string(return_value, c != nil ? [c toolTipForSegment:(NSInteger) ns_arg_long(segment)] : nil);
    }
}

void ns_nssegmentedcontrol_set_tag_for_segment(zval *handle, zval *tag, zval *segment)
{
    @autoreleasepool {
        NSSegmentedControl *c = NS_ARG_AS(NSSegmentedControl, handle);
        if (c == nil) return;
        [c setTag:(NSInteger) ns_arg_long(tag) forSegment:(NSInteger) ns_arg_long(segment)];
    }
}

zend_long ns_nssegmentedcontrol_tag_for_segment(zval *handle, zval *segment)
{
    zend_long r = 0;
    @autoreleasepool {
        NSSegmentedControl *c = NS_ARG_AS(NSSegmentedControl, handle);
        r = c != nil ? (zend_long) [c tagForSegment:(NSInteger) ns_arg_long(segment)] : 0;
    }
    return r;
}

void ns_nssegmentedcontrol_set_shows_menu_indicator_for_segment(zval *handle, zval *showsMenuIndicator, zval *segment)
{
    @autoreleasepool {
        NSSegmentedControl *c = NS_ARG_AS(NSSegmentedControl, handle);
        if (c == nil) return;
        [c setShowsMenuIndicator:ns_arg_bool(showsMenuIndicator) forSegment:(NSInteger) ns_arg_long(segment)];
    }
}

zend_long ns_nssegmentedcontrol_shows_menu_indicator_for_segment(zval *handle, zval *segment)
{
    zend_long r = 0;
    @autoreleasepool {
        NSSegmentedControl *c = NS_ARG_AS(NSSegmentedControl, handle);
        r = (c != nil && [c showsMenuIndicatorForSegment:(NSInteger) ns_arg_long(segment)]) ? 1 : 0;
    }
    return r;
}

zend_long ns_nssegmentedcontrol_segment_style(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSSegmentedControl *c = NS_ARG_AS(NSSegmentedControl, handle);
        r = c != nil ? (zend_long) [c segmentStyle] : 0;
    }
    return r;
}

void ns_nssegmentedcontrol_set_segment_style(zval *handle, zval *segmentStyle)
{
    @autoreleasepool {
        NSSegmentedControl *c = NS_ARG_AS(NSSegmentedControl, handle);
        if (c == nil) return;
        [c setSegmentStyle:(NSSegmentStyle) ns_arg_long(segmentStyle)];
    }
}

zend_long ns_nssegmentedcontrol_is_spring_loaded(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSSegmentedControl *c = NS_ARG_AS(NSSegmentedControl, handle);
        r = (c != nil && [c isSpringLoaded]) ? 1 : 0;
    }
    return r;
}

void ns_nssegmentedcontrol_set_spring_loaded(zval *handle, zval *springLoaded)
{
    @autoreleasepool {
        NSSegmentedControl *c = NS_ARG_AS(NSSegmentedControl, handle);
        if (c == nil) return;
        [c setSpringLoaded:ns_arg_bool(springLoaded)];
    }
}

zend_long ns_nssegmentedcontrol_tracking_mode(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSSegmentedControl *c = NS_ARG_AS(NSSegmentedControl, handle);
        r = c != nil ? (zend_long) [c trackingMode] : 0;
    }
    return r;
}

void ns_nssegmentedcontrol_set_tracking_mode(zval *handle, zval *trackingMode)
{
    @autoreleasepool {
        NSSegmentedControl *c = NS_ARG_AS(NSSegmentedControl, handle);
        if (c == nil) return;
        [c setTrackingMode:(NSSegmentSwitchTracking) ns_arg_long(trackingMode)];
    }
}

double ns_nssegmentedcontrol_double_value_for_selected_segment(zval *handle)
{
    double r = 0.0;
    @autoreleasepool {
        NSSegmentedControl *c = NS_ARG_AS(NSSegmentedControl, handle);
        r = c != nil ? [c doubleValueForSelectedSegment] : 0.0;
    }
    return r;
}

zend_long ns_nssegmentedcontrol_selected_segment_bezel_color(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSSegmentedControl *c = NS_ARG_AS(NSSegmentedControl, handle);
        h = ns_handle_for(c != nil ? [c selectedSegmentBezelColor] : nil);
    }
    return h;
}

void ns_nssegmentedcontrol_set_selected_segment_bezel_color(zval *handle, zval *selectedSegmentBezelColor)
{
    @autoreleasepool {
        NSSegmentedControl *c = NS_ARG_AS(NSSegmentedControl, handle);
        if (c == nil) return;
        [c setSelectedSegmentBezelColor:NS_ARG_AS(NSColor, selectedSegmentBezelColor)];
    }
}

zend_long ns_nssegmentedcontrol_index_of_selected_item(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSSegmentedControl *c = NS_ARG_AS(NSSegmentedControl, handle);
        r = c != nil ? (zend_long) [c indexOfSelectedItem] : 0;
    }
    return r;
}

void ns_nssegmentedcontrol_set_alignment_for_segment(zval *handle, zval *alignment, zval *segment)
{
    @autoreleasepool {
        NSSegmentedControl *c = NS_ARG_AS(NSSegmentedControl, handle);
        if (c == nil) return;
        [c setAlignment:(NSTextAlignment) ns_arg_long(alignment) forSegment:(NSInteger) ns_arg_long(segment)];
    }
}

zend_long ns_nssegmentedcontrol_alignment_for_segment(zval *handle, zval *segment)
{
    zend_long r = 0;
    @autoreleasepool {
        NSSegmentedControl *c = NS_ARG_AS(NSSegmentedControl, handle);
        r = c != nil ? (zend_long) [c alignmentForSegment:(NSInteger) ns_arg_long(segment)] : 0;
    }
    return r;
}

zend_long ns_nssegmentedcontrol_segment_distribution(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSSegmentedControl *c = NS_ARG_AS(NSSegmentedControl, handle);
        r = c != nil ? (zend_long) [c segmentDistribution] : 0;
    }
    return r;
}

void ns_nssegmentedcontrol_set_segment_distribution(zval *handle, zval *segmentDistribution)
{
    @autoreleasepool {
        NSSegmentedControl *c = NS_ARG_AS(NSSegmentedControl, handle);
        if (c == nil) return;
        [c setSegmentDistribution:(NSSegmentDistribution) ns_arg_long(segmentDistribution)];
    }
}

void ns_nssegmentedcontrol_compress_with_prioritized_compression_options(zval *handle, zval *prioritizedOptions)
{
    @autoreleasepool {
        NSSegmentedControl *c = NS_ARG_AS(NSSegmentedControl, handle);
        if (c == nil) return;
        [c compressWithPrioritizedCompressionOptions:ns_arg_object_array(prioritizedOptions)];
    }
}

void ns_nssegmentedcontrol_minimum_size_with_prioritized_compression_options(zval *return_value, zval *handle, zval *prioritizedOptions)
{
    @autoreleasepool {
        NSSegmentedControl *c = NS_ARG_AS(NSSegmentedControl, handle);
        ns_ret_size(return_value, c != nil
            ? [c minimumSizeWithPrioritizedCompressionOptions:ns_arg_object_array(prioritizedOptions)]
            : NSZeroSize);
    }
}

zend_long ns_nssegmentedcontrol_active_compression_options(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSSegmentedControl *c = NS_ARG_AS(NSSegmentedControl, handle);
        h = ns_handle_for(c != nil ? [c activeCompressionOptions] : nil);
    }
    return h;
}

/* ====================================================================== */
/* NSSegmentedControlConvenience                                          */
/* ====================================================================== */

zend_long ns_nssegmentedcontrol_segmented_control_with_labels_tracking_mode_target_action(zval *labels, zval *trackingMode, zval *target, zval *action)
{
    zend_long h = 0;
    @autoreleasepool {
        h = ns_handle_for([NSSegmentedControl segmentedControlWithLabels:ns_arg_string_array(labels)
                                                           trackingMode:(NSSegmentSwitchTracking) ns_arg_long(trackingMode)
                                                                 target:ns_arg_object(target)
                                                                 action:ns_arg_sel(action)]);
    }
    return h;
}

zend_long ns_nssegmentedcontrol_segmented_control_with_images_tracking_mode_target_action(zval *images, zval *trackingMode, zval *target, zval *action)
{
    zend_long h = 0;
    @autoreleasepool {
        h = ns_handle_for([NSSegmentedControl segmentedControlWithImages:ns_arg_object_array(images)
                                                           trackingMode:(NSSegmentSwitchTracking) ns_arg_long(trackingMode)
                                                                 target:ns_arg_object(target)
                                                                 action:ns_arg_sel(action)]);
    }
    return h;
}
