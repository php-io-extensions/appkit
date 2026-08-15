
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

#include "ns-textfinder.h"
#include <stdint.h>



/**
 * NSTextFinder — find / replace controller.
 */
ZEPHIR_INIT_CLASS(AppKit_NS_NSTextFinder_NSTextFinder)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSTextFinder, NSTextFinder, appkit, ns_nstextfinder_nstextfinder, appkit_ns_nstextfinder_nstextfinder_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSTextFinder_NSTextFinder, create)
{
	zend_long handle = 0;
	
            handle = (zend_long) ns_textfinder_create();
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSTextFinder_NSTextFinder, wrap)
{
	zval *nsTextFinderPtr_param = NULL;
	zend_long nsTextFinderPtr, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(nsTextFinderPtr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &nsTextFinderPtr_param);
	
            handle = (zend_long) ns_textfinder_wrap((void *)(uintptr_t) nsTextFinderPtr);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSTextFinder_NSTextFinder, destroy)
{
	zval *finder_param = NULL;
	zend_long finder;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(finder)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &finder_param);
	
            ns_textfinder_destroy((uintptr_t) finder);
        
}

PHP_METHOD(AppKit_NS_NSTextFinder_NSTextFinder, performAction)
{
	zval *finder_param = NULL, *action_param = NULL;
	zend_long finder, action;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(finder)
		Z_PARAM_LONG(action)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &finder_param, &action_param);
	
            ns_textfinder_perform_action((uintptr_t) finder, (int) action);
        
}

PHP_METHOD(AppKit_NS_NSTextFinder_NSTextFinder, validateAction)
{
	zend_bool result = 0;
	zval *finder_param = NULL, *action_param = NULL;
	zend_long finder, action;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(finder)
		Z_PARAM_LONG(action)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &finder_param, &action_param);
	
            result = ns_textfinder_validate_action((uintptr_t) finder, (int) action) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSTextFinder_NSTextFinder, setIncrementalSearchingEnabled)
{
	zend_bool flag;
	zval *finder_param = NULL, *flag_param = NULL;
	zend_long finder;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(finder)
		Z_PARAM_BOOL(flag)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &finder_param, &flag_param);
	
            ns_textfinder_set_incremental_searching_enabled((uintptr_t) finder, flag ? 1 : 0);
        
}

PHP_METHOD(AppKit_NS_NSTextFinder_NSTextFinder, incrementalSearchingEnabled)
{
	zend_bool result = 0;
	zval *finder_param = NULL;
	zend_long finder;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(finder)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &finder_param);
	
            result = ns_textfinder_incremental_searching_enabled((uintptr_t) finder) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSTextFinder_NSTextFinder, setFindIndicatorNeedsUpdate)
{
	zend_bool flag;
	zval *finder_param = NULL, *flag_param = NULL;
	zend_long finder;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(finder)
		Z_PARAM_BOOL(flag)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &finder_param, &flag_param);
	
            ns_textfinder_set_find_indicator_needs_update((uintptr_t) finder, flag ? 1 : 0);
        
}

PHP_METHOD(AppKit_NS_NSTextFinder_NSTextFinder, findIndicatorNeedsUpdate)
{
	zend_bool result = 0;
	zval *finder_param = NULL;
	zend_long finder;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(finder)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &finder_param);
	
            result = ns_textfinder_find_indicator_needs_update((uintptr_t) finder) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSTextFinder_NSTextFinder, cancelFindIndicator)
{
	zval *finder_param = NULL;
	zend_long finder;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(finder)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &finder_param);
	
            ns_textfinder_cancel_find_indicator((uintptr_t) finder);
        
}

PHP_METHOD(AppKit_NS_NSTextFinder_NSTextFinder, noteClientStringWillChange)
{
	zval *finder_param = NULL;
	zend_long finder;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(finder)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &finder_param);
	
            ns_textfinder_note_client_string_will_change((uintptr_t) finder);
        
}

