
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

#include "ns-slidertouchbaritem.h"
#include <stdint.h>



/** NSSliderTouchBarItem */
ZEPHIR_INIT_CLASS(AppKit_NS_NSSliderTouchBarItem_NSSliderTouchBarItem)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSSliderTouchBarItem, NSSliderTouchBarItem, appkit, ns_nsslidertouchbaritem_nsslidertouchbaritem, appkit_ns_nsslidertouchbaritem_nsslidertouchbaritem_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSSliderTouchBarItem_NSSliderTouchBarItem, create)
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
	 h = (zend_long) ns_slidertouchbaritem_create(Z_STRVAL(identifier)); 
	RETURN_MM_LONG(h);
}

PHP_METHOD(AppKit_NS_NSSliderTouchBarItem_NSSliderTouchBarItem, wrap)
{
	zval *ptr_param = NULL;
	zend_long ptr, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(ptr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &ptr_param);
	 handle = (zend_long) ns_slidertouchbaritem_wrap((void *)(uintptr_t) ptr); 
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSSliderTouchBarItem_NSSliderTouchBarItem, destroy)
{
	zval *item_param = NULL;
	zend_long item;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &item_param);
	 ns_slidertouchbaritem_destroy((uintptr_t) item); 
}

PHP_METHOD(AppKit_NS_NSSliderTouchBarItem_NSSliderTouchBarItem, nsSliderTouchBarItem)
{
	zval *item_param = NULL;
	zend_long item, ptr = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &item_param);
	 ptr = (zend_long)(uintptr_t) ns_slidertouchbaritem_nsslidertouchbaritem((uintptr_t) item); 
	RETURN_LONG(ptr);
}

PHP_METHOD(AppKit_NS_NSSliderTouchBarItem_NSSliderTouchBarItem, setDoubleValue)
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
	 ns_slidertouchbaritem_set_double_value((uintptr_t) item, value); 
}

PHP_METHOD(AppKit_NS_NSSliderTouchBarItem_NSSliderTouchBarItem, getDoubleValue)
{
	double v = 0;
	zval *item_param = NULL;
	zend_long item;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &item_param);
	 v = ns_slidertouchbaritem_get_double_value((uintptr_t) item); 
	RETURN_DOUBLE(v);
}

PHP_METHOD(AppKit_NS_NSSliderTouchBarItem_NSSliderTouchBarItem, pollAction)
{
	zend_bool r = 0;
	zval *item_param = NULL;
	zend_long item;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &item_param);
	 r = ns_slidertouchbaritem_poll_action((uintptr_t) item) == 1; 
	RETURN_BOOL(r);
}

