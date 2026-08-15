
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

#include "ns-statusitem.h"
#include <stdint.h>



/**
 * NSStatusItem menu-bar status button.
 */
ZEPHIR_INIT_CLASS(AppKit_NS_NSStatusItem_NSStatusItem)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSStatusItem, NSStatusItem, appkit, ns_nsstatusitem_nsstatusitem, appkit_ns_nsstatusitem_nsstatusitem_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSStatusItem_NSStatusItem, create)
{
	zend_long handle = 0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *title_param = NULL;
	zval title;

	ZVAL_UNDEF(&title);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(title)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &title_param);
	zephir_get_strval(&title, title_param);
	
            handle = (zend_long) ns_statusitem_create(Z_STRVAL(title));
        
	RETURN_MM_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSStatusItem_NSStatusItem, wrap)
{
	zval *nsStatusItemPtr_param = NULL;
	zend_long nsStatusItemPtr, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(nsStatusItemPtr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &nsStatusItemPtr_param);
	
            handle = (zend_long) ns_statusitem_wrap_native((void *)(uintptr_t) nsStatusItemPtr);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSStatusItem_NSStatusItem, nsStatusItem)
{
	zval *item_param = NULL;
	zend_long item, ptr = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &item_param);
	
            ptr = (zend_long)(uintptr_t) ns_statusitem_nsstatusitem((uintptr_t) item);
        
	RETURN_LONG(ptr);
}

PHP_METHOD(AppKit_NS_NSStatusItem_NSStatusItem, destroy)
{
	zval *item_param = NULL;
	zend_long item;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &item_param);
	
            ns_statusitem_destroy((uintptr_t) item);
        
}

PHP_METHOD(AppKit_NS_NSStatusItem_NSStatusItem, setTitle)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval title;
	zval *item_param = NULL, *title_param = NULL;
	zend_long item;

	ZVAL_UNDEF(&title);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(item)
		Z_PARAM_STR(title)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &item_param, &title_param);
	zephir_get_strval(&title, title_param);
	
            ns_statusitem_set_title((uintptr_t) item, Z_STRVAL(title));
        
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSStatusItem_NSStatusItem, pollClick)
{
	zend_bool result = 0;
	zval *item_param = NULL;
	zend_long item;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &item_param);
	
            result = ns_statusitem_poll_click((uintptr_t) item) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSStatusItem_NSStatusItem, button)
{
	zval *item_param = NULL;
	zend_long item, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &item_param);
	
            handle = (zend_long) ns_statusitem_button((uintptr_t) item);
        
	RETURN_LONG(handle);
}

