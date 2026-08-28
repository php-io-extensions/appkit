
extern zend_class_entry *appkit_ns_nsdatepickercell_nsdatepickercell_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSDatePickerCell_NSDatePickerCell);

PHP_METHOD(AppKit_NS_NSDatePickerCell_NSDatePickerCell, initTextCell);
PHP_METHOD(AppKit_NS_NSDatePickerCell_NSDatePickerCell, datePickerStyle);
PHP_METHOD(AppKit_NS_NSDatePickerCell_NSDatePickerCell, setDatePickerStyle);
PHP_METHOD(AppKit_NS_NSDatePickerCell_NSDatePickerCell, drawsBackground);
PHP_METHOD(AppKit_NS_NSDatePickerCell_NSDatePickerCell, setDrawsBackground);
PHP_METHOD(AppKit_NS_NSDatePickerCell_NSDatePickerCell, backgroundColor);
PHP_METHOD(AppKit_NS_NSDatePickerCell_NSDatePickerCell, setBackgroundColor);
PHP_METHOD(AppKit_NS_NSDatePickerCell_NSDatePickerCell, textColor);
PHP_METHOD(AppKit_NS_NSDatePickerCell_NSDatePickerCell, setTextColor);
PHP_METHOD(AppKit_NS_NSDatePickerCell_NSDatePickerCell, datePickerMode);
PHP_METHOD(AppKit_NS_NSDatePickerCell_NSDatePickerCell, setDatePickerMode);
PHP_METHOD(AppKit_NS_NSDatePickerCell_NSDatePickerCell, datePickerElements);
PHP_METHOD(AppKit_NS_NSDatePickerCell_NSDatePickerCell, setDatePickerElements);
PHP_METHOD(AppKit_NS_NSDatePickerCell_NSDatePickerCell, calendar);
PHP_METHOD(AppKit_NS_NSDatePickerCell_NSDatePickerCell, setCalendar);
PHP_METHOD(AppKit_NS_NSDatePickerCell_NSDatePickerCell, locale);
PHP_METHOD(AppKit_NS_NSDatePickerCell_NSDatePickerCell, setLocale);
PHP_METHOD(AppKit_NS_NSDatePickerCell_NSDatePickerCell, timeZone);
PHP_METHOD(AppKit_NS_NSDatePickerCell_NSDatePickerCell, setTimeZone);
PHP_METHOD(AppKit_NS_NSDatePickerCell_NSDatePickerCell, dateValue);
PHP_METHOD(AppKit_NS_NSDatePickerCell_NSDatePickerCell, setDateValue);
PHP_METHOD(AppKit_NS_NSDatePickerCell_NSDatePickerCell, timeInterval);
PHP_METHOD(AppKit_NS_NSDatePickerCell_NSDatePickerCell, setTimeInterval);
PHP_METHOD(AppKit_NS_NSDatePickerCell_NSDatePickerCell, minDate);
PHP_METHOD(AppKit_NS_NSDatePickerCell_NSDatePickerCell, setMinDate);
PHP_METHOD(AppKit_NS_NSDatePickerCell_NSDatePickerCell, maxDate);
PHP_METHOD(AppKit_NS_NSDatePickerCell_NSDatePickerCell, setMaxDate);
PHP_METHOD(AppKit_NS_NSDatePickerCell_NSDatePickerCell, delegate);
PHP_METHOD(AppKit_NS_NSDatePickerCell_NSDatePickerCell, setDelegate);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsdatepickercell_nsdatepickercell_inittextcell, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, string_, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsdatepickercell_nsdatepickercell_datepickerstyle, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsdatepickercell_nsdatepickercell_setdatepickerstyle, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, datePickerStyle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsdatepickercell_nsdatepickercell_drawsbackground, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsdatepickercell_nsdatepickercell_setdrawsbackground, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, drawsBackground, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsdatepickercell_nsdatepickercell_backgroundcolor, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsdatepickercell_nsdatepickercell_setbackgroundcolor, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, backgroundColor, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsdatepickercell_nsdatepickercell_textcolor, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsdatepickercell_nsdatepickercell_settextcolor, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, textColor, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsdatepickercell_nsdatepickercell_datepickermode, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsdatepickercell_nsdatepickercell_setdatepickermode, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, datePickerMode, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsdatepickercell_nsdatepickercell_datepickerelements, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsdatepickercell_nsdatepickercell_setdatepickerelements, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, datePickerElements, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsdatepickercell_nsdatepickercell_calendar, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsdatepickercell_nsdatepickercell_setcalendar, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, calendar, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsdatepickercell_nsdatepickercell_locale, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsdatepickercell_nsdatepickercell_setlocale, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, locale, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsdatepickercell_nsdatepickercell_timezone, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsdatepickercell_nsdatepickercell_settimezone, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, timeZone, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsdatepickercell_nsdatepickercell_datevalue, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsdatepickercell_nsdatepickercell_setdatevalue, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, dateValue, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsdatepickercell_nsdatepickercell_timeinterval, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsdatepickercell_nsdatepickercell_settimeinterval, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, timeInterval, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsdatepickercell_nsdatepickercell_mindate, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsdatepickercell_nsdatepickercell_setmindate, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, minDate, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsdatepickercell_nsdatepickercell_maxdate, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsdatepickercell_nsdatepickercell_setmaxdate, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, maxDate, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsdatepickercell_nsdatepickercell_delegate, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsdatepickercell_nsdatepickercell_setdelegate, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, delegate, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nsdatepickercell_nsdatepickercell_method_entry) {
	PHP_ME(AppKit_NS_NSDatePickerCell_NSDatePickerCell, initTextCell, arginfo_appkit_ns_nsdatepickercell_nsdatepickercell_inittextcell, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSDatePickerCell_NSDatePickerCell, datePickerStyle, arginfo_appkit_ns_nsdatepickercell_nsdatepickercell_datepickerstyle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSDatePickerCell_NSDatePickerCell, setDatePickerStyle, arginfo_appkit_ns_nsdatepickercell_nsdatepickercell_setdatepickerstyle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSDatePickerCell_NSDatePickerCell, drawsBackground, arginfo_appkit_ns_nsdatepickercell_nsdatepickercell_drawsbackground, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSDatePickerCell_NSDatePickerCell, setDrawsBackground, arginfo_appkit_ns_nsdatepickercell_nsdatepickercell_setdrawsbackground, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSDatePickerCell_NSDatePickerCell, backgroundColor, arginfo_appkit_ns_nsdatepickercell_nsdatepickercell_backgroundcolor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSDatePickerCell_NSDatePickerCell, setBackgroundColor, arginfo_appkit_ns_nsdatepickercell_nsdatepickercell_setbackgroundcolor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSDatePickerCell_NSDatePickerCell, textColor, arginfo_appkit_ns_nsdatepickercell_nsdatepickercell_textcolor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSDatePickerCell_NSDatePickerCell, setTextColor, arginfo_appkit_ns_nsdatepickercell_nsdatepickercell_settextcolor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSDatePickerCell_NSDatePickerCell, datePickerMode, arginfo_appkit_ns_nsdatepickercell_nsdatepickercell_datepickermode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSDatePickerCell_NSDatePickerCell, setDatePickerMode, arginfo_appkit_ns_nsdatepickercell_nsdatepickercell_setdatepickermode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSDatePickerCell_NSDatePickerCell, datePickerElements, arginfo_appkit_ns_nsdatepickercell_nsdatepickercell_datepickerelements, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSDatePickerCell_NSDatePickerCell, setDatePickerElements, arginfo_appkit_ns_nsdatepickercell_nsdatepickercell_setdatepickerelements, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSDatePickerCell_NSDatePickerCell, calendar, arginfo_appkit_ns_nsdatepickercell_nsdatepickercell_calendar, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSDatePickerCell_NSDatePickerCell, setCalendar, arginfo_appkit_ns_nsdatepickercell_nsdatepickercell_setcalendar, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSDatePickerCell_NSDatePickerCell, locale, arginfo_appkit_ns_nsdatepickercell_nsdatepickercell_locale, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSDatePickerCell_NSDatePickerCell, setLocale, arginfo_appkit_ns_nsdatepickercell_nsdatepickercell_setlocale, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSDatePickerCell_NSDatePickerCell, timeZone, arginfo_appkit_ns_nsdatepickercell_nsdatepickercell_timezone, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSDatePickerCell_NSDatePickerCell, setTimeZone, arginfo_appkit_ns_nsdatepickercell_nsdatepickercell_settimezone, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSDatePickerCell_NSDatePickerCell, dateValue, arginfo_appkit_ns_nsdatepickercell_nsdatepickercell_datevalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSDatePickerCell_NSDatePickerCell, setDateValue, arginfo_appkit_ns_nsdatepickercell_nsdatepickercell_setdatevalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSDatePickerCell_NSDatePickerCell, timeInterval, arginfo_appkit_ns_nsdatepickercell_nsdatepickercell_timeinterval, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSDatePickerCell_NSDatePickerCell, setTimeInterval, arginfo_appkit_ns_nsdatepickercell_nsdatepickercell_settimeinterval, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSDatePickerCell_NSDatePickerCell, minDate, arginfo_appkit_ns_nsdatepickercell_nsdatepickercell_mindate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSDatePickerCell_NSDatePickerCell, setMinDate, arginfo_appkit_ns_nsdatepickercell_nsdatepickercell_setmindate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSDatePickerCell_NSDatePickerCell, maxDate, arginfo_appkit_ns_nsdatepickercell_nsdatepickercell_maxdate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSDatePickerCell_NSDatePickerCell, setMaxDate, arginfo_appkit_ns_nsdatepickercell_nsdatepickercell_setmaxdate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSDatePickerCell_NSDatePickerCell, delegate, arginfo_appkit_ns_nsdatepickercell_nsdatepickercell_delegate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSDatePickerCell_NSDatePickerCell, setDelegate, arginfo_appkit_ns_nsdatepickercell_nsdatepickercell_setdelegate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
