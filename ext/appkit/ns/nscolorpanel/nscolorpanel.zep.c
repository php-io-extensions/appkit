
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

#include "ns-colorpanel.h"
#include <stdint.h>



/**
 * NSColorPanel — shared system color picker panel.
 */
ZEPHIR_INIT_CLASS(AppKit_NS_NSColorPanel_NSColorPanel)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSColorPanel, NSColorPanel, appkit, ns_nscolorpanel_nscolorpanel, appkit_ns_nscolorpanel_nscolorpanel_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSColorPanel_NSColorPanel, shared)
{
	zend_long handle = 0;
	
            handle = (zend_long) ns_colorpanel_shared();
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSColorPanel_NSColorPanel, destroy)
{
	zval *panel_param = NULL;
	zend_long panel;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(panel)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &panel_param);
	
            ns_colorpanel_destroy((uintptr_t) panel);
        
}

PHP_METHOD(AppKit_NS_NSColorPanel_NSColorPanel, sharedExists)
{
	zend_bool result = 0;
	
            result = ns_colorpanel_shared_exists() == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSColorPanel_NSColorPanel, setPickerMask)
{
	zval *mask_param = NULL;
	zend_long mask;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(mask)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &mask_param);
	
            ns_colorpanel_set_picker_mask((unsigned) mask);
        
}

PHP_METHOD(AppKit_NS_NSColorPanel_NSColorPanel, setPickerMode)
{
	zval *mode_param = NULL;
	zend_long mode;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(mode)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &mode_param);
	
            ns_colorpanel_set_picker_mode((int) mode);
        
}

PHP_METHOD(AppKit_NS_NSColorPanel_NSColorPanel, orderFront)
{

	
            ns_colorpanel_order_front();
        
}

PHP_METHOD(AppKit_NS_NSColorPanel_NSColorPanel, mode)
{
	zval *panel_param = NULL;
	zend_long panel, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(panel)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &panel_param);
	
            value = (zend_long) ns_colorpanel_mode((uintptr_t) panel);
        
	RETURN_LONG(value);
}

PHP_METHOD(AppKit_NS_NSColorPanel_NSColorPanel, setMode)
{
	zval *panel_param = NULL, *mode_param = NULL;
	zend_long panel, mode;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(panel)
		Z_PARAM_LONG(mode)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &panel_param, &mode_param);
	
            ns_colorpanel_set_mode((uintptr_t) panel, (int) mode);
        
}

PHP_METHOD(AppKit_NS_NSColorPanel_NSColorPanel, showsAlpha)
{
	zend_bool result = 0;
	zval *panel_param = NULL;
	zend_long panel;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(panel)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &panel_param);
	
            result = ns_colorpanel_shows_alpha((uintptr_t) panel) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSColorPanel_NSColorPanel, setShowsAlpha)
{
	zend_bool shows;
	zval *panel_param = NULL, *shows_param = NULL;
	zend_long panel;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(panel)
		Z_PARAM_BOOL(shows)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &panel_param, &shows_param);
	
            ns_colorpanel_set_shows_alpha((uintptr_t) panel, shows ? 1 : 0);
        
}

PHP_METHOD(AppKit_NS_NSColorPanel_NSColorPanel, isContinuous)
{
	zend_bool result = 0;
	zval *panel_param = NULL;
	zend_long panel;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(panel)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &panel_param);
	
            result = ns_colorpanel_is_continuous((uintptr_t) panel) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSColorPanel_NSColorPanel, setContinuous)
{
	zend_bool continuous;
	zval *panel_param = NULL, *continuous_param = NULL;
	zend_long panel;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(panel)
		Z_PARAM_BOOL(continuous)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &panel_param, &continuous_param);
	
            ns_colorpanel_set_continuous((uintptr_t) panel, continuous ? 1 : 0);
        
}

PHP_METHOD(AppKit_NS_NSColorPanel_NSColorPanel, setColorRgba)
{
	zend_bool result = 0;
	zval *panel_param = NULL, *r_param = NULL, *g_param = NULL, *b_param = NULL, *a_param = NULL;
	zend_long panel, r, g, b, a;

	ZEND_PARSE_PARAMETERS_START(4, 5)
		Z_PARAM_LONG(panel)
		Z_PARAM_LONG(r)
		Z_PARAM_LONG(g)
		Z_PARAM_LONG(b)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(a)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 1, &panel_param, &r_param, &g_param, &b_param, &a_param);
	if (!a_param) {
		a = 255;
	} else {
		}
	
            result = ns_colorpanel_set_color_rgba((uintptr_t) panel, (int) r, (int) g, (int) b, (int) a) == 1;
        
	RETURN_BOOL(result);
}

/**
 * @return array [r, g, b, a] byte components or empty array
 */
PHP_METHOD(AppKit_NS_NSColorPanel_NSColorPanel, getColorRgba)
{
	zval out;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *panel_param = NULL;
	zend_long panel;

	ZVAL_UNDEF(&out);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(panel)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &panel_param);
	ZEPHIR_INIT_VAR(&out);
	array_init(&out);
	
            int r = 0, g = 0, b = 0, a = 0;
            if (ns_colorpanel_get_color_rgba((uintptr_t) panel, &r, &g, &b, &a)) {
                add_next_index_long(&out, r);
                add_next_index_long(&out, g);
                add_next_index_long(&out, b);
                add_next_index_long(&out, a);
            }
        
	RETURN_CTOR(&out);
}

PHP_METHOD(AppKit_NS_NSColorPanel_NSColorPanel, alpha)
{
	double value = 0;
	zval *panel_param = NULL;
	zend_long panel;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(panel)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &panel_param);
	
            value = ns_colorpanel_alpha((uintptr_t) panel);
        
	RETURN_DOUBLE(value);
}

PHP_METHOD(AppKit_NS_NSColorPanel_NSColorPanel, attachColorList)
{
	zval *panel_param = NULL, *list_param = NULL;
	zend_long panel, list;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(panel)
		Z_PARAM_LONG(list)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &panel_param, &list_param);
	
            ns_colorpanel_attach_color_list((uintptr_t) panel, (uintptr_t) list);
        
}

PHP_METHOD(AppKit_NS_NSColorPanel_NSColorPanel, detachColorList)
{
	zval *panel_param = NULL, *list_param = NULL;
	zend_long panel, list;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(panel)
		Z_PARAM_LONG(list)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &panel_param, &list_param);
	
            ns_colorpanel_detach_color_list((uintptr_t) panel, (uintptr_t) list);
        
}

PHP_METHOD(AppKit_NS_NSColorPanel_NSColorPanel, nsColorPanel)
{
	zval *panel_param = NULL;
	zend_long panel, ptr = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(panel)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &panel_param);
	
            ptr = (zend_long)(uintptr_t) ns_colorpanel_nscolorpanel((uintptr_t) panel);
        
	RETURN_LONG(ptr);
}

