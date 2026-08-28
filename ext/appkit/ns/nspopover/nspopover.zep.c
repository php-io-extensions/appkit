
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
#include "src/ns-popover.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"


ZEPHIR_INIT_CLASS(AppKit_NS_NSPopover_NSPopover)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSPopover, NSPopover, appkit, ns_nspopover_nspopover, appkit_ns_nspopover_nspopover_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSPopover_NSPopover, init)
{

	RETURN_LONG(ns_nspopover_init());
}

PHP_METHOD(AppKit_NS_NSPopover_NSPopover, delegate)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nspopover_delegate(&_0));
}

PHP_METHOD(AppKit_NS_NSPopover_NSPopover, setDelegate)
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
	ns_nspopover_set_delegate(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSPopover_NSPopover, appearance)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nspopover_appearance(&_0));
}

PHP_METHOD(AppKit_NS_NSPopover_NSPopover, setAppearance)
{
	zval *handle_param = NULL, *appearance_param = NULL, _0, _1;
	zend_long handle, appearance;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(appearance)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &appearance_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, appearance);
	ns_nspopover_set_appearance(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSPopover_NSPopover, effectiveAppearance)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nspopover_effective_appearance(&_0));
}

PHP_METHOD(AppKit_NS_NSPopover_NSPopover, behavior)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nspopover_behavior(&_0));
}

PHP_METHOD(AppKit_NS_NSPopover_NSPopover, setBehavior)
{
	zval *handle_param = NULL, *behavior_param = NULL, _0, _1;
	zend_long handle, behavior;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(behavior)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &behavior_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, behavior);
	ns_nspopover_set_behavior(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSPopover_NSPopover, animates)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nspopover_animates(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSPopover_NSPopover, setAnimates)
{
	zend_bool animates;
	zval *handle_param = NULL, *animates_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(animates)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &animates_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (animates ? 1 : 0));
	ns_nspopover_set_animates(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSPopover_NSPopover, contentViewController)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nspopover_content_view_controller(&_0));
}

PHP_METHOD(AppKit_NS_NSPopover_NSPopover, setContentViewController)
{
	zval *handle_param = NULL, *contentViewController_param = NULL, _0, _1;
	zend_long handle, contentViewController;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(contentViewController)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &contentViewController_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, contentViewController);
	ns_nspopover_set_content_view_controller(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSPopover_NSPopover, contentSize)
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
	ns_nspopover_content_size(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSPopover_NSPopover, setContentSize)
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
	ns_nspopover_set_content_size(&_0, &_1, &_2);
}

PHP_METHOD(AppKit_NS_NSPopover_NSPopover, isShown)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nspopover_is_shown(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSPopover_NSPopover, isDetached)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nspopover_is_detached(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSPopover_NSPopover, positioningRect)
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
	ns_nspopover_positioning_rect(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSPopover_NSPopover, setPositioningRect)
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
	ns_nspopover_set_positioning_rect(&_0, &_1, &_2, &_3, &_4);
}

PHP_METHOD(AppKit_NS_NSPopover_NSPopover, hasFullSizeContent)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nspopover_has_full_size_content(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSPopover_NSPopover, setHasFullSizeContent)
{
	zend_bool hasFullSizeContent;
	zval *handle_param = NULL, *hasFullSizeContent_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(hasFullSizeContent)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &hasFullSizeContent_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (hasFullSizeContent ? 1 : 0));
	ns_nspopover_set_has_full_size_content(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSPopover_NSPopover, showRelativeToRectOfViewPreferredEdge)
{
	double x, y, width, height;
	zval *handle_param = NULL, *x_param = NULL, *y_param = NULL, *width_param = NULL, *height_param = NULL, *positioningView_param = NULL, *preferredEdge_param = NULL, _0, _1, _2, _3, _4, _5, _6;
	zend_long handle, positioningView, preferredEdge;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_6);
	ZEND_PARSE_PARAMETERS_START(7, 7)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(x)
		Z_PARAM_ZVAL(y)
		Z_PARAM_ZVAL(width)
		Z_PARAM_ZVAL(height)
		Z_PARAM_LONG(positioningView)
		Z_PARAM_LONG(preferredEdge)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(7, 0, &handle_param, &x_param, &y_param, &width_param, &height_param, &positioningView_param, &preferredEdge_param);
	x = zephir_get_doubleval(x_param);
	y = zephir_get_doubleval(y_param);
	width = zephir_get_doubleval(width_param);
	height = zephir_get_doubleval(height_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, x);
	ZVAL_DOUBLE(&_2, y);
	ZVAL_DOUBLE(&_3, width);
	ZVAL_DOUBLE(&_4, height);
	ZVAL_LONG(&_5, positioningView);
	ZVAL_LONG(&_6, preferredEdge);
	ns_nspopover_show_relative_to_rect_of_view_preferred_edge(&_0, &_1, &_2, &_3, &_4, &_5, &_6);
}

PHP_METHOD(AppKit_NS_NSPopover_NSPopover, showRelativeToToolbarItem)
{
	zval *handle_param = NULL, *toolbarItem_param = NULL, _0, _1;
	zend_long handle, toolbarItem;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(toolbarItem)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &toolbarItem_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, toolbarItem);
	ns_nspopover_show_relative_to_toolbar_item(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSPopover_NSPopover, performClose)
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
	ns_nspopover_perform_close(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSPopover_NSPopover, close)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	ns_nspopover_close(&_0);
}

