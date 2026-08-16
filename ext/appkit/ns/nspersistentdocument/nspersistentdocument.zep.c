
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

#include "ns-persistentdocument.h"
#include <stdint.h>



/**
 * NSPersistentDocument Core Data document subclass.
 */
ZEPHIR_INIT_CLASS(AppKit_NS_NSPersistentDocument_NSPersistentDocument)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSPersistentDocument, NSPersistentDocument, appkit, ns_nspersistentdocument_nspersistentdocument, appkit_ns_nspersistentdocument_nspersistentdocument_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSPersistentDocument_NSPersistentDocument, create)
{
	zend_long handle = 0;
	
            handle = (zend_long) ns_persistentdocument_create();
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSPersistentDocument_NSPersistentDocument, wrap)
{
	zval *nsPersistentDocumentPtr_param = NULL;
	zend_long nsPersistentDocumentPtr, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(nsPersistentDocumentPtr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &nsPersistentDocumentPtr_param);
	
            handle = (zend_long) ns_persistentdocument_wrap((void *)(uintptr_t) nsPersistentDocumentPtr);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSPersistentDocument_NSPersistentDocument, destroy)
{
	zval *document_param = NULL;
	zend_long document;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(document)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &document_param);
	
            ns_persistentdocument_destroy((uintptr_t) document);
        
}

PHP_METHOD(AppKit_NS_NSPersistentDocument_NSPersistentDocument, nsPersistentDocument)
{
	zval *document_param = NULL;
	zend_long document, ptr = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(document)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &document_param);
	
            ptr = (zend_long)(uintptr_t) ns_persistentdocument_nspersistentdocument((uintptr_t) document);
        
	RETURN_LONG(ptr);
}

PHP_METHOD(AppKit_NS_NSPersistentDocument_NSPersistentDocument, managedObjectContext)
{
	zval *document_param = NULL;
	zend_long document, ptr = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(document)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &document_param);
	
            ptr = (zend_long)(uintptr_t) ns_persistentdocument_managed_object_context((uintptr_t) document);
        
	RETURN_LONG(ptr);
}

PHP_METHOD(AppKit_NS_NSPersistentDocument_NSPersistentDocument, managedObjectModel)
{
	zval *document_param = NULL;
	zend_long document, ptr = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(document)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &document_param);
	
            ptr = (zend_long)(uintptr_t) ns_persistentdocument_managed_object_model((uintptr_t) document);
        
	RETURN_LONG(ptr);
}

PHP_METHOD(AppKit_NS_NSPersistentDocument_NSPersistentDocument, persistentStoreTypeForFileType)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval fileType;
	zval *document_param = NULL, *fileType_param = NULL;
	zend_long document;

	ZVAL_UNDEF(&fileType);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(document)
		Z_PARAM_STR(fileType)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &document_param, &fileType_param);
	zephir_get_strval(&fileType, fileType_param);
	
            char buf[4096];
            buf[0] = '\0';
            if (ns_persistentdocument_persistent_store_type_for_file_type((uintptr_t) document, Z_STRVAL(fileType), buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        
	RETURN_MM_STRING("");
}

PHP_METHOD(AppKit_NS_NSPersistentDocument_NSPersistentDocument, readFromURL)
{
	zend_bool result = 0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval url, typeName;
	zval *document_param = NULL, *url_param = NULL, *typeName_param = NULL;
	zend_long document;

	ZVAL_UNDEF(&url);
	ZVAL_UNDEF(&typeName);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(document)
		Z_PARAM_STR(url)
		Z_PARAM_STR(typeName)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &document_param, &url_param, &typeName_param);
	zephir_get_strval(&url, url_param);
	zephir_get_strval(&typeName, typeName_param);
	
            result = ns_persistentdocument_read_from_url((uintptr_t) document, Z_STRVAL(url), Z_STRVAL(typeName)) == 1;
        
	RETURN_MM_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSPersistentDocument_NSPersistentDocument, writeToURL)
{
	zend_bool result = 0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval url, typeName, originalURL;
	zval *document_param = NULL, *url_param = NULL, *typeName_param = NULL, *saveOperation_param = NULL, *originalURL_param = NULL;
	zend_long document, saveOperation;

	ZVAL_UNDEF(&url);
	ZVAL_UNDEF(&typeName);
	ZVAL_UNDEF(&originalURL);
	ZEND_PARSE_PARAMETERS_START(4, 5)
		Z_PARAM_LONG(document)
		Z_PARAM_STR(url)
		Z_PARAM_STR(typeName)
		Z_PARAM_LONG(saveOperation)
		Z_PARAM_OPTIONAL
		Z_PARAM_STR(originalURL)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 1, &document_param, &url_param, &typeName_param, &saveOperation_param, &originalURL_param);
	zephir_get_strval(&url, url_param);
	zephir_get_strval(&typeName, typeName_param);
	if (!originalURL_param) {
		ZEPHIR_INIT_VAR(&originalURL);
		ZVAL_STRING(&originalURL, "");
	} else {
		zephir_get_strval(&originalURL, originalURL_param);
	}
	
            const char *original = Z_STRLEN(originalURL) > 0 ? Z_STRVAL(originalURL) : NULL;
            result = ns_persistentdocument_write_to_url((uintptr_t) document, Z_STRVAL(url), Z_STRVAL(typeName), (unsigned) saveOperation, original) == 1;
        
	RETURN_MM_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSPersistentDocument_NSPersistentDocument, revertToContentsOfURL)
{
	zend_bool result = 0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval url, typeName;
	zval *document_param = NULL, *url_param = NULL, *typeName_param = NULL;
	zend_long document;

	ZVAL_UNDEF(&url);
	ZVAL_UNDEF(&typeName);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(document)
		Z_PARAM_STR(url)
		Z_PARAM_STR(typeName)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &document_param, &url_param, &typeName_param);
	zephir_get_strval(&url, url_param);
	zephir_get_strval(&typeName, typeName_param);
	
            result = ns_persistentdocument_revert_to_contents_of_url((uintptr_t) document, Z_STRVAL(url), Z_STRVAL(typeName)) == 1;
        
	RETURN_MM_BOOL(result);
}

