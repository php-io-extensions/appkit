
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

#include "ns-viewcontroller.h"
#include <stdint.h>



/**
 * NSViewController — view lifecycle host for NSPopover, window content, etc.
 */
ZEPHIR_INIT_CLASS(AppKit_NS_NSViewController_NSViewController)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSViewController, NSViewController, appkit, ns_nsviewcontroller_nsviewcontroller, appkit_ns_nsviewcontroller_nsviewcontroller_method_entry, 0);

	return SUCCESS;
}

/**
 * @return int Opaque controller handle, or 0 on failure
 */
PHP_METHOD(AppKit_NS_NSViewController_NSViewController, create)
{
	zend_long handle = 0;
	
            handle = (zend_long) ns_viewcontroller_create();
        
	RETURN_LONG(handle);
}

/**
 * @return int Opaque controller handle with the given view-box as its view, or 0
 */
PHP_METHOD(AppKit_NS_NSViewController_NSViewController, createWithView)
{
	zval *view_param = NULL;
	zend_long view, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(view)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &view_param);
	
            handle = (zend_long) ns_viewcontroller_create_with_view((uintptr_t) view);
        
	RETURN_LONG(handle);
}

/**
 * @return int Opaque controller handle, or 0 on failure
 */
PHP_METHOD(AppKit_NS_NSViewController_NSViewController, wrap)
{
	zval *nsViewControllerPtr_param = NULL;
	zend_long nsViewControllerPtr, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(nsViewControllerPtr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &nsViewControllerPtr_param);
	
            handle = (zend_long) ns_viewcontroller_wrap((void *)(uintptr_t) nsViewControllerPtr);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSViewController_NSViewController, destroy)
{
	zval *controller_param = NULL;
	zend_long controller;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controller_param);
	
            ns_viewcontroller_destroy((uintptr_t) controller);
        
}

/**
 * @return int Borrowed NSViewController pointer, or 0
 */
PHP_METHOD(AppKit_NS_NSViewController_NSViewController, nsViewController)
{
	zval *controller_param = NULL;
	zend_long controller, ptr = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controller_param);
	
            ptr = (zend_long)(uintptr_t) ns_viewcontroller_nsviewcontroller((uintptr_t) controller);
        
	RETURN_LONG(ptr);
}

PHP_METHOD(AppKit_NS_NSViewController_NSViewController, setView)
{
	zval *controller_param = NULL, *view_param = NULL;
	zend_long controller, view;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(controller)
		Z_PARAM_LONG(view)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &controller_param, &view_param);
	
            ns_viewcontroller_set_view((uintptr_t) controller, (uintptr_t) view);
        
}

/**
 * @return int View-box handle for the controller's view, or 0
 */
PHP_METHOD(AppKit_NS_NSViewController_NSViewController, view)
{
	zval *controller_param = NULL;
	zend_long controller, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controller_param);
	
            handle = (zend_long) ns_viewcontroller_view((uintptr_t) controller);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSViewController_NSViewController, setTitle)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval title;
	zval *controller_param = NULL, *title_param = NULL;
	zend_long controller;

	ZVAL_UNDEF(&title);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(controller)
		Z_PARAM_STR(title)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &controller_param, &title_param);
	zephir_get_strval(&title, title_param);
	
            ns_viewcontroller_set_title((uintptr_t) controller, Z_STRVAL(title));
        
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSViewController_NSViewController, getTitle)
{
	zval *controller_param = NULL;
	zend_long controller;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controller_param);
	
            char buf[4096];
            buf[0] = '\0';
            if (ns_viewcontroller_get_title((uintptr_t) controller, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        
	RETURN_STRING("");
}

PHP_METHOD(AppKit_NS_NSViewController_NSViewController, isViewLoaded)
{
	zend_bool result = 0;
	zval *controller_param = NULL;
	zend_long controller;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controller_param);
	
            result = ns_viewcontroller_is_view_loaded((uintptr_t) controller) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSViewController_NSViewController, loadViewIfNeeded)
{
	zval *controller_param = NULL;
	zend_long controller;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controller_param);
	
            ns_viewcontroller_load_view_if_needed((uintptr_t) controller);
        
}

