
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

#include "ns-graphics.h"



ZEPHIR_INIT_CLASS(AppKit_NS_NSGraphics_NSGraphics)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSGraphics, NSGraphics, appkit, ns_nsgraphics_nsgraphics, appkit_ns_nsgraphics_nsgraphics_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSGraphics_NSGraphics, beep)
{

	
            ns_graphics_beep();
        
}

PHP_METHOD(AppKit_NS_NSGraphics_NSGraphics, rectFill)
{
	zval *x_param = NULL, *y_param = NULL, *width_param = NULL, *height_param = NULL;
	double x, y, width, height;

	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_ZVAL(x)
		Z_PARAM_ZVAL(y)
		Z_PARAM_ZVAL(width)
		Z_PARAM_ZVAL(height)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &x_param, &y_param, &width_param, &height_param);
	x = zephir_get_doubleval(x_param);
	y = zephir_get_doubleval(y_param);
	width = zephir_get_doubleval(width_param);
	height = zephir_get_doubleval(height_param);
	
            ns_graphics_rect_fill(x, y, width, height);
        
}

PHP_METHOD(AppKit_NS_NSGraphics_NSGraphics, rectFillUsingOperation)
{
	zend_long op;
	zval *x_param = NULL, *y_param = NULL, *width_param = NULL, *height_param = NULL, *op_param = NULL;
	double x, y, width, height;

	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_ZVAL(x)
		Z_PARAM_ZVAL(y)
		Z_PARAM_ZVAL(width)
		Z_PARAM_ZVAL(height)
		Z_PARAM_LONG(op)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &x_param, &y_param, &width_param, &height_param, &op_param);
	x = zephir_get_doubleval(x_param);
	y = zephir_get_doubleval(y_param);
	width = zephir_get_doubleval(width_param);
	height = zephir_get_doubleval(height_param);
	
            ns_graphics_rect_fill_using_operation(x, y, width, height, (unsigned int) op);
        
}

PHP_METHOD(AppKit_NS_NSGraphics_NSGraphics, frameRect)
{
	zval *x_param = NULL, *y_param = NULL, *width_param = NULL, *height_param = NULL;
	double x, y, width, height;

	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_ZVAL(x)
		Z_PARAM_ZVAL(y)
		Z_PARAM_ZVAL(width)
		Z_PARAM_ZVAL(height)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &x_param, &y_param, &width_param, &height_param);
	x = zephir_get_doubleval(x_param);
	y = zephir_get_doubleval(y_param);
	width = zephir_get_doubleval(width_param);
	height = zephir_get_doubleval(height_param);
	
            ns_graphics_frame_rect(x, y, width, height);
        
}

PHP_METHOD(AppKit_NS_NSGraphics_NSGraphics, frameRectWithWidth)
{
	zval *x_param = NULL, *y_param = NULL, *width_param = NULL, *height_param = NULL, *frameWidth_param = NULL;
	double x, y, width, height, frameWidth;

	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_ZVAL(x)
		Z_PARAM_ZVAL(y)
		Z_PARAM_ZVAL(width)
		Z_PARAM_ZVAL(height)
		Z_PARAM_ZVAL(frameWidth)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &x_param, &y_param, &width_param, &height_param, &frameWidth_param);
	x = zephir_get_doubleval(x_param);
	y = zephir_get_doubleval(y_param);
	width = zephir_get_doubleval(width_param);
	height = zephir_get_doubleval(height_param);
	frameWidth = zephir_get_doubleval(frameWidth_param);
	
            ns_graphics_frame_rect_with_width(x, y, width, height, frameWidth);
        
}

PHP_METHOD(AppKit_NS_NSGraphics_NSGraphics, frameRectWithWidthUsingOperation)
{
	zend_long op;
	zval *x_param = NULL, *y_param = NULL, *width_param = NULL, *height_param = NULL, *frameWidth_param = NULL, *op_param = NULL;
	double x, y, width, height, frameWidth;

	ZEND_PARSE_PARAMETERS_START(6, 6)
		Z_PARAM_ZVAL(x)
		Z_PARAM_ZVAL(y)
		Z_PARAM_ZVAL(width)
		Z_PARAM_ZVAL(height)
		Z_PARAM_ZVAL(frameWidth)
		Z_PARAM_LONG(op)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(6, 0, &x_param, &y_param, &width_param, &height_param, &frameWidth_param, &op_param);
	x = zephir_get_doubleval(x_param);
	y = zephir_get_doubleval(y_param);
	width = zephir_get_doubleval(width_param);
	height = zephir_get_doubleval(height_param);
	frameWidth = zephir_get_doubleval(frameWidth_param);
	
            ns_graphics_frame_rect_with_width_using_operation(x, y, width, height, frameWidth, (unsigned int) op);
        
}

PHP_METHOD(AppKit_NS_NSGraphics_NSGraphics, rectClip)
{
	zval *x_param = NULL, *y_param = NULL, *width_param = NULL, *height_param = NULL;
	double x, y, width, height;

	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_ZVAL(x)
		Z_PARAM_ZVAL(y)
		Z_PARAM_ZVAL(width)
		Z_PARAM_ZVAL(height)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &x_param, &y_param, &width_param, &height_param);
	x = zephir_get_doubleval(x_param);
	y = zephir_get_doubleval(y_param);
	width = zephir_get_doubleval(width_param);
	height = zephir_get_doubleval(height_param);
	
            ns_graphics_rect_clip(x, y, width, height);
        
}

PHP_METHOD(AppKit_NS_NSGraphics_NSGraphics, drawGrayBezel)
{
	zval *x_param = NULL, *y_param = NULL, *width_param = NULL, *height_param = NULL, *clipX_param = NULL, *clipY_param = NULL, *clipW_param = NULL, *clipH_param = NULL;
	double x, y, width, height, clipX, clipY, clipW, clipH;

	ZEND_PARSE_PARAMETERS_START(8, 8)
		Z_PARAM_ZVAL(x)
		Z_PARAM_ZVAL(y)
		Z_PARAM_ZVAL(width)
		Z_PARAM_ZVAL(height)
		Z_PARAM_ZVAL(clipX)
		Z_PARAM_ZVAL(clipY)
		Z_PARAM_ZVAL(clipW)
		Z_PARAM_ZVAL(clipH)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(8, 0, &x_param, &y_param, &width_param, &height_param, &clipX_param, &clipY_param, &clipW_param, &clipH_param);
	x = zephir_get_doubleval(x_param);
	y = zephir_get_doubleval(y_param);
	width = zephir_get_doubleval(width_param);
	height = zephir_get_doubleval(height_param);
	clipX = zephir_get_doubleval(clipX_param);
	clipY = zephir_get_doubleval(clipY_param);
	clipW = zephir_get_doubleval(clipW_param);
	clipH = zephir_get_doubleval(clipH_param);
	
            ns_graphics_draw_gray_bezel(x, y, width, height, clipX, clipY, clipW, clipH);
        
}

PHP_METHOD(AppKit_NS_NSGraphics_NSGraphics, drawGroove)
{
	zval *x_param = NULL, *y_param = NULL, *width_param = NULL, *height_param = NULL, *clipX_param = NULL, *clipY_param = NULL, *clipW_param = NULL, *clipH_param = NULL;
	double x, y, width, height, clipX, clipY, clipW, clipH;

	ZEND_PARSE_PARAMETERS_START(8, 8)
		Z_PARAM_ZVAL(x)
		Z_PARAM_ZVAL(y)
		Z_PARAM_ZVAL(width)
		Z_PARAM_ZVAL(height)
		Z_PARAM_ZVAL(clipX)
		Z_PARAM_ZVAL(clipY)
		Z_PARAM_ZVAL(clipW)
		Z_PARAM_ZVAL(clipH)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(8, 0, &x_param, &y_param, &width_param, &height_param, &clipX_param, &clipY_param, &clipW_param, &clipH_param);
	x = zephir_get_doubleval(x_param);
	y = zephir_get_doubleval(y_param);
	width = zephir_get_doubleval(width_param);
	height = zephir_get_doubleval(height_param);
	clipX = zephir_get_doubleval(clipX_param);
	clipY = zephir_get_doubleval(clipY_param);
	clipW = zephir_get_doubleval(clipW_param);
	clipH = zephir_get_doubleval(clipH_param);
	
            ns_graphics_draw_groove(x, y, width, height, clipX, clipY, clipW, clipH);
        
}

PHP_METHOD(AppKit_NS_NSGraphics_NSGraphics, drawWhiteBezel)
{
	zval *x_param = NULL, *y_param = NULL, *width_param = NULL, *height_param = NULL, *clipX_param = NULL, *clipY_param = NULL, *clipW_param = NULL, *clipH_param = NULL;
	double x, y, width, height, clipX, clipY, clipW, clipH;

	ZEND_PARSE_PARAMETERS_START(8, 8)
		Z_PARAM_ZVAL(x)
		Z_PARAM_ZVAL(y)
		Z_PARAM_ZVAL(width)
		Z_PARAM_ZVAL(height)
		Z_PARAM_ZVAL(clipX)
		Z_PARAM_ZVAL(clipY)
		Z_PARAM_ZVAL(clipW)
		Z_PARAM_ZVAL(clipH)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(8, 0, &x_param, &y_param, &width_param, &height_param, &clipX_param, &clipY_param, &clipW_param, &clipH_param);
	x = zephir_get_doubleval(x_param);
	y = zephir_get_doubleval(y_param);
	width = zephir_get_doubleval(width_param);
	height = zephir_get_doubleval(height_param);
	clipX = zephir_get_doubleval(clipX_param);
	clipY = zephir_get_doubleval(clipY_param);
	clipW = zephir_get_doubleval(clipW_param);
	clipH = zephir_get_doubleval(clipH_param);
	
            ns_graphics_draw_white_bezel(x, y, width, height, clipX, clipY, clipW, clipH);
        
}

PHP_METHOD(AppKit_NS_NSGraphics_NSGraphics, drawButton)
{
	zval *x_param = NULL, *y_param = NULL, *width_param = NULL, *height_param = NULL, *clipX_param = NULL, *clipY_param = NULL, *clipW_param = NULL, *clipH_param = NULL;
	double x, y, width, height, clipX, clipY, clipW, clipH;

	ZEND_PARSE_PARAMETERS_START(8, 8)
		Z_PARAM_ZVAL(x)
		Z_PARAM_ZVAL(y)
		Z_PARAM_ZVAL(width)
		Z_PARAM_ZVAL(height)
		Z_PARAM_ZVAL(clipX)
		Z_PARAM_ZVAL(clipY)
		Z_PARAM_ZVAL(clipW)
		Z_PARAM_ZVAL(clipH)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(8, 0, &x_param, &y_param, &width_param, &height_param, &clipX_param, &clipY_param, &clipW_param, &clipH_param);
	x = zephir_get_doubleval(x_param);
	y = zephir_get_doubleval(y_param);
	width = zephir_get_doubleval(width_param);
	height = zephir_get_doubleval(height_param);
	clipX = zephir_get_doubleval(clipX_param);
	clipY = zephir_get_doubleval(clipY_param);
	clipW = zephir_get_doubleval(clipW_param);
	clipH = zephir_get_doubleval(clipH_param);
	
            ns_graphics_draw_button(x, y, width, height, clipX, clipY, clipW, clipH);
        
}

PHP_METHOD(AppKit_NS_NSGraphics_NSGraphics, drawDarkBezel)
{
	zval *x_param = NULL, *y_param = NULL, *width_param = NULL, *height_param = NULL, *clipX_param = NULL, *clipY_param = NULL, *clipW_param = NULL, *clipH_param = NULL;
	double x, y, width, height, clipX, clipY, clipW, clipH;

	ZEND_PARSE_PARAMETERS_START(8, 8)
		Z_PARAM_ZVAL(x)
		Z_PARAM_ZVAL(y)
		Z_PARAM_ZVAL(width)
		Z_PARAM_ZVAL(height)
		Z_PARAM_ZVAL(clipX)
		Z_PARAM_ZVAL(clipY)
		Z_PARAM_ZVAL(clipW)
		Z_PARAM_ZVAL(clipH)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(8, 0, &x_param, &y_param, &width_param, &height_param, &clipX_param, &clipY_param, &clipW_param, &clipH_param);
	x = zephir_get_doubleval(x_param);
	y = zephir_get_doubleval(y_param);
	width = zephir_get_doubleval(width_param);
	height = zephir_get_doubleval(height_param);
	clipX = zephir_get_doubleval(clipX_param);
	clipY = zephir_get_doubleval(clipY_param);
	clipW = zephir_get_doubleval(clipW_param);
	clipH = zephir_get_doubleval(clipH_param);
	
            ns_graphics_draw_dark_bezel(x, y, width, height, clipX, clipY, clipW, clipH);
        
}

PHP_METHOD(AppKit_NS_NSGraphics_NSGraphics, drawLightBezel)
{
	zval *x_param = NULL, *y_param = NULL, *width_param = NULL, *height_param = NULL, *clipX_param = NULL, *clipY_param = NULL, *clipW_param = NULL, *clipH_param = NULL;
	double x, y, width, height, clipX, clipY, clipW, clipH;

	ZEND_PARSE_PARAMETERS_START(8, 8)
		Z_PARAM_ZVAL(x)
		Z_PARAM_ZVAL(y)
		Z_PARAM_ZVAL(width)
		Z_PARAM_ZVAL(height)
		Z_PARAM_ZVAL(clipX)
		Z_PARAM_ZVAL(clipY)
		Z_PARAM_ZVAL(clipW)
		Z_PARAM_ZVAL(clipH)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(8, 0, &x_param, &y_param, &width_param, &height_param, &clipX_param, &clipY_param, &clipW_param, &clipH_param);
	x = zephir_get_doubleval(x_param);
	y = zephir_get_doubleval(y_param);
	width = zephir_get_doubleval(width_param);
	height = zephir_get_doubleval(height_param);
	clipX = zephir_get_doubleval(clipX_param);
	clipY = zephir_get_doubleval(clipY_param);
	clipW = zephir_get_doubleval(clipW_param);
	clipH = zephir_get_doubleval(clipH_param);
	
            ns_graphics_draw_light_bezel(x, y, width, height, clipX, clipY, clipW, clipH);
        
}

PHP_METHOD(AppKit_NS_NSGraphics_NSGraphics, eraseRect)
{
	zval *x_param = NULL, *y_param = NULL, *width_param = NULL, *height_param = NULL;
	double x, y, width, height;

	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_ZVAL(x)
		Z_PARAM_ZVAL(y)
		Z_PARAM_ZVAL(width)
		Z_PARAM_ZVAL(height)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &x_param, &y_param, &width_param, &height_param);
	x = zephir_get_doubleval(x_param);
	y = zephir_get_doubleval(y_param);
	width = zephir_get_doubleval(width_param);
	height = zephir_get_doubleval(height_param);
	
            ns_graphics_erase_rect(x, y, width, height);
        
}

PHP_METHOD(AppKit_NS_NSGraphics_NSGraphics, highlightRect)
{
	zval *x_param = NULL, *y_param = NULL, *width_param = NULL, *height_param = NULL;
	double x, y, width, height;

	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_ZVAL(x)
		Z_PARAM_ZVAL(y)
		Z_PARAM_ZVAL(width)
		Z_PARAM_ZVAL(height)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &x_param, &y_param, &width_param, &height_param);
	x = zephir_get_doubleval(x_param);
	y = zephir_get_doubleval(y_param);
	width = zephir_get_doubleval(width_param);
	height = zephir_get_doubleval(height_param);
	
            ns_graphics_highlight_rect(x, y, width, height);
        
}

PHP_METHOD(AppKit_NS_NSGraphics_NSGraphics, dottedFrameRect)
{
	zval *x_param = NULL, *y_param = NULL, *width_param = NULL, *height_param = NULL;
	double x, y, width, height;

	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_ZVAL(x)
		Z_PARAM_ZVAL(y)
		Z_PARAM_ZVAL(width)
		Z_PARAM_ZVAL(height)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &x_param, &y_param, &width_param, &height_param);
	x = zephir_get_doubleval(x_param);
	y = zephir_get_doubleval(y_param);
	width = zephir_get_doubleval(width_param);
	height = zephir_get_doubleval(height_param);
	
            ns_graphics_dotted_frame_rect(x, y, width, height);
        
}

PHP_METHOD(AppKit_NS_NSGraphics_NSGraphics, drawWindowBackground)
{
	zval *x_param = NULL, *y_param = NULL, *width_param = NULL, *height_param = NULL;
	double x, y, width, height;

	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_ZVAL(x)
		Z_PARAM_ZVAL(y)
		Z_PARAM_ZVAL(width)
		Z_PARAM_ZVAL(height)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &x_param, &y_param, &width_param, &height_param);
	x = zephir_get_doubleval(x_param);
	y = zephir_get_doubleval(y_param);
	width = zephir_get_doubleval(width_param);
	height = zephir_get_doubleval(height_param);
	
            ns_graphics_draw_window_background(x, y, width, height);
        
}

PHP_METHOD(AppKit_NS_NSGraphics_NSGraphics, setFocusRingStyle)
{
	zval *placement_param = NULL;
	zend_long placement;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(placement)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &placement_param);
	
            ns_graphics_set_focus_ring_style((unsigned int) placement);
        
}

PHP_METHOD(AppKit_NS_NSGraphics_NSGraphics, disableScreenUpdates)
{

	
            ns_graphics_disable_screen_updates();
        
}

PHP_METHOD(AppKit_NS_NSGraphics_NSGraphics, enableScreenUpdates)
{

	
            ns_graphics_enable_screen_updates();
        
}

PHP_METHOD(AppKit_NS_NSGraphics_NSGraphics, showAnimationEffect)
{
	double centerX, centerY, sizeW, sizeH;
	zval *effect_param = NULL, *centerX_param = NULL, *centerY_param = NULL, *sizeW_param = NULL, *sizeH_param = NULL;
	zend_long effect;

	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(effect)
		Z_PARAM_ZVAL(centerX)
		Z_PARAM_ZVAL(centerY)
		Z_PARAM_ZVAL(sizeW)
		Z_PARAM_ZVAL(sizeH)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &effect_param, &centerX_param, &centerY_param, &sizeW_param, &sizeH_param);
	centerX = zephir_get_doubleval(centerX_param);
	centerY = zephir_get_doubleval(centerY_param);
	sizeW = zephir_get_doubleval(sizeW_param);
	sizeH = zephir_get_doubleval(sizeH_param);
	
            ns_graphics_show_animation_effect((unsigned int) effect, centerX, centerY, sizeW, sizeH);
        
}

PHP_METHOD(AppKit_NS_NSGraphics_NSGraphics, white)
{
	double value = 0;
	
            value = ns_graphics_white();
        
	RETURN_DOUBLE(value);
}

PHP_METHOD(AppKit_NS_NSGraphics_NSGraphics, lightGray)
{
	double value = 0;
	
            value = ns_graphics_light_gray();
        
	RETURN_DOUBLE(value);
}

PHP_METHOD(AppKit_NS_NSGraphics_NSGraphics, darkGray)
{
	double value = 0;
	
            value = ns_graphics_dark_gray();
        
	RETURN_DOUBLE(value);
}

PHP_METHOD(AppKit_NS_NSGraphics_NSGraphics, black)
{
	double value = 0;
	
            value = ns_graphics_black();
        
	RETURN_DOUBLE(value);
}

