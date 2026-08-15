
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

#include "ns-splitviewitem.h"
#include <stdint.h>



/** NSSplitViewItem — split pane descriptor for NSSplitViewController. */
ZEPHIR_INIT_CLASS(AppKit_NS_NSSplitViewItem_NSSplitViewItem)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSSplitViewItem, NSSplitViewItem, appkit, ns_nssplitviewitem_nssplitviewitem, appkit_ns_nssplitviewitem_nssplitviewitem_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSSplitViewItem_NSSplitViewItem, create)
{
	zval *viewController_param = NULL;
	zend_long viewController, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(viewController)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &viewController_param);
	
            handle = (zend_long) ns_splitviewitem_create((uintptr_t) viewController);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSSplitViewItem_NSSplitViewItem, createSidebar)
{
	zval *viewController_param = NULL;
	zend_long viewController, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(viewController)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &viewController_param);
	
            handle = (zend_long) ns_splitviewitem_create_sidebar((uintptr_t) viewController);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSSplitViewItem_NSSplitViewItem, createContentList)
{
	zval *viewController_param = NULL;
	zend_long viewController, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(viewController)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &viewController_param);
	
            handle = (zend_long) ns_splitviewitem_create_content_list((uintptr_t) viewController);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSSplitViewItem_NSSplitViewItem, createInspector)
{
	zval *viewController_param = NULL;
	zend_long viewController, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(viewController)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &viewController_param);
	
            handle = (zend_long) ns_splitviewitem_create_inspector((uintptr_t) viewController);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSSplitViewItem_NSSplitViewItem, wrap)
{
	zval *nsSplitViewItemPtr_param = NULL;
	zend_long nsSplitViewItemPtr, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(nsSplitViewItemPtr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &nsSplitViewItemPtr_param);
	
            handle = (zend_long) ns_splitviewitem_wrap((void *)(uintptr_t) nsSplitViewItemPtr);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSSplitViewItem_NSSplitViewItem, destroy)
{
	zval *item_param = NULL;
	zend_long item;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &item_param);
	
            ns_splitviewitem_destroy((uintptr_t) item);
        
}

PHP_METHOD(AppKit_NS_NSSplitViewItem_NSSplitViewItem, nsSplitViewItem)
{
	zval *item_param = NULL;
	zend_long item, ptr = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &item_param);
	
            ptr = (zend_long)(uintptr_t) ns_splitviewitem_nssplitviewitem((uintptr_t) item);
        
	RETURN_LONG(ptr);
}

PHP_METHOD(AppKit_NS_NSSplitViewItem_NSSplitViewItem, setViewController)
{
	zval *item_param = NULL, *viewController_param = NULL;
	zend_long item, viewController;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(item)
		Z_PARAM_LONG(viewController)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &item_param, &viewController_param);
	
            ns_splitviewitem_set_view_controller((uintptr_t) item, (uintptr_t) viewController);
        
}

PHP_METHOD(AppKit_NS_NSSplitViewItem_NSSplitViewItem, viewController)
{
	zval *item_param = NULL;
	zend_long item, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &item_param);
	
            handle = (zend_long) ns_splitviewitem_view_controller((uintptr_t) item);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSSplitViewItem_NSSplitViewItem, setCollapsed)
{
	zend_bool flag;
	zval *item_param = NULL, *flag_param = NULL;
	zend_long item;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(item)
		Z_PARAM_BOOL(flag)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &item_param, &flag_param);
	
            ns_splitviewitem_set_collapsed((uintptr_t) item, flag ? 1 : 0);
        
}

PHP_METHOD(AppKit_NS_NSSplitViewItem_NSSplitViewItem, isCollapsed)
{
	zend_bool result = 0;
	zval *item_param = NULL;
	zend_long item;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &item_param);
	
            result = ns_splitviewitem_is_collapsed((uintptr_t) item) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSSplitViewItem_NSSplitViewItem, setCanCollapse)
{
	zend_bool flag;
	zval *item_param = NULL, *flag_param = NULL;
	zend_long item;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(item)
		Z_PARAM_BOOL(flag)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &item_param, &flag_param);
	
            ns_splitviewitem_set_can_collapse((uintptr_t) item, flag ? 1 : 0);
        
}

PHP_METHOD(AppKit_NS_NSSplitViewItem_NSSplitViewItem, canCollapse)
{
	zend_bool result = 0;
	zval *item_param = NULL;
	zend_long item;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &item_param);
	
            result = ns_splitviewitem_can_collapse((uintptr_t) item) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSSplitViewItem_NSSplitViewItem, setMinimumThickness)
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
	
            ns_splitviewitem_set_minimum_thickness((uintptr_t) item, value);
        
}

PHP_METHOD(AppKit_NS_NSSplitViewItem_NSSplitViewItem, getMinimumThickness)
{
	double value = 0;
	zval *item_param = NULL;
	zend_long item;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &item_param);
	
            value = ns_splitviewitem_get_minimum_thickness((uintptr_t) item);
        
	RETURN_DOUBLE(value);
}

PHP_METHOD(AppKit_NS_NSSplitViewItem_NSSplitViewItem, setMaximumThickness)
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
	
            ns_splitviewitem_set_maximum_thickness((uintptr_t) item, value);
        
}

PHP_METHOD(AppKit_NS_NSSplitViewItem_NSSplitViewItem, getMaximumThickness)
{
	double value = 0;
	zval *item_param = NULL;
	zend_long item;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &item_param);
	
            value = ns_splitviewitem_get_maximum_thickness((uintptr_t) item);
        
	RETURN_DOUBLE(value);
}

PHP_METHOD(AppKit_NS_NSSplitViewItem_NSSplitViewItem, setPreferredThicknessFraction)
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
	
            ns_splitviewitem_set_preferred_thickness_fraction((uintptr_t) item, value);
        
}

PHP_METHOD(AppKit_NS_NSSplitViewItem_NSSplitViewItem, getPreferredThicknessFraction)
{
	double value = 0;
	zval *item_param = NULL;
	zend_long item;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &item_param);
	
            value = ns_splitviewitem_get_preferred_thickness_fraction((uintptr_t) item);
        
	RETURN_DOUBLE(value);
}

PHP_METHOD(AppKit_NS_NSSplitViewItem_NSSplitViewItem, setHoldingPriority)
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
	
            ns_splitviewitem_set_holding_priority((uintptr_t) item, priority);
        
}

PHP_METHOD(AppKit_NS_NSSplitViewItem_NSSplitViewItem, getHoldingPriority)
{
	double value = 0;
	zval *item_param = NULL;
	zend_long item;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &item_param);
	
            value = ns_splitviewitem_get_holding_priority((uintptr_t) item);
        
	RETURN_DOUBLE(value);
}

PHP_METHOD(AppKit_NS_NSSplitViewItem_NSSplitViewItem, setSpringLoaded)
{
	zend_bool flag;
	zval *item_param = NULL, *flag_param = NULL;
	zend_long item;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(item)
		Z_PARAM_BOOL(flag)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &item_param, &flag_param);
	
            ns_splitviewitem_set_spring_loaded((uintptr_t) item, flag ? 1 : 0);
        
}

PHP_METHOD(AppKit_NS_NSSplitViewItem_NSSplitViewItem, isSpringLoaded)
{
	zend_bool result = 0;
	zval *item_param = NULL;
	zend_long item;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &item_param);
	
            result = ns_splitviewitem_is_spring_loaded((uintptr_t) item) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSSplitViewItem_NSSplitViewItem, getBehavior)
{
	zval *item_param = NULL;
	zend_long item, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &item_param);
	
            value = (zend_long) ns_splitviewitem_get_behavior((uintptr_t) item);
        
	RETURN_LONG(value);
}

