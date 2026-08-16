
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

#include "ns-pasteboarditem.h"
#include <stdint.h>



/** NSPasteboardItem — single pasteboard item with UTI-typed payloads. */
ZEPHIR_INIT_CLASS(AppKit_NS_NSPasteboardItem_NSPasteboardItem)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSPasteboardItem, NSPasteboardItem, appkit, ns_nspasteboarditem_nspasteboarditem, appkit_ns_nspasteboarditem_nspasteboarditem_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSPasteboardItem_NSPasteboardItem, create)
{
	zend_long handle = 0;
	
            handle = (zend_long) ns_pasteboarditem_create();
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSPasteboardItem_NSPasteboardItem, wrap)
{
	zval *nsPasteboardItemPtr_param = NULL;
	zend_long nsPasteboardItemPtr, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(nsPasteboardItemPtr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &nsPasteboardItemPtr_param);
	
            handle = (zend_long) ns_pasteboarditem_wrap((void *)(uintptr_t) nsPasteboardItemPtr);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSPasteboardItem_NSPasteboardItem, destroy)
{
	zval *item_param = NULL;
	zend_long item;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &item_param);
	
            ns_pasteboarditem_destroy((uintptr_t) item);
        
}

PHP_METHOD(AppKit_NS_NSPasteboardItem_NSPasteboardItem, nsPasteboardItem)
{
	zval *item_param = NULL;
	zend_long item, ptr = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &item_param);
	
            ptr = (zend_long)(uintptr_t) ns_pasteboarditem_nspasteboarditem((uintptr_t) item);
        
	RETURN_LONG(ptr);
}

PHP_METHOD(AppKit_NS_NSPasteboardItem_NSPasteboardItem, types)
{
	zval out;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *item_param = NULL;
	zend_long item;

	ZVAL_UNDEF(&out);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &item_param);
	ZEPHIR_INIT_VAR(&out);
	array_init(&out);
	
            int count = ns_pasteboarditem_types_count((uintptr_t) item);
            int i;
            for (i = 0; i < count; i++) {
                char buf[4096];
                buf[0] = '\0';
                if (ns_pasteboarditem_type_at((uintptr_t) item, i, buf, (int) sizeof(buf))) {
                    add_next_index_string(&out, buf);
                }
            }
        
	RETURN_CTOR(&out);
}

PHP_METHOD(AppKit_NS_NSPasteboardItem_NSPasteboardItem, availableTypeFromArray)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval types;
	zval *item_param = NULL, *types_param = NULL;
	zend_long item;

	ZVAL_UNDEF(&types);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(item)
		Z_PARAM_ARRAY(types)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &item_param, &types_param);
	zephir_get_arrval(&types, types_param);
	
            zval *entry;
            const char *cstrings[256];
            int count = 0;
            char buf[4096];
            buf[0] = '\0';
            ZEND_HASH_FOREACH_VAL(Z_ARRVAL(types), entry) {
                if (count >= 256) {
                    break;
                }
                convert_to_string(entry);
                cstrings[count++] = Z_STRVAL_P(entry);
            } ZEND_HASH_FOREACH_END();
            if (ns_pasteboarditem_available_type_from_array((uintptr_t) item, cstrings, count, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        
	RETURN_MM_STRING("");
}

PHP_METHOD(AppKit_NS_NSPasteboardItem_NSPasteboardItem, setString)
{
	zend_bool result = 0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval value, type;
	zval *item_param = NULL, *value_param = NULL, *type_param = NULL;
	zend_long item;

	ZVAL_UNDEF(&value);
	ZVAL_UNDEF(&type);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(item)
		Z_PARAM_STR(value)
		Z_PARAM_STR(type)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &item_param, &value_param, &type_param);
	zephir_get_strval(&value, value_param);
	zephir_get_strval(&type, type_param);
	
            result = ns_pasteboarditem_set_string((uintptr_t) item, Z_STRVAL(value), Z_STRVAL(type)) == 1;
        
	RETURN_MM_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSPasteboardItem_NSPasteboardItem, stringForType)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval type;
	zval *item_param = NULL, *type_param = NULL;
	zend_long item;

	ZVAL_UNDEF(&type);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(item)
		Z_PARAM_STR(type)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &item_param, &type_param);
	zephir_get_strval(&type, type_param);
	
            char buf[65536];
            buf[0] = '\0';
            if (ns_pasteboarditem_string_for_type((uintptr_t) item, Z_STRVAL(type), buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        
	RETURN_MM_STRING("");
}

