
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

#include "ns-slidercell.h"
#include <stdint.h>



/**
 * NSSliderCell — cell used by NSSlider.
 */
ZEPHIR_INIT_CLASS(AppKit_NS_NSSliderCell_NSSliderCell)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSSliderCell, NSSliderCell, appkit, ns_nsslidercell_nsslidercell, appkit_ns_nsslidercell_nsslidercell_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSSliderCell_NSSliderCell, createText)
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
	
            handle = (zend_long) ns_slidercell_create_text(Z_STRVAL(value));
        
	RETURN_MM_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSSliderCell_NSSliderCell, wrap)
{
	zval *nsSliderCellPtr_param = NULL;
	zend_long nsSliderCellPtr, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(nsSliderCellPtr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &nsSliderCellPtr_param);
	
            handle = (zend_long) ns_slidercell_wrap((void *)(uintptr_t) nsSliderCellPtr);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSSliderCell_NSSliderCell, destroy)
{
	zval *cell_param = NULL;
	zend_long cell;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(cell)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &cell_param);
	
            ns_slidercell_destroy((uintptr_t) cell);
        
}

PHP_METHOD(AppKit_NS_NSSliderCell_NSSliderCell, nsSliderCell)
{
	zval *cell_param = NULL;
	zend_long cell, ptr = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(cell)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &cell_param);
	
            ptr = (zend_long)(uintptr_t) ns_slidercell_nsslidercell((uintptr_t) cell);
        
	RETURN_LONG(ptr);
}

PHP_METHOD(AppKit_NS_NSSliderCell_NSSliderCell, setTitle)
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
	
            ns_slidercell_set_title((uintptr_t) cell, Z_STRVAL(title));
        
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSSliderCell_NSSliderCell, getTitle)
{
	zval *cell_param = NULL;
	zend_long cell;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(cell)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &cell_param);
	
            char buf[4096];
            buf[0] = '\0';
            if (ns_slidercell_get_title((uintptr_t) cell, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        
	RETURN_STRING("");
}

PHP_METHOD(AppKit_NS_NSSliderCell_NSSliderCell, setState)
{
	zval *cell_param = NULL, *state_param = NULL;
	zend_long cell, state;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(cell)
		Z_PARAM_LONG(state)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &cell_param, &state_param);
	
            ns_slidercell_set_state((uintptr_t) cell, (int) state);
        
}

PHP_METHOD(AppKit_NS_NSSliderCell_NSSliderCell, getState)
{
	zval *cell_param = NULL;
	zend_long cell, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(cell)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &cell_param);
	
            value = (zend_long) ns_slidercell_get_state((uintptr_t) cell);
        
	RETURN_LONG(value);
}

PHP_METHOD(AppKit_NS_NSSliderCell_NSSliderCell, setEnabled)
{
	zend_bool enabled;
	zval *cell_param = NULL, *enabled_param = NULL;
	zend_long cell;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(cell)
		Z_PARAM_BOOL(enabled)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &cell_param, &enabled_param);
	
            ns_slidercell_set_enabled((uintptr_t) cell, enabled ? 1 : 0);
        
}

PHP_METHOD(AppKit_NS_NSSliderCell_NSSliderCell, isEnabled)
{
	zend_bool result = 0;
	zval *cell_param = NULL;
	zend_long cell;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(cell)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &cell_param);
	
            result = ns_slidercell_is_enabled((uintptr_t) cell) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSSliderCell_NSSliderCell, setTag)
{
	zval *cell_param = NULL, *tag_param = NULL;
	zend_long cell, tag;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(cell)
		Z_PARAM_LONG(tag)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &cell_param, &tag_param);
	
            ns_slidercell_set_tag((uintptr_t) cell, (int) tag);
        
}

PHP_METHOD(AppKit_NS_NSSliderCell_NSSliderCell, getTag)
{
	zval *cell_param = NULL;
	zend_long cell, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(cell)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &cell_param);
	
            value = (zend_long) ns_slidercell_get_tag((uintptr_t) cell);
        
	RETURN_LONG(value);
}

PHP_METHOD(AppKit_NS_NSSliderCell_NSSliderCell, setMinValue)
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
	
            ns_slidercell_set_min_value((uintptr_t) cell, (double) value);
        
}

PHP_METHOD(AppKit_NS_NSSliderCell_NSSliderCell, getMinValue)
{
	double value = 0;
	zval *cell_param = NULL;
	zend_long cell;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(cell)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &cell_param);
	
            value = ns_slidercell_get_min_value((uintptr_t) cell);
        
	RETURN_DOUBLE(value);
}

PHP_METHOD(AppKit_NS_NSSliderCell_NSSliderCell, setMaxValue)
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
	
            ns_slidercell_set_max_value((uintptr_t) cell, (double) value);
        
}

PHP_METHOD(AppKit_NS_NSSliderCell_NSSliderCell, getMaxValue)
{
	double value = 0;
	zval *cell_param = NULL;
	zend_long cell;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(cell)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &cell_param);
	
            value = ns_slidercell_get_max_value((uintptr_t) cell);
        
	RETURN_DOUBLE(value);
}

PHP_METHOD(AppKit_NS_NSSliderCell_NSSliderCell, setAltIncrementValue)
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
	
            ns_slidercell_set_alt_increment_value((uintptr_t) cell, (double) value);
        
}

PHP_METHOD(AppKit_NS_NSSliderCell_NSSliderCell, getAltIncrementValue)
{
	double value = 0;
	zval *cell_param = NULL;
	zend_long cell;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(cell)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &cell_param);
	
            value = ns_slidercell_get_alt_increment_value((uintptr_t) cell);
        
	RETURN_DOUBLE(value);
}

PHP_METHOD(AppKit_NS_NSSliderCell_NSSliderCell, setSliderType)
{
	zval *cell_param = NULL, *type_param = NULL;
	zend_long cell, type;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(cell)
		Z_PARAM_LONG(type)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &cell_param, &type_param);
	
            ns_slidercell_set_slider_type((uintptr_t) cell, (int) type);
        
}

PHP_METHOD(AppKit_NS_NSSliderCell_NSSliderCell, getSliderType)
{
	zval *cell_param = NULL;
	zend_long cell, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(cell)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &cell_param);
	
            value = (zend_long) ns_slidercell_get_slider_type((uintptr_t) cell);
        
	RETURN_LONG(value);
}

PHP_METHOD(AppKit_NS_NSSliderCell_NSSliderCell, setVertical)
{
	zend_bool flag;
	zval *cell_param = NULL, *flag_param = NULL;
	zend_long cell;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(cell)
		Z_PARAM_BOOL(flag)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &cell_param, &flag_param);
	
            ns_slidercell_set_vertical((uintptr_t) cell, flag ? 1 : 0);
        
}

PHP_METHOD(AppKit_NS_NSSliderCell_NSSliderCell, isVertical)
{
	zend_bool result = 0;
	zval *cell_param = NULL;
	zend_long cell;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(cell)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &cell_param);
	
            result = ns_slidercell_is_vertical((uintptr_t) cell) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSSliderCell_NSSliderCell, setNumberOfTickMarks)
{
	zval *cell_param = NULL, *count_param = NULL;
	zend_long cell, count;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(cell)
		Z_PARAM_LONG(count)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &cell_param, &count_param);
	
            ns_slidercell_set_number_of_tick_marks((uintptr_t) cell, (int) count);
        
}

PHP_METHOD(AppKit_NS_NSSliderCell_NSSliderCell, getNumberOfTickMarks)
{
	zval *cell_param = NULL;
	zend_long cell, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(cell)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &cell_param);
	
            value = (zend_long) ns_slidercell_get_number_of_tick_marks((uintptr_t) cell);
        
	RETURN_LONG(value);
}

PHP_METHOD(AppKit_NS_NSSliderCell_NSSliderCell, setTickMarkPosition)
{
	zval *cell_param = NULL, *position_param = NULL;
	zend_long cell, position;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(cell)
		Z_PARAM_LONG(position)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &cell_param, &position_param);
	
            ns_slidercell_set_tick_mark_position((uintptr_t) cell, (int) position);
        
}

PHP_METHOD(AppKit_NS_NSSliderCell_NSSliderCell, getTickMarkPosition)
{
	zval *cell_param = NULL;
	zend_long cell, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(cell)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &cell_param);
	
            value = (zend_long) ns_slidercell_get_tick_mark_position((uintptr_t) cell);
        
	RETURN_LONG(value);
}

PHP_METHOD(AppKit_NS_NSSliderCell_NSSliderCell, setAllowsTickMarkValuesOnly)
{
	zend_bool flag;
	zval *cell_param = NULL, *flag_param = NULL;
	zend_long cell;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(cell)
		Z_PARAM_BOOL(flag)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &cell_param, &flag_param);
	
            ns_slidercell_set_allows_tick_mark_values_only((uintptr_t) cell, flag ? 1 : 0);
        
}

PHP_METHOD(AppKit_NS_NSSliderCell_NSSliderCell, allowsTickMarkValuesOnly)
{
	zend_bool result = 0;
	zval *cell_param = NULL;
	zend_long cell;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(cell)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &cell_param);
	
            result = ns_slidercell_allows_tick_mark_values_only((uintptr_t) cell) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSSliderCell_NSSliderCell, tickMarkValueAtIndex)
{
	double value = 0;
	zval *cell_param = NULL, *index_param = NULL;
	zend_long cell, index;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(cell)
		Z_PARAM_LONG(index)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &cell_param, &index_param);
	
            value = ns_slidercell_tick_mark_value_at_index((uintptr_t) cell, (int) index);
        
	RETURN_DOUBLE(value);
}

PHP_METHOD(AppKit_NS_NSSliderCell_NSSliderCell, closestTickMarkValueToValue)
{
	double value, result = 0;
	zval *cell_param = NULL, *value_param = NULL;
	zend_long cell;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(cell)
		Z_PARAM_ZVAL(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &cell_param, &value_param);
	value = zephir_get_doubleval(value_param);
	
            result = ns_slidercell_closest_tick_mark_value_to_value((uintptr_t) cell, (double) value);
        
	RETURN_DOUBLE(result);
}

