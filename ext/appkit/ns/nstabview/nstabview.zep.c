
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
#include "src/ns-tabview.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(AppKit_NS_NSTabView_NSTabView)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSTabView, NSTabView, appkit, ns_nstabview_nstabview, appkit_ns_nstabview_nstabview_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSTabView_NSTabView, initWithFrame)
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
	RETURN_LONG(ns_nstabview_init_with_frame(&_0, &_1, &_2, &_3));
}

PHP_METHOD(AppKit_NS_NSTabView_NSTabView, selectTabViewItem)
{
	zval *handle_param = NULL, *tabViewItem_param = NULL, _0, _1;
	zend_long handle, tabViewItem;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(tabViewItem)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &tabViewItem_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, tabViewItem);
	ns_nstabview_select_tab_view_item(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTabView_NSTabView, selectTabViewItemAtIndex)
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
	ns_nstabview_select_tab_view_item_at_index(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTabView_NSTabView, selectTabViewItemWithIdentifier)
{
	zval *handle_param = NULL, *identifier_param = NULL, _0, _1;
	zend_long handle, identifier;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(identifier)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &identifier_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, identifier);
	ns_nstabview_select_tab_view_item_with_identifier(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTabView_NSTabView, takeSelectedTabViewItemFromSender)
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
	ns_nstabview_take_selected_tab_view_item_from_sender(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTabView_NSTabView, selectFirstTabViewItem)
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
	ns_nstabview_select_first_tab_view_item(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTabView_NSTabView, selectLastTabViewItem)
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
	ns_nstabview_select_last_tab_view_item(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTabView_NSTabView, selectNextTabViewItem)
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
	ns_nstabview_select_next_tab_view_item(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTabView_NSTabView, selectPreviousTabViewItem)
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
	ns_nstabview_select_previous_tab_view_item(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTabView_NSTabView, selectedTabViewItem)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nstabview_selected_tab_view_item(&_0));
}

PHP_METHOD(AppKit_NS_NSTabView_NSTabView, font)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nstabview_font(&_0));
}

PHP_METHOD(AppKit_NS_NSTabView_NSTabView, setFont)
{
	zval *handle_param = NULL, *font_param = NULL, _0, _1;
	zend_long handle, font;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(font)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &font_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, font);
	ns_nstabview_set_font(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTabView_NSTabView, tabViewType)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nstabview_tab_view_type(&_0));
}

PHP_METHOD(AppKit_NS_NSTabView_NSTabView, setTabViewType)
{
	zval *handle_param = NULL, *tabViewType_param = NULL, _0, _1;
	zend_long handle, tabViewType;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(tabViewType)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &tabViewType_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, tabViewType);
	ns_nstabview_set_tab_view_type(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTabView_NSTabView, tabPosition)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nstabview_tab_position(&_0));
}

PHP_METHOD(AppKit_NS_NSTabView_NSTabView, setTabPosition)
{
	zval *handle_param = NULL, *tabPosition_param = NULL, _0, _1;
	zend_long handle, tabPosition;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(tabPosition)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &tabPosition_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, tabPosition);
	ns_nstabview_set_tab_position(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTabView_NSTabView, tabViewBorderType)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nstabview_tab_view_border_type(&_0));
}

PHP_METHOD(AppKit_NS_NSTabView_NSTabView, setTabViewBorderType)
{
	zval *handle_param = NULL, *tabViewBorderType_param = NULL, _0, _1;
	zend_long handle, tabViewBorderType;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(tabViewBorderType)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &tabViewBorderType_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, tabViewBorderType);
	ns_nstabview_set_tab_view_border_type(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTabView_NSTabView, tabViewItems)
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
	ns_nstabview_tab_view_items(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSTabView_NSTabView, setTabViewItems)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval tabViewItems;
	zval *handle_param = NULL, *tabViewItems_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&tabViewItems);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ARRAY(tabViewItems)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &tabViewItems_param);
	zephir_get_arrval(&tabViewItems, tabViewItems_param);
	ZVAL_LONG(&_0, handle);
	ns_nstabview_set_tab_view_items(&_0, &tabViewItems);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSTabView_NSTabView, allowsTruncatedLabels)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nstabview_allows_truncated_labels(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSTabView_NSTabView, setAllowsTruncatedLabels)
{
	zend_bool allowsTruncatedLabels;
	zval *handle_param = NULL, *allowsTruncatedLabels_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(allowsTruncatedLabels)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &allowsTruncatedLabels_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (allowsTruncatedLabels ? 1 : 0));
	ns_nstabview_set_allows_truncated_labels(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTabView_NSTabView, minimumSize)
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
	ns_nstabview_minimum_size(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSTabView_NSTabView, drawsBackground)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nstabview_draws_background(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSTabView_NSTabView, setDrawsBackground)
{
	zend_bool drawsBackground;
	zval *handle_param = NULL, *drawsBackground_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(drawsBackground)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &drawsBackground_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (drawsBackground ? 1 : 0));
	ns_nstabview_set_draws_background(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTabView_NSTabView, controlSize)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nstabview_control_size(&_0));
}

PHP_METHOD(AppKit_NS_NSTabView_NSTabView, setControlSize)
{
	zval *handle_param = NULL, *controlSize_param = NULL, _0, _1;
	zend_long handle, controlSize;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(controlSize)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &controlSize_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, controlSize);
	ns_nstabview_set_control_size(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTabView_NSTabView, addTabViewItem)
{
	zval *handle_param = NULL, *tabViewItem_param = NULL, _0, _1;
	zend_long handle, tabViewItem;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(tabViewItem)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &tabViewItem_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, tabViewItem);
	ns_nstabview_add_tab_view_item(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTabView_NSTabView, insertTabViewItemAtIndex)
{
	zval *handle_param = NULL, *tabViewItem_param = NULL, *index_param = NULL, _0, _1, _2;
	zend_long handle, tabViewItem, index;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(tabViewItem)
		Z_PARAM_LONG(index)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &tabViewItem_param, &index_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, tabViewItem);
	ZVAL_LONG(&_2, index);
	ns_nstabview_insert_tab_view_item_at_index(&_0, &_1, &_2);
}

PHP_METHOD(AppKit_NS_NSTabView_NSTabView, removeTabViewItem)
{
	zval *handle_param = NULL, *tabViewItem_param = NULL, _0, _1;
	zend_long handle, tabViewItem;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(tabViewItem)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &tabViewItem_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, tabViewItem);
	ns_nstabview_remove_tab_view_item(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTabView_NSTabView, delegate)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nstabview_delegate(&_0));
}

PHP_METHOD(AppKit_NS_NSTabView_NSTabView, setDelegate)
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
	ns_nstabview_set_delegate(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTabView_NSTabView, tabViewItemAtPoint)
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
	RETURN_LONG(ns_nstabview_tab_view_item_at_point(&_0, &_1, &_2));
}

PHP_METHOD(AppKit_NS_NSTabView_NSTabView, contentRect)
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
	ns_nstabview_content_rect(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSTabView_NSTabView, numberOfTabViewItems)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nstabview_number_of_tab_view_items(&_0));
}

PHP_METHOD(AppKit_NS_NSTabView_NSTabView, indexOfTabViewItem)
{
	zval *handle_param = NULL, *tabViewItem_param = NULL, _0, _1;
	zend_long handle, tabViewItem;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(tabViewItem)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &tabViewItem_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, tabViewItem);
	RETURN_LONG(ns_nstabview_index_of_tab_view_item(&_0, &_1));
}

PHP_METHOD(AppKit_NS_NSTabView_NSTabView, tabViewItemAtIndex)
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
	RETURN_LONG(ns_nstabview_tab_view_item_at_index(&_0, &_1));
}

PHP_METHOD(AppKit_NS_NSTabView_NSTabView, indexOfTabViewItemWithIdentifier)
{
	zval *handle_param = NULL, *identifier_param = NULL, _0, _1;
	zend_long handle, identifier;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(identifier)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &identifier_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, identifier);
	RETURN_LONG(ns_nstabview_index_of_tab_view_item_with_identifier(&_0, &_1));
}

