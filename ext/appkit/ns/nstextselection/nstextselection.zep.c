
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

#include "ns-textselection.h"
#include <stdint.h>



/**
 * NSTextSelection — TextKit 2 selection.
 */
ZEPHIR_INIT_CLASS(AppKit_NS_NSTextSelection_NSTextSelection)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSTextSelection, NSTextSelection, appkit, ns_nstextselection_nstextselection, appkit_ns_nstextselection_nstextselection_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSTextSelection_NSTextSelection, createWithLocation)
{
	zval *nsTextLocationPtr_param = NULL, *affinity_param = NULL;
	zend_long nsTextLocationPtr, affinity, handle = 0;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(nsTextLocationPtr)
		Z_PARAM_LONG(affinity)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &nsTextLocationPtr_param, &affinity_param);
	
            handle = (zend_long) ns_textselection_create_with_location((uintptr_t) nsTextLocationPtr, (int) affinity);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSTextSelection_NSTextSelection, wrap)
{
	zval *nsTextSelectionPtr_param = NULL;
	zend_long nsTextSelectionPtr, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(nsTextSelectionPtr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &nsTextSelectionPtr_param);
	
            handle = (zend_long) ns_textselection_wrap((void *)(uintptr_t) nsTextSelectionPtr);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSTextSelection_NSTextSelection, destroy)
{
	zval *selection_param = NULL;
	zend_long selection;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(selection)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &selection_param);
	
            ns_textselection_destroy((uintptr_t) selection);
        
}

PHP_METHOD(AppKit_NS_NSTextSelection_NSTextSelection, granularity)
{
	zval *selection_param = NULL;
	zend_long selection, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(selection)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &selection_param);
	
            value = (zend_long) ns_textselection_get_granularity((uintptr_t) selection);
        
	RETURN_LONG(value);
}

PHP_METHOD(AppKit_NS_NSTextSelection_NSTextSelection, affinity)
{
	zval *selection_param = NULL;
	zend_long selection, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(selection)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &selection_param);
	
            value = (zend_long) ns_textselection_get_affinity((uintptr_t) selection);
        
	RETURN_LONG(value);
}

PHP_METHOD(AppKit_NS_NSTextSelection_NSTextSelection, isTransient)
{
	zend_bool result = 0;
	zval *selection_param = NULL;
	zend_long selection;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(selection)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &selection_param);
	
            result = ns_textselection_is_transient((uintptr_t) selection) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSTextSelection_NSTextSelection, textRangesCount)
{
	zval *selection_param = NULL;
	zend_long selection, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(selection)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &selection_param);
	
            value = (zend_long) ns_textselection_text_ranges_count((uintptr_t) selection);
        
	RETURN_LONG(value);
}

PHP_METHOD(AppKit_NS_NSTextSelection_NSTextSelection, getAnchorPositionOffset)
{
	double value = 0;
	zval *selection_param = NULL;
	zend_long selection;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(selection)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &selection_param);
	
            value = ns_textselection_anchor_position_offset((uintptr_t) selection);
        
	RETURN_DOUBLE((double) (value));
}

PHP_METHOD(AppKit_NS_NSTextSelection_NSTextSelection, setAnchorPositionOffset)
{
	double offset;
	zval *selection_param = NULL, *offset_param = NULL;
	zend_long selection;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(selection)
		Z_PARAM_ZVAL(offset)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &selection_param, &offset_param);
	offset = zephir_get_doubleval(offset_param);
	
            ns_textselection_set_anchor_position_offset((uintptr_t) selection, (double) offset);
        
}

