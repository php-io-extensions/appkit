
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

#include "ns-scrubberlayout.h"
#include <stdint.h>



/**
 * NSScrubberLayout — abstract scrubber item layout base.
 */
ZEPHIR_INIT_CLASS(AppKit_NS_NSScrubberLayout_NSScrubberLayout)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSScrubberLayout, NSScrubberLayout, appkit, ns_nsscrubberlayout_nsscrubberlayout, appkit_ns_nsscrubberlayout_nsscrubberlayout_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSScrubberLayout_NSScrubberLayout, create)
{
	zend_long handle = 0;
	
            handle = (zend_long) ns_scrubberlayout_create();
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSScrubberLayout_NSScrubberLayout, wrap)
{
	zval *nsScrubberLayoutPtr_param = NULL;
	zend_long nsScrubberLayoutPtr, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(nsScrubberLayoutPtr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &nsScrubberLayoutPtr_param);
	
            handle = (zend_long) ns_scrubberlayout_wrap((void *)(uintptr_t) nsScrubberLayoutPtr);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSScrubberLayout_NSScrubberLayout, destroy)
{
	zval *layout_param = NULL;
	zend_long layout;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(layout)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &layout_param);
	
            ns_scrubberlayout_destroy((uintptr_t) layout);
        
}

PHP_METHOD(AppKit_NS_NSScrubberLayout_NSScrubberLayout, nsScrubberLayout)
{
	zval *layout_param = NULL;
	zend_long layout, ptr = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(layout)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &layout_param);
	
            ptr = (zend_long)(uintptr_t) ns_scrubberlayout_nsscrubberlayout((uintptr_t) layout);
        
	RETURN_LONG(ptr);
}

PHP_METHOD(AppKit_NS_NSScrubberLayout_NSScrubberLayout, invalidate)
{
	zval *layout_param = NULL;
	zend_long layout;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(layout)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &layout_param);
	
            ns_scrubberlayout_invalidate((uintptr_t) layout);
        
}

PHP_METHOD(AppKit_NS_NSScrubberLayout_NSScrubberLayout, scrubber)
{
	zval *layout_param = NULL;
	zend_long layout, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(layout)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &layout_param);
	
            handle = (zend_long) ns_scrubberlayout_scrubber((uintptr_t) layout);
        
	RETURN_LONG(handle);
}

/**
 * @return array [x, y, width, height] or empty array
 */
PHP_METHOD(AppKit_NS_NSScrubberLayout_NSScrubberLayout, visibleRect)
{
	zval out;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *layout_param = NULL;
	zend_long layout;

	ZVAL_UNDEF(&out);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(layout)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &layout_param);
	ZEPHIR_INIT_VAR(&out);
	array_init(&out);
	
            double x = 0.0, y = 0.0, w = 0.0, h = 0.0;
            if (ns_scrubberlayout_visible_rect((uintptr_t) layout, &x, &y, &w, &h)) {
                add_next_index_double(&out, x);
                add_next_index_double(&out, y);
                add_next_index_double(&out, w);
                add_next_index_double(&out, h);
            }
        
	RETURN_CTOR(&out);
}

PHP_METHOD(AppKit_NS_NSScrubberLayout_NSScrubberLayout, contentWidth)
{
	double value = 0;
	zval *layout_param = NULL;
	zend_long layout;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(layout)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &layout_param);
	
            value = ns_scrubberlayout_content_width((uintptr_t) layout);
        
	RETURN_DOUBLE(value);
}

PHP_METHOD(AppKit_NS_NSScrubberLayout_NSScrubberLayout, contentHeight)
{
	double value = 0;
	zval *layout_param = NULL;
	zend_long layout;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(layout)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &layout_param);
	
            value = ns_scrubberlayout_content_height((uintptr_t) layout);
        
	RETURN_DOUBLE(value);
}

PHP_METHOD(AppKit_NS_NSScrubberLayout_NSScrubberLayout, shouldInvalidateForSelectionChange)
{
	zend_bool result = 0;
	zval *layout_param = NULL;
	zend_long layout;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(layout)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &layout_param);
	
            result = ns_scrubberlayout_should_invalidate_for_selection_change((uintptr_t) layout) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSScrubberLayout_NSScrubberLayout, shouldInvalidateForHighlightChange)
{
	zend_bool result = 0;
	zval *layout_param = NULL;
	zend_long layout;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(layout)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &layout_param);
	
            result = ns_scrubberlayout_should_invalidate_for_highlight_change((uintptr_t) layout) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSScrubberLayout_NSScrubberLayout, automaticallyMirrorsInRightToLeftLayout)
{
	zend_bool result = 0;
	zval *layout_param = NULL;
	zend_long layout;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(layout)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &layout_param);
	
            result = ns_scrubberlayout_automatically_mirrors_in_rtl((uintptr_t) layout) == 1;
        
	RETURN_BOOL(result);
}

