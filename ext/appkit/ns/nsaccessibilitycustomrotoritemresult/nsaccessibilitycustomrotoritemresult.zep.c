
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

#include "ns-accessibilitycustomrotor.h"
#include <stdint.h>



ZEPHIR_INIT_CLASS(AppKit_NS_NSAccessibilityCustomRotorItemResult_NSAccessibilityCustomRotorItemResult)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSAccessibilityCustomRotorItemResult, NSAccessibilityCustomRotorItemResult, appkit, ns_nsaccessibilitycustomrotoritemresult_nsaccessibilitycustomrotoritemresult, appkit_ns_nsaccessibilitycustomrotoritemresult_nsaccessibilitycustomrotoritemresult_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSAccessibilityCustomRotorItemResult_NSAccessibilityCustomRotorItemResult, createWithTargetElement)
{
	zval *element_param = NULL;
	zend_long element, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(element)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &element_param);
	
            handle = (zend_long) ns_accessibilitycustomrotoritem_create_with_element((uintptr_t) element);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSAccessibilityCustomRotorItemResult_NSAccessibilityCustomRotorItemResult, createWithToken)
{
	zend_long handle = 0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *token_param = NULL, *label_param = NULL;
	zval token, label;

	ZVAL_UNDEF(&token);
	ZVAL_UNDEF(&label);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_STR(token)
		Z_PARAM_STR(label)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &token_param, &label_param);
	zephir_get_strval(&token, token_param);
	zephir_get_strval(&label, label_param);
	
            handle = (zend_long) ns_accessibilitycustomrotoritem_create_with_token(Z_STRVAL(token), Z_STRVAL(label));
        
	RETURN_MM_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSAccessibilityCustomRotorItemResult_NSAccessibilityCustomRotorItemResult, wrap)
{
	zval *ptr_param = NULL;
	zend_long ptr, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(ptr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &ptr_param);
	
            handle = (zend_long) ns_accessibilitycustomrotoritem_wrap((void *)(uintptr_t) ptr);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSAccessibilityCustomRotorItemResult_NSAccessibilityCustomRotorItemResult, destroy)
{
	zval *item_param = NULL;
	zend_long item;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &item_param);
	
            ns_accessibilitycustomrotoritem_destroy((uintptr_t) item);
        
}

PHP_METHOD(AppKit_NS_NSAccessibilityCustomRotorItemResult_NSAccessibilityCustomRotorItemResult, nsAccessibilityCustomRotorItem)
{
	zval *item_param = NULL;
	zend_long item, ptr = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &item_param);
	
            ptr = (zend_long)(uintptr_t) ns_accessibilitycustomrotoritem_nsaccessibilitycustomrotoritem((uintptr_t) item);
        
	RETURN_LONG(ptr);
}

PHP_METHOD(AppKit_NS_NSAccessibilityCustomRotorItemResult_NSAccessibilityCustomRotorItemResult, customLabel)
{
	zval *item_param = NULL;
	zend_long item;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &item_param);
	
            char buf[4096];
            buf[0] = '\0';
            if (ns_accessibilitycustomrotoritem_custom_label((uintptr_t) item, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        
	RETURN_STRING("");
}

PHP_METHOD(AppKit_NS_NSAccessibilityCustomRotorItemResult_NSAccessibilityCustomRotorItemResult, setCustomLabel)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval label;
	zval *item_param = NULL, *label_param = NULL;
	zend_long item;

	ZVAL_UNDEF(&label);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(item)
		Z_PARAM_STR(label)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &item_param, &label_param);
	zephir_get_strval(&label, label_param);
	
            ns_accessibilitycustomrotoritem_set_custom_label((uintptr_t) item, Z_STRVAL(label));
        
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSAccessibilityCustomRotorItemResult_NSAccessibilityCustomRotorItemResult, setTargetRange)
{
	zval *item_param = NULL, *location_param = NULL, *length_param = NULL;
	zend_long item, location, length;

	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(item)
		Z_PARAM_LONG(location)
		Z_PARAM_LONG(length)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &item_param, &location_param, &length_param);
	
            ns_accessibilitycustomrotoritem_set_target_range((uintptr_t) item, (unsigned long) location, (unsigned long) length);
        
}

PHP_METHOD(AppKit_NS_NSAccessibilityCustomRotorItemResult_NSAccessibilityCustomRotorItemResult, targetRange)
{
	zval *item_param = NULL;
	zend_long item;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &item_param);
	
            unsigned long location = 0, length = 0;
            zval range;
            array_init(&range);
            if (ns_accessibilitycustomrotoritem_target_range((uintptr_t) item, &location, &length)) {
                add_next_index_long(&range, (zend_long) location);
                add_next_index_long(&range, (zend_long) length);
            }
            RETURN_ZVAL(&range, 0, 0);
        
	array_init(return_value);
	return;
}

