
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

#include "ns-splitviewcontroller.h"
#include <stdint.h>



/** NSSplitViewController — container for side-by-side view controllers. */
ZEPHIR_INIT_CLASS(AppKit_NS_NSSplitViewController_NSSplitViewController)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSSplitViewController, NSSplitViewController, appkit, ns_nssplitviewcontroller_nssplitviewcontroller, appkit_ns_nssplitviewcontroller_nssplitviewcontroller_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSSplitViewController_NSSplitViewController, create)
{
	zend_long handle = 0;
	
            handle = (zend_long) ns_splitviewcontroller_create();
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSSplitViewController_NSSplitViewController, wrap)
{
	zval *nsSplitViewControllerPtr_param = NULL;
	zend_long nsSplitViewControllerPtr, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(nsSplitViewControllerPtr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &nsSplitViewControllerPtr_param);
	
            handle = (zend_long) ns_splitviewcontroller_wrap((void *)(uintptr_t) nsSplitViewControllerPtr);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSSplitViewController_NSSplitViewController, destroy)
{
	zval *controller_param = NULL;
	zend_long controller;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controller_param);
	
            ns_splitviewcontroller_destroy((uintptr_t) controller);
        
}

PHP_METHOD(AppKit_NS_NSSplitViewController_NSSplitViewController, nsSplitViewController)
{
	zval *controller_param = NULL;
	zend_long controller, ptr = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controller_param);
	
            ptr = (zend_long)(uintptr_t) ns_splitviewcontroller_nssplitviewcontroller((uintptr_t) controller);
        
	RETURN_LONG(ptr);
}

PHP_METHOD(AppKit_NS_NSSplitViewController_NSSplitViewController, addSplitViewItem)
{
	zval *controller_param = NULL, *item_param = NULL;
	zend_long controller, item;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(controller)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &controller_param, &item_param);
	
            ns_splitviewcontroller_add_split_view_item((uintptr_t) controller, (uintptr_t) item);
        
}

PHP_METHOD(AppKit_NS_NSSplitViewController_NSSplitViewController, removeSplitViewItem)
{
	zval *controller_param = NULL, *item_param = NULL;
	zend_long controller, item;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(controller)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &controller_param, &item_param);
	
            ns_splitviewcontroller_remove_split_view_item((uintptr_t) controller, (uintptr_t) item);
        
}

PHP_METHOD(AppKit_NS_NSSplitViewController_NSSplitViewController, splitViewItemCount)
{
	zval *controller_param = NULL;
	zend_long controller, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controller_param);
	
            value = (zend_long) ns_splitviewcontroller_split_view_item_count((uintptr_t) controller);
        
	RETURN_LONG(value);
}

PHP_METHOD(AppKit_NS_NSSplitViewController_NSSplitViewController, splitViewItemAt)
{
	zval *controller_param = NULL, *index_param = NULL;
	zend_long controller, index, handle = 0;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(controller)
		Z_PARAM_LONG(index)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &controller_param, &index_param);
	
            handle = (zend_long) ns_splitviewcontroller_split_view_item_at((uintptr_t) controller, (int) index);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSSplitViewController_NSSplitViewController, setMinimumThicknessForInlineSidebars)
{
	double value;
	zval *controller_param = NULL, *value_param = NULL;
	zend_long controller;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(controller)
		Z_PARAM_ZVAL(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &controller_param, &value_param);
	value = zephir_get_doubleval(value_param);
	
            ns_splitviewcontroller_set_minimum_thickness_for_inline_sidebars((uintptr_t) controller, value);
        
}

PHP_METHOD(AppKit_NS_NSSplitViewController_NSSplitViewController, getMinimumThicknessForInlineSidebars)
{
	double value = 0;
	zval *controller_param = NULL;
	zend_long controller;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controller_param);
	
            value = ns_splitviewcontroller_get_minimum_thickness_for_inline_sidebars((uintptr_t) controller);
        
	RETURN_DOUBLE(value);
}

PHP_METHOD(AppKit_NS_NSSplitViewController_NSSplitViewController, splitView)
{
	zval *controller_param = NULL;
	zend_long controller, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controller_param);
	
            handle = (zend_long) ns_splitviewcontroller_split_view((uintptr_t) controller);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSSplitViewController_NSSplitViewController, toggleSidebar)
{
	zval *controller_param = NULL;
	zend_long controller;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controller_param);
	
            ns_splitviewcontroller_toggle_sidebar((uintptr_t) controller);
        
}

