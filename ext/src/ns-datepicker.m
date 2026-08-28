#include "ns-datepicker.h"
#include "ns-value.h"

/* ====================================================================== */
/* NSDatePicker                                                           */
/* ====================================================================== */

zend_long ns_nsdatepicker_init_with_frame(zval *x, zval *y, zval *width, zval *height)
{
    @autoreleasepool {
        return ns_handle_for([[NSDatePicker alloc] initWithFrame:ns_arg_rect(x, y, width, height)]);
    }
}

zend_long ns_nsdatepicker_date_picker_style(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSDatePicker *p = NS_ARG_AS(NSDatePicker, handle);
        r = p != nil ? (zend_long) [p datePickerStyle] : 0;
    }
    return r;
}

void ns_nsdatepicker_set_date_picker_style(zval *handle, zval *datePickerStyle)
{
    @autoreleasepool {
        NSDatePicker *p = NS_ARG_AS(NSDatePicker, handle);
        if (p == nil) return;
        [p setDatePickerStyle:(NSDatePickerStyle) ns_arg_long(datePickerStyle)];
    }
}

zend_long ns_nsdatepicker_is_bezeled(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSDatePicker *p = NS_ARG_AS(NSDatePicker, handle);
        r = (p != nil && [p isBezeled]) ? 1 : 0;
    }
    return r;
}

void ns_nsdatepicker_set_bezeled(zval *handle, zval *bezeled)
{
    @autoreleasepool {
        NSDatePicker *p = NS_ARG_AS(NSDatePicker, handle);
        if (p == nil) return;
        [p setBezeled:ns_arg_bool(bezeled)];
    }
}

zend_long ns_nsdatepicker_is_bordered(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSDatePicker *p = NS_ARG_AS(NSDatePicker, handle);
        r = (p != nil && [p isBordered]) ? 1 : 0;
    }
    return r;
}

void ns_nsdatepicker_set_bordered(zval *handle, zval *bordered)
{
    @autoreleasepool {
        NSDatePicker *p = NS_ARG_AS(NSDatePicker, handle);
        if (p == nil) return;
        [p setBordered:ns_arg_bool(bordered)];
    }
}

zend_long ns_nsdatepicker_draws_background(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSDatePicker *p = NS_ARG_AS(NSDatePicker, handle);
        r = (p != nil && [p drawsBackground]) ? 1 : 0;
    }
    return r;
}

void ns_nsdatepicker_set_draws_background(zval *handle, zval *drawsBackground)
{
    @autoreleasepool {
        NSDatePicker *p = NS_ARG_AS(NSDatePicker, handle);
        if (p == nil) return;
        [p setDrawsBackground:ns_arg_bool(drawsBackground)];
    }
}

zend_long ns_nsdatepicker_background_color(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSDatePicker *p = NS_ARG_AS(NSDatePicker, handle);
        h = ns_handle_for(p != nil ? [p backgroundColor] : nil);
    }
    return h;
}

void ns_nsdatepicker_set_background_color(zval *handle, zval *backgroundColor)
{
    @autoreleasepool {
        NSDatePicker *p = NS_ARG_AS(NSDatePicker, handle);
        if (p == nil) return;
        [p setBackgroundColor:NS_ARG_AS(NSColor, backgroundColor)];
    }
}

zend_long ns_nsdatepicker_text_color(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSDatePicker *p = NS_ARG_AS(NSDatePicker, handle);
        h = ns_handle_for(p != nil ? [p textColor] : nil);
    }
    return h;
}

void ns_nsdatepicker_set_text_color(zval *handle, zval *textColor)
{
    @autoreleasepool {
        NSDatePicker *p = NS_ARG_AS(NSDatePicker, handle);
        if (p == nil) return;
        [p setTextColor:NS_ARG_AS(NSColor, textColor)];
    }
}

zend_long ns_nsdatepicker_date_picker_mode(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSDatePicker *p = NS_ARG_AS(NSDatePicker, handle);
        r = p != nil ? (zend_long) [p datePickerMode] : 0;
    }
    return r;
}

void ns_nsdatepicker_set_date_picker_mode(zval *handle, zval *datePickerMode)
{
    @autoreleasepool {
        NSDatePicker *p = NS_ARG_AS(NSDatePicker, handle);
        if (p == nil) return;
        [p setDatePickerMode:(NSDatePickerMode) ns_arg_long(datePickerMode)];
    }
}

zend_long ns_nsdatepicker_date_picker_elements(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSDatePicker *p = NS_ARG_AS(NSDatePicker, handle);
        r = p != nil ? (zend_long) [p datePickerElements] : 0;
    }
    return r;
}

void ns_nsdatepicker_set_date_picker_elements(zval *handle, zval *datePickerElements)
{
    @autoreleasepool {
        NSDatePicker *p = NS_ARG_AS(NSDatePicker, handle);
        if (p == nil) return;
        [p setDatePickerElements:(NSDatePickerElementFlags) ns_arg_long(datePickerElements)];
    }
}

zend_long ns_nsdatepicker_calendar(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSDatePicker *p = NS_ARG_AS(NSDatePicker, handle);
        h = ns_handle_for(p != nil ? [p calendar] : nil);
    }
    return h;
}

void ns_nsdatepicker_set_calendar(zval *handle, zval *calendar)
{
    @autoreleasepool {
        NSDatePicker *p = NS_ARG_AS(NSDatePicker, handle);
        if (p == nil) return;
        [p setCalendar:NS_ARG_AS(NSCalendar, calendar)];
    }
}

zend_long ns_nsdatepicker_locale(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSDatePicker *p = NS_ARG_AS(NSDatePicker, handle);
        h = ns_handle_for(p != nil ? [p locale] : nil);
    }
    return h;
}

void ns_nsdatepicker_set_locale(zval *handle, zval *locale)
{
    @autoreleasepool {
        NSDatePicker *p = NS_ARG_AS(NSDatePicker, handle);
        if (p == nil) return;
        [p setLocale:NS_ARG_AS(NSLocale, locale)];
    }
}

zend_long ns_nsdatepicker_time_zone(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSDatePicker *p = NS_ARG_AS(NSDatePicker, handle);
        h = ns_handle_for(p != nil ? [p timeZone] : nil);
    }
    return h;
}

void ns_nsdatepicker_set_time_zone(zval *handle, zval *timeZone)
{
    @autoreleasepool {
        NSDatePicker *p = NS_ARG_AS(NSDatePicker, handle);
        if (p == nil) return;
        [p setTimeZone:NS_ARG_AS(NSTimeZone, timeZone)];
    }
}

zend_long ns_nsdatepicker_date_value(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSDatePicker *p = NS_ARG_AS(NSDatePicker, handle);
        h = ns_handle_for(p != nil ? [p dateValue] : nil);
    }
    return h;
}

void ns_nsdatepicker_set_date_value(zval *handle, zval *dateValue)
{
    @autoreleasepool {
        NSDatePicker *p = NS_ARG_AS(NSDatePicker, handle);
        if (p == nil) return;
        [p setDateValue:NS_ARG_AS(NSDate, dateValue)];
    }
}

double ns_nsdatepicker_time_interval(zval *handle)
{
    double r = 0.0;
    @autoreleasepool {
        NSDatePicker *p = NS_ARG_AS(NSDatePicker, handle);
        r = p != nil ? (double) [p timeInterval] : 0.0;
    }
    return r;
}

void ns_nsdatepicker_set_time_interval(zval *handle, zval *timeInterval)
{
    @autoreleasepool {
        NSDatePicker *p = NS_ARG_AS(NSDatePicker, handle);
        if (p == nil) return;
        [p setTimeInterval:(NSTimeInterval) ns_arg_double(timeInterval)];
    }
}

zend_long ns_nsdatepicker_min_date(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSDatePicker *p = NS_ARG_AS(NSDatePicker, handle);
        h = ns_handle_for(p != nil ? [p minDate] : nil);
    }
    return h;
}

void ns_nsdatepicker_set_min_date(zval *handle, zval *minDate)
{
    @autoreleasepool {
        NSDatePicker *p = NS_ARG_AS(NSDatePicker, handle);
        if (p == nil) return;
        [p setMinDate:NS_ARG_AS(NSDate, minDate)];
    }
}

zend_long ns_nsdatepicker_max_date(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSDatePicker *p = NS_ARG_AS(NSDatePicker, handle);
        h = ns_handle_for(p != nil ? [p maxDate] : nil);
    }
    return h;
}

void ns_nsdatepicker_set_max_date(zval *handle, zval *maxDate)
{
    @autoreleasepool {
        NSDatePicker *p = NS_ARG_AS(NSDatePicker, handle);
        if (p == nil) return;
        [p setMaxDate:NS_ARG_AS(NSDate, maxDate)];
    }
}

zend_long ns_nsdatepicker_presents_calendar_overlay(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSDatePicker *p = NS_ARG_AS(NSDatePicker, handle);
        r = (p != nil && [p presentsCalendarOverlay]) ? 1 : 0;
    }
    return r;
}

void ns_nsdatepicker_set_presents_calendar_overlay(zval *handle, zval *presentsCalendarOverlay)
{
    @autoreleasepool {
        NSDatePicker *p = NS_ARG_AS(NSDatePicker, handle);
        if (p == nil) return;
        [p setPresentsCalendarOverlay:ns_arg_bool(presentsCalendarOverlay)];
    }
}

zend_long ns_nsdatepicker_delegate(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSDatePicker *p = NS_ARG_AS(NSDatePicker, handle);
        h = ns_handle_for(p != nil ? [p delegate] : nil);
    }
    return h;
}

void ns_nsdatepicker_set_delegate(zval *handle, zval *delegate)
{
    @autoreleasepool {
        NSDatePicker *p = NS_ARG_AS(NSDatePicker, handle);
        if (p == nil) return;
        [p setDelegate:ns_arg_object(delegate)];
    }
}
