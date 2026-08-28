
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
#include "src/ns-tabviewitem.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"
#include "kernel/string.h"


ZEPHIR_INIT_CLASS(AppKit_NS_NSTabViewItem_NSTabViewItem)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSTabViewItem, NSTabViewItem, appkit, ns_nstabviewitem_nstabviewitem, appkit_ns_nstabviewitem_nstabviewitem_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSTabViewItem_NSTabViewItem, tabViewItemWithViewController)
{
	zval *viewController_param = NULL, _0;
	zend_long viewController;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(viewController)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &viewController_param);
	ZVAL_LONG(&_0, viewController);
	RETURN_LONG(ns_nstabviewitem_tab_view_item_with_view_controller(&_0));
}

PHP_METHOD(AppKit_NS_NSTabViewItem_NSTabViewItem, initWithIdentifier)
{
	zval *identifier_param = NULL, _0;
	zend_long identifier;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(identifier)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &identifier_param);
	ZVAL_LONG(&_0, identifier);
	RETURN_LONG(ns_nstabviewitem_init_with_identifier(&_0));
}

PHP_METHOD(AppKit_NS_NSTabViewItem_NSTabViewItem, identifier)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nstabviewitem_identifier(&_0));
}

PHP_METHOD(AppKit_NS_NSTabViewItem_NSTabViewItem, setIdentifier)
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
	ns_nstabviewitem_set_identifier(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTabViewItem_NSTabViewItem, color)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nstabviewitem_color(&_0));
}

PHP_METHOD(AppKit_NS_NSTabViewItem_NSTabViewItem, setColor)
{
	zval *handle_param = NULL, *color_param = NULL, _0, _1;
	zend_long handle, color;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(color)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &color_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, color);
	ns_nstabviewitem_set_color(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTabViewItem_NSTabViewItem, label)
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
	ns_nstabviewitem_label(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSTabViewItem_NSTabViewItem, setLabel)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval label;
	zval *handle_param = NULL, *label_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&label);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(label)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &label_param);
	zephir_get_strval(&label, label_param);
	ZVAL_LONG(&_0, handle);
	ns_nstabviewitem_set_label(&_0, &label);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSTabViewItem_NSTabViewItem, image)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nstabviewitem_image(&_0));
}

PHP_METHOD(AppKit_NS_NSTabViewItem_NSTabViewItem, setImage)
{
	zval *handle_param = NULL, *image_param = NULL, _0, _1;
	zend_long handle, image;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(image)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &image_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, image);
	ns_nstabviewitem_set_image(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTabViewItem_NSTabViewItem, view)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nstabviewitem_view(&_0));
}

PHP_METHOD(AppKit_NS_NSTabViewItem_NSTabViewItem, setView)
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
	ns_nstabviewitem_set_view(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTabViewItem_NSTabViewItem, viewController)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nstabviewitem_view_controller(&_0));
}

PHP_METHOD(AppKit_NS_NSTabViewItem_NSTabViewItem, setViewController)
{
	zval *handle_param = NULL, *viewController_param = NULL, _0, _1;
	zend_long handle, viewController;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(viewController)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &viewController_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, viewController);
	ns_nstabviewitem_set_view_controller(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTabViewItem_NSTabViewItem, tabState)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nstabviewitem_tab_state(&_0));
}

PHP_METHOD(AppKit_NS_NSTabViewItem_NSTabViewItem, tabView)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nstabviewitem_tab_view(&_0));
}

PHP_METHOD(AppKit_NS_NSTabViewItem_NSTabViewItem, initialFirstResponder)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nstabviewitem_initial_first_responder(&_0));
}

PHP_METHOD(AppKit_NS_NSTabViewItem_NSTabViewItem, setInitialFirstResponder)
{
	zval *handle_param = NULL, *initialFirstResponder_param = NULL, _0, _1;
	zend_long handle, initialFirstResponder;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(initialFirstResponder)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &initialFirstResponder_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, initialFirstResponder);
	ns_nstabviewitem_set_initial_first_responder(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTabViewItem_NSTabViewItem, toolTip)
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
	ns_nstabviewitem_tool_tip(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSTabViewItem_NSTabViewItem, setToolTip)
{
	zval *handle_param = NULL, *toolTip = NULL, toolTip_sub, _0;
	zend_long handle;

	ZVAL_UNDEF(&toolTip_sub);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(toolTip)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &toolTip);
	ZVAL_LONG(&_0, handle);
	ns_nstabviewitem_set_tool_tip(&_0, toolTip);
}

PHP_METHOD(AppKit_NS_NSTabViewItem_NSTabViewItem, drawLabelInRect)
{
	double x, y, width, height;
	zend_bool shouldTruncateLabel;
	zval *handle_param = NULL, *shouldTruncateLabel_param = NULL, *x_param = NULL, *y_param = NULL, *width_param = NULL, *height_param = NULL, _0, _1, _2, _3, _4, _5;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZEND_PARSE_PARAMETERS_START(6, 6)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(shouldTruncateLabel)
		Z_PARAM_ZVAL(x)
		Z_PARAM_ZVAL(y)
		Z_PARAM_ZVAL(width)
		Z_PARAM_ZVAL(height)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(6, 0, &handle_param, &shouldTruncateLabel_param, &x_param, &y_param, &width_param, &height_param);
	x = zephir_get_doubleval(x_param);
	y = zephir_get_doubleval(y_param);
	width = zephir_get_doubleval(width_param);
	height = zephir_get_doubleval(height_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (shouldTruncateLabel ? 1 : 0));
	ZVAL_DOUBLE(&_2, x);
	ZVAL_DOUBLE(&_3, y);
	ZVAL_DOUBLE(&_4, width);
	ZVAL_DOUBLE(&_5, height);
	ns_nstabviewitem_draw_label_in_rect(&_0, &_1, &_2, &_3, &_4, &_5);
}

PHP_METHOD(AppKit_NS_NSTabViewItem_NSTabViewItem, sizeOfLabel)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_bool computeMin;
	zval *handle_param = NULL, *computeMin_param = NULL, result, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(computeMin)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &computeMin_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (computeMin ? 1 : 0));
	ns_nstabviewitem_size_of_label(&result, &_0, &_1);
	RETURN_CCTOR(&result);
}

