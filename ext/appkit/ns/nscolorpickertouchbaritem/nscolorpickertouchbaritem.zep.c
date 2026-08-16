
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

#include "ns-colorpickertouchbaritem.h"
#include <stdint.h>



/** NSColorPickerTouchBarItem */
ZEPHIR_INIT_CLASS(AppKit_NS_NSColorPickerTouchBarItem_NSColorPickerTouchBarItem)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSColorPickerTouchBarItem, NSColorPickerTouchBarItem, appkit, ns_nscolorpickertouchbaritem_nscolorpickertouchbaritem, appkit_ns_nscolorpickertouchbaritem_nscolorpickertouchbaritem_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSColorPickerTouchBarItem_NSColorPickerTouchBarItem, colorPicker)
{
	zend_long h = 0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *identifier_param = NULL;
	zval identifier;

	ZVAL_UNDEF(&identifier);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(identifier)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &identifier_param);
	zephir_get_strval(&identifier, identifier_param);
	 h = (zend_long) ns_colorpickertouchbaritem_color_picker(Z_STRVAL(identifier)); 
	RETURN_MM_LONG(h);
}

PHP_METHOD(AppKit_NS_NSColorPickerTouchBarItem_NSColorPickerTouchBarItem, textColorPicker)
{
	zend_long h = 0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *identifier_param = NULL;
	zval identifier;

	ZVAL_UNDEF(&identifier);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(identifier)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &identifier_param);
	zephir_get_strval(&identifier, identifier_param);
	 h = (zend_long) ns_colorpickertouchbaritem_text_color_picker(Z_STRVAL(identifier)); 
	RETURN_MM_LONG(h);
}

PHP_METHOD(AppKit_NS_NSColorPickerTouchBarItem_NSColorPickerTouchBarItem, strokeColorPicker)
{
	zend_long h = 0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *identifier_param = NULL;
	zval identifier;

	ZVAL_UNDEF(&identifier);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(identifier)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &identifier_param);
	zephir_get_strval(&identifier, identifier_param);
	 h = (zend_long) ns_colorpickertouchbaritem_stroke_color_picker(Z_STRVAL(identifier)); 
	RETURN_MM_LONG(h);
}

PHP_METHOD(AppKit_NS_NSColorPickerTouchBarItem_NSColorPickerTouchBarItem, colorPickerWithButtonImage)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long image, h = 0;
	zval *identifier_param = NULL, *image_param = NULL;
	zval identifier;

	ZVAL_UNDEF(&identifier);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_STR(identifier)
		Z_PARAM_LONG(image)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &identifier_param, &image_param);
	zephir_get_strval(&identifier, identifier_param);
	 h = (zend_long) ns_colorpickertouchbaritem_color_picker_with_button_image(Z_STRVAL(identifier), (uintptr_t) image); 
	RETURN_MM_LONG(h);
}

PHP_METHOD(AppKit_NS_NSColorPickerTouchBarItem_NSColorPickerTouchBarItem, wrap)
{
	zval *ptr_param = NULL;
	zend_long ptr, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(ptr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &ptr_param);
	 handle = (zend_long) ns_colorpickertouchbaritem_wrap((void *)(uintptr_t) ptr); 
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSColorPickerTouchBarItem_NSColorPickerTouchBarItem, destroy)
{
	zval *item_param = NULL;
	zend_long item;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &item_param);
	 ns_colorpickertouchbaritem_destroy((uintptr_t) item); 
}

PHP_METHOD(AppKit_NS_NSColorPickerTouchBarItem_NSColorPickerTouchBarItem, nsColorPickerTouchBarItem)
{
	zval *item_param = NULL;
	zend_long item, ptr = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &item_param);
	 ptr = (zend_long)(uintptr_t) ns_colorpickertouchbaritem_nscolorpickertouchbaritem((uintptr_t) item); 
	RETURN_LONG(ptr);
}

PHP_METHOD(AppKit_NS_NSColorPickerTouchBarItem_NSColorPickerTouchBarItem, setColor)
{
	zval *item_param = NULL, *color_param = NULL;
	zend_long item, color;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(item)
		Z_PARAM_LONG(color)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &item_param, &color_param);
	 ns_colorpickertouchbaritem_set_color((uintptr_t) item, (uintptr_t) color); 
}

PHP_METHOD(AppKit_NS_NSColorPickerTouchBarItem_NSColorPickerTouchBarItem, getColor)
{
	zval *item_param = NULL;
	zend_long item, h = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &item_param);
	 h = (zend_long) ns_colorpickertouchbaritem_get_color((uintptr_t) item); 
	RETURN_LONG(h);
}

PHP_METHOD(AppKit_NS_NSColorPickerTouchBarItem_NSColorPickerTouchBarItem, pollAction)
{
	zend_bool r = 0;
	zval *item_param = NULL;
	zend_long item;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &item_param);
	 r = ns_colorpickertouchbaritem_poll_action((uintptr_t) item) == 1; 
	RETURN_BOOL(r);
}

