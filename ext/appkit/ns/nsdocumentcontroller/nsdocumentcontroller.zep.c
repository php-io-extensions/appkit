
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

#include "ns-documentcontroller.h"
#include <stdint.h>



/**
 * NSDocumentController shared document registry and open/save orchestration.
 */
ZEPHIR_INIT_CLASS(AppKit_NS_NSDocumentController_NSDocumentController)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSDocumentController, NSDocumentController, appkit, ns_nsdocumentcontroller_nsdocumentcontroller, appkit_ns_nsdocumentcontroller_nsdocumentcontroller_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSDocumentController_NSDocumentController, shared)
{
	zend_long handle = 0;
	
            handle = (zend_long) ns_documentcontroller_shared();
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSDocumentController_NSDocumentController, create)
{
	zend_long handle = 0;
	
            handle = (zend_long) ns_documentcontroller_create();
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSDocumentController_NSDocumentController, wrap)
{
	zval *nsDocumentControllerPtr_param = NULL;
	zend_long nsDocumentControllerPtr, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(nsDocumentControllerPtr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &nsDocumentControllerPtr_param);
	
            handle = (zend_long) ns_documentcontroller_wrap((void *)(uintptr_t) nsDocumentControllerPtr);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSDocumentController_NSDocumentController, destroy)
{
	zval *controller_param = NULL;
	zend_long controller;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controller_param);
	
            ns_documentcontroller_destroy((uintptr_t) controller);
        
}

PHP_METHOD(AppKit_NS_NSDocumentController_NSDocumentController, nsDocumentController)
{
	zval *controller_param = NULL;
	zend_long controller, ptr = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controller_param);
	
            ptr = (zend_long)(uintptr_t) ns_documentcontroller_nsdocumentcontroller((uintptr_t) controller);
        
	RETURN_LONG(ptr);
}

PHP_METHOD(AppKit_NS_NSDocumentController_NSDocumentController, documentsCount)
{
	zval *controller_param = NULL;
	zend_long controller, count = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controller_param);
	
            count = ns_documentcontroller_documents_count((uintptr_t) controller);
        
	RETURN_LONG(count);
}

PHP_METHOD(AppKit_NS_NSDocumentController_NSDocumentController, documentAt)
{
	zval *controller_param = NULL, *index_param = NULL;
	zend_long controller, index, handle = 0;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(controller)
		Z_PARAM_LONG(index)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &controller_param, &index_param);
	
            handle = (zend_long) ns_documentcontroller_document_at((uintptr_t) controller, (int) index);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSDocumentController_NSDocumentController, currentDocument)
{
	zval *controller_param = NULL;
	zend_long controller, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controller_param);
	
            handle = (zend_long) ns_documentcontroller_current_document((uintptr_t) controller);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSDocumentController_NSDocumentController, currentDirectory)
{
	zval *controller_param = NULL;
	zend_long controller;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controller_param);
	
            char buf[4096];
            buf[0] = '\0';
            if (ns_documentcontroller_current_directory((uintptr_t) controller, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        
	RETURN_STRING("");
}

PHP_METHOD(AppKit_NS_NSDocumentController_NSDocumentController, documentForURL)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval url;
	zval *controller_param = NULL, *url_param = NULL;
	zend_long controller, handle = 0;

	ZVAL_UNDEF(&url);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(controller)
		Z_PARAM_STR(url)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &controller_param, &url_param);
	zephir_get_strval(&url, url_param);
	
            handle = (zend_long) ns_documentcontroller_document_for_url((uintptr_t) controller, Z_STRVAL(url));
        
	RETURN_MM_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSDocumentController_NSDocumentController, documentForWindow)
{
	zval *controller_param = NULL, *window_param = NULL;
	zend_long controller, window, handle = 0;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(controller)
		Z_PARAM_LONG(window)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &controller_param, &window_param);
	
            handle = (zend_long) ns_documentcontroller_document_for_window((uintptr_t) controller, (uintptr_t) window);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSDocumentController_NSDocumentController, addDocument)
{
	zval *controller_param = NULL, *document_param = NULL;
	zend_long controller, document;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(controller)
		Z_PARAM_LONG(document)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &controller_param, &document_param);
	
            ns_documentcontroller_add_document((uintptr_t) controller, (uintptr_t) document);
        
}

PHP_METHOD(AppKit_NS_NSDocumentController_NSDocumentController, removeDocument)
{
	zval *controller_param = NULL, *document_param = NULL;
	zend_long controller, document;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(controller)
		Z_PARAM_LONG(document)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &controller_param, &document_param);
	
            ns_documentcontroller_remove_document((uintptr_t) controller, (uintptr_t) document);
        
}

PHP_METHOD(AppKit_NS_NSDocumentController_NSDocumentController, defaultType)
{
	zval *controller_param = NULL;
	zend_long controller;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controller_param);
	
            char buf[4096];
            buf[0] = '\0';
            if (ns_documentcontroller_default_type((uintptr_t) controller, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        
	RETURN_STRING("");
}

PHP_METHOD(AppKit_NS_NSDocumentController_NSDocumentController, openUntitledDocumentAndDisplay)
{
	zend_bool displayDocument;
	zval *controller_param = NULL, *displayDocument_param = NULL;
	zend_long controller, handle = 0;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(controller)
		Z_PARAM_BOOL(displayDocument)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &controller_param, &displayDocument_param);
	
            handle = (zend_long) ns_documentcontroller_open_untitled_document_and_display((uintptr_t) controller, displayDocument ? 1 : 0);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSDocumentController_NSDocumentController, hasEditedDocuments)
{
	zend_bool result = 0;
	zval *controller_param = NULL;
	zend_long controller;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controller_param);
	
            result = ns_documentcontroller_has_edited_documents((uintptr_t) controller) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSDocumentController_NSDocumentController, documentClassNamesCount)
{
	zval *controller_param = NULL;
	zend_long controller, count = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controller_param);
	
            count = ns_documentcontroller_document_class_names_count((uintptr_t) controller);
        
	RETURN_LONG(count);
}

PHP_METHOD(AppKit_NS_NSDocumentController_NSDocumentController, documentClassNameAt)
{
	zval *controller_param = NULL, *index_param = NULL;
	zend_long controller, index;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(controller)
		Z_PARAM_LONG(index)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &controller_param, &index_param);
	
            char buf[4096];
            buf[0] = '\0';
            if (ns_documentcontroller_document_class_name_at((uintptr_t) controller, (int) index, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        
	RETURN_STRING("");
}

PHP_METHOD(AppKit_NS_NSDocumentController_NSDocumentController, displayNameForType)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval typeName;
	zval *controller_param = NULL, *typeName_param = NULL;
	zend_long controller;

	ZVAL_UNDEF(&typeName);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(controller)
		Z_PARAM_STR(typeName)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &controller_param, &typeName_param);
	zephir_get_strval(&typeName, typeName_param);
	
            char buf[4096];
            buf[0] = '\0';
            if (ns_documentcontroller_display_name_for_type((uintptr_t) controller, Z_STRVAL(typeName), buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        
	RETURN_MM_STRING("");
}

PHP_METHOD(AppKit_NS_NSDocumentController_NSDocumentController, recentDocumentURLsCount)
{
	zval *controller_param = NULL;
	zend_long controller, count = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controller_param);
	
            count = ns_documentcontroller_recent_document_urls_count((uintptr_t) controller);
        
	RETURN_LONG(count);
}

PHP_METHOD(AppKit_NS_NSDocumentController_NSDocumentController, recentDocumentURLAt)
{
	zval *controller_param = NULL, *index_param = NULL;
	zend_long controller, index;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(controller)
		Z_PARAM_LONG(index)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &controller_param, &index_param);
	
            char buf[4096];
            buf[0] = '\0';
            if (ns_documentcontroller_recent_document_url_at((uintptr_t) controller, (int) index, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        
	RETURN_STRING("");
}

PHP_METHOD(AppKit_NS_NSDocumentController_NSDocumentController, noteNewRecentDocument)
{
	zval *controller_param = NULL, *document_param = NULL;
	zend_long controller, document;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(controller)
		Z_PARAM_LONG(document)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &controller_param, &document_param);
	
            ns_documentcontroller_note_new_recent_document((uintptr_t) controller, (uintptr_t) document);
        
}

PHP_METHOD(AppKit_NS_NSDocumentController_NSDocumentController, noteNewRecentDocumentURL)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval url;
	zval *controller_param = NULL, *url_param = NULL;
	zend_long controller;

	ZVAL_UNDEF(&url);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(controller)
		Z_PARAM_STR(url)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &controller_param, &url_param);
	zephir_get_strval(&url, url_param);
	
            ns_documentcontroller_note_new_recent_document_url((uintptr_t) controller, Z_STRVAL(url));
        
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSDocumentController_NSDocumentController, clearRecentDocuments)
{
	zval *controller_param = NULL;
	zend_long controller;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controller_param);
	
            ns_documentcontroller_clear_recent_documents((uintptr_t) controller);
        
}

