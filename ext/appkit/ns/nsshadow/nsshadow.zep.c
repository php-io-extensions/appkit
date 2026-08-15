
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

#include "ns-shadow.h"
#include <stdint.h>



/**
 * NSShadow — drop-shadow attributes for drawing.
 */
ZEPHIR_INIT_CLASS(AppKit_NS_NSShadow_NSShadow)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSShadow, NSShadow, appkit, ns_nsshadow_nsshadow, appkit_ns_nsshadow_nsshadow_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSShadow_NSShadow, create)
{
	zend_long handle = 0;
	
            handle = (zend_long) ns_shadow_create();
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSShadow_NSShadow, wrap)
{
	zval *nsShadowPtr_param = NULL;
	zend_long nsShadowPtr, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(nsShadowPtr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &nsShadowPtr_param);
	
            handle = (zend_long) ns_shadow_wrap((void *)(uintptr_t) nsShadowPtr);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSShadow_NSShadow, destroy)
{
	zval *shadow_param = NULL;
	zend_long shadow;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(shadow)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &shadow_param);
	
            ns_shadow_destroy((uintptr_t) shadow);
        
}

PHP_METHOD(AppKit_NS_NSShadow_NSShadow, nsShadow)
{
	zval *shadow_param = NULL;
	zend_long shadow, ptr = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(shadow)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &shadow_param);
	
            ptr = (zend_long)(uintptr_t) ns_shadow_nsshadow((uintptr_t) shadow);
        
	RETURN_LONG(ptr);
}

PHP_METHOD(AppKit_NS_NSShadow_NSShadow, setOffset)
{
	double width, height;
	zval *shadow_param = NULL, *width_param = NULL, *height_param = NULL;
	zend_long shadow;

	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(shadow)
		Z_PARAM_ZVAL(width)
		Z_PARAM_ZVAL(height)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &shadow_param, &width_param, &height_param);
	width = zephir_get_doubleval(width_param);
	height = zephir_get_doubleval(height_param);
	
            ns_shadow_set_offset((uintptr_t) shadow, (double) width, (double) height);
        
}

/**
 * @return array [w, h]
 */
PHP_METHOD(AppKit_NS_NSShadow_NSShadow, getOffset)
{
	zval out;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *shadow_param = NULL;
	zend_long shadow;

	ZVAL_UNDEF(&out);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(shadow)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &shadow_param);
	ZEPHIR_INIT_VAR(&out);
	array_init(&out);
	
            double w = 0.0, h = 0.0;
            ns_shadow_get_offset((uintptr_t) shadow, &w, &h);
            add_next_index_double(&out, w);
            add_next_index_double(&out, h);
        
	RETURN_CTOR(&out);
}

PHP_METHOD(AppKit_NS_NSShadow_NSShadow, setBlurRadius)
{
	double radius;
	zval *shadow_param = NULL, *radius_param = NULL;
	zend_long shadow;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(shadow)
		Z_PARAM_ZVAL(radius)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &shadow_param, &radius_param);
	radius = zephir_get_doubleval(radius_param);
	
            ns_shadow_set_blur_radius((uintptr_t) shadow, (double) radius);
        
}

PHP_METHOD(AppKit_NS_NSShadow_NSShadow, getBlurRadius)
{
	double value = 0;
	zval *shadow_param = NULL;
	zend_long shadow;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(shadow)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &shadow_param);
	
            value = ns_shadow_get_blur_radius((uintptr_t) shadow);
        
	RETURN_DOUBLE(value);
}

PHP_METHOD(AppKit_NS_NSShadow_NSShadow, setColor)
{
	zval *shadow_param = NULL, *color_param = NULL;
	zend_long shadow, color;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(shadow)
		Z_PARAM_LONG(color)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &shadow_param, &color_param);
	
            ns_shadow_set_color((uintptr_t) shadow, (uintptr_t) color);
        
}

PHP_METHOD(AppKit_NS_NSShadow_NSShadow, getColor)
{
	zval *shadow_param = NULL;
	zend_long shadow, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(shadow)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &shadow_param);
	
            handle = (zend_long) ns_shadow_get_color((uintptr_t) shadow);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSShadow_NSShadow, set)
{
	zval *shadow_param = NULL;
	zend_long shadow;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(shadow)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &shadow_param);
	
            ns_shadow_set((uintptr_t) shadow);
        
}

