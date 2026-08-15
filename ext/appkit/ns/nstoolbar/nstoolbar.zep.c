
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

#include "ns-toolbar.h"
#include <stdint.h>



/**
 * NSToolbar window chrome.
 */
ZEPHIR_INIT_CLASS(AppKit_NS_NSToolbar_NSToolbar)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSToolbar, NSToolbar, appkit, ns_nstoolbar_nstoolbar, appkit_ns_nstoolbar_nstoolbar_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSToolbar_NSToolbar, create)
{
	zend_long handle = 0;
	
            handle = (zend_long) ns_toolbar_create();
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSToolbar_NSToolbar, destroy)
{
	zval *toolbar_param = NULL;
	zend_long toolbar;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(toolbar)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &toolbar_param);
	
            ns_toolbar_destroy((uintptr_t) toolbar);
        
}

PHP_METHOD(AppKit_NS_NSToolbar_NSToolbar, addItem)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval title, actionId;
	zval *toolbar_param = NULL, *title_param = NULL, *actionId_param = NULL;
	zend_long toolbar;

	ZVAL_UNDEF(&title);
	ZVAL_UNDEF(&actionId);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(toolbar)
		Z_PARAM_STR(title)
		Z_PARAM_STR(actionId)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &toolbar_param, &title_param, &actionId_param);
	zephir_get_strval(&title, title_param);
	zephir_get_strval(&actionId, actionId_param);
	
            ns_toolbar_add_item((uintptr_t) toolbar, Z_STRVAL(title), Z_STRVAL(actionId));
        
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSToolbar_NSToolbar, install)
{
	zend_bool result = 0;
	zval *toolbar_param = NULL, *window_param = NULL;
	zend_long toolbar, window;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(toolbar)
		Z_PARAM_LONG(window)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &toolbar_param, &window_param);
	
            result = ns_toolbar_install((uintptr_t) toolbar, (uintptr_t) window) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSToolbar_NSToolbar, pollAction)
{
	zval *toolbar_param = NULL;
	zend_long toolbar;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(toolbar)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &toolbar_param);
	
            char buf[256];
            buf[0] = '\0';
            if (ns_toolbar_poll_action((uintptr_t) toolbar, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        
	RETURN_STRING("");
}

