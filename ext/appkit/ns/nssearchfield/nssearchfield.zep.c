
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

#include "ns-searchfield.h"
#include <stdint.h>



/**
 * NSSearchField — search field with recents.
 */
ZEPHIR_INIT_CLASS(AppKit_NS_NSSearchField_NSSearchField)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSSearchField, NSSearchField, appkit, ns_nssearchfield_nssearchfield, appkit_ns_nssearchfield_nssearchfield_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSSearchField_NSSearchField, create)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval value;
	zval *x_param = NULL, *y_param = NULL, *width_param = NULL, *height_param = NULL, *value_param = NULL;
	zend_long x, y, width, height, handle = 0;

	ZVAL_UNDEF(&value);
	ZEND_PARSE_PARAMETERS_START(4, 5)
		Z_PARAM_LONG(x)
		Z_PARAM_LONG(y)
		Z_PARAM_LONG(width)
		Z_PARAM_LONG(height)
		Z_PARAM_OPTIONAL
		Z_PARAM_STR(value)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 1, &x_param, &y_param, &width_param, &height_param, &value_param);
	if (!value_param) {
		ZEPHIR_INIT_VAR(&value);
		ZVAL_STRING(&value, "");
	} else {
		zephir_get_strval(&value, value_param);
	}
	
            handle = (zend_long) ns_searchfield_create((double) x, (double) y, (double) width, (double) height, Z_STRVAL(value));
        
	RETURN_MM_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSSearchField_NSSearchField, destroy)
{
	zval *field_param = NULL;
	zend_long field;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(field)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &field_param);
	
            ns_searchfield_destroy((uintptr_t) field);
        
}

PHP_METHOD(AppKit_NS_NSSearchField_NSSearchField, setStringValue)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval value;
	zval *field_param = NULL, *value_param = NULL;
	zend_long field;

	ZVAL_UNDEF(&value);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(field)
		Z_PARAM_STR(value)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &field_param, &value_param);
	zephir_get_strval(&value, value_param);
	
            ns_searchfield_set_string((uintptr_t) field, Z_STRVAL(value));
        
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSSearchField_NSSearchField, getStringValue)
{
	zval *field_param = NULL;
	zend_long field;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(field)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &field_param);
	
            char buf[4096];
            buf[0] = '\0';
            if (ns_searchfield_get_string((uintptr_t) field, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        
	RETURN_STRING("");
}

PHP_METHOD(AppKit_NS_NSSearchField_NSSearchField, setRecentSearches)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval searches;
	zval *field_param = NULL, *searches_param = NULL;
	zend_long field;

	ZVAL_UNDEF(&searches);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(field)
		Z_PARAM_ARRAY(searches)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &field_param, &searches_param);
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
            ns_searchfield_set_recent_searches((uintptr_t) field, cnames, count);
        
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSSearchField_NSSearchField, getRecentSearches)
{
	zval out;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *field_param = NULL;
	zend_long field;

	ZVAL_UNDEF(&out);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(field)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &field_param);
	ZEPHIR_INIT_VAR(&out);
	array_init(&out);
	
            int count = ns_searchfield_recent_searches_count((uintptr_t) field);
            int i;
            for (i = 0; i < count; i++) {
                char buf[4096];
                buf[0] = '\0';
                if (ns_searchfield_recent_search_at((uintptr_t) field, i, buf, (int) sizeof(buf))) {
                    add_next_index_string(&out, buf);
                }
            }
        
	RETURN_CTOR(&out);
}

PHP_METHOD(AppKit_NS_NSSearchField_NSSearchField, setRecentsAutosaveName)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval name;
	zval *field_param = NULL, *name_param = NULL;
	zend_long field;

	ZVAL_UNDEF(&name);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(field)
		Z_PARAM_STR(name)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &field_param, &name_param);
	zephir_get_strval(&name, name_param);
	
            ns_searchfield_set_recents_autosave_name((uintptr_t) field, Z_STRVAL(name));
        
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSSearchField_NSSearchField, getRecentsAutosaveName)
{
	zval *field_param = NULL;
	zend_long field;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(field)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &field_param);
	
            char buf[4096];
            buf[0] = '\0';
            if (ns_searchfield_get_recents_autosave_name((uintptr_t) field, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        
	RETURN_STRING("");
}

PHP_METHOD(AppKit_NS_NSSearchField_NSSearchField, setSendsWholeSearchString)
{
	zend_bool flag;
	zval *field_param = NULL, *flag_param = NULL;
	zend_long field;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(field)
		Z_PARAM_BOOL(flag)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &field_param, &flag_param);
	
            ns_searchfield_set_sends_whole_search_string((uintptr_t) field, flag ? 1 : 0);
        
}

PHP_METHOD(AppKit_NS_NSSearchField_NSSearchField, sendsWholeSearchString)
{
	zend_bool result = 0;
	zval *field_param = NULL;
	zend_long field;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(field)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &field_param);
	
            result = ns_searchfield_sends_whole_search_string((uintptr_t) field) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSSearchField_NSSearchField, setMaximumRecents)
{
	zval *field_param = NULL, *maximum_param = NULL;
	zend_long field, maximum;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(field)
		Z_PARAM_LONG(maximum)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &field_param, &maximum_param);
	
            ns_searchfield_set_maximum_recents((uintptr_t) field, (int) maximum);
        
}

PHP_METHOD(AppKit_NS_NSSearchField_NSSearchField, maximumRecents)
{
	zval *field_param = NULL;
	zend_long field, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(field)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &field_param);
	
            value = (zend_long) ns_searchfield_maximum_recents((uintptr_t) field);
        
	RETURN_LONG(value);
}

PHP_METHOD(AppKit_NS_NSSearchField_NSSearchField, setSendsSearchStringImmediately)
{
	zend_bool flag;
	zval *field_param = NULL, *flag_param = NULL;
	zend_long field;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(field)
		Z_PARAM_BOOL(flag)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &field_param, &flag_param);
	
            ns_searchfield_set_sends_search_string_immediately((uintptr_t) field, flag ? 1 : 0);
        
}

PHP_METHOD(AppKit_NS_NSSearchField_NSSearchField, sendsSearchStringImmediately)
{
	zend_bool result = 0;
	zval *field_param = NULL;
	zend_long field;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(field)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &field_param);
	
            result = ns_searchfield_sends_search_string_immediately((uintptr_t) field) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSSearchField_NSSearchField, pollChange)
{
	zend_bool result = 0;
	zval *field_param = NULL;
	zend_long field;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(field)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &field_param);
	
            result = ns_searchfield_poll_change((uintptr_t) field) == 1;
        
	RETURN_BOOL(result);
}

