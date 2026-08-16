
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

#include "ns-titlebaraccessoryviewcontroller.h"
#include <stdint.h>



ZEPHIR_INIT_CLASS(AppKit_NS_NSTitlebarAccessoryViewController_NSTitlebarAccessoryViewController)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSTitlebarAccessoryViewController, NSTitlebarAccessoryViewController, appkit, ns_nstitlebaraccessoryviewcontroller_nstitlebaraccessoryviewcontroller, appkit_ns_nstitlebaraccessoryviewcontroller_nstitlebaraccessoryviewcontroller_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSTitlebarAccessoryViewController_NSTitlebarAccessoryViewController, create)
{
	zend_long handle = 0;
	
            handle = (zend_long) ns_titlebaraccessoryviewcontroller_create();
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSTitlebarAccessoryViewController_NSTitlebarAccessoryViewController, createWithView)
{
	zval *view_param = NULL;
	zend_long view, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(view)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &view_param);
	
            handle = (zend_long) ns_titlebaraccessoryviewcontroller_create_with_view((uintptr_t) view);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSTitlebarAccessoryViewController_NSTitlebarAccessoryViewController, wrap)
{
	zval *nsTitlebarAccessoryViewControllerPtr_param = NULL;
	zend_long nsTitlebarAccessoryViewControllerPtr, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(nsTitlebarAccessoryViewControllerPtr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &nsTitlebarAccessoryViewControllerPtr_param);
	
            handle = (zend_long) ns_titlebaraccessoryviewcontroller_wrap((void *)(uintptr_t) nsTitlebarAccessoryViewControllerPtr);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSTitlebarAccessoryViewController_NSTitlebarAccessoryViewController, destroy)
{
	zval *controller_param = NULL;
	zend_long controller;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controller_param);
	
            ns_titlebaraccessoryviewcontroller_destroy((uintptr_t) controller);
        
}

PHP_METHOD(AppKit_NS_NSTitlebarAccessoryViewController_NSTitlebarAccessoryViewController, nsTitlebarAccessoryViewController)
{
	zval *controller_param = NULL;
	zend_long controller, ptr = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controller_param);
	
            ptr = (zend_long)(uintptr_t) ns_titlebaraccessoryviewcontroller_nstitlebaraccessoryviewcontroller((uintptr_t) controller);
        
	RETURN_LONG(ptr);
}

PHP_METHOD(AppKit_NS_NSTitlebarAccessoryViewController_NSTitlebarAccessoryViewController, setView)
{
	zval *controller_param = NULL, *view_param = NULL;
	zend_long controller, view;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(controller)
		Z_PARAM_LONG(view)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &controller_param, &view_param);
	
            ns_titlebaraccessoryviewcontroller_set_view((uintptr_t) controller, (uintptr_t) view);
        
}

PHP_METHOD(AppKit_NS_NSTitlebarAccessoryViewController_NSTitlebarAccessoryViewController, view)
{
	zval *controller_param = NULL;
	zend_long controller, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controller_param);
	
            handle = (zend_long) ns_titlebaraccessoryviewcontroller_view((uintptr_t) controller);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSTitlebarAccessoryViewController_NSTitlebarAccessoryViewController, setLayoutAttribute)
{
	zval *controller_param = NULL, *attribute_param = NULL;
	zend_long controller, attribute;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(controller)
		Z_PARAM_LONG(attribute)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &controller_param, &attribute_param);
	
            ns_titlebaraccessoryviewcontroller_set_layout_attribute((uintptr_t) controller, (int) attribute);
        
}

PHP_METHOD(AppKit_NS_NSTitlebarAccessoryViewController_NSTitlebarAccessoryViewController, layoutAttribute)
{
	zval *controller_param = NULL;
	zend_long controller, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controller_param);
	
            value = ns_titlebaraccessoryviewcontroller_layout_attribute((uintptr_t) controller);
        
	RETURN_LONG(value);
}

PHP_METHOD(AppKit_NS_NSTitlebarAccessoryViewController_NSTitlebarAccessoryViewController, setFullScreenMinHeight)
{
	double height;
	zval *controller_param = NULL, *height_param = NULL;
	zend_long controller;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(controller)
		Z_PARAM_ZVAL(height)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &controller_param, &height_param);
	height = zephir_get_doubleval(height_param);
	
            ns_titlebaraccessoryviewcontroller_set_full_screen_min_height((uintptr_t) controller, height);
        
}

PHP_METHOD(AppKit_NS_NSTitlebarAccessoryViewController_NSTitlebarAccessoryViewController, fullScreenMinHeight)
{
	double value = 0;
	zval *controller_param = NULL;
	zend_long controller;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controller_param);
	
            value = ns_titlebaraccessoryviewcontroller_full_screen_min_height((uintptr_t) controller);
        
	RETURN_DOUBLE(value);
}

PHP_METHOD(AppKit_NS_NSTitlebarAccessoryViewController_NSTitlebarAccessoryViewController, setHidden)
{
	zend_bool hidden;
	zval *controller_param = NULL, *hidden_param = NULL;
	zend_long controller;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(controller)
		Z_PARAM_BOOL(hidden)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &controller_param, &hidden_param);
	
            ns_titlebaraccessoryviewcontroller_set_hidden((uintptr_t) controller, hidden ? 1 : 0);
        
}

PHP_METHOD(AppKit_NS_NSTitlebarAccessoryViewController_NSTitlebarAccessoryViewController, isHidden)
{
	zend_bool result = 0;
	zval *controller_param = NULL;
	zend_long controller;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controller_param);
	
            result = ns_titlebaraccessoryviewcontroller_is_hidden((uintptr_t) controller) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSTitlebarAccessoryViewController_NSTitlebarAccessoryViewController, setAutomaticallyAdjustsSize)
{
	zend_bool adjusts;
	zval *controller_param = NULL, *adjusts_param = NULL;
	zend_long controller;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(controller)
		Z_PARAM_BOOL(adjusts)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &controller_param, &adjusts_param);
	
            ns_titlebaraccessoryviewcontroller_set_automatically_adjusts_size((uintptr_t) controller, adjusts ? 1 : 0);
        
}

PHP_METHOD(AppKit_NS_NSTitlebarAccessoryViewController_NSTitlebarAccessoryViewController, automaticallyAdjustsSize)
{
	zend_bool result = 0;
	zval *controller_param = NULL;
	zend_long controller;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controller_param);
	
            result = ns_titlebaraccessoryviewcontroller_automatically_adjusts_size((uintptr_t) controller) == 1;
        
	RETURN_BOOL(result);
}

