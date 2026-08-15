
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

#include "ns-window.h"
#include <stdint.h>



/**
 * NSWindow only. Metal lives in php-io-extensions/metal. Handles are opaque ints.
 */
ZEPHIR_INIT_CLASS(AppKit_NS_NSWindow_NSWindow)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSWindow, NSWindow, appkit, ns_nswindow_nswindow, appkit_ns_nswindow_nswindow_method_entry, 0);

	return SUCCESS;
}

/**
 * @return int Opaque window handle, or 0 on failure
 */
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, create)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long width, height, handle = 0;
	zval *title_param = NULL, *width_param = NULL, *height_param = NULL;
	zval title;

	ZVAL_UNDEF(&title);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_STR(title)
		Z_PARAM_LONG(width)
		Z_PARAM_LONG(height)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &title_param, &width_param, &height_param);
	zephir_get_strval(&title, title_param);
	
            handle = (zend_long) ns_window_create(Z_STRVAL(title), (int) width, (int) height);
        
	RETURN_MM_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSWindow_NSWindow, destroy)
{
	zval *window_param = NULL;
	zend_long window;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(window)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &window_param);
	
            ns_window_destroy((uintptr_t) window);
        
}

PHP_METHOD(AppKit_NS_NSWindow_NSWindow, setTitle)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval title;
	zval *window_param = NULL, *title_param = NULL;
	zend_long window;

	ZVAL_UNDEF(&title);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(window)
		Z_PARAM_STR(title)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &window_param, &title_param);
	zephir_get_strval(&title, title_param);
	
            ns_window_set_title((uintptr_t) window, Z_STRVAL(title));
        
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSWindow_NSWindow, show)
{
	zval *window_param = NULL;
	zend_long window;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(window)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &window_param);
	
            ns_window_show((uintptr_t) window);
        
}

PHP_METHOD(AppKit_NS_NSWindow_NSWindow, hide)
{
	zval *window_param = NULL;
	zend_long window;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(window)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &window_param);
	
            ns_window_hide((uintptr_t) window);
        
}

PHP_METHOD(AppKit_NS_NSWindow_NSWindow, center)
{
	zval *window_param = NULL;
	zend_long window;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(window)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &window_param);
	
            ns_window_center((uintptr_t) window);
        
}

PHP_METHOD(AppKit_NS_NSWindow_NSWindow, shouldClose)
{
	zend_bool result = 0;
	zval *window_param = NULL;
	zend_long window;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(window)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &window_param);
	
            result = ns_window_should_close((uintptr_t) window) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSWindow_NSWindow, getWidth)
{
	zval *window_param = NULL;
	zend_long window, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(window)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &window_param);
	
            value = (zend_long) ns_window_get_width((uintptr_t) window);
        
	RETURN_LONG(value);
}

PHP_METHOD(AppKit_NS_NSWindow_NSWindow, getHeight)
{
	zval *window_param = NULL;
	zend_long window, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(window)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &window_param);
	
            value = (zend_long) ns_window_get_height((uintptr_t) window);
        
	RETURN_LONG(value);
}

/**
 * @return int Opaque NSView handle for contentView, or 0
 */
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, contentView)
{
	zval *window_param = NULL;
	zend_long window, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(window)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &window_param);
	
            handle = (zend_long) ns_window_content_view((uintptr_t) window);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSWindow_NSWindow, setContentView)
{
	zend_bool result = 0;
	zval *window_param = NULL, *view_param = NULL;
	zend_long window, view;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(window)
		Z_PARAM_LONG(view)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &window_param, &view_param);
	
            result = ns_window_set_content_view((uintptr_t) window, (uintptr_t) view) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSWindow_NSWindow, makeFirstResponder)
{
	zend_bool result = 0;
	zval *window_param = NULL, *view_param = NULL;
	zend_long window, view;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(window)
		Z_PARAM_LONG(view)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &window_param, &view_param);
	
            result = ns_window_make_first_responder((uintptr_t) window, (uintptr_t) view) == 1;
        
	RETURN_BOOL(result);
}

/**
 * Convert screen coordinates to content-view local coordinates.
 * @return array [x, y] on success, or empty array on failure
 */
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, screenToContent)
{
	double screenX, screenY;
	zval *window_param = NULL, *screenX_param = NULL, *screenY_param = NULL;
	zend_long window;

	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(window)
		Z_PARAM_ZVAL(screenX)
		Z_PARAM_ZVAL(screenY)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &window_param, &screenX_param, &screenY_param);
	screenX = zephir_get_doubleval(screenX_param);
	screenY = zephir_get_doubleval(screenY_param);
	
            double out_x = 0.0;
            double out_y = 0.0;
            zval point;
            array_init(&point);
            if (ns_window_screen_to_content((uintptr_t) window, (double) screenX, (double) screenY, &out_x, &out_y)) {
                add_next_index_double(&point, out_x);
                add_next_index_double(&point, out_y);
            }
            RETURN_ZVAL(&point, 0, 0);
        
	array_init(return_value);
	return;
}

/**
 * @return int Borrowed NSWindow pointer, or 0
 */
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, nsWindow)
{
	zval *window_param = NULL;
	zend_long window, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(window)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &window_param);
	
            handle = (zend_long)(uintptr_t) ns_window_nswindow((uintptr_t) window);
        
	RETURN_LONG(handle);
}

