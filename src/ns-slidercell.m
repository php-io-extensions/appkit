#include "ns-slidercell.h"
#include "ns-value.h"

/* ====================================================================== */
/* NSSliderCell                                                           */
/* ====================================================================== */

zend_long ns_nsslidercell_init_text_cell(zval *string_)
{
    @autoreleasepool {
        return ns_handle_for([[NSSliderCell alloc] initTextCell:ns_arg_string(string_)]);
    }
}

zend_long ns_nsslidercell_init_image_cell(zval *image)
{
    @autoreleasepool {
        return ns_handle_for([[NSSliderCell alloc] initImageCell:NS_ARG_AS(NSImage, image)]);
    }
}

zend_long ns_nsslidercell_prefers_tracking_until_mouse_up(void)
{
    zend_long r = 0;
    @autoreleasepool {
        r = [NSSliderCell prefersTrackingUntilMouseUp] ? 1 : 0;
    }
    return r;
}

double ns_nsslidercell_min_value(zval *handle)
{
    double r = 0.0;
    @autoreleasepool {
        NSSliderCell *c = NS_ARG_AS(NSSliderCell, handle);
        r = c != nil ? [c minValue] : 0.0;
    }
    return r;
}

void ns_nsslidercell_set_min_value(zval *handle, zval *minValue)
{
    @autoreleasepool {
        NSSliderCell *c = NS_ARG_AS(NSSliderCell, handle);
        if (c == nil) return;
        [c setMinValue:ns_arg_double(minValue)];
    }
}

double ns_nsslidercell_max_value(zval *handle)
{
    double r = 0.0;
    @autoreleasepool {
        NSSliderCell *c = NS_ARG_AS(NSSliderCell, handle);
        r = c != nil ? [c maxValue] : 0.0;
    }
    return r;
}

void ns_nsslidercell_set_max_value(zval *handle, zval *maxValue)
{
    @autoreleasepool {
        NSSliderCell *c = NS_ARG_AS(NSSliderCell, handle);
        if (c == nil) return;
        [c setMaxValue:ns_arg_double(maxValue)];
    }
}

double ns_nsslidercell_alt_increment_value(zval *handle)
{
    double r = 0.0;
    @autoreleasepool {
        NSSliderCell *c = NS_ARG_AS(NSSliderCell, handle);
        r = c != nil ? [c altIncrementValue] : 0.0;
    }
    return r;
}

void ns_nsslidercell_set_alt_increment_value(zval *handle, zval *altIncrementValue)
{
    @autoreleasepool {
        NSSliderCell *c = NS_ARG_AS(NSSliderCell, handle);
        if (c == nil) return;
        [c setAltIncrementValue:ns_arg_double(altIncrementValue)];
    }
}

zend_long ns_nsslidercell_slider_type(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSSliderCell *c = NS_ARG_AS(NSSliderCell, handle);
        r = c != nil ? (zend_long) [c sliderType] : 0;
    }
    return r;
}

void ns_nsslidercell_set_slider_type(zval *handle, zval *sliderType)
{
    @autoreleasepool {
        NSSliderCell *c = NS_ARG_AS(NSSliderCell, handle);
        if (c == nil) return;
        [c setSliderType:(NSSliderType) ns_arg_long(sliderType)];
    }
}

zend_long ns_nsslidercell_is_vertical(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSSliderCell *c = NS_ARG_AS(NSSliderCell, handle);
        r = (c != nil && [c isVertical]) ? 1 : 0;
    }
    return r;
}

void ns_nsslidercell_set_vertical(zval *handle, zval *vertical)
{
    @autoreleasepool {
        NSSliderCell *c = NS_ARG_AS(NSSliderCell, handle);
        if (c == nil) return;
        [c setVertical:ns_arg_bool(vertical)];
    }
}

void ns_nsslidercell_track_rect(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSSliderCell *c = NS_ARG_AS(NSSliderCell, handle);
        ns_ret_rect(return_value, c != nil ? [c trackRect] : NSZeroRect);
    }
}

double ns_nsslidercell_knob_thickness(zval *handle)
{
    double r = 0.0;
    @autoreleasepool {
        NSSliderCell *c = NS_ARG_AS(NSSliderCell, handle);
        r = c != nil ? (double) [c knobThickness] : 0.0;
    }
    return r;
}

void ns_nsslidercell_knob_rect_flipped(zval *return_value, zval *handle, zval *flipped)
{
    @autoreleasepool {
        NSSliderCell *c = NS_ARG_AS(NSSliderCell, handle);
        ns_ret_rect(return_value, c != nil
            ? [c knobRectFlipped:ns_arg_bool(flipped)]
            : NSZeroRect);
    }
}

void ns_nsslidercell_bar_rect_flipped(zval *return_value, zval *handle, zval *flipped)
{
    @autoreleasepool {
        NSSliderCell *c = NS_ARG_AS(NSSliderCell, handle);
        ns_ret_rect(return_value, c != nil
            ? [c barRectFlipped:ns_arg_bool(flipped)]
            : NSZeroRect);
    }
}

void ns_nsslidercell_draw_knob_rect(zval *handle, zval *x, zval *y, zval *width, zval *height)
{
    @autoreleasepool {
        NSSliderCell *c = NS_ARG_AS(NSSliderCell, handle);
        if (c == nil) return;
        [c drawKnob:ns_arg_rect(x, y, width, height)];
    }
}

void ns_nsslidercell_draw_knob(zval *handle)
{
    @autoreleasepool {
        NSSliderCell *c = NS_ARG_AS(NSSliderCell, handle);
        if (c == nil) return;
        [c drawKnob];
    }
}

void ns_nsslidercell_draw_bar_inside_flipped(zval *handle, zval *x, zval *y, zval *width, zval *height, zval *flipped)
{
    @autoreleasepool {
        NSSliderCell *c = NS_ARG_AS(NSSliderCell, handle);
        if (c == nil) return;
        [c drawBarInside:ns_arg_rect(x, y, width, height) flipped:ns_arg_bool(flipped)];
    }
}

/* ====================================================================== */
/* NSTickMarkSupport                                                      */
/* ====================================================================== */

zend_long ns_nsslidercell_number_of_tick_marks(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSSliderCell *c = NS_ARG_AS(NSSliderCell, handle);
        r = c != nil ? (zend_long) [c numberOfTickMarks] : 0;
    }
    return r;
}

void ns_nsslidercell_set_number_of_tick_marks(zval *handle, zval *numberOfTickMarks)
{
    @autoreleasepool {
        NSSliderCell *c = NS_ARG_AS(NSSliderCell, handle);
        if (c == nil) return;
        [c setNumberOfTickMarks:(NSInteger) ns_arg_long(numberOfTickMarks)];
    }
}

zend_long ns_nsslidercell_tick_mark_position(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSSliderCell *c = NS_ARG_AS(NSSliderCell, handle);
        r = c != nil ? (zend_long) [c tickMarkPosition] : 0;
    }
    return r;
}

void ns_nsslidercell_set_tick_mark_position(zval *handle, zval *tickMarkPosition)
{
    @autoreleasepool {
        NSSliderCell *c = NS_ARG_AS(NSSliderCell, handle);
        if (c == nil) return;
        [c setTickMarkPosition:(NSTickMarkPosition) ns_arg_long(tickMarkPosition)];
    }
}

zend_long ns_nsslidercell_allows_tick_mark_values_only(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSSliderCell *c = NS_ARG_AS(NSSliderCell, handle);
        r = (c != nil && [c allowsTickMarkValuesOnly]) ? 1 : 0;
    }
    return r;
}

void ns_nsslidercell_set_allows_tick_mark_values_only(zval *handle, zval *allowsTickMarkValuesOnly)
{
    @autoreleasepool {
        NSSliderCell *c = NS_ARG_AS(NSSliderCell, handle);
        if (c == nil) return;
        [c setAllowsTickMarkValuesOnly:ns_arg_bool(allowsTickMarkValuesOnly)];
    }
}

double ns_nsslidercell_tick_mark_value_at_index(zval *handle, zval *index)
{
    double r = 0.0;
    @autoreleasepool {
        NSSliderCell *c = NS_ARG_AS(NSSliderCell, handle);
        r = c != nil ? [c tickMarkValueAtIndex:(NSInteger) ns_arg_long(index)] : 0.0;
    }
    return r;
}

void ns_nsslidercell_rect_of_tick_mark_at_index(zval *return_value, zval *handle, zval *index)
{
    @autoreleasepool {
        NSSliderCell *c = NS_ARG_AS(NSSliderCell, handle);
        ns_ret_rect(return_value, c != nil
            ? [c rectOfTickMarkAtIndex:(NSInteger) ns_arg_long(index)]
            : NSZeroRect);
    }
}

zend_long ns_nsslidercell_index_of_tick_mark_at_point(zval *handle, zval *x, zval *y)
{
    zend_long r = 0;
    @autoreleasepool {
        NSSliderCell *c = NS_ARG_AS(NSSliderCell, handle);
        r = c != nil ? (zend_long) [c indexOfTickMarkAtPoint:ns_arg_point(x, y)] : 0;
    }
    return r;
}

double ns_nsslidercell_closest_tick_mark_value_to_value(zval *handle, zval *value)
{
    double r = 0.0;
    @autoreleasepool {
        NSSliderCell *c = NS_ARG_AS(NSSliderCell, handle);
        r = c != nil ? [c closestTickMarkValueToValue:ns_arg_double(value)] : 0.0;
    }
    return r;
}

void ns_nsslidercell_draw_tick_marks(zval *handle)
{
    @autoreleasepool {
        NSSliderCell *c = NS_ARG_AS(NSSliderCell, handle);
        if (c == nil) return;
        [c drawTickMarks];
    }
}
