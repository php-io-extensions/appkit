
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
#include "src/ns-outlineview.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(AppKit_NS_NSOutlineView_NSOutlineView)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSOutlineView, NSOutlineView, appkit, ns_nsoutlineview_nsoutlineview, appkit_ns_nsoutlineview_nsoutlineview_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSOutlineView_NSOutlineView, initWithFrame)
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
	RETURN_LONG(ns_nsoutlineview_init_with_frame(&_0, &_1, &_2, &_3));
}

PHP_METHOD(AppKit_NS_NSOutlineView_NSOutlineView, delegate)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsoutlineview_delegate(&_0));
}

PHP_METHOD(AppKit_NS_NSOutlineView_NSOutlineView, setDelegate)
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
	ns_nsoutlineview_set_delegate(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSOutlineView_NSOutlineView, dataSource)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsoutlineview_data_source(&_0));
}

PHP_METHOD(AppKit_NS_NSOutlineView_NSOutlineView, setDataSource)
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
	ns_nsoutlineview_set_data_source(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSOutlineView_NSOutlineView, outlineTableColumn)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsoutlineview_outline_table_column(&_0));
}

PHP_METHOD(AppKit_NS_NSOutlineView_NSOutlineView, setOutlineTableColumn)
{
	zval *handle_param = NULL, *outlineTableColumn_param = NULL, _0, _1;
	zend_long handle, outlineTableColumn;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(outlineTableColumn)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &outlineTableColumn_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, outlineTableColumn);
	ns_nsoutlineview_set_outline_table_column(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSOutlineView_NSOutlineView, isExpandable)
{
	zval *handle_param = NULL, *item_param = NULL, _0, _1;
	zend_long handle, item, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &item_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, item);
	r = ns_nsoutlineview_is_expandable(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSOutlineView_NSOutlineView, numberOfChildrenOfItem)
{
	zval *handle_param = NULL, *item_param = NULL, _0, _1;
	zend_long handle, item;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &item_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, item);
	RETURN_LONG(ns_nsoutlineview_number_of_children_of_item(&_0, &_1));
}

PHP_METHOD(AppKit_NS_NSOutlineView_NSOutlineView, childOfItem)
{
	zval *handle_param = NULL, *index_param = NULL, *item_param = NULL, _0, _1, _2;
	zend_long handle, index, item;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(index)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &index_param, &item_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, index);
	ZVAL_LONG(&_2, item);
	RETURN_LONG(ns_nsoutlineview_child_of_item(&_0, &_1, &_2));
}

PHP_METHOD(AppKit_NS_NSOutlineView_NSOutlineView, expandItemExpandChildren)
{
	zend_bool expandChildren;
	zval *handle_param = NULL, *item_param = NULL, *expandChildren_param = NULL, _0, _1, _2;
	zend_long handle, item;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(item)
		Z_PARAM_BOOL(expandChildren)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &item_param, &expandChildren_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, item);
	ZVAL_BOOL(&_2, (expandChildren ? 1 : 0));
	ns_nsoutlineview_expand_item_expand_children(&_0, &_1, &_2);
}

PHP_METHOD(AppKit_NS_NSOutlineView_NSOutlineView, expandItem)
{
	zval *handle_param = NULL, *item_param = NULL, _0, _1;
	zend_long handle, item;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &item_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, item);
	ns_nsoutlineview_expand_item(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSOutlineView_NSOutlineView, collapseItemCollapseChildren)
{
	zend_bool collapseChildren;
	zval *handle_param = NULL, *item_param = NULL, *collapseChildren_param = NULL, _0, _1, _2;
	zend_long handle, item;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(item)
		Z_PARAM_BOOL(collapseChildren)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &item_param, &collapseChildren_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, item);
	ZVAL_BOOL(&_2, (collapseChildren ? 1 : 0));
	ns_nsoutlineview_collapse_item_collapse_children(&_0, &_1, &_2);
}

PHP_METHOD(AppKit_NS_NSOutlineView_NSOutlineView, collapseItem)
{
	zval *handle_param = NULL, *item_param = NULL, _0, _1;
	zend_long handle, item;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &item_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, item);
	ns_nsoutlineview_collapse_item(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSOutlineView_NSOutlineView, reloadItemReloadChildren)
{
	zend_bool reloadChildren;
	zval *handle_param = NULL, *item_param = NULL, *reloadChildren_param = NULL, _0, _1, _2;
	zend_long handle, item;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(item)
		Z_PARAM_BOOL(reloadChildren)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &item_param, &reloadChildren_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, item);
	ZVAL_BOOL(&_2, (reloadChildren ? 1 : 0));
	ns_nsoutlineview_reload_item_reload_children(&_0, &_1, &_2);
}

PHP_METHOD(AppKit_NS_NSOutlineView_NSOutlineView, reloadItem)
{
	zval *handle_param = NULL, *item_param = NULL, _0, _1;
	zend_long handle, item;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &item_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, item);
	ns_nsoutlineview_reload_item(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSOutlineView_NSOutlineView, parentForItem)
{
	zval *handle_param = NULL, *item_param = NULL, _0, _1;
	zend_long handle, item;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &item_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, item);
	RETURN_LONG(ns_nsoutlineview_parent_for_item(&_0, &_1));
}

PHP_METHOD(AppKit_NS_NSOutlineView_NSOutlineView, childIndexForItem)
{
	zval *handle_param = NULL, *item_param = NULL, _0, _1;
	zend_long handle, item;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &item_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, item);
	RETURN_LONG(ns_nsoutlineview_child_index_for_item(&_0, &_1));
}

PHP_METHOD(AppKit_NS_NSOutlineView_NSOutlineView, itemAtRow)
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
	RETURN_LONG(ns_nsoutlineview_item_at_row(&_0, &_1));
}

PHP_METHOD(AppKit_NS_NSOutlineView_NSOutlineView, rowForItem)
{
	zval *handle_param = NULL, *item_param = NULL, _0, _1;
	zend_long handle, item;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &item_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, item);
	RETURN_LONG(ns_nsoutlineview_row_for_item(&_0, &_1));
}

PHP_METHOD(AppKit_NS_NSOutlineView_NSOutlineView, levelForItem)
{
	zval *handle_param = NULL, *item_param = NULL, _0, _1;
	zend_long handle, item;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &item_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, item);
	RETURN_LONG(ns_nsoutlineview_level_for_item(&_0, &_1));
}

PHP_METHOD(AppKit_NS_NSOutlineView_NSOutlineView, levelForRow)
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
	RETURN_LONG(ns_nsoutlineview_level_for_row(&_0, &_1));
}

PHP_METHOD(AppKit_NS_NSOutlineView_NSOutlineView, isItemExpanded)
{
	zval *handle_param = NULL, *item_param = NULL, _0, _1;
	zend_long handle, item, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &item_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, item);
	r = ns_nsoutlineview_is_item_expanded(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSOutlineView_NSOutlineView, indentationPerLevel)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(ns_nsoutlineview_indentation_per_level(&_0));
}

PHP_METHOD(AppKit_NS_NSOutlineView_NSOutlineView, setIndentationPerLevel)
{
	double indentationPerLevel;
	zval *handle_param = NULL, *indentationPerLevel_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(indentationPerLevel)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &indentationPerLevel_param);
	indentationPerLevel = zephir_get_doubleval(indentationPerLevel_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, indentationPerLevel);
	ns_nsoutlineview_set_indentation_per_level(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSOutlineView_NSOutlineView, indentationMarkerFollowsCell)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nsoutlineview_indentation_marker_follows_cell(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSOutlineView_NSOutlineView, setIndentationMarkerFollowsCell)
{
	zend_bool indentationMarkerFollowsCell;
	zval *handle_param = NULL, *indentationMarkerFollowsCell_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(indentationMarkerFollowsCell)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &indentationMarkerFollowsCell_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (indentationMarkerFollowsCell ? 1 : 0));
	ns_nsoutlineview_set_indentation_marker_follows_cell(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSOutlineView_NSOutlineView, autoresizesOutlineColumn)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nsoutlineview_autoresizes_outline_column(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSOutlineView_NSOutlineView, setAutoresizesOutlineColumn)
{
	zend_bool autoresizesOutlineColumn;
	zval *handle_param = NULL, *autoresizesOutlineColumn_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(autoresizesOutlineColumn)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &autoresizesOutlineColumn_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (autoresizesOutlineColumn ? 1 : 0));
	ns_nsoutlineview_set_autoresizes_outline_column(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSOutlineView_NSOutlineView, frameOfOutlineCellAtRow)
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
	ns_nsoutlineview_frame_of_outline_cell_at_row(&result, &_0, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSOutlineView_NSOutlineView, setDropItemDropChildIndex)
{
	zval *handle_param = NULL, *item_param = NULL, *index_param = NULL, _0, _1, _2;
	zend_long handle, item, index;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(item)
		Z_PARAM_LONG(index)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &item_param, &index_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, item);
	ZVAL_LONG(&_2, index);
	ns_nsoutlineview_set_drop_item_drop_child_index(&_0, &_1, &_2);
}

PHP_METHOD(AppKit_NS_NSOutlineView_NSOutlineView, shouldCollapseAutoExpandedItemsForDeposited)
{
	zend_bool deposited;
	zval *handle_param = NULL, *deposited_param = NULL, _0, _1;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(deposited)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &deposited_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (deposited ? 1 : 0));
	r = ns_nsoutlineview_should_collapse_auto_expanded_items_for_deposited(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSOutlineView_NSOutlineView, autosaveExpandedItems)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nsoutlineview_autosave_expanded_items(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSOutlineView_NSOutlineView, setAutosaveExpandedItems)
{
	zend_bool autosaveExpandedItems;
	zval *handle_param = NULL, *autosaveExpandedItems_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(autosaveExpandedItems)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &autosaveExpandedItems_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (autosaveExpandedItems ? 1 : 0));
	ns_nsoutlineview_set_autosave_expanded_items(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSOutlineView_NSOutlineView, insertItemsAtIndexesInParentWithAnimation)
{
	zval *handle_param = NULL, *indexes_param = NULL, *parent_param = NULL, *animationOptions_param = NULL, _0, _1, _2, _3;
	zend_long handle, indexes, parent, animationOptions;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(indexes)
		Z_PARAM_LONG(parent)
		Z_PARAM_LONG(animationOptions)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &indexes_param, &parent_param, &animationOptions_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, indexes);
	ZVAL_LONG(&_2, parent);
	ZVAL_LONG(&_3, animationOptions);
	ns_nsoutlineview_insert_items_at_indexes_in_parent_with_animation(&_0, &_1, &_2, &_3);
}

PHP_METHOD(AppKit_NS_NSOutlineView_NSOutlineView, removeItemsAtIndexesInParentWithAnimation)
{
	zval *handle_param = NULL, *indexes_param = NULL, *parent_param = NULL, *animationOptions_param = NULL, _0, _1, _2, _3;
	zend_long handle, indexes, parent, animationOptions;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(indexes)
		Z_PARAM_LONG(parent)
		Z_PARAM_LONG(animationOptions)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &indexes_param, &parent_param, &animationOptions_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, indexes);
	ZVAL_LONG(&_2, parent);
	ZVAL_LONG(&_3, animationOptions);
	ns_nsoutlineview_remove_items_at_indexes_in_parent_with_animation(&_0, &_1, &_2, &_3);
}

PHP_METHOD(AppKit_NS_NSOutlineView_NSOutlineView, moveItemAtIndexInParentToIndexInParent)
{
	zval *handle_param = NULL, *fromIndex_param = NULL, *oldParent_param = NULL, *toIndex_param = NULL, *newParent_param = NULL, _0, _1, _2, _3, _4;
	zend_long handle, fromIndex, oldParent, toIndex, newParent;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(fromIndex)
		Z_PARAM_LONG(oldParent)
		Z_PARAM_LONG(toIndex)
		Z_PARAM_LONG(newParent)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &handle_param, &fromIndex_param, &oldParent_param, &toIndex_param, &newParent_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, fromIndex);
	ZVAL_LONG(&_2, oldParent);
	ZVAL_LONG(&_3, toIndex);
	ZVAL_LONG(&_4, newParent);
	ns_nsoutlineview_move_item_at_index_in_parent_to_index_in_parent(&_0, &_1, &_2, &_3, &_4);
}

PHP_METHOD(AppKit_NS_NSOutlineView_NSOutlineView, userInterfaceLayoutDirection)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsoutlineview_user_interface_layout_direction(&_0));
}

PHP_METHOD(AppKit_NS_NSOutlineView_NSOutlineView, setUserInterfaceLayoutDirection)
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
	ns_nsoutlineview_set_user_interface_layout_direction(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSOutlineView_NSOutlineView, stronglyReferencesItems)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nsoutlineview_strongly_references_items(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSOutlineView_NSOutlineView, setStronglyReferencesItems)
{
	zend_bool stronglyReferencesItems;
	zval *handle_param = NULL, *stronglyReferencesItems_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(stronglyReferencesItems)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &stronglyReferencesItems_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (stronglyReferencesItems ? 1 : 0));
	ns_nsoutlineview_set_strongly_references_items(&_0, &_1);
}

