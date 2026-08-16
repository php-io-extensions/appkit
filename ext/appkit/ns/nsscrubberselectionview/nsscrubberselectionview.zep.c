
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

#include "ns-scrubberselectionview.h"
#include <stdint.h>



/**
 * NSScrubberSelectionView base for scrubber selection decorations.
 */
ZEPHIR_INIT_CLASS(AppKit_NS_NSScrubberSelectionView_NSScrubberSelectionView)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSScrubberSelectionView, NSScrubberSelectionView, appkit, ns_nsscrubberselectionview_nsscrubberselectionview, appkit_ns_nsscrubberselectionview_nsscrubberselectionview_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSScrubberSelectionView_NSScrubberSelectionView, create)
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
	
            handle = (zend_long) ns_scrubberselectionview_create((double) x, (double) y, (double) width, (double) height);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSScrubberSelectionView_NSScrubberSelectionView, wrap)
{
	zval *nsScrubberSelectionViewPtr_param = NULL;
	zend_long nsScrubberSelectionViewPtr, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(nsScrubberSelectionViewPtr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &nsScrubberSelectionViewPtr_param);
	
            handle = (zend_long) ns_scrubberselectionview_wrap((void *)(uintptr_t) nsScrubberSelectionViewPtr);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSScrubberSelectionView_NSScrubberSelectionView, destroy)
{
	zval *view_param = NULL;
	zend_long view;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(view)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &view_param);
	
            ns_scrubberselectionview_destroy((uintptr_t) view);
        
}

PHP_METHOD(AppKit_NS_NSScrubberSelectionView_NSScrubberSelectionView, nsScrubberSelectionView)
{
	zval *view_param = NULL;
	zend_long view, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(view)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &view_param);
	
            handle = (zend_long) (uintptr_t) ns_scrubberselectionview_nsscrubberselectionview((uintptr_t) view);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSScrubberSelectionView_NSScrubberSelectionView, setSelected)
{
	zend_bool flag;
	zval *view_param = NULL, *flag_param = NULL;
	zend_long view;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(view)
		Z_PARAM_BOOL(flag)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &view_param, &flag_param);
	
            ns_scrubberselectionview_set_selected((uintptr_t) view, flag ? 1 : 0);
        
}

PHP_METHOD(AppKit_NS_NSScrubberSelectionView_NSScrubberSelectionView, isSelected)
{
	zend_bool result = 0;
	zval *view_param = NULL;
	zend_long view;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(view)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &view_param);
	
            result = ns_scrubberselectionview_is_selected((uintptr_t) view) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSScrubberSelectionView_NSScrubberSelectionView, setHighlighted)
{
	zend_bool flag;
	zval *view_param = NULL, *flag_param = NULL;
	zend_long view;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(view)
		Z_PARAM_BOOL(flag)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &view_param, &flag_param);
	
            ns_scrubberselectionview_set_highlighted((uintptr_t) view, flag ? 1 : 0);
        
}

PHP_METHOD(AppKit_NS_NSScrubberSelectionView_NSScrubberSelectionView, isHighlighted)
{
	zend_bool result = 0;
	zval *view_param = NULL;
	zend_long view;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(view)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &view_param);
	
            result = ns_scrubberselectionview_is_highlighted((uintptr_t) view) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSScrubberSelectionView_NSScrubberSelectionView, applyLayoutAttributes)
{
	zval *view_param = NULL, *layoutAttributesPtr_param = NULL;
	zend_long view, layoutAttributesPtr;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(view)
		Z_PARAM_LONG(layoutAttributesPtr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &view_param, &layoutAttributesPtr_param);
	
            ns_scrubberselectionview_apply_layout_attributes((uintptr_t) view, (void *)(uintptr_t) layoutAttributesPtr);
        
}

