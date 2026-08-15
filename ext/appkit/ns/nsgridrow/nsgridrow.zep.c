
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

#include "ns-gridrow.h"
#include <stdint.h>



/**
 * NSGridRow of an NSGridView.
 */
ZEPHIR_INIT_CLASS(AppKit_NS_NSGridRow_NSGridRow)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSGridRow, NSGridRow, appkit, ns_nsgridrow_nsgridrow, appkit_ns_nsgridrow_nsgridrow_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSGridRow_NSGridRow, wrap)
{
	zval *nsGridRowPtr_param = NULL;
	zend_long nsGridRowPtr, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(nsGridRowPtr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &nsGridRowPtr_param);
	
            handle = (zend_long) ns_gridrow_wrap((void *)(uintptr_t) nsGridRowPtr);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSGridRow_NSGridRow, destroy)
{
	zval *row_param = NULL;
	zend_long row;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(row)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &row_param);
	
            ns_gridrow_destroy((uintptr_t) row);
        
}

PHP_METHOD(AppKit_NS_NSGridRow_NSGridRow, nsGridRow)
{
	zval *row_param = NULL;
	zend_long row, ptr = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(row)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &row_param);
	
            ptr = (zend_long)(uintptr_t) ns_gridrow_nsgridrow((uintptr_t) row);
        
	RETURN_LONG(ptr);
}

PHP_METHOD(AppKit_NS_NSGridRow_NSGridRow, numberOfCells)
{
	zval *row_param = NULL;
	zend_long row, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(row)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &row_param);
	
            value = (zend_long) ns_gridrow_number_of_cells((uintptr_t) row);
        
	RETURN_LONG(value);
}

PHP_METHOD(AppKit_NS_NSGridRow_NSGridRow, cellAt)
{
	zval *row_param = NULL, *index_param = NULL;
	zend_long row, index, value = 0;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(row)
		Z_PARAM_LONG(index)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &row_param, &index_param);
	
            value = (zend_long) ns_gridrow_cell_at((uintptr_t) row, (int) index);
        
	RETURN_LONG(value);
}

PHP_METHOD(AppKit_NS_NSGridRow_NSGridRow, setYPlacement)
{
	zval *row_param = NULL, *placement_param = NULL;
	zend_long row, placement;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(row)
		Z_PARAM_LONG(placement)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &row_param, &placement_param);
	
            ns_gridrow_set_y_placement((uintptr_t) row, (int) placement);
        
}

PHP_METHOD(AppKit_NS_NSGridRow_NSGridRow, getYPlacement)
{
	zval *row_param = NULL;
	zend_long row, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(row)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &row_param);
	
            value = (zend_long) ns_gridrow_get_y_placement((uintptr_t) row);
        
	RETURN_LONG(value);
}

PHP_METHOD(AppKit_NS_NSGridRow_NSGridRow, setRowAlignment)
{
	zval *row_param = NULL, *alignment_param = NULL;
	zend_long row, alignment;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(row)
		Z_PARAM_LONG(alignment)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &row_param, &alignment_param);
	
            ns_gridrow_set_row_alignment((uintptr_t) row, (int) alignment);
        
}

PHP_METHOD(AppKit_NS_NSGridRow_NSGridRow, getRowAlignment)
{
	zval *row_param = NULL;
	zend_long row, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(row)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &row_param);
	
            value = (zend_long) ns_gridrow_get_row_alignment((uintptr_t) row);
        
	RETURN_LONG(value);
}

PHP_METHOD(AppKit_NS_NSGridRow_NSGridRow, setHeight)
{
	double height;
	zval *row_param = NULL, *height_param = NULL;
	zend_long row;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(row)
		Z_PARAM_ZVAL(height)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &row_param, &height_param);
	height = zephir_get_doubleval(height_param);
	
            ns_gridrow_set_height((uintptr_t) row, height);
        
}

PHP_METHOD(AppKit_NS_NSGridRow_NSGridRow, getHeight)
{
	double value = 0;
	zval *row_param = NULL;
	zend_long row;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(row)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &row_param);
	
            value = ns_gridrow_get_height((uintptr_t) row);
        
	RETURN_DOUBLE(value);
}

PHP_METHOD(AppKit_NS_NSGridRow_NSGridRow, setTopPadding)
{
	double padding;
	zval *row_param = NULL, *padding_param = NULL;
	zend_long row;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(row)
		Z_PARAM_ZVAL(padding)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &row_param, &padding_param);
	padding = zephir_get_doubleval(padding_param);
	
            ns_gridrow_set_top_padding((uintptr_t) row, padding);
        
}

PHP_METHOD(AppKit_NS_NSGridRow_NSGridRow, getTopPadding)
{
	double value = 0;
	zval *row_param = NULL;
	zend_long row;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(row)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &row_param);
	
            value = ns_gridrow_get_top_padding((uintptr_t) row);
        
	RETURN_DOUBLE(value);
}

PHP_METHOD(AppKit_NS_NSGridRow_NSGridRow, setBottomPadding)
{
	double padding;
	zval *row_param = NULL, *padding_param = NULL;
	zend_long row;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(row)
		Z_PARAM_ZVAL(padding)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &row_param, &padding_param);
	padding = zephir_get_doubleval(padding_param);
	
            ns_gridrow_set_bottom_padding((uintptr_t) row, padding);
        
}

PHP_METHOD(AppKit_NS_NSGridRow_NSGridRow, getBottomPadding)
{
	double value = 0;
	zval *row_param = NULL;
	zend_long row;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(row)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &row_param);
	
            value = ns_gridrow_get_bottom_padding((uintptr_t) row);
        
	RETURN_DOUBLE(value);
}

PHP_METHOD(AppKit_NS_NSGridRow_NSGridRow, setHidden)
{
	zend_bool flag;
	zval *row_param = NULL, *flag_param = NULL;
	zend_long row;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(row)
		Z_PARAM_BOOL(flag)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &row_param, &flag_param);
	
            ns_gridrow_set_hidden((uintptr_t) row, flag ? 1 : 0);
        
}

PHP_METHOD(AppKit_NS_NSGridRow_NSGridRow, isHidden)
{
	zend_bool result = 0;
	zval *row_param = NULL;
	zend_long row;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(row)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &row_param);
	
            result = ns_gridrow_is_hidden((uintptr_t) row) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSGridRow_NSGridRow, mergeCells)
{
	zval *row_param = NULL, *start_param = NULL, *length_param = NULL;
	zend_long row, start, length;

	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(row)
		Z_PARAM_LONG(start)
		Z_PARAM_LONG(length)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &row_param, &start_param, &length_param);
	
            ns_gridrow_merge_cells((uintptr_t) row, (int) start, (int) length);
        
}

