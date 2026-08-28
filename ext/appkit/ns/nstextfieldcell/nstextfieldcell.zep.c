
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
#include "src/ns-textfieldcell.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(AppKit_NS_NSTextFieldCell_NSTextFieldCell)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSTextFieldCell, NSTextFieldCell, appkit, ns_nstextfieldcell_nstextfieldcell, appkit_ns_nstextfieldcell_nstextfieldcell_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSTextFieldCell_NSTextFieldCell, initTextCell)
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
	RETURN_MM_LONG(ns_nstextfieldcell_init_text_cell(&string_));
}

PHP_METHOD(AppKit_NS_NSTextFieldCell_NSTextFieldCell, backgroundColor)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nstextfieldcell_background_color(&_0));
}

PHP_METHOD(AppKit_NS_NSTextFieldCell_NSTextFieldCell, setBackgroundColor)
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
	ns_nstextfieldcell_set_background_color(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTextFieldCell_NSTextFieldCell, drawsBackground)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nstextfieldcell_draws_background(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSTextFieldCell_NSTextFieldCell, setDrawsBackground)
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
	ns_nstextfieldcell_set_draws_background(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTextFieldCell_NSTextFieldCell, textColor)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nstextfieldcell_text_color(&_0));
}

PHP_METHOD(AppKit_NS_NSTextFieldCell_NSTextFieldCell, setTextColor)
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
	ns_nstextfieldcell_set_text_color(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTextFieldCell_NSTextFieldCell, setUpFieldEditorAttributes)
{
	zval *handle_param = NULL, *textObj_param = NULL, _0, _1;
	zend_long handle, textObj;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(textObj)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &textObj_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, textObj);
	RETURN_LONG(ns_nstextfieldcell_set_up_field_editor_attributes(&_0, &_1));
}

PHP_METHOD(AppKit_NS_NSTextFieldCell_NSTextFieldCell, bezelStyle)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nstextfieldcell_bezel_style(&_0));
}

PHP_METHOD(AppKit_NS_NSTextFieldCell_NSTextFieldCell, setBezelStyle)
{
	zval *handle_param = NULL, *bezelStyle_param = NULL, _0, _1;
	zend_long handle, bezelStyle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(bezelStyle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &bezelStyle_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, bezelStyle);
	ns_nstextfieldcell_set_bezel_style(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTextFieldCell_NSTextFieldCell, placeholderString)
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
	ns_nstextfieldcell_placeholder_string(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSTextFieldCell_NSTextFieldCell, setPlaceholderString)
{
	zval *handle_param = NULL, *placeholderString = NULL, placeholderString_sub, _0;
	zend_long handle;

	ZVAL_UNDEF(&placeholderString_sub);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(placeholderString)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &placeholderString);
	ZVAL_LONG(&_0, handle);
	ns_nstextfieldcell_set_placeholder_string(&_0, placeholderString);
}

PHP_METHOD(AppKit_NS_NSTextFieldCell_NSTextFieldCell, setWantsNotificationForMarkedText)
{
	zend_bool flag;
	zval *handle_param = NULL, *flag_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(flag)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &flag_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (flag ? 1 : 0));
	ns_nstextfieldcell_set_wants_notification_for_marked_text(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTextFieldCell_NSTextFieldCell, allowedInputSourceLocales)
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
	ns_nstextfieldcell_allowed_input_source_locales(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSTextFieldCell_NSTextFieldCell, setAllowedInputSourceLocales)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval allowedInputSourceLocales;
	zval *handle_param = NULL, *allowedInputSourceLocales_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&allowedInputSourceLocales);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ARRAY(allowedInputSourceLocales)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &allowedInputSourceLocales_param);
	zephir_get_arrval(&allowedInputSourceLocales, allowedInputSourceLocales_param);
	ZVAL_LONG(&_0, handle);
	ns_nstextfieldcell_set_allowed_input_source_locales(&_0, &allowedInputSourceLocales);
	ZEPHIR_MM_RESTORE();
}

