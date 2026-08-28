
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
#include "src/ns-pathcell.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(AppKit_NS_NSPathCell_NSPathCell)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSPathCell, NSPathCell, appkit, ns_nspathcell_nspathcell, appkit_ns_nspathcell_nspathcell_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSPathCell_NSPathCell, initTextCell)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *string__param = NULL;
	zval string_;

	ZVAL_UNDEF(&string_);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(string_)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &string__param);
	zephir_get_strval(&string_, string__param);
	RETURN_MM_LONG(ns_nspathcell_init_text_cell(&string_));
}

PHP_METHOD(AppKit_NS_NSPathCell_NSPathCell, initImageCell)
{
	zval *image_param = NULL, _0;
	zend_long image;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(image)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &image_param);
	ZVAL_LONG(&_0, image);
	RETURN_LONG(ns_nspathcell_init_image_cell(&_0));
}

PHP_METHOD(AppKit_NS_NSPathCell_NSPathCell, pathStyle)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nspathcell_path_style(&_0));
}

PHP_METHOD(AppKit_NS_NSPathCell_NSPathCell, setPathStyle)
{
	zval *handle_param = NULL, *pathStyle_param = NULL, _0, _1;
	zend_long handle, pathStyle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(pathStyle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &pathStyle_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, pathStyle);
	ns_nspathcell_set_path_style(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSPathCell_NSPathCell, Url)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nspathcell_url(&_0));
}

PHP_METHOD(AppKit_NS_NSPathCell_NSPathCell, setURL)
{
	zval *handle_param = NULL, *Url_param = NULL, _0, _1;
	zend_long handle, Url;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(Url)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &Url_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, Url);
	ns_nspathcell_set_url(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSPathCell_NSPathCell, setObjectValue)
{
	zval *handle_param = NULL, *obj_param = NULL, _0, _1;
	zend_long handle, obj;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(obj)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &obj_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, obj);
	ns_nspathcell_set_object_value(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSPathCell_NSPathCell, allowedTypes)
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
	ns_nspathcell_allowed_types(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSPathCell_NSPathCell, setAllowedTypes)
{
	zval *handle_param = NULL, *allowedTypes = NULL, allowedTypes_sub, _0;
	zend_long handle;

	ZVAL_UNDEF(&allowedTypes_sub);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(allowedTypes)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &allowedTypes);
	ZVAL_LONG(&_0, handle);
	ns_nspathcell_set_allowed_types(&_0, allowedTypes);
}

PHP_METHOD(AppKit_NS_NSPathCell_NSPathCell, delegate)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nspathcell_delegate(&_0));
}

PHP_METHOD(AppKit_NS_NSPathCell_NSPathCell, setDelegate)
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
	ns_nspathcell_set_delegate(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSPathCell_NSPathCell, pathComponentCells)
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
	ns_nspathcell_path_component_cells(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSPathCell_NSPathCell, setPathComponentCells)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval pathComponentCells;
	zval *handle_param = NULL, *pathComponentCells_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&pathComponentCells);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ARRAY(pathComponentCells)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &pathComponentCells_param);
	zephir_get_arrval(&pathComponentCells, pathComponentCells_param);
	ZVAL_LONG(&_0, handle);
	ns_nspathcell_set_path_component_cells(&_0, &pathComponentCells);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSPathCell_NSPathCell, rectOfPathComponentCellWithFrameInView)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	double x, y, width, height;
	zval *handle_param = NULL, *cell_param = NULL, *x_param = NULL, *y_param = NULL, *width_param = NULL, *height_param = NULL, *view_param = NULL, result, _0, _1, _2, _3, _4, _5, _6;
	zend_long handle, cell, view;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_6);
	ZEND_PARSE_PARAMETERS_START(7, 7)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(cell)
		Z_PARAM_ZVAL(x)
		Z_PARAM_ZVAL(y)
		Z_PARAM_ZVAL(width)
		Z_PARAM_ZVAL(height)
		Z_PARAM_LONG(view)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 7, 0, &handle_param, &cell_param, &x_param, &y_param, &width_param, &height_param, &view_param);
	x = zephir_get_doubleval(x_param);
	y = zephir_get_doubleval(y_param);
	width = zephir_get_doubleval(width_param);
	height = zephir_get_doubleval(height_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, cell);
	ZVAL_DOUBLE(&_2, x);
	ZVAL_DOUBLE(&_3, y);
	ZVAL_DOUBLE(&_4, width);
	ZVAL_DOUBLE(&_5, height);
	ZVAL_LONG(&_6, view);
	ns_nspathcell_rect_of_path_component_cell_with_frame_in_view(&result, &_0, &_1, &_2, &_3, &_4, &_5, &_6);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSPathCell_NSPathCell, pathComponentCellAtPointWithFrameInView)
{
	double locationX, locationY, x, y, width, height;
	zval *handle_param = NULL, *locationX_param = NULL, *locationY_param = NULL, *x_param = NULL, *y_param = NULL, *width_param = NULL, *height_param = NULL, *view_param = NULL, _0, _1, _2, _3, _4, _5, _6, _7;
	zend_long handle, view;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_6);
	ZVAL_UNDEF(&_7);
	ZEND_PARSE_PARAMETERS_START(8, 8)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(locationX)
		Z_PARAM_ZVAL(locationY)
		Z_PARAM_ZVAL(x)
		Z_PARAM_ZVAL(y)
		Z_PARAM_ZVAL(width)
		Z_PARAM_ZVAL(height)
		Z_PARAM_LONG(view)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(8, 0, &handle_param, &locationX_param, &locationY_param, &x_param, &y_param, &width_param, &height_param, &view_param);
	locationX = zephir_get_doubleval(locationX_param);
	locationY = zephir_get_doubleval(locationY_param);
	x = zephir_get_doubleval(x_param);
	y = zephir_get_doubleval(y_param);
	width = zephir_get_doubleval(width_param);
	height = zephir_get_doubleval(height_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, locationX);
	ZVAL_DOUBLE(&_2, locationY);
	ZVAL_DOUBLE(&_3, x);
	ZVAL_DOUBLE(&_4, y);
	ZVAL_DOUBLE(&_5, width);
	ZVAL_DOUBLE(&_6, height);
	ZVAL_LONG(&_7, view);
	RETURN_LONG(ns_nspathcell_path_component_cell_at_point_with_frame_in_view(&_0, &_1, &_2, &_3, &_4, &_5, &_6, &_7));
}

PHP_METHOD(AppKit_NS_NSPathCell_NSPathCell, clickedPathComponentCell)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nspathcell_clicked_path_component_cell(&_0));
}

PHP_METHOD(AppKit_NS_NSPathCell_NSPathCell, mouseEnteredWithFrameInView)
{
	double x, y, width, height;
	zval *handle_param = NULL, *event_param = NULL, *x_param = NULL, *y_param = NULL, *width_param = NULL, *height_param = NULL, *view_param = NULL, _0, _1, _2, _3, _4, _5, _6;
	zend_long handle, event, view;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_6);
	ZEND_PARSE_PARAMETERS_START(7, 7)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(event)
		Z_PARAM_ZVAL(x)
		Z_PARAM_ZVAL(y)
		Z_PARAM_ZVAL(width)
		Z_PARAM_ZVAL(height)
		Z_PARAM_LONG(view)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(7, 0, &handle_param, &event_param, &x_param, &y_param, &width_param, &height_param, &view_param);
	x = zephir_get_doubleval(x_param);
	y = zephir_get_doubleval(y_param);
	width = zephir_get_doubleval(width_param);
	height = zephir_get_doubleval(height_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, event);
	ZVAL_DOUBLE(&_2, x);
	ZVAL_DOUBLE(&_3, y);
	ZVAL_DOUBLE(&_4, width);
	ZVAL_DOUBLE(&_5, height);
	ZVAL_LONG(&_6, view);
	ns_nspathcell_mouse_entered_with_frame_in_view(&_0, &_1, &_2, &_3, &_4, &_5, &_6);
}

PHP_METHOD(AppKit_NS_NSPathCell_NSPathCell, mouseExitedWithFrameInView)
{
	double x, y, width, height;
	zval *handle_param = NULL, *event_param = NULL, *x_param = NULL, *y_param = NULL, *width_param = NULL, *height_param = NULL, *view_param = NULL, _0, _1, _2, _3, _4, _5, _6;
	zend_long handle, event, view;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_6);
	ZEND_PARSE_PARAMETERS_START(7, 7)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(event)
		Z_PARAM_ZVAL(x)
		Z_PARAM_ZVAL(y)
		Z_PARAM_ZVAL(width)
		Z_PARAM_ZVAL(height)
		Z_PARAM_LONG(view)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(7, 0, &handle_param, &event_param, &x_param, &y_param, &width_param, &height_param, &view_param);
	x = zephir_get_doubleval(x_param);
	y = zephir_get_doubleval(y_param);
	width = zephir_get_doubleval(width_param);
	height = zephir_get_doubleval(height_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, event);
	ZVAL_DOUBLE(&_2, x);
	ZVAL_DOUBLE(&_3, y);
	ZVAL_DOUBLE(&_4, width);
	ZVAL_DOUBLE(&_5, height);
	ZVAL_LONG(&_6, view);
	ns_nspathcell_mouse_exited_with_frame_in_view(&_0, &_1, &_2, &_3, &_4, &_5, &_6);
}

PHP_METHOD(AppKit_NS_NSPathCell_NSPathCell, doubleAction)
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
	ns_nspathcell_double_action(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSPathCell_NSPathCell, setDoubleAction)
{
	zval *handle_param = NULL, *doubleAction = NULL, doubleAction_sub, _0;
	zend_long handle;

	ZVAL_UNDEF(&doubleAction_sub);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(doubleAction)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &doubleAction);
	ZVAL_LONG(&_0, handle);
	ns_nspathcell_set_double_action(&_0, doubleAction);
}

PHP_METHOD(AppKit_NS_NSPathCell_NSPathCell, backgroundColor)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nspathcell_background_color(&_0));
}

PHP_METHOD(AppKit_NS_NSPathCell_NSPathCell, setBackgroundColor)
{
	zval *handle_param = NULL, *backgroundColor_param = NULL, _0, _1;
	zend_long handle, backgroundColor;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(backgroundColor)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &backgroundColor_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, backgroundColor);
	ns_nspathcell_set_background_color(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSPathCell_NSPathCell, placeholderString)
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
	ns_nspathcell_placeholder_string(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSPathCell_NSPathCell, setPlaceholderString)
{
	zval *handle_param = NULL, *placeholderString = NULL, placeholderString_sub, _0;
	zend_long handle;

	ZVAL_UNDEF(&placeholderString_sub);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(placeholderString)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &placeholderString);
	ZVAL_LONG(&_0, handle);
	ns_nspathcell_set_placeholder_string(&_0, placeholderString);
}

