
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

#include "ns-image.h"
#include <stdint.h>



/**
 * NSImage — multi-representation image objects.
 */
ZEPHIR_INIT_CLASS(AppKit_NS_NSImage_NSImage)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSImage, NSImage, appkit, ns_nsimage_nsimage, appkit_ns_nsimage_nsimage_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSImage_NSImage, wrap)
{
	zval *nsImagePtr_param = NULL;
	zend_long nsImagePtr, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(nsImagePtr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &nsImagePtr_param);
	
            handle = (zend_long) ns_image_wrap((void *)(uintptr_t) nsImagePtr);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSImage_NSImage, destroy)
{
	zval *image_param = NULL;
	zend_long image;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(image)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &image_param);
	
            ns_image_destroy((uintptr_t) image);
        
}

PHP_METHOD(AppKit_NS_NSImage_NSImage, nsImage)
{
	zval *image_param = NULL;
	zend_long image, ptr = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(image)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &image_param);
	
            ptr = (zend_long)(uintptr_t) ns_image_nsimage((uintptr_t) image);
        
	RETURN_LONG(ptr);
}

PHP_METHOD(AppKit_NS_NSImage_NSImage, named)
{
	zend_long handle = 0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *name_param = NULL;
	zval name;

	ZVAL_UNDEF(&name);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(name)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &name_param);
	zephir_get_strval(&name, name_param);
	
            handle = (zend_long) ns_image_named(Z_STRVAL(name));
        
	RETURN_MM_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSImage_NSImage, withSystemSymbolName)
{
	zend_long handle = 0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *name_param = NULL, *description_param = NULL;
	zval name, description;

	ZVAL_UNDEF(&name);
	ZVAL_UNDEF(&description);
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_STR(name)
		Z_PARAM_OPTIONAL
		Z_PARAM_STR(description)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 1, &name_param, &description_param);
	zephir_get_strval(&name, name_param);
	if (!description_param) {
		ZEPHIR_INIT_VAR(&description);
		ZVAL_STRING(&description, "");
	} else {
		zephir_get_strval(&description, description_param);
	}
	
            handle = (zend_long) ns_image_with_system_symbol_name(Z_STRVAL(name), Z_STRVAL(description));
        
	RETURN_MM_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSImage_NSImage, withSize)
{
	zend_long handle = 0;
	zval *width_param = NULL, *height_param = NULL;
	double width, height;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_ZVAL(width)
		Z_PARAM_ZVAL(height)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &width_param, &height_param);
	width = zephir_get_doubleval(width_param);
	height = zephir_get_doubleval(height_param);
	
            handle = (zend_long) ns_image_with_size((double) width, (double) height);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSImage_NSImage, withContentsOfFile)
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
	
            handle = (zend_long) ns_image_with_contents_of_file(Z_STRVAL(path));
        
	RETURN_MM_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSImage_NSImage, withData)
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
	
            handle = (zend_long) ns_image_with_data(Z_STRVAL(data), Z_STRLEN(data));
        
	RETURN_MM_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSImage_NSImage, byReferencingFile)
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
	
            handle = (zend_long) ns_image_by_referencing_file(Z_STRVAL(path));
        
	RETURN_MM_LONG(handle);
}

/**
 * @return array [width, height] or empty array
 */
PHP_METHOD(AppKit_NS_NSImage_NSImage, getSize)
{
	zval out;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *image_param = NULL;
	zend_long image;

	ZVAL_UNDEF(&out);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(image)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &image_param);
	ZEPHIR_INIT_VAR(&out);
	array_init(&out);
	
            double w = 0.0, h = 0.0;
            if (ns_image_get_size((uintptr_t) image, &w, &h)) {
                add_next_index_double(&out, w);
                add_next_index_double(&out, h);
            }
        
	RETURN_CTOR(&out);
}

PHP_METHOD(AppKit_NS_NSImage_NSImage, setSize)
{
	double width, height;
	zval *image_param = NULL, *width_param = NULL, *height_param = NULL;
	zend_long image;

	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(image)
		Z_PARAM_ZVAL(width)
		Z_PARAM_ZVAL(height)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &image_param, &width_param, &height_param);
	width = zephir_get_doubleval(width_param);
	height = zephir_get_doubleval(height_param);
	
            ns_image_set_size((uintptr_t) image, (double) width, (double) height);
        
}

PHP_METHOD(AppKit_NS_NSImage_NSImage, isValid)
{
	zend_bool value = 0;
	zval *image_param = NULL;
	zend_long image;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(image)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &image_param);
	
            value = ns_image_is_valid((uintptr_t) image) == 1;
        
	RETURN_BOOL(value);
}

PHP_METHOD(AppKit_NS_NSImage_NSImage, isTemplate)
{
	zend_bool value = 0;
	zval *image_param = NULL;
	zend_long image;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(image)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &image_param);
	
            value = ns_image_is_template((uintptr_t) image) == 1;
        
	RETURN_BOOL(value);
}

PHP_METHOD(AppKit_NS_NSImage_NSImage, setTemplate)
{
	zend_bool isTemplate;
	zval *image_param = NULL, *isTemplate_param = NULL;
	zend_long image;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(image)
		Z_PARAM_BOOL(isTemplate)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &image_param, &isTemplate_param);
	
            ns_image_set_template((uintptr_t) image, isTemplate ? 1 : 0);
        
}

PHP_METHOD(AppKit_NS_NSImage_NSImage, setName)
{
	zend_bool value = 0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval name;
	zval *image_param = NULL, *name_param = NULL;
	zend_long image;

	ZVAL_UNDEF(&name);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(image)
		Z_PARAM_STR(name)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &image_param, &name_param);
	zephir_get_strval(&name, name_param);
	
            value = ns_image_set_name((uintptr_t) image, Z_STRVAL(name)) == 1;
        
	RETURN_MM_BOOL(value);
}

PHP_METHOD(AppKit_NS_NSImage_NSImage, getName)
{
	zval *image_param = NULL;
	zend_long image;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(image)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &image_param);
	
            char buf[4096];
            buf[0] = '\0';
            if (ns_image_get_name((uintptr_t) image, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        
	RETURN_STRING("");
}

PHP_METHOD(AppKit_NS_NSImage_NSImage, addRepresentation)
{
	zval *image_param = NULL, *rep_param = NULL;
	zend_long image, rep;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(image)
		Z_PARAM_LONG(rep)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &image_param, &rep_param);
	
            ns_image_add_representation((uintptr_t) image, (uintptr_t) rep);
        
}

PHP_METHOD(AppKit_NS_NSImage_NSImage, removeRepresentation)
{
	zval *image_param = NULL, *rep_param = NULL;
	zend_long image, rep;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(image)
		Z_PARAM_LONG(rep)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &image_param, &rep_param);
	
            ns_image_remove_representation((uintptr_t) image, (uintptr_t) rep);
        
}

PHP_METHOD(AppKit_NS_NSImage_NSImage, representationCount)
{
	zval *image_param = NULL;
	zend_long image, count = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(image)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &image_param);
	
            count = (zend_long) ns_image_representation_count((uintptr_t) image);
        
	RETURN_LONG(count);
}

PHP_METHOD(AppKit_NS_NSImage_NSImage, representationAt)
{
	zval *image_param = NULL, *index_param = NULL;
	zend_long image, index, handle = 0;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(image)
		Z_PARAM_LONG(index)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &image_param, &index_param);
	
            handle = (zend_long) ns_image_representation_at((uintptr_t) image, (int) index);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSImage_NSImage, drawInRect)
{
	zend_bool value = 0;
	double x, y, width, height;
	zval *image_param = NULL, *x_param = NULL, *y_param = NULL, *width_param = NULL, *height_param = NULL;
	zend_long image;

	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(image)
		Z_PARAM_ZVAL(x)
		Z_PARAM_ZVAL(y)
		Z_PARAM_ZVAL(width)
		Z_PARAM_ZVAL(height)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &image_param, &x_param, &y_param, &width_param, &height_param);
	x = zephir_get_doubleval(x_param);
	y = zephir_get_doubleval(y_param);
	width = zephir_get_doubleval(width_param);
	height = zephir_get_doubleval(height_param);
	
            value = ns_image_draw_in_rect((uintptr_t) image, (double) x, (double) y, (double) width, (double) height) == 1;
        
	RETURN_BOOL(value);
}

PHP_METHOD(AppKit_NS_NSImage_NSImage, tiffRepresentation)
{
	zval *image_param = NULL;
	zend_long image;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(image)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &image_param);
	
            char *buf = NULL;
            size_t len = 0;
            if (ns_image_get_tiff_representation((uintptr_t) image, &buf, &len) && buf && len > 0) {
                RETVAL_STRINGL(buf, len);
                ns_image_free_buffer(buf);
                return;
            }
            ns_image_free_buffer(buf);
            RETURN_EMPTY_STRING();
        
	RETURN_STRING("");
}

/**
 * NSImageCacheMode integer — see OKF nsimage.md.
 */
PHP_METHOD(AppKit_NS_NSImage_NSImage, cacheMode)
{
	zval *image_param = NULL;
	zend_long image, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(image)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &image_param);
	
            value = (zend_long) ns_image_get_cache_mode((uintptr_t) image);
        
	RETURN_LONG(value);
}

PHP_METHOD(AppKit_NS_NSImage_NSImage, setCacheMode)
{
	zval *image_param = NULL, *mode_param = NULL;
	zend_long image, mode;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(image)
		Z_PARAM_LONG(mode)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &image_param, &mode_param);
	
            ns_image_set_cache_mode((uintptr_t) image, (int) mode);
        
}

PHP_METHOD(AppKit_NS_NSImage_NSImage, getAccessibilityDescription)
{
	zval *image_param = NULL;
	zend_long image;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(image)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &image_param);
	
            char buf[4096];
            buf[0] = '\0';
            if (ns_image_get_accessibility_description((uintptr_t) image, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        
	RETURN_STRING("");
}

PHP_METHOD(AppKit_NS_NSImage_NSImage, setAccessibilityDescription)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval description;
	zval *image_param = NULL, *description_param = NULL;
	zend_long image;

	ZVAL_UNDEF(&description);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(image)
		Z_PARAM_STR(description)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &image_param, &description_param);
	zephir_get_strval(&description, description_param);
	
            ns_image_set_accessibility_description((uintptr_t) image, Z_STRVAL(description));
        
	ZEPHIR_MM_RESTORE();
}

