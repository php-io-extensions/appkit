
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
#include "kernel/memory.h"
#include "kernel/operators.h"
#include "kernel/object.h"

#include "ns-browsercell.h"
#include <stdint.h>



/**
 * NSBrowserCell used by NSBrowser.
 */
ZEPHIR_INIT_CLASS(AppKit_NS_NSBrowserCell_NSBrowserCell)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSBrowserCell, NSBrowserCell, appkit, ns_nsbrowsercell_nsbrowsercell, appkit_ns_nsbrowsercell_nsbrowsercell_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSBrowserCell_NSBrowserCell, createText)
{
	zend_long handle = 0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *value_param = NULL;
	zval value;

	ZVAL_UNDEF(&value);
	ZEND_PARSE_PARAMETERS_START(0, 1)
		Z_PARAM_OPTIONAL
		Z_PARAM_STR(value)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 0, 1, &value_param);
	if (!value_param) {
		ZEPHIR_INIT_VAR(&value);
		ZVAL_STRING(&value, "");
	} else {
		zephir_get_strval(&value, value_param);
	}
	
            handle = (zend_long) ns_browsercell_create_text(Z_STRVAL(value));
        
	RETURN_MM_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSBrowserCell_NSBrowserCell, wrap)
{
	zval *nsBrowserCellPtr_param = NULL;
	zend_long nsBrowserCellPtr, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(nsBrowserCellPtr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &nsBrowserCellPtr_param);
	
            handle = (zend_long) ns_browsercell_wrap((void *)(uintptr_t) nsBrowserCellPtr);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSBrowserCell_NSBrowserCell, destroy)
{
	zval *cell_param = NULL;
	zend_long cell;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(cell)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &cell_param);
	
            ns_browsercell_destroy((uintptr_t) cell);
        
}

PHP_METHOD(AppKit_NS_NSBrowserCell_NSBrowserCell, nsBrowserCell)
{
	zval *cell_param = NULL;
	zend_long cell, ptr = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(cell)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &cell_param);
	
            ptr = (zend_long)(uintptr_t) ns_browsercell_nsbrowsercell((uintptr_t) cell);
        
	RETURN_LONG(ptr);
}

PHP_METHOD(AppKit_NS_NSBrowserCell_NSBrowserCell, setTitle)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval title;
	zval *cell_param = NULL, *title_param = NULL;
	zend_long cell;

	ZVAL_UNDEF(&title);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(cell)
		Z_PARAM_STR(title)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &cell_param, &title_param);
	zephir_get_strval(&title, title_param);
	
            ns_browsercell_set_title((uintptr_t) cell, Z_STRVAL(title));
        
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSBrowserCell_NSBrowserCell, getTitle)
{
	zval *cell_param = NULL;
	zend_long cell;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(cell)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &cell_param);
	
            char buf[4096];
            buf[0] = '\0';
            if (ns_browsercell_get_title((uintptr_t) cell, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        
	RETURN_STRING("");
}

PHP_METHOD(AppKit_NS_NSBrowserCell_NSBrowserCell, setState)
{
	zval *cell_param = NULL, *state_param = NULL;
	zend_long cell, state;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(cell)
		Z_PARAM_LONG(state)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &cell_param, &state_param);
	
            ns_browsercell_set_state((uintptr_t) cell, (int) state);
        
}

PHP_METHOD(AppKit_NS_NSBrowserCell_NSBrowserCell, getState)
{
	zval *cell_param = NULL;
	zend_long cell, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(cell)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &cell_param);
	
            value = (zend_long) ns_browsercell_get_state((uintptr_t) cell);
        
	RETURN_LONG(value);
}

PHP_METHOD(AppKit_NS_NSBrowserCell_NSBrowserCell, setEnabled)
{
	zend_bool enabled;
	zval *cell_param = NULL, *enabled_param = NULL;
	zend_long cell;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(cell)
		Z_PARAM_BOOL(enabled)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &cell_param, &enabled_param);
	
            ns_browsercell_set_enabled((uintptr_t) cell, enabled ? 1 : 0);
        
}

PHP_METHOD(AppKit_NS_NSBrowserCell_NSBrowserCell, isEnabled)
{
	zend_bool result = 0;
	zval *cell_param = NULL;
	zend_long cell;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(cell)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &cell_param);
	
            result = ns_browsercell_is_enabled((uintptr_t) cell) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSBrowserCell_NSBrowserCell, setTag)
{
	zval *cell_param = NULL, *tag_param = NULL;
	zend_long cell, tag;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(cell)
		Z_PARAM_LONG(tag)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &cell_param, &tag_param);
	
            ns_browsercell_set_tag((uintptr_t) cell, (int) tag);
        
}

PHP_METHOD(AppKit_NS_NSBrowserCell_NSBrowserCell, getTag)
{
	zval *cell_param = NULL;
	zend_long cell, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(cell)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &cell_param);
	
            value = (zend_long) ns_browsercell_get_tag((uintptr_t) cell);
        
	RETURN_LONG(value);
}

PHP_METHOD(AppKit_NS_NSBrowserCell_NSBrowserCell, setLeaf)
{
	zend_bool flag;
	zval *cell_param = NULL, *flag_param = NULL;
	zend_long cell;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(cell)
		Z_PARAM_BOOL(flag)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &cell_param, &flag_param);
	
            ns_browsercell_set_leaf((uintptr_t) cell, flag ? 1 : 0);
        
}

PHP_METHOD(AppKit_NS_NSBrowserCell_NSBrowserCell, isLeaf)
{
	zend_bool result = 0;
	zval *cell_param = NULL;
	zend_long cell;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(cell)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &cell_param);
	
            result = ns_browsercell_is_leaf((uintptr_t) cell) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSBrowserCell_NSBrowserCell, setLoaded)
{
	zend_bool flag;
	zval *cell_param = NULL, *flag_param = NULL;
	zend_long cell;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(cell)
		Z_PARAM_BOOL(flag)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &cell_param, &flag_param);
	
            ns_browsercell_set_loaded((uintptr_t) cell, flag ? 1 : 0);
        
}

PHP_METHOD(AppKit_NS_NSBrowserCell_NSBrowserCell, isLoaded)
{
	zend_bool result = 0;
	zval *cell_param = NULL;
	zend_long cell;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(cell)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &cell_param);
	
            result = ns_browsercell_is_loaded((uintptr_t) cell) == 1;
        
	RETURN_BOOL(result);
}

