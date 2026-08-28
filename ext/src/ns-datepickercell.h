#ifndef PHP_APPKIT_NS_DATEPICKERCELL_H
#define PHP_APPKIT_NS_DATEPICKERCELL_H

/*
 * Faithful 1:1 binding of AppKit NSDatePickerCell.h. Every member of
 * the class (the single base interface; no same-file categories) is
 * either bound or reserved. initWithCoder is reserved (NSCoder).
 * initImageCell is reserved (NS_UNAVAILABLE). The
 * NSDatePickerCellDelegate protocol is not a class member. The
 * legacy static const aliases (NSTextFieldAndStepperDatePickerStyle
 * and siblings) are file-level constants, not class members.
 * Inherited NSActionCell / NSCell members stay on those classes.
 * initTextCell is alloc+init construction glue. NSDate (dateValue,
 * minDate, maxDate), NSCalendar, NSLocale, NSTimeZone, NSColor,
 * and the delegate cross as handles; 0 is nil. NSTimeInterval
 * crosses as double. Enums cross as int.
 *
 * NSDate marshalling (flag for Angel): same as NSDatePicker —
 * registry handle, not epoch double.
 */

#include "php.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ---- NSDatePickerCell ---- */

/*@zep NS\NSDatePickerCell initTextCell(string string_) -> int */
zend_long ns_nsdatepickercell_init_text_cell(zval *string_);
/*@reserved NS\NSDatePickerCell - (instancetype)initWithCoder:(NSCoder *)coder NS_DESIGNATED_INITIALIZER; */
/*@reserved NS\NSDatePickerCell - (instancetype)initImageCell:(nullable NSImage *)image NS_UNAVAILABLE; */

/*@zep NS\NSDatePickerCell datePickerStyle(int handle) -> int */
zend_long ns_nsdatepickercell_date_picker_style(zval *handle);
/*@zep NS\NSDatePickerCell setDatePickerStyle(int handle, int datePickerStyle) -> void */
void ns_nsdatepickercell_set_date_picker_style(zval *handle, zval *datePickerStyle);

/*@zep NS\NSDatePickerCell drawsBackground(int handle) -> bool */
zend_long ns_nsdatepickercell_draws_background(zval *handle);
/*@zep NS\NSDatePickerCell setDrawsBackground(int handle, bool drawsBackground) -> void */
void ns_nsdatepickercell_set_draws_background(zval *handle, zval *drawsBackground);

/*@zep NS\NSDatePickerCell backgroundColor(int handle) -> int */
zend_long ns_nsdatepickercell_background_color(zval *handle);
/*@zep NS\NSDatePickerCell setBackgroundColor(int handle, int backgroundColor) -> void */
void ns_nsdatepickercell_set_background_color(zval *handle, zval *backgroundColor);

/*@zep NS\NSDatePickerCell textColor(int handle) -> int */
zend_long ns_nsdatepickercell_text_color(zval *handle);
/*@zep NS\NSDatePickerCell setTextColor(int handle, int textColor) -> void */
void ns_nsdatepickercell_set_text_color(zval *handle, zval *textColor);

/*@zep NS\NSDatePickerCell datePickerMode(int handle) -> int */
zend_long ns_nsdatepickercell_date_picker_mode(zval *handle);
/*@zep NS\NSDatePickerCell setDatePickerMode(int handle, int datePickerMode) -> void */
void ns_nsdatepickercell_set_date_picker_mode(zval *handle, zval *datePickerMode);

/*@zep NS\NSDatePickerCell datePickerElements(int handle) -> int */
zend_long ns_nsdatepickercell_date_picker_elements(zval *handle);
/*@zep NS\NSDatePickerCell setDatePickerElements(int handle, int datePickerElements) -> void */
void ns_nsdatepickercell_set_date_picker_elements(zval *handle, zval *datePickerElements);

/*@zep NS\NSDatePickerCell calendar(int handle) -> int */
zend_long ns_nsdatepickercell_calendar(zval *handle);
/*@zep NS\NSDatePickerCell setCalendar(int handle, int calendar) -> void */
void ns_nsdatepickercell_set_calendar(zval *handle, zval *calendar);

/*@zep NS\NSDatePickerCell locale(int handle) -> int */
zend_long ns_nsdatepickercell_locale(zval *handle);
/*@zep NS\NSDatePickerCell setLocale(int handle, int locale) -> void */
void ns_nsdatepickercell_set_locale(zval *handle, zval *locale);

/*@zep NS\NSDatePickerCell timeZone(int handle) -> int */
zend_long ns_nsdatepickercell_time_zone(zval *handle);
/*@zep NS\NSDatePickerCell setTimeZone(int handle, int timeZone) -> void */
void ns_nsdatepickercell_set_time_zone(zval *handle, zval *timeZone);

/*@zep NS\NSDatePickerCell dateValue(int handle) -> int */
zend_long ns_nsdatepickercell_date_value(zval *handle);
/*@zep NS\NSDatePickerCell setDateValue(int handle, int dateValue) -> void */
void ns_nsdatepickercell_set_date_value(zval *handle, zval *dateValue);

/*@zep NS\NSDatePickerCell timeInterval(int handle) -> double */
double ns_nsdatepickercell_time_interval(zval *handle);
/*@zep NS\NSDatePickerCell setTimeInterval(int handle, double timeInterval) -> void */
void ns_nsdatepickercell_set_time_interval(zval *handle, zval *timeInterval);

/*@zep NS\NSDatePickerCell minDate(int handle) -> int */
zend_long ns_nsdatepickercell_min_date(zval *handle);
/*@zep NS\NSDatePickerCell setMinDate(int handle, int minDate) -> void */
void ns_nsdatepickercell_set_min_date(zval *handle, zval *minDate);

/*@zep NS\NSDatePickerCell maxDate(int handle) -> int */
zend_long ns_nsdatepickercell_max_date(zval *handle);
/*@zep NS\NSDatePickerCell setMaxDate(int handle, int maxDate) -> void */
void ns_nsdatepickercell_set_max_date(zval *handle, zval *maxDate);

/*@zep NS\NSDatePickerCell delegate(int handle) -> int */
zend_long ns_nsdatepickercell_delegate(zval *handle);
/*@zep NS\NSDatePickerCell setDelegate(int handle, int delegate) -> void */
void ns_nsdatepickercell_set_delegate(zval *handle, zval *delegate);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_DATEPICKERCELL_H */
