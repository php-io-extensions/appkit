
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

#include "ns-event.h"
#include <stdint.h>



/**
 * NSEvent / CoreGraphics keyboard + mouse queries.
 * Call NSApplication::poll() each frame so scroll deltas reset and events drain.
 */
ZEPHIR_INIT_CLASS(AppKit_NS_NSEvent_NSEvent)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSEvent, NSEvent, appkit, ns_nsevent_nsevent, appkit_ns_nsevent_nsevent_method_entry, 0);

	return SUCCESS;
}

/**
 * @return bool true if macOS virtual key code is currently down
 */
PHP_METHOD(AppKit_NS_NSEvent_NSEvent, keyDown)
{
	zend_bool result = 0;
	zval *keycode_param = NULL;
	zend_long keycode;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(keycode)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &keycode_param);
	
            result = ns_event_key_down((int) keycode) == 1;
        
	RETURN_BOOL(result);
}

/**
 * Mouse button: 0=left, 1=right, 2=middle.
 */
PHP_METHOD(AppKit_NS_NSEvent_NSEvent, mouseButtonDown)
{
	zend_bool result = 0;
	zval *button_param = NULL;
	zend_long button;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(button)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &button_param);
	
            result = ns_event_mouse_button_down((int) button) == 1;
        
	RETURN_BOOL(result);
}

/**
 * Mouse position as [x, y].
 * window=0 → screen coords; otherwise content-view local for that window handle.
 * Y grows upward (AppKit). Empty array on failure.
 */
PHP_METHOD(AppKit_NS_NSEvent_NSEvent, mousePosition)
{
	zval out;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *window_param = NULL;
	zend_long window;

	ZVAL_UNDEF(&out);
	ZEND_PARSE_PARAMETERS_START(0, 1)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(window)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 0, 1, &window_param);
	if (!window_param) {
		window = 0;
	} else {
		}
	ZEPHIR_INIT_VAR(&out);
	array_init(&out);
	
            double x = 0.0, y = 0.0;
            if (ns_event_mouse_position((uintptr_t) window, &x, &y)) {
                add_next_index_double(&out, x);
                add_next_index_double(&out, y);
            }
        
	RETURN_CTOR(&out);
}

/**
 * Scroll deltas since the last NSApplication::poll() begin as [dx, dy].
 */
PHP_METHOD(AppKit_NS_NSEvent_NSEvent, mouseScrollDelta)
{
	zval out;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;

	ZVAL_UNDEF(&out);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

	ZEPHIR_INIT_VAR(&out);
	array_init(&out);
	
            double dx = 0.0, dy = 0.0;
            ns_event_mouse_scroll_delta(&dx, &dy);
            add_next_index_double(&out, dx);
            add_next_index_double(&out, dy);
        
	RETURN_CTOR(&out);
}

/**
 * Content-view / screen mouse X. window=0 → screen coords.
 */
PHP_METHOD(AppKit_NS_NSEvent_NSEvent, mouseX)
{
	double x;
	zval *window_param = NULL;
	zend_long window;

	ZEND_PARSE_PARAMETERS_START(0, 1)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(window)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(0, 1, &window_param);
	if (!window_param) {
		window = 0;
	} else {
		}
	x =  (0.0);
	
            double y = 0.0;
            ns_event_mouse_position((uintptr_t) window, &x, &y);
        
	RETURN_DOUBLE(x);
}

/**
 * Content-view / screen mouse Y (AppKit, up is positive).
 */
PHP_METHOD(AppKit_NS_NSEvent_NSEvent, mouseY)
{
	double y;
	zval *window_param = NULL;
	zend_long window;

	ZEND_PARSE_PARAMETERS_START(0, 1)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(window)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(0, 1, &window_param);
	if (!window_param) {
		window = 0;
	} else {
		}
	y =  (0.0);
	
            double x = 0.0;
            ns_event_mouse_position((uintptr_t) window, &x, &y);
        
	RETURN_DOUBLE(y);
}

/**
 * Scroll Y since the last NSApplication::poll() begin.
 */
PHP_METHOD(AppKit_NS_NSEvent_NSEvent, mouseScrollY)
{
	double dy;
	dy =  (0.0);
	
            double dx = 0.0;
            ns_event_mouse_scroll_delta(&dx, &dy);
        
	RETURN_DOUBLE(dy);
}

