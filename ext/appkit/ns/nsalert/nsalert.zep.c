
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

#include "ns-alert.h"
#include <stdint.h>



/**
 * NSAlert modal dialog.
 */
ZEPHIR_INIT_CLASS(AppKit_NS_NSAlert_NSAlert)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSAlert, NSAlert, appkit, ns_nsalert_nsalert, appkit_ns_nsalert_nsalert_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSAlert_NSAlert, create)
{
	zend_long handle = 0;
	
            handle = (zend_long) ns_alert_create();
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSAlert_NSAlert, destroy)
{
	zval *alert_param = NULL;
	zend_long alert;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(alert)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &alert_param);
	
            ns_alert_destroy((uintptr_t) alert);
        
}

PHP_METHOD(AppKit_NS_NSAlert_NSAlert, setMessage)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval text;
	zval *alert_param = NULL, *text_param = NULL;
	zend_long alert;

	ZVAL_UNDEF(&text);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(alert)
		Z_PARAM_STR(text)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &alert_param, &text_param);
	zephir_get_strval(&text, text_param);
	
            ns_alert_set_message((uintptr_t) alert, Z_STRVAL(text));
        
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSAlert_NSAlert, setInfo)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval text;
	zval *alert_param = NULL, *text_param = NULL;
	zend_long alert;

	ZVAL_UNDEF(&text);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(alert)
		Z_PARAM_STR(text)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &alert_param, &text_param);
	zephir_get_strval(&text, text_param);
	
            ns_alert_set_info((uintptr_t) alert, Z_STRVAL(text));
        
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSAlert_NSAlert, addButton)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval title;
	zval *alert_param = NULL, *title_param = NULL;
	zend_long alert;

	ZVAL_UNDEF(&title);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(alert)
		Z_PARAM_STR(title)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &alert_param, &title_param);
	zephir_get_strval(&title, title_param);
	
            ns_alert_add_button((uintptr_t) alert, Z_STRVAL(title));
        
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSAlert_NSAlert, runModal)
{
	zval *alert_param = NULL;
	zend_long alert, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(alert)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &alert_param);
	
            value = (zend_long) ns_alert_run_modal((uintptr_t) alert);
        
	RETURN_LONG(value);
}

