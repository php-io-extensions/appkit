
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
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"

#include "ns-gradient.h"
#include <stdint.h>



/**
 * NSGradient — multi-stop color gradients.
 */
ZEPHIR_INIT_CLASS(AppKit_NS_NSGradient_NSGradient)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSGradient, NSGradient, appkit, ns_nsgradient_nsgradient, appkit_ns_nsgradient_nsgradient_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSGradient_NSGradient, withStartingColor)
{
	zval *startingColor_param = NULL, *endingColor_param = NULL;
	zend_long startingColor, endingColor, handle = 0;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(startingColor)
		Z_PARAM_LONG(endingColor)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &startingColor_param, &endingColor_param);
	
            handle = (zend_long) ns_gradient_with_starting_color((uintptr_t) startingColor, (uintptr_t) endingColor);
        
	RETURN_LONG(handle);
}

/**
 * @param array colors Array of int color handles
 */
PHP_METHOD(AppKit_NS_NSGradient_NSGradient, withColors)
{
	zend_long handle = 0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *colors_param = NULL;
	zval colors;

	ZVAL_UNDEF(&colors);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ARRAY(colors)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &colors_param);
	zephir_get_arrval(&colors, colors_param);
	
            zval *item;
            uintptr_t buf[256];
            int count = 0;
            ZEND_HASH_FOREACH_VAL(Z_ARRVAL(colors), item) {
                if (count >= 256) {
                    break;
                }
                convert_to_long(item);
                buf[count++] = (uintptr_t) Z_LVAL_P(item);
            } ZEND_HASH_FOREACH_END();
            handle = (zend_long) ns_gradient_with_colors(buf, count);
        
	RETURN_MM_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSGradient_NSGradient, wrap)
{
	zval *nsGradientPtr_param = NULL;
	zend_long nsGradientPtr, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(nsGradientPtr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &nsGradientPtr_param);
	
            handle = (zend_long) ns_gradient_wrap((void *)(uintptr_t) nsGradientPtr);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSGradient_NSGradient, destroy)
{
	zval *gradient_param = NULL;
	zend_long gradient;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(gradient)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &gradient_param);
	
            ns_gradient_destroy((uintptr_t) gradient);
        
}

PHP_METHOD(AppKit_NS_NSGradient_NSGradient, nsGradient)
{
	zval *gradient_param = NULL;
	zend_long gradient, ptr = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(gradient)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &gradient_param);
	
            ptr = (zend_long)(uintptr_t) ns_gradient_nsgradient((uintptr_t) gradient);
        
	RETURN_LONG(ptr);
}

PHP_METHOD(AppKit_NS_NSGradient_NSGradient, drawFromPoint)
{
	double startX, startY, endX, endY;
	zval *gradient_param = NULL, *startX_param = NULL, *startY_param = NULL, *endX_param = NULL, *endY_param = NULL, *options_param = NULL;
	zend_long gradient, options;

	ZEND_PARSE_PARAMETERS_START(5, 6)
		Z_PARAM_LONG(gradient)
		Z_PARAM_ZVAL(startX)
		Z_PARAM_ZVAL(startY)
		Z_PARAM_ZVAL(endX)
		Z_PARAM_ZVAL(endY)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(options)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 1, &gradient_param, &startX_param, &startY_param, &endX_param, &endY_param, &options_param);
	startX = zephir_get_doubleval(startX_param);
	startY = zephir_get_doubleval(startY_param);
	endX = zephir_get_doubleval(endX_param);
	endY = zephir_get_doubleval(endY_param);
	if (!options_param) {
		options = 0;
	} else {
		}
	
            ns_gradient_draw_from_point((uintptr_t) gradient, (double) startX, (double) startY, (double) endX, (double) endY, (int) options);
        
}

PHP_METHOD(AppKit_NS_NSGradient_NSGradient, drawInRectAngle)
{
	double x, y, width, height, angle;
	zval *gradient_param = NULL, *x_param = NULL, *y_param = NULL, *width_param = NULL, *height_param = NULL, *angle_param = NULL;
	zend_long gradient;

	ZEND_PARSE_PARAMETERS_START(6, 6)
		Z_PARAM_LONG(gradient)
		Z_PARAM_ZVAL(x)
		Z_PARAM_ZVAL(y)
		Z_PARAM_ZVAL(width)
		Z_PARAM_ZVAL(height)
		Z_PARAM_ZVAL(angle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(6, 0, &gradient_param, &x_param, &y_param, &width_param, &height_param, &angle_param);
	x = zephir_get_doubleval(x_param);
	y = zephir_get_doubleval(y_param);
	width = zephir_get_doubleval(width_param);
	height = zephir_get_doubleval(height_param);
	angle = zephir_get_doubleval(angle_param);
	
            ns_gradient_draw_in_rect_angle((uintptr_t) gradient, (double) x, (double) y, (double) width, (double) height, (double) angle);
        
}

PHP_METHOD(AppKit_NS_NSGradient_NSGradient, drawInBezierPathAngle)
{
	double angle;
	zval *gradient_param = NULL, *path_param = NULL, *angle_param = NULL;
	zend_long gradient, path;

	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(gradient)
		Z_PARAM_LONG(path)
		Z_PARAM_ZVAL(angle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &gradient_param, &path_param, &angle_param);
	angle = zephir_get_doubleval(angle_param);
	
            ns_gradient_draw_in_bezier_path_angle((uintptr_t) gradient, (uintptr_t) path, (double) angle);
        
}

PHP_METHOD(AppKit_NS_NSGradient_NSGradient, drawFromCenter)
{
	double startCenterX, startCenterY, startRadius, endCenterX, endCenterY, endRadius;
	zval *gradient_param = NULL, *startCenterX_param = NULL, *startCenterY_param = NULL, *startRadius_param = NULL, *endCenterX_param = NULL, *endCenterY_param = NULL, *endRadius_param = NULL, *options_param = NULL;
	zend_long gradient, options;

	ZEND_PARSE_PARAMETERS_START(7, 8)
		Z_PARAM_LONG(gradient)
		Z_PARAM_ZVAL(startCenterX)
		Z_PARAM_ZVAL(startCenterY)
		Z_PARAM_ZVAL(startRadius)
		Z_PARAM_ZVAL(endCenterX)
		Z_PARAM_ZVAL(endCenterY)
		Z_PARAM_ZVAL(endRadius)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(options)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(7, 1, &gradient_param, &startCenterX_param, &startCenterY_param, &startRadius_param, &endCenterX_param, &endCenterY_param, &endRadius_param, &options_param);
	startCenterX = zephir_get_doubleval(startCenterX_param);
	startCenterY = zephir_get_doubleval(startCenterY_param);
	startRadius = zephir_get_doubleval(startRadius_param);
	endCenterX = zephir_get_doubleval(endCenterX_param);
	endCenterY = zephir_get_doubleval(endCenterY_param);
	endRadius = zephir_get_doubleval(endRadius_param);
	if (!options_param) {
		options = 0;
	} else {
		}
	
            ns_gradient_draw_from_center((uintptr_t) gradient, (double) startCenterX, (double) startCenterY, (double) startRadius, (double) endCenterX, (double) endCenterY, (double) endRadius, (int) options);
        
}

PHP_METHOD(AppKit_NS_NSGradient_NSGradient, drawInRectRelativeCenter)
{
	double x, y, width, height, relCenterX, relCenterY;
	zval *gradient_param = NULL, *x_param = NULL, *y_param = NULL, *width_param = NULL, *height_param = NULL, *relCenterX_param = NULL, *relCenterY_param = NULL;
	zend_long gradient;

	ZEND_PARSE_PARAMETERS_START(7, 7)
		Z_PARAM_LONG(gradient)
		Z_PARAM_ZVAL(x)
		Z_PARAM_ZVAL(y)
		Z_PARAM_ZVAL(width)
		Z_PARAM_ZVAL(height)
		Z_PARAM_ZVAL(relCenterX)
		Z_PARAM_ZVAL(relCenterY)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(7, 0, &gradient_param, &x_param, &y_param, &width_param, &height_param, &relCenterX_param, &relCenterY_param);
	x = zephir_get_doubleval(x_param);
	y = zephir_get_doubleval(y_param);
	width = zephir_get_doubleval(width_param);
	height = zephir_get_doubleval(height_param);
	relCenterX = zephir_get_doubleval(relCenterX_param);
	relCenterY = zephir_get_doubleval(relCenterY_param);
	
            ns_gradient_draw_in_rect_relative_center((uintptr_t) gradient, (double) x, (double) y, (double) width, (double) height, (double) relCenterX, (double) relCenterY);
        
}

PHP_METHOD(AppKit_NS_NSGradient_NSGradient, drawInBezierPathRelativeCenter)
{
	double relCenterX, relCenterY;
	zval *gradient_param = NULL, *path_param = NULL, *relCenterX_param = NULL, *relCenterY_param = NULL;
	zend_long gradient, path;

	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(gradient)
		Z_PARAM_LONG(path)
		Z_PARAM_ZVAL(relCenterX)
		Z_PARAM_ZVAL(relCenterY)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &gradient_param, &path_param, &relCenterX_param, &relCenterY_param);
	relCenterX = zephir_get_doubleval(relCenterX_param);
	relCenterY = zephir_get_doubleval(relCenterY_param);
	
            ns_gradient_draw_in_bezier_path_relative_center((uintptr_t) gradient, (uintptr_t) path, (double) relCenterX, (double) relCenterY);
        
}

PHP_METHOD(AppKit_NS_NSGradient_NSGradient, numberOfColorStops)
{
	zval *gradient_param = NULL;
	zend_long gradient, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(gradient)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &gradient_param);
	
            value = (zend_long) ns_gradient_number_of_color_stops((uintptr_t) gradient);
        
	RETURN_LONG(value);
}

PHP_METHOD(AppKit_NS_NSGradient_NSGradient, interpolatedColorAtLocation)
{
	double location;
	zval *gradient_param = NULL, *location_param = NULL;
	zend_long gradient, handle = 0;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(gradient)
		Z_PARAM_ZVAL(location)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &gradient_param, &location_param);
	location = zephir_get_doubleval(location_param);
	
            handle = (zend_long) ns_gradient_interpolated_color_at_location((uintptr_t) gradient, (double) location);
        
	RETURN_LONG(handle);
}

