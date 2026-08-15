
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

#include "ns-statusbar.h"
#include <stdint.h>



/**
 * NSStatusBar system menu-bar status bar.
 */
ZEPHIR_INIT_CLASS(AppKit_NS_NSStatusBar_NSStatusBar)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSStatusBar, NSStatusBar, appkit, ns_nsstatusbar_nsstatusbar, appkit_ns_nsstatusbar_nsstatusbar_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSStatusBar_NSStatusBar, system)
{
	zend_long handle = 0;
	
            handle = (zend_long) ns_statusbar_system();
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSStatusBar_NSStatusBar, wrap)
{
	zval *nsStatusBarPtr_param = NULL;
	zend_long nsStatusBarPtr, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(nsStatusBarPtr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &nsStatusBarPtr_param);
	
            handle = (zend_long) ns_statusbar_wrap((void *)(uintptr_t) nsStatusBarPtr);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSStatusBar_NSStatusBar, destroy)
{
	zval *bar_param = NULL;
	zend_long bar;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(bar)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &bar_param);
	
            ns_statusbar_destroy((uintptr_t) bar);
        
}

PHP_METHOD(AppKit_NS_NSStatusBar_NSStatusBar, nsStatusBar)
{
	zval *bar_param = NULL;
	zend_long bar, ptr = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(bar)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &bar_param);
	
            ptr = (zend_long)(uintptr_t) ns_statusbar_nsstatusbar((uintptr_t) bar);
        
	RETURN_LONG(ptr);
}

PHP_METHOD(AppKit_NS_NSStatusBar_NSStatusBar, statusItemWithLength)
{
	double length;
	zval *bar_param = NULL, *length_param = NULL;
	zend_long bar, value = 0;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(bar)
		Z_PARAM_ZVAL(length)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &bar_param, &length_param);
	length = zephir_get_doubleval(length_param);
	
            value = (zend_long) ns_statusbar_status_item_with_length((uintptr_t) bar, length);
        
	RETURN_LONG(value);
}

PHP_METHOD(AppKit_NS_NSStatusBar_NSStatusBar, statusItemWithKind)
{
	zval *bar_param = NULL, *kind_param = NULL;
	zend_long bar, kind, value = 0;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(bar)
		Z_PARAM_LONG(kind)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &bar_param, &kind_param);
	
            value = (zend_long) ns_statusbar_status_item_with_kind((uintptr_t) bar, (int) kind);
        
	RETURN_LONG(value);
}

PHP_METHOD(AppKit_NS_NSStatusBar_NSStatusBar, removeStatusItem)
{
	zval *bar_param = NULL, *item_param = NULL;
	zend_long bar, item;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(bar)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &bar_param, &item_param);
	
            ns_statusbar_remove_status_item((uintptr_t) bar, (uintptr_t) item);
        
}

PHP_METHOD(AppKit_NS_NSStatusBar_NSStatusBar, isVertical)
{
	zend_bool result = 0;
	zval *bar_param = NULL;
	zend_long bar;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(bar)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &bar_param);
	
            result = ns_statusbar_is_vertical((uintptr_t) bar) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSStatusBar_NSStatusBar, thickness)
{
	double value = 0;
	zval *bar_param = NULL;
	zend_long bar;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(bar)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &bar_param);
	
            value = ns_statusbar_thickness((uintptr_t) bar);
        
	RETURN_DOUBLE(value);
}

