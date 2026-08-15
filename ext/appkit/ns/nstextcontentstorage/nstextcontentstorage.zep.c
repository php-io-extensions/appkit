
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

#include "ns-textcontentstorage.h"
#include <stdint.h>



/**
 * NSTextContentStorage — attributed-string backed content.
 */
ZEPHIR_INIT_CLASS(AppKit_NS_NSTextContentStorage_NSTextContentStorage)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSTextContentStorage, NSTextContentStorage, appkit, ns_nstextcontentstorage_nstextcontentstorage, appkit_ns_nstextcontentstorage_nstextcontentstorage_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSTextContentStorage_NSTextContentStorage, create)
{
	zend_long handle = 0;
	
            handle = (zend_long) ns_textcontentstorage_create();
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSTextContentStorage_NSTextContentStorage, wrap)
{
	zval *nsTextContentStoragePtr_param = NULL;
	zend_long nsTextContentStoragePtr, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(nsTextContentStoragePtr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &nsTextContentStoragePtr_param);
	
            handle = (zend_long) ns_textcontentstorage_wrap((void *)(uintptr_t) nsTextContentStoragePtr);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSTextContentStorage_NSTextContentStorage, destroy)
{
	zval *storage_param = NULL;
	zend_long storage;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(storage)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &storage_param);
	
            ns_textcontentstorage_destroy((uintptr_t) storage);
        
}

PHP_METHOD(AppKit_NS_NSTextContentStorage_NSTextContentStorage, getAttributedString)
{
	zval *storage_param = NULL;
	zend_long storage;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(storage)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &storage_param);
	
            char buf[4096];
            buf[0] = '\0';
            if (ns_textcontentstorage_get_attributed_string((uintptr_t) storage, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        
	RETURN_STRING("");
}

PHP_METHOD(AppKit_NS_NSTextContentStorage_NSTextContentStorage, setAttributedString)
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
	
            ns_textcontentstorage_set_attributed_string((uintptr_t) storage, Z_STRVAL(value));
        
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSTextContentStorage_NSTextContentStorage, textElementForAttributedString)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval value;
	zval *storage_param = NULL, *value_param = NULL;
	zend_long storage, handle = 0;

	ZVAL_UNDEF(&value);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(storage)
		Z_PARAM_STR(value)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &storage_param, &value_param);
	zephir_get_strval(&value, value_param);
	
            handle = (zend_long) ns_textcontentstorage_text_element_for_attributed_string((uintptr_t) storage, Z_STRVAL(value));
        
	RETURN_MM_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSTextContentStorage_NSTextContentStorage, attributedStringForTextElement)
{
	zval *storage_param = NULL, *element_param = NULL;
	zend_long storage, element;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(storage)
		Z_PARAM_LONG(element)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &storage_param, &element_param);
	
            char buf[4096];
            buf[0] = '\0';
            if (ns_textcontentstorage_attributed_string_for_text_element((uintptr_t) storage, (uintptr_t) element, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        
	RETURN_STRING("");
}

