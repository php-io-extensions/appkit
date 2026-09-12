#ifndef PHP_APPKIT_NS_DATEFORMATTER_H
#define PHP_APPKIT_NS_DATEFORMATTER_H

/*
 * Faithful 1:1 binding of Foundation NSDateFormatter.h. Every member of
 * the class (base interface + same-file NSDateFormatterCompatibility
 * category on macOS) is either bound or reserved. Nothing is omitted.
 * The NSDateFormatterStyle / NSDateFormatterBehavior typedefs are not
 * class members. Inherited NSFormatter / NSObject members stay on those
 * classes. The commented designated initializer is a comment, not a
 * member — construction is synthesized init (allocs NSDateFormatter).
 * Reserved: getObjectValue:forString:range:error: (out id*, inout
 * NSRange*, NSError**) and the two API_DEPRECATED compatibility
 * methods (initWithDateFormat:allowNaturalLanguage: and
 * allowsNaturalLanguage). NSDate / NSLocale / NSTimeZone / NSCalendar
 * cross as handles (0 = nil). null_resettable NSString properties
 * (dateFormat, AMSymbol, PMSymbol) cross as var so null resets.
 * null_resettable NSArray<NSString *> symbol lists cross as array out
 * and var in so null resets. Nullable NSDate properties
 * (twoDigitStartDate, defaultDate, gregorianStartDate) cross as
 * handles. Class property defaultFormatterBehavior has no handle.
 * getter=isLenient emits isLenient. Enums (NSDateFormatterStyle,
 * NSDateFormatterBehavior, NSFormattingContext) cross as int.
 *
 * This is the honest path from an NSDatePicker dateValue handle to a
 * Y-m-d string and back, in the formatter's default time zone.
 */

#include "php.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ---- construction glue ---- */

/*@zep-construct NS\NSDateFormatter init() -> int */
zend_long ns_nsdateformatter_init(void);

/* ---- Convenience ---- */

/*@reserved NS\NSDateFormatter - (BOOL)getObjectValue:(out id _Nullable * _Nullable)obj forString:(NSString *)string range:(inout nullable NSRange *)rangep error:(out NSError **)error — out id*, inout NSRange*, NSError** */
/*@zep NS\NSDateFormatter stringFromDate(int handle, int date) -> var */
void ns_nsdateformatter_string_from_date(zval *return_value, zval *handle, zval *date);
/*@zep NS\NSDateFormatter dateFromString(int handle, string string_) -> int */
zend_long ns_nsdateformatter_date_from_string(zval *handle, zval *string_);

/* ---- Class ---- */

/*@zep NS\NSDateFormatter localizedStringFromDateDateStyleTimeStyle(int date, int dstyle, int tstyle) -> var */
void ns_nsdateformatter_localized_string_from_date_date_style_time_style(zval *return_value, zval *date, zval *dstyle, zval *tstyle);
/*@zep NS\NSDateFormatter dateFormatFromTemplateOptionsLocale(string tmplate, int opts, var locale) -> var */
void ns_nsdateformatter_date_format_from_template_options_locale(zval *return_value, zval *tmplate, zval *opts, zval *locale);
/*@zep NS\NSDateFormatter defaultFormatterBehavior() -> int */
zend_long ns_nsdateformatter_default_formatter_behavior(void);
/*@zep NS\NSDateFormatter setDefaultFormatterBehavior(int defaultFormatterBehavior) -> void */
void ns_nsdateformatter_set_default_formatter_behavior(zval *defaultFormatterBehavior);

/* ---- Attributes ---- */

/*@zep NS\NSDateFormatter formattingContext(int handle) -> int */
zend_long ns_nsdateformatter_formatting_context(zval *handle);
/*@zep NS\NSDateFormatter setFormattingContext(int handle, int formattingContext) -> void */
void ns_nsdateformatter_set_formatting_context(zval *handle, zval *formattingContext);

/*@zep NS\NSDateFormatter setLocalizedDateFormatFromTemplate(int handle, string dateFormatTemplate) -> void */
void ns_nsdateformatter_set_localized_date_format_from_template(zval *handle, zval *dateFormatTemplate);

/*@zep NS\NSDateFormatter dateFormat(int handle) -> var */
void ns_nsdateformatter_date_format(zval *return_value, zval *handle);
/*@zep NS\NSDateFormatter setDateFormat(int handle, var dateFormat) -> void */
void ns_nsdateformatter_set_date_format(zval *handle, zval *dateFormat);

/*@zep NS\NSDateFormatter dateStyle(int handle) -> int */
zend_long ns_nsdateformatter_date_style(zval *handle);
/*@zep NS\NSDateFormatter setDateStyle(int handle, int dateStyle) -> void */
void ns_nsdateformatter_set_date_style(zval *handle, zval *dateStyle);

/*@zep NS\NSDateFormatter timeStyle(int handle) -> int */
zend_long ns_nsdateformatter_time_style(zval *handle);
/*@zep NS\NSDateFormatter setTimeStyle(int handle, int timeStyle) -> void */
void ns_nsdateformatter_set_time_style(zval *handle, zval *timeStyle);

/*@zep NS\NSDateFormatter locale(int handle) -> int */
zend_long ns_nsdateformatter_locale(zval *handle);
/*@zep NS\NSDateFormatter setLocale(int handle, int locale) -> void */
void ns_nsdateformatter_set_locale(zval *handle, zval *locale);

/*@zep NS\NSDateFormatter generatesCalendarDates(int handle) -> bool */
zend_long ns_nsdateformatter_generates_calendar_dates(zval *handle);
/*@zep NS\NSDateFormatter setGeneratesCalendarDates(int handle, bool generatesCalendarDates) -> void */
void ns_nsdateformatter_set_generates_calendar_dates(zval *handle, zval *generatesCalendarDates);

/*@zep NS\NSDateFormatter formatterBehavior(int handle) -> int */
zend_long ns_nsdateformatter_formatter_behavior(zval *handle);
/*@zep NS\NSDateFormatter setFormatterBehavior(int handle, int formatterBehavior) -> void */
void ns_nsdateformatter_set_formatter_behavior(zval *handle, zval *formatterBehavior);

/*@zep NS\NSDateFormatter timeZone(int handle) -> int */
zend_long ns_nsdateformatter_time_zone(zval *handle);
/*@zep NS\NSDateFormatter setTimeZone(int handle, int timeZone) -> void */
void ns_nsdateformatter_set_time_zone(zval *handle, zval *timeZone);

/*@zep NS\NSDateFormatter calendar(int handle) -> int */
zend_long ns_nsdateformatter_calendar(zval *handle);
/*@zep NS\NSDateFormatter setCalendar(int handle, int calendar) -> void */
void ns_nsdateformatter_set_calendar(zval *handle, zval *calendar);

/*@zep NS\NSDateFormatter isLenient(int handle) -> bool */
zend_long ns_nsdateformatter_is_lenient(zval *handle);
/*@zep NS\NSDateFormatter setLenient(int handle, bool lenient) -> void */
void ns_nsdateformatter_set_lenient(zval *handle, zval *lenient);

/*@zep NS\NSDateFormatter twoDigitStartDate(int handle) -> int */
zend_long ns_nsdateformatter_two_digit_start_date(zval *handle);
/*@zep NS\NSDateFormatter setTwoDigitStartDate(int handle, int twoDigitStartDate) -> void */
void ns_nsdateformatter_set_two_digit_start_date(zval *handle, zval *twoDigitStartDate);

/*@zep NS\NSDateFormatter defaultDate(int handle) -> int */
zend_long ns_nsdateformatter_default_date(zval *handle);
/*@zep NS\NSDateFormatter setDefaultDate(int handle, int defaultDate) -> void */
void ns_nsdateformatter_set_default_date(zval *handle, zval *defaultDate);

/*@zep NS\NSDateFormatter eraSymbols(int handle) -> array */
void ns_nsdateformatter_era_symbols(zval *return_value, zval *handle);
/*@zep NS\NSDateFormatter setEraSymbols(int handle, var eraSymbols) -> void */
void ns_nsdateformatter_set_era_symbols(zval *handle, zval *eraSymbols);

/*@zep NS\NSDateFormatter monthSymbols(int handle) -> array */
void ns_nsdateformatter_month_symbols(zval *return_value, zval *handle);
/*@zep NS\NSDateFormatter setMonthSymbols(int handle, var monthSymbols) -> void */
void ns_nsdateformatter_set_month_symbols(zval *handle, zval *monthSymbols);

/*@zep NS\NSDateFormatter shortMonthSymbols(int handle) -> array */
void ns_nsdateformatter_short_month_symbols(zval *return_value, zval *handle);
/*@zep NS\NSDateFormatter setShortMonthSymbols(int handle, var shortMonthSymbols) -> void */
void ns_nsdateformatter_set_short_month_symbols(zval *handle, zval *shortMonthSymbols);

/*@zep NS\NSDateFormatter weekdaySymbols(int handle) -> array */
void ns_nsdateformatter_weekday_symbols(zval *return_value, zval *handle);
/*@zep NS\NSDateFormatter setWeekdaySymbols(int handle, var weekdaySymbols) -> void */
void ns_nsdateformatter_set_weekday_symbols(zval *handle, zval *weekdaySymbols);

/*@zep NS\NSDateFormatter shortWeekdaySymbols(int handle) -> array */
void ns_nsdateformatter_short_weekday_symbols(zval *return_value, zval *handle);
/*@zep NS\NSDateFormatter setShortWeekdaySymbols(int handle, var shortWeekdaySymbols) -> void */
void ns_nsdateformatter_set_short_weekday_symbols(zval *handle, zval *shortWeekdaySymbols);

/*@zep NS\NSDateFormatter AMSymbol(int handle) -> var */
void ns_nsdateformatter_am_symbol(zval *return_value, zval *handle);
/*@zep NS\NSDateFormatter setAMSymbol(int handle, var AMSymbol) -> void */
void ns_nsdateformatter_set_am_symbol(zval *handle, zval *AMSymbol);

/*@zep NS\NSDateFormatter PMSymbol(int handle) -> var */
void ns_nsdateformatter_pm_symbol(zval *return_value, zval *handle);
/*@zep NS\NSDateFormatter setPMSymbol(int handle, var PMSymbol) -> void */
void ns_nsdateformatter_set_pm_symbol(zval *handle, zval *PMSymbol);

/*@zep NS\NSDateFormatter longEraSymbols(int handle) -> array */
void ns_nsdateformatter_long_era_symbols(zval *return_value, zval *handle);
/*@zep NS\NSDateFormatter setLongEraSymbols(int handle, var longEraSymbols) -> void */
void ns_nsdateformatter_set_long_era_symbols(zval *handle, zval *longEraSymbols);

/*@zep NS\NSDateFormatter veryShortMonthSymbols(int handle) -> array */
void ns_nsdateformatter_very_short_month_symbols(zval *return_value, zval *handle);
/*@zep NS\NSDateFormatter setVeryShortMonthSymbols(int handle, var veryShortMonthSymbols) -> void */
void ns_nsdateformatter_set_very_short_month_symbols(zval *handle, zval *veryShortMonthSymbols);

/*@zep NS\NSDateFormatter standaloneMonthSymbols(int handle) -> array */
void ns_nsdateformatter_standalone_month_symbols(zval *return_value, zval *handle);
/*@zep NS\NSDateFormatter setStandaloneMonthSymbols(int handle, var standaloneMonthSymbols) -> void */
void ns_nsdateformatter_set_standalone_month_symbols(zval *handle, zval *standaloneMonthSymbols);

/*@zep NS\NSDateFormatter shortStandaloneMonthSymbols(int handle) -> array */
void ns_nsdateformatter_short_standalone_month_symbols(zval *return_value, zval *handle);
/*@zep NS\NSDateFormatter setShortStandaloneMonthSymbols(int handle, var shortStandaloneMonthSymbols) -> void */
void ns_nsdateformatter_set_short_standalone_month_symbols(zval *handle, zval *shortStandaloneMonthSymbols);

/*@zep NS\NSDateFormatter veryShortStandaloneMonthSymbols(int handle) -> array */
void ns_nsdateformatter_very_short_standalone_month_symbols(zval *return_value, zval *handle);
/*@zep NS\NSDateFormatter setVeryShortStandaloneMonthSymbols(int handle, var veryShortStandaloneMonthSymbols) -> void */
void ns_nsdateformatter_set_very_short_standalone_month_symbols(zval *handle, zval *veryShortStandaloneMonthSymbols);

/*@zep NS\NSDateFormatter veryShortWeekdaySymbols(int handle) -> array */
void ns_nsdateformatter_very_short_weekday_symbols(zval *return_value, zval *handle);
/*@zep NS\NSDateFormatter setVeryShortWeekdaySymbols(int handle, var veryShortWeekdaySymbols) -> void */
void ns_nsdateformatter_set_very_short_weekday_symbols(zval *handle, zval *veryShortWeekdaySymbols);

/*@zep NS\NSDateFormatter standaloneWeekdaySymbols(int handle) -> array */
void ns_nsdateformatter_standalone_weekday_symbols(zval *return_value, zval *handle);
/*@zep NS\NSDateFormatter setStandaloneWeekdaySymbols(int handle, var standaloneWeekdaySymbols) -> void */
void ns_nsdateformatter_set_standalone_weekday_symbols(zval *handle, zval *standaloneWeekdaySymbols);

/*@zep NS\NSDateFormatter shortStandaloneWeekdaySymbols(int handle) -> array */
void ns_nsdateformatter_short_standalone_weekday_symbols(zval *return_value, zval *handle);
/*@zep NS\NSDateFormatter setShortStandaloneWeekdaySymbols(int handle, var shortStandaloneWeekdaySymbols) -> void */
void ns_nsdateformatter_set_short_standalone_weekday_symbols(zval *handle, zval *shortStandaloneWeekdaySymbols);

/*@zep NS\NSDateFormatter veryShortStandaloneWeekdaySymbols(int handle) -> array */
void ns_nsdateformatter_very_short_standalone_weekday_symbols(zval *return_value, zval *handle);
/*@zep NS\NSDateFormatter setVeryShortStandaloneWeekdaySymbols(int handle, var veryShortStandaloneWeekdaySymbols) -> void */
void ns_nsdateformatter_set_very_short_standalone_weekday_symbols(zval *handle, zval *veryShortStandaloneWeekdaySymbols);

/*@zep NS\NSDateFormatter quarterSymbols(int handle) -> array */
void ns_nsdateformatter_quarter_symbols(zval *return_value, zval *handle);
/*@zep NS\NSDateFormatter setQuarterSymbols(int handle, var quarterSymbols) -> void */
void ns_nsdateformatter_set_quarter_symbols(zval *handle, zval *quarterSymbols);

/*@zep NS\NSDateFormatter shortQuarterSymbols(int handle) -> array */
void ns_nsdateformatter_short_quarter_symbols(zval *return_value, zval *handle);
/*@zep NS\NSDateFormatter setShortQuarterSymbols(int handle, var shortQuarterSymbols) -> void */
void ns_nsdateformatter_set_short_quarter_symbols(zval *handle, zval *shortQuarterSymbols);

/*@zep NS\NSDateFormatter standaloneQuarterSymbols(int handle) -> array */
void ns_nsdateformatter_standalone_quarter_symbols(zval *return_value, zval *handle);
/*@zep NS\NSDateFormatter setStandaloneQuarterSymbols(int handle, var standaloneQuarterSymbols) -> void */
void ns_nsdateformatter_set_standalone_quarter_symbols(zval *handle, zval *standaloneQuarterSymbols);

/*@zep NS\NSDateFormatter shortStandaloneQuarterSymbols(int handle) -> array */
void ns_nsdateformatter_short_standalone_quarter_symbols(zval *return_value, zval *handle);
/*@zep NS\NSDateFormatter setShortStandaloneQuarterSymbols(int handle, var shortStandaloneQuarterSymbols) -> void */
void ns_nsdateformatter_set_short_standalone_quarter_symbols(zval *handle, zval *shortStandaloneQuarterSymbols);

/*@zep NS\NSDateFormatter gregorianStartDate(int handle) -> int */
zend_long ns_nsdateformatter_gregorian_start_date(zval *handle);
/*@zep NS\NSDateFormatter setGregorianStartDate(int handle, int gregorianStartDate) -> void */
void ns_nsdateformatter_set_gregorian_start_date(zval *handle, zval *gregorianStartDate);

/*@zep NS\NSDateFormatter doesRelativeDateFormatting(int handle) -> bool */
zend_long ns_nsdateformatter_does_relative_date_formatting(zval *handle);
/*@zep NS\NSDateFormatter setDoesRelativeDateFormatting(int handle, bool doesRelativeDateFormatting) -> void */
void ns_nsdateformatter_set_does_relative_date_formatting(zval *handle, zval *doesRelativeDateFormatting);

/* ---- NSDateFormatterCompatibility (API_DEPRECATED) ---- */

/*@reserved NS\NSDateFormatter - (id)initWithDateFormat:(NSString *)format allowNaturalLanguage:(BOOL)flag API_DEPRECATED */
/*@reserved NS\NSDateFormatter - (BOOL)allowsNaturalLanguage API_DEPRECATED */

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_DATEFORMATTER_H */