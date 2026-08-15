
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

#include "ns-controller.h"
#include <stdint.h>



/**
 * NSController Cocoa bindings editor base.
 */
ZEPHIR_INIT_CLASS(AppKit_NS_NSController_NSController)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSController, NSController, appkit, ns_nscontroller_nscontroller, appkit_ns_nscontroller_nscontroller_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSController_NSController, create)
{
	zend_long handle = 0;
	
            handle = (zend_long) ns_controller_create();
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSController_NSController, wrap)
{
	zval *nsControllerPtr_param = NULL;
	zend_long nsControllerPtr, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(nsControllerPtr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &nsControllerPtr_param);
	
            handle = (zend_long) ns_controller_wrap((void *)(uintptr_t) nsControllerPtr);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSController_NSController, destroy)
{
	zval *controller_param = NULL;
	zend_long controller;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controller_param);
	
            ns_controller_destroy((uintptr_t) controller);
        
}

PHP_METHOD(AppKit_NS_NSController_NSController, nsController)
{
	zval *controller_param = NULL;
	zend_long controller, ptr = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controller_param);
	
            ptr = (zend_long)(uintptr_t) ns_controller_nscontroller((uintptr_t) controller);
        
	RETURN_LONG(ptr);
}

PHP_METHOD(AppKit_NS_NSController_NSController, discardEditing)
{
	zval *controller_param = NULL;
	zend_long controller;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controller_param);
	
            ns_controller_discard_editing((uintptr_t) controller);
        
}

PHP_METHOD(AppKit_NS_NSController_NSController, commitEditing)
{
	zend_bool result = 0;
	zval *controller_param = NULL;
	zend_long controller;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controller_param);
	
            result = ns_controller_commit_editing((uintptr_t) controller) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSController_NSController, isEditing)
{
	zend_bool result = 0;
	zval *controller_param = NULL;
	zend_long controller;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controller_param);
	
            result = ns_controller_is_editing((uintptr_t) controller) == 1;
        
	RETURN_BOOL(result);
}

