
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

#include "ns-objectcontroller.h"
#include <stdint.h>



/**
 * NSObjectController — single-object Cocoa bindings controller.
 */
ZEPHIR_INIT_CLASS(AppKit_NS_NSObjectController_NSObjectController)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSObjectController, NSObjectController, appkit, ns_nsobjectcontroller_nsobjectcontroller, appkit_ns_nsobjectcontroller_nsobjectcontroller_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSObjectController_NSObjectController, create)
{
	zend_long handle = 0;
	
            handle = (zend_long) ns_objectcontroller_create();
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSObjectController_NSObjectController, createWithContent)
{
	zval *contentPtr_param = NULL;
	zend_long contentPtr, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(contentPtr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &contentPtr_param);
	
            handle = (zend_long) ns_objectcontroller_create_with_content((void *)(uintptr_t) contentPtr);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSObjectController_NSObjectController, wrap)
{
	zval *nsObjectControllerPtr_param = NULL;
	zend_long nsObjectControllerPtr, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(nsObjectControllerPtr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &nsObjectControllerPtr_param);
	
            handle = (zend_long) ns_objectcontroller_wrap((void *)(uintptr_t) nsObjectControllerPtr);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSObjectController_NSObjectController, destroy)
{
	zval *controller_param = NULL;
	zend_long controller;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controller_param);
	
            ns_objectcontroller_destroy((uintptr_t) controller);
        
}

PHP_METHOD(AppKit_NS_NSObjectController_NSObjectController, nsObjectController)
{
	zval *controller_param = NULL;
	zend_long controller, ptr = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controller_param);
	
            ptr = (zend_long)(uintptr_t) ns_objectcontroller_nsobjectcontroller((uintptr_t) controller);
        
	RETURN_LONG(ptr);
}

PHP_METHOD(AppKit_NS_NSObjectController_NSObjectController, discardEditing)
{
	zval *controller_param = NULL;
	zend_long controller;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controller_param);
	
            ns_objectcontroller_discard_editing((uintptr_t) controller);
        
}

PHP_METHOD(AppKit_NS_NSObjectController_NSObjectController, commitEditing)
{
	zend_bool result = 0;
	zval *controller_param = NULL;
	zend_long controller;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controller_param);
	
            result = ns_objectcontroller_commit_editing((uintptr_t) controller) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSObjectController_NSObjectController, isEditing)
{
	zend_bool result = 0;
	zval *controller_param = NULL;
	zend_long controller;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controller_param);
	
            result = ns_objectcontroller_is_editing((uintptr_t) controller) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSObjectController_NSObjectController, setContent)
{
	zval *controller_param = NULL, *contentPtr_param = NULL;
	zend_long controller, contentPtr;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(controller)
		Z_PARAM_LONG(contentPtr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &controller_param, &contentPtr_param);
	
            ns_objectcontroller_set_content((uintptr_t) controller, (void *)(uintptr_t) contentPtr);
        
}

PHP_METHOD(AppKit_NS_NSObjectController_NSObjectController, content)
{
	zval *controller_param = NULL;
	zend_long controller, ptr = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controller_param);
	
            ptr = (zend_long)(uintptr_t) ns_objectcontroller_content((uintptr_t) controller);
        
	RETURN_LONG(ptr);
}

PHP_METHOD(AppKit_NS_NSObjectController_NSObjectController, selection)
{
	zval *controller_param = NULL;
	zend_long controller, ptr = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controller_param);
	
            ptr = (zend_long)(uintptr_t) ns_objectcontroller_selection((uintptr_t) controller);
        
	RETURN_LONG(ptr);
}

PHP_METHOD(AppKit_NS_NSObjectController_NSObjectController, selectedObjectsCount)
{
	zval *controller_param = NULL;
	zend_long controller, count = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controller_param);
	
            count = ns_objectcontroller_selected_objects_count((uintptr_t) controller);
        
	RETURN_LONG(count);
}

PHP_METHOD(AppKit_NS_NSObjectController_NSObjectController, selectedObjectAt)
{
	zval *controller_param = NULL, *index_param = NULL;
	zend_long controller, index, ptr = 0;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(controller)
		Z_PARAM_LONG(index)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &controller_param, &index_param);
	
            ptr = (zend_long)(uintptr_t) ns_objectcontroller_selected_object_at((uintptr_t) controller, (int) index);
        
	RETURN_LONG(ptr);
}

PHP_METHOD(AppKit_NS_NSObjectController_NSObjectController, setAutomaticallyPreparesContent)
{
	zend_bool value;
	zval *controller_param = NULL, *value_param = NULL;
	zend_long controller;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(controller)
		Z_PARAM_BOOL(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &controller_param, &value_param);
	
            ns_objectcontroller_set_automatically_prepares_content((uintptr_t) controller, value ? 1 : 0);
        
}

PHP_METHOD(AppKit_NS_NSObjectController_NSObjectController, automaticallyPreparesContent)
{
	zend_bool result = 0;
	zval *controller_param = NULL;
	zend_long controller;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controller_param);
	
            result = ns_objectcontroller_automatically_prepares_content((uintptr_t) controller) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSObjectController_NSObjectController, prepareContent)
{
	zval *controller_param = NULL;
	zend_long controller;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controller_param);
	
            ns_objectcontroller_prepare_content((uintptr_t) controller);
        
}

PHP_METHOD(AppKit_NS_NSObjectController_NSObjectController, setObjectClassName)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval className;
	zval *controller_param = NULL, *className_param = NULL;
	zend_long controller;

	ZVAL_UNDEF(&className);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(controller)
		Z_PARAM_STR(className)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &controller_param, &className_param);
	zephir_get_strval(&className, className_param);
	
            ns_objectcontroller_set_object_class_name((uintptr_t) controller, Z_STRVAL(className));
        
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSObjectController_NSObjectController, objectClassName)
{
	zval *controller_param = NULL;
	zend_long controller;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controller_param);
	
            char buf[4096];
            buf[0] = '\0';
            if (ns_objectcontroller_object_class_name((uintptr_t) controller, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        
	RETURN_STRING("");
}

PHP_METHOD(AppKit_NS_NSObjectController_NSObjectController, newObject)
{
	zval *controller_param = NULL;
	zend_long controller, ptr = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controller_param);
	
            ptr = (zend_long)(uintptr_t) ns_objectcontroller_new_object((uintptr_t) controller);
        
	RETURN_LONG(ptr);
}

PHP_METHOD(AppKit_NS_NSObjectController_NSObjectController, addObject)
{
	zval *controller_param = NULL, *objectPtr_param = NULL;
	zend_long controller, objectPtr;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(controller)
		Z_PARAM_LONG(objectPtr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &controller_param, &objectPtr_param);
	
            ns_objectcontroller_add_object((uintptr_t) controller, (void *)(uintptr_t) objectPtr);
        
}

PHP_METHOD(AppKit_NS_NSObjectController_NSObjectController, removeObject)
{
	zval *controller_param = NULL, *objectPtr_param = NULL;
	zend_long controller, objectPtr;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(controller)
		Z_PARAM_LONG(objectPtr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &controller_param, &objectPtr_param);
	
            ns_objectcontroller_remove_object((uintptr_t) controller, (void *)(uintptr_t) objectPtr);
        
}

PHP_METHOD(AppKit_NS_NSObjectController_NSObjectController, setEditable)
{
	zend_bool value;
	zval *controller_param = NULL, *value_param = NULL;
	zend_long controller;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(controller)
		Z_PARAM_BOOL(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &controller_param, &value_param);
	
            ns_objectcontroller_set_editable((uintptr_t) controller, value ? 1 : 0);
        
}

PHP_METHOD(AppKit_NS_NSObjectController_NSObjectController, isEditable)
{
	zend_bool result = 0;
	zval *controller_param = NULL;
	zend_long controller;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controller_param);
	
            result = ns_objectcontroller_is_editable((uintptr_t) controller) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSObjectController_NSObjectController, canAdd)
{
	zend_bool result = 0;
	zval *controller_param = NULL;
	zend_long controller;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controller_param);
	
            result = ns_objectcontroller_can_add((uintptr_t) controller) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSObjectController_NSObjectController, canRemove)
{
	zend_bool result = 0;
	zval *controller_param = NULL;
	zend_long controller;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controller_param);
	
            result = ns_objectcontroller_can_remove((uintptr_t) controller) == 1;
        
	RETURN_BOOL(result);
}

