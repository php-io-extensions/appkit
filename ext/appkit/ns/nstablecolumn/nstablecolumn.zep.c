
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
#include "src/ns-tablecolumn.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"
#include "kernel/string.h"


ZEPHIR_INIT_CLASS(AppKit_NS_NSTableColumn_NSTableColumn)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSTableColumn, NSTableColumn, appkit, ns_nstablecolumn_nstablecolumn, appkit_ns_nstablecolumn_nstablecolumn_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSTableColumn_NSTableColumn, initWithIdentifier)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *identifier_param = NULL;
	zval identifier;

	ZVAL_UNDEF(&identifier);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(identifier)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &identifier_param);
	zephir_get_strval(&identifier, identifier_param);
	RETURN_MM_LONG(ns_nstablecolumn_init_with_identifier(&identifier));
}

PHP_METHOD(AppKit_NS_NSTableColumn_NSTableColumn, identifier)
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
	ns_nstablecolumn_identifier(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSTableColumn_NSTableColumn, setIdentifier)
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
	ns_nstablecolumn_set_identifier(&_0, &identifier);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSTableColumn_NSTableColumn, tableView)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nstablecolumn_table_view(&_0));
}

PHP_METHOD(AppKit_NS_NSTableColumn_NSTableColumn, setTableView)
{
	zval *handle_param = NULL, *tableView_param = NULL, _0, _1;
	zend_long handle, tableView;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(tableView)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &tableView_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, tableView);
	ns_nstablecolumn_set_table_view(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTableColumn_NSTableColumn, width)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(ns_nstablecolumn_width(&_0));
}

PHP_METHOD(AppKit_NS_NSTableColumn_NSTableColumn, setWidth)
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
	ns_nstablecolumn_set_width(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTableColumn_NSTableColumn, minWidth)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(ns_nstablecolumn_min_width(&_0));
}

PHP_METHOD(AppKit_NS_NSTableColumn_NSTableColumn, setMinWidth)
{
	double minWidth;
	zval *handle_param = NULL, *minWidth_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(minWidth)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &minWidth_param);
	minWidth = zephir_get_doubleval(minWidth_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, minWidth);
	ns_nstablecolumn_set_min_width(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTableColumn_NSTableColumn, maxWidth)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(ns_nstablecolumn_max_width(&_0));
}

PHP_METHOD(AppKit_NS_NSTableColumn_NSTableColumn, setMaxWidth)
{
	double maxWidth;
	zval *handle_param = NULL, *maxWidth_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(maxWidth)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &maxWidth_param);
	maxWidth = zephir_get_doubleval(maxWidth_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, maxWidth);
	ns_nstablecolumn_set_max_width(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTableColumn_NSTableColumn, title)
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
	ns_nstablecolumn_title(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSTableColumn_NSTableColumn, setTitle)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval title;
	zval *handle_param = NULL, *title_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&title);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(title)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &title_param);
	zephir_get_strval(&title, title_param);
	ZVAL_LONG(&_0, handle);
	ns_nstablecolumn_set_title(&_0, &title);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSTableColumn_NSTableColumn, headerCell)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nstablecolumn_header_cell(&_0));
}

PHP_METHOD(AppKit_NS_NSTableColumn_NSTableColumn, setHeaderCell)
{
	zval *handle_param = NULL, *headerCell_param = NULL, _0, _1;
	zend_long handle, headerCell;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(headerCell)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &headerCell_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, headerCell);
	ns_nstablecolumn_set_header_cell(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTableColumn_NSTableColumn, isEditable)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nstablecolumn_is_editable(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSTableColumn_NSTableColumn, setEditable)
{
	zend_bool editable;
	zval *handle_param = NULL, *editable_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(editable)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &editable_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (editable ? 1 : 0));
	ns_nstablecolumn_set_editable(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTableColumn_NSTableColumn, sizeToFit)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	ns_nstablecolumn_size_to_fit(&_0);
}

PHP_METHOD(AppKit_NS_NSTableColumn_NSTableColumn, sortDescriptorPrototype)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nstablecolumn_sort_descriptor_prototype(&_0));
}

PHP_METHOD(AppKit_NS_NSTableColumn_NSTableColumn, setSortDescriptorPrototype)
{
	zval *handle_param = NULL, *sortDescriptorPrototype_param = NULL, _0, _1;
	zend_long handle, sortDescriptorPrototype;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(sortDescriptorPrototype)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &sortDescriptorPrototype_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, sortDescriptorPrototype);
	ns_nstablecolumn_set_sort_descriptor_prototype(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTableColumn_NSTableColumn, resizingMask)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nstablecolumn_resizing_mask(&_0));
}

PHP_METHOD(AppKit_NS_NSTableColumn_NSTableColumn, setResizingMask)
{
	zval *handle_param = NULL, *resizingMask_param = NULL, _0, _1;
	zend_long handle, resizingMask;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(resizingMask)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &resizingMask_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, resizingMask);
	ns_nstablecolumn_set_resizing_mask(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTableColumn_NSTableColumn, headerToolTip)
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
	ns_nstablecolumn_header_tool_tip(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSTableColumn_NSTableColumn, setHeaderToolTip)
{
	zval *handle_param = NULL, *headerToolTip = NULL, headerToolTip_sub, _0;
	zend_long handle;

	ZVAL_UNDEF(&headerToolTip_sub);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(headerToolTip)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &headerToolTip);
	ZVAL_LONG(&_0, handle);
	ns_nstablecolumn_set_header_tool_tip(&_0, headerToolTip);
}

PHP_METHOD(AppKit_NS_NSTableColumn_NSTableColumn, isHidden)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nstablecolumn_is_hidden(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSTableColumn_NSTableColumn, setHidden)
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
	ns_nstablecolumn_set_hidden(&_0, &_1);
}

