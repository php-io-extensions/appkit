
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

#include "ns-sharingservicepickertouchbaritem.h"
#include <stdint.h>



/** NSSharingServicePickerTouchBarItem */
ZEPHIR_INIT_CLASS(AppKit_NS_NSSharingServicePickerTouchBarItem_NSSharingServicePickerTouchBarItem)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSSharingServicePickerTouchBarItem, NSSharingServicePickerTouchBarItem, appkit, ns_nssharingservicepickertouchbaritem_nssharingservicepickertouchbaritem, appkit_ns_nssharingservicepickertouchbaritem_nssharingservicepickertouchbaritem_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSSharingServicePickerTouchBarItem_NSSharingServicePickerTouchBarItem, create)
{
	zend_long h = 0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *identifier_param = NULL;
	zval identifier;

	ZVAL_UNDEF(&identifier);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(identifier)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &identifier_param);
	zephir_get_strval(&identifier, identifier_param);
	 h = (zend_long) ns_sharingservicepickertouchbaritem_create(Z_STRVAL(identifier)); 
	RETURN_MM_LONG(h);
}

PHP_METHOD(AppKit_NS_NSSharingServicePickerTouchBarItem_NSSharingServicePickerTouchBarItem, wrap)
{
	zval *ptr_param = NULL;
	zend_long ptr, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(ptr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &ptr_param);
	 handle = (zend_long) ns_sharingservicepickertouchbaritem_wrap((void *)(uintptr_t) ptr); 
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSSharingServicePickerTouchBarItem_NSSharingServicePickerTouchBarItem, destroy)
{
	zval *item_param = NULL;
	zend_long item;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &item_param);
	 ns_sharingservicepickertouchbaritem_destroy((uintptr_t) item); 
}

PHP_METHOD(AppKit_NS_NSSharingServicePickerTouchBarItem_NSSharingServicePickerTouchBarItem, nsSharingServicePickerTouchBarItem)
{
	zval *item_param = NULL;
	zend_long item, ptr = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &item_param);
	 ptr = (zend_long)(uintptr_t) ns_sharingservicepickertouchbaritem_nssharingservicepickertouchbaritem((uintptr_t) item); 
	RETURN_LONG(ptr);
}

PHP_METHOD(AppKit_NS_NSSharingServicePickerTouchBarItem_NSSharingServicePickerTouchBarItem, setShareStrings)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval strings;
	zval *item_param = NULL, *strings_param = NULL;
	zend_long item;

	ZVAL_UNDEF(&strings);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(item)
		Z_PARAM_ARRAY(strings)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &item_param, &strings_param);
	zephir_get_arrval(&strings, strings_param);
	
            zval *entry;
            const char *cstrings[256];
            int count = 0;
            ZEND_HASH_FOREACH_VAL(Z_ARRVAL(strings), entry) {
                if (count >= 256) { break; }
                convert_to_string(entry);
                cstrings[count++] = Z_STRVAL_P(entry);
            } ZEND_HASH_FOREACH_END();
        ns_sharingservicepickertouchbaritem_set_share_strings((uintptr_t) item, cstrings, count);
    
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSSharingServicePickerTouchBarItem_NSSharingServicePickerTouchBarItem, pollShareRequest)
{
	zend_bool r = 0;
	zval *item_param = NULL;
	zend_long item;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &item_param);
	 r = ns_sharingservicepickertouchbaritem_poll_share_request((uintptr_t) item) == 1; 
	RETURN_BOOL(r);
}

