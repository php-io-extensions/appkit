
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
#include "src/ns-font.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"
#include "kernel/string.h"


ZEPHIR_INIT_CLASS(AppKit_NS_NSFont_NSFont)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSFont, NSFont, appkit, ns_nsfont_nsfont, appkit_ns_nsfont_nsfont_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSFont_NSFont, fontWithNameSize)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	double fontSize;
	zval *fontName_param = NULL, *fontSize_param = NULL, _0;
	zval fontName;

	ZVAL_UNDEF(&fontName);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_STR(fontName)
		Z_PARAM_ZVAL(fontSize)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &fontName_param, &fontSize_param);
	zephir_get_strval(&fontName, fontName_param);
	fontSize = zephir_get_doubleval(fontSize_param);
	ZVAL_DOUBLE(&_0, fontSize);
	RETURN_MM_LONG(ns_nsfont_font_with_name_size(&fontName, &_0));
}

PHP_METHOD(AppKit_NS_NSFont_NSFont, fontWithDescriptorSize)
{
	double fontSize;
	zval *fontDescriptor_param = NULL, *fontSize_param = NULL, _0, _1;
	zend_long fontDescriptor;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(fontDescriptor)
		Z_PARAM_ZVAL(fontSize)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &fontDescriptor_param, &fontSize_param);
	fontSize = zephir_get_doubleval(fontSize_param);
	ZVAL_LONG(&_0, fontDescriptor);
	ZVAL_DOUBLE(&_1, fontSize);
	RETURN_LONG(ns_nsfont_font_with_descriptor_size(&_0, &_1));
}

PHP_METHOD(AppKit_NS_NSFont_NSFont, fontWithDescriptorTextTransform)
{
	zval *fontDescriptor_param = NULL, *textTransform_param = NULL, _0, _1;
	zend_long fontDescriptor, textTransform;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(fontDescriptor)
		Z_PARAM_LONG(textTransform)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &fontDescriptor_param, &textTransform_param);
	ZVAL_LONG(&_0, fontDescriptor);
	ZVAL_LONG(&_1, textTransform);
	RETURN_LONG(ns_nsfont_font_with_descriptor_text_transform(&_0, &_1));
}

PHP_METHOD(AppKit_NS_NSFont_NSFont, userFontOfSize)
{
	zval *fontSize_param = NULL, _0;
	double fontSize;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ZVAL(fontSize)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &fontSize_param);
	fontSize = zephir_get_doubleval(fontSize_param);
	ZVAL_DOUBLE(&_0, fontSize);
	RETURN_LONG(ns_nsfont_user_font_of_size(&_0));
}

PHP_METHOD(AppKit_NS_NSFont_NSFont, userFixedPitchFontOfSize)
{
	zval *fontSize_param = NULL, _0;
	double fontSize;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ZVAL(fontSize)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &fontSize_param);
	fontSize = zephir_get_doubleval(fontSize_param);
	ZVAL_DOUBLE(&_0, fontSize);
	RETURN_LONG(ns_nsfont_user_fixed_pitch_font_of_size(&_0));
}

PHP_METHOD(AppKit_NS_NSFont_NSFont, setUserFont)
{
	zval *font_param = NULL, _0;
	zend_long font;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(font)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &font_param);
	ZVAL_LONG(&_0, font);
	ns_nsfont_set_user_font(&_0);
}

PHP_METHOD(AppKit_NS_NSFont_NSFont, setUserFixedPitchFont)
{
	zval *font_param = NULL, _0;
	zend_long font;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(font)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &font_param);
	ZVAL_LONG(&_0, font);
	ns_nsfont_set_user_fixed_pitch_font(&_0);
}

PHP_METHOD(AppKit_NS_NSFont_NSFont, systemFontOfSize)
{
	zval *fontSize_param = NULL, _0;
	double fontSize;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ZVAL(fontSize)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &fontSize_param);
	fontSize = zephir_get_doubleval(fontSize_param);
	ZVAL_DOUBLE(&_0, fontSize);
	RETURN_LONG(ns_nsfont_system_font_of_size(&_0));
}

PHP_METHOD(AppKit_NS_NSFont_NSFont, boldSystemFontOfSize)
{
	zval *fontSize_param = NULL, _0;
	double fontSize;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ZVAL(fontSize)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &fontSize_param);
	fontSize = zephir_get_doubleval(fontSize_param);
	ZVAL_DOUBLE(&_0, fontSize);
	RETURN_LONG(ns_nsfont_bold_system_font_of_size(&_0));
}

PHP_METHOD(AppKit_NS_NSFont_NSFont, labelFontOfSize)
{
	zval *fontSize_param = NULL, _0;
	double fontSize;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ZVAL(fontSize)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &fontSize_param);
	fontSize = zephir_get_doubleval(fontSize_param);
	ZVAL_DOUBLE(&_0, fontSize);
	RETURN_LONG(ns_nsfont_label_font_of_size(&_0));
}

PHP_METHOD(AppKit_NS_NSFont_NSFont, titleBarFontOfSize)
{
	zval *fontSize_param = NULL, _0;
	double fontSize;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ZVAL(fontSize)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &fontSize_param);
	fontSize = zephir_get_doubleval(fontSize_param);
	ZVAL_DOUBLE(&_0, fontSize);
	RETURN_LONG(ns_nsfont_title_bar_font_of_size(&_0));
}

PHP_METHOD(AppKit_NS_NSFont_NSFont, menuFontOfSize)
{
	zval *fontSize_param = NULL, _0;
	double fontSize;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ZVAL(fontSize)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &fontSize_param);
	fontSize = zephir_get_doubleval(fontSize_param);
	ZVAL_DOUBLE(&_0, fontSize);
	RETURN_LONG(ns_nsfont_menu_font_of_size(&_0));
}

PHP_METHOD(AppKit_NS_NSFont_NSFont, menuBarFontOfSize)
{
	zval *fontSize_param = NULL, _0;
	double fontSize;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ZVAL(fontSize)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &fontSize_param);
	fontSize = zephir_get_doubleval(fontSize_param);
	ZVAL_DOUBLE(&_0, fontSize);
	RETURN_LONG(ns_nsfont_menu_bar_font_of_size(&_0));
}

PHP_METHOD(AppKit_NS_NSFont_NSFont, messageFontOfSize)
{
	zval *fontSize_param = NULL, _0;
	double fontSize;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ZVAL(fontSize)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &fontSize_param);
	fontSize = zephir_get_doubleval(fontSize_param);
	ZVAL_DOUBLE(&_0, fontSize);
	RETURN_LONG(ns_nsfont_message_font_of_size(&_0));
}

PHP_METHOD(AppKit_NS_NSFont_NSFont, paletteFontOfSize)
{
	zval *fontSize_param = NULL, _0;
	double fontSize;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ZVAL(fontSize)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &fontSize_param);
	fontSize = zephir_get_doubleval(fontSize_param);
	ZVAL_DOUBLE(&_0, fontSize);
	RETURN_LONG(ns_nsfont_palette_font_of_size(&_0));
}

PHP_METHOD(AppKit_NS_NSFont_NSFont, toolTipsFontOfSize)
{
	zval *fontSize_param = NULL, _0;
	double fontSize;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ZVAL(fontSize)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &fontSize_param);
	fontSize = zephir_get_doubleval(fontSize_param);
	ZVAL_DOUBLE(&_0, fontSize);
	RETURN_LONG(ns_nsfont_tool_tips_font_of_size(&_0));
}

PHP_METHOD(AppKit_NS_NSFont_NSFont, controlContentFontOfSize)
{
	zval *fontSize_param = NULL, _0;
	double fontSize;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ZVAL(fontSize)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &fontSize_param);
	fontSize = zephir_get_doubleval(fontSize_param);
	ZVAL_DOUBLE(&_0, fontSize);
	RETURN_LONG(ns_nsfont_control_content_font_of_size(&_0));
}

PHP_METHOD(AppKit_NS_NSFont_NSFont, systemFontOfSizeWeight)
{
	zval *fontSize_param = NULL, *weight_param = NULL, _0, _1;
	double fontSize, weight;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_ZVAL(fontSize)
		Z_PARAM_ZVAL(weight)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &fontSize_param, &weight_param);
	fontSize = zephir_get_doubleval(fontSize_param);
	weight = zephir_get_doubleval(weight_param);
	ZVAL_DOUBLE(&_0, fontSize);
	ZVAL_DOUBLE(&_1, weight);
	RETURN_LONG(ns_nsfont_system_font_of_size_weight(&_0, &_1));
}

PHP_METHOD(AppKit_NS_NSFont_NSFont, monospacedDigitSystemFontOfSizeWeight)
{
	zval *fontSize_param = NULL, *weight_param = NULL, _0, _1;
	double fontSize, weight;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_ZVAL(fontSize)
		Z_PARAM_ZVAL(weight)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &fontSize_param, &weight_param);
	fontSize = zephir_get_doubleval(fontSize_param);
	weight = zephir_get_doubleval(weight_param);
	ZVAL_DOUBLE(&_0, fontSize);
	ZVAL_DOUBLE(&_1, weight);
	RETURN_LONG(ns_nsfont_monospaced_digit_system_font_of_size_weight(&_0, &_1));
}

PHP_METHOD(AppKit_NS_NSFont_NSFont, systemFontOfSizeWeightWidth)
{
	zval *fontSize_param = NULL, *weight_param = NULL, *width_param = NULL, _0, _1, _2;
	double fontSize, weight, width;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_ZVAL(fontSize)
		Z_PARAM_ZVAL(weight)
		Z_PARAM_ZVAL(width)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &fontSize_param, &weight_param, &width_param);
	fontSize = zephir_get_doubleval(fontSize_param);
	weight = zephir_get_doubleval(weight_param);
	width = zephir_get_doubleval(width_param);
	ZVAL_DOUBLE(&_0, fontSize);
	ZVAL_DOUBLE(&_1, weight);
	ZVAL_DOUBLE(&_2, width);
	RETURN_LONG(ns_nsfont_system_font_of_size_weight_width(&_0, &_1, &_2));
}

PHP_METHOD(AppKit_NS_NSFont_NSFont, monospacedSystemFontOfSizeWeight)
{
	zval *fontSize_param = NULL, *weight_param = NULL, _0, _1;
	double fontSize, weight;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_ZVAL(fontSize)
		Z_PARAM_ZVAL(weight)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &fontSize_param, &weight_param);
	fontSize = zephir_get_doubleval(fontSize_param);
	weight = zephir_get_doubleval(weight_param);
	ZVAL_DOUBLE(&_0, fontSize);
	ZVAL_DOUBLE(&_1, weight);
	RETURN_LONG(ns_nsfont_monospaced_system_font_of_size_weight(&_0, &_1));
}

PHP_METHOD(AppKit_NS_NSFont_NSFont, fontWithSize)
{
	double fontSize;
	zval *handle_param = NULL, *fontSize_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(fontSize)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &fontSize_param);
	fontSize = zephir_get_doubleval(fontSize_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, fontSize);
	RETURN_LONG(ns_nsfont_font_with_size(&_0, &_1));
}

PHP_METHOD(AppKit_NS_NSFont_NSFont, systemFontSize)
{

	RETURN_DOUBLE(ns_nsfont_system_font_size());
}

PHP_METHOD(AppKit_NS_NSFont_NSFont, smallSystemFontSize)
{

	RETURN_DOUBLE(ns_nsfont_small_system_font_size());
}

PHP_METHOD(AppKit_NS_NSFont_NSFont, labelFontSize)
{

	RETURN_DOUBLE(ns_nsfont_label_font_size());
}

PHP_METHOD(AppKit_NS_NSFont_NSFont, systemFontSizeForControlSize)
{
	zval *controlSize_param = NULL, _0;
	zend_long controlSize;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controlSize)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controlSize_param);
	ZVAL_LONG(&_0, controlSize);
	RETURN_DOUBLE(ns_nsfont_system_font_size_for_control_size(&_0));
}

PHP_METHOD(AppKit_NS_NSFont_NSFont, fontName)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &handle_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ns_nsfont_font_name(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSFont_NSFont, pointSize)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(ns_nsfont_point_size(&_0));
}

PHP_METHOD(AppKit_NS_NSFont_NSFont, familyName)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &handle_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ns_nsfont_family_name(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSFont_NSFont, displayName)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &handle_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ns_nsfont_display_name(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSFont_NSFont, fontDescriptor)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsfont_font_descriptor(&_0));
}

PHP_METHOD(AppKit_NS_NSFont_NSFont, textTransform)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsfont_text_transform(&_0));
}

PHP_METHOD(AppKit_NS_NSFont_NSFont, numberOfGlyphs)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsfont_number_of_glyphs(&_0));
}

PHP_METHOD(AppKit_NS_NSFont_NSFont, mostCompatibleStringEncoding)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsfont_most_compatible_string_encoding(&_0));
}

PHP_METHOD(AppKit_NS_NSFont_NSFont, coveredCharacterSet)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsfont_covered_character_set(&_0));
}

PHP_METHOD(AppKit_NS_NSFont_NSFont, boundingRectForFont)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &handle_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ns_nsfont_bounding_rect_for_font(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSFont_NSFont, maximumAdvancement)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &handle_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ns_nsfont_maximum_advancement(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSFont_NSFont, ascender)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(ns_nsfont_ascender(&_0));
}

PHP_METHOD(AppKit_NS_NSFont_NSFont, descender)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(ns_nsfont_descender(&_0));
}

PHP_METHOD(AppKit_NS_NSFont_NSFont, leading)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(ns_nsfont_leading(&_0));
}

PHP_METHOD(AppKit_NS_NSFont_NSFont, underlinePosition)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(ns_nsfont_underline_position(&_0));
}

PHP_METHOD(AppKit_NS_NSFont_NSFont, underlineThickness)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(ns_nsfont_underline_thickness(&_0));
}

PHP_METHOD(AppKit_NS_NSFont_NSFont, italicAngle)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(ns_nsfont_italic_angle(&_0));
}

PHP_METHOD(AppKit_NS_NSFont_NSFont, capHeight)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(ns_nsfont_cap_height(&_0));
}

PHP_METHOD(AppKit_NS_NSFont_NSFont, xHeight)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(ns_nsfont_x_height(&_0));
}

PHP_METHOD(AppKit_NS_NSFont_NSFont, isFixedPitch)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nsfont_is_fixed_pitch(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSFont_NSFont, boundingRectForCGGlyph)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *glyph_param = NULL, result, _0, _1;
	zend_long handle, glyph;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(glyph)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &glyph_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, glyph);
	ns_nsfont_bounding_rect_for_cg_glyph(&result, &_0, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSFont_NSFont, advancementForCGGlyph)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *glyph_param = NULL, result, _0, _1;
	zend_long handle, glyph;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(glyph)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &glyph_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, glyph);
	ns_nsfont_advancement_for_cg_glyph(&result, &_0, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSFont_NSFont, set)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	ns_nsfont_set(&_0);
}

PHP_METHOD(AppKit_NS_NSFont_NSFont, setInContext)
{
	zval *handle_param = NULL, *graphicsContext_param = NULL, _0, _1;
	zend_long handle, graphicsContext;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(graphicsContext)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &graphicsContext_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, graphicsContext);
	ns_nsfont_set_in_context(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSFont_NSFont, verticalFont)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsfont_vertical_font(&_0));
}

PHP_METHOD(AppKit_NS_NSFont_NSFont, isVertical)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nsfont_is_vertical(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSFont_NSFont, glyphWithName)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval name;
	zval *handle_param = NULL, *name_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&name);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(name)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &name_param);
	zephir_get_strval(&name, name_param);
	ZVAL_LONG(&_0, handle);
	RETURN_MM_LONG(ns_nsfont_glyph_with_name(&_0, &name));
}

PHP_METHOD(AppKit_NS_NSFont_NSFont, boundingRectForGlyph)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *glyph_param = NULL, result, _0, _1;
	zend_long handle, glyph;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(glyph)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &glyph_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, glyph);
	ns_nsfont_bounding_rect_for_glyph(&result, &_0, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSFont_NSFont, advancementForGlyph)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *glyph_param = NULL, result, _0, _1;
	zend_long handle, glyph;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(glyph)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &glyph_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, glyph);
	ns_nsfont_advancement_for_glyph(&result, &_0, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSFont_NSFont, printerFont)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsfont_printer_font(&_0));
}

PHP_METHOD(AppKit_NS_NSFont_NSFont, screenFont)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsfont_screen_font(&_0));
}

PHP_METHOD(AppKit_NS_NSFont_NSFont, screenFontWithRenderingMode)
{
	zval *handle_param = NULL, *renderingMode_param = NULL, _0, _1;
	zend_long handle, renderingMode;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(renderingMode)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &renderingMode_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, renderingMode);
	RETURN_LONG(ns_nsfont_screen_font_with_rendering_mode(&_0, &_1));
}

PHP_METHOD(AppKit_NS_NSFont_NSFont, renderingMode)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsfont_rendering_mode(&_0));
}

PHP_METHOD(AppKit_NS_NSFont_NSFont, preferredFontForTextStyleOptions)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *style_param = NULL, *options = NULL, options_sub;
	zval style;

	ZVAL_UNDEF(&style);
	ZVAL_UNDEF(&options_sub);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_STR(style)
		Z_PARAM_ZVAL(options)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &style_param, &options);
	zephir_get_strval(&style, style_param);
	RETURN_MM_LONG(ns_nsfont_preferred_font_for_text_style_options(&style, options));
}

