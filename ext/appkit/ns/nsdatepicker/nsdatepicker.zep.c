
#ifdef HAVE_CONFIG_H
#include "../../../ext_config.h"
#endif

#include <php.h>
#include "../../../php_ext.h"
#include "../../../ext.h"

#include <Zend/zend_operators.h>
#include <Zend/zend_exceptions.h>
#include <Zend/zend_interfaces.h>

#include "kernel/main.h"
#include "src/ns-datepicker.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(AppKit_NS_NSDatePicker_NSDatePicker)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSDatePicker, NSDatePicker, appkit, ns_nsdatepicker_nsdatepicker, appkit_ns_nsdatepicker_nsdatepicker_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSDatePicker_NSDatePicker, initWithFrame)
{
	zval *x_param = NULL, *y_param = NULL, *width_param = NULL, *height_param = NULL, _0, _1, _2, _3;
	double x, y, width, height;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_ZVAL(x)
		Z_PARAM_ZVAL(y)
		Z_PARAM_ZVAL(width)
		Z_PARAM_ZVAL(height)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &x_param, &y_param, &width_param, &height_param);
	x = zephir_get_doubleval(x_param);
	y = zephir_get_doubleval(y_param);
	width = zephir_get_doubleval(width_param);
	height = zephir_get_doubleval(height_param);
	ZVAL_DOUBLE(&_0, x);
	ZVAL_DOUBLE(&_1, y);
	ZVAL_DOUBLE(&_2, width);
	ZVAL_DOUBLE(&_3, height);
	RETURN_LONG(ns_nsdatepicker_init_with_frame(&_0, &_1, &_2, &_3));
}

PHP_METHOD(AppKit_NS_NSDatePicker_NSDatePicker, datePickerStyle)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsdatepicker_date_picker_style(&_0));
}

PHP_METHOD(AppKit_NS_NSDatePicker_NSDatePicker, setDatePickerStyle)
{
	zval *handle_param = NULL, *datePickerStyle_param = NULL, _0, _1;
	zend_long handle, datePickerStyle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(datePickerStyle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &datePickerStyle_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, datePickerStyle);
	ns_nsdatepicker_set_date_picker_style(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSDatePicker_NSDatePicker, isBezeled)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nsdatepicker_is_bezeled(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSDatePicker_NSDatePicker, setBezeled)
{
	zend_bool bezeled;
	zval *handle_param = NULL, *bezeled_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(bezeled)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &bezeled_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (bezeled ? 1 : 0));
	ns_nsdatepicker_set_bezeled(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSDatePicker_NSDatePicker, isBordered)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nsdatepicker_is_bordered(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSDatePicker_NSDatePicker, setBordered)
{
	zend_bool bordered;
	zval *handle_param = NULL, *bordered_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(bordered)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &bordered_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (bordered ? 1 : 0));
	ns_nsdatepicker_set_bordered(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSDatePicker_NSDatePicker, drawsBackground)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nsdatepicker_draws_background(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSDatePicker_NSDatePicker, setDrawsBackground)
{
	zend_bool drawsBackground;
	zval *handle_param = NULL, *drawsBackground_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(drawsBackground)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &drawsBackground_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (drawsBackground ? 1 : 0));
	ns_nsdatepicker_set_draws_background(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSDatePicker_NSDatePicker, backgroundColor)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsdatepicker_background_color(&_0));
}

PHP_METHOD(AppKit_NS_NSDatePicker_NSDatePicker, setBackgroundColor)
{
	zval *handle_param = NULL, *backgroundColor_param = NULL, _0, _1;
	zend_long handle, backgroundColor;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(backgroundColor)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &backgroundColor_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, backgroundColor);
	ns_nsdatepicker_set_background_color(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSDatePicker_NSDatePicker, textColor)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsdatepicker_text_color(&_0));
}

PHP_METHOD(AppKit_NS_NSDatePicker_NSDatePicker, setTextColor)
{
	zval *handle_param = NULL, *textColor_param = NULL, _0, _1;
	zend_long handle, textColor;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(textColor)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &textColor_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, textColor);
	ns_nsdatepicker_set_text_color(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSDatePicker_NSDatePicker, datePickerMode)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsdatepicker_date_picker_mode(&_0));
}

PHP_METHOD(AppKit_NS_NSDatePicker_NSDatePicker, setDatePickerMode)
{
	zval *handle_param = NULL, *datePickerMode_param = NULL, _0, _1;
	zend_long handle, datePickerMode;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(datePickerMode)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &datePickerMode_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, datePickerMode);
	ns_nsdatepicker_set_date_picker_mode(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSDatePicker_NSDatePicker, datePickerElements)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsdatepicker_date_picker_elements(&_0));
}

PHP_METHOD(AppKit_NS_NSDatePicker_NSDatePicker, setDatePickerElements)
{
	zval *handle_param = NULL, *datePickerElements_param = NULL, _0, _1;
	zend_long handle, datePickerElements;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(datePickerElements)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &datePickerElements_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, datePickerElements);
	ns_nsdatepicker_set_date_picker_elements(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSDatePicker_NSDatePicker, calendar)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsdatepicker_calendar(&_0));
}

PHP_METHOD(AppKit_NS_NSDatePicker_NSDatePicker, setCalendar)
{
	zval *handle_param = NULL, *calendar_param = NULL, _0, _1;
	zend_long handle, calendar;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(calendar)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &calendar_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, calendar);
	ns_nsdatepicker_set_calendar(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSDatePicker_NSDatePicker, locale)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsdatepicker_locale(&_0));
}

PHP_METHOD(AppKit_NS_NSDatePicker_NSDatePicker, setLocale)
{
	zval *handle_param = NULL, *locale_param = NULL, _0, _1;
	zend_long handle, locale;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(locale)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &locale_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, locale);
	ns_nsdatepicker_set_locale(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSDatePicker_NSDatePicker, timeZone)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsdatepicker_time_zone(&_0));
}

PHP_METHOD(AppKit_NS_NSDatePicker_NSDatePicker, setTimeZone)
{
	zval *handle_param = NULL, *timeZone_param = NULL, _0, _1;
	zend_long handle, timeZone;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(timeZone)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &timeZone_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, timeZone);
	ns_nsdatepicker_set_time_zone(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSDatePicker_NSDatePicker, dateValue)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsdatepicker_date_value(&_0));
}

PHP_METHOD(AppKit_NS_NSDatePicker_NSDatePicker, setDateValue)
{
	zval *handle_param = NULL, *dateValue_param = NULL, _0, _1;
	zend_long handle, dateValue;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(dateValue)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &dateValue_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, dateValue);
	ns_nsdatepicker_set_date_value(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSDatePicker_NSDatePicker, timeInterval)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(ns_nsdatepicker_time_interval(&_0));
}

PHP_METHOD(AppKit_NS_NSDatePicker_NSDatePicker, setTimeInterval)
{
	double timeInterval;
	zval *handle_param = NULL, *timeInterval_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(timeInterval)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &timeInterval_param);
	timeInterval = zephir_get_doubleval(timeInterval_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, timeInterval);
	ns_nsdatepicker_set_time_interval(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSDatePicker_NSDatePicker, minDate)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsdatepicker_min_date(&_0));
}

PHP_METHOD(AppKit_NS_NSDatePicker_NSDatePicker, setMinDate)
{
	zval *handle_param = NULL, *minDate_param = NULL, _0, _1;
	zend_long handle, minDate;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(minDate)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &minDate_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, minDate);
	ns_nsdatepicker_set_min_date(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSDatePicker_NSDatePicker, maxDate)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsdatepicker_max_date(&_0));
}

PHP_METHOD(AppKit_NS_NSDatePicker_NSDatePicker, setMaxDate)
{
	zval *handle_param = NULL, *maxDate_param = NULL, _0, _1;
	zend_long handle, maxDate;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(maxDate)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &maxDate_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, maxDate);
	ns_nsdatepicker_set_max_date(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSDatePicker_NSDatePicker, presentsCalendarOverlay)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nsdatepicker_presents_calendar_overlay(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSDatePicker_NSDatePicker, setPresentsCalendarOverlay)
{
	zend_bool presentsCalendarOverlay;
	zval *handle_param = NULL, *presentsCalendarOverlay_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(presentsCalendarOverlay)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &presentsCalendarOverlay_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (presentsCalendarOverlay ? 1 : 0));
	ns_nsdatepicker_set_presents_calendar_overlay(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSDatePicker_NSDatePicker, delegate)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsdatepicker_delegate(&_0));
}

PHP_METHOD(AppKit_NS_NSDatePicker_NSDatePicker, setDelegate)
{
	zval *handle_param = NULL, *delegate_param = NULL, _0, _1;
	zend_long handle, delegate;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(delegate)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &delegate_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, delegate);
	ns_nsdatepicker_set_delegate(&_0, &_1);
}

