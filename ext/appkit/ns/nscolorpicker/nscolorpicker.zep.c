
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

#include "ns-colorpicker.h"
#include <stdint.h>



/**
 * NSColorPicker — base class for custom color panel pickers.
 */
ZEPHIR_INIT_CLASS(AppKit_NS_NSColorPicker_NSColorPicker)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSColorPicker, NSColorPicker, appkit, ns_nscolorpicker_nscolorpicker, appkit_ns_nscolorpicker_nscolorpicker_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSColorPicker_NSColorPicker, wrap)
{
	zval *nsColorPickerPtr_param = NULL;
	zend_long nsColorPickerPtr, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(nsColorPickerPtr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &nsColorPickerPtr_param);
	
            handle = (zend_long) ns_colorpicker_wrap((void *)(uintptr_t) nsColorPickerPtr);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSColorPicker_NSColorPicker, destroy)
{
	zval *picker_param = NULL;
	zend_long picker;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(picker)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &picker_param);
	
            ns_colorpicker_destroy((uintptr_t) picker);
        
}

PHP_METHOD(AppKit_NS_NSColorPicker_NSColorPicker, create)
{
	zval *mask_param = NULL, *panel_param = NULL;
	zend_long mask, panel, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(mask)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(panel)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 1, &mask_param, &panel_param);
	if (!panel_param) {
		panel = 0;
	} else {
		}
	
            handle = (zend_long) ns_colorpicker_create((unsigned) mask, (uintptr_t) panel);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSColorPicker_NSColorPicker, colorPanel)
{
	zval *picker_param = NULL;
	zend_long picker, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(picker)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &picker_param);
	
            handle = (zend_long) ns_colorpicker_color_panel((uintptr_t) picker);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSColorPicker_NSColorPicker, buttonToolTip)
{
	zval *picker_param = NULL;
	zend_long picker;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(picker)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &picker_param);
	
            char buf[4096];
            buf[0] = '\0';
            if (ns_colorpicker_button_tool_tip((uintptr_t) picker, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        
	RETURN_STRING("");
}

/**
 * @return array [width, height] or empty array
 */
PHP_METHOD(AppKit_NS_NSColorPicker_NSColorPicker, minContentSize)
{
	zval out;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *picker_param = NULL;
	zend_long picker;

	ZVAL_UNDEF(&out);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(picker)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &picker_param);
	ZEPHIR_INIT_VAR(&out);
	array_init(&out);
	
            double w = 0.0, h = 0.0;
            if (ns_colorpicker_min_content_size((uintptr_t) picker, &w, &h)) {
                add_next_index_double(&out, w);
                add_next_index_double(&out, h);
            }
        
	RETURN_CTOR(&out);
}

PHP_METHOD(AppKit_NS_NSColorPicker_NSColorPicker, setMode)
{
	zval *picker_param = NULL, *mode_param = NULL;
	zend_long picker, mode;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(picker)
		Z_PARAM_LONG(mode)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &picker_param, &mode_param);
	
            ns_colorpicker_set_mode((uintptr_t) picker, (int) mode);
        
}

PHP_METHOD(AppKit_NS_NSColorPicker_NSColorPicker, attachColorList)
{
	zval *picker_param = NULL, *list_param = NULL;
	zend_long picker, list;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(picker)
		Z_PARAM_LONG(list)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &picker_param, &list_param);
	
            ns_colorpicker_attach_color_list((uintptr_t) picker, (uintptr_t) list);
        
}

PHP_METHOD(AppKit_NS_NSColorPicker_NSColorPicker, detachColorList)
{
	zval *picker_param = NULL, *list_param = NULL;
	zend_long picker, list;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(picker)
		Z_PARAM_LONG(list)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &picker_param, &list_param);
	
            ns_colorpicker_detach_color_list((uintptr_t) picker, (uintptr_t) list);
        
}

PHP_METHOD(AppKit_NS_NSColorPicker_NSColorPicker, nsColorPicker)
{
	zval *picker_param = NULL;
	zend_long picker, ptr = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(picker)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &picker_param);
	
            ptr = (zend_long)(uintptr_t) ns_colorpicker_nscolorpicker((uintptr_t) picker);
        
	RETURN_LONG(ptr);
}

