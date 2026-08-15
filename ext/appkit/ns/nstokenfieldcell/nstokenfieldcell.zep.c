
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

#include "ns-tokenfieldcell.h"
#include <stdint.h>



/**
 * NSTokenFieldCell — cell used by NSTokenField.
 */
ZEPHIR_INIT_CLASS(AppKit_NS_NSTokenFieldCell_NSTokenFieldCell)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSTokenFieldCell, NSTokenFieldCell, appkit, ns_nstokenfieldcell_nstokenfieldcell, appkit_ns_nstokenfieldcell_nstokenfieldcell_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSTokenFieldCell_NSTokenFieldCell, createText)
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
	
            handle = (zend_long) ns_tokenfieldcell_create_text(Z_STRVAL(value));
        
	RETURN_MM_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSTokenFieldCell_NSTokenFieldCell, wrap)
{
	zval *nsTokenFieldCellPtr_param = NULL;
	zend_long nsTokenFieldCellPtr, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(nsTokenFieldCellPtr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &nsTokenFieldCellPtr_param);
	
            handle = (zend_long) ns_tokenfieldcell_wrap((void *)(uintptr_t) nsTokenFieldCellPtr);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSTokenFieldCell_NSTokenFieldCell, destroy)
{
	zval *cell_param = NULL;
	zend_long cell;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(cell)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &cell_param);
	
            ns_tokenfieldcell_destroy((uintptr_t) cell);
        
}

PHP_METHOD(AppKit_NS_NSTokenFieldCell_NSTokenFieldCell, nsTokenFieldCell)
{
	zval *cell_param = NULL;
	zend_long cell, ptr = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(cell)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &cell_param);
	
            ptr = (zend_long)(uintptr_t) ns_tokenfieldcell_nstokenfieldcell((uintptr_t) cell);
        
	RETURN_LONG(ptr);
}

PHP_METHOD(AppKit_NS_NSTokenFieldCell_NSTokenFieldCell, setStringValue)
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
	
            ns_tokenfieldcell_set_string((uintptr_t) cell, Z_STRVAL(value));
        
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSTokenFieldCell_NSTokenFieldCell, getStringValue)
{
	zval *cell_param = NULL;
	zend_long cell;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(cell)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &cell_param);
	
            char buf[4096];
            buf[0] = '\0';
            if (ns_tokenfieldcell_get_string((uintptr_t) cell, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        
	RETURN_STRING("");
}

PHP_METHOD(AppKit_NS_NSTokenFieldCell_NSTokenFieldCell, setTokenStyle)
{
	zval *cell_param = NULL, *style_param = NULL;
	zend_long cell, style;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(cell)
		Z_PARAM_LONG(style)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &cell_param, &style_param);
	
            ns_tokenfieldcell_set_token_style((uintptr_t) cell, (int) style);
        
}

PHP_METHOD(AppKit_NS_NSTokenFieldCell_NSTokenFieldCell, getTokenStyle)
{
	zval *cell_param = NULL;
	zend_long cell, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(cell)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &cell_param);
	
            value = (zend_long) ns_tokenfieldcell_get_token_style((uintptr_t) cell);
        
	RETURN_LONG(value);
}

PHP_METHOD(AppKit_NS_NSTokenFieldCell_NSTokenFieldCell, setCompletionDelay)
{
	double delay;
	zval *cell_param = NULL, *delay_param = NULL;
	zend_long cell;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(cell)
		Z_PARAM_ZVAL(delay)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &cell_param, &delay_param);
	delay = zephir_get_doubleval(delay_param);
	
            ns_tokenfieldcell_set_completion_delay((uintptr_t) cell, (double) delay);
        
}

PHP_METHOD(AppKit_NS_NSTokenFieldCell_NSTokenFieldCell, getCompletionDelay)
{
	double value = 0;
	zval *cell_param = NULL;
	zend_long cell;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(cell)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &cell_param);
	
            value = ns_tokenfieldcell_get_completion_delay((uintptr_t) cell);
        
	RETURN_DOUBLE((double) (value));
}

PHP_METHOD(AppKit_NS_NSTokenFieldCell_NSTokenFieldCell, defaultCompletionDelay)
{
	double value = 0;
	
            value = ns_tokenfieldcell_default_completion_delay();
        
	RETURN_DOUBLE((double) (value));
}

