
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

#include "ns-responder.h"
#include <stdint.h>



/**
 * NSResponder — first-responder chain base for NSView, NSWindow, controllers, etc.
 * Wrap borrowed native pointers from NSView::nsView(), NSWindow::nsWindow(), etc.
 */
ZEPHIR_INIT_CLASS(AppKit_NS_NSResponder_NSResponder)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSResponder, NSResponder, appkit, ns_nsresponder_nsresponder, appkit_ns_nsresponder_nsresponder_method_entry, 0);

	return SUCCESS;
}

/**
 * @return int Opaque responder handle, or 0 on failure
 */
PHP_METHOD(AppKit_NS_NSResponder_NSResponder, wrap)
{
	zval *nsResponderPtr_param = NULL;
	zend_long nsResponderPtr, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(nsResponderPtr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &nsResponderPtr_param);
	
            handle = (zend_long) ns_responder_wrap((void *)(uintptr_t) nsResponderPtr);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSResponder_NSResponder, destroy)
{
	zval *responder_param = NULL;
	zend_long responder;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(responder)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &responder_param);
	
            ns_responder_destroy((uintptr_t) responder);
        
}

/**
 * @return int Borrowed NSResponder pointer, or 0
 */
PHP_METHOD(AppKit_NS_NSResponder_NSResponder, nsResponder)
{
	zval *responder_param = NULL;
	zend_long responder, ptr = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(responder)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &responder_param);
	
            ptr = (zend_long)(uintptr_t) ns_responder_nsresponder((uintptr_t) responder);
        
	RETURN_LONG(ptr);
}

PHP_METHOD(AppKit_NS_NSResponder_NSResponder, acceptsFirstResponder)
{
	zend_bool result = 0;
	zval *responder_param = NULL;
	zend_long responder;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(responder)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &responder_param);
	
            result = ns_responder_accepts_first_responder((uintptr_t) responder) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSResponder_NSResponder, becomeFirstResponder)
{
	zend_bool result = 0;
	zval *responder_param = NULL;
	zend_long responder;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(responder)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &responder_param);
	
            result = ns_responder_become_first_responder((uintptr_t) responder) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSResponder_NSResponder, resignFirstResponder)
{
	zend_bool result = 0;
	zval *responder_param = NULL;
	zend_long responder;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(responder)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &responder_param);
	
            result = ns_responder_resign_first_responder((uintptr_t) responder) == 1;
        
	RETURN_BOOL(result);
}

/**
 * @return int Borrowed nextResponder pointer, or 0
 */
PHP_METHOD(AppKit_NS_NSResponder_NSResponder, nextResponder)
{
	zval *responder_param = NULL;
	zend_long responder, ptr = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(responder)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &responder_param);
	
            ptr = (zend_long)(uintptr_t) ns_responder_next_responder((uintptr_t) responder);
        
	RETURN_LONG(ptr);
}

