#include "ns-datepickercell.h"
#include "ns-value.h"

/* ====================================================================== */
/* NSDatePickerCell                                                       */
/* ====================================================================== */

zend_long ns_nsdatepickercell_init_text_cell(zval *string_)
{
    @autoreleasepool {
        return ns_handle_for([[NSDatePickerCell alloc] initTextCell:ns_arg_string(string_)]);
    }
}

zend_long ns_nsdatepickercell_date_picker_style(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSDatePickerCell *c = NS_ARG_AS(NSDatePickerCell, handle);
        r = c != nil ? (zend_long) [c datePickerStyle] : 0;
    }
    return r;
}

void ns_nsdatepickercell_set_date_picker_style(zval *handle, zval *datePickerStyle)
{
    @autoreleasepool {
        NSDatePickerCell *c = NS_ARG_AS(NSDatePickerCell, handle);
        if (c == nil) return;
        [c setDatePickerStyle:(NSDatePickerStyle) ns_arg_long(datePickerStyle)];
    }
}

zend_long ns_nsdatepickercell_draws_background(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSDatePickerCell *c = NS_ARG_AS(NSDatePickerCell, handle);
        r = (c != nil && [c drawsBackground]) ? 1 : 0;
    }
    return r;
}

void ns_nsdatepickercell_set_draws_background(zval *handle, zval *drawsBackground)
{
    @autoreleasepool {
        NSDatePickerCell *c = NS_ARG_AS(NSDatePickerCell, handle);
        if (c == nil) return;
        [c setDrawsBackground:ns_arg_bool(drawsBackground)];
    }
}

zend_long ns_nsdatepickercell_background_color(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSDatePickerCell *c = NS_ARG_AS(NSDatePickerCell, handle);
        h = ns_handle_for(c != nil ? [c backgroundColor] : nil);
    }
    return h;
}

void ns_nsdatepickercell_set_background_color(zval *handle, zval *backgroundColor)
{
    @autoreleasepool {
        NSDatePickerCell *c = NS_ARG_AS(NSDatePickerCell, handle);
        if (c == nil) return;
        [c setBackgroundColor:NS_ARG_AS(NSColor, backgroundColor)];
    }
}

zend_long ns_nsdatepickercell_text_color(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSDatePickerCell *c = NS_ARG_AS(NSDatePickerCell, handle);
        h = ns_handle_for(c != nil ? [c textColor] : nil);
    }
    return h;
}

void ns_nsdatepickercell_set_text_color(zval *handle, zval *textColor)
{
    @autoreleasepool {
        NSDatePickerCell *c = NS_ARG_AS(NSDatePickerCell, handle);
        if (c == nil) return;
        [c setTextColor:NS_ARG_AS(NSColor, textColor)];
    }
}

zend_long ns_nsdatepickercell_date_picker_mode(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSDatePickerCell *c = NS_ARG_AS(NSDatePickerCell, handle);
        r = c != nil ? (zend_long) [c datePickerMode] : 0;
    }
    return r;
}

void ns_nsdatepickercell_set_date_picker_mode(zval *handle, zval *datePickerMode)
{
    @autoreleasepool {
        NSDatePickerCell *c = NS_ARG_AS(NSDatePickerCell, handle);
        if (c == nil) return;
        [c setDatePickerMode:(NSDatePickerMode) ns_arg_long(datePickerMode)];
    }
}

zend_long ns_nsdatepickercell_date_picker_elements(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSDatePickerCell *c = NS_ARG_AS(NSDatePickerCell, handle);
        r = c != nil ? (zend_long) [c datePickerElements] : 0;
    }
    return r;
}

void ns_nsdatepickercell_set_date_picker_elements(zval *handle, zval *datePickerElements)
{
    @autoreleasepool {
        NSDatePickerCell *c = NS_ARG_AS(NSDatePickerCell, handle);
        if (c == nil) return;
        [c setDatePickerElements:(NSDatePickerElementFlags) ns_arg_long(datePickerElements)];
    }
}

zend_long ns_nsdatepickercell_calendar(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSDatePickerCell *c = NS_ARG_AS(NSDatePickerCell, handle);
        h = ns_handle_for(c != nil ? [c calendar] : nil);
    }
    return h;
}

void ns_nsdatepickercell_set_calendar(zval *handle, zval *calendar)
{
    @autoreleasepool {
        NSDatePickerCell *c = NS_ARG_AS(NSDatePickerCell, handle);
        if (c == nil) return;
        [c setCalendar:NS_ARG_AS(NSCalendar, calendar)];
    }
}

zend_long ns_nsdatepickercell_locale(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSDatePickerCell *c = NS_ARG_AS(NSDatePickerCell, handle);
        h = ns_handle_for(c != nil ? [c locale] : nil);
    }
    return h;
}

void ns_nsdatepickercell_set_locale(zval *handle, zval *locale)
{
    @autoreleasepool {
        NSDatePickerCell *c = NS_ARG_AS(NSDatePickerCell, handle);
        if (c == nil) return;
        [c setLocale:NS_ARG_AS(NSLocale, locale)];
    }
}

zend_long ns_nsdatepickercell_time_zone(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSDatePickerCell *c = NS_ARG_AS(NSDatePickerCell, handle);
        h = ns_handle_for(c != nil ? [c timeZone] : nil);
    }
    return h;
}

void ns_nsdatepickercell_set_time_zone(zval *handle, zval *timeZone)
{
    @autoreleasepool {
        NSDatePickerCell *c = NS_ARG_AS(NSDatePickerCell, handle);
        if (c == nil) return;
        [c setTimeZone:NS_ARG_AS(NSTimeZone, timeZone)];
    }
}

zend_long ns_nsdatepickercell_date_value(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSDatePickerCell *c = NS_ARG_AS(NSDatePickerCell, handle);
        h = ns_handle_for(c != nil ? [c dateValue] : nil);
    }
    return h;
}

void ns_nsdatepickercell_set_date_value(zval *handle, zval *dateValue)
{
    @autoreleasepool {
        NSDatePickerCell *c = NS_ARG_AS(NSDatePickerCell, handle);
        if (c == nil) return;
        [c setDateValue:NS_ARG_AS(NSDate, dateValue)];
    }
}

double ns_nsdatepickercell_time_interval(zval *handle)
{
    double r = 0.0;
    @autoreleasepool {
        NSDatePickerCell *c = NS_ARG_AS(NSDatePickerCell, handle);
        r = c != nil ? (double) [c timeInterval] : 0.0;
    }
    return r;
}

void ns_nsdatepickercell_set_time_interval(zval *handle, zval *timeInterval)
{
    @autoreleasepool {
        NSDatePickerCell *c = NS_ARG_AS(NSDatePickerCell, handle);
        if (c == nil) return;
        [c setTimeInterval:(NSTimeInterval) ns_arg_double(timeInterval)];
    }
}

zend_long ns_nsdatepickercell_min_date(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSDatePickerCell *c = NS_ARG_AS(NSDatePickerCell, handle);
        h = ns_handle_for(c != nil ? [c minDate] : nil);
    }
    return h;
}

void ns_nsdatepickercell_set_min_date(zval *handle, zval *minDate)
{
    @autoreleasepool {
        NSDatePickerCell *c = NS_ARG_AS(NSDatePickerCell, handle);
        if (c == nil) return;
        [c setMinDate:NS_ARG_AS(NSDate, minDate)];
    }
}

zend_long ns_nsdatepickercell_max_date(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSDatePickerCell *c = NS_ARG_AS(NSDatePickerCell, handle);
        h = ns_handle_for(c != nil ? [c maxDate] : nil);
    }
    return h;
}

void ns_nsdatepickercell_set_max_date(zval *handle, zval *maxDate)
{
    @autoreleasepool {
        NSDatePickerCell *c = NS_ARG_AS(NSDatePickerCell, handle);
        if (c == nil) return;
        [c setMaxDate:NS_ARG_AS(NSDate, maxDate)];
    }
}

zend_long ns_nsdatepickercell_delegate(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSDatePickerCell *c = NS_ARG_AS(NSDatePickerCell, handle);
        h = ns_handle_for(c != nil ? [c delegate] : nil);
    }
    return h;
}

void ns_nsdatepickercell_set_delegate(zval *handle, zval *delegate)
{
    @autoreleasepool {
        NSDatePickerCell *c = NS_ARG_AS(NSDatePickerCell, handle);
        if (c == nil) return;
        [c setDelegate:ns_arg_object(delegate)];
    }
}
