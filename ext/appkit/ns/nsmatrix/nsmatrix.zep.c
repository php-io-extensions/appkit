
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

#include "ns-matrix.h"
#include <stdint.h>



/**
 * Deprecated NSMatrix cell grid.
 */
ZEPHIR_INIT_CLASS(AppKit_NS_NSMatrix_NSMatrix)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSMatrix, NSMatrix, appkit, ns_nsmatrix_nsmatrix, appkit_ns_nsmatrix_nsmatrix_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSMatrix_NSMatrix, create)
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
	
            handle = (zend_long) ns_matrix_create((double) x, (double) y, (double) width, (double) height);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSMatrix_NSMatrix, destroy)
{
	zval *matrix_param = NULL;
	zend_long matrix;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(matrix)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &matrix_param);
	
            ns_matrix_destroy((uintptr_t) matrix);
        
}

PHP_METHOD(AppKit_NS_NSMatrix_NSMatrix, setMode)
{
	zval *matrix_param = NULL, *mode_param = NULL;
	zend_long matrix, mode;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(matrix)
		Z_PARAM_LONG(mode)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &matrix_param, &mode_param);
	
            ns_matrix_set_mode((uintptr_t) matrix, (int) mode);
        
}

PHP_METHOD(AppKit_NS_NSMatrix_NSMatrix, getMode)
{
	zval *matrix_param = NULL;
	zend_long matrix, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(matrix)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &matrix_param);
	
            value = (zend_long) ns_matrix_get_mode((uintptr_t) matrix);
        
	RETURN_LONG(value);
}

PHP_METHOD(AppKit_NS_NSMatrix_NSMatrix, numberOfRows)
{
	zval *matrix_param = NULL;
	zend_long matrix, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(matrix)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &matrix_param);
	
            value = (zend_long) ns_matrix_number_of_rows((uintptr_t) matrix);
        
	RETURN_LONG(value);
}

PHP_METHOD(AppKit_NS_NSMatrix_NSMatrix, numberOfColumns)
{
	zval *matrix_param = NULL;
	zend_long matrix, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(matrix)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &matrix_param);
	
            value = (zend_long) ns_matrix_number_of_columns((uintptr_t) matrix);
        
	RETURN_LONG(value);
}

PHP_METHOD(AppKit_NS_NSMatrix_NSMatrix, addRow)
{
	zval *matrix_param = NULL;
	zend_long matrix;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(matrix)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &matrix_param);
	
            ns_matrix_add_row((uintptr_t) matrix);
        
}

PHP_METHOD(AppKit_NS_NSMatrix_NSMatrix, addColumn)
{
	zval *matrix_param = NULL;
	zend_long matrix;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(matrix)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &matrix_param);
	
            ns_matrix_add_column((uintptr_t) matrix);
        
}

PHP_METHOD(AppKit_NS_NSMatrix_NSMatrix, selectedRow)
{
	zval *matrix_param = NULL;
	zend_long matrix, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(matrix)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &matrix_param);
	
            value = (zend_long) ns_matrix_selected_row((uintptr_t) matrix);
        
	RETURN_LONG(value);
}

PHP_METHOD(AppKit_NS_NSMatrix_NSMatrix, selectedColumn)
{
	zval *matrix_param = NULL;
	zend_long matrix, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(matrix)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &matrix_param);
	
            value = (zend_long) ns_matrix_selected_column((uintptr_t) matrix);
        
	RETURN_LONG(value);
}

PHP_METHOD(AppKit_NS_NSMatrix_NSMatrix, selectCellAt)
{
	zval *matrix_param = NULL, *row_param = NULL, *column_param = NULL;
	zend_long matrix, row, column;

	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(matrix)
		Z_PARAM_LONG(row)
		Z_PARAM_LONG(column)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &matrix_param, &row_param, &column_param);
	
            ns_matrix_select_cell_at((uintptr_t) matrix, (int) row, (int) column);
        
}

PHP_METHOD(AppKit_NS_NSMatrix_NSMatrix, cellAt)
{
	zval *matrix_param = NULL, *row_param = NULL, *column_param = NULL;
	zend_long matrix, row, column, handle = 0;

	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(matrix)
		Z_PARAM_LONG(row)
		Z_PARAM_LONG(column)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &matrix_param, &row_param, &column_param);
	
            handle = (zend_long) ns_matrix_cell_at((uintptr_t) matrix, (int) row, (int) column);
        
	RETURN_LONG(handle);
}

