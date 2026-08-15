
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

#include "ns-textviewportlayoutcontroller.h"
#include <stdint.h>



/**
 * NSTextViewportLayoutController — viewport layout from a layout manager.
 */
ZEPHIR_INIT_CLASS(AppKit_NS_NSTextViewportLayoutController_NSTextViewportLayoutController)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSTextViewportLayoutController, NSTextViewportLayoutController, appkit, ns_nstextviewportlayoutcontroller_nstextviewportlayoutcontroller, appkit_ns_nstextviewportlayoutcontroller_nstextviewportlayoutcontroller_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSTextViewportLayoutController_NSTextViewportLayoutController, wrap)
{
	zval *nsTextViewportLayoutControllerPtr_param = NULL;
	zend_long nsTextViewportLayoutControllerPtr, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(nsTextViewportLayoutControllerPtr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &nsTextViewportLayoutControllerPtr_param);
	
            handle = (zend_long) ns_textviewportlayoutcontroller_wrap((void *)(uintptr_t) nsTextViewportLayoutControllerPtr);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSTextViewportLayoutController_NSTextViewportLayoutController, destroy)
{
	zval *controller_param = NULL;
	zend_long controller;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controller_param);
	
            ns_textviewportlayoutcontroller_destroy((uintptr_t) controller);
        
}

/**
 * @return array [x, y, w, h]
 */
PHP_METHOD(AppKit_NS_NSTextViewportLayoutController_NSTextViewportLayoutController, viewportBounds)
{
	zval out;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *controller_param = NULL;
	zend_long controller;

	ZVAL_UNDEF(&out);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &controller_param);
	ZEPHIR_INIT_VAR(&out);
	array_init(&out);
	
            double x = 0.0, y = 0.0, w = 0.0, h = 0.0;
            ns_textviewportlayoutcontroller_viewport_bounds((uintptr_t) controller, &x, &y, &w, &h);
            add_next_index_double(&out, x);
            add_next_index_double(&out, y);
            add_next_index_double(&out, w);
            add_next_index_double(&out, h);
        
	RETURN_CTOR(&out);
}

PHP_METHOD(AppKit_NS_NSTextViewportLayoutController_NSTextViewportLayoutController, layoutViewport)
{
	zval *controller_param = NULL;
	zend_long controller;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controller_param);
	
            ns_textviewportlayoutcontroller_layout_viewport((uintptr_t) controller);
        
}

PHP_METHOD(AppKit_NS_NSTextViewportLayoutController_NSTextViewportLayoutController, adjustViewportByVerticalOffset)
{
	double offset;
	zval *controller_param = NULL, *offset_param = NULL;
	zend_long controller;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(controller)
		Z_PARAM_ZVAL(offset)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &controller_param, &offset_param);
	offset = zephir_get_doubleval(offset_param);
	
            ns_textviewportlayoutcontroller_adjust_viewport_by_vertical_offset((uintptr_t) controller, (double) offset);
        
}

