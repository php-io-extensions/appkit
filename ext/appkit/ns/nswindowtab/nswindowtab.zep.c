
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

#include "ns-windowtab.h"
#include <stdint.h>



ZEPHIR_INIT_CLASS(AppKit_NS_NSWindowTab_NSWindowTab)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSWindowTab, NSWindowTab, appkit, ns_nswindowtab_nswindowtab, appkit_ns_nswindowtab_nswindowtab_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSWindowTab_NSWindowTab, wrap)
{
	zval *nsWindowTabPtr_param = NULL;
	zend_long nsWindowTabPtr, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(nsWindowTabPtr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &nsWindowTabPtr_param);
	
            handle = (zend_long) ns_windowtab_wrap((void *)(uintptr_t) nsWindowTabPtr);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSWindowTab_NSWindowTab, destroy)
{
	zval *tab_param = NULL;
	zend_long tab;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(tab)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &tab_param);
	
            ns_windowtab_destroy((uintptr_t) tab);
        
}

PHP_METHOD(AppKit_NS_NSWindowTab_NSWindowTab, nsWindowTab)
{
	zval *tab_param = NULL;
	zend_long tab, ptr = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(tab)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &tab_param);
	
            ptr = (zend_long)(uintptr_t) ns_windowtab_nswindowtab((uintptr_t) tab);
        
	RETURN_LONG(ptr);
}

PHP_METHOD(AppKit_NS_NSWindowTab_NSWindowTab, title)
{
	zval *tab_param = NULL;
	zend_long tab;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(tab)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &tab_param);
	
            char buf[4096];
            buf[0] = '\0';
            if (ns_windowtab_title((uintptr_t) tab, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        
	RETURN_STRING("");
}

PHP_METHOD(AppKit_NS_NSWindowTab_NSWindowTab, setTitle)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval title;
	zval *tab_param = NULL, *title_param = NULL;
	zend_long tab;

	ZVAL_UNDEF(&title);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(tab)
		Z_PARAM_STR(title)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &tab_param, &title_param);
	zephir_get_strval(&title, title_param);
	
            ns_windowtab_set_title((uintptr_t) tab, Z_STRVAL(title));
        
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSWindowTab_NSWindowTab, toolTip)
{
	zval *tab_param = NULL;
	zend_long tab;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(tab)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &tab_param);
	
            char buf[4096];
            buf[0] = '\0';
            if (ns_windowtab_tool_tip((uintptr_t) tab, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        
	RETURN_STRING("");
}

PHP_METHOD(AppKit_NS_NSWindowTab_NSWindowTab, setToolTip)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval toolTip;
	zval *tab_param = NULL, *toolTip_param = NULL;
	zend_long tab;

	ZVAL_UNDEF(&toolTip);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(tab)
		Z_PARAM_STR(toolTip)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &tab_param, &toolTip_param);
	zephir_get_strval(&toolTip, toolTip_param);
	
            ns_windowtab_set_tool_tip((uintptr_t) tab, Z_STRVAL(toolTip));
        
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSWindowTab_NSWindowTab, setAccessoryView)
{
	zval *tab_param = NULL, *view_param = NULL;
	zend_long tab, view;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(tab)
		Z_PARAM_LONG(view)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &tab_param, &view_param);
	
            ns_windowtab_set_accessory_view((uintptr_t) tab, (uintptr_t) view);
        
}

PHP_METHOD(AppKit_NS_NSWindowTab_NSWindowTab, accessoryView)
{
	zval *tab_param = NULL;
	zend_long tab, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(tab)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &tab_param);
	
            handle = (zend_long) ns_windowtab_accessory_view((uintptr_t) tab);
        
	RETURN_LONG(handle);
}

