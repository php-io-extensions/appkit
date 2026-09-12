#include "ns-dateformatter.h"
#include "ns-value.h"

/* ====================================================================== */
/* NSDateFormatter                                                        */
/* ====================================================================== */

zend_long ns_nsdateformatter_init(void)
{
    @autoreleasepool {
        return ns_handle_for([[NSDateFormatter alloc] init]);
    }
}

void ns_nsdateformatter_string_from_date(zval *return_value, zval *handle, zval *date)
{
    @autoreleasepool {
        NSDateFormatter *f = NS_ARG_AS(NSDateFormatter, handle);
        ns_ret_string(return_value, f != nil ? [f stringFromDate:NS_ARG_AS(NSDate, date)] : nil);
    }
}

zend_long ns_nsdateformatter_date_from_string(zval *handle, zval *string_)
{
    zend_long h = 0;
    @autoreleasepool {
        NSDateFormatter *f = NS_ARG_AS(NSDateFormatter, handle);
        h = ns_handle_for(f != nil ? [f dateFromString:ns_arg_string(string_)] : nil);
    }
    return h;
}

void ns_nsdateformatter_localized_string_from_date_date_style_time_style(zval *return_value, zval *date, zval *dstyle, zval *tstyle)
{
    @autoreleasepool {
        ns_ret_string(return_value, [NSDateFormatter localizedStringFromDate:NS_ARG_AS(NSDate, date)
                                                                  dateStyle:(NSDateFormatterStyle) ns_arg_long(dstyle)
                                                                  timeStyle:(NSDateFormatterStyle) ns_arg_long(tstyle)]);
    }
}

void ns_nsdateformatter_date_format_from_template_options_locale(zval *return_value, zval *tmplate, zval *opts, zval *locale)
{
    @autoreleasepool {
        ns_ret_string(return_value, [NSDateFormatter dateFormatFromTemplate:ns_arg_string(tmplate)
                                                                   options:(NSUInteger) ns_arg_long(opts)
                                                                    locale:NS_ARG_AS(NSLocale, locale)]);
    }
}

zend_long ns_nsdateformatter_default_formatter_behavior(void)
{
    zend_long r = 0;
    @autoreleasepool {
        r = (zend_long) [NSDateFormatter defaultFormatterBehavior];
    }
    return r;
}

void ns_nsdateformatter_set_default_formatter_behavior(zval *defaultFormatterBehavior)
{
    @autoreleasepool {
        [NSDateFormatter setDefaultFormatterBehavior:(NSDateFormatterBehavior) ns_arg_long(defaultFormatterBehavior)];
    }
}

zend_long ns_nsdateformatter_formatting_context(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSDateFormatter *f = NS_ARG_AS(NSDateFormatter, handle);
        r = f != nil ? (zend_long) [f formattingContext] : 0;
    }
    return r;
}

void ns_nsdateformatter_set_formatting_context(zval *handle, zval *formattingContext)
{
    @autoreleasepool {
        NSDateFormatter *f = NS_ARG_AS(NSDateFormatter, handle);
        if (f == nil) return;
        [f setFormattingContext:(NSFormattingContext) ns_arg_long(formattingContext)];
    }
}

void ns_nsdateformatter_set_localized_date_format_from_template(zval *handle, zval *dateFormatTemplate)
{
    @autoreleasepool {
        NSDateFormatter *f = NS_ARG_AS(NSDateFormatter, handle);
        if (f == nil) return;
        [f setLocalizedDateFormatFromTemplate:ns_arg_string(dateFormatTemplate)];
    }
}

void ns_nsdateformatter_date_format(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSDateFormatter *f = NS_ARG_AS(NSDateFormatter, handle);
        ns_ret_string(return_value, f != nil ? [f dateFormat] : nil);
    }
}

void ns_nsdateformatter_set_date_format(zval *handle, zval *dateFormat)
{
    @autoreleasepool {
        NSDateFormatter *f = NS_ARG_AS(NSDateFormatter, handle);
        if (f == nil) return;
        [f setDateFormat:ns_arg_string(dateFormat)];
    }
}

zend_long ns_nsdateformatter_date_style(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSDateFormatter *f = NS_ARG_AS(NSDateFormatter, handle);
        r = f != nil ? (zend_long) [f dateStyle] : 0;
    }
    return r;
}

void ns_nsdateformatter_set_date_style(zval *handle, zval *dateStyle)
{
    @autoreleasepool {
        NSDateFormatter *f = NS_ARG_AS(NSDateFormatter, handle);
        if (f == nil) return;
        [f setDateStyle:(NSDateFormatterStyle) ns_arg_long(dateStyle)];
    }
}

zend_long ns_nsdateformatter_time_style(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSDateFormatter *f = NS_ARG_AS(NSDateFormatter, handle);
        r = f != nil ? (zend_long) [f timeStyle] : 0;
    }
    return r;
}

void ns_nsdateformatter_set_time_style(zval *handle, zval *timeStyle)
{
    @autoreleasepool {
        NSDateFormatter *f = NS_ARG_AS(NSDateFormatter, handle);
        if (f == nil) return;
        [f setTimeStyle:(NSDateFormatterStyle) ns_arg_long(timeStyle)];
    }
}

zend_long ns_nsdateformatter_locale(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSDateFormatter *f = NS_ARG_AS(NSDateFormatter, handle);
        h = ns_handle_for(f != nil ? [f locale] : nil);
    }
    return h;
}

void ns_nsdateformatter_set_locale(zval *handle, zval *locale)
{
    @autoreleasepool {
        NSDateFormatter *f = NS_ARG_AS(NSDateFormatter, handle);
        if (f == nil) return;
        [f setLocale:NS_ARG_AS(NSLocale, locale)];
    }
}

zend_long ns_nsdateformatter_generates_calendar_dates(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSDateFormatter *f = NS_ARG_AS(NSDateFormatter, handle);
        r = (f != nil && [f generatesCalendarDates]) ? 1 : 0;
    }
    return r;
}

void ns_nsdateformatter_set_generates_calendar_dates(zval *handle, zval *generatesCalendarDates)
{
    @autoreleasepool {
        NSDateFormatter *f = NS_ARG_AS(NSDateFormatter, handle);
        if (f == nil) return;
        [f setGeneratesCalendarDates:ns_arg_bool(generatesCalendarDates)];
    }
}

zend_long ns_nsdateformatter_formatter_behavior(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSDateFormatter *f = NS_ARG_AS(NSDateFormatter, handle);
        r = f != nil ? (zend_long) [f formatterBehavior] : 0;
    }
    return r;
}

void ns_nsdateformatter_set_formatter_behavior(zval *handle, zval *formatterBehavior)
{
    @autoreleasepool {
        NSDateFormatter *f = NS_ARG_AS(NSDateFormatter, handle);
        if (f == nil) return;
        [f setFormatterBehavior:(NSDateFormatterBehavior) ns_arg_long(formatterBehavior)];
    }
}

zend_long ns_nsdateformatter_time_zone(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSDateFormatter *f = NS_ARG_AS(NSDateFormatter, handle);
        h = ns_handle_for(f != nil ? [f timeZone] : nil);
    }
    return h;
}

void ns_nsdateformatter_set_time_zone(zval *handle, zval *timeZone)
{
    @autoreleasepool {
        NSDateFormatter *f = NS_ARG_AS(NSDateFormatter, handle);
        if (f == nil) return;
        [f setTimeZone:NS_ARG_AS(NSTimeZone, timeZone)];
    }
}

zend_long ns_nsdateformatter_calendar(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSDateFormatter *f = NS_ARG_AS(NSDateFormatter, handle);
        h = ns_handle_for(f != nil ? [f calendar] : nil);
    }
    return h;
}

void ns_nsdateformatter_set_calendar(zval *handle, zval *calendar)
{
    @autoreleasepool {
        NSDateFormatter *f = NS_ARG_AS(NSDateFormatter, handle);
        if (f == nil) return;
        [f setCalendar:NS_ARG_AS(NSCalendar, calendar)];
    }
}

zend_long ns_nsdateformatter_is_lenient(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSDateFormatter *f = NS_ARG_AS(NSDateFormatter, handle);
        r = (f != nil && [f isLenient]) ? 1 : 0;
    }
    return r;
}

void ns_nsdateformatter_set_lenient(zval *handle, zval *lenient)
{
    @autoreleasepool {
        NSDateFormatter *f = NS_ARG_AS(NSDateFormatter, handle);
        if (f == nil) return;
        [f setLenient:ns_arg_bool(lenient)];
    }
}

zend_long ns_nsdateformatter_two_digit_start_date(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSDateFormatter *f = NS_ARG_AS(NSDateFormatter, handle);
        h = ns_handle_for(f != nil ? [f twoDigitStartDate] : nil);
    }
    return h;
}

void ns_nsdateformatter_set_two_digit_start_date(zval *handle, zval *twoDigitStartDate)
{
    @autoreleasepool {
        NSDateFormatter *f = NS_ARG_AS(NSDateFormatter, handle);
        if (f == nil) return;
        [f setTwoDigitStartDate:NS_ARG_AS(NSDate, twoDigitStartDate)];
    }
}

zend_long ns_nsdateformatter_default_date(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSDateFormatter *f = NS_ARG_AS(NSDateFormatter, handle);
        h = ns_handle_for(f != nil ? [f defaultDate] : nil);
    }
    return h;
}

void ns_nsdateformatter_set_default_date(zval *handle, zval *defaultDate)
{
    @autoreleasepool {
        NSDateFormatter *f = NS_ARG_AS(NSDateFormatter, handle);
        if (f == nil) return;
        [f setDefaultDate:NS_ARG_AS(NSDate, defaultDate)];
    }
}
void ns_nsdateformatter_era_symbols(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSDateFormatter *f = NS_ARG_AS(NSDateFormatter, handle);
        ns_ret_string_array(return_value, f != nil ? [f eraSymbols] : nil);
    }
}

void ns_nsdateformatter_set_era_symbols(zval *handle, zval *eraSymbols)
{
    @autoreleasepool {
        NSDateFormatter *f = NS_ARG_AS(NSDateFormatter, handle);
        if (f == nil) return;
        zval *z = ns_deref(eraSymbols);
        NSArray<NSString *> *symbols = (z != NULL && Z_TYPE_P(z) == IS_ARRAY) ? ns_arg_string_array(eraSymbols) : nil;
        [f setEraSymbols:symbols];
    }
}
void ns_nsdateformatter_month_symbols(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSDateFormatter *f = NS_ARG_AS(NSDateFormatter, handle);
        ns_ret_string_array(return_value, f != nil ? [f monthSymbols] : nil);
    }
}

void ns_nsdateformatter_set_month_symbols(zval *handle, zval *monthSymbols)
{
    @autoreleasepool {
        NSDateFormatter *f = NS_ARG_AS(NSDateFormatter, handle);
        if (f == nil) return;
        zval *z = ns_deref(monthSymbols);
        NSArray<NSString *> *symbols = (z != NULL && Z_TYPE_P(z) == IS_ARRAY) ? ns_arg_string_array(monthSymbols) : nil;
        [f setMonthSymbols:symbols];
    }
}
void ns_nsdateformatter_short_month_symbols(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSDateFormatter *f = NS_ARG_AS(NSDateFormatter, handle);
        ns_ret_string_array(return_value, f != nil ? [f shortMonthSymbols] : nil);
    }
}

void ns_nsdateformatter_set_short_month_symbols(zval *handle, zval *shortMonthSymbols)
{
    @autoreleasepool {
        NSDateFormatter *f = NS_ARG_AS(NSDateFormatter, handle);
        if (f == nil) return;
        zval *z = ns_deref(shortMonthSymbols);
        NSArray<NSString *> *symbols = (z != NULL && Z_TYPE_P(z) == IS_ARRAY) ? ns_arg_string_array(shortMonthSymbols) : nil;
        [f setShortMonthSymbols:symbols];
    }
}
void ns_nsdateformatter_weekday_symbols(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSDateFormatter *f = NS_ARG_AS(NSDateFormatter, handle);
        ns_ret_string_array(return_value, f != nil ? [f weekdaySymbols] : nil);
    }
}

void ns_nsdateformatter_set_weekday_symbols(zval *handle, zval *weekdaySymbols)
{
    @autoreleasepool {
        NSDateFormatter *f = NS_ARG_AS(NSDateFormatter, handle);
        if (f == nil) return;
        zval *z = ns_deref(weekdaySymbols);
        NSArray<NSString *> *symbols = (z != NULL && Z_TYPE_P(z) == IS_ARRAY) ? ns_arg_string_array(weekdaySymbols) : nil;
        [f setWeekdaySymbols:symbols];
    }
}
void ns_nsdateformatter_short_weekday_symbols(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSDateFormatter *f = NS_ARG_AS(NSDateFormatter, handle);
        ns_ret_string_array(return_value, f != nil ? [f shortWeekdaySymbols] : nil);
    }
}

void ns_nsdateformatter_set_short_weekday_symbols(zval *handle, zval *shortWeekdaySymbols)
{
    @autoreleasepool {
        NSDateFormatter *f = NS_ARG_AS(NSDateFormatter, handle);
        if (f == nil) return;
        zval *z = ns_deref(shortWeekdaySymbols);
        NSArray<NSString *> *symbols = (z != NULL && Z_TYPE_P(z) == IS_ARRAY) ? ns_arg_string_array(shortWeekdaySymbols) : nil;
        [f setShortWeekdaySymbols:symbols];
    }
}
void ns_nsdateformatter_long_era_symbols(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSDateFormatter *f = NS_ARG_AS(NSDateFormatter, handle);
        ns_ret_string_array(return_value, f != nil ? [f longEraSymbols] : nil);
    }
}

void ns_nsdateformatter_set_long_era_symbols(zval *handle, zval *longEraSymbols)
{
    @autoreleasepool {
        NSDateFormatter *f = NS_ARG_AS(NSDateFormatter, handle);
        if (f == nil) return;
        zval *z = ns_deref(longEraSymbols);
        NSArray<NSString *> *symbols = (z != NULL && Z_TYPE_P(z) == IS_ARRAY) ? ns_arg_string_array(longEraSymbols) : nil;
        [f setLongEraSymbols:symbols];
    }
}
void ns_nsdateformatter_very_short_month_symbols(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSDateFormatter *f = NS_ARG_AS(NSDateFormatter, handle);
        ns_ret_string_array(return_value, f != nil ? [f veryShortMonthSymbols] : nil);
    }
}

void ns_nsdateformatter_set_very_short_month_symbols(zval *handle, zval *veryShortMonthSymbols)
{
    @autoreleasepool {
        NSDateFormatter *f = NS_ARG_AS(NSDateFormatter, handle);
        if (f == nil) return;
        zval *z = ns_deref(veryShortMonthSymbols);
        NSArray<NSString *> *symbols = (z != NULL && Z_TYPE_P(z) == IS_ARRAY) ? ns_arg_string_array(veryShortMonthSymbols) : nil;
        [f setVeryShortMonthSymbols:symbols];
    }
}
void ns_nsdateformatter_standalone_month_symbols(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSDateFormatter *f = NS_ARG_AS(NSDateFormatter, handle);
        ns_ret_string_array(return_value, f != nil ? [f standaloneMonthSymbols] : nil);
    }
}

void ns_nsdateformatter_set_standalone_month_symbols(zval *handle, zval *standaloneMonthSymbols)
{
    @autoreleasepool {
        NSDateFormatter *f = NS_ARG_AS(NSDateFormatter, handle);
        if (f == nil) return;
        zval *z = ns_deref(standaloneMonthSymbols);
        NSArray<NSString *> *symbols = (z != NULL && Z_TYPE_P(z) == IS_ARRAY) ? ns_arg_string_array(standaloneMonthSymbols) : nil;
        [f setStandaloneMonthSymbols:symbols];
    }
}
void ns_nsdateformatter_short_standalone_month_symbols(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSDateFormatter *f = NS_ARG_AS(NSDateFormatter, handle);
        ns_ret_string_array(return_value, f != nil ? [f shortStandaloneMonthSymbols] : nil);
    }
}

void ns_nsdateformatter_set_short_standalone_month_symbols(zval *handle, zval *shortStandaloneMonthSymbols)
{
    @autoreleasepool {
        NSDateFormatter *f = NS_ARG_AS(NSDateFormatter, handle);
        if (f == nil) return;
        zval *z = ns_deref(shortStandaloneMonthSymbols);
        NSArray<NSString *> *symbols = (z != NULL && Z_TYPE_P(z) == IS_ARRAY) ? ns_arg_string_array(shortStandaloneMonthSymbols) : nil;
        [f setShortStandaloneMonthSymbols:symbols];
    }
}
void ns_nsdateformatter_very_short_standalone_month_symbols(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSDateFormatter *f = NS_ARG_AS(NSDateFormatter, handle);
        ns_ret_string_array(return_value, f != nil ? [f veryShortStandaloneMonthSymbols] : nil);
    }
}

void ns_nsdateformatter_set_very_short_standalone_month_symbols(zval *handle, zval *veryShortStandaloneMonthSymbols)
{
    @autoreleasepool {
        NSDateFormatter *f = NS_ARG_AS(NSDateFormatter, handle);
        if (f == nil) return;
        zval *z = ns_deref(veryShortStandaloneMonthSymbols);
        NSArray<NSString *> *symbols = (z != NULL && Z_TYPE_P(z) == IS_ARRAY) ? ns_arg_string_array(veryShortStandaloneMonthSymbols) : nil;
        [f setVeryShortStandaloneMonthSymbols:symbols];
    }
}
void ns_nsdateformatter_very_short_weekday_symbols(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSDateFormatter *f = NS_ARG_AS(NSDateFormatter, handle);
        ns_ret_string_array(return_value, f != nil ? [f veryShortWeekdaySymbols] : nil);
    }
}

void ns_nsdateformatter_set_very_short_weekday_symbols(zval *handle, zval *veryShortWeekdaySymbols)
{
    @autoreleasepool {
        NSDateFormatter *f = NS_ARG_AS(NSDateFormatter, handle);
        if (f == nil) return;
        zval *z = ns_deref(veryShortWeekdaySymbols);
        NSArray<NSString *> *symbols = (z != NULL && Z_TYPE_P(z) == IS_ARRAY) ? ns_arg_string_array(veryShortWeekdaySymbols) : nil;
        [f setVeryShortWeekdaySymbols:symbols];
    }
}
void ns_nsdateformatter_standalone_weekday_symbols(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSDateFormatter *f = NS_ARG_AS(NSDateFormatter, handle);
        ns_ret_string_array(return_value, f != nil ? [f standaloneWeekdaySymbols] : nil);
    }
}

void ns_nsdateformatter_set_standalone_weekday_symbols(zval *handle, zval *standaloneWeekdaySymbols)
{
    @autoreleasepool {
        NSDateFormatter *f = NS_ARG_AS(NSDateFormatter, handle);
        if (f == nil) return;
        zval *z = ns_deref(standaloneWeekdaySymbols);
        NSArray<NSString *> *symbols = (z != NULL && Z_TYPE_P(z) == IS_ARRAY) ? ns_arg_string_array(standaloneWeekdaySymbols) : nil;
        [f setStandaloneWeekdaySymbols:symbols];
    }
}
void ns_nsdateformatter_short_standalone_weekday_symbols(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSDateFormatter *f = NS_ARG_AS(NSDateFormatter, handle);
        ns_ret_string_array(return_value, f != nil ? [f shortStandaloneWeekdaySymbols] : nil);
    }
}

void ns_nsdateformatter_set_short_standalone_weekday_symbols(zval *handle, zval *shortStandaloneWeekdaySymbols)
{
    @autoreleasepool {
        NSDateFormatter *f = NS_ARG_AS(NSDateFormatter, handle);
        if (f == nil) return;
        zval *z = ns_deref(shortStandaloneWeekdaySymbols);
        NSArray<NSString *> *symbols = (z != NULL && Z_TYPE_P(z) == IS_ARRAY) ? ns_arg_string_array(shortStandaloneWeekdaySymbols) : nil;
        [f setShortStandaloneWeekdaySymbols:symbols];
    }
}
void ns_nsdateformatter_very_short_standalone_weekday_symbols(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSDateFormatter *f = NS_ARG_AS(NSDateFormatter, handle);
        ns_ret_string_array(return_value, f != nil ? [f veryShortStandaloneWeekdaySymbols] : nil);
    }
}

void ns_nsdateformatter_set_very_short_standalone_weekday_symbols(zval *handle, zval *veryShortStandaloneWeekdaySymbols)
{
    @autoreleasepool {
        NSDateFormatter *f = NS_ARG_AS(NSDateFormatter, handle);
        if (f == nil) return;
        zval *z = ns_deref(veryShortStandaloneWeekdaySymbols);
        NSArray<NSString *> *symbols = (z != NULL && Z_TYPE_P(z) == IS_ARRAY) ? ns_arg_string_array(veryShortStandaloneWeekdaySymbols) : nil;
        [f setVeryShortStandaloneWeekdaySymbols:symbols];
    }
}
void ns_nsdateformatter_quarter_symbols(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSDateFormatter *f = NS_ARG_AS(NSDateFormatter, handle);
        ns_ret_string_array(return_value, f != nil ? [f quarterSymbols] : nil);
    }
}

void ns_nsdateformatter_set_quarter_symbols(zval *handle, zval *quarterSymbols)
{
    @autoreleasepool {
        NSDateFormatter *f = NS_ARG_AS(NSDateFormatter, handle);
        if (f == nil) return;
        zval *z = ns_deref(quarterSymbols);
        NSArray<NSString *> *symbols = (z != NULL && Z_TYPE_P(z) == IS_ARRAY) ? ns_arg_string_array(quarterSymbols) : nil;
        [f setQuarterSymbols:symbols];
    }
}
void ns_nsdateformatter_short_quarter_symbols(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSDateFormatter *f = NS_ARG_AS(NSDateFormatter, handle);
        ns_ret_string_array(return_value, f != nil ? [f shortQuarterSymbols] : nil);
    }
}

void ns_nsdateformatter_set_short_quarter_symbols(zval *handle, zval *shortQuarterSymbols)
{
    @autoreleasepool {
        NSDateFormatter *f = NS_ARG_AS(NSDateFormatter, handle);
        if (f == nil) return;
        zval *z = ns_deref(shortQuarterSymbols);
        NSArray<NSString *> *symbols = (z != NULL && Z_TYPE_P(z) == IS_ARRAY) ? ns_arg_string_array(shortQuarterSymbols) : nil;
        [f setShortQuarterSymbols:symbols];
    }
}
void ns_nsdateformatter_standalone_quarter_symbols(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSDateFormatter *f = NS_ARG_AS(NSDateFormatter, handle);
        ns_ret_string_array(return_value, f != nil ? [f standaloneQuarterSymbols] : nil);
    }
}

void ns_nsdateformatter_set_standalone_quarter_symbols(zval *handle, zval *standaloneQuarterSymbols)
{
    @autoreleasepool {
        NSDateFormatter *f = NS_ARG_AS(NSDateFormatter, handle);
        if (f == nil) return;
        zval *z = ns_deref(standaloneQuarterSymbols);
        NSArray<NSString *> *symbols = (z != NULL && Z_TYPE_P(z) == IS_ARRAY) ? ns_arg_string_array(standaloneQuarterSymbols) : nil;
        [f setStandaloneQuarterSymbols:symbols];
    }
}
void ns_nsdateformatter_short_standalone_quarter_symbols(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSDateFormatter *f = NS_ARG_AS(NSDateFormatter, handle);
        ns_ret_string_array(return_value, f != nil ? [f shortStandaloneQuarterSymbols] : nil);
    }
}

void ns_nsdateformatter_set_short_standalone_quarter_symbols(zval *handle, zval *shortStandaloneQuarterSymbols)
{
    @autoreleasepool {
        NSDateFormatter *f = NS_ARG_AS(NSDateFormatter, handle);
        if (f == nil) return;
        zval *z = ns_deref(shortStandaloneQuarterSymbols);
        NSArray<NSString *> *symbols = (z != NULL && Z_TYPE_P(z) == IS_ARRAY) ? ns_arg_string_array(shortStandaloneQuarterSymbols) : nil;
        [f setShortStandaloneQuarterSymbols:symbols];
    }
}
void ns_nsdateformatter_am_symbol(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSDateFormatter *f = NS_ARG_AS(NSDateFormatter, handle);
        ns_ret_string(return_value, f != nil ? [f AMSymbol] : nil);
    }
}

void ns_nsdateformatter_set_am_symbol(zval *handle, zval *AMSymbol)
{
    @autoreleasepool {
        NSDateFormatter *f = NS_ARG_AS(NSDateFormatter, handle);
        if (f == nil) return;
        [f setAMSymbol:ns_arg_string(AMSymbol)];
    }
}

void ns_nsdateformatter_pm_symbol(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSDateFormatter *f = NS_ARG_AS(NSDateFormatter, handle);
        ns_ret_string(return_value, f != nil ? [f PMSymbol] : nil);
    }
}

void ns_nsdateformatter_set_pm_symbol(zval *handle, zval *PMSymbol)
{
    @autoreleasepool {
        NSDateFormatter *f = NS_ARG_AS(NSDateFormatter, handle);
        if (f == nil) return;
        [f setPMSymbol:ns_arg_string(PMSymbol)];
    }
}

zend_long ns_nsdateformatter_gregorian_start_date(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSDateFormatter *f = NS_ARG_AS(NSDateFormatter, handle);
        h = ns_handle_for(f != nil ? [f gregorianStartDate] : nil);
    }
    return h;
}

void ns_nsdateformatter_set_gregorian_start_date(zval *handle, zval *gregorianStartDate)
{
    @autoreleasepool {
        NSDateFormatter *f = NS_ARG_AS(NSDateFormatter, handle);
        if (f == nil) return;
        [f setGregorianStartDate:NS_ARG_AS(NSDate, gregorianStartDate)];
    }
}

zend_long ns_nsdateformatter_does_relative_date_formatting(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSDateFormatter *f = NS_ARG_AS(NSDateFormatter, handle);
        r = (f != nil && [f doesRelativeDateFormatting]) ? 1 : 0;
    }
    return r;
}

void ns_nsdateformatter_set_does_relative_date_formatting(zval *handle, zval *doesRelativeDateFormatting)
{
    @autoreleasepool {
        NSDateFormatter *f = NS_ARG_AS(NSDateFormatter, handle);
        if (f == nil) return;
        [f setDoesRelativeDateFormatting:ns_arg_bool(doesRelativeDateFormatting)];
    }
}