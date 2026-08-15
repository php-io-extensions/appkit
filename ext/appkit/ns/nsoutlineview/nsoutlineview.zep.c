
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

#include "ns-outlineview.h"
#include <stdint.h>



/**
 * NSOutlineView hierarchical list.
 */
ZEPHIR_INIT_CLASS(AppKit_NS_NSOutlineView_NSOutlineView)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSOutlineView, NSOutlineView, appkit, ns_nsoutlineview_nsoutlineview, appkit_ns_nsoutlineview_nsoutlineview_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSOutlineView_NSOutlineView, create)
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
	
            handle = (zend_long) ns_outlineview_create((double) x, (double) y, (double) width, (double) height);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSOutlineView_NSOutlineView, destroy)
{
	zval *outline_param = NULL;
	zend_long outline;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(outline)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &outline_param);
	
            ns_outlineview_destroy((uintptr_t) outline);
        
}

PHP_METHOD(AppKit_NS_NSOutlineView_NSOutlineView, clear)
{
	zval *outline_param = NULL;
	zend_long outline;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(outline)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &outline_param);
	
            ns_outlineview_clear((uintptr_t) outline);
        
}

PHP_METHOD(AppKit_NS_NSOutlineView_NSOutlineView, addRoot)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval title;
	zval *outline_param = NULL, *title_param = NULL;
	zend_long outline, value = 0;

	ZVAL_UNDEF(&title);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(outline)
		Z_PARAM_STR(title)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &outline_param, &title_param);
	zephir_get_strval(&title, title_param);
	
            value = (zend_long) ns_outlineview_add_root((uintptr_t) outline, Z_STRVAL(title));
        
	RETURN_MM_LONG(value);
}

PHP_METHOD(AppKit_NS_NSOutlineView_NSOutlineView, addChild)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval title;
	zval *outline_param = NULL, *parentId_param = NULL, *title_param = NULL;
	zend_long outline, parentId, value = 0;

	ZVAL_UNDEF(&title);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(outline)
		Z_PARAM_LONG(parentId)
		Z_PARAM_STR(title)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &outline_param, &parentId_param, &title_param);
	zephir_get_strval(&title, title_param);
	
            value = (zend_long) ns_outlineview_add_child((uintptr_t) outline, (int) parentId, Z_STRVAL(title));
        
	RETURN_MM_LONG(value);
}

PHP_METHOD(AppKit_NS_NSOutlineView_NSOutlineView, itemCount)
{
	zval *outline_param = NULL;
	zend_long outline, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(outline)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &outline_param);
	
            value = (zend_long) ns_outlineview_item_count((uintptr_t) outline);
        
	RETURN_LONG(value);
}

PHP_METHOD(AppKit_NS_NSOutlineView_NSOutlineView, getSelected)
{
	zval *outline_param = NULL;
	zend_long outline, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(outline)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &outline_param);
	
            value = (zend_long) ns_outlineview_get_selected((uintptr_t) outline);
        
	RETURN_LONG(value);
}

PHP_METHOD(AppKit_NS_NSOutlineView_NSOutlineView, setSelected)
{
	zval *outline_param = NULL, *itemId_param = NULL;
	zend_long outline, itemId;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(outline)
		Z_PARAM_LONG(itemId)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &outline_param, &itemId_param);
	
            ns_outlineview_set_selected((uintptr_t) outline, (int) itemId);
        
}

PHP_METHOD(AppKit_NS_NSOutlineView_NSOutlineView, pollChange)
{
	zend_bool result = 0;
	zval *outline_param = NULL;
	zend_long outline;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(outline)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &outline_param);
	
            result = ns_outlineview_poll_change((uintptr_t) outline) == 1;
        
	RETURN_BOOL(result);
}

