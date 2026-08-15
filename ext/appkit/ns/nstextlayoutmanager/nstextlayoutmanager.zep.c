
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

#include "ns-textlayoutmanager.h"
#include <stdint.h>



/**
 * NSTextLayoutManager — TextKit 2 layout manager.
 */
ZEPHIR_INIT_CLASS(AppKit_NS_NSTextLayoutManager_NSTextLayoutManager)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSTextLayoutManager, NSTextLayoutManager, appkit, ns_nstextlayoutmanager_nstextlayoutmanager, appkit_ns_nstextlayoutmanager_nstextlayoutmanager_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSTextLayoutManager_NSTextLayoutManager, create)
{
	zend_long handle = 0;
	
            handle = (zend_long) ns_textlayoutmanager_create();
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSTextLayoutManager_NSTextLayoutManager, wrap)
{
	zval *nsTextLayoutManagerPtr_param = NULL;
	zend_long nsTextLayoutManagerPtr, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(nsTextLayoutManagerPtr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &nsTextLayoutManagerPtr_param);
	
            handle = (zend_long) ns_textlayoutmanager_wrap((void *)(uintptr_t) nsTextLayoutManagerPtr);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSTextLayoutManager_NSTextLayoutManager, destroy)
{
	zval *manager_param = NULL;
	zend_long manager;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(manager)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &manager_param);
	
            ns_textlayoutmanager_destroy((uintptr_t) manager);
        
}

PHP_METHOD(AppKit_NS_NSTextLayoutManager_NSTextLayoutManager, usesFontLeading)
{
	zend_bool result = 0;
	zval *manager_param = NULL;
	zend_long manager;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(manager)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &manager_param);
	
            result = ns_textlayoutmanager_uses_font_leading((uintptr_t) manager) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSTextLayoutManager_NSTextLayoutManager, setUsesFontLeading)
{
	zend_bool flag;
	zval *manager_param = NULL, *flag_param = NULL;
	zend_long manager;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(manager)
		Z_PARAM_BOOL(flag)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &manager_param, &flag_param);
	
            ns_textlayoutmanager_set_uses_font_leading((uintptr_t) manager, flag ? 1 : 0);
        
}

PHP_METHOD(AppKit_NS_NSTextLayoutManager_NSTextLayoutManager, limitsLayoutForSuspiciousContents)
{
	zend_bool result = 0;
	zval *manager_param = NULL;
	zend_long manager;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(manager)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &manager_param);
	
            result = ns_textlayoutmanager_limits_layout_for_suspicious_contents((uintptr_t) manager) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSTextLayoutManager_NSTextLayoutManager, setLimitsLayoutForSuspiciousContents)
{
	zend_bool flag;
	zval *manager_param = NULL, *flag_param = NULL;
	zend_long manager;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(manager)
		Z_PARAM_BOOL(flag)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &manager_param, &flag_param);
	
            ns_textlayoutmanager_set_limits_layout_for_suspicious_contents((uintptr_t) manager, flag ? 1 : 0);
        
}

PHP_METHOD(AppKit_NS_NSTextLayoutManager_NSTextLayoutManager, usesHyphenation)
{
	zend_bool result = 0;
	zval *manager_param = NULL;
	zend_long manager;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(manager)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &manager_param);
	
            result = ns_textlayoutmanager_uses_hyphenation((uintptr_t) manager) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSTextLayoutManager_NSTextLayoutManager, setUsesHyphenation)
{
	zend_bool flag;
	zval *manager_param = NULL, *flag_param = NULL;
	zend_long manager;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(manager)
		Z_PARAM_BOOL(flag)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &manager_param, &flag_param);
	
            ns_textlayoutmanager_set_uses_hyphenation((uintptr_t) manager, flag ? 1 : 0);
        
}

PHP_METHOD(AppKit_NS_NSTextLayoutManager_NSTextLayoutManager, replaceTextContentManager)
{
	zval *manager_param = NULL, *contentManager_param = NULL;
	zend_long manager, contentManager;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(manager)
		Z_PARAM_LONG(contentManager)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &manager_param, &contentManager_param);
	
            ns_textlayoutmanager_replace_text_content_manager((uintptr_t) manager, (uintptr_t) contentManager);
        
}

PHP_METHOD(AppKit_NS_NSTextLayoutManager_NSTextLayoutManager, setTextContainer)
{
	zval *manager_param = NULL, *container_param = NULL;
	zend_long manager, container;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(manager)
		Z_PARAM_LONG(container)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &manager_param, &container_param);
	
            ns_textlayoutmanager_set_text_container((uintptr_t) manager, (uintptr_t) container);
        
}

PHP_METHOD(AppKit_NS_NSTextLayoutManager_NSTextLayoutManager, getTextContainer)
{
	zval *manager_param = NULL;
	zend_long manager, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(manager)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &manager_param);
	
            handle = (zend_long) ns_textlayoutmanager_get_text_container((uintptr_t) manager);
        
	RETURN_LONG(handle);
}

/**
 * @return array [x, y, w, h]
 */
PHP_METHOD(AppKit_NS_NSTextLayoutManager_NSTextLayoutManager, usageBoundsForTextContainer)
{
	zval out;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *manager_param = NULL;
	zend_long manager;

	ZVAL_UNDEF(&out);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(manager)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &manager_param);
	ZEPHIR_INIT_VAR(&out);
	array_init(&out);
	
            double x = 0.0, y = 0.0, w = 0.0, h = 0.0;
            ns_textlayoutmanager_usage_bounds_for_text_container((uintptr_t) manager, &x, &y, &w, &h);
            add_next_index_double(&out, x);
            add_next_index_double(&out, y);
            add_next_index_double(&out, w);
            add_next_index_double(&out, h);
        
	RETURN_CTOR(&out);
}

PHP_METHOD(AppKit_NS_NSTextLayoutManager_NSTextLayoutManager, textViewportLayoutController)
{
	zval *manager_param = NULL;
	zend_long manager, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(manager)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &manager_param);
	
            handle = (zend_long) ns_textlayoutmanager_text_viewport_layout_controller((uintptr_t) manager);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSTextLayoutManager_NSTextLayoutManager, ensureLayoutForBounds)
{
	double x, y, w, h;
	zval *manager_param = NULL, *x_param = NULL, *y_param = NULL, *w_param = NULL, *h_param = NULL;
	zend_long manager;

	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(manager)
		Z_PARAM_ZVAL(x)
		Z_PARAM_ZVAL(y)
		Z_PARAM_ZVAL(w)
		Z_PARAM_ZVAL(h)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &manager_param, &x_param, &y_param, &w_param, &h_param);
	x = zephir_get_doubleval(x_param);
	y = zephir_get_doubleval(y_param);
	w = zephir_get_doubleval(w_param);
	h = zephir_get_doubleval(h_param);
	
            ns_textlayoutmanager_ensure_layout_for_bounds((uintptr_t) manager, (double) x, (double) y, (double) w, (double) h);
        
}

PHP_METHOD(AppKit_NS_NSTextLayoutManager_NSTextLayoutManager, invalidateLayoutForRange)
{
	zval *manager_param = NULL, *nsTextRangePtr_param = NULL;
	zend_long manager, nsTextRangePtr;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(manager)
		Z_PARAM_LONG(nsTextRangePtr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &manager_param, &nsTextRangePtr_param);
	
            ns_textlayoutmanager_invalidate_layout_for_range((uintptr_t) manager, (uintptr_t) nsTextRangePtr);
        
}

PHP_METHOD(AppKit_NS_NSTextLayoutManager_NSTextLayoutManager, textLayoutFragmentForPosition)
{
	double x, y;
	zval *manager_param = NULL, *x_param = NULL, *y_param = NULL;
	zend_long manager, handle = 0;

	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(manager)
		Z_PARAM_ZVAL(x)
		Z_PARAM_ZVAL(y)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &manager_param, &x_param, &y_param);
	x = zephir_get_doubleval(x_param);
	y = zephir_get_doubleval(y_param);
	
            handle = (zend_long) ns_textlayoutmanager_text_layout_fragment_for_position((uintptr_t) manager, (double) x, (double) y);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSTextLayoutManager_NSTextLayoutManager, textSelectionsCount)
{
	zval *manager_param = NULL;
	zend_long manager, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(manager)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &manager_param);
	
            value = (zend_long) ns_textlayoutmanager_text_selections_count((uintptr_t) manager);
        
	RETURN_LONG(value);
}

