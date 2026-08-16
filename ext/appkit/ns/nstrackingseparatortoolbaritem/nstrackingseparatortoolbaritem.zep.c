
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

#include "ns-trackingseparatortoolbaritem.h"
#include <stdint.h>



/** NSTrackingSeparatorToolbarItem — split-view tracking separator (macOS 11.0+). */
ZEPHIR_INIT_CLASS(AppKit_NS_NSTrackingSeparatorToolbarItem_NSTrackingSeparatorToolbarItem)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSTrackingSeparatorToolbarItem, NSTrackingSeparatorToolbarItem, appkit, ns_nstrackingseparatortoolbaritem_nstrackingseparatortoolbaritem, appkit_ns_nstrackingseparatortoolbaritem_nstrackingseparatortoolbaritem_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSTrackingSeparatorToolbarItem_NSTrackingSeparatorToolbarItem, create)
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
	
            handle = (zend_long) ns_trackingseparatortoolbaritem_create(Z_STRVAL(identifier));
        
	RETURN_MM_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSTrackingSeparatorToolbarItem_NSTrackingSeparatorToolbarItem, trackingSeparator)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long splitView, dividerIndex, handle = 0;
	zval *identifier_param = NULL, *splitView_param = NULL, *dividerIndex_param = NULL;
	zval identifier;

	ZVAL_UNDEF(&identifier);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_STR(identifier)
		Z_PARAM_LONG(splitView)
		Z_PARAM_LONG(dividerIndex)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &identifier_param, &splitView_param, &dividerIndex_param);
	zephir_get_strval(&identifier, identifier_param);
	
            handle = (zend_long) ns_trackingseparatortoolbaritem_tracking_separator(
                Z_STRVAL(identifier),
                (uintptr_t) splitView,
                (int) dividerIndex
            );
        
	RETURN_MM_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSTrackingSeparatorToolbarItem_NSTrackingSeparatorToolbarItem, wrap)
{
	zval *nsTrackingSeparatorToolbarItemPtr_param = NULL;
	zend_long nsTrackingSeparatorToolbarItemPtr, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(nsTrackingSeparatorToolbarItemPtr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &nsTrackingSeparatorToolbarItemPtr_param);
	
            handle = (zend_long) ns_trackingseparatortoolbaritem_wrap((void *)(uintptr_t) nsTrackingSeparatorToolbarItemPtr);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSTrackingSeparatorToolbarItem_NSTrackingSeparatorToolbarItem, destroy)
{
	zval *item_param = NULL;
	zend_long item;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &item_param);
	
            ns_trackingseparatortoolbaritem_destroy((uintptr_t) item);
        
}

PHP_METHOD(AppKit_NS_NSTrackingSeparatorToolbarItem_NSTrackingSeparatorToolbarItem, nsTrackingSeparatorToolbarItem)
{
	zval *item_param = NULL;
	zend_long item, ptr = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &item_param);
	
            ptr = (zend_long)(uintptr_t) ns_trackingseparatortoolbaritem_nstrackingseparatortoolbaritem((uintptr_t) item);
        
	RETURN_LONG(ptr);
}

PHP_METHOD(AppKit_NS_NSTrackingSeparatorToolbarItem_NSTrackingSeparatorToolbarItem, setSplitView)
{
	zval *item_param = NULL, *splitView_param = NULL;
	zend_long item, splitView;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(item)
		Z_PARAM_LONG(splitView)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &item_param, &splitView_param);
	
            ns_trackingseparatortoolbaritem_set_split_view((uintptr_t) item, (uintptr_t) splitView);
        
}

PHP_METHOD(AppKit_NS_NSTrackingSeparatorToolbarItem_NSTrackingSeparatorToolbarItem, getSplitView)
{
	zval *item_param = NULL;
	zend_long item, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &item_param);
	
            handle = (zend_long) ns_trackingseparatortoolbaritem_get_split_view((uintptr_t) item);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSTrackingSeparatorToolbarItem_NSTrackingSeparatorToolbarItem, setDividerIndex)
{
	zval *item_param = NULL, *dividerIndex_param = NULL;
	zend_long item, dividerIndex;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(item)
		Z_PARAM_LONG(dividerIndex)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &item_param, &dividerIndex_param);
	
            ns_trackingseparatortoolbaritem_set_divider_index((uintptr_t) item, (int) dividerIndex);
        
}

PHP_METHOD(AppKit_NS_NSTrackingSeparatorToolbarItem_NSTrackingSeparatorToolbarItem, getDividerIndex)
{
	zval *item_param = NULL;
	zend_long item, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &item_param);
	
            value = (zend_long) ns_trackingseparatortoolbaritem_get_divider_index((uintptr_t) item);
        
	RETURN_LONG(value);
}

