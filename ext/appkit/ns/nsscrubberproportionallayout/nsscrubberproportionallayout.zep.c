
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

#include "ns-scrubberproportionallayout.h"
#include <stdint.h>



/**
 * NSScrubberProportionalLayout — viewport-fraction scrubber item layout.
 */
ZEPHIR_INIT_CLASS(AppKit_NS_NSScrubberProportionalLayout_NSScrubberProportionalLayout)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSScrubberProportionalLayout, NSScrubberProportionalLayout, appkit, ns_nsscrubberproportionallayout_nsscrubberproportionallayout, appkit_ns_nsscrubberproportionallayout_nsscrubberproportionallayout_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSScrubberProportionalLayout_NSScrubberProportionalLayout, create)
{
	zval *numberOfVisibleItems_param = NULL;
	zend_long numberOfVisibleItems, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(numberOfVisibleItems)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &numberOfVisibleItems_param);
	
            handle = (zend_long) ns_scrubberproportionallayout_create((int) numberOfVisibleItems);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSScrubberProportionalLayout_NSScrubberProportionalLayout, wrap)
{
	zval *nsScrubberProportionalLayoutPtr_param = NULL;
	zend_long nsScrubberProportionalLayoutPtr, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(nsScrubberProportionalLayoutPtr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &nsScrubberProportionalLayoutPtr_param);
	
            handle = (zend_long) ns_scrubberproportionallayout_wrap((void *)(uintptr_t) nsScrubberProportionalLayoutPtr);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSScrubberProportionalLayout_NSScrubberProportionalLayout, destroy)
{
	zval *layout_param = NULL;
	zend_long layout;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(layout)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &layout_param);
	
            ns_scrubberproportionallayout_destroy((uintptr_t) layout);
        
}

PHP_METHOD(AppKit_NS_NSScrubberProportionalLayout_NSScrubberProportionalLayout, nsScrubberProportionalLayout)
{
	zval *layout_param = NULL;
	zend_long layout, ptr = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(layout)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &layout_param);
	
            ptr = (zend_long)(uintptr_t) ns_scrubberproportionallayout_nsscrubberproportionallayout((uintptr_t) layout);
        
	RETURN_LONG(ptr);
}

PHP_METHOD(AppKit_NS_NSScrubberProportionalLayout_NSScrubberProportionalLayout, setNumberOfVisibleItems)
{
	zval *layout_param = NULL, *count_param = NULL;
	zend_long layout, count;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(layout)
		Z_PARAM_LONG(count)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &layout_param, &count_param);
	
            ns_scrubberproportionallayout_set_number_of_visible_items((uintptr_t) layout, (int) count);
        
}

PHP_METHOD(AppKit_NS_NSScrubberProportionalLayout_NSScrubberProportionalLayout, getNumberOfVisibleItems)
{
	zval *layout_param = NULL;
	zend_long layout, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(layout)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &layout_param);
	
            value = (zend_long) ns_scrubberproportionallayout_get_number_of_visible_items((uintptr_t) layout);
        
	RETURN_LONG(value);
}

