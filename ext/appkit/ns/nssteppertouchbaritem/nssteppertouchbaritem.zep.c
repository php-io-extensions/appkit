
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

#include "ns-steppertouchbaritem.h"
#include <stdint.h>



/** NSStepperTouchBarItem */
ZEPHIR_INIT_CLASS(AppKit_NS_NSStepperTouchBarItem_NSStepperTouchBarItem)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSStepperTouchBarItem, NSStepperTouchBarItem, appkit, ns_nssteppertouchbaritem_nssteppertouchbaritem, appkit_ns_nssteppertouchbaritem_nssteppertouchbaritem_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSStepperTouchBarItem_NSStepperTouchBarItem, stepperWithFormatter)
{
	zend_long h = 0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *identifier_param = NULL;
	zval identifier;

	ZVAL_UNDEF(&identifier);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(identifier)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &identifier_param);
	zephir_get_strval(&identifier, identifier_param);
	 h = (zend_long) ns_steppertouchbaritem_stepper_with_formatter(Z_STRVAL(identifier)); 
	RETURN_MM_LONG(h);
}

PHP_METHOD(AppKit_NS_NSStepperTouchBarItem_NSStepperTouchBarItem, wrap)
{
	zval *ptr_param = NULL;
	zend_long ptr, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(ptr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &ptr_param);
	 handle = (zend_long) ns_steppertouchbaritem_wrap((void *)(uintptr_t) ptr); 
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSStepperTouchBarItem_NSStepperTouchBarItem, destroy)
{
	zval *item_param = NULL;
	zend_long item;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &item_param);
	 ns_steppertouchbaritem_destroy((uintptr_t) item); 
}

PHP_METHOD(AppKit_NS_NSStepperTouchBarItem_NSStepperTouchBarItem, nsStepperTouchBarItem)
{
	zval *item_param = NULL;
	zend_long item, ptr = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &item_param);
	 ptr = (zend_long)(uintptr_t) ns_steppertouchbaritem_nssteppertouchbaritem((uintptr_t) item); 
	RETURN_LONG(ptr);
}

PHP_METHOD(AppKit_NS_NSStepperTouchBarItem_NSStepperTouchBarItem, setValue)
{
	double value;
	zval *item_param = NULL, *value_param = NULL;
	zend_long item;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(item)
		Z_PARAM_ZVAL(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &item_param, &value_param);
	value = zephir_get_doubleval(value_param);
	 ns_steppertouchbaritem_set_value((uintptr_t) item, value); 
}

PHP_METHOD(AppKit_NS_NSStepperTouchBarItem_NSStepperTouchBarItem, getValue)
{
	double v = 0;
	zval *item_param = NULL;
	zend_long item;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &item_param);
	 v = ns_steppertouchbaritem_get_value((uintptr_t) item); 
	RETURN_DOUBLE(v);
}

PHP_METHOD(AppKit_NS_NSStepperTouchBarItem_NSStepperTouchBarItem, pollAction)
{
	zend_bool r = 0;
	zval *item_param = NULL;
	zend_long item;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &item_param);
	 r = ns_steppertouchbaritem_poll_action((uintptr_t) item) == 1; 
	RETURN_BOOL(r);
}

