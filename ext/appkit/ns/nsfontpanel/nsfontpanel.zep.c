
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

#include "ns-fontpanel.h"
#include <stdint.h>



/**
 * NSFontPanel — shared system font picker panel.
 */
ZEPHIR_INIT_CLASS(AppKit_NS_NSFontPanel_NSFontPanel)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSFontPanel, NSFontPanel, appkit, ns_nsfontpanel_nsfontpanel, appkit_ns_nsfontpanel_nsfontpanel_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSFontPanel_NSFontPanel, wrap)
{
	zval *nsFontPanelPtr_param = NULL;
	zend_long nsFontPanelPtr, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(nsFontPanelPtr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &nsFontPanelPtr_param);
	
            handle = (zend_long) ns_fontpanel_wrap((void *)(uintptr_t) nsFontPanelPtr);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSFontPanel_NSFontPanel, shared)
{
	zend_long handle = 0;
	
            handle = (zend_long) ns_fontpanel_shared();
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSFontPanel_NSFontPanel, destroy)
{
	zval *panel_param = NULL;
	zend_long panel;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(panel)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &panel_param);
	
            ns_fontpanel_destroy((uintptr_t) panel);
        
}

PHP_METHOD(AppKit_NS_NSFontPanel_NSFontPanel, sharedExists)
{
	zend_bool result = 0;
	
            result = ns_fontpanel_shared_exists() == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSFontPanel_NSFontPanel, setPanelFont)
{
	zend_bool isMultiple;
	zval *panel_param = NULL, *font_param = NULL, *isMultiple_param = NULL;
	zend_long panel, font;

	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(panel)
		Z_PARAM_LONG(font)
		Z_PARAM_OPTIONAL
		Z_PARAM_BOOL(isMultiple)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 1, &panel_param, &font_param, &isMultiple_param);
	if (!isMultiple_param) {
		isMultiple = 0;
	} else {
		}
	
            ns_fontpanel_set_panel_font((uintptr_t) panel, (uintptr_t) font, isMultiple ? 1 : 0);
        
}

PHP_METHOD(AppKit_NS_NSFontPanel_NSFontPanel, panelConvertFont)
{
	zval *panel_param = NULL, *font_param = NULL;
	zend_long panel, font, handle = 0;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(panel)
		Z_PARAM_LONG(font)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &panel_param, &font_param);
	
            handle = (zend_long) ns_fontpanel_panel_convert_font((uintptr_t) panel, (uintptr_t) font);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSFontPanel_NSFontPanel, worksWhenModal)
{
	zend_bool result = 0;
	zval *panel_param = NULL;
	zend_long panel;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(panel)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &panel_param);
	
            result = ns_fontpanel_works_when_modal((uintptr_t) panel) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSFontPanel_NSFontPanel, setWorksWhenModal)
{
	zend_bool works;
	zval *panel_param = NULL, *works_param = NULL;
	zend_long panel;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(panel)
		Z_PARAM_BOOL(works)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &panel_param, &works_param);
	
            ns_fontpanel_set_works_when_modal((uintptr_t) panel, works ? 1 : 0);
        
}

PHP_METHOD(AppKit_NS_NSFontPanel_NSFontPanel, isEnabled)
{
	zend_bool result = 0;
	zval *panel_param = NULL;
	zend_long panel;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(panel)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &panel_param);
	
            result = ns_fontpanel_is_enabled((uintptr_t) panel) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSFontPanel_NSFontPanel, setEnabled)
{
	zend_bool enabled;
	zval *panel_param = NULL, *enabled_param = NULL;
	zend_long panel;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(panel)
		Z_PARAM_BOOL(enabled)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &panel_param, &enabled_param);
	
            ns_fontpanel_set_enabled((uintptr_t) panel, enabled ? 1 : 0);
        
}

PHP_METHOD(AppKit_NS_NSFontPanel_NSFontPanel, reloadDefaultFontFamilies)
{
	zval *panel_param = NULL;
	zend_long panel;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(panel)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &panel_param);
	
            ns_fontpanel_reload_default_font_families((uintptr_t) panel);
        
}

PHP_METHOD(AppKit_NS_NSFontPanel_NSFontPanel, orderFront)
{
	zval *panel_param = NULL;
	zend_long panel;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(panel)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &panel_param);
	
            ns_fontpanel_order_front((uintptr_t) panel);
        
}

PHP_METHOD(AppKit_NS_NSFontPanel_NSFontPanel, nsFontPanel)
{
	zval *panel_param = NULL;
	zend_long panel, ptr = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(panel)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &panel_param);
	
            ptr = (zend_long)(uintptr_t) ns_fontpanel_nsfontpanel((uintptr_t) panel);
        
	RETURN_LONG(ptr);
}

