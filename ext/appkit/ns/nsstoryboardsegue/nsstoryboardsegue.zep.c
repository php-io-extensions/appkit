
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

#include "ns-storyboardsegue.h"
#include <stdint.h>



/** NSStoryboardSegue — storyboard transition between controllers. */
ZEPHIR_INIT_CLASS(AppKit_NS_NSStoryboardSegue_NSStoryboardSegue)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSStoryboardSegue, NSStoryboardSegue, appkit, ns_nsstoryboardsegue_nsstoryboardsegue, appkit_ns_nsstoryboardsegue_nsstoryboardsegue_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSStoryboardSegue_NSStoryboardSegue, create)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long sourceControllerPtr, destinationControllerPtr, handle = 0;
	zval *identifier_param = NULL, *sourceControllerPtr_param = NULL, *destinationControllerPtr_param = NULL;
	zval identifier;

	ZVAL_UNDEF(&identifier);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_STR(identifier)
		Z_PARAM_LONG(sourceControllerPtr)
		Z_PARAM_LONG(destinationControllerPtr)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &identifier_param, &sourceControllerPtr_param, &destinationControllerPtr_param);
	zephir_get_strval(&identifier, identifier_param);
	
            handle = (zend_long) ns_storyboardsegue_create(
                Z_STRVAL(identifier),
                (void *)(uintptr_t) sourceControllerPtr,
                (void *)(uintptr_t) destinationControllerPtr
            );
        
	RETURN_MM_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSStoryboardSegue_NSStoryboardSegue, wrap)
{
	zval *nsStoryboardSeguePtr_param = NULL;
	zend_long nsStoryboardSeguePtr, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(nsStoryboardSeguePtr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &nsStoryboardSeguePtr_param);
	
            handle = (zend_long) ns_storyboardsegue_wrap((void *)(uintptr_t) nsStoryboardSeguePtr);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSStoryboardSegue_NSStoryboardSegue, destroy)
{
	zval *segue_param = NULL;
	zend_long segue;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(segue)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &segue_param);
	
            ns_storyboardsegue_destroy((uintptr_t) segue);
        
}

PHP_METHOD(AppKit_NS_NSStoryboardSegue_NSStoryboardSegue, nsStoryboardSegue)
{
	zval *segue_param = NULL;
	zend_long segue, ptr = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(segue)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &segue_param);
	
            ptr = (zend_long)(uintptr_t) ns_storyboardsegue_nsstoryboardsegue((uintptr_t) segue);
        
	RETURN_LONG(ptr);
}

PHP_METHOD(AppKit_NS_NSStoryboardSegue_NSStoryboardSegue, getIdentifier)
{
	zval *segue_param = NULL;
	zend_long segue;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(segue)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &segue_param);
	
            char buf[4096];
            buf[0] = '\0';
            if (ns_storyboardsegue_identifier((uintptr_t) segue, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        
	RETURN_STRING("");
}

PHP_METHOD(AppKit_NS_NSStoryboardSegue_NSStoryboardSegue, getSourceController)
{
	zval *segue_param = NULL;
	zend_long segue, ptr = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(segue)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &segue_param);
	
            ptr = (zend_long)(uintptr_t) ns_storyboardsegue_source_controller((uintptr_t) segue);
        
	RETURN_LONG(ptr);
}

PHP_METHOD(AppKit_NS_NSStoryboardSegue_NSStoryboardSegue, getDestinationController)
{
	zval *segue_param = NULL;
	zend_long segue, ptr = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(segue)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &segue_param);
	
            ptr = (zend_long)(uintptr_t) ns_storyboardsegue_destination_controller((uintptr_t) segue);
        
	RETURN_LONG(ptr);
}

PHP_METHOD(AppKit_NS_NSStoryboardSegue_NSStoryboardSegue, perform)
{
	zval *segue_param = NULL;
	zend_long segue;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(segue)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &segue_param);
	
            ns_storyboardsegue_perform((uintptr_t) segue);
        
}

