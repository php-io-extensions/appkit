
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
#include "kernel/memory.h"
#include "kernel/operators.h"
#include "kernel/object.h"

#include "ns-textfieldcell.h"
#include <stdint.h>



/**
 * NSTextFieldCell — cell used by NSTextField.
 */
ZEPHIR_INIT_CLASS(AppKit_NS_NSTextFieldCell_NSTextFieldCell)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSTextFieldCell, NSTextFieldCell, appkit, ns_nstextfieldcell_nstextfieldcell, appkit_ns_nstextfieldcell_nstextfieldcell_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSTextFieldCell_NSTextFieldCell, createText)
{
	zend_long handle = 0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *value_param = NULL;
	zval value;

	ZVAL_UNDEF(&value);
	ZEND_PARSE_PARAMETERS_START(0, 1)
		Z_PARAM_OPTIONAL
		Z_PARAM_STR(value)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 0, 1, &value_param);
	if (!value_param) {
		ZEPHIR_INIT_VAR(&value);
		ZVAL_STRING(&value, "");
	} else {
		zephir_get_strval(&value, value_param);
	}
	
            handle = (zend_long) ns_textfieldcell_create_text(Z_STRVAL(value));
        
	RETURN_MM_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSTextFieldCell_NSTextFieldCell, wrap)
{
	zval *nsTextFieldCellPtr_param = NULL;
	zend_long nsTextFieldCellPtr, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(nsTextFieldCellPtr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &nsTextFieldCellPtr_param);
	
            handle = (zend_long) ns_textfieldcell_wrap((void *)(uintptr_t) nsTextFieldCellPtr);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSTextFieldCell_NSTextFieldCell, destroy)
{
	zval *cell_param = NULL;
	zend_long cell;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(cell)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &cell_param);
	
            ns_textfieldcell_destroy((uintptr_t) cell);
        
}

PHP_METHOD(AppKit_NS_NSTextFieldCell_NSTextFieldCell, nsTextFieldCell)
{
	zval *cell_param = NULL;
	zend_long cell, ptr = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(cell)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &cell_param);
	
            ptr = (zend_long)(uintptr_t) ns_textfieldcell_nstextfieldcell((uintptr_t) cell);
        
	RETURN_LONG(ptr);
}

PHP_METHOD(AppKit_NS_NSTextFieldCell_NSTextFieldCell, setTitle)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval title;
	zval *cell_param = NULL, *title_param = NULL;
	zend_long cell;

	ZVAL_UNDEF(&title);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(cell)
		Z_PARAM_STR(title)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &cell_param, &title_param);
	zephir_get_strval(&title, title_param);
	
            ns_textfieldcell_set_title((uintptr_t) cell, Z_STRVAL(title));
        
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSTextFieldCell_NSTextFieldCell, getTitle)
{
	zval *cell_param = NULL;
	zend_long cell;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(cell)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &cell_param);
	
            char buf[4096];
            buf[0] = '\0';
            if (ns_textfieldcell_get_title((uintptr_t) cell, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        
	RETURN_STRING("");
}

PHP_METHOD(AppKit_NS_NSTextFieldCell_NSTextFieldCell, setStringValue)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval value;
	zval *cell_param = NULL, *value_param = NULL;
	zend_long cell;

	ZVAL_UNDEF(&value);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(cell)
		Z_PARAM_STR(value)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &cell_param, &value_param);
	zephir_get_strval(&value, value_param);
	
            ns_textfieldcell_set_string((uintptr_t) cell, Z_STRVAL(value));
        
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSTextFieldCell_NSTextFieldCell, getStringValue)
{
	zval *cell_param = NULL;
	zend_long cell;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(cell)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &cell_param);
	
            char buf[4096];
            buf[0] = '\0';
            if (ns_textfieldcell_get_string((uintptr_t) cell, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        
	RETURN_STRING("");
}

PHP_METHOD(AppKit_NS_NSTextFieldCell_NSTextFieldCell, setBackgroundColor)
{
	zval *cell_param = NULL, *color_param = NULL;
	zend_long cell, color;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(cell)
		Z_PARAM_LONG(color)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &cell_param, &color_param);
	
            ns_textfieldcell_set_background_color((uintptr_t) cell, (uintptr_t) color);
        
}

PHP_METHOD(AppKit_NS_NSTextFieldCell_NSTextFieldCell, setDrawsBackground)
{
	zend_bool drawsBackground;
	zval *cell_param = NULL, *drawsBackground_param = NULL;
	zend_long cell;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(cell)
		Z_PARAM_BOOL(drawsBackground)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &cell_param, &drawsBackground_param);
	
            ns_textfieldcell_set_draws_background((uintptr_t) cell, drawsBackground ? 1 : 0);
        
}

PHP_METHOD(AppKit_NS_NSTextFieldCell_NSTextFieldCell, drawsBackground)
{
	zend_bool result = 0;
	zval *cell_param = NULL;
	zend_long cell;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(cell)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &cell_param);
	
            result = ns_textfieldcell_draws_background((uintptr_t) cell) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSTextFieldCell_NSTextFieldCell, setTextColor)
{
	zval *cell_param = NULL, *color_param = NULL;
	zend_long cell, color;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(cell)
		Z_PARAM_LONG(color)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &cell_param, &color_param);
	
            ns_textfieldcell_set_text_color((uintptr_t) cell, (uintptr_t) color);
        
}

PHP_METHOD(AppKit_NS_NSTextFieldCell_NSTextFieldCell, setBezelStyle)
{
	zval *cell_param = NULL, *style_param = NULL;
	zend_long cell, style;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(cell)
		Z_PARAM_LONG(style)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &cell_param, &style_param);
	
            ns_textfieldcell_set_bezel_style((uintptr_t) cell, (int) style);
        
}

PHP_METHOD(AppKit_NS_NSTextFieldCell_NSTextFieldCell, getBezelStyle)
{
	zval *cell_param = NULL;
	zend_long cell, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(cell)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &cell_param);
	
            value = (zend_long) ns_textfieldcell_get_bezel_style((uintptr_t) cell);
        
	RETURN_LONG(value);
}

PHP_METHOD(AppKit_NS_NSTextFieldCell_NSTextFieldCell, setPlaceholderString)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval placeholder;
	zval *cell_param = NULL, *placeholder_param = NULL;
	zend_long cell;

	ZVAL_UNDEF(&placeholder);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(cell)
		Z_PARAM_STR(placeholder)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &cell_param, &placeholder_param);
	zephir_get_strval(&placeholder, placeholder_param);
	
            ns_textfieldcell_set_placeholder_string((uintptr_t) cell, Z_STRVAL(placeholder));
        
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSTextFieldCell_NSTextFieldCell, getPlaceholderString)
{
	zval *cell_param = NULL;
	zend_long cell;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(cell)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &cell_param);
	
            char buf[4096];
            buf[0] = '\0';
            if (ns_textfieldcell_get_placeholder_string((uintptr_t) cell, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        
	RETURN_STRING("");
}

PHP_METHOD(AppKit_NS_NSTextFieldCell_NSTextFieldCell, setWantsNotificationForMarkedText)
{
	zend_bool flag;
	zval *cell_param = NULL, *flag_param = NULL;
	zend_long cell;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(cell)
		Z_PARAM_BOOL(flag)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &cell_param, &flag_param);
	
            ns_textfieldcell_set_wants_notification_for_marked_text((uintptr_t) cell, flag ? 1 : 0);
        
}

