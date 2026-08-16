
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

#include "ns-printpanel.h"
#include <stdint.h>



/**
 * NSPrintPanel — print job options panel.
 */
ZEPHIR_INIT_CLASS(AppKit_NS_NSPrintPanel_NSPrintPanel)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSPrintPanel, NSPrintPanel, appkit, ns_nsprintpanel_nsprintpanel, appkit_ns_nsprintpanel_nsprintpanel_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSPrintPanel_NSPrintPanel, wrap)
{
	zval *nsPrintPanelPtr_param = NULL;
	zend_long nsPrintPanelPtr, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(nsPrintPanelPtr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &nsPrintPanelPtr_param);
	
            handle = (zend_long) ns_printpanel_wrap((void *)(uintptr_t) nsPrintPanelPtr);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSPrintPanel_NSPrintPanel, destroy)
{
	zval *panel_param = NULL;
	zend_long panel;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(panel)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &panel_param);
	
            ns_printpanel_destroy((uintptr_t) panel);
        
}

PHP_METHOD(AppKit_NS_NSPrintPanel_NSPrintPanel, nsPrintPanel)
{
	zval *panel_param = NULL;
	zend_long panel, ptr = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(panel)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &panel_param);
	
            ptr = (zend_long)(uintptr_t) ns_printpanel_nsprintpanel((uintptr_t) panel);
        
	RETURN_LONG(ptr);
}

PHP_METHOD(AppKit_NS_NSPrintPanel_NSPrintPanel, printPanel)
{
	zend_long handle = 0;
	
            handle = (zend_long) ns_printpanel_print_panel();
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSPrintPanel_NSPrintPanel, options)
{
	zval *panel_param = NULL;
	zend_long panel, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(panel)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &panel_param);
	
            value = (zend_long) ns_printpanel_options((uintptr_t) panel);
        
	RETURN_LONG(value);
}

PHP_METHOD(AppKit_NS_NSPrintPanel_NSPrintPanel, setOptions)
{
	zval *panel_param = NULL, *options_param = NULL;
	zend_long panel, options;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(panel)
		Z_PARAM_LONG(options)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &panel_param, &options_param);
	
            ns_printpanel_set_options((uintptr_t) panel, (unsigned) options);
        
}

PHP_METHOD(AppKit_NS_NSPrintPanel_NSPrintPanel, defaultButtonTitle)
{
	zval *panel_param = NULL;
	zend_long panel;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(panel)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &panel_param);
	
            char buf[4096];
            buf[0] = '\0';
            if (ns_printpanel_default_button_title((uintptr_t) panel, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        
	RETURN_STRING("");
}

PHP_METHOD(AppKit_NS_NSPrintPanel_NSPrintPanel, setDefaultButtonTitle)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval title;
	zval *panel_param = NULL, *title_param = NULL;
	zend_long panel;

	ZVAL_UNDEF(&title);
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(panel)
		Z_PARAM_OPTIONAL
		Z_PARAM_STR(title)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 1, &panel_param, &title_param);
	if (!title_param) {
		ZEPHIR_INIT_VAR(&title);
		ZVAL_STRING(&title, "");
	} else {
		zephir_get_strval(&title, title_param);
	}
	
            ns_printpanel_set_default_button_title((uintptr_t) panel, Z_STRVAL(title));
        
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSPrintPanel_NSPrintPanel, helpAnchor)
{
	zval *panel_param = NULL;
	zend_long panel;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(panel)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &panel_param);
	
            char buf[4096];
            buf[0] = '\0';
            if (ns_printpanel_help_anchor((uintptr_t) panel, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        
	RETURN_STRING("");
}

PHP_METHOD(AppKit_NS_NSPrintPanel_NSPrintPanel, setHelpAnchor)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval anchor;
	zval *panel_param = NULL, *anchor_param = NULL;
	zend_long panel;

	ZVAL_UNDEF(&anchor);
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(panel)
		Z_PARAM_OPTIONAL
		Z_PARAM_STR(anchor)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 1, &panel_param, &anchor_param);
	if (!anchor_param) {
		ZEPHIR_INIT_VAR(&anchor);
		ZVAL_STRING(&anchor, "");
	} else {
		zephir_get_strval(&anchor, anchor_param);
	}
	
            ns_printpanel_set_help_anchor((uintptr_t) panel, Z_STRVAL(anchor));
        
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSPrintPanel_NSPrintPanel, jobStyleHint)
{
	zval *panel_param = NULL;
	zend_long panel;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(panel)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &panel_param);
	
            char buf[4096];
            buf[0] = '\0';
            if (ns_printpanel_job_style_hint((uintptr_t) panel, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        
	RETURN_STRING("");
}

PHP_METHOD(AppKit_NS_NSPrintPanel_NSPrintPanel, setJobStyleHint)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval hint;
	zval *panel_param = NULL, *hint_param = NULL;
	zend_long panel;

	ZVAL_UNDEF(&hint);
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(panel)
		Z_PARAM_OPTIONAL
		Z_PARAM_STR(hint)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 1, &panel_param, &hint_param);
	if (!hint_param) {
		ZEPHIR_INIT_VAR(&hint);
		ZVAL_STRING(&hint, "");
	} else {
		zephir_get_strval(&hint, hint_param);
	}
	
            ns_printpanel_set_job_style_hint((uintptr_t) panel, Z_STRVAL(hint));
        
	ZEPHIR_MM_RESTORE();
}

/**
 * @return int NSModalResponse (NSOKButton / NSCancelButton)
 */
PHP_METHOD(AppKit_NS_NSPrintPanel_NSPrintPanel, runModal)
{
	zval *panel_param = NULL;
	zend_long panel, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(panel)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &panel_param);
	
            value = (zend_long) ns_printpanel_run_modal((uintptr_t) panel);
        
	RETURN_LONG(value);
}

/**
 * @param printInfo Borrowed NSPrintInfo pointer, or 0 for sharedPrintInfo
 * @return int NSModalResponse (NSOKButton / NSCancelButton)
 */
PHP_METHOD(AppKit_NS_NSPrintPanel_NSPrintPanel, runModalWithPrintInfo)
{
	zval *panel_param = NULL, *printInfo_param = NULL;
	zend_long panel, printInfo, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(panel)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(printInfo)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 1, &panel_param, &printInfo_param);
	if (!printInfo_param) {
		printInfo = 0;
	} else {
		}
	
            value = (zend_long) ns_printpanel_run_modal_with_print_info(
                (uintptr_t) panel,
                (void *)(uintptr_t) printInfo
            );
        
	RETURN_LONG(value);
}

/**
 * @return int Borrowed NSPrintInfo pointer after modal, or 0
 */
PHP_METHOD(AppKit_NS_NSPrintPanel_NSPrintPanel, printInfo)
{
	zval *panel_param = NULL;
	zend_long panel, ptr = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(panel)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &panel_param);
	
            ptr = (zend_long)(uintptr_t) ns_printpanel_print_info((uintptr_t) panel);
        
	RETURN_LONG(ptr);
}

PHP_METHOD(AppKit_NS_NSPrintPanel_NSPrintPanel, addAccessoryController)
{
	zval *panel_param = NULL, *controller_param = NULL;
	zend_long panel, controller;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(panel)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &panel_param, &controller_param);
	
            ns_printpanel_add_accessory_controller((uintptr_t) panel, (uintptr_t) controller);
        
}

PHP_METHOD(AppKit_NS_NSPrintPanel_NSPrintPanel, removeAccessoryController)
{
	zval *panel_param = NULL, *controller_param = NULL;
	zend_long panel, controller;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(panel)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &panel_param, &controller_param);
	
            ns_printpanel_remove_accessory_controller((uintptr_t) panel, (uintptr_t) controller);
        
}

PHP_METHOD(AppKit_NS_NSPrintPanel_NSPrintPanel, accessoryControllerCount)
{
	zval *panel_param = NULL;
	zend_long panel, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(panel)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &panel_param);
	
            value = (zend_long) ns_printpanel_accessory_controller_count((uintptr_t) panel);
        
	RETURN_LONG(value);
}

