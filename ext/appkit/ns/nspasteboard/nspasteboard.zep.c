
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

#include "ns-pasteboard.h"
#include <stdint.h>



/** NSPasteboard — system pasteboard read/write. */
ZEPHIR_INIT_CLASS(AppKit_NS_NSPasteboard_NSPasteboard)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSPasteboard, NSPasteboard, appkit, ns_nspasteboard_nspasteboard, appkit_ns_nspasteboard_nspasteboard_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSPasteboard_NSPasteboard, general)
{
	zend_long handle = 0;
	
            handle = (zend_long) ns_pasteboard_general();
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSPasteboard_NSPasteboard, withName)
{
	zend_long handle = 0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *name_param = NULL;
	zval name;

	ZVAL_UNDEF(&name);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(name)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &name_param);
	zephir_get_strval(&name, name_param);
	
            handle = (zend_long) ns_pasteboard_with_name(Z_STRVAL(name));
        
	RETURN_MM_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSPasteboard_NSPasteboard, withUniqueName)
{
	zend_long handle = 0;
	
            handle = (zend_long) ns_pasteboard_with_unique_name();
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSPasteboard_NSPasteboard, wrap)
{
	zval *nsPasteboardPtr_param = NULL;
	zend_long nsPasteboardPtr, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(nsPasteboardPtr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &nsPasteboardPtr_param);
	
            handle = (zend_long) ns_pasteboard_wrap((void *)(uintptr_t) nsPasteboardPtr);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSPasteboard_NSPasteboard, destroy)
{
	zval *pasteboard_param = NULL;
	zend_long pasteboard;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(pasteboard)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &pasteboard_param);
	
            ns_pasteboard_destroy((uintptr_t) pasteboard);
        
}

PHP_METHOD(AppKit_NS_NSPasteboard_NSPasteboard, nsPasteboard)
{
	zval *pasteboard_param = NULL;
	zend_long pasteboard, ptr = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(pasteboard)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &pasteboard_param);
	
            ptr = (zend_long)(uintptr_t) ns_pasteboard_nspasteboard((uintptr_t) pasteboard);
        
	RETURN_LONG(ptr);
}

PHP_METHOD(AppKit_NS_NSPasteboard_NSPasteboard, getName)
{
	zval *pasteboard_param = NULL;
	zend_long pasteboard;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(pasteboard)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &pasteboard_param);
	
            char buf[4096];
            buf[0] = '\0';
            if (ns_pasteboard_name((uintptr_t) pasteboard, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        
	RETURN_STRING("");
}

PHP_METHOD(AppKit_NS_NSPasteboard_NSPasteboard, changeCount)
{
	zval *pasteboard_param = NULL;
	zend_long pasteboard, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(pasteboard)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &pasteboard_param);
	
            value = (zend_long) ns_pasteboard_change_count((uintptr_t) pasteboard);
        
	RETURN_LONG(value);
}

PHP_METHOD(AppKit_NS_NSPasteboard_NSPasteboard, clearContents)
{
	zval *pasteboard_param = NULL;
	zend_long pasteboard, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(pasteboard)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &pasteboard_param);
	
            value = (zend_long) ns_pasteboard_clear_contents((uintptr_t) pasteboard);
        
	RETURN_LONG(value);
}

PHP_METHOD(AppKit_NS_NSPasteboard_NSPasteboard, writeStrings)
{
	zend_bool result = 0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval type;
	zval strings;
	zval *pasteboard_param = NULL, *strings_param = NULL, *type_param = NULL;
	zend_long pasteboard;

	ZVAL_UNDEF(&strings);
	ZVAL_UNDEF(&type);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(pasteboard)
		Z_PARAM_ARRAY(strings)
		Z_PARAM_STR(type)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &pasteboard_param, &strings_param, &type_param);
	zephir_get_arrval(&strings, strings_param);
	zephir_get_strval(&type, type_param);
	
            zval *entry;
            const char *cstrings[256];
            int count = 0;
            ZEND_HASH_FOREACH_VAL(Z_ARRVAL(strings), entry) {
                if (count >= 256) {
                    break;
                }
                convert_to_string(entry);
                cstrings[count++] = Z_STRVAL_P(entry);
            } ZEND_HASH_FOREACH_END();
            result = ns_pasteboard_write_strings((uintptr_t) pasteboard, cstrings, count, Z_STRVAL(type)) == 1;
        
	RETURN_MM_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSPasteboard_NSPasteboard, stringForType)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval type;
	zval *pasteboard_param = NULL, *type_param = NULL;
	zend_long pasteboard;

	ZVAL_UNDEF(&type);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(pasteboard)
		Z_PARAM_STR(type)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &pasteboard_param, &type_param);
	zephir_get_strval(&type, type_param);
	
            char buf[65536];
            buf[0] = '\0';
            if (ns_pasteboard_string_for_type((uintptr_t) pasteboard, Z_STRVAL(type), buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        
	RETURN_MM_STRING("");
}

PHP_METHOD(AppKit_NS_NSPasteboard_NSPasteboard, setString)
{
	zend_bool result = 0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval value, type;
	zval *pasteboard_param = NULL, *value_param = NULL, *type_param = NULL;
	zend_long pasteboard;

	ZVAL_UNDEF(&value);
	ZVAL_UNDEF(&type);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(pasteboard)
		Z_PARAM_STR(value)
		Z_PARAM_STR(type)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &pasteboard_param, &value_param, &type_param);
	zephir_get_strval(&value, value_param);
	zephir_get_strval(&type, type_param);
	
            result = ns_pasteboard_set_string((uintptr_t) pasteboard, Z_STRVAL(value), Z_STRVAL(type)) == 1;
        
	RETURN_MM_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSPasteboard_NSPasteboard, types)
{
	zval out;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *pasteboard_param = NULL;
	zend_long pasteboard;

	ZVAL_UNDEF(&out);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(pasteboard)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &pasteboard_param);
	ZEPHIR_INIT_VAR(&out);
	array_init(&out);
	
            int count = ns_pasteboard_types_count((uintptr_t) pasteboard);
            int i;
            for (i = 0; i < count; i++) {
                char buf[4096];
                buf[0] = '\0';
                if (ns_pasteboard_type_at((uintptr_t) pasteboard, i, buf, (int) sizeof(buf))) {
                    add_next_index_string(&out, buf);
                }
            }
        
	RETURN_CTOR(&out);
}

PHP_METHOD(AppKit_NS_NSPasteboard_NSPasteboard, canReadTypes)
{
	zend_bool result = 0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval types;
	zval *pasteboard_param = NULL, *types_param = NULL;
	zend_long pasteboard;

	ZVAL_UNDEF(&types);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(pasteboard)
		Z_PARAM_ARRAY(types)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &pasteboard_param, &types_param);
	zephir_get_arrval(&types, types_param);
	
            zval *entry;
            const char *cstrings[256];
            int count = 0;
            ZEND_HASH_FOREACH_VAL(Z_ARRVAL(types), entry) {
                if (count >= 256) {
                    break;
                }
                convert_to_string(entry);
                cstrings[count++] = Z_STRVAL_P(entry);
            } ZEND_HASH_FOREACH_END();
            result = ns_pasteboard_can_read_types((uintptr_t) pasteboard, cstrings, count) == 1;
        
	RETURN_MM_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSPasteboard_NSPasteboard, itemsCount)
{
	zval *pasteboard_param = NULL;
	zend_long pasteboard, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(pasteboard)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &pasteboard_param);
	
            value = (zend_long) ns_pasteboard_items_count((uintptr_t) pasteboard);
        
	RETURN_LONG(value);
}

PHP_METHOD(AppKit_NS_NSPasteboard_NSPasteboard, itemAt)
{
	zval *pasteboard_param = NULL, *index_param = NULL;
	zend_long pasteboard, index, handle = 0;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(pasteboard)
		Z_PARAM_LONG(index)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &pasteboard_param, &index_param);
	
            handle = (zend_long) ns_pasteboard_item_at((uintptr_t) pasteboard, index);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSPasteboard_NSPasteboard, accessBehavior)
{
	zval *pasteboard_param = NULL;
	zend_long pasteboard, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(pasteboard)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &pasteboard_param);
	
            value = (zend_long) ns_pasteboard_access_behavior((uintptr_t) pasteboard);
        
	RETURN_LONG(value);
}

