
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
#include "src/ns-color.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/string.h"


ZEPHIR_INIT_CLASS(AppKit_NS_NSColor_NSColor)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSColor, NSColor, appkit, ns_nscolor_nscolor, appkit_ns_nscolor_nscolor_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSColor_NSColor, init)
{

	RETURN_LONG(ns_nscolor_init());
}

PHP_METHOD(AppKit_NS_NSColor_NSColor, colorWithSRGBRedGreenBlueAlpha)
{
	zval *red_param = NULL, *green_param = NULL, *blue_param = NULL, *alpha_param = NULL, _0, _1, _2, _3;
	double red, green, blue, alpha;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_ZVAL(red)
		Z_PARAM_ZVAL(green)
		Z_PARAM_ZVAL(blue)
		Z_PARAM_ZVAL(alpha)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &red_param, &green_param, &blue_param, &alpha_param);
	red = zephir_get_doubleval(red_param);
	green = zephir_get_doubleval(green_param);
	blue = zephir_get_doubleval(blue_param);
	alpha = zephir_get_doubleval(alpha_param);
	ZVAL_DOUBLE(&_0, red);
	ZVAL_DOUBLE(&_1, green);
	ZVAL_DOUBLE(&_2, blue);
	ZVAL_DOUBLE(&_3, alpha);
	RETURN_LONG(ns_nscolor_color_with_srgb_red_green_blue_alpha(&_0, &_1, &_2, &_3));
}

PHP_METHOD(AppKit_NS_NSColor_NSColor, colorWithGenericGamma22WhiteAlpha)
{
	zval *white_param = NULL, *alpha_param = NULL, _0, _1;
	double white, alpha;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_ZVAL(white)
		Z_PARAM_ZVAL(alpha)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &white_param, &alpha_param);
	white = zephir_get_doubleval(white_param);
	alpha = zephir_get_doubleval(alpha_param);
	ZVAL_DOUBLE(&_0, white);
	ZVAL_DOUBLE(&_1, alpha);
	RETURN_LONG(ns_nscolor_color_with_generic_gamma22_white_alpha(&_0, &_1));
}

PHP_METHOD(AppKit_NS_NSColor_NSColor, colorWithDisplayP3RedGreenBlueAlpha)
{
	zval *red_param = NULL, *green_param = NULL, *blue_param = NULL, *alpha_param = NULL, _0, _1, _2, _3;
	double red, green, blue, alpha;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_ZVAL(red)
		Z_PARAM_ZVAL(green)
		Z_PARAM_ZVAL(blue)
		Z_PARAM_ZVAL(alpha)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &red_param, &green_param, &blue_param, &alpha_param);
	red = zephir_get_doubleval(red_param);
	green = zephir_get_doubleval(green_param);
	blue = zephir_get_doubleval(blue_param);
	alpha = zephir_get_doubleval(alpha_param);
	ZVAL_DOUBLE(&_0, red);
	ZVAL_DOUBLE(&_1, green);
	ZVAL_DOUBLE(&_2, blue);
	ZVAL_DOUBLE(&_3, alpha);
	RETURN_LONG(ns_nscolor_color_with_display_p3_red_green_blue_alpha(&_0, &_1, &_2, &_3));
}

PHP_METHOD(AppKit_NS_NSColor_NSColor, colorWithWhiteAlpha)
{
	zval *white_param = NULL, *alpha_param = NULL, _0, _1;
	double white, alpha;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_ZVAL(white)
		Z_PARAM_ZVAL(alpha)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &white_param, &alpha_param);
	white = zephir_get_doubleval(white_param);
	alpha = zephir_get_doubleval(alpha_param);
	ZVAL_DOUBLE(&_0, white);
	ZVAL_DOUBLE(&_1, alpha);
	RETURN_LONG(ns_nscolor_color_with_white_alpha(&_0, &_1));
}

PHP_METHOD(AppKit_NS_NSColor_NSColor, colorWithRedGreenBlueAlpha)
{
	zval *red_param = NULL, *green_param = NULL, *blue_param = NULL, *alpha_param = NULL, _0, _1, _2, _3;
	double red, green, blue, alpha;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_ZVAL(red)
		Z_PARAM_ZVAL(green)
		Z_PARAM_ZVAL(blue)
		Z_PARAM_ZVAL(alpha)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &red_param, &green_param, &blue_param, &alpha_param);
	red = zephir_get_doubleval(red_param);
	green = zephir_get_doubleval(green_param);
	blue = zephir_get_doubleval(blue_param);
	alpha = zephir_get_doubleval(alpha_param);
	ZVAL_DOUBLE(&_0, red);
	ZVAL_DOUBLE(&_1, green);
	ZVAL_DOUBLE(&_2, blue);
	ZVAL_DOUBLE(&_3, alpha);
	RETURN_LONG(ns_nscolor_color_with_red_green_blue_alpha(&_0, &_1, &_2, &_3));
}

PHP_METHOD(AppKit_NS_NSColor_NSColor, colorWithHueSaturationBrightnessAlpha)
{
	zval *hue_param = NULL, *saturation_param = NULL, *brightness_param = NULL, *alpha_param = NULL, _0, _1, _2, _3;
	double hue, saturation, brightness, alpha;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_ZVAL(hue)
		Z_PARAM_ZVAL(saturation)
		Z_PARAM_ZVAL(brightness)
		Z_PARAM_ZVAL(alpha)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &hue_param, &saturation_param, &brightness_param, &alpha_param);
	hue = zephir_get_doubleval(hue_param);
	saturation = zephir_get_doubleval(saturation_param);
	brightness = zephir_get_doubleval(brightness_param);
	alpha = zephir_get_doubleval(alpha_param);
	ZVAL_DOUBLE(&_0, hue);
	ZVAL_DOUBLE(&_1, saturation);
	ZVAL_DOUBLE(&_2, brightness);
	ZVAL_DOUBLE(&_3, alpha);
	RETURN_LONG(ns_nscolor_color_with_hue_saturation_brightness_alpha(&_0, &_1, &_2, &_3));
}

PHP_METHOD(AppKit_NS_NSColor_NSColor, colorWithColorSpaceHueSaturationBrightnessAlpha)
{
	double hue, saturation, brightness, alpha;
	zval *space_param = NULL, *hue_param = NULL, *saturation_param = NULL, *brightness_param = NULL, *alpha_param = NULL, _0, _1, _2, _3, _4;
	zend_long space;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(space)
		Z_PARAM_ZVAL(hue)
		Z_PARAM_ZVAL(saturation)
		Z_PARAM_ZVAL(brightness)
		Z_PARAM_ZVAL(alpha)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &space_param, &hue_param, &saturation_param, &brightness_param, &alpha_param);
	hue = zephir_get_doubleval(hue_param);
	saturation = zephir_get_doubleval(saturation_param);
	brightness = zephir_get_doubleval(brightness_param);
	alpha = zephir_get_doubleval(alpha_param);
	ZVAL_LONG(&_0, space);
	ZVAL_DOUBLE(&_1, hue);
	ZVAL_DOUBLE(&_2, saturation);
	ZVAL_DOUBLE(&_3, brightness);
	ZVAL_DOUBLE(&_4, alpha);
	RETURN_LONG(ns_nscolor_color_with_color_space_hue_saturation_brightness_alpha(&_0, &_1, &_2, &_3, &_4));
}

PHP_METHOD(AppKit_NS_NSColor_NSColor, colorWithCatalogNameColorName)
{
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
	RETURN_MM_LONG(ns_nscolor_color_with_catalog_name_color_name(&listName, &colorName));
}

PHP_METHOD(AppKit_NS_NSColor_NSColor, colorNamedBundle)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long bundle;
	zval *name_param = NULL, *bundle_param = NULL, _0;
	zval name;

	ZVAL_UNDEF(&name);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_STR(name)
		Z_PARAM_LONG(bundle)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &name_param, &bundle_param);
	zephir_get_strval(&name, name_param);
	ZVAL_LONG(&_0, bundle);
	RETURN_MM_LONG(ns_nscolor_color_named_bundle(&name, &_0));
}

PHP_METHOD(AppKit_NS_NSColor_NSColor, colorNamed)
{
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
	RETURN_MM_LONG(ns_nscolor_color_named(&name));
}

PHP_METHOD(AppKit_NS_NSColor_NSColor, colorWithDeviceWhiteAlpha)
{
	zval *white_param = NULL, *alpha_param = NULL, _0, _1;
	double white, alpha;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_ZVAL(white)
		Z_PARAM_ZVAL(alpha)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &white_param, &alpha_param);
	white = zephir_get_doubleval(white_param);
	alpha = zephir_get_doubleval(alpha_param);
	ZVAL_DOUBLE(&_0, white);
	ZVAL_DOUBLE(&_1, alpha);
	RETURN_LONG(ns_nscolor_color_with_device_white_alpha(&_0, &_1));
}

PHP_METHOD(AppKit_NS_NSColor_NSColor, colorWithDeviceRedGreenBlueAlpha)
{
	zval *red_param = NULL, *green_param = NULL, *blue_param = NULL, *alpha_param = NULL, _0, _1, _2, _3;
	double red, green, blue, alpha;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_ZVAL(red)
		Z_PARAM_ZVAL(green)
		Z_PARAM_ZVAL(blue)
		Z_PARAM_ZVAL(alpha)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &red_param, &green_param, &blue_param, &alpha_param);
	red = zephir_get_doubleval(red_param);
	green = zephir_get_doubleval(green_param);
	blue = zephir_get_doubleval(blue_param);
	alpha = zephir_get_doubleval(alpha_param);
	ZVAL_DOUBLE(&_0, red);
	ZVAL_DOUBLE(&_1, green);
	ZVAL_DOUBLE(&_2, blue);
	ZVAL_DOUBLE(&_3, alpha);
	RETURN_LONG(ns_nscolor_color_with_device_red_green_blue_alpha(&_0, &_1, &_2, &_3));
}

PHP_METHOD(AppKit_NS_NSColor_NSColor, colorWithDeviceHueSaturationBrightnessAlpha)
{
	zval *hue_param = NULL, *saturation_param = NULL, *brightness_param = NULL, *alpha_param = NULL, _0, _1, _2, _3;
	double hue, saturation, brightness, alpha;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_ZVAL(hue)
		Z_PARAM_ZVAL(saturation)
		Z_PARAM_ZVAL(brightness)
		Z_PARAM_ZVAL(alpha)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &hue_param, &saturation_param, &brightness_param, &alpha_param);
	hue = zephir_get_doubleval(hue_param);
	saturation = zephir_get_doubleval(saturation_param);
	brightness = zephir_get_doubleval(brightness_param);
	alpha = zephir_get_doubleval(alpha_param);
	ZVAL_DOUBLE(&_0, hue);
	ZVAL_DOUBLE(&_1, saturation);
	ZVAL_DOUBLE(&_2, brightness);
	ZVAL_DOUBLE(&_3, alpha);
	RETURN_LONG(ns_nscolor_color_with_device_hue_saturation_brightness_alpha(&_0, &_1, &_2, &_3));
}

PHP_METHOD(AppKit_NS_NSColor_NSColor, colorWithDeviceCyanMagentaYellowBlackAlpha)
{
	zval *cyan_param = NULL, *magenta_param = NULL, *yellow_param = NULL, *black_param = NULL, *alpha_param = NULL, _0, _1, _2, _3, _4;
	double cyan, magenta, yellow, black, alpha;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_ZVAL(cyan)
		Z_PARAM_ZVAL(magenta)
		Z_PARAM_ZVAL(yellow)
		Z_PARAM_ZVAL(black)
		Z_PARAM_ZVAL(alpha)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &cyan_param, &magenta_param, &yellow_param, &black_param, &alpha_param);
	cyan = zephir_get_doubleval(cyan_param);
	magenta = zephir_get_doubleval(magenta_param);
	yellow = zephir_get_doubleval(yellow_param);
	black = zephir_get_doubleval(black_param);
	alpha = zephir_get_doubleval(alpha_param);
	ZVAL_DOUBLE(&_0, cyan);
	ZVAL_DOUBLE(&_1, magenta);
	ZVAL_DOUBLE(&_2, yellow);
	ZVAL_DOUBLE(&_3, black);
	ZVAL_DOUBLE(&_4, alpha);
	RETURN_LONG(ns_nscolor_color_with_device_cyan_magenta_yellow_black_alpha(&_0, &_1, &_2, &_3, &_4));
}

PHP_METHOD(AppKit_NS_NSColor_NSColor, colorWithCalibratedWhiteAlpha)
{
	zval *white_param = NULL, *alpha_param = NULL, _0, _1;
	double white, alpha;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_ZVAL(white)
		Z_PARAM_ZVAL(alpha)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &white_param, &alpha_param);
	white = zephir_get_doubleval(white_param);
	alpha = zephir_get_doubleval(alpha_param);
	ZVAL_DOUBLE(&_0, white);
	ZVAL_DOUBLE(&_1, alpha);
	RETURN_LONG(ns_nscolor_color_with_calibrated_white_alpha(&_0, &_1));
}

PHP_METHOD(AppKit_NS_NSColor_NSColor, colorWithCalibratedRedGreenBlueAlpha)
{
	zval *red_param = NULL, *green_param = NULL, *blue_param = NULL, *alpha_param = NULL, _0, _1, _2, _3;
	double red, green, blue, alpha;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_ZVAL(red)
		Z_PARAM_ZVAL(green)
		Z_PARAM_ZVAL(blue)
		Z_PARAM_ZVAL(alpha)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &red_param, &green_param, &blue_param, &alpha_param);
	red = zephir_get_doubleval(red_param);
	green = zephir_get_doubleval(green_param);
	blue = zephir_get_doubleval(blue_param);
	alpha = zephir_get_doubleval(alpha_param);
	ZVAL_DOUBLE(&_0, red);
	ZVAL_DOUBLE(&_1, green);
	ZVAL_DOUBLE(&_2, blue);
	ZVAL_DOUBLE(&_3, alpha);
	RETURN_LONG(ns_nscolor_color_with_calibrated_red_green_blue_alpha(&_0, &_1, &_2, &_3));
}

PHP_METHOD(AppKit_NS_NSColor_NSColor, colorWithCalibratedHueSaturationBrightnessAlpha)
{
	zval *hue_param = NULL, *saturation_param = NULL, *brightness_param = NULL, *alpha_param = NULL, _0, _1, _2, _3;
	double hue, saturation, brightness, alpha;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_ZVAL(hue)
		Z_PARAM_ZVAL(saturation)
		Z_PARAM_ZVAL(brightness)
		Z_PARAM_ZVAL(alpha)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &hue_param, &saturation_param, &brightness_param, &alpha_param);
	hue = zephir_get_doubleval(hue_param);
	saturation = zephir_get_doubleval(saturation_param);
	brightness = zephir_get_doubleval(brightness_param);
	alpha = zephir_get_doubleval(alpha_param);
	ZVAL_DOUBLE(&_0, hue);
	ZVAL_DOUBLE(&_1, saturation);
	ZVAL_DOUBLE(&_2, brightness);
	ZVAL_DOUBLE(&_3, alpha);
	RETURN_LONG(ns_nscolor_color_with_calibrated_hue_saturation_brightness_alpha(&_0, &_1, &_2, &_3));
}

PHP_METHOD(AppKit_NS_NSColor_NSColor, colorWithPatternImage)
{
	zval *image_param = NULL, _0;
	zend_long image;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(image)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &image_param);
	ZVAL_LONG(&_0, image);
	RETURN_LONG(ns_nscolor_color_with_pattern_image(&_0));
}

PHP_METHOD(AppKit_NS_NSColor_NSColor, type)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nscolor_type(&_0));
}

PHP_METHOD(AppKit_NS_NSColor_NSColor, colorUsingType)
{
	zval *handle_param = NULL, *type_param = NULL, _0, _1;
	zend_long handle, type;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(type)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &type_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, type);
	RETURN_LONG(ns_nscolor_color_using_type(&_0, &_1));
}

PHP_METHOD(AppKit_NS_NSColor_NSColor, colorUsingColorSpace)
{
	zval *handle_param = NULL, *space_param = NULL, _0, _1;
	zend_long handle, space;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(space)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &space_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, space);
	RETURN_LONG(ns_nscolor_color_using_color_space(&_0, &_1));
}

PHP_METHOD(AppKit_NS_NSColor_NSColor, blackColor)
{

	RETURN_LONG(ns_nscolor_black_color());
}

PHP_METHOD(AppKit_NS_NSColor_NSColor, darkGrayColor)
{

	RETURN_LONG(ns_nscolor_dark_gray_color());
}

PHP_METHOD(AppKit_NS_NSColor_NSColor, lightGrayColor)
{

	RETURN_LONG(ns_nscolor_light_gray_color());
}

PHP_METHOD(AppKit_NS_NSColor_NSColor, whiteColor)
{

	RETURN_LONG(ns_nscolor_white_color());
}

PHP_METHOD(AppKit_NS_NSColor_NSColor, grayColor)
{

	RETURN_LONG(ns_nscolor_gray_color());
}

PHP_METHOD(AppKit_NS_NSColor_NSColor, redColor)
{

	RETURN_LONG(ns_nscolor_red_color());
}

PHP_METHOD(AppKit_NS_NSColor_NSColor, greenColor)
{

	RETURN_LONG(ns_nscolor_green_color());
}

PHP_METHOD(AppKit_NS_NSColor_NSColor, blueColor)
{

	RETURN_LONG(ns_nscolor_blue_color());
}

PHP_METHOD(AppKit_NS_NSColor_NSColor, cyanColor)
{

	RETURN_LONG(ns_nscolor_cyan_color());
}

PHP_METHOD(AppKit_NS_NSColor_NSColor, yellowColor)
{

	RETURN_LONG(ns_nscolor_yellow_color());
}

PHP_METHOD(AppKit_NS_NSColor_NSColor, magentaColor)
{

	RETURN_LONG(ns_nscolor_magenta_color());
}

PHP_METHOD(AppKit_NS_NSColor_NSColor, orangeColor)
{

	RETURN_LONG(ns_nscolor_orange_color());
}

PHP_METHOD(AppKit_NS_NSColor_NSColor, purpleColor)
{

	RETURN_LONG(ns_nscolor_purple_color());
}

PHP_METHOD(AppKit_NS_NSColor_NSColor, brownColor)
{

	RETURN_LONG(ns_nscolor_brown_color());
}

PHP_METHOD(AppKit_NS_NSColor_NSColor, clearColor)
{

	RETURN_LONG(ns_nscolor_clear_color());
}

PHP_METHOD(AppKit_NS_NSColor_NSColor, labelColor)
{

	RETURN_LONG(ns_nscolor_label_color());
}

PHP_METHOD(AppKit_NS_NSColor_NSColor, secondaryLabelColor)
{

	RETURN_LONG(ns_nscolor_secondary_label_color());
}

PHP_METHOD(AppKit_NS_NSColor_NSColor, tertiaryLabelColor)
{

	RETURN_LONG(ns_nscolor_tertiary_label_color());
}

PHP_METHOD(AppKit_NS_NSColor_NSColor, quaternaryLabelColor)
{

	RETURN_LONG(ns_nscolor_quaternary_label_color());
}

PHP_METHOD(AppKit_NS_NSColor_NSColor, quinaryLabelColor)
{

	RETURN_LONG(ns_nscolor_quinary_label_color());
}

PHP_METHOD(AppKit_NS_NSColor_NSColor, linkColor)
{

	RETURN_LONG(ns_nscolor_link_color());
}

PHP_METHOD(AppKit_NS_NSColor_NSColor, placeholderTextColor)
{

	RETURN_LONG(ns_nscolor_placeholder_text_color());
}

PHP_METHOD(AppKit_NS_NSColor_NSColor, windowFrameTextColor)
{

	RETURN_LONG(ns_nscolor_window_frame_text_color());
}

PHP_METHOD(AppKit_NS_NSColor_NSColor, selectedMenuItemTextColor)
{

	RETURN_LONG(ns_nscolor_selected_menu_item_text_color());
}

PHP_METHOD(AppKit_NS_NSColor_NSColor, alternateSelectedControlTextColor)
{

	RETURN_LONG(ns_nscolor_alternate_selected_control_text_color());
}

PHP_METHOD(AppKit_NS_NSColor_NSColor, headerTextColor)
{

	RETURN_LONG(ns_nscolor_header_text_color());
}

PHP_METHOD(AppKit_NS_NSColor_NSColor, separatorColor)
{

	RETURN_LONG(ns_nscolor_separator_color());
}

PHP_METHOD(AppKit_NS_NSColor_NSColor, gridColor)
{

	RETURN_LONG(ns_nscolor_grid_color());
}

PHP_METHOD(AppKit_NS_NSColor_NSColor, windowBackgroundColor)
{

	RETURN_LONG(ns_nscolor_window_background_color());
}

PHP_METHOD(AppKit_NS_NSColor_NSColor, underPageBackgroundColor)
{

	RETURN_LONG(ns_nscolor_under_page_background_color());
}

PHP_METHOD(AppKit_NS_NSColor_NSColor, controlBackgroundColor)
{

	RETURN_LONG(ns_nscolor_control_background_color());
}

PHP_METHOD(AppKit_NS_NSColor_NSColor, selectedContentBackgroundColor)
{

	RETURN_LONG(ns_nscolor_selected_content_background_color());
}

PHP_METHOD(AppKit_NS_NSColor_NSColor, unemphasizedSelectedContentBackgroundColor)
{

	RETURN_LONG(ns_nscolor_unemphasized_selected_content_background_color());
}

PHP_METHOD(AppKit_NS_NSColor_NSColor, alternatingContentBackgroundColors)
{
	zval result;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;

	ZVAL_UNDEF(&result);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

	ZEPHIR_INIT_VAR(&result);
	ns_nscolor_alternating_content_background_colors(&result);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSColor_NSColor, findHighlightColor)
{

	RETURN_LONG(ns_nscolor_find_highlight_color());
}

PHP_METHOD(AppKit_NS_NSColor_NSColor, textColor)
{

	RETURN_LONG(ns_nscolor_text_color());
}

PHP_METHOD(AppKit_NS_NSColor_NSColor, textBackgroundColor)
{

	RETURN_LONG(ns_nscolor_text_background_color());
}

PHP_METHOD(AppKit_NS_NSColor_NSColor, textInsertionPointColor)
{

	RETURN_LONG(ns_nscolor_text_insertion_point_color());
}

PHP_METHOD(AppKit_NS_NSColor_NSColor, selectedTextColor)
{

	RETURN_LONG(ns_nscolor_selected_text_color());
}

PHP_METHOD(AppKit_NS_NSColor_NSColor, selectedTextBackgroundColor)
{

	RETURN_LONG(ns_nscolor_selected_text_background_color());
}

PHP_METHOD(AppKit_NS_NSColor_NSColor, unemphasizedSelectedTextBackgroundColor)
{

	RETURN_LONG(ns_nscolor_unemphasized_selected_text_background_color());
}

PHP_METHOD(AppKit_NS_NSColor_NSColor, unemphasizedSelectedTextColor)
{

	RETURN_LONG(ns_nscolor_unemphasized_selected_text_color());
}

PHP_METHOD(AppKit_NS_NSColor_NSColor, controlColor)
{

	RETURN_LONG(ns_nscolor_control_color());
}

PHP_METHOD(AppKit_NS_NSColor_NSColor, controlTextColor)
{

	RETURN_LONG(ns_nscolor_control_text_color());
}

PHP_METHOD(AppKit_NS_NSColor_NSColor, selectedControlColor)
{

	RETURN_LONG(ns_nscolor_selected_control_color());
}

PHP_METHOD(AppKit_NS_NSColor_NSColor, selectedControlTextColor)
{

	RETURN_LONG(ns_nscolor_selected_control_text_color());
}

PHP_METHOD(AppKit_NS_NSColor_NSColor, disabledControlTextColor)
{

	RETURN_LONG(ns_nscolor_disabled_control_text_color());
}

PHP_METHOD(AppKit_NS_NSColor_NSColor, keyboardFocusIndicatorColor)
{

	RETURN_LONG(ns_nscolor_keyboard_focus_indicator_color());
}

PHP_METHOD(AppKit_NS_NSColor_NSColor, scrubberTexturedBackgroundColor)
{

	RETURN_LONG(ns_nscolor_scrubber_textured_background_color());
}

PHP_METHOD(AppKit_NS_NSColor_NSColor, systemRedColor)
{

	RETURN_LONG(ns_nscolor_system_red_color());
}

PHP_METHOD(AppKit_NS_NSColor_NSColor, systemGreenColor)
{

	RETURN_LONG(ns_nscolor_system_green_color());
}

PHP_METHOD(AppKit_NS_NSColor_NSColor, systemBlueColor)
{

	RETURN_LONG(ns_nscolor_system_blue_color());
}

PHP_METHOD(AppKit_NS_NSColor_NSColor, systemOrangeColor)
{

	RETURN_LONG(ns_nscolor_system_orange_color());
}

PHP_METHOD(AppKit_NS_NSColor_NSColor, systemYellowColor)
{

	RETURN_LONG(ns_nscolor_system_yellow_color());
}

PHP_METHOD(AppKit_NS_NSColor_NSColor, systemBrownColor)
{

	RETURN_LONG(ns_nscolor_system_brown_color());
}

PHP_METHOD(AppKit_NS_NSColor_NSColor, systemPinkColor)
{

	RETURN_LONG(ns_nscolor_system_pink_color());
}

PHP_METHOD(AppKit_NS_NSColor_NSColor, systemPurpleColor)
{

	RETURN_LONG(ns_nscolor_system_purple_color());
}

PHP_METHOD(AppKit_NS_NSColor_NSColor, systemGrayColor)
{

	RETURN_LONG(ns_nscolor_system_gray_color());
}

PHP_METHOD(AppKit_NS_NSColor_NSColor, systemTealColor)
{

	RETURN_LONG(ns_nscolor_system_teal_color());
}

PHP_METHOD(AppKit_NS_NSColor_NSColor, systemIndigoColor)
{

	RETURN_LONG(ns_nscolor_system_indigo_color());
}

PHP_METHOD(AppKit_NS_NSColor_NSColor, systemMintColor)
{

	RETURN_LONG(ns_nscolor_system_mint_color());
}

PHP_METHOD(AppKit_NS_NSColor_NSColor, systemCyanColor)
{

	RETURN_LONG(ns_nscolor_system_cyan_color());
}

PHP_METHOD(AppKit_NS_NSColor_NSColor, systemFillColor)
{

	RETURN_LONG(ns_nscolor_system_fill_color());
}

PHP_METHOD(AppKit_NS_NSColor_NSColor, secondarySystemFillColor)
{

	RETURN_LONG(ns_nscolor_secondary_system_fill_color());
}

PHP_METHOD(AppKit_NS_NSColor_NSColor, tertiarySystemFillColor)
{

	RETURN_LONG(ns_nscolor_tertiary_system_fill_color());
}

PHP_METHOD(AppKit_NS_NSColor_NSColor, quaternarySystemFillColor)
{

	RETURN_LONG(ns_nscolor_quaternary_system_fill_color());
}

PHP_METHOD(AppKit_NS_NSColor_NSColor, quinarySystemFillColor)
{

	RETURN_LONG(ns_nscolor_quinary_system_fill_color());
}

PHP_METHOD(AppKit_NS_NSColor_NSColor, controlAccentColor)
{

	RETURN_LONG(ns_nscolor_control_accent_color());
}

PHP_METHOD(AppKit_NS_NSColor_NSColor, currentControlTint)
{

	RETURN_LONG(ns_nscolor_current_control_tint());
}

PHP_METHOD(AppKit_NS_NSColor_NSColor, highlightColor)
{

	RETURN_LONG(ns_nscolor_highlight_color());
}

PHP_METHOD(AppKit_NS_NSColor_NSColor, shadowColor)
{

	RETURN_LONG(ns_nscolor_shadow_color());
}

PHP_METHOD(AppKit_NS_NSColor_NSColor, highlightWithLevel)
{
	double val;
	zval *handle_param = NULL, *val_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(val)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &val_param);
	val = zephir_get_doubleval(val_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, val);
	RETURN_LONG(ns_nscolor_highlight_with_level(&_0, &_1));
}

PHP_METHOD(AppKit_NS_NSColor_NSColor, shadowWithLevel)
{
	double val;
	zval *handle_param = NULL, *val_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(val)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &val_param);
	val = zephir_get_doubleval(val_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, val);
	RETURN_LONG(ns_nscolor_shadow_with_level(&_0, &_1));
}

PHP_METHOD(AppKit_NS_NSColor_NSColor, colorWithSystemEffect)
{
	zval *handle_param = NULL, *systemEffect_param = NULL, _0, _1;
	zend_long handle, systemEffect;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(systemEffect)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &systemEffect_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, systemEffect);
	RETURN_LONG(ns_nscolor_color_with_system_effect(&_0, &_1));
}

PHP_METHOD(AppKit_NS_NSColor_NSColor, set)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	ns_nscolor_set(&_0);
}

PHP_METHOD(AppKit_NS_NSColor_NSColor, setFill)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	ns_nscolor_set_fill(&_0);
}

PHP_METHOD(AppKit_NS_NSColor_NSColor, setStroke)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	ns_nscolor_set_stroke(&_0);
}

PHP_METHOD(AppKit_NS_NSColor_NSColor, blendedColorWithFractionOfColor)
{
	double fraction;
	zval *handle_param = NULL, *fraction_param = NULL, *color_param = NULL, _0, _1, _2;
	zend_long handle, color;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(fraction)
		Z_PARAM_LONG(color)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &fraction_param, &color_param);
	fraction = zephir_get_doubleval(fraction_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, fraction);
	ZVAL_LONG(&_2, color);
	RETURN_LONG(ns_nscolor_blended_color_with_fraction_of_color(&_0, &_1, &_2));
}

PHP_METHOD(AppKit_NS_NSColor_NSColor, colorWithAlphaComponent)
{
	double alpha;
	zval *handle_param = NULL, *alpha_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(alpha)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &alpha_param);
	alpha = zephir_get_doubleval(alpha_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, alpha);
	RETURN_LONG(ns_nscolor_color_with_alpha_component(&_0, &_1));
}

PHP_METHOD(AppKit_NS_NSColor_NSColor, catalogNameComponent)
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
	ns_nscolor_catalog_name_component(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSColor_NSColor, colorNameComponent)
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
	ns_nscolor_color_name_component(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSColor_NSColor, localizedCatalogNameComponent)
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
	ns_nscolor_localized_catalog_name_component(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSColor_NSColor, localizedColorNameComponent)
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
	ns_nscolor_localized_color_name_component(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSColor_NSColor, redComponent)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(ns_nscolor_red_component(&_0));
}

PHP_METHOD(AppKit_NS_NSColor_NSColor, greenComponent)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(ns_nscolor_green_component(&_0));
}

PHP_METHOD(AppKit_NS_NSColor_NSColor, blueComponent)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(ns_nscolor_blue_component(&_0));
}

PHP_METHOD(AppKit_NS_NSColor_NSColor, getRedGreenBlueAlpha)
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
	ns_nscolor_get_red_green_blue_alpha(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSColor_NSColor, hueComponent)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(ns_nscolor_hue_component(&_0));
}

PHP_METHOD(AppKit_NS_NSColor_NSColor, saturationComponent)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(ns_nscolor_saturation_component(&_0));
}

PHP_METHOD(AppKit_NS_NSColor_NSColor, brightnessComponent)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(ns_nscolor_brightness_component(&_0));
}

PHP_METHOD(AppKit_NS_NSColor_NSColor, getHueSaturationBrightnessAlpha)
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
	ns_nscolor_get_hue_saturation_brightness_alpha(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSColor_NSColor, whiteComponent)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(ns_nscolor_white_component(&_0));
}

PHP_METHOD(AppKit_NS_NSColor_NSColor, getWhiteAlpha)
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
	ns_nscolor_get_white_alpha(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSColor_NSColor, cyanComponent)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(ns_nscolor_cyan_component(&_0));
}

PHP_METHOD(AppKit_NS_NSColor_NSColor, magentaComponent)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(ns_nscolor_magenta_component(&_0));
}

PHP_METHOD(AppKit_NS_NSColor_NSColor, yellowComponent)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(ns_nscolor_yellow_component(&_0));
}

PHP_METHOD(AppKit_NS_NSColor_NSColor, blackComponent)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(ns_nscolor_black_component(&_0));
}

PHP_METHOD(AppKit_NS_NSColor_NSColor, getCyanMagentaYellowBlackAlpha)
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
	ns_nscolor_get_cyan_magenta_yellow_black_alpha(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSColor_NSColor, colorSpace)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nscolor_color_space(&_0));
}

PHP_METHOD(AppKit_NS_NSColor_NSColor, numberOfComponents)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nscolor_number_of_components(&_0));
}

PHP_METHOD(AppKit_NS_NSColor_NSColor, patternImage)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nscolor_pattern_image(&_0));
}

PHP_METHOD(AppKit_NS_NSColor_NSColor, alphaComponent)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(ns_nscolor_alpha_component(&_0));
}

PHP_METHOD(AppKit_NS_NSColor_NSColor, colorFromPasteboard)
{
	zval *pasteBoard_param = NULL, _0;
	zend_long pasteBoard;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(pasteBoard)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &pasteBoard_param);
	ZVAL_LONG(&_0, pasteBoard);
	RETURN_LONG(ns_nscolor_color_from_pasteboard(&_0));
}

PHP_METHOD(AppKit_NS_NSColor_NSColor, writeToPasteboard)
{
	zval *handle_param = NULL, *pasteBoard_param = NULL, _0, _1;
	zend_long handle, pasteBoard;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(pasteBoard)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &pasteBoard_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, pasteBoard);
	ns_nscolor_write_to_pasteboard(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSColor_NSColor, drawSwatchInRect)
{
	double x, y, width, height;
	zval *handle_param = NULL, *x_param = NULL, *y_param = NULL, *width_param = NULL, *height_param = NULL, _0, _1, _2, _3, _4;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(x)
		Z_PARAM_ZVAL(y)
		Z_PARAM_ZVAL(width)
		Z_PARAM_ZVAL(height)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &handle_param, &x_param, &y_param, &width_param, &height_param);
	x = zephir_get_doubleval(x_param);
	y = zephir_get_doubleval(y_param);
	width = zephir_get_doubleval(width_param);
	height = zephir_get_doubleval(height_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, x);
	ZVAL_DOUBLE(&_2, y);
	ZVAL_DOUBLE(&_3, width);
	ZVAL_DOUBLE(&_4, height);
	ns_nscolor_draw_swatch_in_rect(&_0, &_1, &_2, &_3, &_4);
}

PHP_METHOD(AppKit_NS_NSColor_NSColor, colorWithCGColor)
{
	zval *cgColor_param = NULL, _0;
	zend_long cgColor;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(cgColor)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &cgColor_param);
	ZVAL_LONG(&_0, cgColor);
	RETURN_LONG(ns_nscolor_color_with_cg_color(&_0));
}

PHP_METHOD(AppKit_NS_NSColor_NSColor, colorWithCIColor)
{
	zval *color_param = NULL, _0;
	zend_long color;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(color)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &color_param);
	ZVAL_LONG(&_0, color);
	RETURN_LONG(ns_nscolor_color_with_ci_color(&_0));
}

