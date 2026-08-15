
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

#include "ns-popover.h"
#include <stdint.h>



/**
 * NSPopover anchored popup.
 */
ZEPHIR_INIT_CLASS(AppKit_NS_NSPopover_NSPopover)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSPopover, NSPopover, appkit, ns_nspopover_nspopover, appkit_ns_nspopover_nspopover_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSPopover_NSPopover, create)
{
	zend_long handle = 0;
	
            handle = (zend_long) ns_popover_create();
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSPopover_NSPopover, destroy)
{
	zval *popover_param = NULL;
	zend_long popover;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(popover)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &popover_param);
	
            ns_popover_destroy((uintptr_t) popover);
        
}

PHP_METHOD(AppKit_NS_NSPopover_NSPopover, setContentView)
{
	zval *popover_param = NULL, *view_param = NULL;
	zend_long popover, view;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(popover)
		Z_PARAM_LONG(view)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &popover_param, &view_param);
	
            ns_popover_set_content((uintptr_t) popover, (uintptr_t) view);
        
}

PHP_METHOD(AppKit_NS_NSPopover_NSPopover, show)
{
	zval *popover_param = NULL, *anchor_param = NULL;
	zend_long popover, anchor;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(popover)
		Z_PARAM_LONG(anchor)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &popover_param, &anchor_param);
	
            ns_popover_show((uintptr_t) popover, (uintptr_t) anchor);
        
}

PHP_METHOD(AppKit_NS_NSPopover_NSPopover, close)
{
	zval *popover_param = NULL;
	zend_long popover;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(popover)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &popover_param);
	
            ns_popover_close((uintptr_t) popover);
        
}

PHP_METHOD(AppKit_NS_NSPopover_NSPopover, isShown)
{
	zend_bool result = 0;
	zval *popover_param = NULL;
	zend_long popover;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(popover)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &popover_param);
	
            result = ns_popover_is_shown((uintptr_t) popover) == 1;
        
	RETURN_BOOL(result);
}

