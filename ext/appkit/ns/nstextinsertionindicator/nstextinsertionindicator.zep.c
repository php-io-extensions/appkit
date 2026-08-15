
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

#include "ns-textinsertionindicator.h"
#include <stdint.h>



/**
 * NSTextInsertionIndicator — TextKit 2 caret indicator view (macOS 14+).
 */
ZEPHIR_INIT_CLASS(AppKit_NS_NSTextInsertionIndicator_NSTextInsertionIndicator)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSTextInsertionIndicator, NSTextInsertionIndicator, appkit, ns_nstextinsertionindicator_nstextinsertionindicator, appkit_ns_nstextinsertionindicator_nstextinsertionindicator_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSTextInsertionIndicator_NSTextInsertionIndicator, create)
{
	zval *x_param = NULL, *y_param = NULL, *width_param = NULL, *height_param = NULL;
	zend_long x, y, width, height, handle = 0;

	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(x)
		Z_PARAM_LONG(y)
		Z_PARAM_LONG(width)
		Z_PARAM_LONG(height)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &x_param, &y_param, &width_param, &height_param);
	
            handle = (zend_long) ns_textinsertionindicator_create((double) x, (double) y, (double) width, (double) height);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSTextInsertionIndicator_NSTextInsertionIndicator, wrap)
{
	zval *nsTextInsertionIndicatorPtr_param = NULL;
	zend_long nsTextInsertionIndicatorPtr, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(nsTextInsertionIndicatorPtr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &nsTextInsertionIndicatorPtr_param);
	
            handle = (zend_long) ns_textinsertionindicator_wrap((void *)(uintptr_t) nsTextInsertionIndicatorPtr);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSTextInsertionIndicator_NSTextInsertionIndicator, destroy)
{
	zval *indicator_param = NULL;
	zend_long indicator;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(indicator)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &indicator_param);
	
            ns_textinsertionindicator_destroy((uintptr_t) indicator);
        
}

PHP_METHOD(AppKit_NS_NSTextInsertionIndicator_NSTextInsertionIndicator, nsTextInsertionIndicator)
{
	zval *indicator_param = NULL;
	zend_long indicator, ptr = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(indicator)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &indicator_param);
	
            ptr = (zend_long)(uintptr_t) ns_textinsertionindicator_nstextinsertionindicator((uintptr_t) indicator);
        
	RETURN_LONG(ptr);
}

PHP_METHOD(AppKit_NS_NSTextInsertionIndicator_NSTextInsertionIndicator, setDisplayMode)
{
	zval *indicator_param = NULL, *mode_param = NULL;
	zend_long indicator, mode;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(indicator)
		Z_PARAM_LONG(mode)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &indicator_param, &mode_param);
	
            ns_textinsertionindicator_set_display_mode((uintptr_t) indicator, (int) mode);
        
}

PHP_METHOD(AppKit_NS_NSTextInsertionIndicator_NSTextInsertionIndicator, getDisplayMode)
{
	zval *indicator_param = NULL;
	zend_long indicator, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(indicator)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &indicator_param);
	
            value = (zend_long) ns_textinsertionindicator_get_display_mode((uintptr_t) indicator);
        
	RETURN_LONG(value);
}

PHP_METHOD(AppKit_NS_NSTextInsertionIndicator_NSTextInsertionIndicator, setColor)
{
	zval *indicator_param = NULL, *color_param = NULL;
	zend_long indicator, color;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(indicator)
		Z_PARAM_LONG(color)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &indicator_param, &color_param);
	
            ns_textinsertionindicator_set_color((uintptr_t) indicator, (uintptr_t) color);
        
}

PHP_METHOD(AppKit_NS_NSTextInsertionIndicator_NSTextInsertionIndicator, getColor)
{
	zval *indicator_param = NULL;
	zend_long indicator, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(indicator)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &indicator_param);
	
            handle = (zend_long) ns_textinsertionindicator_get_color((uintptr_t) indicator);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSTextInsertionIndicator_NSTextInsertionIndicator, setAutomaticModeOptions)
{
	zval *indicator_param = NULL, *options_param = NULL;
	zend_long indicator, options;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(indicator)
		Z_PARAM_LONG(options)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &indicator_param, &options_param);
	
            ns_textinsertionindicator_set_automatic_mode_options((uintptr_t) indicator, (int) options);
        
}

PHP_METHOD(AppKit_NS_NSTextInsertionIndicator_NSTextInsertionIndicator, getAutomaticModeOptions)
{
	zval *indicator_param = NULL;
	zend_long indicator, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(indicator)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &indicator_param);
	
            value = (zend_long) ns_textinsertionindicator_get_automatic_mode_options((uintptr_t) indicator);
        
	RETURN_LONG(value);
}

/** Maps to effectsViewInserter — adds the glow view as subview of parentView. */
PHP_METHOD(AppKit_NS_NSTextInsertionIndicator_NSTextInsertionIndicator, setEffectsViewInserterParent)
{
	zval *indicator_param = NULL, *parentView_param = NULL;
	zend_long indicator, parentView;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(indicator)
		Z_PARAM_LONG(parentView)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &indicator_param, &parentView_param);
	
            ns_textinsertionindicator_set_effects_view_inserter_parent((uintptr_t) indicator, (uintptr_t) parentView);
        
}

PHP_METHOD(AppKit_NS_NSTextInsertionIndicator_NSTextInsertionIndicator, clearEffectsViewInserter)
{
	zval *indicator_param = NULL;
	zend_long indicator;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(indicator)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &indicator_param);
	
            ns_textinsertionindicator_clear_effects_view_inserter((uintptr_t) indicator);
        
}

PHP_METHOD(AppKit_NS_NSTextInsertionIndicator_NSTextInsertionIndicator, hasEffectsViewInserter)
{
	zend_bool result = 0;
	zval *indicator_param = NULL;
	zend_long indicator;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(indicator)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &indicator_param);
	
            result = ns_textinsertionindicator_has_effects_view_inserter((uintptr_t) indicator) == 1;
        
	RETURN_BOOL(result);
}

