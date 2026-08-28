
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
#include "src/ns-tablecellview.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(AppKit_NS_NSTableCellView_NSTableCellView)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSTableCellView, NSTableCellView, appkit, ns_nstablecellview_nstablecellview, appkit_ns_nstablecellview_nstablecellview_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSTableCellView_NSTableCellView, initWithFrame)
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
	RETURN_LONG(ns_nstablecellview_init_with_frame(&_0, &_1, &_2, &_3));
}

PHP_METHOD(AppKit_NS_NSTableCellView_NSTableCellView, objectValue)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nstablecellview_object_value(&_0));
}

PHP_METHOD(AppKit_NS_NSTableCellView_NSTableCellView, setObjectValue)
{
	zval *handle_param = NULL, *objectValue_param = NULL, _0, _1;
	zend_long handle, objectValue;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(objectValue)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &objectValue_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, objectValue);
	ns_nstablecellview_set_object_value(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTableCellView_NSTableCellView, textField)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nstablecellview_text_field(&_0));
}

PHP_METHOD(AppKit_NS_NSTableCellView_NSTableCellView, setTextField)
{
	zval *handle_param = NULL, *textField_param = NULL, _0, _1;
	zend_long handle, textField;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(textField)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &textField_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, textField);
	ns_nstablecellview_set_text_field(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTableCellView_NSTableCellView, imageView)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nstablecellview_image_view(&_0));
}

PHP_METHOD(AppKit_NS_NSTableCellView_NSTableCellView, setImageView)
{
	zval *handle_param = NULL, *imageView_param = NULL, _0, _1;
	zend_long handle, imageView;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(imageView)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &imageView_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, imageView);
	ns_nstablecellview_set_image_view(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTableCellView_NSTableCellView, backgroundStyle)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nstablecellview_background_style(&_0));
}

PHP_METHOD(AppKit_NS_NSTableCellView_NSTableCellView, setBackgroundStyle)
{
	zval *handle_param = NULL, *backgroundStyle_param = NULL, _0, _1;
	zend_long handle, backgroundStyle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(backgroundStyle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &backgroundStyle_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, backgroundStyle);
	ns_nstablecellview_set_background_style(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTableCellView_NSTableCellView, rowSizeStyle)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nstablecellview_row_size_style(&_0));
}

PHP_METHOD(AppKit_NS_NSTableCellView_NSTableCellView, setRowSizeStyle)
{
	zval *handle_param = NULL, *rowSizeStyle_param = NULL, _0, _1;
	zend_long handle, rowSizeStyle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(rowSizeStyle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &rowSizeStyle_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, rowSizeStyle);
	ns_nstablecellview_set_row_size_style(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTableCellView_NSTableCellView, draggingImageComponents)
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
	ns_nstablecellview_dragging_image_components(&result, &_0);
	RETURN_CCTOR(&result);
}

