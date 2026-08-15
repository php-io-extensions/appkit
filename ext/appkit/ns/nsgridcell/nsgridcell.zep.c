
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

#include "ns-gridcell.h"
#include <stdint.h>



/**
 * NSGridCell of an NSGridView.
 */
ZEPHIR_INIT_CLASS(AppKit_NS_NSGridCell_NSGridCell)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSGridCell, NSGridCell, appkit, ns_nsgridcell_nsgridcell, appkit_ns_nsgridcell_nsgridcell_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSGridCell_NSGridCell, wrap)
{
	zval *nsGridCellPtr_param = NULL;
	zend_long nsGridCellPtr, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(nsGridCellPtr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &nsGridCellPtr_param);
	
            handle = (zend_long) ns_gridcell_wrap((void *)(uintptr_t) nsGridCellPtr);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSGridCell_NSGridCell, destroy)
{
	zval *cell_param = NULL;
	zend_long cell;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(cell)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &cell_param);
	
            ns_gridcell_destroy((uintptr_t) cell);
        
}

PHP_METHOD(AppKit_NS_NSGridCell_NSGridCell, nsGridCell)
{
	zval *cell_param = NULL;
	zend_long cell, ptr = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(cell)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &cell_param);
	
            ptr = (zend_long)(uintptr_t) ns_gridcell_nsgridcell((uintptr_t) cell);
        
	RETURN_LONG(ptr);
}

PHP_METHOD(AppKit_NS_NSGridCell_NSGridCell, setContentView)
{
	zval *cell_param = NULL, *view_param = NULL;
	zend_long cell, view;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(cell)
		Z_PARAM_LONG(view)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &cell_param, &view_param);
	
            ns_gridcell_set_content_view((uintptr_t) cell, (uintptr_t) view);
        
}

PHP_METHOD(AppKit_NS_NSGridCell_NSGridCell, contentView)
{
	zval *cell_param = NULL;
	zend_long cell, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(cell)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &cell_param);
	
            value = (zend_long) ns_gridcell_content_view((uintptr_t) cell);
        
	RETURN_LONG(value);
}

PHP_METHOD(AppKit_NS_NSGridCell_NSGridCell, row)
{
	zval *cell_param = NULL;
	zend_long cell, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(cell)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &cell_param);
	
            value = (zend_long) ns_gridcell_row((uintptr_t) cell);
        
	RETURN_LONG(value);
}

PHP_METHOD(AppKit_NS_NSGridCell_NSGridCell, column)
{
	zval *cell_param = NULL;
	zend_long cell, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(cell)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &cell_param);
	
            value = (zend_long) ns_gridcell_column((uintptr_t) cell);
        
	RETURN_LONG(value);
}

PHP_METHOD(AppKit_NS_NSGridCell_NSGridCell, setXPlacement)
{
	zval *cell_param = NULL, *placement_param = NULL;
	zend_long cell, placement;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(cell)
		Z_PARAM_LONG(placement)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &cell_param, &placement_param);
	
            ns_gridcell_set_x_placement((uintptr_t) cell, (int) placement);
        
}

PHP_METHOD(AppKit_NS_NSGridCell_NSGridCell, getXPlacement)
{
	zval *cell_param = NULL;
	zend_long cell, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(cell)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &cell_param);
	
            value = (zend_long) ns_gridcell_get_x_placement((uintptr_t) cell);
        
	RETURN_LONG(value);
}

PHP_METHOD(AppKit_NS_NSGridCell_NSGridCell, setYPlacement)
{
	zval *cell_param = NULL, *placement_param = NULL;
	zend_long cell, placement;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(cell)
		Z_PARAM_LONG(placement)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &cell_param, &placement_param);
	
            ns_gridcell_set_y_placement((uintptr_t) cell, (int) placement);
        
}

PHP_METHOD(AppKit_NS_NSGridCell_NSGridCell, getYPlacement)
{
	zval *cell_param = NULL;
	zend_long cell, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(cell)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &cell_param);
	
            value = (zend_long) ns_gridcell_get_y_placement((uintptr_t) cell);
        
	RETURN_LONG(value);
}

PHP_METHOD(AppKit_NS_NSGridCell_NSGridCell, setRowAlignment)
{
	zval *cell_param = NULL, *alignment_param = NULL;
	zend_long cell, alignment;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(cell)
		Z_PARAM_LONG(alignment)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &cell_param, &alignment_param);
	
            ns_gridcell_set_row_alignment((uintptr_t) cell, (int) alignment);
        
}

PHP_METHOD(AppKit_NS_NSGridCell_NSGridCell, getRowAlignment)
{
	zval *cell_param = NULL;
	zend_long cell, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(cell)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &cell_param);
	
            value = (zend_long) ns_gridcell_get_row_alignment((uintptr_t) cell);
        
	RETURN_LONG(value);
}

