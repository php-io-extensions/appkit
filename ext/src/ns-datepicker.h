#ifndef PHP_APPKIT_NS_DATEPICKER_H
#define PHP_APPKIT_NS_DATEPICKER_H

/*
 * Faithful 1:1 binding of AppKit NSDatePicker.h. Every member of
 * the class (the single base interface; no same-file categories) is
 * either bound or reserved. Nothing is reserved — the header has no
 * blocks, NSCoder, NSAttributedString, NSData, Class, or
 * API_DEPRECATED members. The NSDatePickerCellDelegate protocol is
 * not a class member. Inherited NSControl / NSView members stay on
 * those classes. No designated initializer is declared here —
 * construction is synthesized initWithFrame (allocs NSDatePicker).
 * NSDate (dateValue, minDate, maxDate), NSCalendar, NSLocale,
 * NSTimeZone, NSColor, and the delegate cross as handles; 0 is nil.
 * NSTimeInterval crosses as double. Enums (NSDatePickerStyle,
 * NSDatePickerMode, NSDatePickerElementFlags) cross as int.
 *
 * NSDate marshalling (flag for Angel): bound as a registry handle,
 * not an epoch double. That is the translation table (any object
 * becomes an int handle). An epoch-double convenience belongs in
 * jovian/appkit if wanted — not here. Confirm or override.
 */

#include "php.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ---- NSDatePicker ---- */

/*@zep-construct NS\NSDatePicker initWithFrame(double x, double y, double width, double height) -> int */
zend_long ns_nsdatepicker_init_with_frame(zval *x, zval *y, zval *width, zval *height);

/*@zep NS\NSDatePicker datePickerStyle(int handle) -> int */
zend_long ns_nsdatepicker_date_picker_style(zval *handle);
/*@zep NS\NSDatePicker setDatePickerStyle(int handle, int datePickerStyle) -> void */
void ns_nsdatepicker_set_date_picker_style(zval *handle, zval *datePickerStyle);

/*@zep NS\NSDatePicker isBezeled(int handle) -> bool */
zend_long ns_nsdatepicker_is_bezeled(zval *handle);
/*@zep NS\NSDatePicker setBezeled(int handle, bool bezeled) -> void */
void ns_nsdatepicker_set_bezeled(zval *handle, zval *bezeled);

/*@zep NS\NSDatePicker isBordered(int handle) -> bool */
zend_long ns_nsdatepicker_is_bordered(zval *handle);
/*@zep NS\NSDatePicker setBordered(int handle, bool bordered) -> void */
void ns_nsdatepicker_set_bordered(zval *handle, zval *bordered);

/*@zep NS\NSDatePicker drawsBackground(int handle) -> bool */
zend_long ns_nsdatepicker_draws_background(zval *handle);
/*@zep NS\NSDatePicker setDrawsBackground(int handle, bool drawsBackground) -> void */
void ns_nsdatepicker_set_draws_background(zval *handle, zval *drawsBackground);

/*@zep NS\NSDatePicker backgroundColor(int handle) -> int */
zend_long ns_nsdatepicker_background_color(zval *handle);
/*@zep NS\NSDatePicker setBackgroundColor(int handle, int backgroundColor) -> void */
void ns_nsdatepicker_set_background_color(zval *handle, zval *backgroundColor);

/*@zep NS\NSDatePicker textColor(int handle) -> int */
zend_long ns_nsdatepicker_text_color(zval *handle);
/*@zep NS\NSDatePicker setTextColor(int handle, int textColor) -> void */
void ns_nsdatepicker_set_text_color(zval *handle, zval *textColor);

/*@zep NS\NSDatePicker datePickerMode(int handle) -> int */
zend_long ns_nsdatepicker_date_picker_mode(zval *handle);
/*@zep NS\NSDatePicker setDatePickerMode(int handle, int datePickerMode) -> void */
void ns_nsdatepicker_set_date_picker_mode(zval *handle, zval *datePickerMode);

/*@zep NS\NSDatePicker datePickerElements(int handle) -> int */
zend_long ns_nsdatepicker_date_picker_elements(zval *handle);
/*@zep NS\NSDatePicker setDatePickerElements(int handle, int datePickerElements) -> void */
void ns_nsdatepicker_set_date_picker_elements(zval *handle, zval *datePickerElements);

/*@zep NS\NSDatePicker calendar(int handle) -> int */
zend_long ns_nsdatepicker_calendar(zval *handle);
/*@zep NS\NSDatePicker setCalendar(int handle, int calendar) -> void */
void ns_nsdatepicker_set_calendar(zval *handle, zval *calendar);

/*@zep NS\NSDatePicker locale(int handle) -> int */
zend_long ns_nsdatepicker_locale(zval *handle);
/*@zep NS\NSDatePicker setLocale(int handle, int locale) -> void */
void ns_nsdatepicker_set_locale(zval *handle, zval *locale);

/*@zep NS\NSDatePicker timeZone(int handle) -> int */
zend_long ns_nsdatepicker_time_zone(zval *handle);
/*@zep NS\NSDatePicker setTimeZone(int handle, int timeZone) -> void */
void ns_nsdatepicker_set_time_zone(zval *handle, zval *timeZone);

/*@zep NS\NSDatePicker dateValue(int handle) -> int */
zend_long ns_nsdatepicker_date_value(zval *handle);
/*@zep NS\NSDatePicker setDateValue(int handle, int dateValue) -> void */
void ns_nsdatepicker_set_date_value(zval *handle, zval *dateValue);

/*@zep NS\NSDatePicker timeInterval(int handle) -> double */
double ns_nsdatepicker_time_interval(zval *handle);
/*@zep NS\NSDatePicker setTimeInterval(int handle, double timeInterval) -> void */
void ns_nsdatepicker_set_time_interval(zval *handle, zval *timeInterval);

/*@zep NS\NSDatePicker minDate(int handle) -> int */
zend_long ns_nsdatepicker_min_date(zval *handle);
/*@zep NS\NSDatePicker setMinDate(int handle, int minDate) -> void */
void ns_nsdatepicker_set_min_date(zval *handle, zval *minDate);

/*@zep NS\NSDatePicker maxDate(int handle) -> int */
zend_long ns_nsdatepicker_max_date(zval *handle);
/*@zep NS\NSDatePicker setMaxDate(int handle, int maxDate) -> void */
void ns_nsdatepicker_set_max_date(zval *handle, zval *maxDate);

/*@zep NS\NSDatePicker presentsCalendarOverlay(int handle) -> bool */
zend_long ns_nsdatepicker_presents_calendar_overlay(zval *handle);
/*@zep NS\NSDatePicker setPresentsCalendarOverlay(int handle, bool presentsCalendarOverlay) -> void */
void ns_nsdatepicker_set_presents_calendar_overlay(zval *handle, zval *presentsCalendarOverlay);

/*@zep NS\NSDatePicker delegate(int handle) -> int */
zend_long ns_nsdatepicker_delegate(zval *handle);
/*@zep NS\NSDatePicker setDelegate(int handle, int delegate) -> void */
void ns_nsdatepicker_set_delegate(zval *handle, zval *delegate);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_DATEPICKER_H */
