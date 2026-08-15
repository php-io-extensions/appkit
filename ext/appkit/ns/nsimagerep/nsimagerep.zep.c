
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

#include "ns-imagerep.h"
#include <stdint.h>



/**
 * NSImageRep — base image representation type.
 */
ZEPHIR_INIT_CLASS(AppKit_NS_NSImageRep_NSImageRep)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSImageRep, NSImageRep, appkit, ns_nsimagerep_nsimagerep, appkit_ns_nsimagerep_nsimagerep_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSImageRep_NSImageRep, wrap)
{
	zval *nsImageRepPtr_param = NULL;
	zend_long nsImageRepPtr, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(nsImageRepPtr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &nsImageRepPtr_param);
	
            handle = (zend_long) ns_imagerep_wrap((void *)(uintptr_t) nsImageRepPtr);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSImageRep_NSImageRep, destroy)
{
	zval *rep_param = NULL;
	zend_long rep;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(rep)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &rep_param);
	
            ns_imagerep_destroy((uintptr_t) rep);
        
}

PHP_METHOD(AppKit_NS_NSImageRep_NSImageRep, nsImageRep)
{
	zval *rep_param = NULL;
	zend_long rep, ptr = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(rep)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &rep_param);
	
            ptr = (zend_long)(uintptr_t) ns_imagerep_nsimagerep((uintptr_t) rep);
        
	RETURN_LONG(ptr);
}

PHP_METHOD(AppKit_NS_NSImageRep_NSImageRep, repWithContentsOfFile)
{
	zend_long handle = 0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *path_param = NULL;
	zval path;

	ZVAL_UNDEF(&path);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(path)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &path_param);
	zephir_get_strval(&path, path_param);
	
            handle = (zend_long) ns_imagerep_rep_with_contents_of_file(Z_STRVAL(path));
        
	RETURN_MM_LONG(handle);
}

/**
 * @return array [width, height] or empty array
 */
PHP_METHOD(AppKit_NS_NSImageRep_NSImageRep, getSize)
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
	
            double w = 0.0, h = 0.0;
            if (ns_imagerep_get_size((uintptr_t) rep, &w, &h)) {
                add_next_index_double(&out, w);
                add_next_index_double(&out, h);
            }
        
	RETURN_CTOR(&out);
}

PHP_METHOD(AppKit_NS_NSImageRep_NSImageRep, setSize)
{
	double width, height;
	zval *rep_param = NULL, *width_param = NULL, *height_param = NULL;
	zend_long rep;

	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(rep)
		Z_PARAM_ZVAL(width)
		Z_PARAM_ZVAL(height)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &rep_param, &width_param, &height_param);
	width = zephir_get_doubleval(width_param);
	height = zephir_get_doubleval(height_param);
	
            ns_imagerep_set_size((uintptr_t) rep, (double) width, (double) height);
        
}

PHP_METHOD(AppKit_NS_NSImageRep_NSImageRep, hasAlpha)
{
	zend_bool value = 0;
	zval *rep_param = NULL;
	zend_long rep;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(rep)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &rep_param);
	
            value = ns_imagerep_has_alpha((uintptr_t) rep) == 1;
        
	RETURN_BOOL(value);
}

PHP_METHOD(AppKit_NS_NSImageRep_NSImageRep, isOpaque)
{
	zend_bool value = 0;
	zval *rep_param = NULL;
	zend_long rep;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(rep)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &rep_param);
	
            value = ns_imagerep_is_opaque((uintptr_t) rep) == 1;
        
	RETURN_BOOL(value);
}

PHP_METHOD(AppKit_NS_NSImageRep_NSImageRep, pixelsWide)
{
	zval *rep_param = NULL;
	zend_long rep, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(rep)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &rep_param);
	
            value = (zend_long) ns_imagerep_pixels_wide((uintptr_t) rep);
        
	RETURN_LONG(value);
}

PHP_METHOD(AppKit_NS_NSImageRep_NSImageRep, pixelsHigh)
{
	zval *rep_param = NULL;
	zend_long rep, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(rep)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &rep_param);
	
            value = (zend_long) ns_imagerep_pixels_high((uintptr_t) rep);
        
	RETURN_LONG(value);
}

PHP_METHOD(AppKit_NS_NSImageRep_NSImageRep, bitsPerSample)
{
	zval *rep_param = NULL;
	zend_long rep, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(rep)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &rep_param);
	
            value = (zend_long) ns_imagerep_bits_per_sample((uintptr_t) rep);
        
	RETURN_LONG(value);
}

/**
 * NSImageLayoutDirection integer — see OKF nsimagerep.md.
 */
PHP_METHOD(AppKit_NS_NSImageRep_NSImageRep, layoutDirection)
{
	zval *rep_param = NULL;
	zend_long rep, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(rep)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &rep_param);
	
            value = (zend_long) ns_imagerep_layout_direction((uintptr_t) rep);
        
	RETURN_LONG(value);
}

PHP_METHOD(AppKit_NS_NSImageRep_NSImageRep, setLayoutDirection)
{
	zval *rep_param = NULL, *direction_param = NULL;
	zend_long rep, direction;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(rep)
		Z_PARAM_LONG(direction)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &rep_param, &direction_param);
	
            ns_imagerep_set_layout_direction((uintptr_t) rep, (int) direction);
        
}

PHP_METHOD(AppKit_NS_NSImageRep_NSImageRep, draw)
{
	zend_bool value = 0;
	zval *rep_param = NULL;
	zend_long rep;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(rep)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &rep_param);
	
            value = ns_imagerep_draw((uintptr_t) rep) == 1;
        
	RETURN_BOOL(value);
}

PHP_METHOD(AppKit_NS_NSImageRep_NSImageRep, drawAtPoint)
{
	zend_bool value = 0;
	double x, y;
	zval *rep_param = NULL, *x_param = NULL, *y_param = NULL;
	zend_long rep;

	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(rep)
		Z_PARAM_ZVAL(x)
		Z_PARAM_ZVAL(y)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &rep_param, &x_param, &y_param);
	x = zephir_get_doubleval(x_param);
	y = zephir_get_doubleval(y_param);
	
            value = ns_imagerep_draw_at_point((uintptr_t) rep, (double) x, (double) y) == 1;
        
	RETURN_BOOL(value);
}

PHP_METHOD(AppKit_NS_NSImageRep_NSImageRep, drawInRect)
{
	zend_bool value = 0;
	double x, y, width, height;
	zval *rep_param = NULL, *x_param = NULL, *y_param = NULL, *width_param = NULL, *height_param = NULL;
	zend_long rep;

	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(rep)
		Z_PARAM_ZVAL(x)
		Z_PARAM_ZVAL(y)
		Z_PARAM_ZVAL(width)
		Z_PARAM_ZVAL(height)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &rep_param, &x_param, &y_param, &width_param, &height_param);
	x = zephir_get_doubleval(x_param);
	y = zephir_get_doubleval(y_param);
	width = zephir_get_doubleval(width_param);
	height = zephir_get_doubleval(height_param);
	
            value = ns_imagerep_draw_in_rect((uintptr_t) rep, (double) x, (double) y, (double) width, (double) height) == 1;
        
	RETURN_BOOL(value);
}

PHP_METHOD(AppKit_NS_NSImageRep_NSImageRep, imageTypeCount)
{
	zend_long count = 0;
	
            count = (zend_long) ns_imagerep_image_type_count();
        
	RETURN_LONG(count);
}

PHP_METHOD(AppKit_NS_NSImageRep_NSImageRep, imageTypeAt)
{
	zval *index_param = NULL;
	zend_long index;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(index)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &index_param);
	
            char buf[4096];
            buf[0] = '\0';
            if (ns_imagerep_image_type_at((int) index, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        
	RETURN_STRING("");
}

