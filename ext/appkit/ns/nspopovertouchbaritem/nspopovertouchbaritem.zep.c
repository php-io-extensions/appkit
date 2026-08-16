
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

#include "ns-popovertouchbaritem.h"
#include <stdint.h>



/** NSPopoverTouchBarItem */
ZEPHIR_INIT_CLASS(AppKit_NS_NSPopoverTouchBarItem_NSPopoverTouchBarItem)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSPopoverTouchBarItem, NSPopoverTouchBarItem, appkit, ns_nspopovertouchbaritem_nspopovertouchbaritem, appkit_ns_nspopovertouchbaritem_nspopovertouchbaritem_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSPopoverTouchBarItem_NSPopoverTouchBarItem, create)
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
	 h = (zend_long) ns_popovertouchbaritem_create(Z_STRVAL(identifier)); 
	RETURN_MM_LONG(h);
}

PHP_METHOD(AppKit_NS_NSPopoverTouchBarItem_NSPopoverTouchBarItem, wrap)
{
	zval *ptr_param = NULL;
	zend_long ptr, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(ptr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &ptr_param);
	 handle = (zend_long) ns_popovertouchbaritem_wrap((void *)(uintptr_t) ptr); 
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSPopoverTouchBarItem_NSPopoverTouchBarItem, destroy)
{
	zval *item_param = NULL;
	zend_long item;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &item_param);
	 ns_popovertouchbaritem_destroy((uintptr_t) item); 
}

PHP_METHOD(AppKit_NS_NSPopoverTouchBarItem_NSPopoverTouchBarItem, nsPopoverTouchBarItem)
{
	zval *item_param = NULL;
	zend_long item, ptr = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &item_param);
	 ptr = (zend_long)(uintptr_t) ns_popovertouchbaritem_nspopovertouchbaritem((uintptr_t) item); 
	RETURN_LONG(ptr);
}

PHP_METHOD(AppKit_NS_NSPopoverTouchBarItem_NSPopoverTouchBarItem, setPopoverTouchBar)
{
	zval *item_param = NULL, *bar_param = NULL;
	zend_long item, bar;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(item)
		Z_PARAM_LONG(bar)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &item_param, &bar_param);
	 ns_popovertouchbaritem_set_popover_touchbar((uintptr_t) item, (uintptr_t) bar); 
}

PHP_METHOD(AppKit_NS_NSPopoverTouchBarItem_NSPopoverTouchBarItem, showPopover)
{
	zval *item_param = NULL;
	zend_long item;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &item_param);
	 ns_popovertouchbaritem_show_popover((uintptr_t) item); 
}

PHP_METHOD(AppKit_NS_NSPopoverTouchBarItem_NSPopoverTouchBarItem, dismissPopover)
{
	zval *item_param = NULL;
	zend_long item;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &item_param);
	 ns_popovertouchbaritem_dismiss_popover((uintptr_t) item); 
}

