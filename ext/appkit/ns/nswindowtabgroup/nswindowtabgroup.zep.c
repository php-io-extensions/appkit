
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

#include "ns-windowtabgroup.h"
#include <stdint.h>



ZEPHIR_INIT_CLASS(AppKit_NS_NSWindowTabGroup_NSWindowTabGroup)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSWindowTabGroup, NSWindowTabGroup, appkit, ns_nswindowtabgroup_nswindowtabgroup, appkit_ns_nswindowtabgroup_nswindowtabgroup_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSWindowTabGroup_NSWindowTabGroup, wrap)
{
	zval *nsWindowTabGroupPtr_param = NULL;
	zend_long nsWindowTabGroupPtr, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(nsWindowTabGroupPtr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &nsWindowTabGroupPtr_param);
	
            handle = (zend_long) ns_windowtabgroup_wrap((void *)(uintptr_t) nsWindowTabGroupPtr);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSWindowTabGroup_NSWindowTabGroup, destroy)
{
	zval *group_param = NULL;
	zend_long group;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(group)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &group_param);
	
            ns_windowtabgroup_destroy((uintptr_t) group);
        
}

PHP_METHOD(AppKit_NS_NSWindowTabGroup_NSWindowTabGroup, nsWindowTabGroup)
{
	zval *group_param = NULL;
	zend_long group, ptr = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(group)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &group_param);
	
            ptr = (zend_long)(uintptr_t) ns_windowtabgroup_nswindowtabgroup((uintptr_t) group);
        
	RETURN_LONG(ptr);
}

PHP_METHOD(AppKit_NS_NSWindowTabGroup_NSWindowTabGroup, identifier)
{
	zval *group_param = NULL;
	zend_long group;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(group)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &group_param);
	
            char buf[4096];
            buf[0] = '\0';
            if (ns_windowtabgroup_identifier((uintptr_t) group, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        
	RETURN_STRING("");
}

PHP_METHOD(AppKit_NS_NSWindowTabGroup_NSWindowTabGroup, windowsCount)
{
	zval *group_param = NULL;
	zend_long group, count = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(group)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &group_param);
	
            count = ns_windowtabgroup_windows_count((uintptr_t) group);
        
	RETURN_LONG(count);
}

PHP_METHOD(AppKit_NS_NSWindowTabGroup_NSWindowTabGroup, windowAt)
{
	zval *group_param = NULL, *index_param = NULL;
	zend_long group, index, ptr = 0;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(group)
		Z_PARAM_LONG(index)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &group_param, &index_param);
	
            ptr = (zend_long)(uintptr_t) ns_windowtabgroup_window_at((uintptr_t) group, (int) index);
        
	RETURN_LONG(ptr);
}

PHP_METHOD(AppKit_NS_NSWindowTabGroup_NSWindowTabGroup, isOverviewVisible)
{
	zend_bool result = 0;
	zval *group_param = NULL;
	zend_long group;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(group)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &group_param);
	
            result = ns_windowtabgroup_is_overview_visible((uintptr_t) group) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSWindowTabGroup_NSWindowTabGroup, setOverviewVisible)
{
	zend_bool visible;
	zval *group_param = NULL, *visible_param = NULL;
	zend_long group;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(group)
		Z_PARAM_BOOL(visible)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &group_param, &visible_param);
	
            ns_windowtabgroup_set_overview_visible((uintptr_t) group, visible ? 1 : 0);
        
}

PHP_METHOD(AppKit_NS_NSWindowTabGroup_NSWindowTabGroup, isTabBarVisible)
{
	zend_bool result = 0;
	zval *group_param = NULL;
	zend_long group;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(group)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &group_param);
	
            result = ns_windowtabgroup_is_tab_bar_visible((uintptr_t) group) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSWindowTabGroup_NSWindowTabGroup, selectedWindow)
{
	zval *group_param = NULL;
	zend_long group, ptr = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(group)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &group_param);
	
            ptr = (zend_long)(uintptr_t) ns_windowtabgroup_selected_window((uintptr_t) group);
        
	RETURN_LONG(ptr);
}

PHP_METHOD(AppKit_NS_NSWindowTabGroup_NSWindowTabGroup, setSelectedWindow)
{
	zval *group_param = NULL, *window_param = NULL;
	zend_long group, window;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(group)
		Z_PARAM_LONG(window)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &group_param, &window_param);
	
            ns_windowtabgroup_set_selected_window((uintptr_t) group, (uintptr_t) window);
        
}

PHP_METHOD(AppKit_NS_NSWindowTabGroup_NSWindowTabGroup, addWindow)
{
	zval *group_param = NULL, *window_param = NULL;
	zend_long group, window;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(group)
		Z_PARAM_LONG(window)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &group_param, &window_param);
	
            ns_windowtabgroup_add_window((uintptr_t) group, (uintptr_t) window);
        
}

PHP_METHOD(AppKit_NS_NSWindowTabGroup_NSWindowTabGroup, insertWindow)
{
	zval *group_param = NULL, *window_param = NULL, *index_param = NULL;
	zend_long group, window, index;

	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(group)
		Z_PARAM_LONG(window)
		Z_PARAM_LONG(index)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &group_param, &window_param, &index_param);
	
            ns_windowtabgroup_insert_window((uintptr_t) group, (uintptr_t) window, (int) index);
        
}

PHP_METHOD(AppKit_NS_NSWindowTabGroup_NSWindowTabGroup, removeWindow)
{
	zval *group_param = NULL, *window_param = NULL;
	zend_long group, window;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(group)
		Z_PARAM_LONG(window)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &group_param, &window_param);
	
            ns_windowtabgroup_remove_window((uintptr_t) group, (uintptr_t) window);
        
}

