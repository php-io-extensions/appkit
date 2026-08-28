
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
#include "src/ns-splitview.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(AppKit_NS_NSSplitView_NSSplitView)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSSplitView, NSSplitView, appkit, ns_nssplitview_nssplitview, appkit_ns_nssplitview_nssplitview_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSSplitView_NSSplitView, initWithFrame)
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
	RETURN_LONG(ns_nssplitview_init_with_frame(&_0, &_1, &_2, &_3));
}

PHP_METHOD(AppKit_NS_NSSplitView_NSSplitView, isVertical)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nssplitview_is_vertical(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSSplitView_NSSplitView, setVertical)
{
	zend_bool vertical;
	zval *handle_param = NULL, *vertical_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(vertical)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &vertical_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (vertical ? 1 : 0));
	ns_nssplitview_set_vertical(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSSplitView_NSSplitView, dividerStyle)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nssplitview_divider_style(&_0));
}

PHP_METHOD(AppKit_NS_NSSplitView_NSSplitView, setDividerStyle)
{
	zval *handle_param = NULL, *dividerStyle_param = NULL, _0, _1;
	zend_long handle, dividerStyle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(dividerStyle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &dividerStyle_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, dividerStyle);
	ns_nssplitview_set_divider_style(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSSplitView_NSSplitView, autosaveName)
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
	ns_nssplitview_autosave_name(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSSplitView_NSSplitView, setAutosaveName)
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
	ns_nssplitview_set_autosave_name(&_0, autosaveName);
}

PHP_METHOD(AppKit_NS_NSSplitView_NSSplitView, delegate)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nssplitview_delegate(&_0));
}

PHP_METHOD(AppKit_NS_NSSplitView_NSSplitView, setDelegate)
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
	ns_nssplitview_set_delegate(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSSplitView_NSSplitView, drawDividerInRect)
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
	ns_nssplitview_draw_divider_in_rect(&_0, &_1, &_2, &_3, &_4);
}

PHP_METHOD(AppKit_NS_NSSplitView_NSSplitView, dividerColor)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nssplitview_divider_color(&_0));
}

PHP_METHOD(AppKit_NS_NSSplitView_NSSplitView, dividerThickness)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(ns_nssplitview_divider_thickness(&_0));
}

PHP_METHOD(AppKit_NS_NSSplitView_NSSplitView, adjustSubviews)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	ns_nssplitview_adjust_subviews(&_0);
}

PHP_METHOD(AppKit_NS_NSSplitView_NSSplitView, isSubviewCollapsed)
{
	zval *handle_param = NULL, *subview_param = NULL, _0, _1;
	zend_long handle, subview, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(subview)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &subview_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, subview);
	r = ns_nssplitview_is_subview_collapsed(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSSplitView_NSSplitView, minPossiblePositionOfDividerAtIndex)
{
	zval *handle_param = NULL, *dividerIndex_param = NULL, _0, _1;
	zend_long handle, dividerIndex;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(dividerIndex)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &dividerIndex_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, dividerIndex);
	RETURN_DOUBLE(ns_nssplitview_min_possible_position_of_divider_at_index(&_0, &_1));
}

PHP_METHOD(AppKit_NS_NSSplitView_NSSplitView, maxPossiblePositionOfDividerAtIndex)
{
	zval *handle_param = NULL, *dividerIndex_param = NULL, _0, _1;
	zend_long handle, dividerIndex;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(dividerIndex)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &dividerIndex_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, dividerIndex);
	RETURN_DOUBLE(ns_nssplitview_max_possible_position_of_divider_at_index(&_0, &_1));
}

PHP_METHOD(AppKit_NS_NSSplitView_NSSplitView, setPositionOfDividerAtIndex)
{
	double position;
	zval *handle_param = NULL, *position_param = NULL, *dividerIndex_param = NULL, _0, _1, _2;
	zend_long handle, dividerIndex;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(position)
		Z_PARAM_LONG(dividerIndex)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &position_param, &dividerIndex_param);
	position = zephir_get_doubleval(position_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, position);
	ZVAL_LONG(&_2, dividerIndex);
	ns_nssplitview_set_position_of_divider_at_index(&_0, &_1, &_2);
}

PHP_METHOD(AppKit_NS_NSSplitView_NSSplitView, holdingPriorityForSubviewAtIndex)
{
	zval *handle_param = NULL, *subviewIndex_param = NULL, _0, _1;
	zend_long handle, subviewIndex;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(subviewIndex)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &subviewIndex_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, subviewIndex);
	RETURN_DOUBLE(ns_nssplitview_holding_priority_for_subview_at_index(&_0, &_1));
}

PHP_METHOD(AppKit_NS_NSSplitView_NSSplitView, setHoldingPriorityForSubviewAtIndex)
{
	double priority;
	zval *handle_param = NULL, *priority_param = NULL, *subviewIndex_param = NULL, _0, _1, _2;
	zend_long handle, subviewIndex;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(priority)
		Z_PARAM_LONG(subviewIndex)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &priority_param, &subviewIndex_param);
	priority = zephir_get_doubleval(priority_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, priority);
	ZVAL_LONG(&_2, subviewIndex);
	ns_nssplitview_set_holding_priority_for_subview_at_index(&_0, &_1, &_2);
}

PHP_METHOD(AppKit_NS_NSSplitView_NSSplitView, arrangesAllSubviews)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nssplitview_arranges_all_subviews(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSSplitView_NSSplitView, setArrangesAllSubviews)
{
	zend_bool arrangesAllSubviews;
	zval *handle_param = NULL, *arrangesAllSubviews_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(arrangesAllSubviews)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &arrangesAllSubviews_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (arrangesAllSubviews ? 1 : 0));
	ns_nssplitview_set_arranges_all_subviews(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSSplitView_NSSplitView, arrangedSubviews)
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
	ns_nssplitview_arranged_subviews(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSSplitView_NSSplitView, addArrangedSubview)
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
	ns_nssplitview_add_arranged_subview(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSSplitView_NSSplitView, insertArrangedSubviewAtIndex)
{
	zval *handle_param = NULL, *view_param = NULL, *index_param = NULL, _0, _1, _2;
	zend_long handle, view, index;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(view)
		Z_PARAM_LONG(index)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &view_param, &index_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, view);
	ZVAL_LONG(&_2, index);
	ns_nssplitview_insert_arranged_subview_at_index(&_0, &_1, &_2);
}

PHP_METHOD(AppKit_NS_NSSplitView_NSSplitView, removeArrangedSubview)
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
	ns_nssplitview_remove_arranged_subview(&_0, &_1);
}

