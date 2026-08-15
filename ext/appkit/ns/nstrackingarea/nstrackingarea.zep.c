
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

#include "ns-trackingarea.h"
#include <stdint.h>



/**
 * NSTrackingArea — mouse entered/exited and cursor update regions on NSView.
 * NSTrackingAreaOptions bitfield values are documented in OKF (no PHP constants).
 */
ZEPHIR_INIT_CLASS(AppKit_NS_NSTrackingArea_NSTrackingArea)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSTrackingArea, NSTrackingArea, appkit, ns_nstrackingarea_nstrackingarea, appkit_ns_nstrackingarea_nstrackingarea_method_entry, 0);

	return SUCCESS;
}

/**
 * @param int options NSTrackingAreaOptions bitfield
 * @return int Opaque tracking area handle, or 0 on failure
 */
PHP_METHOD(AppKit_NS_NSTrackingArea_NSTrackingArea, create)
{
	zval *x_param = NULL, *y_param = NULL, *width_param = NULL, *height_param = NULL, *options_param = NULL;
	zend_long x, y, width, height, options, handle = 0;

	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(x)
		Z_PARAM_LONG(y)
		Z_PARAM_LONG(width)
		Z_PARAM_LONG(height)
		Z_PARAM_LONG(options)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &x_param, &y_param, &width_param, &height_param, &options_param);
	
            handle = (zend_long) ns_trackingarea_create(
                (double) x,
                (double) y,
                (double) width,
                (double) height,
                (unsigned) options
            );
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSTrackingArea_NSTrackingArea, destroy)
{
	zval *area_param = NULL;
	zend_long area;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(area)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &area_param);
	
            ns_trackingarea_destroy((uintptr_t) area);
        
}

PHP_METHOD(AppKit_NS_NSTrackingArea_NSTrackingArea, addToView)
{
	zend_bool result = 0;
	zval *area_param = NULL, *view_param = NULL;
	zend_long area, view;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(area)
		Z_PARAM_LONG(view)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &area_param, &view_param);
	
            result = ns_trackingarea_add_to_view((uintptr_t) area, (uintptr_t) view) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSTrackingArea_NSTrackingArea, removeFromView)
{
	zval *area_param = NULL, *view_param = NULL;
	zend_long area, view;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(area)
		Z_PARAM_LONG(view)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &area_param, &view_param);
	
            ns_trackingarea_remove_from_view((uintptr_t) area, (uintptr_t) view);
        
}

/**
 * @return array [x, y, width, height] or empty array
 */
PHP_METHOD(AppKit_NS_NSTrackingArea_NSTrackingArea, rect)
{
	zval out;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *area_param = NULL;
	zend_long area;

	ZVAL_UNDEF(&out);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(area)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &area_param);
	ZEPHIR_INIT_VAR(&out);
	array_init(&out);
	
            double x = 0.0, y = 0.0, w = 0.0, h = 0.0;
            if (ns_trackingarea_rect((uintptr_t) area, &x, &y, &w, &h)) {
                add_next_index_double(&out, x);
                add_next_index_double(&out, y);
                add_next_index_double(&out, w);
                add_next_index_double(&out, h);
            }
        
	RETURN_CTOR(&out);
}

PHP_METHOD(AppKit_NS_NSTrackingArea_NSTrackingArea, options)
{
	zval *area_param = NULL;
	zend_long area, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(area)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &area_param);
	
            value = (zend_long) ns_trackingarea_options((uintptr_t) area);
        
	RETURN_LONG(value);
}

/**
 * @return int Borrowed NSTrackingArea pointer, or 0
 */
PHP_METHOD(AppKit_NS_NSTrackingArea_NSTrackingArea, nsTrackingArea)
{
	zval *area_param = NULL;
	zend_long area, ptr = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(area)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &area_param);
	
            ptr = (zend_long)(uintptr_t) ns_trackingarea_nstrackingarea((uintptr_t) area);
        
	RETURN_LONG(ptr);
}

