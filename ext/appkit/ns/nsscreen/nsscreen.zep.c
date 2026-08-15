
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

#include "ns-screen.h"
#include <stdint.h>



/**
 * NSScreen — display geometry and backing scale.
 */
ZEPHIR_INIT_CLASS(AppKit_NS_NSScreen_NSScreen)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSScreen, NSScreen, appkit, ns_nsscreen_nsscreen, appkit_ns_nsscreen_nsscreen_method_entry, 0);

	return SUCCESS;
}

/**
 * @return int Opaque screen handle, or 0
 */
PHP_METHOD(AppKit_NS_NSScreen_NSScreen, wrap)
{
	zval *nsScreenPtr_param = NULL;
	zend_long nsScreenPtr, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(nsScreenPtr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &nsScreenPtr_param);
	
            handle = (zend_long) ns_screen_wrap((void *)(uintptr_t) nsScreenPtr);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSScreen_NSScreen, destroy)
{
	zval *screen_param = NULL;
	zend_long screen;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(screen)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &screen_param);
	
            ns_screen_destroy((uintptr_t) screen);
        
}

/**
 * @return int Opaque main screen handle, or 0
 */
PHP_METHOD(AppKit_NS_NSScreen_NSScreen, mainScreen)
{
	zend_long handle = 0;
	
            handle = (zend_long) ns_screen_main();
        
	RETURN_LONG(handle);
}

/**
 * @return int Opaque deepest screen handle, or 0
 */
PHP_METHOD(AppKit_NS_NSScreen_NSScreen, deepestScreen)
{
	zend_long handle = 0;
	
            handle = (zend_long) ns_screen_deepest();
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSScreen_NSScreen, screensCount)
{
	zend_long count = 0;
	
            count = (zend_long) ns_screen_screens_count();
        
	RETURN_LONG(count);
}

/**
 * @return int Opaque screen handle at index, or 0
 */
PHP_METHOD(AppKit_NS_NSScreen_NSScreen, screenAt)
{
	zval *index_param = NULL;
	zend_long index, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(index)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &index_param);
	
            handle = (zend_long) ns_screen_screens_at((int) index);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSScreen_NSScreen, screensHaveSeparateSpaces)
{
	zend_bool result = 0;
	
            result = ns_screen_screens_have_separate_spaces() == 1;
        
	RETURN_BOOL(result);
}

/**
 * Global screen frame as [x, y, width, height], or empty array.
 */
PHP_METHOD(AppKit_NS_NSScreen_NSScreen, frame)
{
	zval out;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *screen_param = NULL;
	zend_long screen;

	ZVAL_UNDEF(&out);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(screen)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &screen_param);
	ZEPHIR_INIT_VAR(&out);
	array_init(&out);
	
            double x = 0.0, y = 0.0, w = 0.0, h = 0.0;
            if (ns_screen_frame((uintptr_t) screen, &x, &y, &w, &h)) {
                add_next_index_double(&out, x);
                add_next_index_double(&out, y);
                add_next_index_double(&out, w);
                add_next_index_double(&out, h);
            }
        
	RETURN_CTOR(&out);
}

/**
 * visibleFrame as [x, y, width, height], or empty array.
 */
PHP_METHOD(AppKit_NS_NSScreen_NSScreen, visibleFrame)
{
	zval out;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *screen_param = NULL;
	zend_long screen;

	ZVAL_UNDEF(&out);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(screen)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &screen_param);
	ZEPHIR_INIT_VAR(&out);
	array_init(&out);
	
            double x = 0.0, y = 0.0, w = 0.0, h = 0.0;
            if (ns_screen_visible_frame((uintptr_t) screen, &x, &y, &w, &h)) {
                add_next_index_double(&out, x);
                add_next_index_double(&out, y);
                add_next_index_double(&out, w);
                add_next_index_double(&out, h);
            }
        
	RETURN_CTOR(&out);
}

PHP_METHOD(AppKit_NS_NSScreen_NSScreen, backingScaleFactor)
{
	double value = 0;
	zval *screen_param = NULL;
	zend_long screen;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(screen)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &screen_param);
	
            value = ns_screen_backing_scale_factor((uintptr_t) screen);
        
	RETURN_DOUBLE(value);
}

PHP_METHOD(AppKit_NS_NSScreen_NSScreen, localizedName)
{
	zval *screen_param = NULL;
	zend_long screen;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(screen)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &screen_param);
	
            char buf[4096];
            buf[0] = '\0';
            if (ns_screen_localized_name((uintptr_t) screen, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        
	RETURN_STRING("");
}

PHP_METHOD(AppKit_NS_NSScreen_NSScreen, depth)
{
	zval *screen_param = NULL;
	zend_long screen, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(screen)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &screen_param);
	
            value = (zend_long) ns_screen_depth((uintptr_t) screen);
        
	RETURN_LONG(value);
}

/**
 * @return int Borrowed NSScreen pointer, or 0
 */
PHP_METHOD(AppKit_NS_NSScreen_NSScreen, nsScreen)
{
	zval *screen_param = NULL;
	zend_long screen, ptr = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(screen)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &screen_param);
	
            ptr = (zend_long)(uintptr_t) ns_screen_nsscreen((uintptr_t) screen);
        
	RETURN_LONG(ptr);
}

