
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

#include "ns-cachedimagerep.h"
#include <stdint.h>



/**
 * NSCachedImageRep — deprecated window-backed cached image rep (macOS 10.0–10.6).
 */
ZEPHIR_INIT_CLASS(AppKit_NS_NSCachedImageRep_NSCachedImageRep)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSCachedImageRep, NSCachedImageRep, appkit, ns_nscachedimagerep_nscachedimagerep, appkit_ns_nscachedimagerep_nscachedimagerep_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSCachedImageRep_NSCachedImageRep, wrap)
{
	zval *nsCachedImageRepPtr_param = NULL;
	zend_long nsCachedImageRepPtr, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(nsCachedImageRepPtr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &nsCachedImageRepPtr_param);
	
            handle = (zend_long) ns_cachedimagerep_wrap((void *)(uintptr_t) nsCachedImageRepPtr);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSCachedImageRep_NSCachedImageRep, destroy)
{
	zval *rep_param = NULL;
	zend_long rep;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(rep)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &rep_param);
	
            ns_cachedimagerep_destroy((uintptr_t) rep);
        
}

PHP_METHOD(AppKit_NS_NSCachedImageRep_NSCachedImageRep, nsCachedImageRep)
{
	zval *rep_param = NULL;
	zend_long rep, ptr = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(rep)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &rep_param);
	
            ptr = (zend_long)(uintptr_t) ns_cachedimagerep_nscachedimagerep((uintptr_t) rep);
        
	RETURN_LONG(ptr);
}

PHP_METHOD(AppKit_NS_NSCachedImageRep_NSCachedImageRep, withWindowRect)
{
	double x, y, width, height;
	zval *window_param = NULL, *x_param = NULL, *y_param = NULL, *width_param = NULL, *height_param = NULL;
	zend_long window, handle = 0;

	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(window)
		Z_PARAM_ZVAL(x)
		Z_PARAM_ZVAL(y)
		Z_PARAM_ZVAL(width)
		Z_PARAM_ZVAL(height)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &window_param, &x_param, &y_param, &width_param, &height_param);
	x = zephir_get_doubleval(x_param);
	y = zephir_get_doubleval(y_param);
	width = zephir_get_doubleval(width_param);
	height = zephir_get_doubleval(height_param);
	
            handle = (zend_long) ns_cachedimagerep_with_window_rect((uintptr_t) window, (double) x, (double) y, (double) width, (double) height);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSCachedImageRep_NSCachedImageRep, withSize)
{
	zend_bool separate, alpha;
	zend_long depth, handle = 0;
	zval *width_param = NULL, *height_param = NULL, *depth_param = NULL, *separate_param = NULL, *alpha_param = NULL;
	double width, height;

	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_ZVAL(width)
		Z_PARAM_ZVAL(height)
		Z_PARAM_LONG(depth)
		Z_PARAM_BOOL(separate)
		Z_PARAM_BOOL(alpha)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &width_param, &height_param, &depth_param, &separate_param, &alpha_param);
	width = zephir_get_doubleval(width_param);
	height = zephir_get_doubleval(height_param);
	
            handle = (zend_long) ns_cachedimagerep_with_size((double) width, (double) height, (int) depth, separate ? 1 : 0, alpha ? 1 : 0);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSCachedImageRep_NSCachedImageRep, window)
{
	zval *rep_param = NULL;
	zend_long rep, ptr = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(rep)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &rep_param);
	
            ptr = (zend_long)(uintptr_t) ns_cachedimagerep_window((uintptr_t) rep);
        
	RETURN_LONG(ptr);
}

/**
 * @return array [x, y, width, height] or empty array
 */
PHP_METHOD(AppKit_NS_NSCachedImageRep_NSCachedImageRep, getRect)
{
	zval out;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *rep_param = NULL;
	zend_long rep;

	ZVAL_UNDEF(&out);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(rep)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &rep_param);
	ZEPHIR_INIT_VAR(&out);
	array_init(&out);
	
            double x = 0.0, y = 0.0, w = 0.0, h = 0.0;
            if (ns_cachedimagerep_get_rect((uintptr_t) rep, &x, &y, &w, &h)) {
                add_next_index_double(&out, x);
                add_next_index_double(&out, y);
                add_next_index_double(&out, w);
                add_next_index_double(&out, h);
            }
        
	RETURN_CTOR(&out);
}

