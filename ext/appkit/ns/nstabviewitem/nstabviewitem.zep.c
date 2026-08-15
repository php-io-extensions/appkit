
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
#include "kernel/memory.h"
#include "kernel/operators.h"
#include "kernel/object.h"

#include "ns-tabviewitem.h"
#include <stdint.h>



/** NSTabViewItem — single tab in an NSTabView or NSTabViewController. */
ZEPHIR_INIT_CLASS(AppKit_NS_NSTabViewItem_NSTabViewItem)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSTabViewItem, NSTabViewItem, appkit, ns_nstabviewitem_nstabviewitem, appkit_ns_nstabviewitem_nstabviewitem_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSTabViewItem_NSTabViewItem, create)
{
	zend_long handle = 0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *identifier_param = NULL;
	zval identifier;

	ZVAL_UNDEF(&identifier);
	ZEND_PARSE_PARAMETERS_START(0, 1)
		Z_PARAM_OPTIONAL
		Z_PARAM_STR(identifier)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 0, 1, &identifier_param);
	if (!identifier_param) {
		ZEPHIR_INIT_VAR(&identifier);
		ZVAL_STRING(&identifier, "tab");
	} else {
		zephir_get_strval(&identifier, identifier_param);
	}
	
            handle = (zend_long) ns_tabviewitem_create(Z_STRVAL(identifier));
        
	RETURN_MM_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSTabViewItem_NSTabViewItem, createWithViewController)
{
	zval *viewController_param = NULL;
	zend_long viewController, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(viewController)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &viewController_param);
	
            handle = (zend_long) ns_tabviewitem_create_with_view_controller((uintptr_t) viewController);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSTabViewItem_NSTabViewItem, wrap)
{
	zval *nsTabViewItemPtr_param = NULL;
	zend_long nsTabViewItemPtr, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(nsTabViewItemPtr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &nsTabViewItemPtr_param);
	
            handle = (zend_long) ns_tabviewitem_wrap((void *)(uintptr_t) nsTabViewItemPtr);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSTabViewItem_NSTabViewItem, destroy)
{
	zval *item_param = NULL;
	zend_long item;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &item_param);
	
            ns_tabviewitem_destroy((uintptr_t) item);
        
}

PHP_METHOD(AppKit_NS_NSTabViewItem_NSTabViewItem, nsTabViewItem)
{
	zval *item_param = NULL;
	zend_long item, ptr = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &item_param);
	
            ptr = (zend_long)(uintptr_t) ns_tabviewitem_nstabviewitem((uintptr_t) item);
        
	RETURN_LONG(ptr);
}

PHP_METHOD(AppKit_NS_NSTabViewItem_NSTabViewItem, setLabel)
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
	
            ns_tabviewitem_set_label((uintptr_t) item, Z_STRVAL(label));
        
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSTabViewItem_NSTabViewItem, getLabel)
{
	zval *item_param = NULL;
	zend_long item;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &item_param);
	
            char buf[4096];
            buf[0] = '\0';
            if (ns_tabviewitem_get_label((uintptr_t) item, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        
	RETURN_STRING("");
}

PHP_METHOD(AppKit_NS_NSTabViewItem_NSTabViewItem, setToolTip)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval tip;
	zval *item_param = NULL, *tip_param = NULL;
	zend_long item;

	ZVAL_UNDEF(&tip);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(item)
		Z_PARAM_STR(tip)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &item_param, &tip_param);
	zephir_get_strval(&tip, tip_param);
	
            ns_tabviewitem_set_tool_tip((uintptr_t) item, Z_STRVAL(tip));
        
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSTabViewItem_NSTabViewItem, getToolTip)
{
	zval *item_param = NULL;
	zend_long item;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &item_param);
	
            char buf[4096];
            buf[0] = '\0';
            if (ns_tabviewitem_get_tool_tip((uintptr_t) item, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        
	RETURN_STRING("");
}

PHP_METHOD(AppKit_NS_NSTabViewItem_NSTabViewItem, setView)
{
	zval *item_param = NULL, *view_param = NULL;
	zend_long item, view;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(item)
		Z_PARAM_LONG(view)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &item_param, &view_param);
	
            ns_tabviewitem_set_view((uintptr_t) item, (uintptr_t) view);
        
}

PHP_METHOD(AppKit_NS_NSTabViewItem_NSTabViewItem, view)
{
	zval *item_param = NULL;
	zend_long item, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &item_param);
	
            handle = (zend_long) ns_tabviewitem_view((uintptr_t) item);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSTabViewItem_NSTabViewItem, setViewController)
{
	zval *item_param = NULL, *viewController_param = NULL;
	zend_long item, viewController;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(item)
		Z_PARAM_LONG(viewController)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &item_param, &viewController_param);
	
            ns_tabviewitem_set_view_controller((uintptr_t) item, (uintptr_t) viewController);
        
}

PHP_METHOD(AppKit_NS_NSTabViewItem_NSTabViewItem, viewController)
{
	zval *item_param = NULL;
	zend_long item, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &item_param);
	
            handle = (zend_long) ns_tabviewitem_view_controller((uintptr_t) item);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSTabViewItem_NSTabViewItem, tabState)
{
	zval *item_param = NULL;
	zend_long item, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &item_param);
	
            value = (zend_long) ns_tabviewitem_get_tab_state((uintptr_t) item);
        
	RETURN_LONG(value);
}

