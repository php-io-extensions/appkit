
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

#include "ns-securetextfield.h"
#include <stdint.h>



ZEPHIR_INIT_CLASS(AppKit_NS_NSSecureTextField_NSSecureTextField)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSSecureTextField, NSSecureTextField, appkit, ns_nssecuretextfield_nssecuretextfield, appkit_ns_nssecuretextfield_nssecuretextfield_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSSecureTextField_NSSecureTextField, create)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval value;
	zval *x_param = NULL, *y_param = NULL, *width_param = NULL, *height_param = NULL, *value_param = NULL;
	zend_long x, y, width, height, handle = 0;

	ZVAL_UNDEF(&value);
	ZEND_PARSE_PARAMETERS_START(4, 5)
		Z_PARAM_LONG(x)
		Z_PARAM_LONG(y)
		Z_PARAM_LONG(width)
		Z_PARAM_LONG(height)
		Z_PARAM_OPTIONAL
		Z_PARAM_STR(value)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 1, &x_param, &y_param, &width_param, &height_param, &value_param);
	if (!value_param) {
		ZEPHIR_INIT_VAR(&value);
		ZVAL_STRING(&value, "");
	} else {
		zephir_get_strval(&value, value_param);
	}
	
            handle = (zend_long) ns_securetextfield_create((double) x, (double) y, (double) width, (double) height, Z_STRVAL(value));
        
	RETURN_MM_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSSecureTextField_NSSecureTextField, destroy)
{
	zval *field_param = NULL;
	zend_long field;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(field)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &field_param);
	
            ns_securetextfield_destroy((uintptr_t) field);
        
}

PHP_METHOD(AppKit_NS_NSSecureTextField_NSSecureTextField, setStringValue)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval value;
	zval *field_param = NULL, *value_param = NULL;
	zend_long field;

	ZVAL_UNDEF(&value);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(field)
		Z_PARAM_STR(value)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &field_param, &value_param);
	zephir_get_strval(&value, value_param);
	
            ns_securetextfield_set_string((uintptr_t) field, Z_STRVAL(value));
        
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSSecureTextField_NSSecureTextField, getStringValue)
{
	zval *field_param = NULL;
	zend_long field;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(field)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &field_param);
	
            char buf[4096];
            buf[0] = '\0';
            if (ns_securetextfield_get_string((uintptr_t) field, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        
	RETURN_STRING("");
}

PHP_METHOD(AppKit_NS_NSSecureTextField_NSSecureTextField, pollChange)
{
	zend_bool result = 0;
	zval *field_param = NULL;
	zend_long field;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(field)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &field_param);
	
            result = ns_securetextfield_poll_change((uintptr_t) field) == 1;
        
	RETURN_BOOL(result);
}

