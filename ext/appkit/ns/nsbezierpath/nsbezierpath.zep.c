
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
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"

#include "ns-bezierpath.h"
#include <stdint.h>



/**
 * NSBezierPath — vector path construction and drawing.
 */
ZEPHIR_INIT_CLASS(AppKit_NS_NSBezierPath_NSBezierPath)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSBezierPath, NSBezierPath, appkit, ns_nsbezierpath_nsbezierpath, appkit_ns_nsbezierpath_nsbezierpath_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSBezierPath_NSBezierPath, create)
{
	zend_long handle = 0;
	
            handle = (zend_long) ns_bezierpath_create();
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSBezierPath_NSBezierPath, withRect)
{
	zend_long handle = 0;
	zval *x_param = NULL, *y_param = NULL, *width_param = NULL, *height_param = NULL;
	double x, y, width, height;

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
	
            handle = (zend_long) ns_bezierpath_with_rect((double) x, (double) y, (double) width, (double) height);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSBezierPath_NSBezierPath, withOvalInRect)
{
	zend_long handle = 0;
	zval *x_param = NULL, *y_param = NULL, *width_param = NULL, *height_param = NULL;
	double x, y, width, height;

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
	
            handle = (zend_long) ns_bezierpath_with_oval_in_rect((double) x, (double) y, (double) width, (double) height);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSBezierPath_NSBezierPath, withRoundedRect)
{
	zend_long handle = 0;
	zval *x_param = NULL, *y_param = NULL, *width_param = NULL, *height_param = NULL, *xRadius_param = NULL, *yRadius_param = NULL;
	double x, y, width, height, xRadius, yRadius;

	ZEND_PARSE_PARAMETERS_START(6, 6)
		Z_PARAM_ZVAL(x)
		Z_PARAM_ZVAL(y)
		Z_PARAM_ZVAL(width)
		Z_PARAM_ZVAL(height)
		Z_PARAM_ZVAL(xRadius)
		Z_PARAM_ZVAL(yRadius)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(6, 0, &x_param, &y_param, &width_param, &height_param, &xRadius_param, &yRadius_param);
	x = zephir_get_doubleval(x_param);
	y = zephir_get_doubleval(y_param);
	width = zephir_get_doubleval(width_param);
	height = zephir_get_doubleval(height_param);
	xRadius = zephir_get_doubleval(xRadius_param);
	yRadius = zephir_get_doubleval(yRadius_param);
	
            handle = (zend_long) ns_bezierpath_with_rounded_rect((double) x, (double) y, (double) width, (double) height, (double) xRadius, (double) yRadius);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSBezierPath_NSBezierPath, wrap)
{
	zval *nsBezierPathPtr_param = NULL;
	zend_long nsBezierPathPtr, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(nsBezierPathPtr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &nsBezierPathPtr_param);
	
            handle = (zend_long) ns_bezierpath_wrap((void *)(uintptr_t) nsBezierPathPtr);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSBezierPath_NSBezierPath, destroy)
{
	zval *path_param = NULL;
	zend_long path;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(path)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &path_param);
	
            ns_bezierpath_destroy((uintptr_t) path);
        
}

PHP_METHOD(AppKit_NS_NSBezierPath_NSBezierPath, nsBezierPath)
{
	zval *path_param = NULL;
	zend_long path, ptr = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(path)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &path_param);
	
            ptr = (zend_long)(uintptr_t) ns_bezierpath_nsbezierpath((uintptr_t) path);
        
	RETURN_LONG(ptr);
}

PHP_METHOD(AppKit_NS_NSBezierPath_NSBezierPath, moveToPoint)
{
	double x, y;
	zval *path_param = NULL, *x_param = NULL, *y_param = NULL;
	zend_long path;

	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(path)
		Z_PARAM_ZVAL(x)
		Z_PARAM_ZVAL(y)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &path_param, &x_param, &y_param);
	x = zephir_get_doubleval(x_param);
	y = zephir_get_doubleval(y_param);
	
            ns_bezierpath_move_to_point((uintptr_t) path, (double) x, (double) y);
        
}

PHP_METHOD(AppKit_NS_NSBezierPath_NSBezierPath, lineToPoint)
{
	double x, y;
	zval *path_param = NULL, *x_param = NULL, *y_param = NULL;
	zend_long path;

	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(path)
		Z_PARAM_ZVAL(x)
		Z_PARAM_ZVAL(y)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &path_param, &x_param, &y_param);
	x = zephir_get_doubleval(x_param);
	y = zephir_get_doubleval(y_param);
	
            ns_bezierpath_line_to_point((uintptr_t) path, (double) x, (double) y);
        
}

PHP_METHOD(AppKit_NS_NSBezierPath_NSBezierPath, curveToPoint)
{
	double endX, endY, cp1X, cp1Y, cp2X, cp2Y;
	zval *path_param = NULL, *endX_param = NULL, *endY_param = NULL, *cp1X_param = NULL, *cp1Y_param = NULL, *cp2X_param = NULL, *cp2Y_param = NULL;
	zend_long path;

	ZEND_PARSE_PARAMETERS_START(7, 7)
		Z_PARAM_LONG(path)
		Z_PARAM_ZVAL(endX)
		Z_PARAM_ZVAL(endY)
		Z_PARAM_ZVAL(cp1X)
		Z_PARAM_ZVAL(cp1Y)
		Z_PARAM_ZVAL(cp2X)
		Z_PARAM_ZVAL(cp2Y)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(7, 0, &path_param, &endX_param, &endY_param, &cp1X_param, &cp1Y_param, &cp2X_param, &cp2Y_param);
	endX = zephir_get_doubleval(endX_param);
	endY = zephir_get_doubleval(endY_param);
	cp1X = zephir_get_doubleval(cp1X_param);
	cp1Y = zephir_get_doubleval(cp1Y_param);
	cp2X = zephir_get_doubleval(cp2X_param);
	cp2Y = zephir_get_doubleval(cp2Y_param);
	
            ns_bezierpath_curve_to_point((uintptr_t) path, (double) endX, (double) endY, (double) cp1X, (double) cp1Y, (double) cp2X, (double) cp2Y);
        
}

PHP_METHOD(AppKit_NS_NSBezierPath_NSBezierPath, closePath)
{
	zval *path_param = NULL;
	zend_long path;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(path)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &path_param);
	
            ns_bezierpath_close_path((uintptr_t) path);
        
}

PHP_METHOD(AppKit_NS_NSBezierPath_NSBezierPath, removeAllPoints)
{
	zval *path_param = NULL;
	zend_long path;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(path)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &path_param);
	
            ns_bezierpath_remove_all_points((uintptr_t) path);
        
}

PHP_METHOD(AppKit_NS_NSBezierPath_NSBezierPath, appendPath)
{
	zval *path_param = NULL, *other_param = NULL;
	zend_long path, other;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(path)
		Z_PARAM_LONG(other)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &path_param, &other_param);
	
            ns_bezierpath_append_path((uintptr_t) path, (uintptr_t) other);
        
}

PHP_METHOD(AppKit_NS_NSBezierPath_NSBezierPath, appendRect)
{
	double x, y, width, height;
	zval *path_param = NULL, *x_param = NULL, *y_param = NULL, *width_param = NULL, *height_param = NULL;
	zend_long path;

	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(path)
		Z_PARAM_ZVAL(x)
		Z_PARAM_ZVAL(y)
		Z_PARAM_ZVAL(width)
		Z_PARAM_ZVAL(height)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &path_param, &x_param, &y_param, &width_param, &height_param);
	x = zephir_get_doubleval(x_param);
	y = zephir_get_doubleval(y_param);
	width = zephir_get_doubleval(width_param);
	height = zephir_get_doubleval(height_param);
	
            ns_bezierpath_append_rect((uintptr_t) path, (double) x, (double) y, (double) width, (double) height);
        
}

PHP_METHOD(AppKit_NS_NSBezierPath_NSBezierPath, appendOvalInRect)
{
	double x, y, width, height;
	zval *path_param = NULL, *x_param = NULL, *y_param = NULL, *width_param = NULL, *height_param = NULL;
	zend_long path;

	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(path)
		Z_PARAM_ZVAL(x)
		Z_PARAM_ZVAL(y)
		Z_PARAM_ZVAL(width)
		Z_PARAM_ZVAL(height)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &path_param, &x_param, &y_param, &width_param, &height_param);
	x = zephir_get_doubleval(x_param);
	y = zephir_get_doubleval(y_param);
	width = zephir_get_doubleval(width_param);
	height = zephir_get_doubleval(height_param);
	
            ns_bezierpath_append_oval_in_rect((uintptr_t) path, (double) x, (double) y, (double) width, (double) height);
        
}

PHP_METHOD(AppKit_NS_NSBezierPath_NSBezierPath, setLineWidth)
{
	double width;
	zval *path_param = NULL, *width_param = NULL;
	zend_long path;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(path)
		Z_PARAM_ZVAL(width)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &path_param, &width_param);
	width = zephir_get_doubleval(width_param);
	
            ns_bezierpath_set_line_width((uintptr_t) path, (double) width);
        
}

PHP_METHOD(AppKit_NS_NSBezierPath_NSBezierPath, getLineWidth)
{
	double value = 0;
	zval *path_param = NULL;
	zend_long path;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(path)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &path_param);
	
            value = ns_bezierpath_get_line_width((uintptr_t) path);
        
	RETURN_DOUBLE(value);
}

PHP_METHOD(AppKit_NS_NSBezierPath_NSBezierPath, setLineCap)
{
	zval *path_param = NULL, *style_param = NULL;
	zend_long path, style;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(path)
		Z_PARAM_LONG(style)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &path_param, &style_param);
	
            ns_bezierpath_set_line_cap((uintptr_t) path, (int) style);
        
}

PHP_METHOD(AppKit_NS_NSBezierPath_NSBezierPath, getLineCap)
{
	zval *path_param = NULL;
	zend_long path, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(path)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &path_param);
	
            value = (zend_long) ns_bezierpath_get_line_cap((uintptr_t) path);
        
	RETURN_LONG(value);
}

PHP_METHOD(AppKit_NS_NSBezierPath_NSBezierPath, setLineJoin)
{
	zval *path_param = NULL, *style_param = NULL;
	zend_long path, style;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(path)
		Z_PARAM_LONG(style)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &path_param, &style_param);
	
            ns_bezierpath_set_line_join((uintptr_t) path, (int) style);
        
}

PHP_METHOD(AppKit_NS_NSBezierPath_NSBezierPath, getLineJoin)
{
	zval *path_param = NULL;
	zend_long path, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(path)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &path_param);
	
            value = (zend_long) ns_bezierpath_get_line_join((uintptr_t) path);
        
	RETURN_LONG(value);
}

PHP_METHOD(AppKit_NS_NSBezierPath_NSBezierPath, setWindingRule)
{
	zval *path_param = NULL, *rule_param = NULL;
	zend_long path, rule;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(path)
		Z_PARAM_LONG(rule)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &path_param, &rule_param);
	
            ns_bezierpath_set_winding_rule((uintptr_t) path, (int) rule);
        
}

PHP_METHOD(AppKit_NS_NSBezierPath_NSBezierPath, getWindingRule)
{
	zval *path_param = NULL;
	zend_long path, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(path)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &path_param);
	
            value = (zend_long) ns_bezierpath_get_winding_rule((uintptr_t) path);
        
	RETURN_LONG(value);
}

PHP_METHOD(AppKit_NS_NSBezierPath_NSBezierPath, setMiterLimit)
{
	double limit;
	zval *path_param = NULL, *limit_param = NULL;
	zend_long path;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(path)
		Z_PARAM_ZVAL(limit)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &path_param, &limit_param);
	limit = zephir_get_doubleval(limit_param);
	
            ns_bezierpath_set_miter_limit((uintptr_t) path, (double) limit);
        
}

PHP_METHOD(AppKit_NS_NSBezierPath_NSBezierPath, getMiterLimit)
{
	double value = 0;
	zval *path_param = NULL;
	zend_long path;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(path)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &path_param);
	
            value = ns_bezierpath_get_miter_limit((uintptr_t) path);
        
	RETURN_DOUBLE(value);
}

PHP_METHOD(AppKit_NS_NSBezierPath_NSBezierPath, setFlatness)
{
	double flatness;
	zval *path_param = NULL, *flatness_param = NULL;
	zend_long path;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(path)
		Z_PARAM_ZVAL(flatness)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &path_param, &flatness_param);
	flatness = zephir_get_doubleval(flatness_param);
	
            ns_bezierpath_set_flatness((uintptr_t) path, (double) flatness);
        
}

PHP_METHOD(AppKit_NS_NSBezierPath_NSBezierPath, getFlatness)
{
	double value = 0;
	zval *path_param = NULL;
	zend_long path;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(path)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &path_param);
	
            value = ns_bezierpath_get_flatness((uintptr_t) path);
        
	RETURN_DOUBLE(value);
}

PHP_METHOD(AppKit_NS_NSBezierPath_NSBezierPath, stroke)
{
	zval *path_param = NULL;
	zend_long path;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(path)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &path_param);
	
            ns_bezierpath_stroke((uintptr_t) path);
        
}

PHP_METHOD(AppKit_NS_NSBezierPath_NSBezierPath, fill)
{
	zval *path_param = NULL;
	zend_long path;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(path)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &path_param);
	
            ns_bezierpath_fill((uintptr_t) path);
        
}

PHP_METHOD(AppKit_NS_NSBezierPath_NSBezierPath, addClip)
{
	zval *path_param = NULL;
	zend_long path;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(path)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &path_param);
	
            ns_bezierpath_add_clip((uintptr_t) path);
        
}

PHP_METHOD(AppKit_NS_NSBezierPath_NSBezierPath, setClip)
{
	zval *path_param = NULL;
	zend_long path;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(path)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &path_param);
	
            ns_bezierpath_set_clip((uintptr_t) path);
        
}

PHP_METHOD(AppKit_NS_NSBezierPath_NSBezierPath, containsPoint)
{
	zend_bool result = 0;
	double x, y;
	zval *path_param = NULL, *x_param = NULL, *y_param = NULL;
	zend_long path;

	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(path)
		Z_PARAM_ZVAL(x)
		Z_PARAM_ZVAL(y)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &path_param, &x_param, &y_param);
	x = zephir_get_doubleval(x_param);
	y = zephir_get_doubleval(y_param);
	
            result = ns_bezierpath_contains_point((uintptr_t) path, (double) x, (double) y) == 1;
        
	RETURN_BOOL(result);
}

/**
 * @return array [x, y, w, h] or empty array
 */
PHP_METHOD(AppKit_NS_NSBezierPath_NSBezierPath, getBounds)
{
	zval out;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *path_param = NULL;
	zend_long path;

	ZVAL_UNDEF(&out);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(path)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &path_param);
	ZEPHIR_INIT_VAR(&out);
	array_init(&out);
	
            double x = 0.0, y = 0.0, w = 0.0, h = 0.0;
            if (ns_bezierpath_get_bounds((uintptr_t) path, &x, &y, &w, &h)) {
                add_next_index_double(&out, x);
                add_next_index_double(&out, y);
                add_next_index_double(&out, w);
                add_next_index_double(&out, h);
            }
        
	RETURN_CTOR(&out);
}

PHP_METHOD(AppKit_NS_NSBezierPath_NSBezierPath, fillRect)
{
	zval *x_param = NULL, *y_param = NULL, *width_param = NULL, *height_param = NULL;
	double x, y, width, height;

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
	
            ns_bezierpath_fill_rect((double) x, (double) y, (double) width, (double) height);
        
}

PHP_METHOD(AppKit_NS_NSBezierPath_NSBezierPath, strokeRect)
{
	zval *x_param = NULL, *y_param = NULL, *width_param = NULL, *height_param = NULL;
	double x, y, width, height;

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
	
            ns_bezierpath_stroke_rect((double) x, (double) y, (double) width, (double) height);
        
}

PHP_METHOD(AppKit_NS_NSBezierPath_NSBezierPath, clipRect)
{
	zval *x_param = NULL, *y_param = NULL, *width_param = NULL, *height_param = NULL;
	double x, y, width, height;

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
	
            ns_bezierpath_clip_rect((double) x, (double) y, (double) width, (double) height);
        
}

PHP_METHOD(AppKit_NS_NSBezierPath_NSBezierPath, strokeLineFromPoint)
{
	zval *x1_param = NULL, *y1_param = NULL, *x2_param = NULL, *y2_param = NULL;
	double x1, y1, x2, y2;

	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_ZVAL(x1)
		Z_PARAM_ZVAL(y1)
		Z_PARAM_ZVAL(x2)
		Z_PARAM_ZVAL(y2)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &x1_param, &y1_param, &x2_param, &y2_param);
	x1 = zephir_get_doubleval(x1_param);
	y1 = zephir_get_doubleval(y1_param);
	x2 = zephir_get_doubleval(x2_param);
	y2 = zephir_get_doubleval(y2_param);
	
            ns_bezierpath_stroke_line_from_point((double) x1, (double) y1, (double) x2, (double) y2);
        
}

