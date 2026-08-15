
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

#include "ns-panel.h"
#include <stdint.h>



/**
 * NSPanel — floating utility panel subclass of NSWindow.
 */
ZEPHIR_INIT_CLASS(AppKit_NS_NSPanel_NSPanel)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSPanel, NSPanel, appkit, ns_nspanel_nspanel, appkit_ns_nspanel_nspanel_method_entry, 0);

	return SUCCESS;
}

/**
 * @return int Opaque panel handle, or 0 on failure
 */
PHP_METHOD(AppKit_NS_NSPanel_NSPanel, create)
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
	
            handle = (zend_long) ns_panel_create(Z_STRVAL(title), (int) width, (int) height);
        
	RETURN_MM_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSPanel_NSPanel, destroy)
{
	zval *panel_param = NULL;
	zend_long panel;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(panel)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &panel_param);
	
            ns_panel_destroy((uintptr_t) panel);
        
}

PHP_METHOD(AppKit_NS_NSPanel_NSPanel, setTitle)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval title;
	zval *panel_param = NULL, *title_param = NULL;
	zend_long panel;

	ZVAL_UNDEF(&title);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(panel)
		Z_PARAM_STR(title)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &panel_param, &title_param);
	zephir_get_strval(&title, title_param);
	
            ns_panel_set_title((uintptr_t) panel, Z_STRVAL(title));
        
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSPanel_NSPanel, show)
{
	zval *panel_param = NULL;
	zend_long panel;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(panel)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &panel_param);
	
            ns_panel_show((uintptr_t) panel);
        
}

PHP_METHOD(AppKit_NS_NSPanel_NSPanel, hide)
{
	zval *panel_param = NULL;
	zend_long panel;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(panel)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &panel_param);
	
            ns_panel_hide((uintptr_t) panel);
        
}

PHP_METHOD(AppKit_NS_NSPanel_NSPanel, center)
{
	zval *panel_param = NULL;
	zend_long panel;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(panel)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &panel_param);
	
            ns_panel_center((uintptr_t) panel);
        
}

PHP_METHOD(AppKit_NS_NSPanel_NSPanel, shouldClose)
{
	zend_bool result = 0;
	zval *panel_param = NULL;
	zend_long panel;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(panel)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &panel_param);
	
            result = ns_panel_should_close((uintptr_t) panel) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSPanel_NSPanel, getWidth)
{
	zval *panel_param = NULL;
	zend_long panel, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(panel)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &panel_param);
	
            value = (zend_long) ns_panel_get_width((uintptr_t) panel);
        
	RETURN_LONG(value);
}

PHP_METHOD(AppKit_NS_NSPanel_NSPanel, getHeight)
{
	zval *panel_param = NULL;
	zend_long panel, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(panel)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &panel_param);
	
            value = (zend_long) ns_panel_get_height((uintptr_t) panel);
        
	RETURN_LONG(value);
}

/**
 * @return int Opaque NSView handle for contentView, or 0
 */
PHP_METHOD(AppKit_NS_NSPanel_NSPanel, contentView)
{
	zval *panel_param = NULL;
	zend_long panel, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(panel)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &panel_param);
	
            handle = (zend_long) ns_panel_content_view((uintptr_t) panel);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSPanel_NSPanel, setContentView)
{
	zend_bool result = 0;
	zval *panel_param = NULL, *view_param = NULL;
	zend_long panel, view;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(panel)
		Z_PARAM_LONG(view)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &panel_param, &view_param);
	
            result = ns_panel_set_content_view((uintptr_t) panel, (uintptr_t) view) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSPanel_NSPanel, makeFirstResponder)
{
	zend_bool result = 0;
	zval *panel_param = NULL, *view_param = NULL;
	zend_long panel, view;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(panel)
		Z_PARAM_LONG(view)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &panel_param, &view_param);
	
            result = ns_panel_make_first_responder((uintptr_t) panel, (uintptr_t) view) == 1;
        
	RETURN_BOOL(result);
}

/**
 * @return array [x, y] on success, or empty array on failure
 */
PHP_METHOD(AppKit_NS_NSPanel_NSPanel, screenToContent)
{
	double screenX, screenY;
	zval *panel_param = NULL, *screenX_param = NULL, *screenY_param = NULL;
	zend_long panel;

	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(panel)
		Z_PARAM_ZVAL(screenX)
		Z_PARAM_ZVAL(screenY)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &panel_param, &screenX_param, &screenY_param);
	screenX = zephir_get_doubleval(screenX_param);
	screenY = zephir_get_doubleval(screenY_param);
	
            double out_x = 0.0;
            double out_y = 0.0;
            zval point;
            array_init(&point);
            if (ns_panel_screen_to_content((uintptr_t) panel, (double) screenX, (double) screenY, &out_x, &out_y)) {
                add_next_index_double(&point, out_x);
                add_next_index_double(&point, out_y);
            }
            RETURN_ZVAL(&point, 0, 0);
        
	array_init(return_value);
	return;
}

PHP_METHOD(AppKit_NS_NSPanel_NSPanel, setFloatingPanel)
{
	zend_bool floating;
	zval *panel_param = NULL, *floating_param = NULL;
	zend_long panel;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(panel)
		Z_PARAM_BOOL(floating)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &panel_param, &floating_param);
	
            ns_panel_set_floating_panel((uintptr_t) panel, floating ? 1 : 0);
        
}

PHP_METHOD(AppKit_NS_NSPanel_NSPanel, isFloatingPanel)
{
	zend_bool result = 0;
	zval *panel_param = NULL;
	zend_long panel;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(panel)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &panel_param);
	
            result = ns_panel_is_floating_panel((uintptr_t) panel) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSPanel_NSPanel, setBecomesKeyOnlyIfNeeded)
{
	zend_bool flag;
	zval *panel_param = NULL, *flag_param = NULL;
	zend_long panel;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(panel)
		Z_PARAM_BOOL(flag)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &panel_param, &flag_param);
	
            ns_panel_set_becomes_key_only_if_needed((uintptr_t) panel, flag ? 1 : 0);
        
}

PHP_METHOD(AppKit_NS_NSPanel_NSPanel, becomesKeyOnlyIfNeeded)
{
	zend_bool result = 0;
	zval *panel_param = NULL;
	zend_long panel;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(panel)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &panel_param);
	
            result = ns_panel_becomes_key_only_if_needed((uintptr_t) panel) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSPanel_NSPanel, setWorksWhenModal)
{
	zend_bool flag;
	zval *panel_param = NULL, *flag_param = NULL;
	zend_long panel;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(panel)
		Z_PARAM_BOOL(flag)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &panel_param, &flag_param);
	
            ns_panel_set_works_when_modal((uintptr_t) panel, flag ? 1 : 0);
        
}

PHP_METHOD(AppKit_NS_NSPanel_NSPanel, worksWhenModal)
{
	zend_bool result = 0;
	zval *panel_param = NULL;
	zend_long panel;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(panel)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &panel_param);
	
            result = ns_panel_works_when_modal((uintptr_t) panel) == 1;
        
	RETURN_BOOL(result);
}

/**
 * @return int Borrowed NSPanel pointer, or 0
 */
PHP_METHOD(AppKit_NS_NSPanel_NSPanel, nsPanel)
{
	zval *panel_param = NULL;
	zend_long panel, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(panel)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &panel_param);
	
            handle = (zend_long)(uintptr_t) ns_panel_nspanel((uintptr_t) panel);
        
	RETURN_LONG(handle);
}

