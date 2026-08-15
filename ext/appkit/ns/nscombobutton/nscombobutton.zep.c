
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

#include "ns-combobutton.h"
#include <stdint.h>



/**
 * NSComboButton — button with an attached menu.
 */
ZEPHIR_INIT_CLASS(AppKit_NS_NSComboButton_NSComboButton)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSComboButton, NSComboButton, appkit, ns_nscombobutton_nscombobutton, appkit_ns_nscombobutton_nscombobutton_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSComboButton_NSComboButton, createWithTitle)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval title;
	zval *x_param = NULL, *y_param = NULL, *width_param = NULL, *height_param = NULL, *title_param = NULL, *menuHandle_param = NULL;
	zend_long x, y, width, height, menuHandle, handle = 0;

	ZVAL_UNDEF(&title);
	ZEND_PARSE_PARAMETERS_START(4, 6)
		Z_PARAM_LONG(x)
		Z_PARAM_LONG(y)
		Z_PARAM_LONG(width)
		Z_PARAM_LONG(height)
		Z_PARAM_OPTIONAL
		Z_PARAM_STR(title)
		Z_PARAM_LONG(menuHandle)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 2, &x_param, &y_param, &width_param, &height_param, &title_param, &menuHandle_param);
	if (!title_param) {
		ZEPHIR_INIT_VAR(&title);
		ZVAL_STRING(&title, "");
	} else {
		zephir_get_strval(&title, title_param);
	}
	if (!menuHandle_param) {
		menuHandle = 0;
	} else {
		}
	
            handle = (zend_long) ns_combobutton_create_with_title((double) x, (double) y, (double) width, (double) height, Z_STRVAL(title), (uintptr_t) menuHandle);
        
	RETURN_MM_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSComboButton_NSComboButton, destroy)
{
	zval *button_param = NULL;
	zend_long button;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(button)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &button_param);
	
            ns_combobutton_destroy((uintptr_t) button);
        
}

PHP_METHOD(AppKit_NS_NSComboButton_NSComboButton, setTitle)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval title;
	zval *button_param = NULL, *title_param = NULL;
	zend_long button;

	ZVAL_UNDEF(&title);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(button)
		Z_PARAM_STR(title)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &button_param, &title_param);
	zephir_get_strval(&title, title_param);
	
            ns_combobutton_set_title((uintptr_t) button, Z_STRVAL(title));
        
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSComboButton_NSComboButton, getTitle)
{
	zval *button_param = NULL;
	zend_long button;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(button)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &button_param);
	
            char buf[4096];
            buf[0] = '\0';
            if (ns_combobutton_get_title((uintptr_t) button, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        
	RETURN_STRING("");
}

PHP_METHOD(AppKit_NS_NSComboButton_NSComboButton, setImage)
{
	zval *button_param = NULL, *imageHandle_param = NULL;
	zend_long button, imageHandle;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(button)
		Z_PARAM_LONG(imageHandle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &button_param, &imageHandle_param);
	
            ns_combobutton_set_image((uintptr_t) button, (uintptr_t) imageHandle);
        
}

PHP_METHOD(AppKit_NS_NSComboButton_NSComboButton, setMenu)
{
	zval *button_param = NULL, *menuHandle_param = NULL;
	zend_long button, menuHandle;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(button)
		Z_PARAM_LONG(menuHandle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &button_param, &menuHandle_param);
	
            ns_combobutton_set_menu((uintptr_t) button, (uintptr_t) menuHandle);
        
}

PHP_METHOD(AppKit_NS_NSComboButton_NSComboButton, getMenu)
{
	zval *button_param = NULL;
	zend_long button, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(button)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &button_param);
	
            handle = (zend_long) ns_combobutton_get_menu((uintptr_t) button);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSComboButton_NSComboButton, setStyle)
{
	zval *button_param = NULL, *style_param = NULL;
	zend_long button, style;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(button)
		Z_PARAM_LONG(style)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &button_param, &style_param);
	
            ns_combobutton_set_style((uintptr_t) button, (int) style);
        
}

PHP_METHOD(AppKit_NS_NSComboButton_NSComboButton, getStyle)
{
	zval *button_param = NULL;
	zend_long button, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(button)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &button_param);
	
            value = (zend_long) ns_combobutton_get_style((uintptr_t) button);
        
	RETURN_LONG(value);
}

