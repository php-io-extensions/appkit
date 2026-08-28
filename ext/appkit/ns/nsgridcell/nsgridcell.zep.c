
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


ZEPHIR_INIT_CLASS(AppKit_NS_NSGridCell_NSGridCell)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSGridCell, NSGridCell, appkit, ns_nsgridcell_nsgridcell, appkit_ns_nsgridcell_nsgridcell_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSGridCell_NSGridCell, init)
{

	RETURN_LONG(ns_nsgridcell_init());
}

PHP_METHOD(AppKit_NS_NSGridCell_NSGridCell, contentView)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsgridcell_content_view(&_0));
}

PHP_METHOD(AppKit_NS_NSGridCell_NSGridCell, setContentView)
{
	zval *handle_param = NULL, *contentView_param = NULL, _0, _1;
	zend_long handle, contentView;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(contentView)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &contentView_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, contentView);
	ns_nsgridcell_set_content_view(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSGridCell_NSGridCell, emptyContentView)
{

	RETURN_LONG(ns_nsgridcell_empty_content_view());
}

PHP_METHOD(AppKit_NS_NSGridCell_NSGridCell, row)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsgridcell_row(&_0));
}

PHP_METHOD(AppKit_NS_NSGridCell_NSGridCell, column)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsgridcell_column(&_0));
}

PHP_METHOD(AppKit_NS_NSGridCell_NSGridCell, xPlacement)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsgridcell_x_placement(&_0));
}

PHP_METHOD(AppKit_NS_NSGridCell_NSGridCell, setXPlacement)
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
	ns_nsgridcell_set_x_placement(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSGridCell_NSGridCell, yPlacement)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsgridcell_y_placement(&_0));
}

PHP_METHOD(AppKit_NS_NSGridCell_NSGridCell, setYPlacement)
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
	ns_nsgridcell_set_y_placement(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSGridCell_NSGridCell, rowAlignment)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsgridcell_row_alignment(&_0));
}

PHP_METHOD(AppKit_NS_NSGridCell_NSGridCell, setRowAlignment)
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
	ns_nsgridcell_set_row_alignment(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSGridCell_NSGridCell, customPlacementConstraints)
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
	ns_nsgridcell_custom_placement_constraints(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSGridCell_NSGridCell, setCustomPlacementConstraints)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval constraints;
	zval *handle_param = NULL, *constraints_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&constraints);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ARRAY(constraints)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &constraints_param);
	zephir_get_arrval(&constraints, constraints_param);
	ZVAL_LONG(&_0, handle);
	ns_nsgridcell_set_custom_placement_constraints(&_0, &constraints);
	ZEPHIR_MM_RESTORE();
}

