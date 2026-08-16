
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



ZEPHIR_INIT_CLASS(AppKit_NS_NSAccessibilityCustomRotor_NSAccessibilityCustomRotor)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSAccessibilityCustomRotor, NSAccessibilityCustomRotor, appkit, ns_nsaccessibilitycustomrotor_nsaccessibilitycustomrotor, appkit_ns_nsaccessibilitycustomrotor_nsaccessibilitycustomrotor_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSAccessibilityCustomRotor_NSAccessibilityCustomRotor, create)
{
	zend_long handle = 0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *label_param = NULL;
	zval label;

	ZVAL_UNDEF(&label);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(label)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &label_param);
	zephir_get_strval(&label, label_param);
	
            handle = (zend_long) ns_accessibilitycustomrotor_create(Z_STRVAL(label));
        
	RETURN_MM_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSAccessibilityCustomRotor_NSAccessibilityCustomRotor, createWithType)
{
	zval *rotorType_param = NULL;
	zend_long rotorType, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(rotorType)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &rotorType_param);
	
            handle = (zend_long) ns_accessibilitycustomrotor_create_with_type((int) rotorType);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSAccessibilityCustomRotor_NSAccessibilityCustomRotor, wrap)
{
	zval *nsAccessibilityCustomRotorPtr_param = NULL;
	zend_long nsAccessibilityCustomRotorPtr, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(nsAccessibilityCustomRotorPtr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &nsAccessibilityCustomRotorPtr_param);
	
            handle = (zend_long) ns_accessibilitycustomrotor_wrap((void *)(uintptr_t) nsAccessibilityCustomRotorPtr);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSAccessibilityCustomRotor_NSAccessibilityCustomRotor, destroy)
{
	zval *rotor_param = NULL;
	zend_long rotor;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(rotor)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &rotor_param);
	
            ns_accessibilitycustomrotor_destroy((uintptr_t) rotor);
        
}

PHP_METHOD(AppKit_NS_NSAccessibilityCustomRotor_NSAccessibilityCustomRotor, nsAccessibilityCustomRotor)
{
	zval *rotor_param = NULL;
	zend_long rotor, ptr = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(rotor)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &rotor_param);
	
            ptr = (zend_long)(uintptr_t) ns_accessibilitycustomrotor_nsaccessibilitycustomrotor((uintptr_t) rotor);
        
	RETURN_LONG(ptr);
}

PHP_METHOD(AppKit_NS_NSAccessibilityCustomRotor_NSAccessibilityCustomRotor, type)
{
	zval *rotor_param = NULL;
	zend_long rotor, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(rotor)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &rotor_param);
	
            value = ns_accessibilitycustomrotor_type((uintptr_t) rotor);
        
	RETURN_LONG(value);
}

PHP_METHOD(AppKit_NS_NSAccessibilityCustomRotor_NSAccessibilityCustomRotor, setType)
{
	zval *rotor_param = NULL, *rotorType_param = NULL;
	zend_long rotor, rotorType;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(rotor)
		Z_PARAM_LONG(rotorType)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &rotor_param, &rotorType_param);
	
            ns_accessibilitycustomrotor_set_type((uintptr_t) rotor, (int) rotorType);
        
}

PHP_METHOD(AppKit_NS_NSAccessibilityCustomRotor_NSAccessibilityCustomRotor, label)
{
	zval *rotor_param = NULL;
	zend_long rotor;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(rotor)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &rotor_param);
	
            char buf[4096];
            buf[0] = '\0';
            if (ns_accessibilitycustomrotor_label((uintptr_t) rotor, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        
	RETURN_STRING("");
}

PHP_METHOD(AppKit_NS_NSAccessibilityCustomRotor_NSAccessibilityCustomRotor, setLabel)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval label;
	zval *rotor_param = NULL, *label_param = NULL;
	zend_long rotor;

	ZVAL_UNDEF(&label);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(rotor)
		Z_PARAM_STR(label)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &rotor_param, &label_param);
	zephir_get_strval(&label, label_param);
	
            ns_accessibilitycustomrotor_set_label((uintptr_t) rotor, Z_STRVAL(label));
        
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSAccessibilityCustomRotor_NSAccessibilityCustomRotor, setNextItem)
{
	zval *rotor_param = NULL, *item_param = NULL;
	zend_long rotor, item;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(rotor)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &rotor_param, &item_param);
	
            ns_accessibilitycustomrotor_set_next_item((uintptr_t) rotor, (uintptr_t) item);
        
}

PHP_METHOD(AppKit_NS_NSAccessibilityCustomRotor_NSAccessibilityCustomRotor, pollSearch)
{
	zval *rotor_param = NULL;
	zend_long rotor;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(rotor)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &rotor_param);
	
            int direction = 0;
            char filter[4096];
            filter[0] = '\0';
            zval result;
            array_init(&result);
            if (ns_accessibilitycustomrotor_poll_search((uintptr_t) rotor, &direction, filter, (int) sizeof(filter))) {
                add_assoc_long(&result, "direction", direction);
                add_assoc_string(&result, "filter", filter);
            }
            RETURN_ZVAL(&result, 0, 0);
        
	array_init(return_value);
	return;
}

