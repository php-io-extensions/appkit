
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
#include "src/ns-stackview.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(AppKit_NS_NSStackView_NSStackView)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSStackView, NSStackView, appkit, ns_nsstackview_nsstackview, appkit_ns_nsstackview_nsstackview_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSStackView_NSStackView, initWithFrame)
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
	RETURN_LONG(ns_nsstackview_init_with_frame(&_0, &_1, &_2, &_3));
}

PHP_METHOD(AppKit_NS_NSStackView_NSStackView, stackViewWithViews)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *views_param = NULL;
	zval views;

	ZVAL_UNDEF(&views);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ARRAY(views)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &views_param);
	zephir_get_arrval(&views, views_param);
	RETURN_MM_LONG(ns_nsstackview_stack_view_with_views(&views));
}

PHP_METHOD(AppKit_NS_NSStackView_NSStackView, delegate)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsstackview_delegate(&_0));
}

PHP_METHOD(AppKit_NS_NSStackView_NSStackView, setDelegate)
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
	ns_nsstackview_set_delegate(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSStackView_NSStackView, orientation)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsstackview_orientation(&_0));
}

PHP_METHOD(AppKit_NS_NSStackView_NSStackView, setOrientation)
{
	zval *handle_param = NULL, *orientation_param = NULL, _0, _1;
	zend_long handle, orientation;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(orientation)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &orientation_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, orientation);
	ns_nsstackview_set_orientation(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSStackView_NSStackView, alignment)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsstackview_alignment(&_0));
}

PHP_METHOD(AppKit_NS_NSStackView_NSStackView, setAlignment)
{
	zval *handle_param = NULL, *alignment_param = NULL, _0, _1;
	zend_long handle, alignment;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(alignment)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &alignment_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, alignment);
	ns_nsstackview_set_alignment(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSStackView_NSStackView, edgeInsets)
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
	ns_nsstackview_edge_insets(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSStackView_NSStackView, setEdgeInsets)
{
	double top, left, bottom, right;
	zval *handle_param = NULL, *top_param = NULL, *left_param = NULL, *bottom_param = NULL, *right_param = NULL, _0, _1, _2, _3, _4;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(top)
		Z_PARAM_ZVAL(left)
		Z_PARAM_ZVAL(bottom)
		Z_PARAM_ZVAL(right)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &handle_param, &top_param, &left_param, &bottom_param, &right_param);
	top = zephir_get_doubleval(top_param);
	left = zephir_get_doubleval(left_param);
	bottom = zephir_get_doubleval(bottom_param);
	right = zephir_get_doubleval(right_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, top);
	ZVAL_DOUBLE(&_2, left);
	ZVAL_DOUBLE(&_3, bottom);
	ZVAL_DOUBLE(&_4, right);
	ns_nsstackview_set_edge_insets(&_0, &_1, &_2, &_3, &_4);
}

PHP_METHOD(AppKit_NS_NSStackView_NSStackView, distribution)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsstackview_distribution(&_0));
}

PHP_METHOD(AppKit_NS_NSStackView_NSStackView, setDistribution)
{
	zval *handle_param = NULL, *distribution_param = NULL, _0, _1;
	zend_long handle, distribution;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(distribution)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &distribution_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, distribution);
	ns_nsstackview_set_distribution(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSStackView_NSStackView, spacing)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(ns_nsstackview_spacing(&_0));
}

PHP_METHOD(AppKit_NS_NSStackView_NSStackView, setSpacing)
{
	double spacing;
	zval *handle_param = NULL, *spacing_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(spacing)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &spacing_param);
	spacing = zephir_get_doubleval(spacing_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, spacing);
	ns_nsstackview_set_spacing(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSStackView_NSStackView, setCustomSpacingAfterView)
{
	double spacing;
	zval *handle_param = NULL, *spacing_param = NULL, *view_param = NULL, _0, _1, _2;
	zend_long handle, view;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(spacing)
		Z_PARAM_LONG(view)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &spacing_param, &view_param);
	spacing = zephir_get_doubleval(spacing_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, spacing);
	ZVAL_LONG(&_2, view);
	ns_nsstackview_set_custom_spacing_after_view(&_0, &_1, &_2);
}

PHP_METHOD(AppKit_NS_NSStackView_NSStackView, customSpacingAfterView)
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
	RETURN_DOUBLE(ns_nsstackview_custom_spacing_after_view(&_0, &_1));
}

PHP_METHOD(AppKit_NS_NSStackView_NSStackView, detachesHiddenViews)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nsstackview_detaches_hidden_views(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSStackView_NSStackView, setDetachesHiddenViews)
{
	zend_bool detachesHiddenViews;
	zval *handle_param = NULL, *detachesHiddenViews_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(detachesHiddenViews)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &detachesHiddenViews_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (detachesHiddenViews ? 1 : 0));
	ns_nsstackview_set_detaches_hidden_views(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSStackView_NSStackView, arrangedSubviews)
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
	ns_nsstackview_arranged_subviews(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSStackView_NSStackView, addArrangedSubview)
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
	ns_nsstackview_add_arranged_subview(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSStackView_NSStackView, insertArrangedSubviewAtIndex)
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
	ns_nsstackview_insert_arranged_subview_at_index(&_0, &_1, &_2);
}

PHP_METHOD(AppKit_NS_NSStackView_NSStackView, removeArrangedSubview)
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
	ns_nsstackview_remove_arranged_subview(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSStackView_NSStackView, detachedViews)
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
	ns_nsstackview_detached_views(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSStackView_NSStackView, setVisibilityPriorityForView)
{
	double priority;
	zval *handle_param = NULL, *priority_param = NULL, *view_param = NULL, _0, _1, _2;
	zend_long handle, view;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(priority)
		Z_PARAM_LONG(view)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &priority_param, &view_param);
	priority = zephir_get_doubleval(priority_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, priority);
	ZVAL_LONG(&_2, view);
	ns_nsstackview_set_visibility_priority_for_view(&_0, &_1, &_2);
}

PHP_METHOD(AppKit_NS_NSStackView_NSStackView, visibilityPriorityForView)
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
	RETURN_DOUBLE(ns_nsstackview_visibility_priority_for_view(&_0, &_1));
}

PHP_METHOD(AppKit_NS_NSStackView_NSStackView, clippingResistancePriorityForOrientation)
{
	zval *handle_param = NULL, *orientation_param = NULL, _0, _1;
	zend_long handle, orientation;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(orientation)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &orientation_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, orientation);
	RETURN_DOUBLE(ns_nsstackview_clipping_resistance_priority_for_orientation(&_0, &_1));
}

PHP_METHOD(AppKit_NS_NSStackView_NSStackView, setClippingResistancePriorityForOrientation)
{
	double clippingResistancePriority;
	zval *handle_param = NULL, *clippingResistancePriority_param = NULL, *orientation_param = NULL, _0, _1, _2;
	zend_long handle, orientation;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(clippingResistancePriority)
		Z_PARAM_LONG(orientation)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &clippingResistancePriority_param, &orientation_param);
	clippingResistancePriority = zephir_get_doubleval(clippingResistancePriority_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, clippingResistancePriority);
	ZVAL_LONG(&_2, orientation);
	ns_nsstackview_set_clipping_resistance_priority_for_orientation(&_0, &_1, &_2);
}

PHP_METHOD(AppKit_NS_NSStackView_NSStackView, huggingPriorityForOrientation)
{
	zval *handle_param = NULL, *orientation_param = NULL, _0, _1;
	zend_long handle, orientation;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(orientation)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &orientation_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, orientation);
	RETURN_DOUBLE(ns_nsstackview_hugging_priority_for_orientation(&_0, &_1));
}

PHP_METHOD(AppKit_NS_NSStackView_NSStackView, setHuggingPriorityForOrientation)
{
	double huggingPriority;
	zval *handle_param = NULL, *huggingPriority_param = NULL, *orientation_param = NULL, _0, _1, _2;
	zend_long handle, orientation;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(huggingPriority)
		Z_PARAM_LONG(orientation)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &huggingPriority_param, &orientation_param);
	huggingPriority = zephir_get_doubleval(huggingPriority_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, huggingPriority);
	ZVAL_LONG(&_2, orientation);
	ns_nsstackview_set_hugging_priority_for_orientation(&_0, &_1, &_2);
}

PHP_METHOD(AppKit_NS_NSStackView_NSStackView, addViewInGravity)
{
	zval *handle_param = NULL, *view_param = NULL, *gravity_param = NULL, _0, _1, _2;
	zend_long handle, view, gravity;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(view)
		Z_PARAM_LONG(gravity)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &view_param, &gravity_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, view);
	ZVAL_LONG(&_2, gravity);
	ns_nsstackview_add_view_in_gravity(&_0, &_1, &_2);
}

PHP_METHOD(AppKit_NS_NSStackView_NSStackView, insertViewAtIndexInGravity)
{
	zval *handle_param = NULL, *view_param = NULL, *index_param = NULL, *gravity_param = NULL, _0, _1, _2, _3;
	zend_long handle, view, index, gravity;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(view)
		Z_PARAM_LONG(index)
		Z_PARAM_LONG(gravity)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &view_param, &index_param, &gravity_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, view);
	ZVAL_LONG(&_2, index);
	ZVAL_LONG(&_3, gravity);
	ns_nsstackview_insert_view_at_index_in_gravity(&_0, &_1, &_2, &_3);
}

PHP_METHOD(AppKit_NS_NSStackView_NSStackView, removeView)
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
	ns_nsstackview_remove_view(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSStackView_NSStackView, viewsInGravity)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *gravity_param = NULL, result, _0, _1;
	zend_long handle, gravity;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(gravity)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &gravity_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, gravity);
	ns_nsstackview_views_in_gravity(&result, &_0, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSStackView_NSStackView, setViewsInGravity)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval views;
	zval *handle_param = NULL, *views_param = NULL, *gravity_param = NULL, _0, _1;
	zend_long handle, gravity;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&views);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_ARRAY(views)
		Z_PARAM_LONG(gravity)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &views_param, &gravity_param);
	zephir_get_arrval(&views, views_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, gravity);
	ns_nsstackview_set_views_in_gravity(&_0, &views, &_1);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSStackView_NSStackView, views)
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
	ns_nsstackview_views(&result, &_0);
	RETURN_CCTOR(&result);
}

