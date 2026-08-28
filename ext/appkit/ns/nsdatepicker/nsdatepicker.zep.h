
extern zend_class_entry *appkit_ns_nsdatepicker_nsdatepicker_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSDatePicker_NSDatePicker);

PHP_METHOD(AppKit_NS_NSDatePicker_NSDatePicker, initWithFrame);
PHP_METHOD(AppKit_NS_NSDatePicker_NSDatePicker, datePickerStyle);
PHP_METHOD(AppKit_NS_NSDatePicker_NSDatePicker, setDatePickerStyle);
PHP_METHOD(AppKit_NS_NSDatePicker_NSDatePicker, isBezeled);
PHP_METHOD(AppKit_NS_NSDatePicker_NSDatePicker, setBezeled);
PHP_METHOD(AppKit_NS_NSDatePicker_NSDatePicker, isBordered);
PHP_METHOD(AppKit_NS_NSDatePicker_NSDatePicker, setBordered);
PHP_METHOD(AppKit_NS_NSDatePicker_NSDatePicker, drawsBackground);
PHP_METHOD(AppKit_NS_NSDatePicker_NSDatePicker, setDrawsBackground);
PHP_METHOD(AppKit_NS_NSDatePicker_NSDatePicker, backgroundColor);
PHP_METHOD(AppKit_NS_NSDatePicker_NSDatePicker, setBackgroundColor);
PHP_METHOD(AppKit_NS_NSDatePicker_NSDatePicker, textColor);
PHP_METHOD(AppKit_NS_NSDatePicker_NSDatePicker, setTextColor);
PHP_METHOD(AppKit_NS_NSDatePicker_NSDatePicker, datePickerMode);
PHP_METHOD(AppKit_NS_NSDatePicker_NSDatePicker, setDatePickerMode);
PHP_METHOD(AppKit_NS_NSDatePicker_NSDatePicker, datePickerElements);
PHP_METHOD(AppKit_NS_NSDatePicker_NSDatePicker, setDatePickerElements);
PHP_METHOD(AppKit_NS_NSDatePicker_NSDatePicker, calendar);
PHP_METHOD(AppKit_NS_NSDatePicker_NSDatePicker, setCalendar);
PHP_METHOD(AppKit_NS_NSDatePicker_NSDatePicker, locale);
PHP_METHOD(AppKit_NS_NSDatePicker_NSDatePicker, setLocale);
PHP_METHOD(AppKit_NS_NSDatePicker_NSDatePicker, timeZone);
PHP_METHOD(AppKit_NS_NSDatePicker_NSDatePicker, setTimeZone);
PHP_METHOD(AppKit_NS_NSDatePicker_NSDatePicker, dateValue);
PHP_METHOD(AppKit_NS_NSDatePicker_NSDatePicker, setDateValue);
PHP_METHOD(AppKit_NS_NSDatePicker_NSDatePicker, timeInterval);
PHP_METHOD(AppKit_NS_NSDatePicker_NSDatePicker, setTimeInterval);
PHP_METHOD(AppKit_NS_NSDatePicker_NSDatePicker, minDate);
PHP_METHOD(AppKit_NS_NSDatePicker_NSDatePicker, setMinDate);
PHP_METHOD(AppKit_NS_NSDatePicker_NSDatePicker, maxDate);
PHP_METHOD(AppKit_NS_NSDatePicker_NSDatePicker, setMaxDate);
PHP_METHOD(AppKit_NS_NSDatePicker_NSDatePicker, presentsCalendarOverlay);
PHP_METHOD(AppKit_NS_NSDatePicker_NSDatePicker, setPresentsCalendarOverlay);
PHP_METHOD(AppKit_NS_NSDatePicker_NSDatePicker, delegate);
PHP_METHOD(AppKit_NS_NSDatePicker_NSDatePicker, setDelegate);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsdatepicker_nsdatepicker_initwithframe, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsdatepicker_nsdatepicker_datepickerstyle, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsdatepicker_nsdatepicker_setdatepickerstyle, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, datePickerStyle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsdatepicker_nsdatepicker_isbezeled, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsdatepicker_nsdatepicker_setbezeled, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, bezeled, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsdatepicker_nsdatepicker_isbordered, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsdatepicker_nsdatepicker_setbordered, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, bordered, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsdatepicker_nsdatepicker_drawsbackground, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsdatepicker_nsdatepicker_setdrawsbackground, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, drawsBackground, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsdatepicker_nsdatepicker_backgroundcolor, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsdatepicker_nsdatepicker_setbackgroundcolor, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, backgroundColor, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsdatepicker_nsdatepicker_textcolor, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsdatepicker_nsdatepicker_settextcolor, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, textColor, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsdatepicker_nsdatepicker_datepickermode, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsdatepicker_nsdatepicker_setdatepickermode, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, datePickerMode, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsdatepicker_nsdatepicker_datepickerelements, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsdatepicker_nsdatepicker_setdatepickerelements, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, datePickerElements, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsdatepicker_nsdatepicker_calendar, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsdatepicker_nsdatepicker_setcalendar, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, calendar, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsdatepicker_nsdatepicker_locale, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsdatepicker_nsdatepicker_setlocale, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, locale, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsdatepicker_nsdatepicker_timezone, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsdatepicker_nsdatepicker_settimezone, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, timeZone, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsdatepicker_nsdatepicker_datevalue, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsdatepicker_nsdatepicker_setdatevalue, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, dateValue, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsdatepicker_nsdatepicker_timeinterval, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsdatepicker_nsdatepicker_settimeinterval, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, timeInterval, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsdatepicker_nsdatepicker_mindate, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsdatepicker_nsdatepicker_setmindate, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, minDate, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsdatepicker_nsdatepicker_maxdate, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsdatepicker_nsdatepicker_setmaxdate, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, maxDate, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsdatepicker_nsdatepicker_presentscalendaroverlay, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsdatepicker_nsdatepicker_setpresentscalendaroverlay, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, presentsCalendarOverlay, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsdatepicker_nsdatepicker_delegate, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsdatepicker_nsdatepicker_setdelegate, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, delegate, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nsdatepicker_nsdatepicker_method_entry) {
	PHP_ME(AppKit_NS_NSDatePicker_NSDatePicker, initWithFrame, arginfo_appkit_ns_nsdatepicker_nsdatepicker_initwithframe, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSDatePicker_NSDatePicker, datePickerStyle, arginfo_appkit_ns_nsdatepicker_nsdatepicker_datepickerstyle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSDatePicker_NSDatePicker, setDatePickerStyle, arginfo_appkit_ns_nsdatepicker_nsdatepicker_setdatepickerstyle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSDatePicker_NSDatePicker, isBezeled, arginfo_appkit_ns_nsdatepicker_nsdatepicker_isbezeled, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSDatePicker_NSDatePicker, setBezeled, arginfo_appkit_ns_nsdatepicker_nsdatepicker_setbezeled, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSDatePicker_NSDatePicker, isBordered, arginfo_appkit_ns_nsdatepicker_nsdatepicker_isbordered, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSDatePicker_NSDatePicker, setBordered, arginfo_appkit_ns_nsdatepicker_nsdatepicker_setbordered, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSDatePicker_NSDatePicker, drawsBackground, arginfo_appkit_ns_nsdatepicker_nsdatepicker_drawsbackground, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSDatePicker_NSDatePicker, setDrawsBackground, arginfo_appkit_ns_nsdatepicker_nsdatepicker_setdrawsbackground, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSDatePicker_NSDatePicker, backgroundColor, arginfo_appkit_ns_nsdatepicker_nsdatepicker_backgroundcolor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSDatePicker_NSDatePicker, setBackgroundColor, arginfo_appkit_ns_nsdatepicker_nsdatepicker_setbackgroundcolor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSDatePicker_NSDatePicker, textColor, arginfo_appkit_ns_nsdatepicker_nsdatepicker_textcolor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSDatePicker_NSDatePicker, setTextColor, arginfo_appkit_ns_nsdatepicker_nsdatepicker_settextcolor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSDatePicker_NSDatePicker, datePickerMode, arginfo_appkit_ns_nsdatepicker_nsdatepicker_datepickermode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSDatePicker_NSDatePicker, setDatePickerMode, arginfo_appkit_ns_nsdatepicker_nsdatepicker_setdatepickermode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSDatePicker_NSDatePicker, datePickerElements, arginfo_appkit_ns_nsdatepicker_nsdatepicker_datepickerelements, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSDatePicker_NSDatePicker, setDatePickerElements, arginfo_appkit_ns_nsdatepicker_nsdatepicker_setdatepickerelements, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSDatePicker_NSDatePicker, calendar, arginfo_appkit_ns_nsdatepicker_nsdatepicker_calendar, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSDatePicker_NSDatePicker, setCalendar, arginfo_appkit_ns_nsdatepicker_nsdatepicker_setcalendar, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSDatePicker_NSDatePicker, locale, arginfo_appkit_ns_nsdatepicker_nsdatepicker_locale, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSDatePicker_NSDatePicker, setLocale, arginfo_appkit_ns_nsdatepicker_nsdatepicker_setlocale, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSDatePicker_NSDatePicker, timeZone, arginfo_appkit_ns_nsdatepicker_nsdatepicker_timezone, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSDatePicker_NSDatePicker, setTimeZone, arginfo_appkit_ns_nsdatepicker_nsdatepicker_settimezone, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSDatePicker_NSDatePicker, dateValue, arginfo_appkit_ns_nsdatepicker_nsdatepicker_datevalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSDatePicker_NSDatePicker, setDateValue, arginfo_appkit_ns_nsdatepicker_nsdatepicker_setdatevalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSDatePicker_NSDatePicker, timeInterval, arginfo_appkit_ns_nsdatepicker_nsdatepicker_timeinterval, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSDatePicker_NSDatePicker, setTimeInterval, arginfo_appkit_ns_nsdatepicker_nsdatepicker_settimeinterval, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSDatePicker_NSDatePicker, minDate, arginfo_appkit_ns_nsdatepicker_nsdatepicker_mindate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSDatePicker_NSDatePicker, setMinDate, arginfo_appkit_ns_nsdatepicker_nsdatepicker_setmindate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSDatePicker_NSDatePicker, maxDate, arginfo_appkit_ns_nsdatepicker_nsdatepicker_maxdate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSDatePicker_NSDatePicker, setMaxDate, arginfo_appkit_ns_nsdatepicker_nsdatepicker_setmaxdate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSDatePicker_NSDatePicker, presentsCalendarOverlay, arginfo_appkit_ns_nsdatepicker_nsdatepicker_presentscalendaroverlay, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSDatePicker_NSDatePicker, setPresentsCalendarOverlay, arginfo_appkit_ns_nsdatepicker_nsdatepicker_setpresentscalendaroverlay, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSDatePicker_NSDatePicker, delegate, arginfo_appkit_ns_nsdatepicker_nsdatepicker_delegate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSDatePicker_NSDatePicker, setDelegate, arginfo_appkit_ns_nsdatepicker_nsdatepicker_setdelegate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
