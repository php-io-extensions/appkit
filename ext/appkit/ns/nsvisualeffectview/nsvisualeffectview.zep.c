
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

#include "ns-visualeffectview.h"
#include <stdint.h>



/** NSVisualEffectView — vibrancy / material background view. */
ZEPHIR_INIT_CLASS(AppKit_NS_NSVisualEffectView_NSVisualEffectView)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSVisualEffectView, NSVisualEffectView, appkit, ns_nsvisualeffectview_nsvisualeffectview, appkit_ns_nsvisualeffectview_nsvisualeffectview_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSVisualEffectView_NSVisualEffectView, create)
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
	
            handle = (zend_long) ns_visualeffectview_create((double) x, (double) y, (double) width, (double) height);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSVisualEffectView_NSVisualEffectView, wrap)
{
	zval *nsVisualEffectViewPtr_param = NULL;
	zend_long nsVisualEffectViewPtr, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(nsVisualEffectViewPtr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &nsVisualEffectViewPtr_param);
	
            handle = (zend_long) ns_visualeffectview_wrap((void *)(uintptr_t) nsVisualEffectViewPtr);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSVisualEffectView_NSVisualEffectView, destroy)
{
	zval *view_param = NULL;
	zend_long view;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(view)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &view_param);
	
            ns_visualeffectview_destroy((uintptr_t) view);
        
}

PHP_METHOD(AppKit_NS_NSVisualEffectView_NSVisualEffectView, nsVisualEffectView)
{
	zval *view_param = NULL;
	zend_long view, ptr = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(view)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &view_param);
	
            ptr = (zend_long)(uintptr_t) ns_visualeffectview_nsvisualeffectview((uintptr_t) view);
        
	RETURN_LONG(ptr);
}

PHP_METHOD(AppKit_NS_NSVisualEffectView_NSVisualEffectView, setMaterial)
{
	zval *view_param = NULL, *material_param = NULL;
	zend_long view, material;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(view)
		Z_PARAM_LONG(material)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &view_param, &material_param);
	
            ns_visualeffectview_set_material((uintptr_t) view, (int) material);
        
}

PHP_METHOD(AppKit_NS_NSVisualEffectView_NSVisualEffectView, getMaterial)
{
	zval *view_param = NULL;
	zend_long view, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(view)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &view_param);
	
            value = (zend_long) ns_visualeffectview_get_material((uintptr_t) view);
        
	RETURN_LONG(value);
}

PHP_METHOD(AppKit_NS_NSVisualEffectView_NSVisualEffectView, setBlendingMode)
{
	zval *view_param = NULL, *mode_param = NULL;
	zend_long view, mode;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(view)
		Z_PARAM_LONG(mode)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &view_param, &mode_param);
	
            ns_visualeffectview_set_blending_mode((uintptr_t) view, (int) mode);
        
}

PHP_METHOD(AppKit_NS_NSVisualEffectView_NSVisualEffectView, getBlendingMode)
{
	zval *view_param = NULL;
	zend_long view, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(view)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &view_param);
	
            value = (zend_long) ns_visualeffectview_get_blending_mode((uintptr_t) view);
        
	RETURN_LONG(value);
}

PHP_METHOD(AppKit_NS_NSVisualEffectView_NSVisualEffectView, setState)
{
	zval *view_param = NULL, *state_param = NULL;
	zend_long view, state;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(view)
		Z_PARAM_LONG(state)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &view_param, &state_param);
	
            ns_visualeffectview_set_state((uintptr_t) view, (int) state);
        
}

PHP_METHOD(AppKit_NS_NSVisualEffectView_NSVisualEffectView, getState)
{
	zval *view_param = NULL;
	zend_long view, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(view)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &view_param);
	
            value = (zend_long) ns_visualeffectview_get_state((uintptr_t) view);
        
	RETURN_LONG(value);
}

PHP_METHOD(AppKit_NS_NSVisualEffectView_NSVisualEffectView, setEmphasized)
{
	zend_bool flag;
	zval *view_param = NULL, *flag_param = NULL;
	zend_long view;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(view)
		Z_PARAM_BOOL(flag)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &view_param, &flag_param);
	
            ns_visualeffectview_set_emphasized((uintptr_t) view, flag ? 1 : 0);
        
}

PHP_METHOD(AppKit_NS_NSVisualEffectView_NSVisualEffectView, isEmphasized)
{
	zend_bool result = 0;
	zval *view_param = NULL;
	zend_long view;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(view)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &view_param);
	
            result = ns_visualeffectview_is_emphasized((uintptr_t) view) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSVisualEffectView_NSVisualEffectView, interiorBackgroundStyle)
{
	zval *view_param = NULL;
	zend_long view, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(view)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &view_param);
	
            value = (zend_long) ns_visualeffectview_interior_background_style((uintptr_t) view);
        
	RETURN_LONG(value);
}

