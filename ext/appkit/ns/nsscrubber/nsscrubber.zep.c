
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

#include "ns-scrubber.h"
#include <stdint.h>



/** NSScrubber — horizontal scrubber control with PHP-driven items. */
ZEPHIR_INIT_CLASS(AppKit_NS_NSScrubber_NSScrubber)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSScrubber, NSScrubber, appkit, ns_nsscrubber_nsscrubber, appkit_ns_nsscrubber_nsscrubber_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSScrubber_NSScrubber, create)
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
	
            handle = (zend_long) ns_scrubber_create((double) x, (double) y, (double) width, (double) height);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSScrubber_NSScrubber, wrap)
{
	zval *nsScrubberPtr_param = NULL;
	zend_long nsScrubberPtr, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(nsScrubberPtr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &nsScrubberPtr_param);
	
            handle = (zend_long) ns_scrubber_wrap((void *)(uintptr_t) nsScrubberPtr);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSScrubber_NSScrubber, destroy)
{
	zval *scrubber_param = NULL;
	zend_long scrubber;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(scrubber)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &scrubber_param);
	
            ns_scrubber_destroy((uintptr_t) scrubber);
        
}

PHP_METHOD(AppKit_NS_NSScrubber_NSScrubber, nsScrubber)
{
	zval *scrubber_param = NULL;
	zend_long scrubber, ptr = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(scrubber)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &scrubber_param);
	
            ptr = (zend_long)(uintptr_t) ns_scrubber_nsscrubber((uintptr_t) scrubber);
        
	RETURN_LONG(ptr);
}

PHP_METHOD(AppKit_NS_NSScrubber_NSScrubber, clear)
{
	zval *scrubber_param = NULL;
	zend_long scrubber;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(scrubber)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &scrubber_param);
	
            ns_scrubber_clear((uintptr_t) scrubber);
        
}

PHP_METHOD(AppKit_NS_NSScrubber_NSScrubber, addItem)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval title;
	zval *scrubber_param = NULL, *title_param = NULL;
	zend_long scrubber;

	ZVAL_UNDEF(&title);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(scrubber)
		Z_PARAM_STR(title)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &scrubber_param, &title_param);
	zephir_get_strval(&title, title_param);
	
            ns_scrubber_add_item((uintptr_t) scrubber, Z_STRVAL(title));
        
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSScrubber_NSScrubber, numberOfItems)
{
	zval *scrubber_param = NULL;
	zend_long scrubber, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(scrubber)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &scrubber_param);
	
            value = (zend_long) ns_scrubber_number_of_items((uintptr_t) scrubber);
        
	RETURN_LONG(value);
}

PHP_METHOD(AppKit_NS_NSScrubber_NSScrubber, setMode)
{
	zval *scrubber_param = NULL, *mode_param = NULL;
	zend_long scrubber, mode;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(scrubber)
		Z_PARAM_LONG(mode)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &scrubber_param, &mode_param);
	
            ns_scrubber_set_mode((uintptr_t) scrubber, (int) mode);
        
}

PHP_METHOD(AppKit_NS_NSScrubber_NSScrubber, getMode)
{
	zval *scrubber_param = NULL;
	zend_long scrubber, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(scrubber)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &scrubber_param);
	
            value = (zend_long) ns_scrubber_get_mode((uintptr_t) scrubber);
        
	RETURN_LONG(value);
}

PHP_METHOD(AppKit_NS_NSScrubber_NSScrubber, setItemAlignment)
{
	zval *scrubber_param = NULL, *alignment_param = NULL;
	zend_long scrubber, alignment;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(scrubber)
		Z_PARAM_LONG(alignment)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &scrubber_param, &alignment_param);
	
            ns_scrubber_set_item_alignment((uintptr_t) scrubber, (int) alignment);
        
}

PHP_METHOD(AppKit_NS_NSScrubber_NSScrubber, getItemAlignment)
{
	zval *scrubber_param = NULL;
	zend_long scrubber, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(scrubber)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &scrubber_param);
	
            value = (zend_long) ns_scrubber_get_item_alignment((uintptr_t) scrubber);
        
	RETURN_LONG(value);
}

PHP_METHOD(AppKit_NS_NSScrubber_NSScrubber, setContinuous)
{
	zend_bool flag;
	zval *scrubber_param = NULL, *flag_param = NULL;
	zend_long scrubber;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(scrubber)
		Z_PARAM_BOOL(flag)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &scrubber_param, &flag_param);
	
            ns_scrubber_set_continuous((uintptr_t) scrubber, flag ? 1 : 0);
        
}

PHP_METHOD(AppKit_NS_NSScrubber_NSScrubber, isContinuous)
{
	zend_bool result = 0;
	zval *scrubber_param = NULL;
	zend_long scrubber;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(scrubber)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &scrubber_param);
	
            result = ns_scrubber_is_continuous((uintptr_t) scrubber) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSScrubber_NSScrubber, setSelectedIndex)
{
	zval *scrubber_param = NULL, *index_param = NULL;
	zend_long scrubber, index;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(scrubber)
		Z_PARAM_LONG(index)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &scrubber_param, &index_param);
	
            ns_scrubber_set_selected_index((uintptr_t) scrubber, (int) index);
        
}

PHP_METHOD(AppKit_NS_NSScrubber_NSScrubber, getSelectedIndex)
{
	zval *scrubber_param = NULL;
	zend_long scrubber, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(scrubber)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &scrubber_param);
	
            value = (zend_long) ns_scrubber_get_selected_index((uintptr_t) scrubber);
        
	RETURN_LONG(value);
}

PHP_METHOD(AppKit_NS_NSScrubber_NSScrubber, highlightedIndex)
{
	zval *scrubber_param = NULL;
	zend_long scrubber, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(scrubber)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &scrubber_param);
	
            value = (zend_long) ns_scrubber_get_highlighted_index((uintptr_t) scrubber);
        
	RETURN_LONG(value);
}

PHP_METHOD(AppKit_NS_NSScrubber_NSScrubber, setShowsArrowButtons)
{
	zend_bool flag;
	zval *scrubber_param = NULL, *flag_param = NULL;
	zend_long scrubber;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(scrubber)
		Z_PARAM_BOOL(flag)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &scrubber_param, &flag_param);
	
            ns_scrubber_set_shows_arrow_buttons((uintptr_t) scrubber, flag ? 1 : 0);
        
}

PHP_METHOD(AppKit_NS_NSScrubber_NSScrubber, showsArrowButtons)
{
	zend_bool result = 0;
	zval *scrubber_param = NULL;
	zend_long scrubber;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(scrubber)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &scrubber_param);
	
            result = ns_scrubber_shows_arrow_buttons((uintptr_t) scrubber) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSScrubber_NSScrubber, setShowsAdditionalContentIndicators)
{
	zend_bool flag;
	zval *scrubber_param = NULL, *flag_param = NULL;
	zend_long scrubber;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(scrubber)
		Z_PARAM_BOOL(flag)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &scrubber_param, &flag_param);
	
            ns_scrubber_set_shows_additional_content_indicators((uintptr_t) scrubber, flag ? 1 : 0);
        
}

PHP_METHOD(AppKit_NS_NSScrubber_NSScrubber, showsAdditionalContentIndicators)
{
	zend_bool result = 0;
	zval *scrubber_param = NULL;
	zend_long scrubber;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(scrubber)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &scrubber_param);
	
            result = ns_scrubber_shows_additional_content_indicators((uintptr_t) scrubber) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSScrubber_NSScrubber, reloadData)
{
	zval *scrubber_param = NULL;
	zend_long scrubber;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(scrubber)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &scrubber_param);
	
            ns_scrubber_reload_data((uintptr_t) scrubber);
        
}

PHP_METHOD(AppKit_NS_NSScrubber_NSScrubber, pollSelection)
{
	zend_bool result = 0;
	zval *scrubber_param = NULL;
	zend_long scrubber;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(scrubber)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &scrubber_param);
	
            result = ns_scrubber_poll_selection((uintptr_t) scrubber) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSScrubber_NSScrubber, setLayout)
{
	zval *scrubber_param = NULL, *layout_param = NULL;
	zend_long scrubber, layout;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(scrubber)
		Z_PARAM_LONG(layout)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &scrubber_param, &layout_param);
	
            ns_scrubber_set_layout((uintptr_t) scrubber, (uintptr_t) layout);
        
}

PHP_METHOD(AppKit_NS_NSScrubber_NSScrubber, getLayout)
{
	zval *scrubber_param = NULL;
	zend_long scrubber, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(scrubber)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &scrubber_param);
	
            handle = (zend_long) ns_scrubber_get_layout((uintptr_t) scrubber);
        
	RETURN_LONG(handle);
}

