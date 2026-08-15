
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

#include "ns-textstorage.h"
#include <stdint.h>



/**
 * NSTextStorage — mutable attributed string backing layout.
 */
ZEPHIR_INIT_CLASS(AppKit_NS_NSTextStorage_NSTextStorage)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSTextStorage, NSTextStorage, appkit, ns_nstextstorage_nstextstorage, appkit_ns_nstextstorage_nstextstorage_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSTextStorage_NSTextStorage, create)
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
	
            handle = (zend_long) ns_textstorage_create(Z_STRVAL(value));
        
	RETURN_MM_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSTextStorage_NSTextStorage, wrap)
{
	zval *nsTextStoragePtr_param = NULL;
	zend_long nsTextStoragePtr, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(nsTextStoragePtr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &nsTextStoragePtr_param);
	
            handle = (zend_long) ns_textstorage_wrap((void *)(uintptr_t) nsTextStoragePtr);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSTextStorage_NSTextStorage, destroy)
{
	zval *storage_param = NULL;
	zend_long storage;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(storage)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &storage_param);
	
            ns_textstorage_destroy((uintptr_t) storage);
        
}

PHP_METHOD(AppKit_NS_NSTextStorage_NSTextStorage, nsTextStorage)
{
	zval *storage_param = NULL;
	zend_long storage, ptr = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(storage)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &storage_param);
	
            ptr = (zend_long)(uintptr_t) ns_textstorage_nstextstorage((uintptr_t) storage);
        
	RETURN_LONG(ptr);
}

PHP_METHOD(AppKit_NS_NSTextStorage_NSTextStorage, setString)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval value;
	zval *storage_param = NULL, *value_param = NULL;
	zend_long storage;

	ZVAL_UNDEF(&value);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(storage)
		Z_PARAM_STR(value)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &storage_param, &value_param);
	zephir_get_strval(&value, value_param);
	
            ns_textstorage_set_string((uintptr_t) storage, Z_STRVAL(value));
        
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSTextStorage_NSTextStorage, getString)
{
	zval *storage_param = NULL;
	zend_long storage;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(storage)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &storage_param);
	
            char buf[4096];
            buf[0] = '\0';
            if (ns_textstorage_get_string((uintptr_t) storage, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        
	RETURN_STRING("");
}

PHP_METHOD(AppKit_NS_NSTextStorage_NSTextStorage, addLayoutManager)
{
	zval *storage_param = NULL, *manager_param = NULL;
	zend_long storage, manager;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(storage)
		Z_PARAM_LONG(manager)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &storage_param, &manager_param);
	
            ns_textstorage_add_layout_manager((uintptr_t) storage, (uintptr_t) manager);
        
}

PHP_METHOD(AppKit_NS_NSTextStorage_NSTextStorage, removeLayoutManager)
{
	zval *storage_param = NULL, *manager_param = NULL;
	zend_long storage, manager;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(storage)
		Z_PARAM_LONG(manager)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &storage_param, &manager_param);
	
            ns_textstorage_remove_layout_manager((uintptr_t) storage, (uintptr_t) manager);
        
}

PHP_METHOD(AppKit_NS_NSTextStorage_NSTextStorage, layoutManagersCount)
{
	zval *storage_param = NULL;
	zend_long storage, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(storage)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &storage_param);
	
            value = (zend_long) ns_textstorage_layout_managers_count((uintptr_t) storage);
        
	RETURN_LONG(value);
}

PHP_METHOD(AppKit_NS_NSTextStorage_NSTextStorage, editedMask)
{
	zval *storage_param = NULL;
	zend_long storage, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(storage)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &storage_param);
	
            value = (zend_long) ns_textstorage_edited_mask((uintptr_t) storage);
        
	RETURN_LONG(value);
}

/**
 * @return array [location, length]
 */
PHP_METHOD(AppKit_NS_NSTextStorage_NSTextStorage, getEditedRange)
{
	zval out;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *storage_param = NULL;
	zend_long storage;

	ZVAL_UNDEF(&out);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(storage)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &storage_param);
	ZEPHIR_INIT_VAR(&out);
	array_init(&out);
	
            int location = 0, length = 0;
            ns_textstorage_get_edited_range((uintptr_t) storage, &location, &length);
            add_next_index_long(&out, location);
            add_next_index_long(&out, length);
        
	RETURN_CTOR(&out);
}

PHP_METHOD(AppKit_NS_NSTextStorage_NSTextStorage, changeInLength)
{
	zval *storage_param = NULL;
	zend_long storage, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(storage)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &storage_param);
	
            value = (zend_long) ns_textstorage_change_in_length((uintptr_t) storage);
        
	RETURN_LONG(value);
}

PHP_METHOD(AppKit_NS_NSTextStorage_NSTextStorage, beginEditing)
{
	zval *storage_param = NULL;
	zend_long storage;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(storage)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &storage_param);
	
            ns_textstorage_begin_editing((uintptr_t) storage);
        
}

PHP_METHOD(AppKit_NS_NSTextStorage_NSTextStorage, endEditing)
{
	zval *storage_param = NULL;
	zend_long storage;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(storage)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &storage_param);
	
            ns_textstorage_end_editing((uintptr_t) storage);
        
}

PHP_METHOD(AppKit_NS_NSTextStorage_NSTextStorage, processEditing)
{
	zval *storage_param = NULL;
	zend_long storage;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(storage)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &storage_param);
	
            ns_textstorage_process_editing((uintptr_t) storage);
        
}

PHP_METHOD(AppKit_NS_NSTextStorage_NSTextStorage, setFixesAttributesLazily)
{
	zend_bool flag;
	zval *storage_param = NULL, *flag_param = NULL;
	zend_long storage;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(storage)
		Z_PARAM_BOOL(flag)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &storage_param, &flag_param);
	
            ns_textstorage_set_fixes_attributes_lazily((uintptr_t) storage, flag ? 1 : 0);
        
}

PHP_METHOD(AppKit_NS_NSTextStorage_NSTextStorage, fixesAttributesLazily)
{
	zend_bool result = 0;
	zval *storage_param = NULL;
	zend_long storage;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(storage)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &storage_param);
	
            result = ns_textstorage_fixes_attributes_lazily((uintptr_t) storage) == 1;
        
	RETURN_BOOL(result);
}

