
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

#include "ns-gridview.h"
#include <stdint.h>



/**
 * NSGridView grid layout container.
 */
ZEPHIR_INIT_CLASS(AppKit_NS_NSGridView_NSGridView)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSGridView, NSGridView, appkit, ns_nsgridview_nsgridview, appkit_ns_nsgridview_nsgridview_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSGridView_NSGridView, create)
{
	zval *x_param = NULL, *y_param = NULL, *width_param = NULL, *height_param = NULL;
	zend_long x, y, width, height, handle = 0;

	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(x)
		Z_PARAM_LONG(y)
		Z_PARAM_LONG(width)
		Z_PARAM_LONG(height)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &x_param, &y_param, &width_param, &height_param);
	
            handle = (zend_long) ns_gridview_create((double) x, (double) y, (double) width, (double) height);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSGridView_NSGridView, destroy)
{
	zval *grid_param = NULL;
	zend_long grid;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(grid)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &grid_param);
	
            ns_gridview_destroy((uintptr_t) grid);
        
}

PHP_METHOD(AppKit_NS_NSGridView_NSGridView, addView)
{
	zval *grid_param = NULL, *child_param = NULL, *row_param = NULL, *column_param = NULL;
	zend_long grid, child, row, column;

	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(grid)
		Z_PARAM_LONG(child)
		Z_PARAM_LONG(row)
		Z_PARAM_LONG(column)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &grid_param, &child_param, &row_param, &column_param);
	
            ns_gridview_add_view((uintptr_t) grid, (uintptr_t) child, (int) row, (int) column);
        
}

PHP_METHOD(AppKit_NS_NSGridView_NSGridView, setRowSpacing)
{
	double spacing;
	zval *grid_param = NULL, *spacing_param = NULL;
	zend_long grid;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(grid)
		Z_PARAM_ZVAL(spacing)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &grid_param, &spacing_param);
	spacing = zephir_get_doubleval(spacing_param);
	
            ns_gridview_set_row_spacing((uintptr_t) grid, spacing);
        
}

PHP_METHOD(AppKit_NS_NSGridView_NSGridView, setColumnSpacing)
{
	double spacing;
	zval *grid_param = NULL, *spacing_param = NULL;
	zend_long grid;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(grid)
		Z_PARAM_ZVAL(spacing)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &grid_param, &spacing_param);
	spacing = zephir_get_doubleval(spacing_param);
	
            ns_gridview_set_column_spacing((uintptr_t) grid, spacing);
        
}

PHP_METHOD(AppKit_NS_NSGridView_NSGridView, numberOfRows)
{
	zval *grid_param = NULL;
	zend_long grid, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(grid)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &grid_param);
	
            value = (zend_long) ns_gridview_number_of_rows((uintptr_t) grid);
        
	RETURN_LONG(value);
}

PHP_METHOD(AppKit_NS_NSGridView_NSGridView, numberOfColumns)
{
	zval *grid_param = NULL;
	zend_long grid, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(grid)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &grid_param);
	
            value = (zend_long) ns_gridview_number_of_columns((uintptr_t) grid);
        
	RETURN_LONG(value);
}

PHP_METHOD(AppKit_NS_NSGridView_NSGridView, rowAt)
{
	zval *grid_param = NULL, *index_param = NULL;
	zend_long grid, index, handle = 0;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(grid)
		Z_PARAM_LONG(index)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &grid_param, &index_param);
	
            handle = (zend_long) ns_gridview_row_at((uintptr_t) grid, (int) index);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSGridView_NSGridView, columnAt)
{
	zval *grid_param = NULL, *index_param = NULL;
	zend_long grid, index, handle = 0;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(grid)
		Z_PARAM_LONG(index)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &grid_param, &index_param);
	
            handle = (zend_long) ns_gridview_column_at((uintptr_t) grid, (int) index);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSGridView_NSGridView, cellAt)
{
	zval *grid_param = NULL, *column_param = NULL, *row_param = NULL;
	zend_long grid, column, row, handle = 0;

	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(grid)
		Z_PARAM_LONG(column)
		Z_PARAM_LONG(row)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &grid_param, &column_param, &row_param);
	
            handle = (zend_long) ns_gridview_cell_at((uintptr_t) grid, (int) column, (int) row);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSGridView_NSGridView, sizeForContent)
{
	double value = 0;
	
            value = ns_gridview_size_for_content();
        
	RETURN_DOUBLE(value);
}

