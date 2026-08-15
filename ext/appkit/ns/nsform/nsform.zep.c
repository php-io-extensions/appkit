
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

#include "ns-form.h"
#include <stdint.h>



/**
 * Deprecated NSForm labeled-entry matrix.
 */
ZEPHIR_INIT_CLASS(AppKit_NS_NSForm_NSForm)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSForm, NSForm, appkit, ns_nsform_nsform, appkit_ns_nsform_nsform_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSForm_NSForm, create)
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
	
            handle = (zend_long) ns_form_create((double) x, (double) y, (double) width, (double) height);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSForm_NSForm, destroy)
{
	zval *form_param = NULL;
	zend_long form;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(form)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &form_param);
	
            ns_form_destroy((uintptr_t) form);
        
}

PHP_METHOD(AppKit_NS_NSForm_NSForm, addEntry)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval title;
	zval *form_param = NULL, *title_param = NULL;
	zend_long form, handle = 0;

	ZVAL_UNDEF(&title);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(form)
		Z_PARAM_STR(title)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &form_param, &title_param);
	zephir_get_strval(&title, title_param);
	
            handle = (zend_long) ns_form_add_entry((uintptr_t) form, Z_STRVAL(title));
        
	RETURN_MM_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSForm_NSForm, setTitleAt)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval title;
	zval *form_param = NULL, *index_param = NULL, *title_param = NULL;
	zend_long form, index;

	ZVAL_UNDEF(&title);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(form)
		Z_PARAM_LONG(index)
		Z_PARAM_STR(title)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &form_param, &index_param, &title_param);
	zephir_get_strval(&title, title_param);
	
            ns_form_set_title_at((uintptr_t) form, (int) index, Z_STRVAL(title));
        
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSForm_NSForm, getTitleAt)
{
	zval *form_param = NULL, *index_param = NULL;
	zend_long form, index;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(form)
		Z_PARAM_LONG(index)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &form_param, &index_param);
	
            char buf[4096];
            buf[0] = '\0';
            if (ns_form_get_title_at((uintptr_t) form, (int) index, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        
	RETURN_STRING("");
}

PHP_METHOD(AppKit_NS_NSForm_NSForm, setValueAt)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval value;
	zval *form_param = NULL, *index_param = NULL, *value_param = NULL;
	zend_long form, index;

	ZVAL_UNDEF(&value);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(form)
		Z_PARAM_LONG(index)
		Z_PARAM_STR(value)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &form_param, &index_param, &value_param);
	zephir_get_strval(&value, value_param);
	
            ns_form_set_value_at((uintptr_t) form, (int) index, Z_STRVAL(value));
        
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSForm_NSForm, getValueAt)
{
	zval *form_param = NULL, *index_param = NULL;
	zend_long form, index;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(form)
		Z_PARAM_LONG(index)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &form_param, &index_param);
	
            char buf[4096];
            buf[0] = '\0';
            if (ns_form_get_value_at((uintptr_t) form, (int) index, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        
	RETURN_STRING("");
}

PHP_METHOD(AppKit_NS_NSForm_NSForm, cellAt)
{
	zval *form_param = NULL, *index_param = NULL;
	zend_long form, index, handle = 0;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(form)
		Z_PARAM_LONG(index)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &form_param, &index_param);
	
            handle = (zend_long) ns_form_cell_at((uintptr_t) form, (int) index);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSForm_NSForm, numberOfRows)
{
	zval *form_param = NULL;
	zend_long form, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(form)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &form_param);
	
            value = (zend_long) ns_form_number_of_rows((uintptr_t) form);
        
	RETURN_LONG(value);
}

