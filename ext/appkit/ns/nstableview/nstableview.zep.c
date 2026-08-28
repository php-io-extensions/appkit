
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
#include "src/ns-tableview.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(AppKit_NS_NSTableView_NSTableView)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSTableView, NSTableView, appkit, ns_nstableview_nstableview, appkit_ns_nstableview_nstableview_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSTableView_NSTableView, initWithFrame)
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
	RETURN_LONG(ns_nstableview_init_with_frame(&_0, &_1, &_2, &_3));
}

PHP_METHOD(AppKit_NS_NSTableView_NSTableView, dataSource)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nstableview_data_source(&_0));
}

PHP_METHOD(AppKit_NS_NSTableView_NSTableView, setDataSource)
{
	zval *handle_param = NULL, *dataSource_param = NULL, _0, _1;
	zend_long handle, dataSource;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(dataSource)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &dataSource_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, dataSource);
	ns_nstableview_set_data_source(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTableView_NSTableView, delegate)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nstableview_delegate(&_0));
}

PHP_METHOD(AppKit_NS_NSTableView_NSTableView, setDelegate)
{
	zval *handle_param = NULL, *delegate_param = NULL, _0, _1;
	zend_long handle, delegate;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(delegate)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &delegate_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, delegate);
	ns_nstableview_set_delegate(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTableView_NSTableView, headerView)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nstableview_header_view(&_0));
}

PHP_METHOD(AppKit_NS_NSTableView_NSTableView, setHeaderView)
{
	zval *handle_param = NULL, *headerView_param = NULL, _0, _1;
	zend_long handle, headerView;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(headerView)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &headerView_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, headerView);
	ns_nstableview_set_header_view(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTableView_NSTableView, cornerView)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nstableview_corner_view(&_0));
}

PHP_METHOD(AppKit_NS_NSTableView_NSTableView, setCornerView)
{
	zval *handle_param = NULL, *cornerView_param = NULL, _0, _1;
	zend_long handle, cornerView;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(cornerView)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &cornerView_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, cornerView);
	ns_nstableview_set_corner_view(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTableView_NSTableView, allowsColumnReordering)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nstableview_allows_column_reordering(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSTableView_NSTableView, setAllowsColumnReordering)
{
	zend_bool allowsColumnReordering;
	zval *handle_param = NULL, *allowsColumnReordering_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(allowsColumnReordering)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &allowsColumnReordering_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (allowsColumnReordering ? 1 : 0));
	ns_nstableview_set_allows_column_reordering(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTableView_NSTableView, allowsColumnResizing)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nstableview_allows_column_resizing(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSTableView_NSTableView, setAllowsColumnResizing)
{
	zend_bool allowsColumnResizing;
	zval *handle_param = NULL, *allowsColumnResizing_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(allowsColumnResizing)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &allowsColumnResizing_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (allowsColumnResizing ? 1 : 0));
	ns_nstableview_set_allows_column_resizing(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTableView_NSTableView, columnAutoresizingStyle)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nstableview_column_autoresizing_style(&_0));
}

PHP_METHOD(AppKit_NS_NSTableView_NSTableView, setColumnAutoresizingStyle)
{
	zval *handle_param = NULL, *columnAutoresizingStyle_param = NULL, _0, _1;
	zend_long handle, columnAutoresizingStyle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(columnAutoresizingStyle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &columnAutoresizingStyle_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, columnAutoresizingStyle);
	ns_nstableview_set_column_autoresizing_style(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTableView_NSTableView, gridStyleMask)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nstableview_grid_style_mask(&_0));
}

PHP_METHOD(AppKit_NS_NSTableView_NSTableView, setGridStyleMask)
{
	zval *handle_param = NULL, *gridStyleMask_param = NULL, _0, _1;
	zend_long handle, gridStyleMask;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(gridStyleMask)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &gridStyleMask_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, gridStyleMask);
	ns_nstableview_set_grid_style_mask(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTableView_NSTableView, intercellSpacing)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &handle_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ns_nstableview_intercell_spacing(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSTableView_NSTableView, setIntercellSpacing)
{
	double width, height;
	zval *handle_param = NULL, *width_param = NULL, *height_param = NULL, _0, _1, _2;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(width)
		Z_PARAM_ZVAL(height)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &width_param, &height_param);
	width = zephir_get_doubleval(width_param);
	height = zephir_get_doubleval(height_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, width);
	ZVAL_DOUBLE(&_2, height);
	ns_nstableview_set_intercell_spacing(&_0, &_1, &_2);
}

PHP_METHOD(AppKit_NS_NSTableView_NSTableView, usesAlternatingRowBackgroundColors)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nstableview_uses_alternating_row_background_colors(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSTableView_NSTableView, setUsesAlternatingRowBackgroundColors)
{
	zend_bool usesAlternatingRowBackgroundColors;
	zval *handle_param = NULL, *usesAlternatingRowBackgroundColors_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(usesAlternatingRowBackgroundColors)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &usesAlternatingRowBackgroundColors_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (usesAlternatingRowBackgroundColors ? 1 : 0));
	ns_nstableview_set_uses_alternating_row_background_colors(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTableView_NSTableView, backgroundColor)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nstableview_background_color(&_0));
}

PHP_METHOD(AppKit_NS_NSTableView_NSTableView, setBackgroundColor)
{
	zval *handle_param = NULL, *backgroundColor_param = NULL, _0, _1;
	zend_long handle, backgroundColor;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(backgroundColor)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &backgroundColor_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, backgroundColor);
	ns_nstableview_set_background_color(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTableView_NSTableView, gridColor)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nstableview_grid_color(&_0));
}

PHP_METHOD(AppKit_NS_NSTableView_NSTableView, setGridColor)
{
	zval *handle_param = NULL, *gridColor_param = NULL, _0, _1;
	zend_long handle, gridColor;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(gridColor)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &gridColor_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, gridColor);
	ns_nstableview_set_grid_color(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTableView_NSTableView, rowSizeStyle)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nstableview_row_size_style(&_0));
}

PHP_METHOD(AppKit_NS_NSTableView_NSTableView, setRowSizeStyle)
{
	zval *handle_param = NULL, *rowSizeStyle_param = NULL, _0, _1;
	zend_long handle, rowSizeStyle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(rowSizeStyle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &rowSizeStyle_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, rowSizeStyle);
	ns_nstableview_set_row_size_style(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTableView_NSTableView, effectiveRowSizeStyle)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nstableview_effective_row_size_style(&_0));
}

PHP_METHOD(AppKit_NS_NSTableView_NSTableView, rowHeight)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(ns_nstableview_row_height(&_0));
}

PHP_METHOD(AppKit_NS_NSTableView_NSTableView, setRowHeight)
{
	double rowHeight;
	zval *handle_param = NULL, *rowHeight_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(rowHeight)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &rowHeight_param);
	rowHeight = zephir_get_doubleval(rowHeight_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, rowHeight);
	ns_nstableview_set_row_height(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTableView_NSTableView, noteHeightOfRowsWithIndexesChanged)
{
	zval *handle_param = NULL, *indexSet_param = NULL, _0, _1;
	zend_long handle, indexSet;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(indexSet)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &indexSet_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, indexSet);
	ns_nstableview_note_height_of_rows_with_indexes_changed(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTableView_NSTableView, tableColumns)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &handle_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ns_nstableview_table_columns(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSTableView_NSTableView, numberOfColumns)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nstableview_number_of_columns(&_0));
}

PHP_METHOD(AppKit_NS_NSTableView_NSTableView, numberOfRows)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nstableview_number_of_rows(&_0));
}

PHP_METHOD(AppKit_NS_NSTableView_NSTableView, addTableColumn)
{
	zval *handle_param = NULL, *tableColumn_param = NULL, _0, _1;
	zend_long handle, tableColumn;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(tableColumn)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &tableColumn_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, tableColumn);
	ns_nstableview_add_table_column(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTableView_NSTableView, removeTableColumn)
{
	zval *handle_param = NULL, *tableColumn_param = NULL, _0, _1;
	zend_long handle, tableColumn;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(tableColumn)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &tableColumn_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, tableColumn);
	ns_nstableview_remove_table_column(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTableView_NSTableView, moveColumnToColumn)
{
	zval *handle_param = NULL, *oldIndex_param = NULL, *newIndex_param = NULL, _0, _1, _2;
	zend_long handle, oldIndex, newIndex;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(oldIndex)
		Z_PARAM_LONG(newIndex)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &oldIndex_param, &newIndex_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, oldIndex);
	ZVAL_LONG(&_2, newIndex);
	ns_nstableview_move_column_to_column(&_0, &_1, &_2);
}

PHP_METHOD(AppKit_NS_NSTableView_NSTableView, columnWithIdentifier)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval identifier;
	zval *handle_param = NULL, *identifier_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&identifier);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(identifier)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &identifier_param);
	zephir_get_strval(&identifier, identifier_param);
	ZVAL_LONG(&_0, handle);
	RETURN_MM_LONG(ns_nstableview_column_with_identifier(&_0, &identifier));
}

PHP_METHOD(AppKit_NS_NSTableView_NSTableView, tableColumnWithIdentifier)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval identifier;
	zval *handle_param = NULL, *identifier_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&identifier);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(identifier)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &identifier_param);
	zephir_get_strval(&identifier, identifier_param);
	ZVAL_LONG(&_0, handle);
	RETURN_MM_LONG(ns_nstableview_table_column_with_identifier(&_0, &identifier));
}

PHP_METHOD(AppKit_NS_NSTableView_NSTableView, tile)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	ns_nstableview_tile(&_0);
}

PHP_METHOD(AppKit_NS_NSTableView_NSTableView, sizeToFit)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	ns_nstableview_size_to_fit(&_0);
}

PHP_METHOD(AppKit_NS_NSTableView_NSTableView, sizeLastColumnToFit)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	ns_nstableview_size_last_column_to_fit(&_0);
}

PHP_METHOD(AppKit_NS_NSTableView_NSTableView, scrollRowToVisible)
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
	ns_nstableview_scroll_row_to_visible(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTableView_NSTableView, scrollColumnToVisible)
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
	ns_nstableview_scroll_column_to_visible(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTableView_NSTableView, reloadData)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	ns_nstableview_reload_data(&_0);
}

PHP_METHOD(AppKit_NS_NSTableView_NSTableView, noteNumberOfRowsChanged)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	ns_nstableview_note_number_of_rows_changed(&_0);
}

PHP_METHOD(AppKit_NS_NSTableView_NSTableView, reloadDataForRowIndexesColumnIndexes)
{
	zval *handle_param = NULL, *rowIndexes_param = NULL, *columnIndexes_param = NULL, _0, _1, _2;
	zend_long handle, rowIndexes, columnIndexes;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(rowIndexes)
		Z_PARAM_LONG(columnIndexes)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &rowIndexes_param, &columnIndexes_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, rowIndexes);
	ZVAL_LONG(&_2, columnIndexes);
	ns_nstableview_reload_data_for_row_indexes_column_indexes(&_0, &_1, &_2);
}

PHP_METHOD(AppKit_NS_NSTableView_NSTableView, editedColumn)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nstableview_edited_column(&_0));
}

PHP_METHOD(AppKit_NS_NSTableView_NSTableView, editedRow)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nstableview_edited_row(&_0));
}

PHP_METHOD(AppKit_NS_NSTableView_NSTableView, clickedColumn)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nstableview_clicked_column(&_0));
}

PHP_METHOD(AppKit_NS_NSTableView_NSTableView, clickedRow)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nstableview_clicked_row(&_0));
}

PHP_METHOD(AppKit_NS_NSTableView_NSTableView, doubleAction)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &handle_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ns_nstableview_double_action(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSTableView_NSTableView, setDoubleAction)
{
	zval *handle_param = NULL, *doubleAction = NULL, doubleAction_sub, _0;
	zend_long handle;

	ZVAL_UNDEF(&doubleAction_sub);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(doubleAction)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &doubleAction);
	ZVAL_LONG(&_0, handle);
	ns_nstableview_set_double_action(&_0, doubleAction);
}

PHP_METHOD(AppKit_NS_NSTableView_NSTableView, sortDescriptors)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &handle_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ns_nstableview_sort_descriptors(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSTableView_NSTableView, setSortDescriptors)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval sortDescriptors;
	zval *handle_param = NULL, *sortDescriptors_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&sortDescriptors);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ARRAY(sortDescriptors)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &sortDescriptors_param);
	zephir_get_arrval(&sortDescriptors, sortDescriptors_param);
	ZVAL_LONG(&_0, handle);
	ns_nstableview_set_sort_descriptors(&_0, &sortDescriptors);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSTableView_NSTableView, setIndicatorImageInTableColumn)
{
	zval *handle_param = NULL, *image_param = NULL, *tableColumn_param = NULL, _0, _1, _2;
	zend_long handle, image, tableColumn;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(image)
		Z_PARAM_LONG(tableColumn)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &image_param, &tableColumn_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, image);
	ZVAL_LONG(&_2, tableColumn);
	ns_nstableview_set_indicator_image_in_table_column(&_0, &_1, &_2);
}

PHP_METHOD(AppKit_NS_NSTableView_NSTableView, indicatorImageInTableColumn)
{
	zval *handle_param = NULL, *tableColumn_param = NULL, _0, _1;
	zend_long handle, tableColumn;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(tableColumn)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &tableColumn_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, tableColumn);
	RETURN_LONG(ns_nstableview_indicator_image_in_table_column(&_0, &_1));
}

PHP_METHOD(AppKit_NS_NSTableView_NSTableView, highlightedTableColumn)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nstableview_highlighted_table_column(&_0));
}

PHP_METHOD(AppKit_NS_NSTableView_NSTableView, setHighlightedTableColumn)
{
	zval *handle_param = NULL, *tableColumn_param = NULL, _0, _1;
	zend_long handle, tableColumn;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(tableColumn)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &tableColumn_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, tableColumn);
	ns_nstableview_set_highlighted_table_column(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTableView_NSTableView, verticalMotionCanBeginDrag)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nstableview_vertical_motion_can_begin_drag(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSTableView_NSTableView, setVerticalMotionCanBeginDrag)
{
	zend_bool verticalMotionCanBeginDrag;
	zval *handle_param = NULL, *verticalMotionCanBeginDrag_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(verticalMotionCanBeginDrag)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &verticalMotionCanBeginDrag_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (verticalMotionCanBeginDrag ? 1 : 0));
	ns_nstableview_set_vertical_motion_can_begin_drag(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTableView_NSTableView, canDragRowsWithIndexesAtPoint)
{
	double x, y;
	zval *handle_param = NULL, *rowIndexes_param = NULL, *x_param = NULL, *y_param = NULL, _0, _1, _2, _3;
	zend_long handle, rowIndexes, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(rowIndexes)
		Z_PARAM_ZVAL(x)
		Z_PARAM_ZVAL(y)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &rowIndexes_param, &x_param, &y_param);
	x = zephir_get_doubleval(x_param);
	y = zephir_get_doubleval(y_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, rowIndexes);
	ZVAL_DOUBLE(&_2, x);
	ZVAL_DOUBLE(&_3, y);
	r = ns_nstableview_can_drag_rows_with_indexes_at_point(&_0, &_1, &_2, &_3);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSTableView_NSTableView, setDraggingSourceOperationMaskForLocal)
{
	zend_bool isLocal;
	zval *handle_param = NULL, *mask_param = NULL, *isLocal_param = NULL, _0, _1, _2;
	zend_long handle, mask;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(mask)
		Z_PARAM_BOOL(isLocal)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &mask_param, &isLocal_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, mask);
	ZVAL_BOOL(&_2, (isLocal ? 1 : 0));
	ns_nstableview_set_dragging_source_operation_mask_for_local(&_0, &_1, &_2);
}

PHP_METHOD(AppKit_NS_NSTableView_NSTableView, setDropRowDropOperation)
{
	zval *handle_param = NULL, *row_param = NULL, *dropOperation_param = NULL, _0, _1, _2;
	zend_long handle, row, dropOperation;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(row)
		Z_PARAM_LONG(dropOperation)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &row_param, &dropOperation_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, row);
	ZVAL_LONG(&_2, dropOperation);
	ns_nstableview_set_drop_row_drop_operation(&_0, &_1, &_2);
}

PHP_METHOD(AppKit_NS_NSTableView_NSTableView, allowsMultipleSelection)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nstableview_allows_multiple_selection(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSTableView_NSTableView, setAllowsMultipleSelection)
{
	zend_bool allowsMultipleSelection;
	zval *handle_param = NULL, *allowsMultipleSelection_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(allowsMultipleSelection)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &allowsMultipleSelection_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (allowsMultipleSelection ? 1 : 0));
	ns_nstableview_set_allows_multiple_selection(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTableView_NSTableView, allowsEmptySelection)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nstableview_allows_empty_selection(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSTableView_NSTableView, setAllowsEmptySelection)
{
	zend_bool allowsEmptySelection;
	zval *handle_param = NULL, *allowsEmptySelection_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(allowsEmptySelection)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &allowsEmptySelection_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (allowsEmptySelection ? 1 : 0));
	ns_nstableview_set_allows_empty_selection(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTableView_NSTableView, allowsColumnSelection)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nstableview_allows_column_selection(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSTableView_NSTableView, setAllowsColumnSelection)
{
	zend_bool allowsColumnSelection;
	zval *handle_param = NULL, *allowsColumnSelection_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(allowsColumnSelection)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &allowsColumnSelection_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (allowsColumnSelection ? 1 : 0));
	ns_nstableview_set_allows_column_selection(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTableView_NSTableView, selectAll)
{
	zval *handle_param = NULL, *sender_param = NULL, _0, _1;
	zend_long handle, sender;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(sender)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &sender_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, sender);
	ns_nstableview_select_all(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTableView_NSTableView, deselectAll)
{
	zval *handle_param = NULL, *sender_param = NULL, _0, _1;
	zend_long handle, sender;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(sender)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &sender_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, sender);
	ns_nstableview_deselect_all(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTableView_NSTableView, selectColumnIndexesByExtendingSelection)
{
	zend_bool extend;
	zval *handle_param = NULL, *indexes_param = NULL, *extend_param = NULL, _0, _1, _2;
	zend_long handle, indexes;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(indexes)
		Z_PARAM_BOOL(extend)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &indexes_param, &extend_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, indexes);
	ZVAL_BOOL(&_2, (extend ? 1 : 0));
	ns_nstableview_select_column_indexes_by_extending_selection(&_0, &_1, &_2);
}

PHP_METHOD(AppKit_NS_NSTableView_NSTableView, selectRowIndexesByExtendingSelection)
{
	zend_bool extend;
	zval *handle_param = NULL, *indexes_param = NULL, *extend_param = NULL, _0, _1, _2;
	zend_long handle, indexes;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(indexes)
		Z_PARAM_BOOL(extend)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &indexes_param, &extend_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, indexes);
	ZVAL_BOOL(&_2, (extend ? 1 : 0));
	ns_nstableview_select_row_indexes_by_extending_selection(&_0, &_1, &_2);
}

PHP_METHOD(AppKit_NS_NSTableView_NSTableView, selectedColumnIndexes)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nstableview_selected_column_indexes(&_0));
}

PHP_METHOD(AppKit_NS_NSTableView_NSTableView, selectedRowIndexes)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nstableview_selected_row_indexes(&_0));
}

PHP_METHOD(AppKit_NS_NSTableView_NSTableView, deselectColumn)
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
	ns_nstableview_deselect_column(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTableView_NSTableView, deselectRow)
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
	ns_nstableview_deselect_row(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTableView_NSTableView, selectedColumn)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nstableview_selected_column(&_0));
}

PHP_METHOD(AppKit_NS_NSTableView_NSTableView, selectedRow)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nstableview_selected_row(&_0));
}

PHP_METHOD(AppKit_NS_NSTableView_NSTableView, isColumnSelected)
{
	zval *handle_param = NULL, *column_param = NULL, _0, _1;
	zend_long handle, column, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(column)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &column_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, column);
	r = ns_nstableview_is_column_selected(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSTableView_NSTableView, isRowSelected)
{
	zval *handle_param = NULL, *row_param = NULL, _0, _1;
	zend_long handle, row, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(row)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &row_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, row);
	r = ns_nstableview_is_row_selected(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSTableView_NSTableView, numberOfSelectedColumns)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nstableview_number_of_selected_columns(&_0));
}

PHP_METHOD(AppKit_NS_NSTableView_NSTableView, numberOfSelectedRows)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nstableview_number_of_selected_rows(&_0));
}

PHP_METHOD(AppKit_NS_NSTableView_NSTableView, allowsTypeSelect)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nstableview_allows_type_select(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSTableView_NSTableView, setAllowsTypeSelect)
{
	zend_bool allowsTypeSelect;
	zval *handle_param = NULL, *allowsTypeSelect_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(allowsTypeSelect)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &allowsTypeSelect_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (allowsTypeSelect ? 1 : 0));
	ns_nstableview_set_allows_type_select(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTableView_NSTableView, style)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nstableview_style(&_0));
}

PHP_METHOD(AppKit_NS_NSTableView_NSTableView, setStyle)
{
	zval *handle_param = NULL, *style_param = NULL, _0, _1;
	zend_long handle, style;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(style)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &style_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, style);
	ns_nstableview_set_style(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTableView_NSTableView, effectiveStyle)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nstableview_effective_style(&_0));
}

PHP_METHOD(AppKit_NS_NSTableView_NSTableView, selectionHighlightStyle)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nstableview_selection_highlight_style(&_0));
}

PHP_METHOD(AppKit_NS_NSTableView_NSTableView, setSelectionHighlightStyle)
{
	zval *handle_param = NULL, *selectionHighlightStyle_param = NULL, _0, _1;
	zend_long handle, selectionHighlightStyle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(selectionHighlightStyle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &selectionHighlightStyle_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, selectionHighlightStyle);
	ns_nstableview_set_selection_highlight_style(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTableView_NSTableView, draggingDestinationFeedbackStyle)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nstableview_dragging_destination_feedback_style(&_0));
}

PHP_METHOD(AppKit_NS_NSTableView_NSTableView, setDraggingDestinationFeedbackStyle)
{
	zval *handle_param = NULL, *draggingDestinationFeedbackStyle_param = NULL, _0, _1;
	zend_long handle, draggingDestinationFeedbackStyle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(draggingDestinationFeedbackStyle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &draggingDestinationFeedbackStyle_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, draggingDestinationFeedbackStyle);
	ns_nstableview_set_dragging_destination_feedback_style(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTableView_NSTableView, rectOfColumn)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *column_param = NULL, result, _0, _1;
	zend_long handle, column;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(column)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &column_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, column);
	ns_nstableview_rect_of_column(&result, &_0, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSTableView_NSTableView, rectOfRow)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *row_param = NULL, result, _0, _1;
	zend_long handle, row;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(row)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &row_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, row);
	ns_nstableview_rect_of_row(&result, &_0, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSTableView_NSTableView, columnIndexesInRect)
{
	double x, y, width, height;
	zval *handle_param = NULL, *x_param = NULL, *y_param = NULL, *width_param = NULL, *height_param = NULL, _0, _1, _2, _3, _4;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(x)
		Z_PARAM_ZVAL(y)
		Z_PARAM_ZVAL(width)
		Z_PARAM_ZVAL(height)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &handle_param, &x_param, &y_param, &width_param, &height_param);
	x = zephir_get_doubleval(x_param);
	y = zephir_get_doubleval(y_param);
	width = zephir_get_doubleval(width_param);
	height = zephir_get_doubleval(height_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, x);
	ZVAL_DOUBLE(&_2, y);
	ZVAL_DOUBLE(&_3, width);
	ZVAL_DOUBLE(&_4, height);
	RETURN_LONG(ns_nstableview_column_indexes_in_rect(&_0, &_1, &_2, &_3, &_4));
}

PHP_METHOD(AppKit_NS_NSTableView_NSTableView, rowsInRect)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	double x, y, width, height;
	zval *handle_param = NULL, *x_param = NULL, *y_param = NULL, *width_param = NULL, *height_param = NULL, result, _0, _1, _2, _3, _4;
	zend_long handle;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(x)
		Z_PARAM_ZVAL(y)
		Z_PARAM_ZVAL(width)
		Z_PARAM_ZVAL(height)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 5, 0, &handle_param, &x_param, &y_param, &width_param, &height_param);
	x = zephir_get_doubleval(x_param);
	y = zephir_get_doubleval(y_param);
	width = zephir_get_doubleval(width_param);
	height = zephir_get_doubleval(height_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, x);
	ZVAL_DOUBLE(&_2, y);
	ZVAL_DOUBLE(&_3, width);
	ZVAL_DOUBLE(&_4, height);
	ns_nstableview_rows_in_rect(&result, &_0, &_1, &_2, &_3, &_4);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSTableView_NSTableView, columnAtPoint)
{
	double x, y;
	zval *handle_param = NULL, *x_param = NULL, *y_param = NULL, _0, _1, _2;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(x)
		Z_PARAM_ZVAL(y)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &x_param, &y_param);
	x = zephir_get_doubleval(x_param);
	y = zephir_get_doubleval(y_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, x);
	ZVAL_DOUBLE(&_2, y);
	RETURN_LONG(ns_nstableview_column_at_point(&_0, &_1, &_2));
}

PHP_METHOD(AppKit_NS_NSTableView_NSTableView, rowAtPoint)
{
	double x, y;
	zval *handle_param = NULL, *x_param = NULL, *y_param = NULL, _0, _1, _2;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(x)
		Z_PARAM_ZVAL(y)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &x_param, &y_param);
	x = zephir_get_doubleval(x_param);
	y = zephir_get_doubleval(y_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, x);
	ZVAL_DOUBLE(&_2, y);
	RETURN_LONG(ns_nstableview_row_at_point(&_0, &_1, &_2));
}

PHP_METHOD(AppKit_NS_NSTableView_NSTableView, frameOfCellAtColumnRow)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *column_param = NULL, *row_param = NULL, result, _0, _1, _2;
	zend_long handle, column, row;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(column)
		Z_PARAM_LONG(row)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &column_param, &row_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, column);
	ZVAL_LONG(&_2, row);
	ns_nstableview_frame_of_cell_at_column_row(&result, &_0, &_1, &_2);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSTableView_NSTableView, autosaveName)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &handle_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ns_nstableview_autosave_name(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSTableView_NSTableView, setAutosaveName)
{
	zval *handle_param = NULL, *autosaveName = NULL, autosaveName_sub, _0;
	zend_long handle;

	ZVAL_UNDEF(&autosaveName_sub);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(autosaveName)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &autosaveName);
	ZVAL_LONG(&_0, handle);
	ns_nstableview_set_autosave_name(&_0, autosaveName);
}

PHP_METHOD(AppKit_NS_NSTableView_NSTableView, autosaveTableColumns)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nstableview_autosave_table_columns(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSTableView_NSTableView, setAutosaveTableColumns)
{
	zend_bool autosaveTableColumns;
	zval *handle_param = NULL, *autosaveTableColumns_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(autosaveTableColumns)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &autosaveTableColumns_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (autosaveTableColumns ? 1 : 0));
	ns_nstableview_set_autosave_table_columns(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTableView_NSTableView, editColumnRowWithEventSelect)
{
	zend_bool select;
	zval *handle_param = NULL, *column_param = NULL, *row_param = NULL, *event_param = NULL, *select_param = NULL, _0, _1, _2, _3, _4;
	zend_long handle, column, row, event;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(column)
		Z_PARAM_LONG(row)
		Z_PARAM_LONG(event)
		Z_PARAM_BOOL(select)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &handle_param, &column_param, &row_param, &event_param, &select_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, column);
	ZVAL_LONG(&_2, row);
	ZVAL_LONG(&_3, event);
	ZVAL_BOOL(&_4, (select ? 1 : 0));
	ns_nstableview_edit_column_row_with_event_select(&_0, &_1, &_2, &_3, &_4);
}

PHP_METHOD(AppKit_NS_NSTableView_NSTableView, drawRowClipRect)
{
	double x, y, width, height;
	zval *handle_param = NULL, *row_param = NULL, *x_param = NULL, *y_param = NULL, *width_param = NULL, *height_param = NULL, _0, _1, _2, _3, _4, _5;
	zend_long handle, row;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZEND_PARSE_PARAMETERS_START(6, 6)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(row)
		Z_PARAM_ZVAL(x)
		Z_PARAM_ZVAL(y)
		Z_PARAM_ZVAL(width)
		Z_PARAM_ZVAL(height)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(6, 0, &handle_param, &row_param, &x_param, &y_param, &width_param, &height_param);
	x = zephir_get_doubleval(x_param);
	y = zephir_get_doubleval(y_param);
	width = zephir_get_doubleval(width_param);
	height = zephir_get_doubleval(height_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, row);
	ZVAL_DOUBLE(&_2, x);
	ZVAL_DOUBLE(&_3, y);
	ZVAL_DOUBLE(&_4, width);
	ZVAL_DOUBLE(&_5, height);
	ns_nstableview_draw_row_clip_rect(&_0, &_1, &_2, &_3, &_4, &_5);
}

PHP_METHOD(AppKit_NS_NSTableView_NSTableView, highlightSelectionInClipRect)
{
	double x, y, width, height;
	zval *handle_param = NULL, *x_param = NULL, *y_param = NULL, *width_param = NULL, *height_param = NULL, _0, _1, _2, _3, _4;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(x)
		Z_PARAM_ZVAL(y)
		Z_PARAM_ZVAL(width)
		Z_PARAM_ZVAL(height)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &handle_param, &x_param, &y_param, &width_param, &height_param);
	x = zephir_get_doubleval(x_param);
	y = zephir_get_doubleval(y_param);
	width = zephir_get_doubleval(width_param);
	height = zephir_get_doubleval(height_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, x);
	ZVAL_DOUBLE(&_2, y);
	ZVAL_DOUBLE(&_3, width);
	ZVAL_DOUBLE(&_4, height);
	ns_nstableview_highlight_selection_in_clip_rect(&_0, &_1, &_2, &_3, &_4);
}

PHP_METHOD(AppKit_NS_NSTableView_NSTableView, drawGridInClipRect)
{
	double x, y, width, height;
	zval *handle_param = NULL, *x_param = NULL, *y_param = NULL, *width_param = NULL, *height_param = NULL, _0, _1, _2, _3, _4;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(x)
		Z_PARAM_ZVAL(y)
		Z_PARAM_ZVAL(width)
		Z_PARAM_ZVAL(height)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &handle_param, &x_param, &y_param, &width_param, &height_param);
	x = zephir_get_doubleval(x_param);
	y = zephir_get_doubleval(y_param);
	width = zephir_get_doubleval(width_param);
	height = zephir_get_doubleval(height_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, x);
	ZVAL_DOUBLE(&_2, y);
	ZVAL_DOUBLE(&_3, width);
	ZVAL_DOUBLE(&_4, height);
	ns_nstableview_draw_grid_in_clip_rect(&_0, &_1, &_2, &_3, &_4);
}

PHP_METHOD(AppKit_NS_NSTableView_NSTableView, drawBackgroundInClipRect)
{
	double x, y, width, height;
	zval *handle_param = NULL, *x_param = NULL, *y_param = NULL, *width_param = NULL, *height_param = NULL, _0, _1, _2, _3, _4;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(x)
		Z_PARAM_ZVAL(y)
		Z_PARAM_ZVAL(width)
		Z_PARAM_ZVAL(height)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &handle_param, &x_param, &y_param, &width_param, &height_param);
	x = zephir_get_doubleval(x_param);
	y = zephir_get_doubleval(y_param);
	width = zephir_get_doubleval(width_param);
	height = zephir_get_doubleval(height_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, x);
	ZVAL_DOUBLE(&_2, y);
	ZVAL_DOUBLE(&_3, width);
	ZVAL_DOUBLE(&_4, height);
	ns_nstableview_draw_background_in_clip_rect(&_0, &_1, &_2, &_3, &_4);
}

PHP_METHOD(AppKit_NS_NSTableView_NSTableView, viewAtColumnRowMakeIfNecessary)
{
	zend_bool makeIfNecessary;
	zval *handle_param = NULL, *column_param = NULL, *row_param = NULL, *makeIfNecessary_param = NULL, _0, _1, _2, _3;
	zend_long handle, column, row;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(column)
		Z_PARAM_LONG(row)
		Z_PARAM_BOOL(makeIfNecessary)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &column_param, &row_param, &makeIfNecessary_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, column);
	ZVAL_LONG(&_2, row);
	ZVAL_BOOL(&_3, (makeIfNecessary ? 1 : 0));
	RETURN_LONG(ns_nstableview_view_at_column_row_make_if_necessary(&_0, &_1, &_2, &_3));
}

PHP_METHOD(AppKit_NS_NSTableView_NSTableView, rowViewAtRowMakeIfNecessary)
{
	zend_bool makeIfNecessary;
	zval *handle_param = NULL, *row_param = NULL, *makeIfNecessary_param = NULL, _0, _1, _2;
	zend_long handle, row;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(row)
		Z_PARAM_BOOL(makeIfNecessary)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &row_param, &makeIfNecessary_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, row);
	ZVAL_BOOL(&_2, (makeIfNecessary ? 1 : 0));
	RETURN_LONG(ns_nstableview_row_view_at_row_make_if_necessary(&_0, &_1, &_2));
}

PHP_METHOD(AppKit_NS_NSTableView_NSTableView, rowForView)
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
	RETURN_LONG(ns_nstableview_row_for_view(&_0, &_1));
}

PHP_METHOD(AppKit_NS_NSTableView_NSTableView, columnForView)
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
	RETURN_LONG(ns_nstableview_column_for_view(&_0, &_1));
}

PHP_METHOD(AppKit_NS_NSTableView_NSTableView, makeViewWithIdentifierOwner)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval identifier;
	zval *handle_param = NULL, *identifier_param = NULL, *owner_param = NULL, _0, _1;
	zend_long handle, owner;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&identifier);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(identifier)
		Z_PARAM_LONG(owner)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &identifier_param, &owner_param);
	zephir_get_strval(&identifier, identifier_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, owner);
	RETURN_MM_LONG(ns_nstableview_make_view_with_identifier_owner(&_0, &identifier, &_1));
}

PHP_METHOD(AppKit_NS_NSTableView_NSTableView, floatsGroupRows)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nstableview_floats_group_rows(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSTableView_NSTableView, setFloatsGroupRows)
{
	zend_bool floatsGroupRows;
	zval *handle_param = NULL, *floatsGroupRows_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(floatsGroupRows)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &floatsGroupRows_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (floatsGroupRows ? 1 : 0));
	ns_nstableview_set_floats_group_rows(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTableView_NSTableView, rowActionsVisible)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nstableview_row_actions_visible(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSTableView_NSTableView, setRowActionsVisible)
{
	zend_bool rowActionsVisible;
	zval *handle_param = NULL, *rowActionsVisible_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(rowActionsVisible)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &rowActionsVisible_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (rowActionsVisible ? 1 : 0));
	ns_nstableview_set_row_actions_visible(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTableView_NSTableView, beginUpdates)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	ns_nstableview_begin_updates(&_0);
}

PHP_METHOD(AppKit_NS_NSTableView_NSTableView, endUpdates)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	ns_nstableview_end_updates(&_0);
}

PHP_METHOD(AppKit_NS_NSTableView_NSTableView, insertRowsAtIndexesWithAnimation)
{
	zval *handle_param = NULL, *indexes_param = NULL, *animationOptions_param = NULL, _0, _1, _2;
	zend_long handle, indexes, animationOptions;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(indexes)
		Z_PARAM_LONG(animationOptions)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &indexes_param, &animationOptions_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, indexes);
	ZVAL_LONG(&_2, animationOptions);
	ns_nstableview_insert_rows_at_indexes_with_animation(&_0, &_1, &_2);
}

PHP_METHOD(AppKit_NS_NSTableView_NSTableView, removeRowsAtIndexesWithAnimation)
{
	zval *handle_param = NULL, *indexes_param = NULL, *animationOptions_param = NULL, _0, _1, _2;
	zend_long handle, indexes, animationOptions;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(indexes)
		Z_PARAM_LONG(animationOptions)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &indexes_param, &animationOptions_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, indexes);
	ZVAL_LONG(&_2, animationOptions);
	ns_nstableview_remove_rows_at_indexes_with_animation(&_0, &_1, &_2);
}

PHP_METHOD(AppKit_NS_NSTableView_NSTableView, moveRowAtIndexToIndex)
{
	zval *handle_param = NULL, *oldIndex_param = NULL, *newIndex_param = NULL, _0, _1, _2;
	zend_long handle, oldIndex, newIndex;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(oldIndex)
		Z_PARAM_LONG(newIndex)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &oldIndex_param, &newIndex_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, oldIndex);
	ZVAL_LONG(&_2, newIndex);
	ns_nstableview_move_row_at_index_to_index(&_0, &_1, &_2);
}

PHP_METHOD(AppKit_NS_NSTableView_NSTableView, hideRowsAtIndexesWithAnimation)
{
	zval *handle_param = NULL, *indexes_param = NULL, *rowAnimation_param = NULL, _0, _1, _2;
	zend_long handle, indexes, rowAnimation;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(indexes)
		Z_PARAM_LONG(rowAnimation)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &indexes_param, &rowAnimation_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, indexes);
	ZVAL_LONG(&_2, rowAnimation);
	ns_nstableview_hide_rows_at_indexes_with_animation(&_0, &_1, &_2);
}

PHP_METHOD(AppKit_NS_NSTableView_NSTableView, unhideRowsAtIndexesWithAnimation)
{
	zval *handle_param = NULL, *indexes_param = NULL, *rowAnimation_param = NULL, _0, _1, _2;
	zend_long handle, indexes, rowAnimation;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(indexes)
		Z_PARAM_LONG(rowAnimation)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &indexes_param, &rowAnimation_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, indexes);
	ZVAL_LONG(&_2, rowAnimation);
	ns_nstableview_unhide_rows_at_indexes_with_animation(&_0, &_1, &_2);
}

PHP_METHOD(AppKit_NS_NSTableView_NSTableView, hiddenRowIndexes)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nstableview_hidden_row_indexes(&_0));
}

PHP_METHOD(AppKit_NS_NSTableView_NSTableView, registerNibForIdentifier)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval identifier;
	zval *handle_param = NULL, *nib_param = NULL, *identifier_param = NULL, _0, _1;
	zend_long handle, nib;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&identifier);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(nib)
		Z_PARAM_STR(identifier)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &nib_param, &identifier_param);
	zephir_get_strval(&identifier, identifier_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, nib);
	ns_nstableview_register_nib_for_identifier(&_0, &_1, &identifier);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSTableView_NSTableView, registeredNibsByIdentifier)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nstableview_registered_nibs_by_identifier(&_0));
}

PHP_METHOD(AppKit_NS_NSTableView_NSTableView, didAddRowViewForRow)
{
	zval *handle_param = NULL, *rowView_param = NULL, *row_param = NULL, _0, _1, _2;
	zend_long handle, rowView, row;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(rowView)
		Z_PARAM_LONG(row)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &rowView_param, &row_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, rowView);
	ZVAL_LONG(&_2, row);
	ns_nstableview_did_add_row_view_for_row(&_0, &_1, &_2);
}

PHP_METHOD(AppKit_NS_NSTableView_NSTableView, didRemoveRowViewForRow)
{
	zval *handle_param = NULL, *rowView_param = NULL, *row_param = NULL, _0, _1, _2;
	zend_long handle, rowView, row;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(rowView)
		Z_PARAM_LONG(row)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &rowView_param, &row_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, rowView);
	ZVAL_LONG(&_2, row);
	ns_nstableview_did_remove_row_view_for_row(&_0, &_1, &_2);
}

PHP_METHOD(AppKit_NS_NSTableView_NSTableView, usesStaticContents)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nstableview_uses_static_contents(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSTableView_NSTableView, setUsesStaticContents)
{
	zend_bool usesStaticContents;
	zval *handle_param = NULL, *usesStaticContents_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(usesStaticContents)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &usesStaticContents_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (usesStaticContents ? 1 : 0));
	ns_nstableview_set_uses_static_contents(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTableView_NSTableView, userInterfaceLayoutDirection)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nstableview_user_interface_layout_direction(&_0));
}

PHP_METHOD(AppKit_NS_NSTableView_NSTableView, setUserInterfaceLayoutDirection)
{
	zval *handle_param = NULL, *userInterfaceLayoutDirection_param = NULL, _0, _1;
	zend_long handle, userInterfaceLayoutDirection;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(userInterfaceLayoutDirection)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &userInterfaceLayoutDirection_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, userInterfaceLayoutDirection);
	ns_nstableview_set_user_interface_layout_direction(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTableView_NSTableView, usesAutomaticRowHeights)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nstableview_uses_automatic_row_heights(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSTableView_NSTableView, setUsesAutomaticRowHeights)
{
	zend_bool usesAutomaticRowHeights;
	zval *handle_param = NULL, *usesAutomaticRowHeights_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(usesAutomaticRowHeights)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &usesAutomaticRowHeights_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (usesAutomaticRowHeights ? 1 : 0));
	ns_nstableview_set_uses_automatic_row_heights(&_0, &_1);
}

