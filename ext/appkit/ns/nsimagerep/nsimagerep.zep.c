
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
#include "src/ns-imagerep.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/string.h"


ZEPHIR_INIT_CLASS(AppKit_NS_NSImageRep_NSImageRep)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSImageRep, NSImageRep, appkit, ns_nsimagerep_nsimagerep, appkit_ns_nsimagerep_nsimagerep_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSImageRep_NSImageRep, init)
{

	RETURN_LONG(ns_nsimagerep_init());
}

PHP_METHOD(AppKit_NS_NSImageRep_NSImageRep, draw)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nsimagerep_draw(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSImageRep_NSImageRep, drawAtPoint)
{
	double x, y;
	zval *handle_param = NULL, *x_param = NULL, *y_param = NULL, _0, _1, _2;
	zend_long handle, r = 0;

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
	r = ns_nsimagerep_draw_at_point(&_0, &_1, &_2);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSImageRep_NSImageRep, drawInRect)
{
	double x, y, width, height;
	zval *handle_param = NULL, *x_param = NULL, *y_param = NULL, *width_param = NULL, *height_param = NULL, _0, _1, _2, _3, _4;
	zend_long handle, r = 0;

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
	r = ns_nsimagerep_draw_in_rect(&_0, &_1, &_2, &_3, &_4);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSImageRep_NSImageRep, drawInRectFromRectOperationFractionRespectFlippedHints)
{
	zend_bool respectFlipped;
	double x, y, width, height, fromX, fromY, fromWidth, fromHeight, requestedAlpha;
	zval *handle_param = NULL, *x_param = NULL, *y_param = NULL, *width_param = NULL, *height_param = NULL, *fromX_param = NULL, *fromY_param = NULL, *fromWidth_param = NULL, *fromHeight_param = NULL, *op_param = NULL, *requestedAlpha_param = NULL, *respectFlipped_param = NULL, *hints = NULL, hints_sub, _0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11;
	zend_long handle, op, r = 0;

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
	r = ns_nsimagerep_draw_in_rect_from_rect_operation_fraction_respect_flipped_hints(&_0, &_1, &_2, &_3, &_4, &_5, &_6, &_7, &_8, &_9, &_10, &_11, hints);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSImageRep_NSImageRep, size)
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
	ns_nsimagerep_size(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSImageRep_NSImageRep, setSize)
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
	ns_nsimagerep_set_size(&_0, &_1, &_2);
}

PHP_METHOD(AppKit_NS_NSImageRep_NSImageRep, hasAlpha)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nsimagerep_has_alpha(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSImageRep_NSImageRep, setAlpha)
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
	ns_nsimagerep_set_alpha(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSImageRep_NSImageRep, isOpaque)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nsimagerep_is_opaque(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSImageRep_NSImageRep, setOpaque)
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
	ns_nsimagerep_set_opaque(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSImageRep_NSImageRep, colorSpaceName)
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
	ns_nsimagerep_color_space_name(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSImageRep_NSImageRep, setColorSpaceName)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval colorSpaceName;
	zval *handle_param = NULL, *colorSpaceName_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&colorSpaceName);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(colorSpaceName)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &colorSpaceName_param);
	zephir_get_strval(&colorSpaceName, colorSpaceName_param);
	ZVAL_LONG(&_0, handle);
	ns_nsimagerep_set_color_space_name(&_0, &colorSpaceName);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSImageRep_NSImageRep, bitsPerSample)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsimagerep_bits_per_sample(&_0));
}

PHP_METHOD(AppKit_NS_NSImageRep_NSImageRep, setBitsPerSample)
{
	zval *handle_param = NULL, *bitsPerSample_param = NULL, _0, _1;
	zend_long handle, bitsPerSample;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(bitsPerSample)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &bitsPerSample_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, bitsPerSample);
	ns_nsimagerep_set_bits_per_sample(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSImageRep_NSImageRep, pixelsWide)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsimagerep_pixels_wide(&_0));
}

PHP_METHOD(AppKit_NS_NSImageRep_NSImageRep, setPixelsWide)
{
	zval *handle_param = NULL, *pixelsWide_param = NULL, _0, _1;
	zend_long handle, pixelsWide;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(pixelsWide)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &pixelsWide_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, pixelsWide);
	ns_nsimagerep_set_pixels_wide(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSImageRep_NSImageRep, pixelsHigh)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsimagerep_pixels_high(&_0));
}

PHP_METHOD(AppKit_NS_NSImageRep_NSImageRep, setPixelsHigh)
{
	zval *handle_param = NULL, *pixelsHigh_param = NULL, _0, _1;
	zend_long handle, pixelsHigh;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(pixelsHigh)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &pixelsHigh_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, pixelsHigh);
	ns_nsimagerep_set_pixels_high(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSImageRep_NSImageRep, layoutDirection)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsimagerep_layout_direction(&_0));
}

PHP_METHOD(AppKit_NS_NSImageRep_NSImageRep, setLayoutDirection)
{
	zval *handle_param = NULL, *layoutDirection_param = NULL, _0, _1;
	zend_long handle, layoutDirection;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(layoutDirection)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &layoutDirection_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, layoutDirection);
	ns_nsimagerep_set_layout_direction(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSImageRep_NSImageRep, imageUnfilteredTypes)
{
	zval result;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;

	ZVAL_UNDEF(&result);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

	ZEPHIR_INIT_VAR(&result);
	ns_nsimagerep_image_unfiltered_types(&result);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSImageRep_NSImageRep, imageTypes)
{
	zval result;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;

	ZVAL_UNDEF(&result);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

	ZEPHIR_INIT_VAR(&result);
	ns_nsimagerep_image_types(&result);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSImageRep_NSImageRep, canInitWithPasteboard)
{
	zval *pasteboard_param = NULL, _0;
	zend_long pasteboard, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(pasteboard)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &pasteboard_param);
	ZVAL_LONG(&_0, pasteboard);
	r = ns_nsimagerep_can_init_with_pasteboard(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSImageRep_NSImageRep, imageRepsWithContentsOfFile)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *fileName_param = NULL, result;
	zval fileName;

	ZVAL_UNDEF(&fileName);
	ZVAL_UNDEF(&result);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(fileName)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &fileName_param);
	zephir_get_strval(&fileName, fileName_param);
	ZEPHIR_INIT_VAR(&result);
	ns_nsimagerep_image_reps_with_contents_of_file(&result, &fileName);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSImageRep_NSImageRep, imageRepWithContentsOfFile)
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
	RETURN_MM_LONG(ns_nsimagerep_image_rep_with_contents_of_file(&fileName));
}

PHP_METHOD(AppKit_NS_NSImageRep_NSImageRep, imageRepsWithContentsOfURL)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *url_param = NULL, result, _0;
	zend_long url;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(url)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &url_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, url);
	ns_nsimagerep_image_reps_with_contents_of_url(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSImageRep_NSImageRep, imageRepWithContentsOfURL)
{
	zval *url_param = NULL, _0;
	zend_long url;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(url)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &url_param);
	ZVAL_LONG(&_0, url);
	RETURN_LONG(ns_nsimagerep_image_rep_with_contents_of_url(&_0));
}

PHP_METHOD(AppKit_NS_NSImageRep_NSImageRep, imageRepsWithPasteboard)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *pasteboard_param = NULL, result, _0;
	zend_long pasteboard;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(pasteboard)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &pasteboard_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, pasteboard);
	ns_nsimagerep_image_reps_with_pasteboard(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSImageRep_NSImageRep, imageRepWithPasteboard)
{
	zval *pasteboard_param = NULL, _0;
	zend_long pasteboard;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(pasteboard)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &pasteboard_param);
	ZVAL_LONG(&_0, pasteboard);
	RETURN_LONG(ns_nsimagerep_image_rep_with_pasteboard(&_0));
}

