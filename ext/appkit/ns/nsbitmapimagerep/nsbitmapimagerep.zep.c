
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

#include "ns-bitmapimagerep.h"
#include <stdint.h>



/**
 * NSBitmapImageRep — raster bitmap image representations.
 */
ZEPHIR_INIT_CLASS(AppKit_NS_NSBitmapImageRep_NSBitmapImageRep)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSBitmapImageRep, NSBitmapImageRep, appkit, ns_nsbitmapimagerep_nsbitmapimagerep, appkit_ns_nsbitmapimagerep_nsbitmapimagerep_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSBitmapImageRep_NSBitmapImageRep, wrap)
{
	zval *nsBitmapImageRepPtr_param = NULL;
	zend_long nsBitmapImageRepPtr, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(nsBitmapImageRepPtr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &nsBitmapImageRepPtr_param);
	
            handle = (zend_long) ns_bitmapimagerep_wrap((void *)(uintptr_t) nsBitmapImageRepPtr);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSBitmapImageRep_NSBitmapImageRep, destroy)
{
	zval *rep_param = NULL;
	zend_long rep;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(rep)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &rep_param);
	
            ns_bitmapimagerep_destroy((uintptr_t) rep);
        
}

PHP_METHOD(AppKit_NS_NSBitmapImageRep_NSBitmapImageRep, nsBitmapImageRep)
{
	zval *rep_param = NULL;
	zend_long rep, ptr = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(rep)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &rep_param);
	
            ptr = (zend_long)(uintptr_t) ns_bitmapimagerep_nsbitmapimagerep((uintptr_t) rep);
        
	RETURN_LONG(ptr);
}

PHP_METHOD(AppKit_NS_NSBitmapImageRep_NSBitmapImageRep, withData)
{
	zend_long handle = 0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *data_param = NULL;
	zval data;

	ZVAL_UNDEF(&data);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(data)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &data_param);
	zephir_get_strval(&data, data_param);
	
            handle = (zend_long) ns_bitmapimagerep_with_data(Z_STRVAL(data), Z_STRLEN(data));
        
	RETURN_MM_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSBitmapImageRep_NSBitmapImageRep, repWithContentsOfFile)
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
	
            handle = (zend_long) ns_bitmapimagerep_rep_with_contents_of_file(Z_STRVAL(path));
        
	RETURN_MM_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSBitmapImageRep_NSBitmapImageRep, withPixels)
{
	zend_bool hasAlpha;
	zval *width_param = NULL, *height_param = NULL, *hasAlpha_param = NULL;
	zend_long width, height, handle = 0;

	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(width)
		Z_PARAM_LONG(height)
		Z_PARAM_OPTIONAL
		Z_PARAM_BOOL(hasAlpha)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 1, &width_param, &height_param, &hasAlpha_param);
	if (!hasAlpha_param) {
		hasAlpha = 1;
	} else {
		}
	
            handle = (zend_long) ns_bitmapimagerep_with_pixels((int) width, (int) height, hasAlpha ? 1 : 0);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSBitmapImageRep_NSBitmapImageRep, withCGImage)
{
	zval *cgImagePtr_param = NULL;
	zend_long cgImagePtr, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(cgImagePtr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &cgImagePtr_param);
	
            handle = (zend_long) ns_bitmapimagerep_with_cgimage((uintptr_t) cgImagePtr);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSBitmapImageRep_NSBitmapImageRep, isPlanar)
{
	zend_bool value = 0;
	zval *rep_param = NULL;
	zend_long rep;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(rep)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &rep_param);
	
            value = ns_bitmapimagerep_is_planar((uintptr_t) rep) == 1;
        
	RETURN_BOOL(value);
}

PHP_METHOD(AppKit_NS_NSBitmapImageRep_NSBitmapImageRep, samplesPerPixel)
{
	zval *rep_param = NULL;
	zend_long rep, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(rep)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &rep_param);
	
            value = (zend_long) ns_bitmapimagerep_samples_per_pixel((uintptr_t) rep);
        
	RETURN_LONG(value);
}

PHP_METHOD(AppKit_NS_NSBitmapImageRep_NSBitmapImageRep, bitsPerPixel)
{
	zval *rep_param = NULL;
	zend_long rep, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(rep)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &rep_param);
	
            value = (zend_long) ns_bitmapimagerep_bits_per_pixel((uintptr_t) rep);
        
	RETURN_LONG(value);
}

PHP_METHOD(AppKit_NS_NSBitmapImageRep_NSBitmapImageRep, bytesPerRow)
{
	zval *rep_param = NULL;
	zend_long rep, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(rep)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &rep_param);
	
            value = (zend_long) ns_bitmapimagerep_bytes_per_row((uintptr_t) rep);
        
	RETURN_LONG(value);
}

PHP_METHOD(AppKit_NS_NSBitmapImageRep_NSBitmapImageRep, numberOfPlanes)
{
	zval *rep_param = NULL;
	zend_long rep, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(rep)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &rep_param);
	
            value = (zend_long) ns_bitmapimagerep_number_of_planes((uintptr_t) rep);
        
	RETURN_LONG(value);
}

PHP_METHOD(AppKit_NS_NSBitmapImageRep_NSBitmapImageRep, bitmapData)
{
	zval *rep_param = NULL;
	zend_long rep, ptr = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(rep)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &rep_param);
	
            ptr = (zend_long)(uintptr_t) ns_bitmapimagerep_bitmap_data((uintptr_t) rep);
        
	RETURN_LONG(ptr);
}

PHP_METHOD(AppKit_NS_NSBitmapImageRep_NSBitmapImageRep, tiffRepresentation)
{
	zval *rep_param = NULL;
	zend_long rep;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(rep)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &rep_param);
	
            char *buf = NULL;
            size_t len = 0;
            if (ns_bitmapimagerep_get_tiff_representation((uintptr_t) rep, &buf, &len) && buf && len > 0) {
                RETVAL_STRINGL(buf, len);
                ns_bitmapimagerep_free_buffer(buf);
                return;
            }
            ns_bitmapimagerep_free_buffer(buf);
            RETURN_EMPTY_STRING();
        
	RETURN_STRING("");
}

/**
 * NSBitmapImageFileType integer — see OKF nsbitmapimagerep.md.
 */
PHP_METHOD(AppKit_NS_NSBitmapImageRep_NSBitmapImageRep, representationUsingType)
{
	zval *rep_param = NULL, *fileType_param = NULL;
	zend_long rep, fileType;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(rep)
		Z_PARAM_LONG(fileType)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &rep_param, &fileType_param);
	
            char *buf = NULL;
            size_t len = 0;
            if (ns_bitmapimagerep_representation_using_type((uintptr_t) rep, (int) fileType, &buf, &len) && buf && len > 0) {
                RETVAL_STRINGL(buf, len);
                ns_bitmapimagerep_free_buffer(buf);
                return;
            }
            ns_bitmapimagerep_free_buffer(buf);
            RETURN_EMPTY_STRING();
        
	RETURN_STRING("");
}

PHP_METHOD(AppKit_NS_NSBitmapImageRep_NSBitmapImageRep, setColorAt)
{
	zend_bool value = 0;
	zval *rep_param = NULL, *x_param = NULL, *y_param = NULL, *color_param = NULL;
	zend_long rep, x, y, color;

	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(rep)
		Z_PARAM_LONG(x)
		Z_PARAM_LONG(y)
		Z_PARAM_LONG(color)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &rep_param, &x_param, &y_param, &color_param);
	
            value = ns_bitmapimagerep_set_color_at((uintptr_t) rep, (int) x, (int) y, (uintptr_t) color) == 1;
        
	RETURN_BOOL(value);
}

PHP_METHOD(AppKit_NS_NSBitmapImageRep_NSBitmapImageRep, colorAt)
{
	zval *rep_param = NULL, *x_param = NULL, *y_param = NULL;
	zend_long rep, x, y, handle = 0;

	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(rep)
		Z_PARAM_LONG(x)
		Z_PARAM_LONG(y)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &rep_param, &x_param, &y_param);
	
            handle = (zend_long) ns_bitmapimagerep_color_at((uintptr_t) rep, (int) x, (int) y);
        
	RETURN_LONG(handle);
}

