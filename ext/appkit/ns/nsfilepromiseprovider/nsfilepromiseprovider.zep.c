
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

#include "ns-filepromiseprovider.h"
#include <stdint.h>



/** NSFilePromiseProvider — promised file drag source. */
ZEPHIR_INIT_CLASS(AppKit_NS_NSFilePromiseProvider_NSFilePromiseProvider)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSFilePromiseProvider, NSFilePromiseProvider, appkit, ns_nsfilepromiseprovider_nsfilepromiseprovider, appkit_ns_nsfilepromiseprovider_nsfilepromiseprovider_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSFilePromiseProvider_NSFilePromiseProvider, create)
{
	zend_long handle = 0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *fileType_param = NULL;
	zval fileType;

	ZVAL_UNDEF(&fileType);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(fileType)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &fileType_param);
	zephir_get_strval(&fileType, fileType_param);
	
            handle = (zend_long) ns_filepromiseprovider_create(Z_STRVAL(fileType));
        
	RETURN_MM_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSFilePromiseProvider_NSFilePromiseProvider, wrap)
{
	zval *nsFilePromiseProviderPtr_param = NULL;
	zend_long nsFilePromiseProviderPtr, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(nsFilePromiseProviderPtr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &nsFilePromiseProviderPtr_param);
	
            handle = (zend_long) ns_filepromiseprovider_wrap((void *)(uintptr_t) nsFilePromiseProviderPtr);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSFilePromiseProvider_NSFilePromiseProvider, destroy)
{
	zval *provider_param = NULL;
	zend_long provider;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(provider)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &provider_param);
	
            ns_filepromiseprovider_destroy((uintptr_t) provider);
        
}

PHP_METHOD(AppKit_NS_NSFilePromiseProvider_NSFilePromiseProvider, nsFilePromiseProvider)
{
	zval *provider_param = NULL;
	zend_long provider, ptr = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(provider)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &provider_param);
	
            ptr = (zend_long)(uintptr_t) ns_filepromiseprovider_nsfilepromiseprovider((uintptr_t) provider);
        
	RETURN_LONG(ptr);
}

PHP_METHOD(AppKit_NS_NSFilePromiseProvider_NSFilePromiseProvider, setFileType)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval fileType;
	zval *provider_param = NULL, *fileType_param = NULL;
	zend_long provider;

	ZVAL_UNDEF(&fileType);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(provider)
		Z_PARAM_STR(fileType)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &provider_param, &fileType_param);
	zephir_get_strval(&fileType, fileType_param);
	
            ns_filepromiseprovider_set_file_type((uintptr_t) provider, Z_STRVAL(fileType));
        
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSFilePromiseProvider_NSFilePromiseProvider, getFileType)
{
	zval *provider_param = NULL;
	zend_long provider;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(provider)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &provider_param);
	
            char buf[4096];
            buf[0] = '\0';
            if (ns_filepromiseprovider_file_type((uintptr_t) provider, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        
	RETURN_STRING("");
}

PHP_METHOD(AppKit_NS_NSFilePromiseProvider_NSFilePromiseProvider, setUserInfoTag)
{
	zval *provider_param = NULL, *tag_param = NULL;
	zend_long provider, tag;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(provider)
		Z_PARAM_LONG(tag)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &provider_param, &tag_param);
	
            ns_filepromiseprovider_set_user_info_tag((uintptr_t) provider, (long long) tag);
        
}

PHP_METHOD(AppKit_NS_NSFilePromiseProvider_NSFilePromiseProvider, getUserInfoTag)
{
	zval *provider_param = NULL;
	zend_long provider, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(provider)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &provider_param);
	
            value = (zend_long) ns_filepromiseprovider_user_info_tag((uintptr_t) provider);
        
	RETURN_LONG(value);
}

PHP_METHOD(AppKit_NS_NSFilePromiseProvider_NSFilePromiseProvider, setFileName)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval fileName;
	zval *provider_param = NULL, *fileName_param = NULL;
	zend_long provider;

	ZVAL_UNDEF(&fileName);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(provider)
		Z_PARAM_STR(fileName)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &provider_param, &fileName_param);
	zephir_get_strval(&fileName, fileName_param);
	
            ns_filepromiseprovider_set_file_name((uintptr_t) provider, Z_STRVAL(fileName));
        
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSFilePromiseProvider_NSFilePromiseProvider, pollWriteRequest)
{
	zval out;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *provider_param = NULL;
	zend_long provider;

	ZVAL_UNDEF(&out);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(provider)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &provider_param);
	ZEPHIR_INIT_VAR(&out);
	array_init(&out);
	
            char fileType[4096];
            char url[4096];
            fileType[0] = '\0';
            url[0] = '\0';
            if (ns_filepromiseprovider_poll_write_request((uintptr_t) provider, fileType, (int) sizeof(fileType), url, (int) sizeof(url))) {
                add_assoc_string(&out, "fileType", fileType);
                add_assoc_string(&out, "url", url);
            }
        
	RETURN_CTOR(&out);
}

PHP_METHOD(AppKit_NS_NSFilePromiseProvider_NSFilePromiseProvider, completeWrite)
{
	zend_bool success;
	zval *provider_param = NULL, *success_param = NULL;
	zend_long provider;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(provider)
		Z_PARAM_BOOL(success)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &provider_param, &success_param);
	
            ns_filepromiseprovider_complete_write((uintptr_t) provider, success ? 1 : 0);
        
}

