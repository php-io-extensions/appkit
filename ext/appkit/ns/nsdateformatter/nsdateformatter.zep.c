
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
#include "src/ns-dateformatter.h"
#include "kernel/object.h"
#include "kernel/memory.h"
#include "kernel/operators.h"


ZEPHIR_INIT_CLASS(AppKit_NS_NSDateFormatter_NSDateFormatter)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSDateFormatter, NSDateFormatter, appkit, ns_nsdateformatter_nsdateformatter, appkit_ns_nsdateformatter_nsdateformatter_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSDateFormatter_NSDateFormatter, init)
{

	RETURN_LONG(ns_nsdateformatter_init());
}

PHP_METHOD(AppKit_NS_NSDateFormatter_NSDateFormatter, stringFromDate)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *date_param = NULL, result, _0, _1;
	zend_long handle, date;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(date)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &date_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, date);
	ns_nsdateformatter_string_from_date(&result, &_0, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSDateFormatter_NSDateFormatter, dateFromString)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval string_;
	zval *handle_param = NULL, *string__param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&string_);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(string_)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &string__param);
	zephir_get_strval(&string_, string__param);
	ZVAL_LONG(&_0, handle);
	RETURN_MM_LONG(ns_nsdateformatter_date_from_string(&_0, &string_));
}

PHP_METHOD(AppKit_NS_NSDateFormatter_NSDateFormatter, localizedStringFromDateDateStyleTimeStyle)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *date_param = NULL, *dstyle_param = NULL, *tstyle_param = NULL, result, _0, _1, _2;
	zend_long date, dstyle, tstyle;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(date)
		Z_PARAM_LONG(dstyle)
		Z_PARAM_LONG(tstyle)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &date_param, &dstyle_param, &tstyle_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, date);
	ZVAL_LONG(&_1, dstyle);
	ZVAL_LONG(&_2, tstyle);
	ns_nsdateformatter_localized_string_from_date_date_style_time_style(&result, &_0, &_1, &_2);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSDateFormatter_NSDateFormatter, dateFormatFromTemplateOptionsLocale)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long opts;
	zval *tmplate_param = NULL, *opts_param = NULL, *locale = NULL, locale_sub, result, _0;
	zval tmplate;

	ZVAL_UNDEF(&tmplate);
	ZVAL_UNDEF(&locale_sub);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_STR(tmplate)
		Z_PARAM_LONG(opts)
		Z_PARAM_ZVAL(locale)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &tmplate_param, &opts_param, &locale);
	zephir_get_strval(&tmplate, tmplate_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, opts);
	ns_nsdateformatter_date_format_from_template_options_locale(&result, &tmplate, &_0, locale);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSDateFormatter_NSDateFormatter, defaultFormatterBehavior)
{

	RETURN_LONG(ns_nsdateformatter_default_formatter_behavior());
}

PHP_METHOD(AppKit_NS_NSDateFormatter_NSDateFormatter, setDefaultFormatterBehavior)
{
	zval *defaultFormatterBehavior_param = NULL, _0;
	zend_long defaultFormatterBehavior;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(defaultFormatterBehavior)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &defaultFormatterBehavior_param);
	ZVAL_LONG(&_0, defaultFormatterBehavior);
	ns_nsdateformatter_set_default_formatter_behavior(&_0);
}

PHP_METHOD(AppKit_NS_NSDateFormatter_NSDateFormatter, formattingContext)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsdateformatter_formatting_context(&_0));
}

PHP_METHOD(AppKit_NS_NSDateFormatter_NSDateFormatter, setFormattingContext)
{
	zval *handle_param = NULL, *formattingContext_param = NULL, _0, _1;
	zend_long handle, formattingContext;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(formattingContext)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &formattingContext_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, formattingContext);
	ns_nsdateformatter_set_formatting_context(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSDateFormatter_NSDateFormatter, setLocalizedDateFormatFromTemplate)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval dateFormatTemplate;
	zval *handle_param = NULL, *dateFormatTemplate_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&dateFormatTemplate);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(dateFormatTemplate)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &dateFormatTemplate_param);
	zephir_get_strval(&dateFormatTemplate, dateFormatTemplate_param);
	ZVAL_LONG(&_0, handle);
	ns_nsdateformatter_set_localized_date_format_from_template(&_0, &dateFormatTemplate);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSDateFormatter_NSDateFormatter, dateFormat)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &handle_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ns_nsdateformatter_date_format(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSDateFormatter_NSDateFormatter, setDateFormat)
{
	zval *handle_param = NULL, *dateFormat = NULL, dateFormat_sub, _0;
	zend_long handle;

	ZVAL_UNDEF(&dateFormat_sub);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(dateFormat)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &dateFormat);
	ZVAL_LONG(&_0, handle);
	ns_nsdateformatter_set_date_format(&_0, dateFormat);
}

PHP_METHOD(AppKit_NS_NSDateFormatter_NSDateFormatter, dateStyle)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsdateformatter_date_style(&_0));
}

PHP_METHOD(AppKit_NS_NSDateFormatter_NSDateFormatter, setDateStyle)
{
	zval *handle_param = NULL, *dateStyle_param = NULL, _0, _1;
	zend_long handle, dateStyle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(dateStyle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &dateStyle_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, dateStyle);
	ns_nsdateformatter_set_date_style(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSDateFormatter_NSDateFormatter, timeStyle)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsdateformatter_time_style(&_0));
}

PHP_METHOD(AppKit_NS_NSDateFormatter_NSDateFormatter, setTimeStyle)
{
	zval *handle_param = NULL, *timeStyle_param = NULL, _0, _1;
	zend_long handle, timeStyle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(timeStyle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &timeStyle_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, timeStyle);
	ns_nsdateformatter_set_time_style(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSDateFormatter_NSDateFormatter, locale)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsdateformatter_locale(&_0));
}

PHP_METHOD(AppKit_NS_NSDateFormatter_NSDateFormatter, setLocale)
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
	ns_nsdateformatter_set_locale(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSDateFormatter_NSDateFormatter, generatesCalendarDates)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nsdateformatter_generates_calendar_dates(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSDateFormatter_NSDateFormatter, setGeneratesCalendarDates)
{
	zend_bool generatesCalendarDates;
	zval *handle_param = NULL, *generatesCalendarDates_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(generatesCalendarDates)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &generatesCalendarDates_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (generatesCalendarDates ? 1 : 0));
	ns_nsdateformatter_set_generates_calendar_dates(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSDateFormatter_NSDateFormatter, formatterBehavior)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsdateformatter_formatter_behavior(&_0));
}

PHP_METHOD(AppKit_NS_NSDateFormatter_NSDateFormatter, setFormatterBehavior)
{
	zval *handle_param = NULL, *formatterBehavior_param = NULL, _0, _1;
	zend_long handle, formatterBehavior;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(formatterBehavior)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &formatterBehavior_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, formatterBehavior);
	ns_nsdateformatter_set_formatter_behavior(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSDateFormatter_NSDateFormatter, timeZone)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsdateformatter_time_zone(&_0));
}

PHP_METHOD(AppKit_NS_NSDateFormatter_NSDateFormatter, setTimeZone)
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
	ns_nsdateformatter_set_time_zone(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSDateFormatter_NSDateFormatter, calendar)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsdateformatter_calendar(&_0));
}

PHP_METHOD(AppKit_NS_NSDateFormatter_NSDateFormatter, setCalendar)
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
	ns_nsdateformatter_set_calendar(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSDateFormatter_NSDateFormatter, isLenient)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nsdateformatter_is_lenient(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSDateFormatter_NSDateFormatter, setLenient)
{
	zend_bool lenient;
	zval *handle_param = NULL, *lenient_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(lenient)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &lenient_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (lenient ? 1 : 0));
	ns_nsdateformatter_set_lenient(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSDateFormatter_NSDateFormatter, twoDigitStartDate)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsdateformatter_two_digit_start_date(&_0));
}

PHP_METHOD(AppKit_NS_NSDateFormatter_NSDateFormatter, setTwoDigitStartDate)
{
	zval *handle_param = NULL, *twoDigitStartDate_param = NULL, _0, _1;
	zend_long handle, twoDigitStartDate;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(twoDigitStartDate)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &twoDigitStartDate_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, twoDigitStartDate);
	ns_nsdateformatter_set_two_digit_start_date(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSDateFormatter_NSDateFormatter, defaultDate)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsdateformatter_default_date(&_0));
}

PHP_METHOD(AppKit_NS_NSDateFormatter_NSDateFormatter, setDefaultDate)
{
	zval *handle_param = NULL, *defaultDate_param = NULL, _0, _1;
	zend_long handle, defaultDate;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(defaultDate)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &defaultDate_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, defaultDate);
	ns_nsdateformatter_set_default_date(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSDateFormatter_NSDateFormatter, eraSymbols)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &handle_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ns_nsdateformatter_era_symbols(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSDateFormatter_NSDateFormatter, setEraSymbols)
{
	zval *handle_param = NULL, *eraSymbols = NULL, eraSymbols_sub, _0;
	zend_long handle;

	ZVAL_UNDEF(&eraSymbols_sub);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(eraSymbols)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &eraSymbols);
	ZVAL_LONG(&_0, handle);
	ns_nsdateformatter_set_era_symbols(&_0, eraSymbols);
}

PHP_METHOD(AppKit_NS_NSDateFormatter_NSDateFormatter, monthSymbols)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &handle_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ns_nsdateformatter_month_symbols(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSDateFormatter_NSDateFormatter, setMonthSymbols)
{
	zval *handle_param = NULL, *monthSymbols = NULL, monthSymbols_sub, _0;
	zend_long handle;

	ZVAL_UNDEF(&monthSymbols_sub);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(monthSymbols)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &monthSymbols);
	ZVAL_LONG(&_0, handle);
	ns_nsdateformatter_set_month_symbols(&_0, monthSymbols);
}

PHP_METHOD(AppKit_NS_NSDateFormatter_NSDateFormatter, shortMonthSymbols)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &handle_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ns_nsdateformatter_short_month_symbols(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSDateFormatter_NSDateFormatter, setShortMonthSymbols)
{
	zval *handle_param = NULL, *shortMonthSymbols = NULL, shortMonthSymbols_sub, _0;
	zend_long handle;

	ZVAL_UNDEF(&shortMonthSymbols_sub);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(shortMonthSymbols)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &shortMonthSymbols);
	ZVAL_LONG(&_0, handle);
	ns_nsdateformatter_set_short_month_symbols(&_0, shortMonthSymbols);
}

PHP_METHOD(AppKit_NS_NSDateFormatter_NSDateFormatter, weekdaySymbols)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &handle_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ns_nsdateformatter_weekday_symbols(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSDateFormatter_NSDateFormatter, setWeekdaySymbols)
{
	zval *handle_param = NULL, *weekdaySymbols = NULL, weekdaySymbols_sub, _0;
	zend_long handle;

	ZVAL_UNDEF(&weekdaySymbols_sub);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(weekdaySymbols)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &weekdaySymbols);
	ZVAL_LONG(&_0, handle);
	ns_nsdateformatter_set_weekday_symbols(&_0, weekdaySymbols);
}

PHP_METHOD(AppKit_NS_NSDateFormatter_NSDateFormatter, shortWeekdaySymbols)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &handle_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ns_nsdateformatter_short_weekday_symbols(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSDateFormatter_NSDateFormatter, setShortWeekdaySymbols)
{
	zval *handle_param = NULL, *shortWeekdaySymbols = NULL, shortWeekdaySymbols_sub, _0;
	zend_long handle;

	ZVAL_UNDEF(&shortWeekdaySymbols_sub);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(shortWeekdaySymbols)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &shortWeekdaySymbols);
	ZVAL_LONG(&_0, handle);
	ns_nsdateformatter_set_short_weekday_symbols(&_0, shortWeekdaySymbols);
}

PHP_METHOD(AppKit_NS_NSDateFormatter_NSDateFormatter, AMSymbol)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &handle_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ns_nsdateformatter_am_symbol(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSDateFormatter_NSDateFormatter, setAMSymbol)
{
	zval *handle_param = NULL, *AMSymbol = NULL, AMSymbol_sub, _0;
	zend_long handle;

	ZVAL_UNDEF(&AMSymbol_sub);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(AMSymbol)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &AMSymbol);
	ZVAL_LONG(&_0, handle);
	ns_nsdateformatter_set_am_symbol(&_0, AMSymbol);
}

PHP_METHOD(AppKit_NS_NSDateFormatter_NSDateFormatter, PMSymbol)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &handle_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ns_nsdateformatter_pm_symbol(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSDateFormatter_NSDateFormatter, setPMSymbol)
{
	zval *handle_param = NULL, *PMSymbol = NULL, PMSymbol_sub, _0;
	zend_long handle;

	ZVAL_UNDEF(&PMSymbol_sub);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(PMSymbol)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &PMSymbol);
	ZVAL_LONG(&_0, handle);
	ns_nsdateformatter_set_pm_symbol(&_0, PMSymbol);
}

PHP_METHOD(AppKit_NS_NSDateFormatter_NSDateFormatter, longEraSymbols)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &handle_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ns_nsdateformatter_long_era_symbols(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSDateFormatter_NSDateFormatter, setLongEraSymbols)
{
	zval *handle_param = NULL, *longEraSymbols = NULL, longEraSymbols_sub, _0;
	zend_long handle;

	ZVAL_UNDEF(&longEraSymbols_sub);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(longEraSymbols)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &longEraSymbols);
	ZVAL_LONG(&_0, handle);
	ns_nsdateformatter_set_long_era_symbols(&_0, longEraSymbols);
}

PHP_METHOD(AppKit_NS_NSDateFormatter_NSDateFormatter, veryShortMonthSymbols)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &handle_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ns_nsdateformatter_very_short_month_symbols(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSDateFormatter_NSDateFormatter, setVeryShortMonthSymbols)
{
	zval *handle_param = NULL, *veryShortMonthSymbols = NULL, veryShortMonthSymbols_sub, _0;
	zend_long handle;

	ZVAL_UNDEF(&veryShortMonthSymbols_sub);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(veryShortMonthSymbols)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &veryShortMonthSymbols);
	ZVAL_LONG(&_0, handle);
	ns_nsdateformatter_set_very_short_month_symbols(&_0, veryShortMonthSymbols);
}

PHP_METHOD(AppKit_NS_NSDateFormatter_NSDateFormatter, standaloneMonthSymbols)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &handle_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ns_nsdateformatter_standalone_month_symbols(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSDateFormatter_NSDateFormatter, setStandaloneMonthSymbols)
{
	zval *handle_param = NULL, *standaloneMonthSymbols = NULL, standaloneMonthSymbols_sub, _0;
	zend_long handle;

	ZVAL_UNDEF(&standaloneMonthSymbols_sub);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(standaloneMonthSymbols)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &standaloneMonthSymbols);
	ZVAL_LONG(&_0, handle);
	ns_nsdateformatter_set_standalone_month_symbols(&_0, standaloneMonthSymbols);
}

PHP_METHOD(AppKit_NS_NSDateFormatter_NSDateFormatter, shortStandaloneMonthSymbols)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &handle_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ns_nsdateformatter_short_standalone_month_symbols(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSDateFormatter_NSDateFormatter, setShortStandaloneMonthSymbols)
{
	zval *handle_param = NULL, *shortStandaloneMonthSymbols = NULL, shortStandaloneMonthSymbols_sub, _0;
	zend_long handle;

	ZVAL_UNDEF(&shortStandaloneMonthSymbols_sub);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(shortStandaloneMonthSymbols)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &shortStandaloneMonthSymbols);
	ZVAL_LONG(&_0, handle);
	ns_nsdateformatter_set_short_standalone_month_symbols(&_0, shortStandaloneMonthSymbols);
}

PHP_METHOD(AppKit_NS_NSDateFormatter_NSDateFormatter, veryShortStandaloneMonthSymbols)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &handle_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ns_nsdateformatter_very_short_standalone_month_symbols(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSDateFormatter_NSDateFormatter, setVeryShortStandaloneMonthSymbols)
{
	zval *handle_param = NULL, *veryShortStandaloneMonthSymbols = NULL, veryShortStandaloneMonthSymbols_sub, _0;
	zend_long handle;

	ZVAL_UNDEF(&veryShortStandaloneMonthSymbols_sub);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(veryShortStandaloneMonthSymbols)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &veryShortStandaloneMonthSymbols);
	ZVAL_LONG(&_0, handle);
	ns_nsdateformatter_set_very_short_standalone_month_symbols(&_0, veryShortStandaloneMonthSymbols);
}

PHP_METHOD(AppKit_NS_NSDateFormatter_NSDateFormatter, veryShortWeekdaySymbols)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &handle_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ns_nsdateformatter_very_short_weekday_symbols(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSDateFormatter_NSDateFormatter, setVeryShortWeekdaySymbols)
{
	zval *handle_param = NULL, *veryShortWeekdaySymbols = NULL, veryShortWeekdaySymbols_sub, _0;
	zend_long handle;

	ZVAL_UNDEF(&veryShortWeekdaySymbols_sub);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(veryShortWeekdaySymbols)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &veryShortWeekdaySymbols);
	ZVAL_LONG(&_0, handle);
	ns_nsdateformatter_set_very_short_weekday_symbols(&_0, veryShortWeekdaySymbols);
}

PHP_METHOD(AppKit_NS_NSDateFormatter_NSDateFormatter, standaloneWeekdaySymbols)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &handle_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ns_nsdateformatter_standalone_weekday_symbols(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSDateFormatter_NSDateFormatter, setStandaloneWeekdaySymbols)
{
	zval *handle_param = NULL, *standaloneWeekdaySymbols = NULL, standaloneWeekdaySymbols_sub, _0;
	zend_long handle;

	ZVAL_UNDEF(&standaloneWeekdaySymbols_sub);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(standaloneWeekdaySymbols)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &standaloneWeekdaySymbols);
	ZVAL_LONG(&_0, handle);
	ns_nsdateformatter_set_standalone_weekday_symbols(&_0, standaloneWeekdaySymbols);
}

PHP_METHOD(AppKit_NS_NSDateFormatter_NSDateFormatter, shortStandaloneWeekdaySymbols)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &handle_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ns_nsdateformatter_short_standalone_weekday_symbols(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSDateFormatter_NSDateFormatter, setShortStandaloneWeekdaySymbols)
{
	zval *handle_param = NULL, *shortStandaloneWeekdaySymbols = NULL, shortStandaloneWeekdaySymbols_sub, _0;
	zend_long handle;

	ZVAL_UNDEF(&shortStandaloneWeekdaySymbols_sub);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(shortStandaloneWeekdaySymbols)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &shortStandaloneWeekdaySymbols);
	ZVAL_LONG(&_0, handle);
	ns_nsdateformatter_set_short_standalone_weekday_symbols(&_0, shortStandaloneWeekdaySymbols);
}

PHP_METHOD(AppKit_NS_NSDateFormatter_NSDateFormatter, veryShortStandaloneWeekdaySymbols)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &handle_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ns_nsdateformatter_very_short_standalone_weekday_symbols(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSDateFormatter_NSDateFormatter, setVeryShortStandaloneWeekdaySymbols)
{
	zval *handle_param = NULL, *veryShortStandaloneWeekdaySymbols = NULL, veryShortStandaloneWeekdaySymbols_sub, _0;
	zend_long handle;

	ZVAL_UNDEF(&veryShortStandaloneWeekdaySymbols_sub);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(veryShortStandaloneWeekdaySymbols)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &veryShortStandaloneWeekdaySymbols);
	ZVAL_LONG(&_0, handle);
	ns_nsdateformatter_set_very_short_standalone_weekday_symbols(&_0, veryShortStandaloneWeekdaySymbols);
}

PHP_METHOD(AppKit_NS_NSDateFormatter_NSDateFormatter, quarterSymbols)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &handle_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ns_nsdateformatter_quarter_symbols(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSDateFormatter_NSDateFormatter, setQuarterSymbols)
{
	zval *handle_param = NULL, *quarterSymbols = NULL, quarterSymbols_sub, _0;
	zend_long handle;

	ZVAL_UNDEF(&quarterSymbols_sub);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(quarterSymbols)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &quarterSymbols);
	ZVAL_LONG(&_0, handle);
	ns_nsdateformatter_set_quarter_symbols(&_0, quarterSymbols);
}

PHP_METHOD(AppKit_NS_NSDateFormatter_NSDateFormatter, shortQuarterSymbols)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &handle_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ns_nsdateformatter_short_quarter_symbols(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSDateFormatter_NSDateFormatter, setShortQuarterSymbols)
{
	zval *handle_param = NULL, *shortQuarterSymbols = NULL, shortQuarterSymbols_sub, _0;
	zend_long handle;

	ZVAL_UNDEF(&shortQuarterSymbols_sub);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(shortQuarterSymbols)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &shortQuarterSymbols);
	ZVAL_LONG(&_0, handle);
	ns_nsdateformatter_set_short_quarter_symbols(&_0, shortQuarterSymbols);
}

PHP_METHOD(AppKit_NS_NSDateFormatter_NSDateFormatter, standaloneQuarterSymbols)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &handle_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ns_nsdateformatter_standalone_quarter_symbols(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSDateFormatter_NSDateFormatter, setStandaloneQuarterSymbols)
{
	zval *handle_param = NULL, *standaloneQuarterSymbols = NULL, standaloneQuarterSymbols_sub, _0;
	zend_long handle;

	ZVAL_UNDEF(&standaloneQuarterSymbols_sub);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(standaloneQuarterSymbols)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &standaloneQuarterSymbols);
	ZVAL_LONG(&_0, handle);
	ns_nsdateformatter_set_standalone_quarter_symbols(&_0, standaloneQuarterSymbols);
}

PHP_METHOD(AppKit_NS_NSDateFormatter_NSDateFormatter, shortStandaloneQuarterSymbols)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &handle_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ns_nsdateformatter_short_standalone_quarter_symbols(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSDateFormatter_NSDateFormatter, setShortStandaloneQuarterSymbols)
{
	zval *handle_param = NULL, *shortStandaloneQuarterSymbols = NULL, shortStandaloneQuarterSymbols_sub, _0;
	zend_long handle;

	ZVAL_UNDEF(&shortStandaloneQuarterSymbols_sub);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(shortStandaloneQuarterSymbols)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &shortStandaloneQuarterSymbols);
	ZVAL_LONG(&_0, handle);
	ns_nsdateformatter_set_short_standalone_quarter_symbols(&_0, shortStandaloneQuarterSymbols);
}

PHP_METHOD(AppKit_NS_NSDateFormatter_NSDateFormatter, gregorianStartDate)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsdateformatter_gregorian_start_date(&_0));
}

PHP_METHOD(AppKit_NS_NSDateFormatter_NSDateFormatter, setGregorianStartDate)
{
	zval *handle_param = NULL, *gregorianStartDate_param = NULL, _0, _1;
	zend_long handle, gregorianStartDate;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(gregorianStartDate)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &gregorianStartDate_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, gregorianStartDate);
	ns_nsdateformatter_set_gregorian_start_date(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSDateFormatter_NSDateFormatter, doesRelativeDateFormatting)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nsdateformatter_does_relative_date_formatting(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSDateFormatter_NSDateFormatter, setDoesRelativeDateFormatting)
{
	zend_bool doesRelativeDateFormatting;
	zval *handle_param = NULL, *doesRelativeDateFormatting_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(doesRelativeDateFormatting)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &doesRelativeDateFormatting_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (doesRelativeDateFormatting ? 1 : 0));
	ns_nsdateformatter_set_does_relative_date_formatting(&_0, &_1);
}

