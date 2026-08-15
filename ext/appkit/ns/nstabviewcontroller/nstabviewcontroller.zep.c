
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
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"

#include "ns-tabviewcontroller.h"
#include <stdint.h>



/** NSTabViewController — tabbed container view controller. */
ZEPHIR_INIT_CLASS(AppKit_NS_NSTabViewController_NSTabViewController)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSTabViewController, NSTabViewController, appkit, ns_nstabviewcontroller_nstabviewcontroller, appkit_ns_nstabviewcontroller_nstabviewcontroller_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSTabViewController_NSTabViewController, create)
{
	zend_long handle = 0;
	
            handle = (zend_long) ns_tabviewcontroller_create();
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSTabViewController_NSTabViewController, wrap)
{
	zval *nsTabViewControllerPtr_param = NULL;
	zend_long nsTabViewControllerPtr, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(nsTabViewControllerPtr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &nsTabViewControllerPtr_param);
	
            handle = (zend_long) ns_tabviewcontroller_wrap((void *)(uintptr_t) nsTabViewControllerPtr);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSTabViewController_NSTabViewController, destroy)
{
	zval *controller_param = NULL;
	zend_long controller;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controller_param);
	
            ns_tabviewcontroller_destroy((uintptr_t) controller);
        
}

PHP_METHOD(AppKit_NS_NSTabViewController_NSTabViewController, nsTabViewController)
{
	zval *controller_param = NULL;
	zend_long controller, ptr = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controller_param);
	
            ptr = (zend_long)(uintptr_t) ns_tabviewcontroller_nstabviewcontroller((uintptr_t) controller);
        
	RETURN_LONG(ptr);
}

PHP_METHOD(AppKit_NS_NSTabViewController_NSTabViewController, setTabStyle)
{
	zval *controller_param = NULL, *style_param = NULL;
	zend_long controller, style;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(controller)
		Z_PARAM_LONG(style)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &controller_param, &style_param);
	
            ns_tabviewcontroller_set_tab_style((uintptr_t) controller, (int) style);
        
}

PHP_METHOD(AppKit_NS_NSTabViewController_NSTabViewController, getTabStyle)
{
	zval *controller_param = NULL;
	zend_long controller, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controller_param);
	
            value = (zend_long) ns_tabviewcontroller_get_tab_style((uintptr_t) controller);
        
	RETURN_LONG(value);
}

PHP_METHOD(AppKit_NS_NSTabViewController_NSTabViewController, setSelectedTabViewItemIndex)
{
	zval *controller_param = NULL, *index_param = NULL;
	zend_long controller, index;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(controller)
		Z_PARAM_LONG(index)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &controller_param, &index_param);
	
            ns_tabviewcontroller_set_selected_tab_view_item_index((uintptr_t) controller, (int) index);
        
}

PHP_METHOD(AppKit_NS_NSTabViewController_NSTabViewController, getSelectedTabViewItemIndex)
{
	zval *controller_param = NULL;
	zend_long controller, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controller_param);
	
            value = (zend_long) ns_tabviewcontroller_get_selected_tab_view_item_index((uintptr_t) controller);
        
	RETURN_LONG(value);
}

PHP_METHOD(AppKit_NS_NSTabViewController_NSTabViewController, addTabViewItem)
{
	zval *controller_param = NULL, *item_param = NULL;
	zend_long controller, item;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(controller)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &controller_param, &item_param);
	
            ns_tabviewcontroller_add_tab_view_item((uintptr_t) controller, (uintptr_t) item);
        
}

PHP_METHOD(AppKit_NS_NSTabViewController_NSTabViewController, removeTabViewItem)
{
	zval *controller_param = NULL, *item_param = NULL;
	zend_long controller, item;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(controller)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &controller_param, &item_param);
	
            ns_tabviewcontroller_remove_tab_view_item((uintptr_t) controller, (uintptr_t) item);
        
}

PHP_METHOD(AppKit_NS_NSTabViewController_NSTabViewController, tabViewItemCount)
{
	zval *controller_param = NULL;
	zend_long controller, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controller_param);
	
            value = (zend_long) ns_tabviewcontroller_tab_view_item_count((uintptr_t) controller);
        
	RETURN_LONG(value);
}

PHP_METHOD(AppKit_NS_NSTabViewController_NSTabViewController, tabView)
{
	zval *controller_param = NULL;
	zend_long controller, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controller_param);
	
            handle = (zend_long) ns_tabviewcontroller_tab_view((uintptr_t) controller);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSTabViewController_NSTabViewController, setCanPropagateSelectedChildViewControllerTitle)
{
	zend_bool flag;
	zval *controller_param = NULL, *flag_param = NULL;
	zend_long controller;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(controller)
		Z_PARAM_BOOL(flag)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &controller_param, &flag_param);
	
            ns_tabviewcontroller_set_can_propagate_selected_child_view_controller_title((uintptr_t) controller, flag ? 1 : 0);
        
}

PHP_METHOD(AppKit_NS_NSTabViewController_NSTabViewController, canPropagateSelectedChildViewControllerTitle)
{
	zend_bool result = 0;
	zval *controller_param = NULL;
	zend_long controller;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controller_param);
	
            result = ns_tabviewcontroller_can_propagate_selected_child_view_controller_title((uintptr_t) controller) == 1;
        
	RETURN_BOOL(result);
}

