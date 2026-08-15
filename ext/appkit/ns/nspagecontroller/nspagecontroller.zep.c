
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

#include "ns-pagecontroller.h"
#include <stdint.h>



/** NSPageController — page history / stack navigation controller. */
ZEPHIR_INIT_CLASS(AppKit_NS_NSPageController_NSPageController)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSPageController, NSPageController, appkit, ns_nspagecontroller_nspagecontroller, appkit_ns_nspagecontroller_nspagecontroller_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSPageController_NSPageController, create)
{
	zend_long handle = 0;
	
            handle = (zend_long) ns_pagecontroller_create();
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSPageController_NSPageController, wrap)
{
	zval *nsPageControllerPtr_param = NULL;
	zend_long nsPageControllerPtr, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(nsPageControllerPtr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &nsPageControllerPtr_param);
	
            handle = (zend_long) ns_pagecontroller_wrap((void *)(uintptr_t) nsPageControllerPtr);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSPageController_NSPageController, destroy)
{
	zval *controller_param = NULL;
	zend_long controller;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controller_param);
	
            ns_pagecontroller_destroy((uintptr_t) controller);
        
}

PHP_METHOD(AppKit_NS_NSPageController_NSPageController, nsPageController)
{
	zval *controller_param = NULL;
	zend_long controller, ptr = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controller_param);
	
            ptr = (zend_long)(uintptr_t) ns_pagecontroller_nspagecontroller((uintptr_t) controller);
        
	RETURN_LONG(ptr);
}

PHP_METHOD(AppKit_NS_NSPageController_NSPageController, setTransitionStyle)
{
	zval *controller_param = NULL, *style_param = NULL;
	zend_long controller, style;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(controller)
		Z_PARAM_LONG(style)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &controller_param, &style_param);
	
            ns_pagecontroller_set_transition_style((uintptr_t) controller, (int) style);
        
}

PHP_METHOD(AppKit_NS_NSPageController_NSPageController, getTransitionStyle)
{
	zval *controller_param = NULL;
	zend_long controller, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controller_param);
	
            value = (zend_long) ns_pagecontroller_get_transition_style((uintptr_t) controller);
        
	RETURN_LONG(value);
}

PHP_METHOD(AppKit_NS_NSPageController_NSPageController, setSelectedIndex)
{
	zval *controller_param = NULL, *index_param = NULL;
	zend_long controller, index;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(controller)
		Z_PARAM_LONG(index)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &controller_param, &index_param);
	
            ns_pagecontroller_set_selected_index((uintptr_t) controller, (int) index);
        
}

PHP_METHOD(AppKit_NS_NSPageController_NSPageController, getSelectedIndex)
{
	zval *controller_param = NULL;
	zend_long controller, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controller_param);
	
            value = (zend_long) ns_pagecontroller_get_selected_index((uintptr_t) controller);
        
	RETURN_LONG(value);
}

PHP_METHOD(AppKit_NS_NSPageController_NSPageController, arrangedObjectCount)
{
	zval *controller_param = NULL;
	zend_long controller, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controller_param);
	
            value = (zend_long) ns_pagecontroller_arranged_object_count((uintptr_t) controller);
        
	RETURN_LONG(value);
}

PHP_METHOD(AppKit_NS_NSPageController_NSPageController, navigateForwardToObject)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval objectId;
	zval *controller_param = NULL, *objectId_param = NULL;
	zend_long controller;

	ZVAL_UNDEF(&objectId);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(controller)
		Z_PARAM_STR(objectId)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &controller_param, &objectId_param);
	zephir_get_strval(&objectId, objectId_param);
	
            ns_pagecontroller_navigate_forward_to_object((uintptr_t) controller, Z_STRVAL(objectId));
        
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSPageController_NSPageController, navigateBack)
{
	zval *controller_param = NULL;
	zend_long controller;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controller_param);
	
            ns_pagecontroller_navigate_back((uintptr_t) controller);
        
}

PHP_METHOD(AppKit_NS_NSPageController_NSPageController, navigateForward)
{
	zval *controller_param = NULL;
	zend_long controller;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controller_param);
	
            ns_pagecontroller_navigate_forward((uintptr_t) controller);
        
}

PHP_METHOD(AppKit_NS_NSPageController_NSPageController, completeTransition)
{
	zval *controller_param = NULL;
	zend_long controller;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controller_param);
	
            ns_pagecontroller_complete_transition((uintptr_t) controller);
        
}

PHP_METHOD(AppKit_NS_NSPageController_NSPageController, selectedViewController)
{
	zval *controller_param = NULL;
	zend_long controller, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controller_param);
	
            handle = (zend_long) ns_pagecontroller_selected_view_controller((uintptr_t) controller);
        
	RETURN_LONG(handle);
}

