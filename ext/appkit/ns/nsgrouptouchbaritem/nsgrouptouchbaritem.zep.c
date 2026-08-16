
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

#include "ns-grouptouchbaritem.h"
#include <stdint.h>



/** NSGroupTouchBarItem */
ZEPHIR_INIT_CLASS(AppKit_NS_NSGroupTouchBarItem_NSGroupTouchBarItem)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSGroupTouchBarItem, NSGroupTouchBarItem, appkit, ns_nsgrouptouchbaritem_nsgrouptouchbaritem, appkit_ns_nsgrouptouchbaritem_nsgrouptouchbaritem_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSGroupTouchBarItem_NSGroupTouchBarItem, groupItem)
{
	zend_long h = 0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval items;
	zval *identifier_param = NULL, *items_param = NULL;
	zval identifier;

	ZVAL_UNDEF(&identifier);
	ZVAL_UNDEF(&items);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_STR(identifier)
		Z_PARAM_ARRAY(items)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &identifier_param, &items_param);
	zephir_get_strval(&identifier, identifier_param);
	zephir_get_arrval(&items, items_param);
	
        zval *entry; uintptr_t handles[256]; int count = 0;
        ZEND_HASH_FOREACH_VAL(Z_ARRVAL(items), entry) { if (count >= 256) break; convert_to_long(entry); handles[count++] = (uintptr_t) Z_LVAL_P(entry); } ZEND_HASH_FOREACH_END();
        h = (zend_long) ns_grouptouchbaritem_group_item(Z_STRVAL(identifier), handles, count);
    
	RETURN_MM_LONG(h);
}

PHP_METHOD(AppKit_NS_NSGroupTouchBarItem_NSGroupTouchBarItem, alertStyleGroupItem)
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
	 h = (zend_long) ns_grouptouchbaritem_alert_style_group_item(Z_STRVAL(identifier)); 
	RETURN_MM_LONG(h);
}

PHP_METHOD(AppKit_NS_NSGroupTouchBarItem_NSGroupTouchBarItem, wrap)
{
	zval *ptr_param = NULL;
	zend_long ptr, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(ptr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &ptr_param);
	 handle = (zend_long) ns_grouptouchbaritem_wrap((void *)(uintptr_t) ptr); 
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSGroupTouchBarItem_NSGroupTouchBarItem, destroy)
{
	zval *item_param = NULL;
	zend_long item;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &item_param);
	 ns_grouptouchbaritem_destroy((uintptr_t) item); 
}

PHP_METHOD(AppKit_NS_NSGroupTouchBarItem_NSGroupTouchBarItem, nsGroupTouchBarItem)
{
	zval *item_param = NULL;
	zend_long item, ptr = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &item_param);
	 ptr = (zend_long)(uintptr_t) ns_grouptouchbaritem_nsgrouptouchbaritem((uintptr_t) item); 
	RETURN_LONG(ptr);
}

PHP_METHOD(AppKit_NS_NSGroupTouchBarItem_NSGroupTouchBarItem, setGroupTouchBar)
{
	zval *item_param = NULL, *bar_param = NULL;
	zend_long item, bar;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(item)
		Z_PARAM_LONG(bar)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &item_param, &bar_param);
	 ns_grouptouchbaritem_set_group_touchbar((uintptr_t) item, (uintptr_t) bar); 
}

PHP_METHOD(AppKit_NS_NSGroupTouchBarItem_NSGroupTouchBarItem, getGroupTouchBar)
{
	zval *item_param = NULL;
	zend_long item, h = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &item_param);
	 h = (zend_long) ns_grouptouchbaritem_get_group_touchbar((uintptr_t) item); 
	RETURN_LONG(h);
}

