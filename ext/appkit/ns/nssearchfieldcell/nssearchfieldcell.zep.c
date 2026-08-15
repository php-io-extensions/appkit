
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

#include "ns-searchfieldcell.h"
#include <stdint.h>



/**
 * NSSearchFieldCell — cell used by NSSearchField.
 */
ZEPHIR_INIT_CLASS(AppKit_NS_NSSearchFieldCell_NSSearchFieldCell)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSSearchFieldCell, NSSearchFieldCell, appkit, ns_nssearchfieldcell_nssearchfieldcell, appkit_ns_nssearchfieldcell_nssearchfieldcell_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSSearchFieldCell_NSSearchFieldCell, createText)
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
	
            handle = (zend_long) ns_searchfieldcell_create_text(Z_STRVAL(value));
        
	RETURN_MM_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSSearchFieldCell_NSSearchFieldCell, wrap)
{
	zval *nsSearchFieldCellPtr_param = NULL;
	zend_long nsSearchFieldCellPtr, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(nsSearchFieldCellPtr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &nsSearchFieldCellPtr_param);
	
            handle = (zend_long) ns_searchfieldcell_wrap((void *)(uintptr_t) nsSearchFieldCellPtr);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSSearchFieldCell_NSSearchFieldCell, destroy)
{
	zval *cell_param = NULL;
	zend_long cell;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(cell)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &cell_param);
	
            ns_searchfieldcell_destroy((uintptr_t) cell);
        
}

PHP_METHOD(AppKit_NS_NSSearchFieldCell_NSSearchFieldCell, nsSearchFieldCell)
{
	zval *cell_param = NULL;
	zend_long cell, ptr = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(cell)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &cell_param);
	
            ptr = (zend_long)(uintptr_t) ns_searchfieldcell_nssearchfieldcell((uintptr_t) cell);
        
	RETURN_LONG(ptr);
}

PHP_METHOD(AppKit_NS_NSSearchFieldCell_NSSearchFieldCell, setTitle)
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
	
            ns_searchfieldcell_set_title((uintptr_t) cell, Z_STRVAL(title));
        
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSSearchFieldCell_NSSearchFieldCell, getTitle)
{
	zval *cell_param = NULL;
	zend_long cell;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(cell)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &cell_param);
	
            char buf[4096];
            buf[0] = '\0';
            if (ns_searchfieldcell_get_title((uintptr_t) cell, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        
	RETURN_STRING("");
}

PHP_METHOD(AppKit_NS_NSSearchFieldCell_NSSearchFieldCell, setStringValue)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval value;
	zval *cell_param = NULL, *value_param = NULL;
	zend_long cell;

	ZVAL_UNDEF(&value);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(cell)
		Z_PARAM_STR(value)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &cell_param, &value_param);
	zephir_get_strval(&value, value_param);
	
            ns_searchfieldcell_set_string((uintptr_t) cell, Z_STRVAL(value));
        
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSSearchFieldCell_NSSearchFieldCell, getStringValue)
{
	zval *cell_param = NULL;
	zend_long cell;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(cell)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &cell_param);
	
            char buf[4096];
            buf[0] = '\0';
            if (ns_searchfieldcell_get_string((uintptr_t) cell, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        
	RETURN_STRING("");
}

PHP_METHOD(AppKit_NS_NSSearchFieldCell_NSSearchFieldCell, setPlaceholderString)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval placeholder;
	zval *cell_param = NULL, *placeholder_param = NULL;
	zend_long cell;

	ZVAL_UNDEF(&placeholder);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(cell)
		Z_PARAM_STR(placeholder)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &cell_param, &placeholder_param);
	zephir_get_strval(&placeholder, placeholder_param);
	
            ns_searchfieldcell_set_placeholder_string((uintptr_t) cell, Z_STRVAL(placeholder));
        
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSSearchFieldCell_NSSearchFieldCell, getPlaceholderString)
{
	zval *cell_param = NULL;
	zend_long cell;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(cell)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &cell_param);
	
            char buf[4096];
            buf[0] = '\0';
            if (ns_searchfieldcell_get_placeholder_string((uintptr_t) cell, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        
	RETURN_STRING("");
}

PHP_METHOD(AppKit_NS_NSSearchFieldCell_NSSearchFieldCell, setRecentSearches)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval searches;
	zval *cell_param = NULL, *searches_param = NULL;
	zend_long cell;

	ZVAL_UNDEF(&searches);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(cell)
		Z_PARAM_ARRAY(searches)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &cell_param, &searches_param);
	zephir_get_arrval(&searches, searches_param);
	
            zval *item;
            const char *cnames[256];
            int count = 0;
            ZEND_HASH_FOREACH_VAL(Z_ARRVAL(searches), item) {
                if (count >= 256) {
                    break;
                }
                convert_to_string(item);
                cnames[count++] = Z_STRVAL_P(item);
            } ZEND_HASH_FOREACH_END();
            ns_searchfieldcell_set_recent_searches((uintptr_t) cell, cnames, count);
        
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSSearchFieldCell_NSSearchFieldCell, getRecentSearches)
{
	zval out;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *cell_param = NULL;
	zend_long cell;

	ZVAL_UNDEF(&out);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(cell)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &cell_param);
	ZEPHIR_INIT_VAR(&out);
	array_init(&out);
	
            int count = ns_searchfieldcell_recent_searches_count((uintptr_t) cell);
            int i;
            for (i = 0; i < count; i++) {
                char buf[4096];
                buf[0] = '\0';
                if (ns_searchfieldcell_recent_search_at((uintptr_t) cell, i, buf, (int) sizeof(buf))) {
                    add_next_index_string(&out, buf);
                }
            }
        
	RETURN_CTOR(&out);
}

PHP_METHOD(AppKit_NS_NSSearchFieldCell_NSSearchFieldCell, setRecentsAutosaveName)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval name;
	zval *cell_param = NULL, *name_param = NULL;
	zend_long cell;

	ZVAL_UNDEF(&name);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(cell)
		Z_PARAM_STR(name)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &cell_param, &name_param);
	zephir_get_strval(&name, name_param);
	
            ns_searchfieldcell_set_recents_autosave_name((uintptr_t) cell, Z_STRVAL(name));
        
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSSearchFieldCell_NSSearchFieldCell, getRecentsAutosaveName)
{
	zval *cell_param = NULL;
	zend_long cell;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(cell)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &cell_param);
	
            char buf[4096];
            buf[0] = '\0';
            if (ns_searchfieldcell_get_recents_autosave_name((uintptr_t) cell, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        
	RETURN_STRING("");
}

PHP_METHOD(AppKit_NS_NSSearchFieldCell_NSSearchFieldCell, setSendsWholeSearchString)
{
	zend_bool flag;
	zval *cell_param = NULL, *flag_param = NULL;
	zend_long cell;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(cell)
		Z_PARAM_BOOL(flag)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &cell_param, &flag_param);
	
            ns_searchfieldcell_set_sends_whole_search_string((uintptr_t) cell, flag ? 1 : 0);
        
}

PHP_METHOD(AppKit_NS_NSSearchFieldCell_NSSearchFieldCell, sendsWholeSearchString)
{
	zend_bool result = 0;
	zval *cell_param = NULL;
	zend_long cell;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(cell)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &cell_param);
	
            result = ns_searchfieldcell_sends_whole_search_string((uintptr_t) cell) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSSearchFieldCell_NSSearchFieldCell, setMaximumRecents)
{
	zval *cell_param = NULL, *maximum_param = NULL;
	zend_long cell, maximum;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(cell)
		Z_PARAM_LONG(maximum)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &cell_param, &maximum_param);
	
            ns_searchfieldcell_set_maximum_recents((uintptr_t) cell, (int) maximum);
        
}

PHP_METHOD(AppKit_NS_NSSearchFieldCell_NSSearchFieldCell, maximumRecents)
{
	zval *cell_param = NULL;
	zend_long cell, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(cell)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &cell_param);
	
            value = (zend_long) ns_searchfieldcell_maximum_recents((uintptr_t) cell);
        
	RETURN_LONG(value);
}

PHP_METHOD(AppKit_NS_NSSearchFieldCell_NSSearchFieldCell, setSendsSearchStringImmediately)
{
	zend_bool flag;
	zval *cell_param = NULL, *flag_param = NULL;
	zend_long cell;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(cell)
		Z_PARAM_BOOL(flag)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &cell_param, &flag_param);
	
            ns_searchfieldcell_set_sends_search_string_immediately((uintptr_t) cell, flag ? 1 : 0);
        
}

PHP_METHOD(AppKit_NS_NSSearchFieldCell_NSSearchFieldCell, sendsSearchStringImmediately)
{
	zend_bool result = 0;
	zval *cell_param = NULL;
	zend_long cell;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(cell)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &cell_param);
	
            result = ns_searchfieldcell_sends_search_string_immediately((uintptr_t) cell) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSSearchFieldCell_NSSearchFieldCell, searchButtonCell)
{
	zval *cell_param = NULL;
	zend_long cell, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(cell)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &cell_param);
	
            handle = (zend_long) ns_searchfieldcell_search_button_cell((uintptr_t) cell);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSSearchFieldCell_NSSearchFieldCell, cancelButtonCell)
{
	zval *cell_param = NULL;
	zend_long cell, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(cell)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &cell_param);
	
            handle = (zend_long) ns_searchfieldcell_cancel_button_cell((uintptr_t) cell);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSSearchFieldCell_NSSearchFieldCell, resetSearchButtonCell)
{
	zval *cell_param = NULL;
	zend_long cell;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(cell)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &cell_param);
	
            ns_searchfieldcell_reset_search_button_cell((uintptr_t) cell);
        
}

PHP_METHOD(AppKit_NS_NSSearchFieldCell_NSSearchFieldCell, resetCancelButtonCell)
{
	zval *cell_param = NULL;
	zend_long cell;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(cell)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &cell_param);
	
            ns_searchfieldcell_reset_cancel_button_cell((uintptr_t) cell);
        
}

PHP_METHOD(AppKit_NS_NSSearchFieldCell_NSSearchFieldCell, setSearchMenuTemplate)
{
	zval *cell_param = NULL, *menu_param = NULL;
	zend_long cell, menu;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(cell)
		Z_PARAM_LONG(menu)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &cell_param, &menu_param);
	
            ns_searchfieldcell_set_search_menu_template((uintptr_t) cell, (uintptr_t) menu);
        
}

PHP_METHOD(AppKit_NS_NSSearchFieldCell_NSSearchFieldCell, searchMenuTemplate)
{
	zval *cell_param = NULL;
	zend_long cell, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(cell)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &cell_param);
	
            handle = (zend_long) ns_searchfieldcell_search_menu_template((uintptr_t) cell);
        
	RETURN_LONG(handle);
}

