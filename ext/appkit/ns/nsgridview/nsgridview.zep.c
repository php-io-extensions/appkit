
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
#include "src/ns-gridview.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(AppKit_NS_NSGridView_NSGridView)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSGridView, NSGridView, appkit, ns_nsgridview_nsgridview, appkit_ns_nsgridview_nsgridview_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSGridView_NSGridView, initWithFrame)
{
	zval *x_param = NULL, *y_param = NULL, *width_param = NULL, *height_param = NULL, _0, _1, _2, _3;
	double x, y, width, height;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_ZVAL(x)
		Z_PARAM_ZVAL(y)
		Z_PARAM_ZVAL(width)
		Z_PARAM_ZVAL(height)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &x_param, &y_param, &width_param, &height_param);
	x = zephir_get_doubleval(x_param);
	y = zephir_get_doubleval(y_param);
	width = zephir_get_doubleval(width_param);
	height = zephir_get_doubleval(height_param);
	ZVAL_DOUBLE(&_0, x);
	ZVAL_DOUBLE(&_1, y);
	ZVAL_DOUBLE(&_2, width);
	ZVAL_DOUBLE(&_3, height);
	RETURN_LONG(ns_nsgridview_init_with_frame(&_0, &_1, &_2, &_3));
}

PHP_METHOD(AppKit_NS_NSGridView_NSGridView, gridViewWithNumberOfColumnsRows)
{
	zval *columnCount_param = NULL, *rowCount_param = NULL, _0, _1;
	zend_long columnCount, rowCount;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(columnCount)
		Z_PARAM_LONG(rowCount)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &columnCount_param, &rowCount_param);
	ZVAL_LONG(&_0, columnCount);
	ZVAL_LONG(&_1, rowCount);
	RETURN_LONG(ns_nsgridview_grid_view_with_number_of_columns_rows(&_0, &_1));
}

PHP_METHOD(AppKit_NS_NSGridView_NSGridView, gridViewWithViews)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *rows_param = NULL;
	zval rows;

	ZVAL_UNDEF(&rows);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ARRAY(rows)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &rows_param);
	zephir_get_arrval(&rows, rows_param);
	RETURN_MM_LONG(ns_nsgridview_grid_view_with_views(&rows));
}

PHP_METHOD(AppKit_NS_NSGridView_NSGridView, numberOfRows)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsgridview_number_of_rows(&_0));
}

PHP_METHOD(AppKit_NS_NSGridView_NSGridView, numberOfColumns)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsgridview_number_of_columns(&_0));
}

PHP_METHOD(AppKit_NS_NSGridView_NSGridView, rowAtIndex)
{
	zval *handle_param = NULL, *index_param = NULL, _0, _1;
	zend_long handle, index;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(index)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &index_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, index);
	RETURN_LONG(ns_nsgridview_row_at_index(&_0, &_1));
}

PHP_METHOD(AppKit_NS_NSGridView_NSGridView, indexOfRow)
{
	zval *handle_param = NULL, *row_param = NULL, _0, _1;
	zend_long handle, row;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(row)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &row_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, row);
	RETURN_LONG(ns_nsgridview_index_of_row(&_0, &_1));
}

PHP_METHOD(AppKit_NS_NSGridView_NSGridView, columnAtIndex)
{
	zval *handle_param = NULL, *index_param = NULL, _0, _1;
	zend_long handle, index;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(index)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &index_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, index);
	RETURN_LONG(ns_nsgridview_column_at_index(&_0, &_1));
}

PHP_METHOD(AppKit_NS_NSGridView_NSGridView, indexOfColumn)
{
	zval *handle_param = NULL, *column_param = NULL, _0, _1;
	zend_long handle, column;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(column)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &column_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, column);
	RETURN_LONG(ns_nsgridview_index_of_column(&_0, &_1));
}

PHP_METHOD(AppKit_NS_NSGridView_NSGridView, cellAtColumnIndexRowIndex)
{
	zval *handle_param = NULL, *columnIndex_param = NULL, *rowIndex_param = NULL, _0, _1, _2;
	zend_long handle, columnIndex, rowIndex;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(columnIndex)
		Z_PARAM_LONG(rowIndex)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &columnIndex_param, &rowIndex_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, columnIndex);
	ZVAL_LONG(&_2, rowIndex);
	RETURN_LONG(ns_nsgridview_cell_at_column_index_row_index(&_0, &_1, &_2));
}

PHP_METHOD(AppKit_NS_NSGridView_NSGridView, cellForView)
{
	zval *handle_param = NULL, *view_param = NULL, _0, _1;
	zend_long handle, view;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(view)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &view_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, view);
	RETURN_LONG(ns_nsgridview_cell_for_view(&_0, &_1));
}

PHP_METHOD(AppKit_NS_NSGridView_NSGridView, addRowWithViews)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval views;
	zval *handle_param = NULL, *views_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&views);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ARRAY(views)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &views_param);
	zephir_get_arrval(&views, views_param);
	ZVAL_LONG(&_0, handle);
	RETURN_MM_LONG(ns_nsgridview_add_row_with_views(&_0, &views));
}

PHP_METHOD(AppKit_NS_NSGridView_NSGridView, insertRowAtIndexWithViews)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval views;
	zval *handle_param = NULL, *index_param = NULL, *views_param = NULL, _0, _1;
	zend_long handle, index;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&views);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(index)
		Z_PARAM_ARRAY(views)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &index_param, &views_param);
	zephir_get_arrval(&views, views_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, index);
	RETURN_MM_LONG(ns_nsgridview_insert_row_at_index_with_views(&_0, &_1, &views));
}

PHP_METHOD(AppKit_NS_NSGridView_NSGridView, moveRowAtIndexToIndex)
{
	zval *handle_param = NULL, *fromIndex_param = NULL, *toIndex_param = NULL, _0, _1, _2;
	zend_long handle, fromIndex, toIndex;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(fromIndex)
		Z_PARAM_LONG(toIndex)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &fromIndex_param, &toIndex_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, fromIndex);
	ZVAL_LONG(&_2, toIndex);
	ns_nsgridview_move_row_at_index_to_index(&_0, &_1, &_2);
}

PHP_METHOD(AppKit_NS_NSGridView_NSGridView, removeRowAtIndex)
{
	zval *handle_param = NULL, *index_param = NULL, _0, _1;
	zend_long handle, index;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(index)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &index_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, index);
	ns_nsgridview_remove_row_at_index(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSGridView_NSGridView, addColumnWithViews)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval views;
	zval *handle_param = NULL, *views_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&views);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ARRAY(views)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &views_param);
	zephir_get_arrval(&views, views_param);
	ZVAL_LONG(&_0, handle);
	RETURN_MM_LONG(ns_nsgridview_add_column_with_views(&_0, &views));
}

PHP_METHOD(AppKit_NS_NSGridView_NSGridView, insertColumnAtIndexWithViews)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval views;
	zval *handle_param = NULL, *index_param = NULL, *views_param = NULL, _0, _1;
	zend_long handle, index;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&views);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(index)
		Z_PARAM_ARRAY(views)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &index_param, &views_param);
	zephir_get_arrval(&views, views_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, index);
	RETURN_MM_LONG(ns_nsgridview_insert_column_at_index_with_views(&_0, &_1, &views));
}

PHP_METHOD(AppKit_NS_NSGridView_NSGridView, moveColumnAtIndexToIndex)
{
	zval *handle_param = NULL, *fromIndex_param = NULL, *toIndex_param = NULL, _0, _1, _2;
	zend_long handle, fromIndex, toIndex;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(fromIndex)
		Z_PARAM_LONG(toIndex)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &fromIndex_param, &toIndex_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, fromIndex);
	ZVAL_LONG(&_2, toIndex);
	ns_nsgridview_move_column_at_index_to_index(&_0, &_1, &_2);
}

PHP_METHOD(AppKit_NS_NSGridView_NSGridView, removeColumnAtIndex)
{
	zval *handle_param = NULL, *index_param = NULL, _0, _1;
	zend_long handle, index;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(index)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &index_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, index);
	ns_nsgridview_remove_column_at_index(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSGridView_NSGridView, xPlacement)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsgridview_x_placement(&_0));
}

PHP_METHOD(AppKit_NS_NSGridView_NSGridView, setXPlacement)
{
	zval *handle_param = NULL, *xPlacement_param = NULL, _0, _1;
	zend_long handle, xPlacement;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(xPlacement)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &xPlacement_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, xPlacement);
	ns_nsgridview_set_x_placement(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSGridView_NSGridView, yPlacement)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsgridview_y_placement(&_0));
}

PHP_METHOD(AppKit_NS_NSGridView_NSGridView, setYPlacement)
{
	zval *handle_param = NULL, *yPlacement_param = NULL, _0, _1;
	zend_long handle, yPlacement;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(yPlacement)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &yPlacement_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, yPlacement);
	ns_nsgridview_set_y_placement(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSGridView_NSGridView, rowAlignment)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsgridview_row_alignment(&_0));
}

PHP_METHOD(AppKit_NS_NSGridView_NSGridView, setRowAlignment)
{
	zval *handle_param = NULL, *rowAlignment_param = NULL, _0, _1;
	zend_long handle, rowAlignment;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(rowAlignment)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &rowAlignment_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, rowAlignment);
	ns_nsgridview_set_row_alignment(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSGridView_NSGridView, rowSpacing)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(ns_nsgridview_row_spacing(&_0));
}

PHP_METHOD(AppKit_NS_NSGridView_NSGridView, setRowSpacing)
{
	double rowSpacing;
	zval *handle_param = NULL, *rowSpacing_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(rowSpacing)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &rowSpacing_param);
	rowSpacing = zephir_get_doubleval(rowSpacing_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, rowSpacing);
	ns_nsgridview_set_row_spacing(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSGridView_NSGridView, columnSpacing)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(ns_nsgridview_column_spacing(&_0));
}

PHP_METHOD(AppKit_NS_NSGridView_NSGridView, setColumnSpacing)
{
	double columnSpacing;
	zval *handle_param = NULL, *columnSpacing_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(columnSpacing)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &columnSpacing_param);
	columnSpacing = zephir_get_doubleval(columnSpacing_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, columnSpacing);
	ns_nsgridview_set_column_spacing(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSGridView_NSGridView, mergeCellsInHorizontalRangeVerticalRange)
{
	zval *handle_param = NULL, *hLocation_param = NULL, *hLength_param = NULL, *vLocation_param = NULL, *vLength_param = NULL, _0, _1, _2, _3, _4;
	zend_long handle, hLocation, hLength, vLocation, vLength;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(hLocation)
		Z_PARAM_LONG(hLength)
		Z_PARAM_LONG(vLocation)
		Z_PARAM_LONG(vLength)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &handle_param, &hLocation_param, &hLength_param, &vLocation_param, &vLength_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, hLocation);
	ZVAL_LONG(&_2, hLength);
	ZVAL_LONG(&_3, vLocation);
	ZVAL_LONG(&_4, vLength);
	ns_nsgridview_merge_cells_in_horizontal_range_vertical_range(&_0, &_1, &_2, &_3, &_4);
}

