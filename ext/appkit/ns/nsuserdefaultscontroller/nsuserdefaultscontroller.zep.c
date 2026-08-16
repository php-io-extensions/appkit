
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

#include "ns-userdefaultscontroller.h"
#include <stdint.h>



/**
 * NSUserDefaultsController — Cocoa bindings controller for NSUserDefaults.
 */
ZEPHIR_INIT_CLASS(AppKit_NS_NSUserDefaultsController_NSUserDefaultsController)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSUserDefaultsController, NSUserDefaultsController, appkit, ns_nsuserdefaultscontroller_nsuserdefaultscontroller, appkit_ns_nsuserdefaultscontroller_nsuserdefaultscontroller_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSUserDefaultsController_NSUserDefaultsController, shared)
{
	zend_long handle = 0;
	
            handle = (zend_long) ns_userdefaultscontroller_shared();
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSUserDefaultsController_NSUserDefaultsController, create)
{
	zend_long handle = 0;
	
            handle = (zend_long) ns_userdefaultscontroller_create();
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSUserDefaultsController_NSUserDefaultsController, createWithInitialValues)
{
	zval *dictionaryHandle_param = NULL;
	zend_long dictionaryHandle, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(dictionaryHandle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &dictionaryHandle_param);
	
            handle = (zend_long) ns_userdefaultscontroller_create_with_initial_values((uintptr_t) dictionaryHandle);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSUserDefaultsController_NSUserDefaultsController, wrap)
{
	zval *nsUserDefaultsControllerPtr_param = NULL;
	zend_long nsUserDefaultsControllerPtr, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(nsUserDefaultsControllerPtr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &nsUserDefaultsControllerPtr_param);
	
            handle = (zend_long) ns_userdefaultscontroller_wrap((void *)(uintptr_t) nsUserDefaultsControllerPtr);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSUserDefaultsController_NSUserDefaultsController, destroy)
{
	zval *controller_param = NULL;
	zend_long controller;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controller_param);
	
            ns_userdefaultscontroller_destroy((uintptr_t) controller);
        
}

PHP_METHOD(AppKit_NS_NSUserDefaultsController_NSUserDefaultsController, nsUserDefaultsController)
{
	zval *controller_param = NULL;
	zend_long controller, ptr = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controller_param);
	
            ptr = (zend_long)(uintptr_t) ns_userdefaultscontroller_nsuserdefaultscontroller((uintptr_t) controller);
        
	RETURN_LONG(ptr);
}

PHP_METHOD(AppKit_NS_NSUserDefaultsController_NSUserDefaultsController, discardEditing)
{
	zval *controller_param = NULL;
	zend_long controller;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controller_param);
	
            ns_userdefaultscontroller_discard_editing((uintptr_t) controller);
        
}

PHP_METHOD(AppKit_NS_NSUserDefaultsController_NSUserDefaultsController, commitEditing)
{
	zend_bool result = 0;
	zval *controller_param = NULL;
	zend_long controller;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controller_param);
	
            result = ns_userdefaultscontroller_commit_editing((uintptr_t) controller) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSUserDefaultsController_NSUserDefaultsController, isEditing)
{
	zend_bool result = 0;
	zval *controller_param = NULL;
	zend_long controller;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controller_param);
	
            result = ns_userdefaultscontroller_is_editing((uintptr_t) controller) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSUserDefaultsController_NSUserDefaultsController, defaults)
{
	zval *controller_param = NULL;
	zend_long controller, ptr = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controller_param);
	
            ptr = (zend_long)(uintptr_t) ns_userdefaultscontroller_defaults((uintptr_t) controller);
        
	RETURN_LONG(ptr);
}

PHP_METHOD(AppKit_NS_NSUserDefaultsController_NSUserDefaultsController, setInitialValues)
{
	zval *controller_param = NULL, *dictionaryHandle_param = NULL;
	zend_long controller, dictionaryHandle;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(controller)
		Z_PARAM_LONG(dictionaryHandle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &controller_param, &dictionaryHandle_param);
	
            ns_userdefaultscontroller_set_initial_values((uintptr_t) controller, (uintptr_t) dictionaryHandle);
        
}

PHP_METHOD(AppKit_NS_NSUserDefaultsController_NSUserDefaultsController, initialValues)
{
	zval *controller_param = NULL;
	zend_long controller, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controller_param);
	
            handle = (zend_long) ns_userdefaultscontroller_initial_values((uintptr_t) controller);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSUserDefaultsController_NSUserDefaultsController, setAppliesImmediately)
{
	zend_bool value;
	zval *controller_param = NULL, *value_param = NULL;
	zend_long controller;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(controller)
		Z_PARAM_BOOL(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &controller_param, &value_param);
	
            ns_userdefaultscontroller_set_applies_immediately((uintptr_t) controller, value ? 1 : 0);
        
}

PHP_METHOD(AppKit_NS_NSUserDefaultsController_NSUserDefaultsController, appliesImmediately)
{
	zend_bool result = 0;
	zval *controller_param = NULL;
	zend_long controller;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controller_param);
	
            result = ns_userdefaultscontroller_applies_immediately((uintptr_t) controller) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSUserDefaultsController_NSUserDefaultsController, hasUnappliedChanges)
{
	zend_bool result = 0;
	zval *controller_param = NULL;
	zend_long controller;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controller_param);
	
            result = ns_userdefaultscontroller_has_unapplied_changes((uintptr_t) controller) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSUserDefaultsController_NSUserDefaultsController, values)
{
	zval *controller_param = NULL;
	zend_long controller, ptr = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controller_param);
	
            ptr = (zend_long)(uintptr_t) ns_userdefaultscontroller_values((uintptr_t) controller);
        
	RETURN_LONG(ptr);
}

PHP_METHOD(AppKit_NS_NSUserDefaultsController_NSUserDefaultsController, revert)
{
	zval *controller_param = NULL;
	zend_long controller;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controller_param);
	
            ns_userdefaultscontroller_revert((uintptr_t) controller);
        
}

PHP_METHOD(AppKit_NS_NSUserDefaultsController_NSUserDefaultsController, save)
{
	zval *controller_param = NULL;
	zend_long controller;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controller_param);
	
            ns_userdefaultscontroller_save((uintptr_t) controller);
        
}

PHP_METHOD(AppKit_NS_NSUserDefaultsController_NSUserDefaultsController, revertToInitialValues)
{
	zval *controller_param = NULL;
	zend_long controller;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controller_param);
	
            ns_userdefaultscontroller_revert_to_initial_values((uintptr_t) controller);
        
}

