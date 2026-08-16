
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

#include "ns-pagelayout.h"
#include <stdint.h>



/**
 * NSPageLayout — page setup panel (modal).
 */
ZEPHIR_INIT_CLASS(AppKit_NS_NSPageLayout_NSPageLayout)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSPageLayout, NSPageLayout, appkit, ns_nspagelayout_nspagelayout, appkit_ns_nspagelayout_nspagelayout_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSPageLayout_NSPageLayout, pageLayout)
{
	zend_long handle = 0;
	
            handle = (zend_long) ns_pagelayout_page_layout();
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSPageLayout_NSPageLayout, destroy)
{
	zval *layout_param = NULL;
	zend_long layout;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(layout)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &layout_param);
	
            ns_pagelayout_destroy((uintptr_t) layout);
        
}

PHP_METHOD(AppKit_NS_NSPageLayout_NSPageLayout, nsPageLayout)
{
	zval *layout_param = NULL;
	zend_long layout, ptr = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(layout)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &layout_param);
	
            ptr = (zend_long)(uintptr_t) ns_pagelayout_nspagelayout((uintptr_t) layout);
        
	RETURN_LONG(ptr);
}

/**
 * @return int NSModalResponse (NSOKButton / NSCancelButton)
 */
PHP_METHOD(AppKit_NS_NSPageLayout_NSPageLayout, runModal)
{
	zval *layout_param = NULL;
	zend_long layout, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(layout)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &layout_param);
	
            value = (zend_long) ns_pagelayout_run_modal((uintptr_t) layout);
        
	RETURN_LONG(value);
}

/**
 * @param printInfo Borrowed NSPrintInfo pointer, or 0 for sharedPrintInfo
 * @return int NSModalResponse (NSOKButton / NSCancelButton)
 */
PHP_METHOD(AppKit_NS_NSPageLayout_NSPageLayout, runModalWithPrintInfo)
{
	zval *layout_param = NULL, *printInfo_param = NULL;
	zend_long layout, printInfo, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(layout)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(printInfo)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 1, &layout_param, &printInfo_param);
	if (!printInfo_param) {
		printInfo = 0;
	} else {
		}
	
            value = (zend_long) ns_pagelayout_run_modal_with_print_info(
                (uintptr_t) layout,
                (void *)(uintptr_t) printInfo
            );
        
	RETURN_LONG(value);
}

/**
 * @return int Borrowed NSPrintInfo pointer after sheet/modal, or 0
 */
PHP_METHOD(AppKit_NS_NSPageLayout_NSPageLayout, printInfo)
{
	zval *layout_param = NULL;
	zend_long layout, ptr = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(layout)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &layout_param);
	
            ptr = (zend_long)(uintptr_t) ns_pagelayout_print_info((uintptr_t) layout);
        
	RETURN_LONG(ptr);
}

PHP_METHOD(AppKit_NS_NSPageLayout_NSPageLayout, addAccessoryController)
{
	zval *layout_param = NULL, *controller_param = NULL;
	zend_long layout, controller;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(layout)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &layout_param, &controller_param);
	
            ns_pagelayout_add_accessory_controller((uintptr_t) layout, (uintptr_t) controller);
        
}

PHP_METHOD(AppKit_NS_NSPageLayout_NSPageLayout, removeAccessoryController)
{
	zval *layout_param = NULL, *controller_param = NULL;
	zend_long layout, controller;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(layout)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &layout_param, &controller_param);
	
            ns_pagelayout_remove_accessory_controller((uintptr_t) layout, (uintptr_t) controller);
        
}

PHP_METHOD(AppKit_NS_NSPageLayout_NSPageLayout, accessoryControllerCount)
{
	zval *layout_param = NULL;
	zend_long layout, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(layout)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &layout_param);
	
            value = (zend_long) ns_pagelayout_accessory_controller_count((uintptr_t) layout);
        
	RETURN_LONG(value);
}

