
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

#include "ns-text.h"
#include <stdint.h>



/**
 * NSText — text object editing and display attributes.
 */
ZEPHIR_INIT_CLASS(AppKit_NS_NSText_NSText)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSText, NSText, appkit, ns_nstext_nstext, appkit_ns_nstext_nstext_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSText_NSText, create)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval value;
	zval *x_param = NULL, *y_param = NULL, *width_param = NULL, *height_param = NULL, *value_param = NULL;
	zend_long x, y, width, height, handle = 0;

	ZVAL_UNDEF(&value);
	ZEND_PARSE_PARAMETERS_START(4, 5)
		Z_PARAM_LONG(x)
		Z_PARAM_LONG(y)
		Z_PARAM_LONG(width)
		Z_PARAM_LONG(height)
		Z_PARAM_OPTIONAL
		Z_PARAM_STR(value)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 1, &x_param, &y_param, &width_param, &height_param, &value_param);
	if (!value_param) {
		ZEPHIR_INIT_VAR(&value);
		ZVAL_STRING(&value, "");
	} else {
		zephir_get_strval(&value, value_param);
	}
	
            handle = (zend_long) ns_text_create((double) x, (double) y, (double) width, (double) height, Z_STRVAL(value));
        
	RETURN_MM_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSText_NSText, wrap)
{
	zval *nsTextPtr_param = NULL;
	zend_long nsTextPtr, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(nsTextPtr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &nsTextPtr_param);
	
            handle = (zend_long) ns_text_wrap((void *)(uintptr_t) nsTextPtr);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSText_NSText, destroy)
{
	zval *text_param = NULL;
	zend_long text;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(text)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &text_param);
	
            ns_text_destroy((uintptr_t) text);
        
}

PHP_METHOD(AppKit_NS_NSText_NSText, nsText)
{
	zval *text_param = NULL;
	zend_long text, ptr = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(text)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &text_param);
	
            ptr = (zend_long)(uintptr_t) ns_text_nstext((uintptr_t) text);
        
	RETURN_LONG(ptr);
}

PHP_METHOD(AppKit_NS_NSText_NSText, setString)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval value;
	zval *text_param = NULL, *value_param = NULL;
	zend_long text;

	ZVAL_UNDEF(&value);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(text)
		Z_PARAM_STR(value)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &text_param, &value_param);
	zephir_get_strval(&value, value_param);
	
            ns_text_set_string((uintptr_t) text, Z_STRVAL(value));
        
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSText_NSText, getString)
{
	zval *text_param = NULL;
	zend_long text;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(text)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &text_param);
	
            char buf[4096];
            buf[0] = '\0';
            if (ns_text_get_string((uintptr_t) text, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        
	RETURN_STRING("");
}

PHP_METHOD(AppKit_NS_NSText_NSText, setEditable)
{
	zend_bool editable;
	zval *text_param = NULL, *editable_param = NULL;
	zend_long text;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(text)
		Z_PARAM_BOOL(editable)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &text_param, &editable_param);
	
            ns_text_set_editable((uintptr_t) text, editable ? 1 : 0);
        
}

PHP_METHOD(AppKit_NS_NSText_NSText, isEditable)
{
	zend_bool result = 0;
	zval *text_param = NULL;
	zend_long text;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(text)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &text_param);
	
            result = ns_text_is_editable((uintptr_t) text) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSText_NSText, setSelectable)
{
	zend_bool selectable;
	zval *text_param = NULL, *selectable_param = NULL;
	zend_long text;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(text)
		Z_PARAM_BOOL(selectable)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &text_param, &selectable_param);
	
            ns_text_set_selectable((uintptr_t) text, selectable ? 1 : 0);
        
}

PHP_METHOD(AppKit_NS_NSText_NSText, isSelectable)
{
	zend_bool result = 0;
	zval *text_param = NULL;
	zend_long text;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(text)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &text_param);
	
            result = ns_text_is_selectable((uintptr_t) text) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSText_NSText, setRichText)
{
	zend_bool richText;
	zval *text_param = NULL, *richText_param = NULL;
	zend_long text;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(text)
		Z_PARAM_BOOL(richText)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &text_param, &richText_param);
	
            ns_text_set_rich_text((uintptr_t) text, richText ? 1 : 0);
        
}

PHP_METHOD(AppKit_NS_NSText_NSText, isRichText)
{
	zend_bool result = 0;
	zval *text_param = NULL;
	zend_long text;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(text)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &text_param);
	
            result = ns_text_is_rich_text((uintptr_t) text) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSText_NSText, setDrawsBackground)
{
	zend_bool drawsBackground;
	zval *text_param = NULL, *drawsBackground_param = NULL;
	zend_long text;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(text)
		Z_PARAM_BOOL(drawsBackground)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &text_param, &drawsBackground_param);
	
            ns_text_set_draws_background((uintptr_t) text, drawsBackground ? 1 : 0);
        
}

PHP_METHOD(AppKit_NS_NSText_NSText, drawsBackground)
{
	zend_bool result = 0;
	zval *text_param = NULL;
	zend_long text;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(text)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &text_param);
	
            result = ns_text_draws_background((uintptr_t) text) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSText_NSText, setBackgroundColor)
{
	zval *text_param = NULL, *color_param = NULL;
	zend_long text, color;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(text)
		Z_PARAM_LONG(color)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &text_param, &color_param);
	
            ns_text_set_background_color((uintptr_t) text, (uintptr_t) color);
        
}

PHP_METHOD(AppKit_NS_NSText_NSText, setTextColor)
{
	zval *text_param = NULL, *color_param = NULL;
	zend_long text, color;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(text)
		Z_PARAM_LONG(color)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &text_param, &color_param);
	
            ns_text_set_text_color((uintptr_t) text, (uintptr_t) color);
        
}

PHP_METHOD(AppKit_NS_NSText_NSText, setFont)
{
	zval *text_param = NULL, *font_param = NULL;
	zend_long text, font;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(text)
		Z_PARAM_LONG(font)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &text_param, &font_param);
	
            ns_text_set_font((uintptr_t) text, (uintptr_t) font);
        
}

PHP_METHOD(AppKit_NS_NSText_NSText, setAlignment)
{
	zval *text_param = NULL, *alignment_param = NULL;
	zend_long text, alignment;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(text)
		Z_PARAM_LONG(alignment)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &text_param, &alignment_param);
	
            ns_text_set_alignment((uintptr_t) text, (int) alignment);
        
}

PHP_METHOD(AppKit_NS_NSText_NSText, getAlignment)
{
	zval *text_param = NULL;
	zend_long text, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(text)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &text_param);
	
            value = (zend_long) ns_text_get_alignment((uintptr_t) text);
        
	RETURN_LONG(value);
}

PHP_METHOD(AppKit_NS_NSText_NSText, setWritingDirection)
{
	zval *text_param = NULL, *direction_param = NULL;
	zend_long text, direction;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(text)
		Z_PARAM_LONG(direction)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &text_param, &direction_param);
	
            ns_text_set_writing_direction((uintptr_t) text, (int) direction);
        
}

PHP_METHOD(AppKit_NS_NSText_NSText, getWritingDirection)
{
	zval *text_param = NULL;
	zend_long text, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(text)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &text_param);
	
            value = (zend_long) ns_text_get_writing_direction((uintptr_t) text);
        
	RETURN_LONG(value);
}

PHP_METHOD(AppKit_NS_NSText_NSText, setSelectedRange)
{
	zval *text_param = NULL, *location_param = NULL, *length_param = NULL;
	zend_long text, location, length;

	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(text)
		Z_PARAM_LONG(location)
		Z_PARAM_LONG(length)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &text_param, &location_param, &length_param);
	
            ns_text_set_selected_range((uintptr_t) text, (int) location, (int) length);
        
}

/**
 * @return array [location, length]
 */
PHP_METHOD(AppKit_NS_NSText_NSText, getSelectedRange)
{
	zval out;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *text_param = NULL;
	zend_long text;

	ZVAL_UNDEF(&out);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(text)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &text_param);
	ZEPHIR_INIT_VAR(&out);
	array_init(&out);
	
            int location = 0, length = 0;
            ns_text_get_selected_range((uintptr_t) text, &location, &length);
            add_next_index_long(&out, location);
            add_next_index_long(&out, length);
        
	RETURN_CTOR(&out);
}

PHP_METHOD(AppKit_NS_NSText_NSText, sizeToFit)
{
	zval *text_param = NULL;
	zend_long text;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(text)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &text_param);
	
            ns_text_size_to_fit((uintptr_t) text);
        
}

