
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

#include "ns-magnificationgesturerecognizer.h"
#include "ns-gesturerecognizer.h"
#include <stdint.h>



/**
 * NSMagnificationGestureRecognizer — pinch-to-zoom on NSView.
 */
ZEPHIR_INIT_CLASS(AppKit_NS_NSMagnificationGestureRecognizer_NSMagnificationGestureRecognizer)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSMagnificationGestureRecognizer, NSMagnificationGestureRecognizer, appkit, ns_nsmagnificationgesturerecognizer_nsmagnificationgesturerecognizer, appkit_ns_nsmagnificationgesturerecognizer_nsmagnificationgesturerecognizer_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSMagnificationGestureRecognizer_NSMagnificationGestureRecognizer, create)
{
	zend_long handle = 0;
	
            handle = (zend_long) ns_magnificationgesturerecognizer_create();
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSMagnificationGestureRecognizer_NSMagnificationGestureRecognizer, destroy)
{
	zval *recognizer_param = NULL;
	zend_long recognizer;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(recognizer)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &recognizer_param);
	
            ns_gesturerecognizer_destroy((uintptr_t) recognizer);
        
}

PHP_METHOD(AppKit_NS_NSMagnificationGestureRecognizer_NSMagnificationGestureRecognizer, setEnabled)
{
	zend_bool enabled;
	zval *recognizer_param = NULL, *enabled_param = NULL;
	zend_long recognizer;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(recognizer)
		Z_PARAM_BOOL(enabled)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &recognizer_param, &enabled_param);
	
            ns_gesturerecognizer_set_enabled((uintptr_t) recognizer, enabled ? 1 : 0);
        
}

PHP_METHOD(AppKit_NS_NSMagnificationGestureRecognizer_NSMagnificationGestureRecognizer, isEnabled)
{
	zend_bool result = 0;
	zval *recognizer_param = NULL;
	zend_long recognizer;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(recognizer)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &recognizer_param);
	
            result = ns_gesturerecognizer_is_enabled((uintptr_t) recognizer) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSMagnificationGestureRecognizer_NSMagnificationGestureRecognizer, state)
{
	zval *recognizer_param = NULL;
	zend_long recognizer, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(recognizer)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &recognizer_param);
	
            value = (zend_long) ns_gesturerecognizer_state((uintptr_t) recognizer);
        
	RETURN_LONG(value);
}

PHP_METHOD(AppKit_NS_NSMagnificationGestureRecognizer_NSMagnificationGestureRecognizer, addToView)
{
	zend_bool result = 0;
	zval *recognizer_param = NULL, *view_param = NULL;
	zend_long recognizer, view;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(recognizer)
		Z_PARAM_LONG(view)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &recognizer_param, &view_param);
	
            result = ns_gesturerecognizer_add_to_view((uintptr_t) recognizer, (uintptr_t) view) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSMagnificationGestureRecognizer_NSMagnificationGestureRecognizer, removeFromView)
{
	zval *recognizer_param = NULL, *view_param = NULL;
	zend_long recognizer, view;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(recognizer)
		Z_PARAM_LONG(view)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &recognizer_param, &view_param);
	
            ns_gesturerecognizer_remove_from_view((uintptr_t) recognizer, (uintptr_t) view);
        
}

PHP_METHOD(AppKit_NS_NSMagnificationGestureRecognizer_NSMagnificationGestureRecognizer, locationInView)
{
	zval out;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *recognizer_param = NULL, *view_param = NULL;
	zend_long recognizer, view;

	ZVAL_UNDEF(&out);
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(recognizer)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(view)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 1, &recognizer_param, &view_param);
	if (!view_param) {
		view = 0;
	} else {
		}
	ZEPHIR_INIT_VAR(&out);
	array_init(&out);
	
            double x = 0.0, y = 0.0;
            if (ns_gesturerecognizer_location_in_view((uintptr_t) recognizer, (uintptr_t) view, &x, &y)) {
                add_next_index_double(&out, x);
                add_next_index_double(&out, y);
            }
        
	RETURN_CTOR(&out);
}

PHP_METHOD(AppKit_NS_NSMagnificationGestureRecognizer_NSMagnificationGestureRecognizer, magnification)
{
	double value = 0;
	zval *recognizer_param = NULL;
	zend_long recognizer;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(recognizer)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &recognizer_param);
	
            value = ns_magnificationgesturerecognizer_magnification((uintptr_t) recognizer);
        
	RETURN_DOUBLE(value);
}

PHP_METHOD(AppKit_NS_NSMagnificationGestureRecognizer_NSMagnificationGestureRecognizer, setMagnification)
{
	double value;
	zval *recognizer_param = NULL, *value_param = NULL;
	zend_long recognizer;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(recognizer)
		Z_PARAM_ZVAL(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &recognizer_param, &value_param);
	value = zephir_get_doubleval(value_param);
	
            ns_magnificationgesturerecognizer_set_magnification((uintptr_t) recognizer, (double) value);
        
}

PHP_METHOD(AppKit_NS_NSMagnificationGestureRecognizer_NSMagnificationGestureRecognizer, nsMagnificationGestureRecognizer)
{
	zval *recognizer_param = NULL;
	zend_long recognizer, ptr = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(recognizer)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &recognizer_param);
	
            ptr = (zend_long)(uintptr_t) ns_gesturerecognizer_nsgesturerecognizer((uintptr_t) recognizer);
        
	RETURN_LONG(ptr);
}

