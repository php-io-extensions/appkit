
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

#include "ns-storyboard.h"
#include <stdint.h>



/**
 * NSStoryboard storyboard file loader.
 */
ZEPHIR_INIT_CLASS(AppKit_NS_NSStoryboard_NSStoryboard)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSStoryboard, NSStoryboard, appkit, ns_nsstoryboard_nsstoryboard, appkit_ns_nsstoryboard_nsstoryboard_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSStoryboard_NSStoryboard, main)
{
	zend_long handle = 0;
	
            handle = (zend_long) ns_storyboard_main();
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSStoryboard_NSStoryboard, withName)
{
	zend_long handle = 0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *name_param = NULL, *bundlePath_param = NULL;
	zval name, bundlePath;

	ZVAL_UNDEF(&name);
	ZVAL_UNDEF(&bundlePath);
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_STR(name)
		Z_PARAM_OPTIONAL
		Z_PARAM_STR(bundlePath)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 1, &name_param, &bundlePath_param);
	zephir_get_strval(&name, name_param);
	if (!bundlePath_param) {
		ZEPHIR_INIT_VAR(&bundlePath);
		ZVAL_STRING(&bundlePath, "");
	} else {
		zephir_get_strval(&bundlePath, bundlePath_param);
	}
	
            handle = (zend_long) ns_storyboard_with_name(Z_STRVAL(name), Z_STRVAL(bundlePath));
        
	RETURN_MM_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSStoryboard_NSStoryboard, wrap)
{
	zval *nsStoryboardPtr_param = NULL;
	zend_long nsStoryboardPtr, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(nsStoryboardPtr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &nsStoryboardPtr_param);
	
            handle = (zend_long) ns_storyboard_wrap((void *)(uintptr_t) nsStoryboardPtr);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSStoryboard_NSStoryboard, destroy)
{
	zval *storyboard_param = NULL;
	zend_long storyboard;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(storyboard)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &storyboard_param);
	
            ns_storyboard_destroy((uintptr_t) storyboard);
        
}

PHP_METHOD(AppKit_NS_NSStoryboard_NSStoryboard, nsStoryboard)
{
	zval *storyboard_param = NULL;
	zend_long storyboard, ptr = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(storyboard)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &storyboard_param);
	
            ptr = (zend_long)(uintptr_t) ns_storyboard_nsstoryboard((uintptr_t) storyboard);
        
	RETURN_LONG(ptr);
}

PHP_METHOD(AppKit_NS_NSStoryboard_NSStoryboard, instantiateInitialController)
{
	zval *storyboard_param = NULL;
	zend_long storyboard, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(storyboard)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &storyboard_param);
	
            handle = (zend_long) ns_storyboard_instantiate_initial_controller((uintptr_t) storyboard);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSStoryboard_NSStoryboard, instantiateControllerWithIdentifier)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval identifier;
	zval *storyboard_param = NULL, *identifier_param = NULL;
	zend_long storyboard, handle = 0;

	ZVAL_UNDEF(&identifier);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(storyboard)
		Z_PARAM_STR(identifier)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &storyboard_param, &identifier_param);
	zephir_get_strval(&identifier, identifier_param);
	
            handle = (zend_long) ns_storyboard_instantiate_controller_with_identifier((uintptr_t) storyboard, Z_STRVAL(identifier));
        
	RETURN_MM_LONG(handle);
}

