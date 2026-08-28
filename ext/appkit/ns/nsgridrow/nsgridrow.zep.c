
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
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"


ZEPHIR_INIT_CLASS(AppKit_NS_NSGridRow_NSGridRow)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSGridRow, NSGridRow, appkit, ns_nsgridrow_nsgridrow, appkit_ns_nsgridrow_nsgridrow_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSGridRow_NSGridRow, init)
{

	RETURN_LONG(ns_nsgridrow_init());
}

PHP_METHOD(AppKit_NS_NSGridRow_NSGridRow, gridView)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsgridrow_grid_view(&_0));
}

PHP_METHOD(AppKit_NS_NSGridRow_NSGridRow, numberOfCells)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsgridrow_number_of_cells(&_0));
}

PHP_METHOD(AppKit_NS_NSGridRow_NSGridRow, cellAtIndex)
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
	RETURN_LONG(ns_nsgridrow_cell_at_index(&_0, &_1));
}

PHP_METHOD(AppKit_NS_NSGridRow_NSGridRow, yPlacement)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsgridrow_y_placement(&_0));
}

PHP_METHOD(AppKit_NS_NSGridRow_NSGridRow, setYPlacement)
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
	ns_nsgridrow_set_y_placement(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSGridRow_NSGridRow, rowAlignment)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsgridrow_row_alignment(&_0));
}

PHP_METHOD(AppKit_NS_NSGridRow_NSGridRow, setRowAlignment)
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
	ns_nsgridrow_set_row_alignment(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSGridRow_NSGridRow, height)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(ns_nsgridrow_height(&_0));
}

PHP_METHOD(AppKit_NS_NSGridRow_NSGridRow, setHeight)
{
	double height;
	zval *handle_param = NULL, *height_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(height)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &height_param);
	height = zephir_get_doubleval(height_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, height);
	ns_nsgridrow_set_height(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSGridRow_NSGridRow, topPadding)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(ns_nsgridrow_top_padding(&_0));
}

PHP_METHOD(AppKit_NS_NSGridRow_NSGridRow, setTopPadding)
{
	double topPadding;
	zval *handle_param = NULL, *topPadding_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(topPadding)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &topPadding_param);
	topPadding = zephir_get_doubleval(topPadding_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, topPadding);
	ns_nsgridrow_set_top_padding(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSGridRow_NSGridRow, bottomPadding)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(ns_nsgridrow_bottom_padding(&_0));
}

PHP_METHOD(AppKit_NS_NSGridRow_NSGridRow, setBottomPadding)
{
	double bottomPadding;
	zval *handle_param = NULL, *bottomPadding_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(bottomPadding)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &bottomPadding_param);
	bottomPadding = zephir_get_doubleval(bottomPadding_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, bottomPadding);
	ns_nsgridrow_set_bottom_padding(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSGridRow_NSGridRow, isHidden)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nsgridrow_is_hidden(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSGridRow_NSGridRow, setHidden)
{
	zend_bool hidden;
	zval *handle_param = NULL, *hidden_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(hidden)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &hidden_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (hidden ? 1 : 0));
	ns_nsgridrow_set_hidden(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSGridRow_NSGridRow, mergeCellsInRange)
{
	zval *handle_param = NULL, *location_param = NULL, *length_param = NULL, _0, _1, _2;
	zend_long handle, location, length;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(location)
		Z_PARAM_LONG(length)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &location_param, &length_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, location);
	ZVAL_LONG(&_2, length);
	ns_nsgridrow_merge_cells_in_range(&_0, &_1, &_2);
}

