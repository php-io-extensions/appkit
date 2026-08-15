
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

#include "ns-windowcontroller.h"
#include <stdint.h>



/**
 * NSWindowController — window + nib lifecycle host.
 */
ZEPHIR_INIT_CLASS(AppKit_NS_NSWindowController_NSWindowController)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSWindowController, NSWindowController, appkit, ns_nswindowcontroller_nswindowcontroller, appkit_ns_nswindowcontroller_nswindowcontroller_method_entry, 0);

	return SUCCESS;
}

/**
 * @return int Opaque controller handle bound to an existing window-box, or 0
 */
PHP_METHOD(AppKit_NS_NSWindowController_NSWindowController, create)
{
	zval *window_param = NULL;
	zend_long window, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(window)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &window_param);
	
            handle = (zend_long) ns_windowcontroller_create((uintptr_t) window);
        
	RETURN_LONG(handle);
}

/**
 * @return int Opaque controller handle with no window yet, or 0
 */
PHP_METHOD(AppKit_NS_NSWindowController_NSWindowController, createEmpty)
{
	zend_long handle = 0;
	
            handle = (zend_long) ns_windowcontroller_create_empty();
        
	RETURN_LONG(handle);
}

/**
 * @return int Opaque controller handle, or 0 on failure
 */
PHP_METHOD(AppKit_NS_NSWindowController_NSWindowController, wrap)
{
	zval *nsWindowControllerPtr_param = NULL;
	zend_long nsWindowControllerPtr, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(nsWindowControllerPtr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &nsWindowControllerPtr_param);
	
            handle = (zend_long) ns_windowcontroller_wrap((void *)(uintptr_t) nsWindowControllerPtr);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSWindowController_NSWindowController, destroy)
{
	zval *controller_param = NULL;
	zend_long controller;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controller_param);
	
            ns_windowcontroller_destroy((uintptr_t) controller);
        
}

/**
 * @return int Borrowed NSWindowController pointer, or 0
 */
PHP_METHOD(AppKit_NS_NSWindowController_NSWindowController, nsWindowController)
{
	zval *controller_param = NULL;
	zend_long controller, ptr = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controller_param);
	
            ptr = (zend_long)(uintptr_t) ns_windowcontroller_nswindowcontroller((uintptr_t) controller);
        
	RETURN_LONG(ptr);
}

/**
 * @return int Borrowed NSWindow pointer from the controller, or 0
 */
PHP_METHOD(AppKit_NS_NSWindowController_NSWindowController, nsWindow)
{
	zval *controller_param = NULL;
	zend_long controller, ptr = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controller_param);
	
            ptr = (zend_long)(uintptr_t) ns_windowcontroller_nswindow((uintptr_t) controller);
        
	RETURN_LONG(ptr);
}

PHP_METHOD(AppKit_NS_NSWindowController_NSWindowController, showWindow)
{
	zval *controller_param = NULL;
	zend_long controller;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controller_param);
	
            ns_windowcontroller_show_window((uintptr_t) controller);
        
}

PHP_METHOD(AppKit_NS_NSWindowController_NSWindowController, close)
{
	zval *controller_param = NULL;
	zend_long controller;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controller_param);
	
            ns_windowcontroller_close((uintptr_t) controller);
        
}

PHP_METHOD(AppKit_NS_NSWindowController_NSWindowController, setContentViewController)
{
	zval *controller_param = NULL, *viewController_param = NULL;
	zend_long controller, viewController;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(controller)
		Z_PARAM_LONG(viewController)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &controller_param, &viewController_param);
	
            ns_windowcontroller_set_content_view_controller((uintptr_t) controller, (uintptr_t) viewController);
        
}

PHP_METHOD(AppKit_NS_NSWindowController_NSWindowController, isWindowLoaded)
{
	zend_bool result = 0;
	zval *controller_param = NULL;
	zend_long controller;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controller_param);
	
            result = ns_windowcontroller_is_window_loaded((uintptr_t) controller) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSWindowController_NSWindowController, setShouldCloseDocument)
{
	zend_bool shouldClose;
	zval *controller_param = NULL, *shouldClose_param = NULL;
	zend_long controller;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(controller)
		Z_PARAM_BOOL(shouldClose)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &controller_param, &shouldClose_param);
	
            ns_windowcontroller_set_should_close_document((uintptr_t) controller, shouldClose ? 1 : 0);
        
}

PHP_METHOD(AppKit_NS_NSWindowController_NSWindowController, shouldCloseDocument)
{
	zend_bool result = 0;
	zval *controller_param = NULL;
	zend_long controller;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controller_param);
	
            result = ns_windowcontroller_should_close_document((uintptr_t) controller) == 1;
        
	RETURN_BOOL(result);
}

