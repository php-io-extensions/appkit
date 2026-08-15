
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

#include "ns-font.h"
#include <stdint.h>



/**
 * NSFont — typeface instances and UI meta fonts.
 */
ZEPHIR_INIT_CLASS(AppKit_NS_NSFont_NSFont)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSFont, NSFont, appkit, ns_nsfont_nsfont, appkit_ns_nsfont_nsfont_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSFont_NSFont, wrap)
{
	zval *nsFontPtr_param = NULL;
	zend_long nsFontPtr, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(nsFontPtr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &nsFontPtr_param);
	
            handle = (zend_long) ns_font_wrap((void *)(uintptr_t) nsFontPtr);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSFont_NSFont, destroy)
{
	zval *font_param = NULL;
	zend_long font;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(font)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &font_param);
	
            ns_font_destroy((uintptr_t) font);
        
}

PHP_METHOD(AppKit_NS_NSFont_NSFont, withName)
{
	zend_long handle = 0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	double size;
	zval *name_param = NULL, *size_param = NULL;
	zval name;

	ZVAL_UNDEF(&name);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_STR(name)
		Z_PARAM_ZVAL(size)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &name_param, &size_param);
	zephir_get_strval(&name, name_param);
	size = zephir_get_doubleval(size_param);
	
            handle = (zend_long) ns_font_with_name(Z_STRVAL(name), (double) size);
        
	RETURN_MM_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSFont_NSFont, withDescriptor)
{
	double size;
	zval *descriptor_param = NULL, *size_param = NULL;
	zend_long descriptor, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(descriptor)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL(size)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 1, &descriptor_param, &size_param);
	if (!size_param) {
		size = 0.0;
	} else {
		size = zephir_get_doubleval(size_param);
	}
	
            handle = (zend_long) ns_font_with_descriptor((uintptr_t) descriptor, (double) size);
        
	RETURN_LONG(handle);
}

/**
 * Meta font kind — see OKF nsfont.md.
 */
PHP_METHOD(AppKit_NS_NSFont_NSFont, meta)
{
	double size;
	zval *kind_param = NULL, *size_param = NULL;
	zend_long kind, handle = 0;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(kind)
		Z_PARAM_ZVAL(size)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &kind_param, &size_param);
	size = zephir_get_doubleval(size_param);
	
            handle = (zend_long) ns_font_meta((int) kind, (double) size);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSFont_NSFont, systemWeight)
{
	zend_long weightKind, handle = 0;
	zval *size_param = NULL, *weightKind_param = NULL;
	double size;

	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_ZVAL(size)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(weightKind)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 1, &size_param, &weightKind_param);
	size = zephir_get_doubleval(size_param);
	if (!weightKind_param) {
		weightKind = 3;
	} else {
		}
	
            handle = (zend_long) ns_font_system_weight((double) size, (int) weightKind);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSFont_NSFont, systemWeightWidth)
{
	zend_long weightKind, widthKind, handle = 0;
	zval *size_param = NULL, *weightKind_param = NULL, *widthKind_param = NULL;
	double size;

	ZEND_PARSE_PARAMETERS_START(1, 3)
		Z_PARAM_ZVAL(size)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(weightKind)
		Z_PARAM_LONG(widthKind)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 2, &size_param, &weightKind_param, &widthKind_param);
	size = zephir_get_doubleval(size_param);
	if (!weightKind_param) {
		weightKind = 3;
	} else {
		}
	if (!widthKind_param) {
		widthKind = 2;
	} else {
		}
	
            handle = (zend_long) ns_font_system_weight_width((double) size, (int) weightKind, (int) widthKind);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSFont_NSFont, monospacedDigitSystem)
{
	zend_long weightKind, handle = 0;
	zval *size_param = NULL, *weightKind_param = NULL;
	double size;

	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_ZVAL(size)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(weightKind)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 1, &size_param, &weightKind_param);
	size = zephir_get_doubleval(size_param);
	if (!weightKind_param) {
		weightKind = 3;
	} else {
		}
	
            handle = (zend_long) ns_font_monospaced_digit_system((double) size, (int) weightKind);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSFont_NSFont, monospacedSystem)
{
	zend_long weightKind, handle = 0;
	zval *size_param = NULL, *weightKind_param = NULL;
	double size;

	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_ZVAL(size)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(weightKind)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 1, &size_param, &weightKind_param);
	size = zephir_get_doubleval(size_param);
	if (!weightKind_param) {
		weightKind = 3;
	} else {
		}
	
            handle = (zend_long) ns_font_monospaced_system((double) size, (int) weightKind);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSFont_NSFont, preferredForTextStyle)
{
	zval *styleKind_param = NULL;
	zend_long styleKind, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(styleKind)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &styleKind_param);
	
            handle = (zend_long) ns_font_preferred_for_text_style((int) styleKind);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSFont_NSFont, withSize)
{
	double size;
	zval *font_param = NULL, *size_param = NULL;
	zend_long font, handle = 0;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(font)
		Z_PARAM_ZVAL(size)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &font_param, &size_param);
	size = zephir_get_doubleval(size_param);
	
            handle = (zend_long) ns_font_with_size((uintptr_t) font, (double) size);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSFont_NSFont, setUserFont)
{
	zval *font_param = NULL;
	zend_long font;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(font)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &font_param);
	
            ns_font_set_user_font((uintptr_t) font);
        
}

PHP_METHOD(AppKit_NS_NSFont_NSFont, setUserFixedPitchFont)
{
	zval *font_param = NULL;
	zend_long font;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(font)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &font_param);
	
            ns_font_set_user_fixed_pitch_font((uintptr_t) font);
        
}

PHP_METHOD(AppKit_NS_NSFont_NSFont, systemFontSize)
{
	double value = 0;
	
            value = ns_font_system_font_size();
        
	RETURN_DOUBLE(value);
}

PHP_METHOD(AppKit_NS_NSFont_NSFont, smallSystemFontSize)
{
	double value = 0;
	
            value = ns_font_small_system_font_size();
        
	RETURN_DOUBLE(value);
}

PHP_METHOD(AppKit_NS_NSFont_NSFont, labelFontSize)
{
	double value = 0;
	
            value = ns_font_label_font_size();
        
	RETURN_DOUBLE(value);
}

PHP_METHOD(AppKit_NS_NSFont_NSFont, systemFontSizeForControlSize)
{
	double value = 0;
	zval *controlSize_param = NULL;
	zend_long controlSize;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controlSize)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controlSize_param);
	
            value = ns_font_system_font_size_for_control_size((unsigned) controlSize);
        
	RETURN_DOUBLE(value);
}

PHP_METHOD(AppKit_NS_NSFont_NSFont, fontName)
{
	zval *font_param = NULL;
	zend_long font;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(font)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &font_param);
	
            char buf[4096];
            buf[0] = '\0';
            if (ns_font_font_name((uintptr_t) font, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        
	RETURN_STRING("");
}

PHP_METHOD(AppKit_NS_NSFont_NSFont, familyName)
{
	zval *font_param = NULL;
	zend_long font;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(font)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &font_param);
	
            char buf[4096];
            buf[0] = '\0';
            if (ns_font_family_name((uintptr_t) font, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        
	RETURN_STRING("");
}

PHP_METHOD(AppKit_NS_NSFont_NSFont, displayName)
{
	zval *font_param = NULL;
	zend_long font;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(font)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &font_param);
	
            char buf[4096];
            buf[0] = '\0';
            if (ns_font_display_name((uintptr_t) font, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        
	RETURN_STRING("");
}

PHP_METHOD(AppKit_NS_NSFont_NSFont, pointSize)
{
	double value = 0;
	zval *font_param = NULL;
	zend_long font;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(font)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &font_param);
	
            value = ns_font_point_size((uintptr_t) font);
        
	RETURN_DOUBLE(value);
}

PHP_METHOD(AppKit_NS_NSFont_NSFont, fontDescriptor)
{
	zval *font_param = NULL;
	zend_long font, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(font)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &font_param);
	
            handle = (zend_long) ns_font_font_descriptor((uintptr_t) font);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSFont_NSFont, numberOfGlyphs)
{
	zval *font_param = NULL;
	zend_long font, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(font)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &font_param);
	
            value = (zend_long) ns_font_number_of_glyphs((uintptr_t) font);
        
	RETURN_LONG(value);
}

PHP_METHOD(AppKit_NS_NSFont_NSFont, isFixedPitch)
{
	zend_bool result = 0;
	zval *font_param = NULL;
	zend_long font;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(font)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &font_param);
	
            result = ns_font_is_fixed_pitch((uintptr_t) font) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSFont_NSFont, isVertical)
{
	zend_bool result = 0;
	zval *font_param = NULL;
	zend_long font;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(font)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &font_param);
	
            result = ns_font_is_vertical((uintptr_t) font) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSFont_NSFont, verticalFont)
{
	zval *font_param = NULL;
	zend_long font, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(font)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &font_param);
	
            handle = (zend_long) ns_font_vertical_font((uintptr_t) font);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSFont_NSFont, ascender)
{
	double value = 0;
	zval *font_param = NULL;
	zend_long font;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(font)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &font_param);
	
            value = ns_font_ascender((uintptr_t) font);
        
	RETURN_DOUBLE(value);
}

PHP_METHOD(AppKit_NS_NSFont_NSFont, descender)
{
	double value = 0;
	zval *font_param = NULL;
	zend_long font;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(font)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &font_param);
	
            value = ns_font_descender((uintptr_t) font);
        
	RETURN_DOUBLE(value);
}

PHP_METHOD(AppKit_NS_NSFont_NSFont, leading)
{
	double value = 0;
	zval *font_param = NULL;
	zend_long font;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(font)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &font_param);
	
            value = ns_font_leading((uintptr_t) font);
        
	RETURN_DOUBLE(value);
}

PHP_METHOD(AppKit_NS_NSFont_NSFont, underlinePosition)
{
	double value = 0;
	zval *font_param = NULL;
	zend_long font;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(font)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &font_param);
	
            value = ns_font_underline_position((uintptr_t) font);
        
	RETURN_DOUBLE(value);
}

PHP_METHOD(AppKit_NS_NSFont_NSFont, underlineThickness)
{
	double value = 0;
	zval *font_param = NULL;
	zend_long font;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(font)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &font_param);
	
            value = ns_font_underline_thickness((uintptr_t) font);
        
	RETURN_DOUBLE(value);
}

PHP_METHOD(AppKit_NS_NSFont_NSFont, italicAngle)
{
	double value = 0;
	zval *font_param = NULL;
	zend_long font;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(font)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &font_param);
	
            value = ns_font_italic_angle((uintptr_t) font);
        
	RETURN_DOUBLE(value);
}

PHP_METHOD(AppKit_NS_NSFont_NSFont, capHeight)
{
	double value = 0;
	zval *font_param = NULL;
	zend_long font;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(font)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &font_param);
	
            value = ns_font_cap_height((uintptr_t) font);
        
	RETURN_DOUBLE(value);
}

PHP_METHOD(AppKit_NS_NSFont_NSFont, xHeight)
{
	double value = 0;
	zval *font_param = NULL;
	zend_long font;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(font)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &font_param);
	
            value = ns_font_x_height((uintptr_t) font);
        
	RETURN_DOUBLE(value);
}

/**
 * @return array [x, y, width, height] or empty array
 */
PHP_METHOD(AppKit_NS_NSFont_NSFont, boundingRect)
{
	zval out;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *font_param = NULL;
	zend_long font;

	ZVAL_UNDEF(&out);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(font)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &font_param);
	ZEPHIR_INIT_VAR(&out);
	array_init(&out);
	
            double x = 0, y = 0, w = 0, h = 0;
            if (ns_font_bounding_rect((uintptr_t) font, &x, &y, &w, &h)) {
                add_next_index_double(&out, x);
                add_next_index_double(&out, y);
                add_next_index_double(&out, w);
                add_next_index_double(&out, h);
            }
        
	RETURN_CTOR(&out);
}

/**
 * @return array [width, height] or empty array
 */
PHP_METHOD(AppKit_NS_NSFont_NSFont, maximumAdvancement)
{
	zval out;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *font_param = NULL;
	zend_long font;

	ZVAL_UNDEF(&out);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(font)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &font_param);
	ZEPHIR_INIT_VAR(&out);
	array_init(&out);
	
            double w = 0, h = 0;
            if (ns_font_maximum_advancement((uintptr_t) font, &w, &h)) {
                add_next_index_double(&out, w);
                add_next_index_double(&out, h);
            }
        
	RETURN_CTOR(&out);
}

PHP_METHOD(AppKit_NS_NSFont_NSFont, set)
{
	zval *font_param = NULL;
	zend_long font;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(font)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &font_param);
	
            ns_font_set((uintptr_t) font);
        
}

PHP_METHOD(AppKit_NS_NSFont_NSFont, nsFont)
{
	zval *font_param = NULL;
	zend_long font, ptr = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(font)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &font_param);
	
            ptr = (zend_long)(uintptr_t) ns_font_nsfont((uintptr_t) font);
        
	RETURN_LONG(ptr);
}

