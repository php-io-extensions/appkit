
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
#include "src/ns-image.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"


ZEPHIR_INIT_CLASS(AppKit_NS_NSImage_NSImage)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSImage, NSImage, appkit, ns_nsimage_nsimage, appkit_ns_nsimage_nsimage_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSImage_NSImage, init)
{

	RETURN_LONG(ns_nsimage_init());
}

PHP_METHOD(AppKit_NS_NSImage_NSImage, imageNamed)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *name_param = NULL;
	zval name;

	ZVAL_UNDEF(&name);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(name)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &name_param);
	zephir_get_strval(&name, name_param);
	RETURN_MM_LONG(ns_nsimage_image_named(&name));
}

PHP_METHOD(AppKit_NS_NSImage_NSImage, imageWithSystemSymbolNameAccessibilityDescription)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *name_param = NULL, *description = NULL, description_sub;
	zval name;

	ZVAL_UNDEF(&name);
	ZVAL_UNDEF(&description_sub);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_STR(name)
		Z_PARAM_ZVAL(description)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &name_param, &description);
	zephir_get_strval(&name, name_param);
	RETURN_MM_LONG(ns_nsimage_image_with_system_symbol_name_accessibility_description(&name, description));
}

PHP_METHOD(AppKit_NS_NSImage_NSImage, imageWithSystemSymbolNameVariableValueAccessibilityDescription)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	double value;
	zval *name_param = NULL, *value_param = NULL, *description = NULL, description_sub, _0;
	zval name;

	ZVAL_UNDEF(&name);
	ZVAL_UNDEF(&description_sub);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_STR(name)
		Z_PARAM_ZVAL(value)
		Z_PARAM_ZVAL(description)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &name_param, &value_param, &description);
	zephir_get_strval(&name, name_param);
	value = zephir_get_doubleval(value_param);
	ZVAL_DOUBLE(&_0, value);
	RETURN_MM_LONG(ns_nsimage_image_with_system_symbol_name_variable_value_accessibility_description(&name, &_0, description));
}

PHP_METHOD(AppKit_NS_NSImage_NSImage, imageWithSymbolNameVariableValue)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	double value;
	zval *name_param = NULL, *value_param = NULL, _0;
	zval name;

	ZVAL_UNDEF(&name);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_STR(name)
		Z_PARAM_ZVAL(value)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &name_param, &value_param);
	zephir_get_strval(&name, name_param);
	value = zephir_get_doubleval(value_param);
	ZVAL_DOUBLE(&_0, value);
	RETURN_MM_LONG(ns_nsimage_image_with_symbol_name_variable_value(&name, &_0));
}

PHP_METHOD(AppKit_NS_NSImage_NSImage, imageWithSymbolNameBundleVariableValue)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	double value;
	zend_long bundle;
	zval *name_param = NULL, *bundle_param = NULL, *value_param = NULL, _0, _1;
	zval name;

	ZVAL_UNDEF(&name);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_STR(name)
		Z_PARAM_LONG(bundle)
		Z_PARAM_ZVAL(value)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &name_param, &bundle_param, &value_param);
	zephir_get_strval(&name, name_param);
	value = zephir_get_doubleval(value_param);
	ZVAL_LONG(&_0, bundle);
	ZVAL_DOUBLE(&_1, value);
	RETURN_MM_LONG(ns_nsimage_image_with_symbol_name_bundle_variable_value(&name, &_0, &_1));
}

PHP_METHOD(AppKit_NS_NSImage_NSImage, initWithSize)
{
	zval *width_param = NULL, *height_param = NULL, _0, _1;
	double width, height;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_ZVAL(width)
		Z_PARAM_ZVAL(height)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &width_param, &height_param);
	width = zephir_get_doubleval(width_param);
	height = zephir_get_doubleval(height_param);
	ZVAL_DOUBLE(&_0, width);
	ZVAL_DOUBLE(&_1, height);
	RETURN_LONG(ns_nsimage_init_with_size(&_0, &_1));
}

PHP_METHOD(AppKit_NS_NSImage_NSImage, initWithContentsOfFile)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *fileName_param = NULL;
	zval fileName;

	ZVAL_UNDEF(&fileName);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(fileName)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &fileName_param);
	zephir_get_strval(&fileName, fileName_param);
	RETURN_MM_LONG(ns_nsimage_init_with_contents_of_file(&fileName));
}

PHP_METHOD(AppKit_NS_NSImage_NSImage, initWithContentsOfURL)
{
	zval *url_param = NULL, _0;
	zend_long url;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(url)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &url_param);
	ZVAL_LONG(&_0, url);
	RETURN_LONG(ns_nsimage_init_with_contents_of_url(&_0));
}

PHP_METHOD(AppKit_NS_NSImage_NSImage, initByReferencingFile)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *fileName_param = NULL;
	zval fileName;

	ZVAL_UNDEF(&fileName);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(fileName)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &fileName_param);
	zephir_get_strval(&fileName, fileName_param);
	RETURN_MM_LONG(ns_nsimage_init_by_referencing_file(&fileName));
}

PHP_METHOD(AppKit_NS_NSImage_NSImage, initByReferencingURL)
{
	zval *url_param = NULL, _0;
	zend_long url;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(url)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &url_param);
	ZVAL_LONG(&_0, url);
	RETURN_LONG(ns_nsimage_init_by_referencing_url(&_0));
}

PHP_METHOD(AppKit_NS_NSImage_NSImage, initWithPasteboard)
{
	zval *pasteboard_param = NULL, _0;
	zend_long pasteboard;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(pasteboard)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &pasteboard_param);
	ZVAL_LONG(&_0, pasteboard);
	RETURN_LONG(ns_nsimage_init_with_pasteboard(&_0));
}

PHP_METHOD(AppKit_NS_NSImage_NSImage, size)
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
	ns_nsimage_size(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSImage_NSImage, setSize)
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
	ns_nsimage_set_size(&_0, &_1, &_2);
}

PHP_METHOD(AppKit_NS_NSImage_NSImage, setName)
{
	zval *handle_param = NULL, *name = NULL, name_sub, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&name_sub);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(name)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &name);
	ZVAL_LONG(&_0, handle);
	r = ns_nsimage_set_name(&_0, name);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSImage_NSImage, name)
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
	ns_nsimage_name(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSImage_NSImage, backgroundColor)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsimage_background_color(&_0));
}

PHP_METHOD(AppKit_NS_NSImage_NSImage, setBackgroundColor)
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
	ns_nsimage_set_background_color(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSImage_NSImage, usesEPSOnResolutionMismatch)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nsimage_uses_eps_on_resolution_mismatch(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSImage_NSImage, setUsesEPSOnResolutionMismatch)
{
	zend_bool flag;
	zval *handle_param = NULL, *flag_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(flag)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &flag_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (flag ? 1 : 0));
	ns_nsimage_set_uses_eps_on_resolution_mismatch(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSImage_NSImage, prefersColorMatch)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nsimage_prefers_color_match(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSImage_NSImage, setPrefersColorMatch)
{
	zend_bool flag;
	zval *handle_param = NULL, *flag_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(flag)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &flag_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (flag ? 1 : 0));
	ns_nsimage_set_prefers_color_match(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSImage_NSImage, matchesOnMultipleResolution)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nsimage_matches_on_multiple_resolution(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSImage_NSImage, setMatchesOnMultipleResolution)
{
	zend_bool flag;
	zval *handle_param = NULL, *flag_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(flag)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &flag_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (flag ? 1 : 0));
	ns_nsimage_set_matches_on_multiple_resolution(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSImage_NSImage, matchesOnlyOnBestFittingAxis)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nsimage_matches_only_on_best_fitting_axis(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSImage_NSImage, setMatchesOnlyOnBestFittingAxis)
{
	zend_bool flag;
	zval *handle_param = NULL, *flag_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(flag)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &flag_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (flag ? 1 : 0));
	ns_nsimage_set_matches_only_on_best_fitting_axis(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSImage_NSImage, drawAtPointFromRectOperationFraction)
{
	double x, y, fromX, fromY, fromWidth, fromHeight, delta;
	zval *handle_param = NULL, *x_param = NULL, *y_param = NULL, *fromX_param = NULL, *fromY_param = NULL, *fromWidth_param = NULL, *fromHeight_param = NULL, *op_param = NULL, *delta_param = NULL, _0, _1, _2, _3, _4, _5, _6, _7, _8;
	zend_long handle, op;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_6);
	ZVAL_UNDEF(&_7);
	ZVAL_UNDEF(&_8);
	ZEND_PARSE_PARAMETERS_START(9, 9)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(x)
		Z_PARAM_ZVAL(y)
		Z_PARAM_ZVAL(fromX)
		Z_PARAM_ZVAL(fromY)
		Z_PARAM_ZVAL(fromWidth)
		Z_PARAM_ZVAL(fromHeight)
		Z_PARAM_LONG(op)
		Z_PARAM_ZVAL(delta)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(9, 0, &handle_param, &x_param, &y_param, &fromX_param, &fromY_param, &fromWidth_param, &fromHeight_param, &op_param, &delta_param);
	x = zephir_get_doubleval(x_param);
	y = zephir_get_doubleval(y_param);
	fromX = zephir_get_doubleval(fromX_param);
	fromY = zephir_get_doubleval(fromY_param);
	fromWidth = zephir_get_doubleval(fromWidth_param);
	fromHeight = zephir_get_doubleval(fromHeight_param);
	delta = zephir_get_doubleval(delta_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, x);
	ZVAL_DOUBLE(&_2, y);
	ZVAL_DOUBLE(&_3, fromX);
	ZVAL_DOUBLE(&_4, fromY);
	ZVAL_DOUBLE(&_5, fromWidth);
	ZVAL_DOUBLE(&_6, fromHeight);
	ZVAL_LONG(&_7, op);
	ZVAL_DOUBLE(&_8, delta);
	ns_nsimage_draw_at_point_from_rect_operation_fraction(&_0, &_1, &_2, &_3, &_4, &_5, &_6, &_7, &_8);
}

PHP_METHOD(AppKit_NS_NSImage_NSImage, drawInRectFromRectOperationFraction)
{
	double x, y, width, height, fromX, fromY, fromWidth, fromHeight, delta;
	zval *handle_param = NULL, *x_param = NULL, *y_param = NULL, *width_param = NULL, *height_param = NULL, *fromX_param = NULL, *fromY_param = NULL, *fromWidth_param = NULL, *fromHeight_param = NULL, *op_param = NULL, *delta_param = NULL, _0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10;
	zend_long handle, op;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_6);
	ZVAL_UNDEF(&_7);
	ZVAL_UNDEF(&_8);
	ZVAL_UNDEF(&_9);
	ZVAL_UNDEF(&_10);
	ZEND_PARSE_PARAMETERS_START(11, 11)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(x)
		Z_PARAM_ZVAL(y)
		Z_PARAM_ZVAL(width)
		Z_PARAM_ZVAL(height)
		Z_PARAM_ZVAL(fromX)
		Z_PARAM_ZVAL(fromY)
		Z_PARAM_ZVAL(fromWidth)
		Z_PARAM_ZVAL(fromHeight)
		Z_PARAM_LONG(op)
		Z_PARAM_ZVAL(delta)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(11, 0, &handle_param, &x_param, &y_param, &width_param, &height_param, &fromX_param, &fromY_param, &fromWidth_param, &fromHeight_param, &op_param, &delta_param);
	x = zephir_get_doubleval(x_param);
	y = zephir_get_doubleval(y_param);
	width = zephir_get_doubleval(width_param);
	height = zephir_get_doubleval(height_param);
	fromX = zephir_get_doubleval(fromX_param);
	fromY = zephir_get_doubleval(fromY_param);
	fromWidth = zephir_get_doubleval(fromWidth_param);
	fromHeight = zephir_get_doubleval(fromHeight_param);
	delta = zephir_get_doubleval(delta_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, x);
	ZVAL_DOUBLE(&_2, y);
	ZVAL_DOUBLE(&_3, width);
	ZVAL_DOUBLE(&_4, height);
	ZVAL_DOUBLE(&_5, fromX);
	ZVAL_DOUBLE(&_6, fromY);
	ZVAL_DOUBLE(&_7, fromWidth);
	ZVAL_DOUBLE(&_8, fromHeight);
	ZVAL_LONG(&_9, op);
	ZVAL_DOUBLE(&_10, delta);
	ns_nsimage_draw_in_rect_from_rect_operation_fraction(&_0, &_1, &_2, &_3, &_4, &_5, &_6, &_7, &_8, &_9, &_10);
}

PHP_METHOD(AppKit_NS_NSImage_NSImage, drawInRectFromRectOperationFractionRespectFlippedHints)
{
	zend_bool respectFlipped;
	double x, y, width, height, fromX, fromY, fromWidth, fromHeight, requestedAlpha;
	zval *handle_param = NULL, *x_param = NULL, *y_param = NULL, *width_param = NULL, *height_param = NULL, *fromX_param = NULL, *fromY_param = NULL, *fromWidth_param = NULL, *fromHeight_param = NULL, *op_param = NULL, *requestedAlpha_param = NULL, *respectFlipped_param = NULL, *hints = NULL, hints_sub, _0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11;
	zend_long handle, op;

	ZVAL_UNDEF(&hints_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_6);
	ZVAL_UNDEF(&_7);
	ZVAL_UNDEF(&_8);
	ZVAL_UNDEF(&_9);
	ZVAL_UNDEF(&_10);
	ZVAL_UNDEF(&_11);
	ZEND_PARSE_PARAMETERS_START(13, 13)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(x)
		Z_PARAM_ZVAL(y)
		Z_PARAM_ZVAL(width)
		Z_PARAM_ZVAL(height)
		Z_PARAM_ZVAL(fromX)
		Z_PARAM_ZVAL(fromY)
		Z_PARAM_ZVAL(fromWidth)
		Z_PARAM_ZVAL(fromHeight)
		Z_PARAM_LONG(op)
		Z_PARAM_ZVAL(requestedAlpha)
		Z_PARAM_BOOL(respectFlipped)
		Z_PARAM_ZVAL(hints)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(13, 0, &handle_param, &x_param, &y_param, &width_param, &height_param, &fromX_param, &fromY_param, &fromWidth_param, &fromHeight_param, &op_param, &requestedAlpha_param, &respectFlipped_param, &hints);
	x = zephir_get_doubleval(x_param);
	y = zephir_get_doubleval(y_param);
	width = zephir_get_doubleval(width_param);
	height = zephir_get_doubleval(height_param);
	fromX = zephir_get_doubleval(fromX_param);
	fromY = zephir_get_doubleval(fromY_param);
	fromWidth = zephir_get_doubleval(fromWidth_param);
	fromHeight = zephir_get_doubleval(fromHeight_param);
	requestedAlpha = zephir_get_doubleval(requestedAlpha_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, x);
	ZVAL_DOUBLE(&_2, y);
	ZVAL_DOUBLE(&_3, width);
	ZVAL_DOUBLE(&_4, height);
	ZVAL_DOUBLE(&_5, fromX);
	ZVAL_DOUBLE(&_6, fromY);
	ZVAL_DOUBLE(&_7, fromWidth);
	ZVAL_DOUBLE(&_8, fromHeight);
	ZVAL_LONG(&_9, op);
	ZVAL_DOUBLE(&_10, requestedAlpha);
	ZVAL_BOOL(&_11, (respectFlipped ? 1 : 0));
	ns_nsimage_draw_in_rect_from_rect_operation_fraction_respect_flipped_hints(&_0, &_1, &_2, &_3, &_4, &_5, &_6, &_7, &_8, &_9, &_10, &_11, hints);
}

PHP_METHOD(AppKit_NS_NSImage_NSImage, drawRepresentationInRect)
{
	double x, y, width, height;
	zval *handle_param = NULL, *imageRep_param = NULL, *x_param = NULL, *y_param = NULL, *width_param = NULL, *height_param = NULL, _0, _1, _2, _3, _4, _5;
	zend_long handle, imageRep, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZEND_PARSE_PARAMETERS_START(6, 6)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(imageRep)
		Z_PARAM_ZVAL(x)
		Z_PARAM_ZVAL(y)
		Z_PARAM_ZVAL(width)
		Z_PARAM_ZVAL(height)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(6, 0, &handle_param, &imageRep_param, &x_param, &y_param, &width_param, &height_param);
	x = zephir_get_doubleval(x_param);
	y = zephir_get_doubleval(y_param);
	width = zephir_get_doubleval(width_param);
	height = zephir_get_doubleval(height_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, imageRep);
	ZVAL_DOUBLE(&_2, x);
	ZVAL_DOUBLE(&_3, y);
	ZVAL_DOUBLE(&_4, width);
	ZVAL_DOUBLE(&_5, height);
	r = ns_nsimage_draw_representation_in_rect(&_0, &_1, &_2, &_3, &_4, &_5);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSImage_NSImage, drawInRect)
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
	ns_nsimage_draw_in_rect(&_0, &_1, &_2, &_3, &_4);
}

PHP_METHOD(AppKit_NS_NSImage_NSImage, recache)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	ns_nsimage_recache(&_0);
}

PHP_METHOD(AppKit_NS_NSImage_NSImage, representations)
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
	ns_nsimage_representations(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSImage_NSImage, addRepresentations)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval imageReps;
	zval *handle_param = NULL, *imageReps_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&imageReps);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ARRAY(imageReps)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &imageReps_param);
	zephir_get_arrval(&imageReps, imageReps_param);
	ZVAL_LONG(&_0, handle);
	ns_nsimage_add_representations(&_0, &imageReps);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSImage_NSImage, addRepresentation)
{
	zval *handle_param = NULL, *imageRep_param = NULL, _0, _1;
	zend_long handle, imageRep;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(imageRep)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &imageRep_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, imageRep);
	ns_nsimage_add_representation(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSImage_NSImage, removeRepresentation)
{
	zval *handle_param = NULL, *imageRep_param = NULL, _0, _1;
	zend_long handle, imageRep;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(imageRep)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &imageRep_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, imageRep);
	ns_nsimage_remove_representation(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSImage_NSImage, isValid)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nsimage_is_valid(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSImage_NSImage, delegate)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsimage_delegate(&_0));
}

PHP_METHOD(AppKit_NS_NSImage_NSImage, setDelegate)
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
	ns_nsimage_set_delegate(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSImage_NSImage, imageTypes)
{
	zval result;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;

	ZVAL_UNDEF(&result);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

	ZEPHIR_INIT_VAR(&result);
	ns_nsimage_image_types(&result);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSImage_NSImage, imageUnfilteredTypes)
{
	zval result;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;

	ZVAL_UNDEF(&result);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

	ZEPHIR_INIT_VAR(&result);
	ns_nsimage_image_unfiltered_types(&result);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSImage_NSImage, canInitWithPasteboard)
{
	zval *pasteboard_param = NULL, _0;
	zend_long pasteboard, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(pasteboard)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &pasteboard_param);
	ZVAL_LONG(&_0, pasteboard);
	r = ns_nsimage_can_init_with_pasteboard(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSImage_NSImage, cacheMode)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsimage_cache_mode(&_0));
}

PHP_METHOD(AppKit_NS_NSImage_NSImage, setCacheMode)
{
	zval *handle_param = NULL, *cacheMode_param = NULL, _0, _1;
	zend_long handle, cacheMode;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(cacheMode)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &cacheMode_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, cacheMode);
	ns_nsimage_set_cache_mode(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSImage_NSImage, alignmentRect)
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
	ns_nsimage_alignment_rect(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSImage_NSImage, setAlignmentRect)
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
	ns_nsimage_set_alignment_rect(&_0, &_1, &_2, &_3, &_4);
}

PHP_METHOD(AppKit_NS_NSImage_NSImage, isTemplate)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nsimage_is_template(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSImage_NSImage, setTemplate)
{
	zend_bool flag;
	zval *handle_param = NULL, *flag_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(flag)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &flag_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (flag ? 1 : 0));
	ns_nsimage_set_template(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSImage_NSImage, accessibilityDescription)
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
	ns_nsimage_accessibility_description(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSImage_NSImage, setAccessibilityDescription)
{
	zval *handle_param = NULL, *accessibilityDescription = NULL, accessibilityDescription_sub, _0;
	zend_long handle;

	ZVAL_UNDEF(&accessibilityDescription_sub);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(accessibilityDescription)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &accessibilityDescription);
	ZVAL_LONG(&_0, handle);
	ns_nsimage_set_accessibility_description(&_0, accessibilityDescription);
}

PHP_METHOD(AppKit_NS_NSImage_NSImage, initWithCGImageSize)
{
	double width, height;
	zval *cgImage_param = NULL, *width_param = NULL, *height_param = NULL, _0, _1, _2;
	zend_long cgImage;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(cgImage)
		Z_PARAM_ZVAL(width)
		Z_PARAM_ZVAL(height)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &cgImage_param, &width_param, &height_param);
	width = zephir_get_doubleval(width_param);
	height = zephir_get_doubleval(height_param);
	ZVAL_LONG(&_0, cgImage);
	ZVAL_DOUBLE(&_1, width);
	ZVAL_DOUBLE(&_2, height);
	RETURN_LONG(ns_nsimage_init_with_cgimage_size(&_0, &_1, &_2));
}

PHP_METHOD(AppKit_NS_NSImage_NSImage, bestRepresentationForRectContextHints)
{
	double x, y, width, height;
	zval *handle_param = NULL, *x_param = NULL, *y_param = NULL, *width_param = NULL, *height_param = NULL, *context_param = NULL, *hints = NULL, hints_sub, _0, _1, _2, _3, _4, _5;
	zend_long handle, context;

	ZVAL_UNDEF(&hints_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZEND_PARSE_PARAMETERS_START(7, 7)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(x)
		Z_PARAM_ZVAL(y)
		Z_PARAM_ZVAL(width)
		Z_PARAM_ZVAL(height)
		Z_PARAM_LONG(context)
		Z_PARAM_ZVAL(hints)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(7, 0, &handle_param, &x_param, &y_param, &width_param, &height_param, &context_param, &hints);
	x = zephir_get_doubleval(x_param);
	y = zephir_get_doubleval(y_param);
	width = zephir_get_doubleval(width_param);
	height = zephir_get_doubleval(height_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, x);
	ZVAL_DOUBLE(&_2, y);
	ZVAL_DOUBLE(&_3, width);
	ZVAL_DOUBLE(&_4, height);
	ZVAL_LONG(&_5, context);
	RETURN_LONG(ns_nsimage_best_representation_for_rect_context_hints(&_0, &_1, &_2, &_3, &_4, &_5, hints));
}

PHP_METHOD(AppKit_NS_NSImage_NSImage, hitTestRectWithImageDestinationRectContextHintsFlipped)
{
	zend_bool flipped;
	double testX, testY, testWidth, testHeight, destX, destY, destWidth, destHeight;
	zval *handle_param = NULL, *testX_param = NULL, *testY_param = NULL, *testWidth_param = NULL, *testHeight_param = NULL, *destX_param = NULL, *destY_param = NULL, *destWidth_param = NULL, *destHeight_param = NULL, *context_param = NULL, *hints = NULL, hints_sub, *flipped_param = NULL, _0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10;
	zend_long handle, context, r = 0;

	ZVAL_UNDEF(&hints_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_6);
	ZVAL_UNDEF(&_7);
	ZVAL_UNDEF(&_8);
	ZVAL_UNDEF(&_9);
	ZVAL_UNDEF(&_10);
	ZEND_PARSE_PARAMETERS_START(12, 12)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(testX)
		Z_PARAM_ZVAL(testY)
		Z_PARAM_ZVAL(testWidth)
		Z_PARAM_ZVAL(testHeight)
		Z_PARAM_ZVAL(destX)
		Z_PARAM_ZVAL(destY)
		Z_PARAM_ZVAL(destWidth)
		Z_PARAM_ZVAL(destHeight)
		Z_PARAM_LONG(context)
		Z_PARAM_ZVAL(hints)
		Z_PARAM_BOOL(flipped)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(12, 0, &handle_param, &testX_param, &testY_param, &testWidth_param, &testHeight_param, &destX_param, &destY_param, &destWidth_param, &destHeight_param, &context_param, &hints, &flipped_param);
	testX = zephir_get_doubleval(testX_param);
	testY = zephir_get_doubleval(testY_param);
	testWidth = zephir_get_doubleval(testWidth_param);
	testHeight = zephir_get_doubleval(testHeight_param);
	destX = zephir_get_doubleval(destX_param);
	destY = zephir_get_doubleval(destY_param);
	destWidth = zephir_get_doubleval(destWidth_param);
	destHeight = zephir_get_doubleval(destHeight_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, testX);
	ZVAL_DOUBLE(&_2, testY);
	ZVAL_DOUBLE(&_3, testWidth);
	ZVAL_DOUBLE(&_4, testHeight);
	ZVAL_DOUBLE(&_5, destX);
	ZVAL_DOUBLE(&_6, destY);
	ZVAL_DOUBLE(&_7, destWidth);
	ZVAL_DOUBLE(&_8, destHeight);
	ZVAL_LONG(&_9, context);
	ZVAL_BOOL(&_10, (flipped ? 1 : 0));
	r = ns_nsimage_hit_test_rect_with_image_destination_rect_context_hints_flipped(&_0, &_1, &_2, &_3, &_4, &_5, &_6, &_7, &_8, &_9, hints, &_10);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSImage_NSImage, recommendedLayerContentsScale)
{
	double preferredContentsScale;
	zval *handle_param = NULL, *preferredContentsScale_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(preferredContentsScale)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &preferredContentsScale_param);
	preferredContentsScale = zephir_get_doubleval(preferredContentsScale_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, preferredContentsScale);
	RETURN_DOUBLE(ns_nsimage_recommended_layer_contents_scale(&_0, &_1));
}

PHP_METHOD(AppKit_NS_NSImage_NSImage, layerContentsForContentsScale)
{
	double layerContentsScale;
	zval *handle_param = NULL, *layerContentsScale_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(layerContentsScale)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &layerContentsScale_param);
	layerContentsScale = zephir_get_doubleval(layerContentsScale_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, layerContentsScale);
	RETURN_LONG(ns_nsimage_layer_contents_for_contents_scale(&_0, &_1));
}

PHP_METHOD(AppKit_NS_NSImage_NSImage, capInsets)
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
	ns_nsimage_cap_insets(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSImage_NSImage, setCapInsets)
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
	ns_nsimage_set_cap_insets(&_0, &_1, &_2, &_3, &_4);
}

PHP_METHOD(AppKit_NS_NSImage_NSImage, resizingMode)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsimage_resizing_mode(&_0));
}

PHP_METHOD(AppKit_NS_NSImage_NSImage, setResizingMode)
{
	zval *handle_param = NULL, *resizingMode_param = NULL, _0, _1;
	zend_long handle, resizingMode;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(resizingMode)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &resizingMode_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, resizingMode);
	ns_nsimage_set_resizing_mode(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSImage_NSImage, imageWithSymbolConfiguration)
{
	zval *handle_param = NULL, *configuration_param = NULL, _0, _1;
	zend_long handle, configuration;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(configuration)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &configuration_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, configuration);
	RETURN_LONG(ns_nsimage_image_with_symbol_configuration(&_0, &_1));
}

PHP_METHOD(AppKit_NS_NSImage_NSImage, symbolConfiguration)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsimage_symbol_configuration(&_0));
}

PHP_METHOD(AppKit_NS_NSImage_NSImage, imageWithLocale)
{
	zval *handle_param = NULL, *locale_param = NULL, _0, _1;
	zend_long handle, locale;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(locale)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &locale_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, locale);
	RETURN_LONG(ns_nsimage_image_with_locale(&_0, &_1));
}

PHP_METHOD(AppKit_NS_NSImage_NSImage, locale)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsimage_locale(&_0));
}

