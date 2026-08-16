
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

#include "ns-helpmanager.h"
#include <stdint.h>



/**
 * NSHelpManager Help Viewer and context help.
 */
ZEPHIR_INIT_CLASS(AppKit_NS_NSHelpManager_NSHelpManager)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSHelpManager, NSHelpManager, appkit, ns_nshelpmanager_nshelpmanager, appkit_ns_nshelpmanager_nshelpmanager_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSHelpManager_NSHelpManager, shared)
{
	zend_long handle = 0;
	
            handle = (zend_long) ns_helpmanager_shared();
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSHelpManager_NSHelpManager, destroy)
{
	zval *manager_param = NULL;
	zend_long manager;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(manager)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &manager_param);
	
            ns_helpmanager_destroy((uintptr_t) manager);
        
}

PHP_METHOD(AppKit_NS_NSHelpManager_NSHelpManager, nsHelpManager)
{
	zval *manager_param = NULL;
	zend_long manager, ptr = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(manager)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &manager_param);
	
            ptr = (zend_long)(uintptr_t) ns_helpmanager_nshelpmanager((uintptr_t) manager);
        
	RETURN_LONG(ptr);
}

PHP_METHOD(AppKit_NS_NSHelpManager_NSHelpManager, isContextHelpModeActive)
{
	zend_bool result = 0;
	
            result = ns_helpmanager_is_context_help_mode_active() == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSHelpManager_NSHelpManager, setContextHelpModeActive)
{
	zval *active_param = NULL;
	zend_bool active;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_BOOL(active)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &active_param);
	
            ns_helpmanager_set_context_help_mode_active(active ? 1 : 0);
        
}

PHP_METHOD(AppKit_NS_NSHelpManager_NSHelpManager, setContextHelpForObject)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval helpText;
	zval *objectPtr_param = NULL, *helpText_param = NULL;
	zend_long objectPtr;

	ZVAL_UNDEF(&helpText);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(objectPtr)
		Z_PARAM_STR(helpText)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &objectPtr_param, &helpText_param);
	zephir_get_strval(&helpText, helpText_param);
	
            ns_helpmanager_set_context_help_for_object((uintptr_t) objectPtr, Z_STRVAL(helpText));
        
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSHelpManager_NSHelpManager, removeContextHelpForObject)
{
	zval *objectPtr_param = NULL;
	zend_long objectPtr;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(objectPtr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &objectPtr_param);
	
            ns_helpmanager_remove_context_help_for_object((uintptr_t) objectPtr);
        
}

PHP_METHOD(AppKit_NS_NSHelpManager_NSHelpManager, contextHelpForObject)
{
	zval *objectPtr_param = NULL;
	zend_long objectPtr;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(objectPtr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &objectPtr_param);
	
            char buf[8192];
            buf[0] = '\0';
            if (ns_helpmanager_context_help_for_object((uintptr_t) objectPtr, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        
	RETURN_STRING("");
}

PHP_METHOD(AppKit_NS_NSHelpManager_NSHelpManager, showContextHelpForObject)
{
	zend_bool result = 0;
	double x, y;
	zval *objectPtr_param = NULL, *x_param = NULL, *y_param = NULL;
	zend_long objectPtr;

	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(objectPtr)
		Z_PARAM_ZVAL(x)
		Z_PARAM_ZVAL(y)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &objectPtr_param, &x_param, &y_param);
	x = zephir_get_doubleval(x_param);
	y = zephir_get_doubleval(y_param);
	
            result = ns_helpmanager_show_context_help_for_object((uintptr_t) objectPtr, x, y) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSHelpManager_NSHelpManager, openHelpAnchor)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *anchor_param = NULL, *book_param = NULL;
	zval anchor, book;

	ZVAL_UNDEF(&anchor);
	ZVAL_UNDEF(&book);
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_STR(anchor)
		Z_PARAM_OPTIONAL
		Z_PARAM_STR(book)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 1, &anchor_param, &book_param);
	zephir_get_strval(&anchor, anchor_param);
	if (!book_param) {
		ZEPHIR_INIT_VAR(&book);
		ZVAL_STRING(&book, "");
	} else {
		zephir_get_strval(&book, book_param);
	}
	
            ns_helpmanager_open_help_anchor(Z_STRVAL(anchor), Z_STRVAL(book));
        
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSHelpManager_NSHelpManager, findString)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *query_param = NULL, *book_param = NULL;
	zval query, book;

	ZVAL_UNDEF(&query);
	ZVAL_UNDEF(&book);
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_STR(query)
		Z_PARAM_OPTIONAL
		Z_PARAM_STR(book)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 1, &query_param, &book_param);
	zephir_get_strval(&query, query_param);
	if (!book_param) {
		ZEPHIR_INIT_VAR(&book);
		ZVAL_STRING(&book, "");
	} else {
		zephir_get_strval(&book, book_param);
	}
	
            ns_helpmanager_find_string(Z_STRVAL(query), Z_STRVAL(book));
        
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSHelpManager_NSHelpManager, registerBooksInBundlePath)
{
	zend_bool result = 0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *bundlePath_param = NULL;
	zval bundlePath;

	ZVAL_UNDEF(&bundlePath);
	ZEND_PARSE_PARAMETERS_START(0, 1)
		Z_PARAM_OPTIONAL
		Z_PARAM_STR(bundlePath)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 0, 1, &bundlePath_param);
	if (!bundlePath_param) {
		ZEPHIR_INIT_VAR(&bundlePath);
		ZVAL_STRING(&bundlePath, "");
	} else {
		zephir_get_strval(&bundlePath, bundlePath_param);
	}
	
            result = ns_helpmanager_register_books_in_bundle_path(Z_STRVAL(bundlePath)) == 1;
        
	RETURN_MM_BOOL(result);
}

