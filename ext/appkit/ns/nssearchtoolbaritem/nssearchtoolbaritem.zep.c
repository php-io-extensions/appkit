
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

#include "ns-searchtoolbaritem.h"
#include <stdint.h>



/** NSSearchToolbarItem — toolbar search field item (macOS 11.0+). */
ZEPHIR_INIT_CLASS(AppKit_NS_NSSearchToolbarItem_NSSearchToolbarItem)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSSearchToolbarItem, NSSearchToolbarItem, appkit, ns_nssearchtoolbaritem_nssearchtoolbaritem, appkit_ns_nssearchtoolbaritem_nssearchtoolbaritem_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSSearchToolbarItem_NSSearchToolbarItem, create)
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
	
            handle = (zend_long) ns_searchtoolbaritem_create(Z_STRVAL(identifier));
        
	RETURN_MM_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSSearchToolbarItem_NSSearchToolbarItem, wrap)
{
	zval *nsSearchToolbarItemPtr_param = NULL;
	zend_long nsSearchToolbarItemPtr, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(nsSearchToolbarItemPtr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &nsSearchToolbarItemPtr_param);
	
            handle = (zend_long) ns_searchtoolbaritem_wrap((void *)(uintptr_t) nsSearchToolbarItemPtr);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSSearchToolbarItem_NSSearchToolbarItem, destroy)
{
	zval *item_param = NULL;
	zend_long item;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &item_param);
	
            ns_searchtoolbaritem_destroy((uintptr_t) item);
        
}

PHP_METHOD(AppKit_NS_NSSearchToolbarItem_NSSearchToolbarItem, nsSearchToolbarItem)
{
	zval *item_param = NULL;
	zend_long item, ptr = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &item_param);
	
            ptr = (zend_long)(uintptr_t) ns_searchtoolbaritem_nssearchtoolbaritem((uintptr_t) item);
        
	RETURN_LONG(ptr);
}

PHP_METHOD(AppKit_NS_NSSearchToolbarItem_NSSearchToolbarItem, setSearchField)
{
	zval *item_param = NULL, *searchField_param = NULL;
	zend_long item, searchField;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(item)
		Z_PARAM_LONG(searchField)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &item_param, &searchField_param);
	
            ns_searchtoolbaritem_set_search_field((uintptr_t) item, (uintptr_t) searchField);
        
}

PHP_METHOD(AppKit_NS_NSSearchToolbarItem_NSSearchToolbarItem, getSearchField)
{
	zval *item_param = NULL;
	zend_long item, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &item_param);
	
            handle = (zend_long) ns_searchtoolbaritem_get_search_field((uintptr_t) item);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSSearchToolbarItem_NSSearchToolbarItem, setResignsFirstResponderWithCancel)
{
	zend_bool flag;
	zval *item_param = NULL, *flag_param = NULL;
	zend_long item;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(item)
		Z_PARAM_BOOL(flag)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &item_param, &flag_param);
	
            ns_searchtoolbaritem_set_resigns_first_responder_with_cancel((uintptr_t) item, flag ? 1 : 0);
        
}

PHP_METHOD(AppKit_NS_NSSearchToolbarItem_NSSearchToolbarItem, resignsFirstResponderWithCancel)
{
	zend_bool result = 0;
	zval *item_param = NULL;
	zend_long item;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &item_param);
	
            result = ns_searchtoolbaritem_resigns_first_responder_with_cancel((uintptr_t) item) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSSearchToolbarItem_NSSearchToolbarItem, setPreferredWidthForSearchField)
{
	double width;
	zval *item_param = NULL, *width_param = NULL;
	zend_long item;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(item)
		Z_PARAM_ZVAL(width)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &item_param, &width_param);
	width = zephir_get_doubleval(width_param);
	
            ns_searchtoolbaritem_set_preferred_width_for_search_field((uintptr_t) item, (double) width);
        
}

PHP_METHOD(AppKit_NS_NSSearchToolbarItem_NSSearchToolbarItem, preferredWidthForSearchField)
{
	double value = 0;
	zval *item_param = NULL;
	zend_long item;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &item_param);
	
            value = ns_searchtoolbaritem_preferred_width_for_search_field((uintptr_t) item);
        
	RETURN_DOUBLE(value);
}

PHP_METHOD(AppKit_NS_NSSearchToolbarItem_NSSearchToolbarItem, beginSearchInteraction)
{
	zval *item_param = NULL;
	zend_long item;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &item_param);
	
            ns_searchtoolbaritem_begin_search_interaction((uintptr_t) item);
        
}

PHP_METHOD(AppKit_NS_NSSearchToolbarItem_NSSearchToolbarItem, endSearchInteraction)
{
	zval *item_param = NULL;
	zend_long item;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &item_param);
	
            ns_searchtoolbaritem_end_search_interaction((uintptr_t) item);
        
}

