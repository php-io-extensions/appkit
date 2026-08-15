
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

#include "ns-color.h"
#include <stdint.h>



/**
 * NSColor — component, catalog, and system semantic colors.
 */
ZEPHIR_INIT_CLASS(AppKit_NS_NSColor_NSColor)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSColor, NSColor, appkit, ns_nscolor_nscolor, appkit_ns_nscolor_nscolor_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSColor_NSColor, wrap)
{
	zval *nsColorPtr_param = NULL;
	zend_long nsColorPtr, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(nsColorPtr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &nsColorPtr_param);
	
            handle = (zend_long) ns_color_wrap((void *)(uintptr_t) nsColorPtr);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSColor_NSColor, destroy)
{
	zval *color_param = NULL;
	zend_long color;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(color)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &color_param);
	
            ns_color_destroy((uintptr_t) color);
        
}

PHP_METHOD(AppKit_NS_NSColor_NSColor, withRgba)
{
	zend_long handle = 0;
	zval *red_param = NULL, *green_param = NULL, *blue_param = NULL, *alpha_param = NULL;
	double red, green, blue, alpha;

	ZEND_PARSE_PARAMETERS_START(3, 4)
		Z_PARAM_ZVAL(red)
		Z_PARAM_ZVAL(green)
		Z_PARAM_ZVAL(blue)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL(alpha)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 1, &red_param, &green_param, &blue_param, &alpha_param);
	red = zephir_get_doubleval(red_param);
	green = zephir_get_doubleval(green_param);
	blue = zephir_get_doubleval(blue_param);
	if (!alpha_param) {
		alpha = 1.0;
	} else {
		alpha = zephir_get_doubleval(alpha_param);
	}
	
            handle = (zend_long) ns_color_with_rgba((double) red, (double) green, (double) blue, (double) alpha);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSColor_NSColor, withSrgbBytes)
{
	zval *red_param = NULL, *green_param = NULL, *blue_param = NULL, *alpha_param = NULL;
	zend_long red, green, blue, alpha, handle = 0;

	ZEND_PARSE_PARAMETERS_START(3, 4)
		Z_PARAM_LONG(red)
		Z_PARAM_LONG(green)
		Z_PARAM_LONG(blue)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(alpha)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 1, &red_param, &green_param, &blue_param, &alpha_param);
	if (!alpha_param) {
		alpha = 255;
	} else {
		}
	
            handle = (zend_long) ns_color_with_srgb_bytes((int) red, (int) green, (int) blue, (int) alpha);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSColor_NSColor, withWhite)
{
	zend_long handle = 0;
	zval *white_param = NULL, *alpha_param = NULL;
	double white, alpha;

	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_ZVAL(white)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL(alpha)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 1, &white_param, &alpha_param);
	white = zephir_get_doubleval(white_param);
	if (!alpha_param) {
		alpha = 1.0;
	} else {
		alpha = zephir_get_doubleval(alpha_param);
	}
	
            handle = (zend_long) ns_color_with_white((double) white, (double) alpha);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSColor_NSColor, withHsb)
{
	zend_long handle = 0;
	zval *hue_param = NULL, *saturation_param = NULL, *brightness_param = NULL, *alpha_param = NULL;
	double hue, saturation, brightness, alpha;

	ZEND_PARSE_PARAMETERS_START(3, 4)
		Z_PARAM_ZVAL(hue)
		Z_PARAM_ZVAL(saturation)
		Z_PARAM_ZVAL(brightness)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL(alpha)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 1, &hue_param, &saturation_param, &brightness_param, &alpha_param);
	hue = zephir_get_doubleval(hue_param);
	saturation = zephir_get_doubleval(saturation_param);
	brightness = zephir_get_doubleval(brightness_param);
	if (!alpha_param) {
		alpha = 1.0;
	} else {
		alpha = zephir_get_doubleval(alpha_param);
	}
	
            handle = (zend_long) ns_color_with_hsb((double) hue, (double) saturation, (double) brightness, (double) alpha);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSColor_NSColor, named)
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
	
            handle = (zend_long) ns_color_named(Z_STRVAL(name));
        
	RETURN_MM_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSColor_NSColor, withCatalog)
{
	zend_long handle = 0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *listName_param = NULL, *colorName_param = NULL;
	zval listName, colorName;

	ZVAL_UNDEF(&listName);
	ZVAL_UNDEF(&colorName);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_STR(listName)
		Z_PARAM_STR(colorName)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &listName_param, &colorName_param);
	zephir_get_strval(&listName, listName_param);
	zephir_get_strval(&colorName, colorName_param);
	
            handle = (zend_long) ns_color_with_catalog(Z_STRVAL(listName), Z_STRVAL(colorName));
        
	RETURN_MM_LONG(handle);
}

/**
 * Standard color kind integer — see OKF nscolor.md.
 */
PHP_METHOD(AppKit_NS_NSColor_NSColor, standard)
{
	zval *kind_param = NULL;
	zend_long kind, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(kind)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &kind_param);
	
            handle = (zend_long) ns_color_standard((int) kind);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSColor_NSColor, withAlpha)
{
	double alpha;
	zval *color_param = NULL, *alpha_param = NULL;
	zend_long color, handle = 0;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(color)
		Z_PARAM_ZVAL(alpha)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &color_param, &alpha_param);
	alpha = zephir_get_doubleval(alpha_param);
	
            handle = (zend_long) ns_color_with_alpha((uintptr_t) color, (double) alpha);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSColor_NSColor, usingColorSpace)
{
	zval *color_param = NULL, *space_param = NULL;
	zend_long color, space, handle = 0;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(color)
		Z_PARAM_LONG(space)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &color_param, &space_param);
	
            handle = (zend_long) ns_color_using_color_space((uintptr_t) color, (uintptr_t) space);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSColor_NSColor, type)
{
	zval *color_param = NULL;
	zend_long color, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(color)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &color_param);
	
            value = (zend_long) ns_color_type((uintptr_t) color);
        
	RETURN_LONG(value);
}

PHP_METHOD(AppKit_NS_NSColor_NSColor, alpha)
{
	double value = 0;
	zval *color_param = NULL;
	zend_long color;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(color)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &color_param);
	
            value = ns_color_alpha((uintptr_t) color);
        
	RETURN_DOUBLE(value);
}

/**
 * @return array [r, g, b, a] byte components or empty array
 */
PHP_METHOD(AppKit_NS_NSColor_NSColor, getSrgba)
{
	zval out;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *color_param = NULL;
	zend_long color;

	ZVAL_UNDEF(&out);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(color)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &color_param);
	ZEPHIR_INIT_VAR(&out);
	array_init(&out);
	
            int r = 0, g = 0, b = 0, a = 0;
            if (ns_color_get_srgba((uintptr_t) color, &r, &g, &b, &a)) {
                add_next_index_long(&out, r);
                add_next_index_long(&out, g);
                add_next_index_long(&out, b);
                add_next_index_long(&out, a);
            }
        
	RETURN_CTOR(&out);
}

/**
 * @return array [r, g, b, a] float 0..1 or empty array
 */
PHP_METHOD(AppKit_NS_NSColor_NSColor, getRgbaDouble)
{
	zval out;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *color_param = NULL;
	zend_long color;

	ZVAL_UNDEF(&out);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(color)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &color_param);
	ZEPHIR_INIT_VAR(&out);
	array_init(&out);
	
            double r = 0.0, g = 0.0, b = 0.0, a = 0.0;
            if (ns_color_get_rgba_double((uintptr_t) color, &r, &g, &b, &a)) {
                add_next_index_double(&out, r);
                add_next_index_double(&out, g);
                add_next_index_double(&out, b);
                add_next_index_double(&out, a);
            }
        
	RETURN_CTOR(&out);
}

PHP_METHOD(AppKit_NS_NSColor_NSColor, set)
{
	zval *color_param = NULL;
	zend_long color;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(color)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &color_param);
	
            ns_color_set((uintptr_t) color);
        
}

PHP_METHOD(AppKit_NS_NSColor_NSColor, setFill)
{
	zval *color_param = NULL;
	zend_long color;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(color)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &color_param);
	
            ns_color_set_fill((uintptr_t) color);
        
}

PHP_METHOD(AppKit_NS_NSColor_NSColor, setStroke)
{
	zval *color_param = NULL;
	zend_long color;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(color)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &color_param);
	
            ns_color_set_stroke((uintptr_t) color);
        
}

PHP_METHOD(AppKit_NS_NSColor_NSColor, catalogName)
{
	zval *color_param = NULL;
	zend_long color;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(color)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &color_param);
	
            char buf[4096];
            buf[0] = '\0';
            if (ns_color_catalog_name((uintptr_t) color, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        
	RETURN_STRING("");
}

PHP_METHOD(AppKit_NS_NSColor_NSColor, colorName)
{
	zval *color_param = NULL;
	zend_long color;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(color)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &color_param);
	
            char buf[4096];
            buf[0] = '\0';
            if (ns_color_color_name((uintptr_t) color, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        
	RETURN_STRING("");
}

PHP_METHOD(AppKit_NS_NSColor_NSColor, nsColor)
{
	zval *color_param = NULL;
	zend_long color, ptr = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(color)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &color_param);
	
            ptr = (zend_long)(uintptr_t) ns_color_nscolor((uintptr_t) color);
        
	RETURN_LONG(ptr);
}

