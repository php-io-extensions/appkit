#include "ns-screen.h"
#include "ns-value.h"

/* ====================================================================== */
/* Class screens                                                          */
/* ====================================================================== */

void ns_nsscreen_screens(zval *return_value)
{
    @autoreleasepool {
        ns_ret_object_array(return_value, [NSScreen screens]);
    }
}

zend_long ns_nsscreen_main_screen(void)
{
    zend_long h = 0;
    @autoreleasepool {
        h = ns_handle_for([NSScreen mainScreen]);
    }
    return h;
}

zend_long ns_nsscreen_deepest_screen(void)
{
    zend_long h = 0;
    @autoreleasepool {
        h = ns_handle_for([NSScreen deepestScreen]);
    }
    return h;
}

zend_long ns_nsscreen_screens_have_separate_spaces(void)
{
    zend_long r = 0;
    @autoreleasepool {
        r = [NSScreen screensHaveSeparateSpaces] ? 1 : 0;
    }
    return r;
}

/* ====================================================================== */
/* Geometry and device                                                    */
/* ====================================================================== */

zend_long ns_nsscreen_depth(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSScreen *s = NS_ARG_AS(NSScreen, handle);
        r = s != nil ? (zend_long) [s depth] : 0;
    }
    return r;
}

void ns_nsscreen_frame(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSScreen *s = NS_ARG_AS(NSScreen, handle);
        ns_ret_rect(return_value, s != nil ? [s frame] : NSZeroRect);
    }
}

void ns_nsscreen_visible_frame(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSScreen *s = NS_ARG_AS(NSScreen, handle);
        ns_ret_rect(return_value, s != nil ? [s visibleFrame] : NSZeroRect);
    }
}

zend_long ns_nsscreen_device_description(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSScreen *s = NS_ARG_AS(NSScreen, handle);
        h = ns_handle_for(s != nil ? [s deviceDescription] : nil);
    }
    return h;
}

zend_long ns_nsscreen_color_space(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSScreen *s = NS_ARG_AS(NSScreen, handle);
        h = ns_handle_for(s != nil ? [s colorSpace] : nil);
    }
    return h;
}

zend_long ns_nsscreen_can_represent_display_gamut(zval *handle, zval *displayGamut)
{
    zend_long r = 0;
    @autoreleasepool {
        NSScreen *s = NS_ARG_AS(NSScreen, handle);
        r = s != nil && [s canRepresentDisplayGamut:(NSDisplayGamut) ns_arg_long(displayGamut)] ? 1 : 0;
    }
    return r;
}

void ns_nsscreen_convert_rect_to_backing(zval *return_value, zval *handle, zval *x, zval *y, zval *width, zval *height)
{
    @autoreleasepool {
        NSScreen *s = NS_ARG_AS(NSScreen, handle);
        ns_ret_rect(return_value, s != nil ? [s convertRectToBacking:ns_arg_rect(x, y, width, height)] : NSZeroRect);
    }
}

void ns_nsscreen_convert_rect_from_backing(zval *return_value, zval *handle, zval *x, zval *y, zval *width, zval *height)
{
    @autoreleasepool {
        NSScreen *s = NS_ARG_AS(NSScreen, handle);
        ns_ret_rect(return_value, s != nil ? [s convertRectFromBacking:ns_arg_rect(x, y, width, height)] : NSZeroRect);
    }
}

void ns_nsscreen_backing_aligned_rect_options(zval *return_value, zval *handle, zval *x, zval *y, zval *width, zval *height, zval *options)
{
    @autoreleasepool {
        NSScreen *s = NS_ARG_AS(NSScreen, handle);
        ns_ret_rect(return_value, s != nil ? [s backingAlignedRect:ns_arg_rect(x, y, width, height) options:(NSAlignmentOptions) ns_arg_long(options)] : NSZeroRect);
    }
}

double ns_nsscreen_backing_scale_factor(zval *handle)
{
    double r = 0.0;
    @autoreleasepool {
        NSScreen *s = NS_ARG_AS(NSScreen, handle);
        r = s != nil ? (double) [s backingScaleFactor] : 0.0;
    }
    return r;
}

void ns_nsscreen_localized_name(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSScreen *s = NS_ARG_AS(NSScreen, handle);
        ns_ret_string(return_value, s != nil ? [s localizedName] : nil);
    }
}

void ns_nsscreen_safe_area_insets(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSScreen *s = NS_ARG_AS(NSScreen, handle);
        ns_ret_edge_insets(return_value, s != nil ? [s safeAreaInsets] : NSEdgeInsetsZero);
    }
}

void ns_nsscreen_auxiliary_top_left_area(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSScreen *s = NS_ARG_AS(NSScreen, handle);
        ns_ret_rect(return_value, s != nil ? [s auxiliaryTopLeftArea] : NSZeroRect);
    }
}

void ns_nsscreen_auxiliary_top_right_area(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSScreen *s = NS_ARG_AS(NSScreen, handle);
        ns_ret_rect(return_value, s != nil ? [s auxiliaryTopRightArea] : NSZeroRect);
    }
}

/* ====================================================================== */
/* Extended Dynamic Range                                                 */
/* ====================================================================== */

double ns_nsscreen_maximum_extended_dynamic_range_color_component_value(zval *handle)
{
    double r = 0.0;
    @autoreleasepool {
        NSScreen *s = NS_ARG_AS(NSScreen, handle);
        r = s != nil ? (double) [s maximumExtendedDynamicRangeColorComponentValue] : 0.0;
    }
    return r;
}

double ns_nsscreen_maximum_potential_extended_dynamic_range_color_component_value(zval *handle)
{
    double r = 0.0;
    @autoreleasepool {
        NSScreen *s = NS_ARG_AS(NSScreen, handle);
        r = s != nil ? (double) [s maximumPotentialExtendedDynamicRangeColorComponentValue] : 0.0;
    }
    return r;
}

double ns_nsscreen_maximum_reference_extended_dynamic_range_color_component_value(zval *handle)
{
    double r = 0.0;
    @autoreleasepool {
        NSScreen *s = NS_ARG_AS(NSScreen, handle);
        r = s != nil ? (double) [s maximumReferenceExtendedDynamicRangeColorComponentValue] : 0.0;
    }
    return r;
}

/* ====================================================================== */
/* Variable Rate Refresh                                                  */
/* ====================================================================== */

zend_long ns_nsscreen_maximum_frames_per_second(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSScreen *s = NS_ARG_AS(NSScreen, handle);
        r = s != nil ? (zend_long) [s maximumFramesPerSecond] : 0;
    }
    return r;
}

double ns_nsscreen_minimum_refresh_interval(zval *handle)
{
    double r = 0.0;
    @autoreleasepool {
        NSScreen *s = NS_ARG_AS(NSScreen, handle);
        r = s != nil ? (double) [s minimumRefreshInterval] : 0.0;
    }
    return r;
}

double ns_nsscreen_maximum_refresh_interval(zval *handle)
{
    double r = 0.0;
    @autoreleasepool {
        NSScreen *s = NS_ARG_AS(NSScreen, handle);
        r = s != nil ? (double) [s maximumRefreshInterval] : 0.0;
    }
    return r;
}

double ns_nsscreen_display_update_granularity(zval *handle)
{
    double r = 0.0;
    @autoreleasepool {
        NSScreen *s = NS_ARG_AS(NSScreen, handle);
        r = s != nil ? (double) [s displayUpdateGranularity] : 0.0;
    }
    return r;
}

double ns_nsscreen_last_display_update_timestamp(zval *handle)
{
    double r = 0.0;
    @autoreleasepool {
        NSScreen *s = NS_ARG_AS(NSScreen, handle);
        r = s != nil ? (double) [s lastDisplayUpdateTimestamp] : 0.0;
    }
    return r;
}

/* ====================================================================== */
/* NSDisplayLink                                                          */
/* ====================================================================== */

zend_long ns_nsscreen_display_link_with_target_selector(zval *handle, zval *target, zval *selector)
{
    zend_long h = 0;
    @autoreleasepool {
        NSScreen *s = NS_ARG_AS(NSScreen, handle);
        h = ns_handle_for(s != nil ? [s displayLinkWithTarget:ns_arg_object(target) selector:ns_arg_sel(selector)] : nil);
    }
    return h;
}
