
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

#include "ns-textcontentmanager.h"
#include <stdint.h>



/**
 * NSTextContentManager — TextKit 2 content owner.
 */
ZEPHIR_INIT_CLASS(AppKit_NS_NSTextContentManager_NSTextContentManager)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSTextContentManager, NSTextContentManager, appkit, ns_nstextcontentmanager_nstextcontentmanager, appkit_ns_nstextcontentmanager_nstextcontentmanager_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSTextContentManager_NSTextContentManager, create)
{
	zend_long handle = 0;
	
            handle = (zend_long) ns_textcontentmanager_create();
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSTextContentManager_NSTextContentManager, wrap)
{
	zval *nsTextContentManagerPtr_param = NULL;
	zend_long nsTextContentManagerPtr, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(nsTextContentManagerPtr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &nsTextContentManagerPtr_param);
	
            handle = (zend_long) ns_textcontentmanager_wrap((void *)(uintptr_t) nsTextContentManagerPtr);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSTextContentManager_NSTextContentManager, destroy)
{
	zval *manager_param = NULL;
	zend_long manager;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(manager)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &manager_param);
	
            ns_textcontentmanager_destroy((uintptr_t) manager);
        
}

PHP_METHOD(AppKit_NS_NSTextContentManager_NSTextContentManager, addTextLayoutManager)
{
	zval *manager_param = NULL, *layoutManager_param = NULL;
	zend_long manager, layoutManager;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(manager)
		Z_PARAM_LONG(layoutManager)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &manager_param, &layoutManager_param);
	
            ns_textcontentmanager_add_text_layout_manager((uintptr_t) manager, (uintptr_t) layoutManager);
        
}

PHP_METHOD(AppKit_NS_NSTextContentManager_NSTextContentManager, removeTextLayoutManager)
{
	zval *manager_param = NULL, *layoutManager_param = NULL;
	zend_long manager, layoutManager;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(manager)
		Z_PARAM_LONG(layoutManager)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &manager_param, &layoutManager_param);
	
            ns_textcontentmanager_remove_text_layout_manager((uintptr_t) manager, (uintptr_t) layoutManager);
        
}

PHP_METHOD(AppKit_NS_NSTextContentManager_NSTextContentManager, textLayoutManagersCount)
{
	zval *manager_param = NULL;
	zend_long manager, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(manager)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &manager_param);
	
            value = (zend_long) ns_textcontentmanager_text_layout_managers_count((uintptr_t) manager);
        
	RETURN_LONG(value);
}

PHP_METHOD(AppKit_NS_NSTextContentManager_NSTextContentManager, hasEditingTransaction)
{
	zend_bool result = 0;
	zval *manager_param = NULL;
	zend_long manager;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(manager)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &manager_param);
	
            result = ns_textcontentmanager_has_editing_transaction((uintptr_t) manager) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSTextContentManager_NSTextContentManager, automaticallySynchronizesTextLayoutManagers)
{
	zend_bool result = 0;
	zval *manager_param = NULL;
	zend_long manager;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(manager)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &manager_param);
	
            result = ns_textcontentmanager_automatically_synchronizes_text_layout_managers((uintptr_t) manager) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSTextContentManager_NSTextContentManager, setAutomaticallySynchronizesTextLayoutManagers)
{
	zend_bool flag;
	zval *manager_param = NULL, *flag_param = NULL;
	zend_long manager;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(manager)
		Z_PARAM_BOOL(flag)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &manager_param, &flag_param);
	
            ns_textcontentmanager_set_automatically_synchronizes_text_layout_managers((uintptr_t) manager, flag ? 1 : 0);
        
}

PHP_METHOD(AppKit_NS_NSTextContentManager_NSTextContentManager, automaticallySynchronizesToBackingStore)
{
	zend_bool result = 0;
	zval *manager_param = NULL;
	zend_long manager;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(manager)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &manager_param);
	
            result = ns_textcontentmanager_automatically_synchronizes_to_backing_store((uintptr_t) manager) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSTextContentManager_NSTextContentManager, setAutomaticallySynchronizesToBackingStore)
{
	zend_bool flag;
	zval *manager_param = NULL, *flag_param = NULL;
	zend_long manager;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(manager)
		Z_PARAM_BOOL(flag)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &manager_param, &flag_param);
	
            ns_textcontentmanager_set_automatically_synchronizes_to_backing_store((uintptr_t) manager, flag ? 1 : 0);
        
}

PHP_METHOD(AppKit_NS_NSTextContentManager_NSTextContentManager, documentRangePtr)
{
	zval *manager_param = NULL;
	zend_long manager, ptr = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(manager)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &manager_param);
	
            ptr = (zend_long) ns_textcontentmanager_document_range_ptr((uintptr_t) manager);
        
	RETURN_LONG(ptr);
}

