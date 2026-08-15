
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
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"

#include "ns-gridcolumn.h"
#include <stdint.h>



/**
 * NSGridColumn of an NSGridView.
 */
ZEPHIR_INIT_CLASS(AppKit_NS_NSGridColumn_NSGridColumn)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSGridColumn, NSGridColumn, appkit, ns_nsgridcolumn_nsgridcolumn, appkit_ns_nsgridcolumn_nsgridcolumn_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSGridColumn_NSGridColumn, wrap)
{
	zval *nsGridColumnPtr_param = NULL;
	zend_long nsGridColumnPtr, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(nsGridColumnPtr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &nsGridColumnPtr_param);
	
            handle = (zend_long) ns_gridcolumn_wrap((void *)(uintptr_t) nsGridColumnPtr);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSGridColumn_NSGridColumn, destroy)
{
	zval *column_param = NULL;
	zend_long column;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(column)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &column_param);
	
            ns_gridcolumn_destroy((uintptr_t) column);
        
}

PHP_METHOD(AppKit_NS_NSGridColumn_NSGridColumn, nsGridColumn)
{
	zval *column_param = NULL;
	zend_long column, ptr = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(column)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &column_param);
	
            ptr = (zend_long)(uintptr_t) ns_gridcolumn_nsgridcolumn((uintptr_t) column);
        
	RETURN_LONG(ptr);
}

PHP_METHOD(AppKit_NS_NSGridColumn_NSGridColumn, numberOfCells)
{
	zval *column_param = NULL;
	zend_long column, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(column)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &column_param);
	
            value = (zend_long) ns_gridcolumn_number_of_cells((uintptr_t) column);
        
	RETURN_LONG(value);
}

PHP_METHOD(AppKit_NS_NSGridColumn_NSGridColumn, cellAt)
{
	zval *column_param = NULL, *index_param = NULL;
	zend_long column, index, value = 0;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(column)
		Z_PARAM_LONG(index)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &column_param, &index_param);
	
            value = (zend_long) ns_gridcolumn_cell_at((uintptr_t) column, (int) index);
        
	RETURN_LONG(value);
}

PHP_METHOD(AppKit_NS_NSGridColumn_NSGridColumn, setXPlacement)
{
	zval *column_param = NULL, *placement_param = NULL;
	zend_long column, placement;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(column)
		Z_PARAM_LONG(placement)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &column_param, &placement_param);
	
            ns_gridcolumn_set_x_placement((uintptr_t) column, (int) placement);
        
}

PHP_METHOD(AppKit_NS_NSGridColumn_NSGridColumn, getXPlacement)
{
	zval *column_param = NULL;
	zend_long column, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(column)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &column_param);
	
            value = (zend_long) ns_gridcolumn_get_x_placement((uintptr_t) column);
        
	RETURN_LONG(value);
}

PHP_METHOD(AppKit_NS_NSGridColumn_NSGridColumn, setWidth)
{
	double width;
	zval *column_param = NULL, *width_param = NULL;
	zend_long column;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(column)
		Z_PARAM_ZVAL(width)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &column_param, &width_param);
	width = zephir_get_doubleval(width_param);
	
            ns_gridcolumn_set_width((uintptr_t) column, width);
        
}

PHP_METHOD(AppKit_NS_NSGridColumn_NSGridColumn, getWidth)
{
	double value = 0;
	zval *column_param = NULL;
	zend_long column;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(column)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &column_param);
	
            value = ns_gridcolumn_get_width((uintptr_t) column);
        
	RETURN_DOUBLE(value);
}

PHP_METHOD(AppKit_NS_NSGridColumn_NSGridColumn, setLeadingPadding)
{
	double padding;
	zval *column_param = NULL, *padding_param = NULL;
	zend_long column;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(column)
		Z_PARAM_ZVAL(padding)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &column_param, &padding_param);
	padding = zephir_get_doubleval(padding_param);
	
            ns_gridcolumn_set_leading_padding((uintptr_t) column, padding);
        
}

PHP_METHOD(AppKit_NS_NSGridColumn_NSGridColumn, getLeadingPadding)
{
	double value = 0;
	zval *column_param = NULL;
	zend_long column;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(column)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &column_param);
	
            value = ns_gridcolumn_get_leading_padding((uintptr_t) column);
        
	RETURN_DOUBLE(value);
}

PHP_METHOD(AppKit_NS_NSGridColumn_NSGridColumn, setTrailingPadding)
{
	double padding;
	zval *column_param = NULL, *padding_param = NULL;
	zend_long column;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(column)
		Z_PARAM_ZVAL(padding)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &column_param, &padding_param);
	padding = zephir_get_doubleval(padding_param);
	
            ns_gridcolumn_set_trailing_padding((uintptr_t) column, padding);
        
}

PHP_METHOD(AppKit_NS_NSGridColumn_NSGridColumn, getTrailingPadding)
{
	double value = 0;
	zval *column_param = NULL;
	zend_long column;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(column)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &column_param);
	
            value = ns_gridcolumn_get_trailing_padding((uintptr_t) column);
        
	RETURN_DOUBLE(value);
}

PHP_METHOD(AppKit_NS_NSGridColumn_NSGridColumn, setHidden)
{
	zend_bool flag;
	zval *column_param = NULL, *flag_param = NULL;
	zend_long column;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(column)
		Z_PARAM_BOOL(flag)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &column_param, &flag_param);
	
            ns_gridcolumn_set_hidden((uintptr_t) column, flag ? 1 : 0);
        
}

PHP_METHOD(AppKit_NS_NSGridColumn_NSGridColumn, isHidden)
{
	zend_bool result = 0;
	zval *column_param = NULL;
	zend_long column;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(column)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &column_param);
	
            result = ns_gridcolumn_is_hidden((uintptr_t) column) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSGridColumn_NSGridColumn, mergeCells)
{
	zval *column_param = NULL, *start_param = NULL, *length_param = NULL;
	zend_long column, start, length;

	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(column)
		Z_PARAM_LONG(start)
		Z_PARAM_LONG(length)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &column_param, &start_param, &length_param);
	
            ns_gridcolumn_merge_cells((uintptr_t) column, (int) start, (int) length);
        
}

