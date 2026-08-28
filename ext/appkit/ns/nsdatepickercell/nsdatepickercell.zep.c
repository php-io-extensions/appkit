
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
#include "src/ns-datepickercell.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(AppKit_NS_NSDatePickerCell_NSDatePickerCell)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSDatePickerCell, NSDatePickerCell, appkit, ns_nsdatepickercell_nsdatepickercell, appkit_ns_nsdatepickercell_nsdatepickercell_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSDatePickerCell_NSDatePickerCell, initTextCell)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *string__param = NULL;
	zval string_;

	ZVAL_UNDEF(&string_);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(string_)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &string__param);
	zephir_get_strval(&string_, string__param);
	RETURN_MM_LONG(ns_nsdatepickercell_init_text_cell(&string_));
}

PHP_METHOD(AppKit_NS_NSDatePickerCell_NSDatePickerCell, datePickerStyle)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsdatepickercell_date_picker_style(&_0));
}

PHP_METHOD(AppKit_NS_NSDatePickerCell_NSDatePickerCell, setDatePickerStyle)
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
	ns_nsdatepickercell_set_date_picker_style(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSDatePickerCell_NSDatePickerCell, drawsBackground)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nsdatepickercell_draws_background(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSDatePickerCell_NSDatePickerCell, setDrawsBackground)
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
	ns_nsdatepickercell_set_draws_background(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSDatePickerCell_NSDatePickerCell, backgroundColor)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsdatepickercell_background_color(&_0));
}

PHP_METHOD(AppKit_NS_NSDatePickerCell_NSDatePickerCell, setBackgroundColor)
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
	ns_nsdatepickercell_set_background_color(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSDatePickerCell_NSDatePickerCell, textColor)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsdatepickercell_text_color(&_0));
}

PHP_METHOD(AppKit_NS_NSDatePickerCell_NSDatePickerCell, setTextColor)
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
	ns_nsdatepickercell_set_text_color(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSDatePickerCell_NSDatePickerCell, datePickerMode)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsdatepickercell_date_picker_mode(&_0));
}

PHP_METHOD(AppKit_NS_NSDatePickerCell_NSDatePickerCell, setDatePickerMode)
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
	ns_nsdatepickercell_set_date_picker_mode(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSDatePickerCell_NSDatePickerCell, datePickerElements)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsdatepickercell_date_picker_elements(&_0));
}

PHP_METHOD(AppKit_NS_NSDatePickerCell_NSDatePickerCell, setDatePickerElements)
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
	ns_nsdatepickercell_set_date_picker_elements(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSDatePickerCell_NSDatePickerCell, calendar)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsdatepickercell_calendar(&_0));
}

PHP_METHOD(AppKit_NS_NSDatePickerCell_NSDatePickerCell, setCalendar)
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
	ns_nsdatepickercell_set_calendar(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSDatePickerCell_NSDatePickerCell, locale)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsdatepickercell_locale(&_0));
}

PHP_METHOD(AppKit_NS_NSDatePickerCell_NSDatePickerCell, setLocale)
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
	ns_nsdatepickercell_set_locale(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSDatePickerCell_NSDatePickerCell, timeZone)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsdatepickercell_time_zone(&_0));
}

PHP_METHOD(AppKit_NS_NSDatePickerCell_NSDatePickerCell, setTimeZone)
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
	ns_nsdatepickercell_set_time_zone(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSDatePickerCell_NSDatePickerCell, dateValue)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsdatepickercell_date_value(&_0));
}

PHP_METHOD(AppKit_NS_NSDatePickerCell_NSDatePickerCell, setDateValue)
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
	ns_nsdatepickercell_set_date_value(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSDatePickerCell_NSDatePickerCell, timeInterval)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(ns_nsdatepickercell_time_interval(&_0));
}

PHP_METHOD(AppKit_NS_NSDatePickerCell_NSDatePickerCell, setTimeInterval)
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
	ns_nsdatepickercell_set_time_interval(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSDatePickerCell_NSDatePickerCell, minDate)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsdatepickercell_min_date(&_0));
}

PHP_METHOD(AppKit_NS_NSDatePickerCell_NSDatePickerCell, setMinDate)
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
	ns_nsdatepickercell_set_min_date(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSDatePickerCell_NSDatePickerCell, maxDate)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsdatepickercell_max_date(&_0));
}

PHP_METHOD(AppKit_NS_NSDatePickerCell_NSDatePickerCell, setMaxDate)
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
	ns_nsdatepickercell_set_max_date(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSDatePickerCell_NSDatePickerCell, delegate)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsdatepickercell_delegate(&_0));
}

PHP_METHOD(AppKit_NS_NSDatePickerCell_NSDatePickerCell, setDelegate)
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
	ns_nsdatepickercell_set_delegate(&_0, &_1);
}

