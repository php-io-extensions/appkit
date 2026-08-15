
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

#include "ns-button.h"
#include <stdint.h>



/**
 * NSButton push, checkbox (NSButtonTypeSwitch), and radio (NSButtonTypeRadio).
 * Handle is a view box — use NSView::addSubview to place it.
 */
ZEPHIR_INIT_CLASS(AppKit_NS_NSButton_NSButton)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSButton, NSButton, appkit, ns_nsbutton_nsbutton, appkit_ns_nsbutton_nsbutton_method_entry, 0);

	return SUCCESS;
}

/**
 * @return int Opaque button/view handle, or 0 on failure
 */
PHP_METHOD(AppKit_NS_NSButton_NSButton, create)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval title;
	zval *x_param = NULL, *y_param = NULL, *width_param = NULL, *height_param = NULL, *title_param = NULL;
	zend_long x, y, width, height, handle = 0;

	ZVAL_UNDEF(&title);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(x)
		Z_PARAM_LONG(y)
		Z_PARAM_LONG(width)
		Z_PARAM_LONG(height)
		Z_PARAM_STR(title)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 5, 0, &x_param, &y_param, &width_param, &height_param, &title_param);
	zephir_get_strval(&title, title_param);
	
            handle = (zend_long) ns_button_create(
                (double) x,
                (double) y,
                (double) width,
                (double) height,
                Z_STRVAL(title)
            );
        
	RETURN_MM_LONG(handle);
}

/** NSButtonTypeSwitch checkbox. */
PHP_METHOD(AppKit_NS_NSButton_NSButton, createCheckbox)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval title;
	zval *x_param = NULL, *y_param = NULL, *width_param = NULL, *height_param = NULL, *title_param = NULL;
	zend_long x, y, width, height, handle = 0;

	ZVAL_UNDEF(&title);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(x)
		Z_PARAM_LONG(y)
		Z_PARAM_LONG(width)
		Z_PARAM_LONG(height)
		Z_PARAM_STR(title)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 5, 0, &x_param, &y_param, &width_param, &height_param, &title_param);
	zephir_get_strval(&title, title_param);
	
            handle = (zend_long) ns_button_create_checkbox(
                (double) x,
                (double) y,
                (double) width,
                (double) height,
                Z_STRVAL(title)
            );
        
	RETURN_MM_LONG(handle);
}

/** NSButtonTypeRadio. */
PHP_METHOD(AppKit_NS_NSButton_NSButton, createRadio)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval title;
	zval *x_param = NULL, *y_param = NULL, *width_param = NULL, *height_param = NULL, *title_param = NULL;
	zend_long x, y, width, height, handle = 0;

	ZVAL_UNDEF(&title);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(x)
		Z_PARAM_LONG(y)
		Z_PARAM_LONG(width)
		Z_PARAM_LONG(height)
		Z_PARAM_STR(title)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 5, 0, &x_param, &y_param, &width_param, &height_param, &title_param);
	zephir_get_strval(&title, title_param);
	
            handle = (zend_long) ns_button_create_radio(
                (double) x,
                (double) y,
                (double) width,
                (double) height,
                Z_STRVAL(title)
            );
        
	RETURN_MM_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSButton_NSButton, destroy)
{
	zval *button_param = NULL;
	zend_long button;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(button)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &button_param);
	
            ns_button_destroy((uintptr_t) button);
        
}

PHP_METHOD(AppKit_NS_NSButton_NSButton, setTitle)
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
	
            ns_button_set_title((uintptr_t) button, Z_STRVAL(title));
        
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSButton_NSButton, setChecked)
{
	zend_bool checked;
	zval *button_param = NULL, *checked_param = NULL;
	zend_long button;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(button)
		Z_PARAM_BOOL(checked)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &button_param, &checked_param);
	
            ns_button_set_checked((uintptr_t) button, checked ? 1 : 0);
        
}

PHP_METHOD(AppKit_NS_NSButton_NSButton, isChecked)
{
	zend_bool result = 0;
	zval *button_param = NULL;
	zend_long button;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(button)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &button_param);
	
            result = ns_button_is_checked((uintptr_t) button) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSButton_NSButton, setSelected)
{
	zend_bool selected;
	zval *button_param = NULL, *selected_param = NULL;
	zend_long button;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(button)
		Z_PARAM_BOOL(selected)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &button_param, &selected_param);
	
            ns_button_set_selected((uintptr_t) button, selected ? 1 : 0);
        
}

PHP_METHOD(AppKit_NS_NSButton_NSButton, isSelected)
{
	zend_bool result = 0;
	zval *button_param = NULL;
	zend_long button;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(button)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &button_param);
	
            result = ns_button_is_selected((uintptr_t) button) == 1;
        
	RETURN_BOOL(result);
}

/**
 * One-shot. True if clicked since the last poll.
 */
PHP_METHOD(AppKit_NS_NSButton_NSButton, pollClick)
{
	zend_bool result = 0;
	zval *button_param = NULL;
	zend_long button;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(button)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &button_param);
	
            result = ns_button_poll_click((uintptr_t) button) == 1;
        
	RETURN_BOOL(result);
}

