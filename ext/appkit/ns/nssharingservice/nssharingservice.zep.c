
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

#include "ns-sharingservice.h"
#include <stdint.h>



/** NSSharingService — built-in and custom share services. */
ZEPHIR_INIT_CLASS(AppKit_NS_NSSharingService_NSSharingService)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSSharingService, NSSharingService, appkit, ns_nssharingservice_nssharingservice, appkit_ns_nssharingservice_nssharingservice_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSSharingService_NSSharingService, named)
{
	zend_long handle = 0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *serviceName_param = NULL;
	zval serviceName;

	ZVAL_UNDEF(&serviceName);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(serviceName)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &serviceName_param);
	zephir_get_strval(&serviceName, serviceName_param);
	
            handle = (zend_long) ns_sharingservice_named(Z_STRVAL(serviceName));
        
	RETURN_MM_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSSharingService_NSSharingService, wrap)
{
	zval *nsSharingServicePtr_param = NULL;
	zend_long nsSharingServicePtr, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(nsSharingServicePtr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &nsSharingServicePtr_param);
	
            handle = (zend_long) ns_sharingservice_wrap((void *)(uintptr_t) nsSharingServicePtr);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSSharingService_NSSharingService, destroy)
{
	zval *service_param = NULL;
	zend_long service;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(service)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &service_param);
	
            ns_sharingservice_destroy((uintptr_t) service);
        
}

PHP_METHOD(AppKit_NS_NSSharingService_NSSharingService, nsSharingService)
{
	zval *service_param = NULL;
	zend_long service, ptr = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(service)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &service_param);
	
            ptr = (zend_long)(uintptr_t) ns_sharingservice_nssharingservice((uintptr_t) service);
        
	RETURN_LONG(ptr);
}

PHP_METHOD(AppKit_NS_NSSharingService_NSSharingService, getTitle)
{
	zval *service_param = NULL;
	zend_long service;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(service)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &service_param);
	
            char buf[4096];
            buf[0] = '\0';
            if (ns_sharingservice_title((uintptr_t) service, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        
	RETURN_STRING("");
}

PHP_METHOD(AppKit_NS_NSSharingService_NSSharingService, getMenuItemTitle)
{
	zval *service_param = NULL;
	zend_long service;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(service)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &service_param);
	
            char buf[4096];
            buf[0] = '\0';
            if (ns_sharingservice_menu_item_title((uintptr_t) service, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        
	RETURN_STRING("");
}

PHP_METHOD(AppKit_NS_NSSharingService_NSSharingService, setMenuItemTitle)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval title;
	zval *service_param = NULL, *title_param = NULL;
	zend_long service;

	ZVAL_UNDEF(&title);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(service)
		Z_PARAM_STR(title)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &service_param, &title_param);
	zephir_get_strval(&title, title_param);
	
            ns_sharingservice_set_menu_item_title((uintptr_t) service, Z_STRVAL(title));
        
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSSharingService_NSSharingService, getSubject)
{
	zval *service_param = NULL;
	zend_long service;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(service)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &service_param);
	
            char buf[4096];
            buf[0] = '\0';
            if (ns_sharingservice_subject((uintptr_t) service, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        
	RETURN_STRING("");
}

PHP_METHOD(AppKit_NS_NSSharingService_NSSharingService, setSubject)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval subject;
	zval *service_param = NULL, *subject_param = NULL;
	zend_long service;

	ZVAL_UNDEF(&subject);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(service)
		Z_PARAM_STR(subject)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &service_param, &subject_param);
	zephir_get_strval(&subject, subject_param);
	
            ns_sharingservice_set_subject((uintptr_t) service, Z_STRVAL(subject));
        
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSSharingService_NSSharingService, setRecipients)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval recipients;
	zval *service_param = NULL, *recipients_param = NULL;
	zend_long service;

	ZVAL_UNDEF(&recipients);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(service)
		Z_PARAM_ARRAY(recipients)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &service_param, &recipients_param);
	zephir_get_arrval(&recipients, recipients_param);
	
            zval *entry;
            const char *cstrings[256];
            int count = 0;
            ZEND_HASH_FOREACH_VAL(Z_ARRVAL(recipients), entry) {
                if (count >= 256) {
                    break;
                }
                convert_to_string(entry);
                cstrings[count++] = Z_STRVAL_P(entry);
            } ZEND_HASH_FOREACH_END();
            ns_sharingservice_set_recipients((uintptr_t) service, cstrings, count);
        
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSSharingService_NSSharingService, getRecipients)
{
	zval out;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *service_param = NULL;
	zend_long service;

	ZVAL_UNDEF(&out);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(service)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &service_param);
	ZEPHIR_INIT_VAR(&out);
	array_init(&out);
	
            int count = ns_sharingservice_recipients_count((uintptr_t) service);
            int i;
            for (i = 0; i < count; i++) {
                char buf[4096];
                buf[0] = '\0';
                if (ns_sharingservice_recipient_at((uintptr_t) service, i, buf, (int) sizeof(buf))) {
                    add_next_index_string(&out, buf);
                }
            }
        
	RETURN_CTOR(&out);
}

PHP_METHOD(AppKit_NS_NSSharingService_NSSharingService, canPerformWithStrings)
{
	zend_bool result = 0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval strings;
	zval *service_param = NULL, *strings_param = NULL;
	zend_long service;

	ZVAL_UNDEF(&strings);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(service)
		Z_PARAM_ARRAY(strings)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &service_param, &strings_param);
	zephir_get_arrval(&strings, strings_param);
	
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
            result = ns_sharingservice_can_perform_with_strings((uintptr_t) service, cstrings, count) == 1;
        
	RETURN_MM_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSSharingService_NSSharingService, performWithStrings)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval strings;
	zval *service_param = NULL, *strings_param = NULL;
	zend_long service;

	ZVAL_UNDEF(&strings);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(service)
		Z_PARAM_ARRAY(strings)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &service_param, &strings_param);
	zephir_get_arrval(&strings, strings_param);
	
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
            ns_sharingservice_perform_with_strings((uintptr_t) service, cstrings, count);
        
	ZEPHIR_MM_RESTORE();
}

