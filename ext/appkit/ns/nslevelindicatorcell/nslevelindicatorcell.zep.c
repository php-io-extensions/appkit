
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

#include "ns-levelindicatorcell.h"
#include <stdint.h>



/**
 * NSLevelIndicatorCell used by NSLevelIndicator.
 */
ZEPHIR_INIT_CLASS(AppKit_NS_NSLevelIndicatorCell_NSLevelIndicatorCell)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSLevelIndicatorCell, NSLevelIndicatorCell, appkit, ns_nslevelindicatorcell_nslevelindicatorcell, appkit_ns_nslevelindicatorcell_nslevelindicatorcell_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSLevelIndicatorCell_NSLevelIndicatorCell, createText)
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
	
            handle = (zend_long) ns_levelindicatorcell_create_text(Z_STRVAL(value));
        
	RETURN_MM_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSLevelIndicatorCell_NSLevelIndicatorCell, wrap)
{
	zval *nsLevelIndicatorCellPtr_param = NULL;
	zend_long nsLevelIndicatorCellPtr, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(nsLevelIndicatorCellPtr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &nsLevelIndicatorCellPtr_param);
	
            handle = (zend_long) ns_levelindicatorcell_wrap((void *)(uintptr_t) nsLevelIndicatorCellPtr);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSLevelIndicatorCell_NSLevelIndicatorCell, destroy)
{
	zval *cell_param = NULL;
	zend_long cell;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(cell)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &cell_param);
	
            ns_levelindicatorcell_destroy((uintptr_t) cell);
        
}

PHP_METHOD(AppKit_NS_NSLevelIndicatorCell_NSLevelIndicatorCell, nsLevelIndicatorCell)
{
	zval *cell_param = NULL;
	zend_long cell, ptr = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(cell)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &cell_param);
	
            ptr = (zend_long)(uintptr_t) ns_levelindicatorcell_nslevelindicatorcell((uintptr_t) cell);
        
	RETURN_LONG(ptr);
}

PHP_METHOD(AppKit_NS_NSLevelIndicatorCell_NSLevelIndicatorCell, setTitle)
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
	
            ns_levelindicatorcell_set_title((uintptr_t) cell, Z_STRVAL(title));
        
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSLevelIndicatorCell_NSLevelIndicatorCell, getTitle)
{
	zval *cell_param = NULL;
	zend_long cell;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(cell)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &cell_param);
	
            char buf[4096];
            buf[0] = '\0';
            if (ns_levelindicatorcell_get_title((uintptr_t) cell, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        
	RETURN_STRING("");
}

PHP_METHOD(AppKit_NS_NSLevelIndicatorCell_NSLevelIndicatorCell, setState)
{
	zval *cell_param = NULL, *state_param = NULL;
	zend_long cell, state;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(cell)
		Z_PARAM_LONG(state)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &cell_param, &state_param);
	
            ns_levelindicatorcell_set_state((uintptr_t) cell, (int) state);
        
}

PHP_METHOD(AppKit_NS_NSLevelIndicatorCell_NSLevelIndicatorCell, getState)
{
	zval *cell_param = NULL;
	zend_long cell, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(cell)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &cell_param);
	
            value = (zend_long) ns_levelindicatorcell_get_state((uintptr_t) cell);
        
	RETURN_LONG(value);
}

PHP_METHOD(AppKit_NS_NSLevelIndicatorCell_NSLevelIndicatorCell, setEnabled)
{
	zend_bool enabled;
	zval *cell_param = NULL, *enabled_param = NULL;
	zend_long cell;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(cell)
		Z_PARAM_BOOL(enabled)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &cell_param, &enabled_param);
	
            ns_levelindicatorcell_set_enabled((uintptr_t) cell, enabled ? 1 : 0);
        
}

PHP_METHOD(AppKit_NS_NSLevelIndicatorCell_NSLevelIndicatorCell, isEnabled)
{
	zend_bool result = 0;
	zval *cell_param = NULL;
	zend_long cell;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(cell)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &cell_param);
	
            result = ns_levelindicatorcell_is_enabled((uintptr_t) cell) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSLevelIndicatorCell_NSLevelIndicatorCell, setTag)
{
	zval *cell_param = NULL, *tag_param = NULL;
	zend_long cell, tag;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(cell)
		Z_PARAM_LONG(tag)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &cell_param, &tag_param);
	
            ns_levelindicatorcell_set_tag((uintptr_t) cell, (int) tag);
        
}

PHP_METHOD(AppKit_NS_NSLevelIndicatorCell_NSLevelIndicatorCell, getTag)
{
	zval *cell_param = NULL;
	zend_long cell, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(cell)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &cell_param);
	
            value = (zend_long) ns_levelindicatorcell_get_tag((uintptr_t) cell);
        
	RETURN_LONG(value);
}

PHP_METHOD(AppKit_NS_NSLevelIndicatorCell_NSLevelIndicatorCell, setLevelIndicatorStyle)
{
	zval *cell_param = NULL, *style_param = NULL;
	zend_long cell, style;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(cell)
		Z_PARAM_LONG(style)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &cell_param, &style_param);
	
            ns_levelindicatorcell_set_level_indicator_style((uintptr_t) cell, (int) style);
        
}

PHP_METHOD(AppKit_NS_NSLevelIndicatorCell_NSLevelIndicatorCell, getLevelIndicatorStyle)
{
	zval *cell_param = NULL;
	zend_long cell, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(cell)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &cell_param);
	
            value = (zend_long) ns_levelindicatorcell_get_level_indicator_style((uintptr_t) cell);
        
	RETURN_LONG(value);
}

PHP_METHOD(AppKit_NS_NSLevelIndicatorCell_NSLevelIndicatorCell, setEditable)
{
	zend_bool flag;
	zval *cell_param = NULL, *flag_param = NULL;
	zend_long cell;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(cell)
		Z_PARAM_BOOL(flag)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &cell_param, &flag_param);
	
            ns_levelindicatorcell_set_editable((uintptr_t) cell, flag ? 1 : 0);
        
}

PHP_METHOD(AppKit_NS_NSLevelIndicatorCell_NSLevelIndicatorCell, isEditable)
{
	zend_bool result = 0;
	zval *cell_param = NULL;
	zend_long cell;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(cell)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &cell_param);
	
            result = ns_levelindicatorcell_is_editable((uintptr_t) cell) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSLevelIndicatorCell_NSLevelIndicatorCell, setMinValue)
{
	double value;
	zval *cell_param = NULL, *value_param = NULL;
	zend_long cell;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(cell)
		Z_PARAM_ZVAL(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &cell_param, &value_param);
	value = zephir_get_doubleval(value_param);
	
            ns_levelindicatorcell_set_min_value((uintptr_t) cell, (double) value);
        
}

PHP_METHOD(AppKit_NS_NSLevelIndicatorCell_NSLevelIndicatorCell, getMinValue)
{
	double value = 0;
	zval *cell_param = NULL;
	zend_long cell;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(cell)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &cell_param);
	
            value = ns_levelindicatorcell_get_min_value((uintptr_t) cell);
        
	RETURN_DOUBLE(value);
}

PHP_METHOD(AppKit_NS_NSLevelIndicatorCell_NSLevelIndicatorCell, setMaxValue)
{
	double value;
	zval *cell_param = NULL, *value_param = NULL;
	zend_long cell;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(cell)
		Z_PARAM_ZVAL(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &cell_param, &value_param);
	value = zephir_get_doubleval(value_param);
	
            ns_levelindicatorcell_set_max_value((uintptr_t) cell, (double) value);
        
}

PHP_METHOD(AppKit_NS_NSLevelIndicatorCell_NSLevelIndicatorCell, getMaxValue)
{
	double value = 0;
	zval *cell_param = NULL;
	zend_long cell;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(cell)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &cell_param);
	
            value = ns_levelindicatorcell_get_max_value((uintptr_t) cell);
        
	RETURN_DOUBLE(value);
}

PHP_METHOD(AppKit_NS_NSLevelIndicatorCell_NSLevelIndicatorCell, setWarningValue)
{
	double value;
	zval *cell_param = NULL, *value_param = NULL;
	zend_long cell;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(cell)
		Z_PARAM_ZVAL(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &cell_param, &value_param);
	value = zephir_get_doubleval(value_param);
	
            ns_levelindicatorcell_set_warning_value((uintptr_t) cell, (double) value);
        
}

PHP_METHOD(AppKit_NS_NSLevelIndicatorCell_NSLevelIndicatorCell, getWarningValue)
{
	double value = 0;
	zval *cell_param = NULL;
	zend_long cell;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(cell)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &cell_param);
	
            value = ns_levelindicatorcell_get_warning_value((uintptr_t) cell);
        
	RETURN_DOUBLE(value);
}

PHP_METHOD(AppKit_NS_NSLevelIndicatorCell_NSLevelIndicatorCell, setCriticalValue)
{
	double value;
	zval *cell_param = NULL, *value_param = NULL;
	zend_long cell;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(cell)
		Z_PARAM_ZVAL(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &cell_param, &value_param);
	value = zephir_get_doubleval(value_param);
	
            ns_levelindicatorcell_set_critical_value((uintptr_t) cell, (double) value);
        
}

PHP_METHOD(AppKit_NS_NSLevelIndicatorCell_NSLevelIndicatorCell, getCriticalValue)
{
	double value = 0;
	zval *cell_param = NULL;
	zend_long cell;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(cell)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &cell_param);
	
            value = ns_levelindicatorcell_get_critical_value((uintptr_t) cell);
        
	RETURN_DOUBLE(value);
}

PHP_METHOD(AppKit_NS_NSLevelIndicatorCell_NSLevelIndicatorCell, setDoubleValue)
{
	double value;
	zval *cell_param = NULL, *value_param = NULL;
	zend_long cell;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(cell)
		Z_PARAM_ZVAL(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &cell_param, &value_param);
	value = zephir_get_doubleval(value_param);
	
            ns_levelindicatorcell_set_double_value((uintptr_t) cell, (double) value);
        
}

PHP_METHOD(AppKit_NS_NSLevelIndicatorCell_NSLevelIndicatorCell, getDoubleValue)
{
	double value = 0;
	zval *cell_param = NULL;
	zend_long cell;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(cell)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &cell_param);
	
            value = ns_levelindicatorcell_get_double_value((uintptr_t) cell);
        
	RETURN_DOUBLE(value);
}

