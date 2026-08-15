
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

#include "ns-collectionviewtransitionlayout.h"
#include <stdint.h>



/**
 * NSCollectionViewTransitionLayout between two layouts.
 */
ZEPHIR_INIT_CLASS(AppKit_NS_NSCollectionViewTransitionLayout_NSCollectionViewTransitionLayout)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSCollectionViewTransitionLayout, NSCollectionViewTransitionLayout, appkit, ns_nscollectionviewtransitionlayout_nscollectionviewtransitionlayout, appkit_ns_nscollectionviewtransitionlayout_nscollectionviewtransitionlayout_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSCollectionViewTransitionLayout_NSCollectionViewTransitionLayout, create)
{
	zval *currentLayout_param = NULL, *nextLayout_param = NULL;
	zend_long currentLayout, nextLayout, handle = 0;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(currentLayout)
		Z_PARAM_LONG(nextLayout)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &currentLayout_param, &nextLayout_param);
	
            handle = (zend_long) ns_collectionviewtransitionlayout_create((uintptr_t) currentLayout, (uintptr_t) nextLayout);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSCollectionViewTransitionLayout_NSCollectionViewTransitionLayout, wrap)
{
	zval *nsCollectionViewTransitionLayoutPtr_param = NULL;
	zend_long nsCollectionViewTransitionLayoutPtr, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(nsCollectionViewTransitionLayoutPtr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &nsCollectionViewTransitionLayoutPtr_param);
	
            handle = (zend_long) ns_collectionviewtransitionlayout_wrap((void *)(uintptr_t) nsCollectionViewTransitionLayoutPtr);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSCollectionViewTransitionLayout_NSCollectionViewTransitionLayout, destroy)
{
	zval *layout_param = NULL;
	zend_long layout;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(layout)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &layout_param);
	
            ns_collectionviewtransitionlayout_destroy((uintptr_t) layout);
        
}

PHP_METHOD(AppKit_NS_NSCollectionViewTransitionLayout_NSCollectionViewTransitionLayout, nsCollectionViewTransitionLayout)
{
	zval *layout_param = NULL;
	zend_long layout, ptr = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(layout)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &layout_param);
	
            ptr = (zend_long)(uintptr_t) ns_collectionviewtransitionlayout_nscollectionviewtransitionlayout((uintptr_t) layout);
        
	RETURN_LONG(ptr);
}

PHP_METHOD(AppKit_NS_NSCollectionViewTransitionLayout_NSCollectionViewTransitionLayout, setProgress)
{
	double progress;
	zval *layout_param = NULL, *progress_param = NULL;
	zend_long layout;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(layout)
		Z_PARAM_ZVAL(progress)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &layout_param, &progress_param);
	progress = zephir_get_doubleval(progress_param);
	
            ns_collectionviewtransitionlayout_set_progress((uintptr_t) layout, progress);
        
}

PHP_METHOD(AppKit_NS_NSCollectionViewTransitionLayout_NSCollectionViewTransitionLayout, getProgress)
{
	double value = 0;
	zval *layout_param = NULL;
	zend_long layout;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(layout)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &layout_param);
	
            value = ns_collectionviewtransitionlayout_get_progress((uintptr_t) layout);
        
	RETURN_DOUBLE(value);
}

PHP_METHOD(AppKit_NS_NSCollectionViewTransitionLayout_NSCollectionViewTransitionLayout, currentLayout)
{
	zval *layout_param = NULL;
	zend_long layout, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(layout)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &layout_param);
	
            value = (zend_long) ns_collectionviewtransitionlayout_current_layout((uintptr_t) layout);
        
	RETURN_LONG(value);
}

PHP_METHOD(AppKit_NS_NSCollectionViewTransitionLayout_NSCollectionViewTransitionLayout, nextLayout)
{
	zval *layout_param = NULL;
	zend_long layout, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(layout)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &layout_param);
	
            value = (zend_long) ns_collectionviewtransitionlayout_next_layout((uintptr_t) layout);
        
	RETURN_LONG(value);
}

PHP_METHOD(AppKit_NS_NSCollectionViewTransitionLayout_NSCollectionViewTransitionLayout, updateValue)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	double value;
	zval key;
	zval *layout_param = NULL, *key_param = NULL, *value_param = NULL;
	zend_long layout;

	ZVAL_UNDEF(&key);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(layout)
		Z_PARAM_STR(key)
		Z_PARAM_ZVAL(value)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &layout_param, &key_param, &value_param);
	zephir_get_strval(&key, key_param);
	value = zephir_get_doubleval(value_param);
	
            ns_collectionviewtransitionlayout_update_value((uintptr_t) layout, Z_STRVAL(key), value);
        
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSCollectionViewTransitionLayout_NSCollectionViewTransitionLayout, valueForKey)
{
	double value = 0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval key;
	zval *layout_param = NULL, *key_param = NULL;
	zend_long layout;

	ZVAL_UNDEF(&key);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(layout)
		Z_PARAM_STR(key)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &layout_param, &key_param);
	zephir_get_strval(&key, key_param);
	
            value = ns_collectionviewtransitionlayout_value_for_key((uintptr_t) layout, Z_STRVAL(key));
        
	RETURN_MM_DOUBLE(value);
}

