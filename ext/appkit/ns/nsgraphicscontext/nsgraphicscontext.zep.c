
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

#include "ns-graphicscontext.h"
#include <stdint.h>



/**
 * NSGraphicsContext — current drawing context and graphics state.
 */
ZEPHIR_INIT_CLASS(AppKit_NS_NSGraphicsContext_NSGraphicsContext)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSGraphicsContext, NSGraphicsContext, appkit, ns_nsgraphicscontext_nsgraphicscontext, appkit_ns_nsgraphicscontext_nsgraphicscontext_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSGraphicsContext_NSGraphicsContext, current)
{
	zend_long handle = 0;
	
            handle = (zend_long) ns_graphicscontext_current();
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSGraphicsContext_NSGraphicsContext, setCurrent)
{
	zval *context_param = NULL;
	zend_long context;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(context)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &context_param);
	
            ns_graphicscontext_set_current((uintptr_t) context);
        
}

PHP_METHOD(AppKit_NS_NSGraphicsContext_NSGraphicsContext, drawingToScreen)
{
	zend_bool result = 0;
	
            result = ns_graphicscontext_drawing_to_screen() == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSGraphicsContext_NSGraphicsContext, instanceDrawingToScreen)
{
	zend_bool result = 0;
	zval *context_param = NULL;
	zend_long context;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(context)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &context_param);
	
            result = ns_graphicscontext_instance_drawing_to_screen((uintptr_t) context) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSGraphicsContext_NSGraphicsContext, saveState)
{

	
            ns_graphicscontext_save_state();
        
}

PHP_METHOD(AppKit_NS_NSGraphicsContext_NSGraphicsContext, restoreState)
{

	
            ns_graphicscontext_restore_state();
        
}

PHP_METHOD(AppKit_NS_NSGraphicsContext_NSGraphicsContext, withBitmapRep)
{
	zval *bitmapRep_param = NULL;
	zend_long bitmapRep, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(bitmapRep)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &bitmapRep_param);
	
            handle = (zend_long) ns_graphicscontext_with_bitmap_rep((uintptr_t) bitmapRep);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSGraphicsContext_NSGraphicsContext, wrap)
{
	zval *nsGraphicsContextPtr_param = NULL;
	zend_long nsGraphicsContextPtr, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(nsGraphicsContextPtr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &nsGraphicsContextPtr_param);
	
            handle = (zend_long) ns_graphicscontext_wrap((void *)(uintptr_t) nsGraphicsContextPtr);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSGraphicsContext_NSGraphicsContext, destroy)
{
	zval *context_param = NULL;
	zend_long context;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(context)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &context_param);
	
            ns_graphicscontext_destroy((uintptr_t) context);
        
}

PHP_METHOD(AppKit_NS_NSGraphicsContext_NSGraphicsContext, nsGraphicsContext)
{
	zval *context_param = NULL;
	zend_long context, ptr = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(context)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &context_param);
	
            ptr = (zend_long)(uintptr_t) ns_graphicscontext_nsgraphicscontext((uintptr_t) context);
        
	RETURN_LONG(ptr);
}

PHP_METHOD(AppKit_NS_NSGraphicsContext_NSGraphicsContext, saveGraphicsState)
{
	zval *context_param = NULL;
	zend_long context;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(context)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &context_param);
	
            ns_graphicscontext_save_graphics_state((uintptr_t) context);
        
}

PHP_METHOD(AppKit_NS_NSGraphicsContext_NSGraphicsContext, restoreGraphicsState)
{
	zval *context_param = NULL;
	zend_long context;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(context)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &context_param);
	
            ns_graphicscontext_restore_graphics_state((uintptr_t) context);
        
}

PHP_METHOD(AppKit_NS_NSGraphicsContext_NSGraphicsContext, flush)
{
	zval *context_param = NULL;
	zend_long context;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(context)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &context_param);
	
            ns_graphicscontext_flush((uintptr_t) context);
        
}

PHP_METHOD(AppKit_NS_NSGraphicsContext_NSGraphicsContext, setShouldAntialias)
{
	zend_bool enabled;
	zval *context_param = NULL, *enabled_param = NULL;
	zend_long context;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(context)
		Z_PARAM_BOOL(enabled)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &context_param, &enabled_param);
	
            ns_graphicscontext_set_should_antialias((uintptr_t) context, enabled ? 1 : 0);
        
}

PHP_METHOD(AppKit_NS_NSGraphicsContext_NSGraphicsContext, getShouldAntialias)
{
	zend_bool result = 0;
	zval *context_param = NULL;
	zend_long context;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(context)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &context_param);
	
            result = ns_graphicscontext_get_should_antialias((uintptr_t) context) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSGraphicsContext_NSGraphicsContext, setImageInterpolation)
{
	zval *context_param = NULL, *interpolation_param = NULL;
	zend_long context, interpolation;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(context)
		Z_PARAM_LONG(interpolation)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &context_param, &interpolation_param);
	
            ns_graphicscontext_set_image_interpolation((uintptr_t) context, (int) interpolation);
        
}

PHP_METHOD(AppKit_NS_NSGraphicsContext_NSGraphicsContext, getImageInterpolation)
{
	zval *context_param = NULL;
	zend_long context, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(context)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &context_param);
	
            value = (zend_long) ns_graphicscontext_get_image_interpolation((uintptr_t) context);
        
	RETURN_LONG(value);
}

PHP_METHOD(AppKit_NS_NSGraphicsContext_NSGraphicsContext, setPatternPhase)
{
	double x, y;
	zval *context_param = NULL, *x_param = NULL, *y_param = NULL;
	zend_long context;

	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(context)
		Z_PARAM_ZVAL(x)
		Z_PARAM_ZVAL(y)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &context_param, &x_param, &y_param);
	x = zephir_get_doubleval(x_param);
	y = zephir_get_doubleval(y_param);
	
            ns_graphicscontext_set_pattern_phase((uintptr_t) context, (double) x, (double) y);
        
}

/**
 * @return array [x, y]
 */
PHP_METHOD(AppKit_NS_NSGraphicsContext_NSGraphicsContext, getPatternPhase)
{
	zval out;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *context_param = NULL;
	zend_long context;

	ZVAL_UNDEF(&out);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(context)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &context_param);
	ZEPHIR_INIT_VAR(&out);
	array_init(&out);
	
            double x = 0.0, y = 0.0;
            ns_graphicscontext_get_pattern_phase((uintptr_t) context, &x, &y);
            add_next_index_double(&out, x);
            add_next_index_double(&out, y);
        
	RETURN_CTOR(&out);
}

PHP_METHOD(AppKit_NS_NSGraphicsContext_NSGraphicsContext, setCompositingOperation)
{
	zval *context_param = NULL, *operation_param = NULL;
	zend_long context, operation;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(context)
		Z_PARAM_LONG(operation)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &context_param, &operation_param);
	
            ns_graphicscontext_set_compositing_operation((uintptr_t) context, (int) operation);
        
}

PHP_METHOD(AppKit_NS_NSGraphicsContext_NSGraphicsContext, getCompositingOperation)
{
	zval *context_param = NULL;
	zend_long context, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(context)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &context_param);
	
            value = (zend_long) ns_graphicscontext_get_compositing_operation((uintptr_t) context);
        
	RETURN_LONG(value);
}

PHP_METHOD(AppKit_NS_NSGraphicsContext_NSGraphicsContext, isFlipped)
{
	zend_bool result = 0;
	zval *context_param = NULL;
	zend_long context;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(context)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &context_param);
	
            result = ns_graphicscontext_is_flipped((uintptr_t) context) == 1;
        
	RETURN_BOOL(result);
}

