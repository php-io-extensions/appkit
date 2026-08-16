
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

#include "ns-touchbaritem.h"
#include <stdint.h>



/** NSTouchBarItem base item */
ZEPHIR_INIT_CLASS(AppKit_NS_NSTouchBarItem_NSTouchBarItem)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSTouchBarItem, NSTouchBarItem, appkit, ns_nstouchbaritem_nstouchbaritem, appkit_ns_nstouchbaritem_nstouchbaritem_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSTouchBarItem_NSTouchBarItem, create)
{
	zend_long handle = 0;
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
	 handle = (zend_long) ns_touchbaritem_create(Z_STRVAL(identifier)); 
	RETURN_MM_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSTouchBarItem_NSTouchBarItem, wrap)
{
	zval *nsTouchBarItemPtr_param = NULL;
	zend_long nsTouchBarItemPtr, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(nsTouchBarItemPtr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &nsTouchBarItemPtr_param);
	 handle = (zend_long) ns_touchbaritem_wrap((void *)(uintptr_t) nsTouchBarItemPtr); 
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSTouchBarItem_NSTouchBarItem, destroy)
{
	zval *item_param = NULL;
	zend_long item;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &item_param);
	 ns_touchbaritem_destroy((uintptr_t) item); 
}

PHP_METHOD(AppKit_NS_NSTouchBarItem_NSTouchBarItem, nsTouchBarItem)
{
	zval *item_param = NULL;
	zend_long item, ptr = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &item_param);
	 ptr = (zend_long)(uintptr_t) ns_touchbaritem_nstouchbaritem((uintptr_t) item); 
	RETURN_LONG(ptr);
}

PHP_METHOD(AppKit_NS_NSTouchBarItem_NSTouchBarItem, getIdentifier)
{
	zval *item_param = NULL;
	zend_long item;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &item_param);
	 char buf[4096]; buf[0] = '\0'; if (ns_touchbaritem_get_identifier((uintptr_t) item, buf, (int) sizeof(buf))) { RETURN_STRING(buf); } RETURN_EMPTY_STRING(); 
	RETURN_STRING("");
}

PHP_METHOD(AppKit_NS_NSTouchBarItem_NSTouchBarItem, setVisibilityPriority)
{
	double priority;
	zval *item_param = NULL, *priority_param = NULL;
	zend_long item;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(item)
		Z_PARAM_ZVAL(priority)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &item_param, &priority_param);
	priority = zephir_get_doubleval(priority_param);
	 ns_touchbaritem_set_visibility_priority((uintptr_t) item, (float) priority); 
}

PHP_METHOD(AppKit_NS_NSTouchBarItem_NSTouchBarItem, getVisibilityPriority)
{
	double value = 0;
	zval *item_param = NULL;
	zend_long item;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &item_param);
	 value = (double) ns_touchbaritem_get_visibility_priority((uintptr_t) item); 
	RETURN_DOUBLE(value);
}

PHP_METHOD(AppKit_NS_NSTouchBarItem_NSTouchBarItem, getCustomizationLabel)
{
	zval *item_param = NULL;
	zend_long item;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &item_param);
	 char buf[4096]; buf[0] = '\0'; if (ns_touchbaritem_get_customization_label((uintptr_t) item, buf, (int) sizeof(buf))) { RETURN_STRING(buf); } RETURN_EMPTY_STRING(); 
	RETURN_STRING("");
}

PHP_METHOD(AppKit_NS_NSTouchBarItem_NSTouchBarItem, isVisible)
{
	zend_bool r = 0;
	zval *item_param = NULL;
	zend_long item;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &item_param);
	 r = ns_touchbaritem_is_visible((uintptr_t) item) == 1; 
	RETURN_BOOL(r);
}

PHP_METHOD(AppKit_NS_NSTouchBarItem_NSTouchBarItem, getView)
{
	zval *item_param = NULL;
	zend_long item, h = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &item_param);
	 h = (zend_long) ns_touchbaritem_get_view((uintptr_t) item); 
	RETURN_LONG(h);
}

