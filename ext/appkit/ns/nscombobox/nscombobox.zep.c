
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

#include "ns-combobox.h"
#include <stdint.h>



/**
 * NSComboBox text + list selection control.
 */
ZEPHIR_INIT_CLASS(AppKit_NS_NSComboBox_NSComboBox)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSComboBox, NSComboBox, appkit, ns_nscombobox_nscombobox, appkit_ns_nscombobox_nscombobox_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSComboBox_NSComboBox, create)
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
	
            handle = (zend_long) ns_combobox_create((double) x, (double) y, (double) width, (double) height);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSComboBox_NSComboBox, destroy)
{
	zval *combo_param = NULL;
	zend_long combo;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(combo)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &combo_param);
	
            ns_combobox_destroy((uintptr_t) combo);
        
}

PHP_METHOD(AppKit_NS_NSComboBox_NSComboBox, addItem)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval title;
	zval *combo_param = NULL, *title_param = NULL;
	zend_long combo;

	ZVAL_UNDEF(&title);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(combo)
		Z_PARAM_STR(title)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &combo_param, &title_param);
	zephir_get_strval(&title, title_param);
	
            ns_combobox_add_item((uintptr_t) combo, Z_STRVAL(title));
        
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSComboBox_NSComboBox, removeAll)
{
	zval *combo_param = NULL;
	zend_long combo;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(combo)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &combo_param);
	
            ns_combobox_remove_all((uintptr_t) combo);
        
}

PHP_METHOD(AppKit_NS_NSComboBox_NSComboBox, setStringValue)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval value;
	zval *combo_param = NULL, *value_param = NULL;
	zend_long combo;

	ZVAL_UNDEF(&value);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(combo)
		Z_PARAM_STR(value)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &combo_param, &value_param);
	zephir_get_strval(&value, value_param);
	
            ns_combobox_set_string((uintptr_t) combo, Z_STRVAL(value));
        
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSComboBox_NSComboBox, getStringValue)
{
	zval *combo_param = NULL;
	zend_long combo;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(combo)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &combo_param);
	
            char buf[4096];
            buf[0] = '\0';
            if (ns_combobox_get_string((uintptr_t) combo, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        
	RETURN_STRING("");
}

PHP_METHOD(AppKit_NS_NSComboBox_NSComboBox, pollChange)
{
	zend_bool result = 0;
	zval *combo_param = NULL;
	zend_long combo;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(combo)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &combo_param);
	
            result = ns_combobox_poll_change((uintptr_t) combo) == 1;
        
	RETURN_BOOL(result);
}

