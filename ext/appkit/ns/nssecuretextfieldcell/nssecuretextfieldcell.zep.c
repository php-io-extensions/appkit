
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

#include "ns-securetextfieldcell.h"
#include <stdint.h>



/**
 * NSSecureTextFieldCell — secure text field cell (password bullets).
 */
ZEPHIR_INIT_CLASS(AppKit_NS_NSSecureTextFieldCell_NSSecureTextFieldCell)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSSecureTextFieldCell, NSSecureTextFieldCell, appkit, ns_nssecuretextfieldcell_nssecuretextfieldcell, appkit_ns_nssecuretextfieldcell_nssecuretextfieldcell_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSSecureTextFieldCell_NSSecureTextFieldCell, createText)
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
	
            handle = (zend_long) ns_securetextfieldcell_create_text(Z_STRVAL(value));
        
	RETURN_MM_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSSecureTextFieldCell_NSSecureTextFieldCell, wrap)
{
	zval *nsSecureTextFieldCellPtr_param = NULL;
	zend_long nsSecureTextFieldCellPtr, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(nsSecureTextFieldCellPtr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &nsSecureTextFieldCellPtr_param);
	
            handle = (zend_long) ns_securetextfieldcell_wrap((void *)(uintptr_t) nsSecureTextFieldCellPtr);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSSecureTextFieldCell_NSSecureTextFieldCell, destroy)
{
	zval *cell_param = NULL;
	zend_long cell;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(cell)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &cell_param);
	
            ns_securetextfieldcell_destroy((uintptr_t) cell);
        
}

PHP_METHOD(AppKit_NS_NSSecureTextFieldCell_NSSecureTextFieldCell, nsSecureTextFieldCell)
{
	zval *cell_param = NULL;
	zend_long cell, ptr = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(cell)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &cell_param);
	
            ptr = (zend_long)(uintptr_t) ns_securetextfieldcell_nssecuretextfieldcell((uintptr_t) cell);
        
	RETURN_LONG(ptr);
}

PHP_METHOD(AppKit_NS_NSSecureTextFieldCell_NSSecureTextFieldCell, setEchosBullets)
{
	zend_bool echosBullets;
	zval *cell_param = NULL, *echosBullets_param = NULL;
	zend_long cell;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(cell)
		Z_PARAM_BOOL(echosBullets)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &cell_param, &echosBullets_param);
	
            ns_securetextfieldcell_set_echos_bullets((uintptr_t) cell, echosBullets ? 1 : 0);
        
}

PHP_METHOD(AppKit_NS_NSSecureTextFieldCell_NSSecureTextFieldCell, echosBullets)
{
	zend_bool result = 0;
	zval *cell_param = NULL;
	zend_long cell;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(cell)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &cell_param);
	
            result = ns_securetextfieldcell_echos_bullets((uintptr_t) cell) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSSecureTextFieldCell_NSSecureTextFieldCell, setStringValue)
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
	
            ns_securetextfieldcell_set_string((uintptr_t) cell, Z_STRVAL(value));
        
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSSecureTextFieldCell_NSSecureTextFieldCell, getStringValue)
{
	zval *cell_param = NULL;
	zend_long cell;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(cell)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &cell_param);
	
            char buf[4096];
            buf[0] = '\0';
            if (ns_securetextfieldcell_get_string((uintptr_t) cell, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        
	RETURN_STRING("");
}

PHP_METHOD(AppKit_NS_NSSecureTextFieldCell_NSSecureTextFieldCell, setPlaceholderString)
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
	
            ns_securetextfieldcell_set_placeholder_string((uintptr_t) cell, Z_STRVAL(placeholder));
        
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSSecureTextFieldCell_NSSecureTextFieldCell, getPlaceholderString)
{
	zval *cell_param = NULL;
	zend_long cell;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(cell)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &cell_param);
	
            char buf[4096];
            buf[0] = '\0';
            if (ns_securetextfieldcell_get_placeholder_string((uintptr_t) cell, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        
	RETURN_STRING("");
}

PHP_METHOD(AppKit_NS_NSSecureTextFieldCell_NSSecureTextFieldCell, setBezelStyle)
{
	zval *cell_param = NULL, *style_param = NULL;
	zend_long cell, style;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(cell)
		Z_PARAM_LONG(style)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &cell_param, &style_param);
	
            ns_securetextfieldcell_set_bezel_style((uintptr_t) cell, (int) style);
        
}

PHP_METHOD(AppKit_NS_NSSecureTextFieldCell_NSSecureTextFieldCell, getBezelStyle)
{
	zval *cell_param = NULL;
	zend_long cell, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(cell)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &cell_param);
	
            value = (zend_long) ns_securetextfieldcell_get_bezel_style((uintptr_t) cell);
        
	RETURN_LONG(value);
}

