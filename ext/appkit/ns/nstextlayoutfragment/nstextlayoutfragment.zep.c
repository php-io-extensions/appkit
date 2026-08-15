
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

#include "ns-textlayoutfragment.h"
#include <stdint.h>



/**
 * NSTextLayoutFragment — laid-out text fragment.
 */
ZEPHIR_INIT_CLASS(AppKit_NS_NSTextLayoutFragment_NSTextLayoutFragment)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSTextLayoutFragment, NSTextLayoutFragment, appkit, ns_nstextlayoutfragment_nstextlayoutfragment, appkit_ns_nstextlayoutfragment_nstextlayoutfragment_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSTextLayoutFragment_NSTextLayoutFragment, wrap)
{
	zval *nsTextLayoutFragmentPtr_param = NULL;
	zend_long nsTextLayoutFragmentPtr, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(nsTextLayoutFragmentPtr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &nsTextLayoutFragmentPtr_param);
	
            handle = (zend_long) ns_textlayoutfragment_wrap((void *)(uintptr_t) nsTextLayoutFragmentPtr);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSTextLayoutFragment_NSTextLayoutFragment, destroy)
{
	zval *fragment_param = NULL;
	zend_long fragment;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(fragment)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &fragment_param);
	
            ns_textlayoutfragment_destroy((uintptr_t) fragment);
        
}

PHP_METHOD(AppKit_NS_NSTextLayoutFragment_NSTextLayoutFragment, state)
{
	zval *fragment_param = NULL;
	zend_long fragment, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(fragment)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &fragment_param);
	
            value = (zend_long) ns_textlayoutfragment_get_state((uintptr_t) fragment);
        
	RETURN_LONG(value);
}

/**
 * @return array [x, y, w, h]
 */
PHP_METHOD(AppKit_NS_NSTextLayoutFragment_NSTextLayoutFragment, layoutFragmentFrame)
{
	zval out;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *fragment_param = NULL;
	zend_long fragment;

	ZVAL_UNDEF(&out);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(fragment)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &fragment_param);
	ZEPHIR_INIT_VAR(&out);
	array_init(&out);
	
            double x = 0.0, y = 0.0, w = 0.0, h = 0.0;
            ns_textlayoutfragment_layout_fragment_frame((uintptr_t) fragment, &x, &y, &w, &h);
            add_next_index_double(&out, x);
            add_next_index_double(&out, y);
            add_next_index_double(&out, w);
            add_next_index_double(&out, h);
        
	RETURN_CTOR(&out);
}

/**
 * @return array [x, y, w, h]
 */
PHP_METHOD(AppKit_NS_NSTextLayoutFragment_NSTextLayoutFragment, renderingSurfaceBounds)
{
	zval out;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *fragment_param = NULL;
	zend_long fragment;

	ZVAL_UNDEF(&out);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(fragment)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &fragment_param);
	ZEPHIR_INIT_VAR(&out);
	array_init(&out);
	
            double x = 0.0, y = 0.0, w = 0.0, h = 0.0;
            ns_textlayoutfragment_rendering_surface_bounds((uintptr_t) fragment, &x, &y, &w, &h);
            add_next_index_double(&out, x);
            add_next_index_double(&out, y);
            add_next_index_double(&out, w);
            add_next_index_double(&out, h);
        
	RETURN_CTOR(&out);
}

PHP_METHOD(AppKit_NS_NSTextLayoutFragment_NSTextLayoutFragment, textLineFragmentsCount)
{
	zval *fragment_param = NULL;
	zend_long fragment, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(fragment)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &fragment_param);
	
            value = (zend_long) ns_textlayoutfragment_text_line_fragments_count((uintptr_t) fragment);
        
	RETURN_LONG(value);
}

PHP_METHOD(AppKit_NS_NSTextLayoutFragment_NSTextLayoutFragment, invalidateLayout)
{
	zval *fragment_param = NULL;
	zend_long fragment;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(fragment)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &fragment_param);
	
            ns_textlayoutfragment_invalidate_layout((uintptr_t) fragment);
        
}

PHP_METHOD(AppKit_NS_NSTextLayoutFragment_NSTextLayoutFragment, leadingPadding)
{
	double value = 0;
	zval *fragment_param = NULL;
	zend_long fragment;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(fragment)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &fragment_param);
	
            value = ns_textlayoutfragment_leading_padding((uintptr_t) fragment);
        
	RETURN_DOUBLE((double) (value));
}

PHP_METHOD(AppKit_NS_NSTextLayoutFragment_NSTextLayoutFragment, trailingPadding)
{
	double value = 0;
	zval *fragment_param = NULL;
	zend_long fragment;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(fragment)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &fragment_param);
	
            value = ns_textlayoutfragment_trailing_padding((uintptr_t) fragment);
        
	RETURN_DOUBLE((double) (value));
}

PHP_METHOD(AppKit_NS_NSTextLayoutFragment_NSTextLayoutFragment, topMargin)
{
	double value = 0;
	zval *fragment_param = NULL;
	zend_long fragment;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(fragment)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &fragment_param);
	
            value = ns_textlayoutfragment_top_margin((uintptr_t) fragment);
        
	RETURN_DOUBLE((double) (value));
}

PHP_METHOD(AppKit_NS_NSTextLayoutFragment_NSTextLayoutFragment, bottomMargin)
{
	double value = 0;
	zval *fragment_param = NULL;
	zend_long fragment;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(fragment)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &fragment_param);
	
            value = ns_textlayoutfragment_bottom_margin((uintptr_t) fragment);
        
	RETURN_DOUBLE((double) (value));
}

