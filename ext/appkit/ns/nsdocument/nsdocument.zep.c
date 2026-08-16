
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

#include "ns-document.h"
#include <stdint.h>



/**
 * NSDocument document-based app model object.
 */
ZEPHIR_INIT_CLASS(AppKit_NS_NSDocument_NSDocument)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSDocument, NSDocument, appkit, ns_nsdocument_nsdocument, appkit_ns_nsdocument_nsdocument_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSDocument_NSDocument, create)
{
	zend_long handle = 0;
	
            handle = (zend_long) ns_document_create();
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSDocument_NSDocument, wrap)
{
	zval *nsDocumentPtr_param = NULL;
	zend_long nsDocumentPtr, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(nsDocumentPtr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &nsDocumentPtr_param);
	
            handle = (zend_long) ns_document_wrap((void *)(uintptr_t) nsDocumentPtr);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSDocument_NSDocument, destroy)
{
	zval *document_param = NULL;
	zend_long document;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(document)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &document_param);
	
            ns_document_destroy((uintptr_t) document);
        
}

PHP_METHOD(AppKit_NS_NSDocument_NSDocument, nsDocument)
{
	zval *document_param = NULL;
	zend_long document, ptr = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(document)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &document_param);
	
            ptr = (zend_long)(uintptr_t) ns_document_nsdocument((uintptr_t) document);
        
	RETURN_LONG(ptr);
}

PHP_METHOD(AppKit_NS_NSDocument_NSDocument, initWithType)
{
	zend_long handle = 0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *typeName_param = NULL;
	zval typeName;

	ZVAL_UNDEF(&typeName);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(typeName)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &typeName_param);
	zephir_get_strval(&typeName, typeName_param);
	
            handle = (zend_long) ns_document_init_with_type(Z_STRVAL(typeName));
        
	RETURN_MM_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSDocument_NSDocument, initWithContentsOfURL)
{
	zend_long handle = 0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *url_param = NULL, *typeName_param = NULL;
	zval url, typeName;

	ZVAL_UNDEF(&url);
	ZVAL_UNDEF(&typeName);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_STR(url)
		Z_PARAM_STR(typeName)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &url_param, &typeName_param);
	zephir_get_strval(&url, url_param);
	zephir_get_strval(&typeName, typeName_param);
	
            handle = (zend_long) ns_document_init_with_contents_of_url(Z_STRVAL(url), Z_STRVAL(typeName));
        
	RETURN_MM_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSDocument_NSDocument, getFileType)
{
	zval *document_param = NULL;
	zend_long document;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(document)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &document_param);
	
            char buf[4096];
            buf[0] = '\0';
            if (ns_document_get_file_type((uintptr_t) document, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        
	RETURN_STRING("");
}

PHP_METHOD(AppKit_NS_NSDocument_NSDocument, setFileType)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval typeName;
	zval *document_param = NULL, *typeName_param = NULL;
	zend_long document;

	ZVAL_UNDEF(&typeName);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(document)
		Z_PARAM_STR(typeName)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &document_param, &typeName_param);
	zephir_get_strval(&typeName, typeName_param);
	
            ns_document_set_file_type((uintptr_t) document, Z_STRVAL(typeName));
        
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSDocument_NSDocument, getFileURL)
{
	zval *document_param = NULL;
	zend_long document;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(document)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &document_param);
	
            char buf[4096];
            buf[0] = '\0';
            if (ns_document_get_file_url((uintptr_t) document, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        
	RETURN_STRING("");
}

PHP_METHOD(AppKit_NS_NSDocument_NSDocument, setFileURL)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval url;
	zval *document_param = NULL, *url_param = NULL;
	zend_long document;

	ZVAL_UNDEF(&url);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(document)
		Z_PARAM_STR(url)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &document_param, &url_param);
	zephir_get_strval(&url, url_param);
	
            ns_document_set_file_url((uintptr_t) document, Z_STRVAL(url));
        
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSDocument_NSDocument, getDisplayName)
{
	zval *document_param = NULL;
	zend_long document;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(document)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &document_param);
	
            char buf[4096];
            buf[0] = '\0';
            if (ns_document_get_display_name((uintptr_t) document, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        
	RETURN_STRING("");
}

PHP_METHOD(AppKit_NS_NSDocument_NSDocument, setDisplayName)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval name;
	zval *document_param = NULL, *name_param = NULL;
	zend_long document;

	ZVAL_UNDEF(&name);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(document)
		Z_PARAM_STR(name)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &document_param, &name_param);
	zephir_get_strval(&name, name_param);
	
            ns_document_set_display_name((uintptr_t) document, Z_STRVAL(name));
        
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSDocument_NSDocument, isDocumentEdited)
{
	zend_bool result = 0;
	zval *document_param = NULL;
	zend_long document;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(document)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &document_param);
	
            result = ns_document_is_document_edited((uintptr_t) document) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSDocument_NSDocument, hasUnautosavedChanges)
{
	zend_bool result = 0;
	zval *document_param = NULL;
	zend_long document;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(document)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &document_param);
	
            result = ns_document_has_unautosaved_changes((uintptr_t) document) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSDocument_NSDocument, isDraft)
{
	zend_bool result = 0;
	zval *document_param = NULL;
	zend_long document;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(document)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &document_param);
	
            result = ns_document_is_draft((uintptr_t) document) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSDocument_NSDocument, setDraft)
{
	zend_bool draft;
	zval *document_param = NULL, *draft_param = NULL;
	zend_long document;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(document)
		Z_PARAM_BOOL(draft)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &document_param, &draft_param);
	
            ns_document_set_draft((uintptr_t) document, draft ? 1 : 0);
        
}

PHP_METHOD(AppKit_NS_NSDocument_NSDocument, isEntireFileLoaded)
{
	zend_bool result = 0;
	zval *document_param = NULL;
	zend_long document;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(document)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &document_param);
	
            result = ns_document_is_entire_file_loaded((uintptr_t) document) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSDocument_NSDocument, updateChangeCount)
{
	zval *document_param = NULL, *changeType_param = NULL;
	zend_long document, changeType;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(document)
		Z_PARAM_LONG(changeType)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &document_param, &changeType_param);
	
            ns_document_update_change_count((uintptr_t) document, (unsigned) changeType);
        
}

PHP_METHOD(AppKit_NS_NSDocument_NSDocument, close)
{
	zval *document_param = NULL;
	zend_long document;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(document)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &document_param);
	
            ns_document_close((uintptr_t) document);
        
}

PHP_METHOD(AppKit_NS_NSDocument_NSDocument, makeWindowControllers)
{
	zval *document_param = NULL;
	zend_long document;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(document)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &document_param);
	
            ns_document_make_window_controllers((uintptr_t) document);
        
}

PHP_METHOD(AppKit_NS_NSDocument_NSDocument, showWindows)
{
	zval *document_param = NULL;
	zend_long document;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(document)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &document_param);
	
            ns_document_show_windows((uintptr_t) document);
        
}

PHP_METHOD(AppKit_NS_NSDocument_NSDocument, windowControllersCount)
{
	zval *document_param = NULL;
	zend_long document, count = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(document)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &document_param);
	
            count = ns_document_window_controllers_count((uintptr_t) document);
        
	RETURN_LONG(count);
}

PHP_METHOD(AppKit_NS_NSDocument_NSDocument, windowControllerAt)
{
	zval *document_param = NULL, *index_param = NULL;
	zend_long document, index, handle = 0;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(document)
		Z_PARAM_LONG(index)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &document_param, &index_param);
	
            handle = (zend_long) ns_document_window_controller_at((uintptr_t) document, (int) index);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSDocument_NSDocument, addWindowController)
{
	zval *document_param = NULL, *windowController_param = NULL;
	zend_long document, windowController;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(document)
		Z_PARAM_LONG(windowController)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &document_param, &windowController_param);
	
            ns_document_add_window_controller((uintptr_t) document, (uintptr_t) windowController);
        
}

PHP_METHOD(AppKit_NS_NSDocument_NSDocument, removeWindowController)
{
	zval *document_param = NULL, *windowController_param = NULL;
	zend_long document, windowController;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(document)
		Z_PARAM_LONG(windowController)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &document_param, &windowController_param);
	
            ns_document_remove_window_controller((uintptr_t) document, (uintptr_t) windowController);
        
}

PHP_METHOD(AppKit_NS_NSDocument_NSDocument, readFromURL)
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
	
            result = ns_document_read_from_url((uintptr_t) document, Z_STRVAL(url), Z_STRVAL(typeName)) == 1;
        
	RETURN_MM_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSDocument_NSDocument, writeToURL)
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
	
            result = ns_document_write_to_url((uintptr_t) document, Z_STRVAL(url), Z_STRVAL(typeName)) == 1;
        
	RETURN_MM_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSDocument_NSDocument, revertToContentsOfURL)
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
	
            result = ns_document_revert_to_contents_of_url((uintptr_t) document, Z_STRVAL(url), Z_STRVAL(typeName)) == 1;
        
	RETURN_MM_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSDocument_NSDocument, getWindowNibName)
{
	zval *document_param = NULL;
	zend_long document;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(document)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &document_param);
	
            char buf[4096];
            buf[0] = '\0';
            if (ns_document_get_window_nib_name((uintptr_t) document, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        
	RETURN_STRING("");
}

PHP_METHOD(AppKit_NS_NSDocument_NSDocument, getAutosavingFileType)
{
	zval *document_param = NULL;
	zend_long document;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(document)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &document_param);
	
            char buf[4096];
            buf[0] = '\0';
            if (ns_document_get_autosaving_file_type((uintptr_t) document, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        
	RETURN_STRING("");
}

