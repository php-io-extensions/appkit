
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

#include "ns-view.h"
#include <stdint.h>



/**
 * Plain NSView. No Metal / CAMetalLayer present APIs — those live in php-io-extensions/metal.
 */
ZEPHIR_INIT_CLASS(AppKit_NS_NSView_NSView)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSView, NSView, appkit, ns_nsview_nsview, appkit_ns_nsview_nsview_method_entry, 0);

	return SUCCESS;
}

/**
 * @return int Opaque view handle, or 0 on failure
 */
PHP_METHOD(AppKit_NS_NSView_NSView, create)
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
	
            handle = (zend_long) ns_view_create((double) x, (double) y, (double) width, (double) height);
        
	RETURN_LONG(handle);
}

/**
 * Wrap a borrowed NSView* (e.g. from another extension or contentView).
 * @return int Opaque view handle, or 0
 */
PHP_METHOD(AppKit_NS_NSView_NSView, wrap)
{
	zval *nsViewPtr_param = NULL;
	zend_long nsViewPtr, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(nsViewPtr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &nsViewPtr_param);
	
            handle = (zend_long) ns_view_wrap((void *)(uintptr_t) nsViewPtr);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSView_NSView, destroy)
{
	zval *view_param = NULL;
	zend_long view;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(view)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &view_param);
	
            ns_view_destroy((uintptr_t) view);
        
}

PHP_METHOD(AppKit_NS_NSView_NSView, addSubview)
{
	zval *parent_param = NULL, *child_param = NULL;
	zend_long parent, child;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(parent)
		Z_PARAM_LONG(child)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &parent_param, &child_param);
	
            ns_view_add_subview((uintptr_t) parent, (uintptr_t) child);
        
}

PHP_METHOD(AppKit_NS_NSView_NSView, setFrame)
{
	zval *view_param = NULL, *x_param = NULL, *y_param = NULL, *width_param = NULL, *height_param = NULL;
	zend_long view, x, y, width, height;

	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(view)
		Z_PARAM_LONG(x)
		Z_PARAM_LONG(y)
		Z_PARAM_LONG(width)
		Z_PARAM_LONG(height)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &view_param, &x_param, &y_param, &width_param, &height_param);
	
            ns_view_set_frame((uintptr_t) view, (double) x, (double) y, (double) width, (double) height);
        
}

PHP_METHOD(AppKit_NS_NSView_NSView, getWidth)
{
	zval *view_param = NULL;
	zend_long view, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(view)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &view_param);
	
            value = (zend_long) ns_view_get_width((uintptr_t) view);
        
	RETURN_LONG(value);
}

PHP_METHOD(AppKit_NS_NSView_NSView, getHeight)
{
	zval *view_param = NULL;
	zend_long view, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(view)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &view_param);
	
            value = (zend_long) ns_view_get_height((uintptr_t) view);
        
	RETURN_LONG(value);
}

/**
 * @return int Borrowed NSView pointer, or 0
 */
PHP_METHOD(AppKit_NS_NSView_NSView, nsView)
{
	zval *view_param = NULL;
	zend_long view, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(view)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &view_param);
	
            handle = (zend_long)(uintptr_t) ns_view_nsview((uintptr_t) view);
        
	RETURN_LONG(handle);
}

