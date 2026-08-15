
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

#include "ns-touch.h"
#include <stdint.h>



/**
 * NSTouch — wrap touches from NSEvent (short-lived; use during event handling).
 */
ZEPHIR_INIT_CLASS(AppKit_NS_NSTouch_NSTouch)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSTouch, NSTouch, appkit, ns_nstouch_nstouch, appkit_ns_nstouch_nstouch_method_entry, 0);

	return SUCCESS;
}

/**
 * @return int Opaque touch handle, or 0
 */
PHP_METHOD(AppKit_NS_NSTouch_NSTouch, wrap)
{
	zval *nsTouchPtr_param = NULL;
	zend_long nsTouchPtr, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(nsTouchPtr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &nsTouchPtr_param);
	
            handle = (zend_long) ns_touch_wrap((void *)(uintptr_t) nsTouchPtr);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSTouch_NSTouch, destroy)
{
	zval *touch_param = NULL;
	zend_long touch;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(touch)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &touch_param);
	
            ns_touch_destroy((uintptr_t) touch);
        
}

/**
 * NSTouchPhase bitfield.
 */
PHP_METHOD(AppKit_NS_NSTouch_NSTouch, phase)
{
	zval *touch_param = NULL;
	zend_long touch, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(touch)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &touch_param);
	
            value = (zend_long) ns_touch_phase((uintptr_t) touch);
        
	RETURN_LONG(value);
}

/**
 * NSTouchType: 0 direct, 1 indirect.
 */
PHP_METHOD(AppKit_NS_NSTouch_NSTouch, type)
{
	zval *touch_param = NULL;
	zend_long touch, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(touch)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &touch_param);
	
            value = (zend_long) ns_touch_type((uintptr_t) touch);
        
	RETURN_LONG(value);
}

PHP_METHOD(AppKit_NS_NSTouch_NSTouch, isResting)
{
	zend_bool result = 0;
	zval *touch_param = NULL;
	zend_long touch;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(touch)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &touch_param);
	
            result = ns_touch_is_resting((uintptr_t) touch) == 1;
        
	RETURN_BOOL(result);
}

/**
 * Normalized position [x, y] in [0,1], or empty array.
 */
PHP_METHOD(AppKit_NS_NSTouch_NSTouch, normalizedPosition)
{
	zval out;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *touch_param = NULL;
	zend_long touch;

	ZVAL_UNDEF(&out);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(touch)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &touch_param);
	ZEPHIR_INIT_VAR(&out);
	array_init(&out);
	
            double x = 0.0, y = 0.0;
            if (ns_touch_normalized_position((uintptr_t) touch, &x, &y)) {
                add_next_index_double(&out, x);
                add_next_index_double(&out, y);
            }
        
	RETURN_CTOR(&out);
}

/**
 * Device size [width, height] in points, or empty array.
 */
PHP_METHOD(AppKit_NS_NSTouch_NSTouch, deviceSize)
{
	zval out;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *touch_param = NULL;
	zend_long touch;

	ZVAL_UNDEF(&out);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(touch)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &touch_param);
	ZEPHIR_INIT_VAR(&out);
	array_init(&out);
	
            double w = 0.0, h = 0.0;
            if (ns_touch_device_size((uintptr_t) touch, &w, &h)) {
                add_next_index_double(&out, w);
                add_next_index_double(&out, h);
            }
        
	RETURN_CTOR(&out);
}

/**
 * Location in view coords [x, y]. view=0 uses touch root container.
 */
PHP_METHOD(AppKit_NS_NSTouch_NSTouch, locationInView)
{
	zval out;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *touch_param = NULL, *view_param = NULL;
	zend_long touch, view;

	ZVAL_UNDEF(&out);
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(touch)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(view)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 1, &touch_param, &view_param);
	if (!view_param) {
		view = 0;
	} else {
		}
	ZEPHIR_INIT_VAR(&out);
	array_init(&out);
	
            double x = 0.0, y = 0.0;
            if (ns_touch_location_in_view((uintptr_t) touch, (uintptr_t) view, &x, &y)) {
                add_next_index_double(&out, x);
                add_next_index_double(&out, y);
            }
        
	RETURN_CTOR(&out);
}

PHP_METHOD(AppKit_NS_NSTouch_NSTouch, previousLocationInView)
{
	zval out;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *touch_param = NULL, *view_param = NULL;
	zend_long touch, view;

	ZVAL_UNDEF(&out);
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(touch)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(view)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 1, &touch_param, &view_param);
	if (!view_param) {
		view = 0;
	} else {
		}
	ZEPHIR_INIT_VAR(&out);
	array_init(&out);
	
            double x = 0.0, y = 0.0;
            if (ns_touch_previous_location_in_view((uintptr_t) touch, (uintptr_t) view, &x, &y)) {
                add_next_index_double(&out, x);
                add_next_index_double(&out, y);
            }
        
	RETURN_CTOR(&out);
}

/**
 * @return int Borrowed NSTouch pointer, or 0
 */
PHP_METHOD(AppKit_NS_NSTouch_NSTouch, nsTouch)
{
	zval *touch_param = NULL;
	zend_long touch, ptr = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(touch)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &touch_param);
	
            ptr = (zend_long)(uintptr_t) ns_touch_nstouch((uintptr_t) touch);
        
	RETURN_LONG(ptr);
}

