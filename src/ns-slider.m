#include "ns-slider.h"
#include "ns-value.h"

/* ====================================================================== */
/* NSSlider                                                               */
/* ====================================================================== */

zend_long ns_nsslider_slider_type(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSSlider *s = NS_ARG_AS(NSSlider, handle);
        r = s != nil ? (zend_long) [s sliderType] : 0;
    }
    return r;
}

void ns_nsslider_set_slider_type(zval *handle, zval *sliderType)
{
    @autoreleasepool {
        NSSlider *s = NS_ARG_AS(NSSlider, handle);
        if (s == nil) return;
        [s setSliderType:(NSSliderType) ns_arg_long(sliderType)];
    }
}

double ns_nsslider_min_value(zval *handle)
{
    double r = 0.0;
    @autoreleasepool {
        NSSlider *s = NS_ARG_AS(NSSlider, handle);
        r = s != nil ? [s minValue] : 0.0;
    }
    return r;
}

void ns_nsslider_set_min_value(zval *handle, zval *minValue)
{
    @autoreleasepool {
        NSSlider *s = NS_ARG_AS(NSSlider, handle);
        if (s == nil) return;
        [s setMinValue:ns_arg_double(minValue)];
    }
}

double ns_nsslider_max_value(zval *handle)
{
    double r = 0.0;
    @autoreleasepool {
        NSSlider *s = NS_ARG_AS(NSSlider, handle);
        r = s != nil ? [s maxValue] : 0.0;
    }
    return r;
}

void ns_nsslider_set_max_value(zval *handle, zval *maxValue)
{
    @autoreleasepool {
        NSSlider *s = NS_ARG_AS(NSSlider, handle);
        if (s == nil) return;
        [s setMaxValue:ns_arg_double(maxValue)];
    }
}

double ns_nsslider_alt_increment_value(zval *handle)
{
    double r = 0.0;
    @autoreleasepool {
        NSSlider *s = NS_ARG_AS(NSSlider, handle);
        r = s != nil ? [s altIncrementValue] : 0.0;
    }
    return r;
}

void ns_nsslider_set_alt_increment_value(zval *handle, zval *altIncrementValue)
{
    @autoreleasepool {
        NSSlider *s = NS_ARG_AS(NSSlider, handle);
        if (s == nil) return;
        [s setAltIncrementValue:ns_arg_double(altIncrementValue)];
    }
}

double ns_nsslider_knob_thickness(zval *handle)
{
    double r = 0.0;
    @autoreleasepool {
        NSSlider *s = NS_ARG_AS(NSSlider, handle);
        r = s != nil ? (double) [s knobThickness] : 0.0;
    }
    return r;
}

zend_long ns_nsslider_accepts_first_mouse(zval *handle, zval *event)
{
    zend_long r = 0;
    @autoreleasepool {
        NSSlider *s = NS_ARG_AS(NSSlider, handle);
        r = (s != nil && [s acceptsFirstMouse:NS_ARG_AS(NSEvent, event)]) ? 1 : 0;
    }
    return r;
}

zend_long ns_nsslider_is_vertical(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSSlider *s = NS_ARG_AS(NSSlider, handle);
        r = (s != nil && [s isVertical]) ? 1 : 0;
    }
    return r;
}

void ns_nsslider_set_vertical(zval *handle, zval *vertical)
{
    @autoreleasepool {
        NSSlider *s = NS_ARG_AS(NSSlider, handle);
        if (s == nil) return;
        [s setVertical:ns_arg_bool(vertical)];
    }
}

zend_long ns_nsslider_track_fill_color(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSSlider *s = NS_ARG_AS(NSSlider, handle);
        h = ns_handle_for(s != nil ? [s trackFillColor] : nil);
    }
    return h;
}

void ns_nsslider_set_track_fill_color(zval *handle, zval *trackFillColor)
{
    @autoreleasepool {
        NSSlider *s = NS_ARG_AS(NSSlider, handle);
        if (s == nil) return;
        [s setTrackFillColor:NS_ARG_AS(NSColor, trackFillColor)];
    }
}

/* ====================================================================== */
/* NSTickMarkSupport                                                      */
/* ====================================================================== */

zend_long ns_nsslider_number_of_tick_marks(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSSlider *s = NS_ARG_AS(NSSlider, handle);
        r = s != nil ? (zend_long) [s numberOfTickMarks] : 0;
    }
    return r;
}

void ns_nsslider_set_number_of_tick_marks(zval *handle, zval *numberOfTickMarks)
{
    @autoreleasepool {
        NSSlider *s = NS_ARG_AS(NSSlider, handle);
        if (s == nil) return;
        [s setNumberOfTickMarks:(NSInteger) ns_arg_long(numberOfTickMarks)];
    }
}

zend_long ns_nsslider_tick_mark_position(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSSlider *s = NS_ARG_AS(NSSlider, handle);
        r = s != nil ? (zend_long) [s tickMarkPosition] : 0;
    }
    return r;
}

void ns_nsslider_set_tick_mark_position(zval *handle, zval *tickMarkPosition)
{
    @autoreleasepool {
        NSSlider *s = NS_ARG_AS(NSSlider, handle);
        if (s == nil) return;
        [s setTickMarkPosition:(NSTickMarkPosition) ns_arg_long(tickMarkPosition)];
    }
}

zend_long ns_nsslider_allows_tick_mark_values_only(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSSlider *s = NS_ARG_AS(NSSlider, handle);
        r = (s != nil && [s allowsTickMarkValuesOnly]) ? 1 : 0;
    }
    return r;
}

void ns_nsslider_set_allows_tick_mark_values_only(zval *handle, zval *allowsTickMarkValuesOnly)
{
    @autoreleasepool {
        NSSlider *s = NS_ARG_AS(NSSlider, handle);
        if (s == nil) return;
        [s setAllowsTickMarkValuesOnly:ns_arg_bool(allowsTickMarkValuesOnly)];
    }
}

double ns_nsslider_tick_mark_value_at_index(zval *handle, zval *index)
{
    double r = 0.0;
    @autoreleasepool {
        NSSlider *s = NS_ARG_AS(NSSlider, handle);
        r = s != nil ? [s tickMarkValueAtIndex:(NSInteger) ns_arg_long(index)] : 0.0;
    }
    return r;
}

void ns_nsslider_rect_of_tick_mark_at_index(zval *return_value, zval *handle, zval *index)
{
    @autoreleasepool {
        NSSlider *s = NS_ARG_AS(NSSlider, handle);
        ns_ret_rect(return_value, s != nil
            ? [s rectOfTickMarkAtIndex:(NSInteger) ns_arg_long(index)]
            : NSZeroRect);
    }
}

zend_long ns_nsslider_index_of_tick_mark_at_point(zval *handle, zval *x, zval *y)
{
    zend_long r = 0;
    @autoreleasepool {
        NSSlider *s = NS_ARG_AS(NSSlider, handle);
        r = s != nil ? (zend_long) [s indexOfTickMarkAtPoint:ns_arg_point(x, y)] : 0;
    }
    return r;
}

double ns_nsslider_closest_tick_mark_value_to_value(zval *handle, zval *value)
{
    double r = 0.0;
    @autoreleasepool {
        NSSlider *s = NS_ARG_AS(NSSlider, handle);
        r = s != nil ? [s closestTickMarkValueToValue:ns_arg_double(value)] : 0.0;
    }
    return r;
}

/* ====================================================================== */
/* NSSliderConvenience                                                    */
/* ====================================================================== */

zend_long ns_nsslider_slider_with_target_action(zval *target, zval *action)
{
    zend_long h = 0;
    @autoreleasepool {
        NSSlider *s = [NSSlider sliderWithTarget:ns_arg_object(target) action:ns_arg_sel(action)];
        h = ns_handle_for(s);
    }
    return h;
}

zend_long ns_nsslider_slider_with_value_min_value_max_value_target_action(zval *value, zval *minValue, zval *maxValue, zval *target, zval *action)
{
    zend_long h = 0;
    @autoreleasepool {
        NSSlider *s = [NSSlider sliderWithValue:ns_arg_double(value)
                                      minValue:ns_arg_double(minValue)
                                      maxValue:ns_arg_double(maxValue)
                                        target:ns_arg_object(target)
                                        action:ns_arg_sel(action)];
        h = ns_handle_for(s);
    }
    return h;
}
