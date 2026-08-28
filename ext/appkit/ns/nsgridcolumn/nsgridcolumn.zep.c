
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


ZEPHIR_INIT_CLASS(AppKit_NS_NSGridColumn_NSGridColumn)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSGridColumn, NSGridColumn, appkit, ns_nsgridcolumn_nsgridcolumn, appkit_ns_nsgridcolumn_nsgridcolumn_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSGridColumn_NSGridColumn, init)
{

	RETURN_LONG(ns_nsgridcolumn_init());
}

PHP_METHOD(AppKit_NS_NSGridColumn_NSGridColumn, gridView)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsgridcolumn_grid_view(&_0));
}

PHP_METHOD(AppKit_NS_NSGridColumn_NSGridColumn, numberOfCells)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsgridcolumn_number_of_cells(&_0));
}

PHP_METHOD(AppKit_NS_NSGridColumn_NSGridColumn, cellAtIndex)
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
	RETURN_LONG(ns_nsgridcolumn_cell_at_index(&_0, &_1));
}

PHP_METHOD(AppKit_NS_NSGridColumn_NSGridColumn, xPlacement)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsgridcolumn_x_placement(&_0));
}

PHP_METHOD(AppKit_NS_NSGridColumn_NSGridColumn, setXPlacement)
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
	ns_nsgridcolumn_set_x_placement(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSGridColumn_NSGridColumn, width)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(ns_nsgridcolumn_width(&_0));
}

PHP_METHOD(AppKit_NS_NSGridColumn_NSGridColumn, setWidth)
{
	double width;
	zval *handle_param = NULL, *width_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(width)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &width_param);
	width = zephir_get_doubleval(width_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, width);
	ns_nsgridcolumn_set_width(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSGridColumn_NSGridColumn, leadingPadding)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(ns_nsgridcolumn_leading_padding(&_0));
}

PHP_METHOD(AppKit_NS_NSGridColumn_NSGridColumn, setLeadingPadding)
{
	double leadingPadding;
	zval *handle_param = NULL, *leadingPadding_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(leadingPadding)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &leadingPadding_param);
	leadingPadding = zephir_get_doubleval(leadingPadding_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, leadingPadding);
	ns_nsgridcolumn_set_leading_padding(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSGridColumn_NSGridColumn, trailingPadding)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(ns_nsgridcolumn_trailing_padding(&_0));
}

PHP_METHOD(AppKit_NS_NSGridColumn_NSGridColumn, setTrailingPadding)
{
	double trailingPadding;
	zval *handle_param = NULL, *trailingPadding_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(trailingPadding)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &trailingPadding_param);
	trailingPadding = zephir_get_doubleval(trailingPadding_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, trailingPadding);
	ns_nsgridcolumn_set_trailing_padding(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSGridColumn_NSGridColumn, isHidden)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nsgridcolumn_is_hidden(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSGridColumn_NSGridColumn, setHidden)
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
	ns_nsgridcolumn_set_hidden(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSGridColumn_NSGridColumn, mergeCellsInRange)
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
	ns_nsgridcolumn_merge_cells_in_range(&_0, &_1, &_2);
}

