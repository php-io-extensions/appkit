
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

#include "ns-popupbutton.h"
#include <stdint.h>



/**
 * NSPopUpButton selection control.
 */
ZEPHIR_INIT_CLASS(AppKit_NS_NSPopUpButton_NSPopUpButton)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSPopUpButton, NSPopUpButton, appkit, ns_nspopupbutton_nspopupbutton, appkit_ns_nspopupbutton_nspopupbutton_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSPopUpButton_NSPopUpButton, create)
{
	zval *x_param = NULL, *y_param = NULL, *width_param = NULL, *height_param = NULL;
	zend_long x, y, width, height, handle = 0;

	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(x)
		Z_PARAM_LONG(y)
		Z_PARAM_LONG(width)
		Z_PARAM_LONG(height)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &x_param, &y_param, &width_param, &height_param);
	
            handle = (zend_long) ns_popupbutton_create((double) x, (double) y, (double) width, (double) height);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSPopUpButton_NSPopUpButton, destroy)
{
	zval *popup_param = NULL;
	zend_long popup;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(popup)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &popup_param);
	
            ns_popupbutton_destroy((uintptr_t) popup);
        
}

PHP_METHOD(AppKit_NS_NSPopUpButton_NSPopUpButton, addItem)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval title;
	zval *popup_param = NULL, *title_param = NULL;
	zend_long popup;

	ZVAL_UNDEF(&title);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(popup)
		Z_PARAM_STR(title)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &popup_param, &title_param);
	zephir_get_strval(&title, title_param);
	
            ns_popupbutton_add_item((uintptr_t) popup, Z_STRVAL(title));
        
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSPopUpButton_NSPopUpButton, removeAll)
{
	zval *popup_param = NULL;
	zend_long popup;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(popup)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &popup_param);
	
            ns_popupbutton_remove_all((uintptr_t) popup);
        
}

PHP_METHOD(AppKit_NS_NSPopUpButton_NSPopUpButton, count)
{
	zval *popup_param = NULL;
	zend_long popup, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(popup)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &popup_param);
	
            value = (zend_long) ns_popupbutton_count((uintptr_t) popup);
        
	RETURN_LONG(value);
}

PHP_METHOD(AppKit_NS_NSPopUpButton_NSPopUpButton, setSelected)
{
	zval *popup_param = NULL, *index_param = NULL;
	zend_long popup, index;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(popup)
		Z_PARAM_LONG(index)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &popup_param, &index_param);
	
            ns_popupbutton_set_selected((uintptr_t) popup, (int) index);
        
}

PHP_METHOD(AppKit_NS_NSPopUpButton_NSPopUpButton, getSelected)
{
	zval *popup_param = NULL;
	zend_long popup, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(popup)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &popup_param);
	
            value = (zend_long) ns_popupbutton_get_selected((uintptr_t) popup);
        
	RETURN_LONG(value);
}

PHP_METHOD(AppKit_NS_NSPopUpButton_NSPopUpButton, getSelectedTitle)
{
	zval *popup_param = NULL;
	zend_long popup;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(popup)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &popup_param);
	
            char buf[1024];
            buf[0] = '\0';
            if (ns_popupbutton_get_selected_title((uintptr_t) popup, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        
	RETURN_STRING("");
}

PHP_METHOD(AppKit_NS_NSPopUpButton_NSPopUpButton, pollChange)
{
	zend_bool result = 0;
	zval *popup_param = NULL;
	zend_long popup;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(popup)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &popup_param);
	
            result = ns_popupbutton_poll_change((uintptr_t) popup) == 1;
        
	RETURN_BOOL(result);
}

