
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

#include "ns-collectionviewlayout.h"
#include <stdint.h>



/**
 * NSCollectionViewLayout base collection layout.
 */
ZEPHIR_INIT_CLASS(AppKit_NS_NSCollectionViewLayout_NSCollectionViewLayout)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSCollectionViewLayout, NSCollectionViewLayout, appkit, ns_nscollectionviewlayout_nscollectionviewlayout, appkit_ns_nscollectionviewlayout_nscollectionviewlayout_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSCollectionViewLayout_NSCollectionViewLayout, create)
{
	zend_long handle = 0;
	
            handle = (zend_long) ns_collectionviewlayout_create();
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSCollectionViewLayout_NSCollectionViewLayout, wrap)
{
	zval *nsCollectionViewLayoutPtr_param = NULL;
	zend_long nsCollectionViewLayoutPtr, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(nsCollectionViewLayoutPtr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &nsCollectionViewLayoutPtr_param);
	
            handle = (zend_long) ns_collectionviewlayout_wrap((void *)(uintptr_t) nsCollectionViewLayoutPtr);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSCollectionViewLayout_NSCollectionViewLayout, destroy)
{
	zval *layout_param = NULL;
	zend_long layout;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(layout)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &layout_param);
	
            ns_collectionviewlayout_destroy((uintptr_t) layout);
        
}

PHP_METHOD(AppKit_NS_NSCollectionViewLayout_NSCollectionViewLayout, nsCollectionViewLayout)
{
	zval *layout_param = NULL;
	zend_long layout, ptr = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(layout)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &layout_param);
	
            ptr = (zend_long)(uintptr_t) ns_collectionviewlayout_nscollectionviewlayout((uintptr_t) layout);
        
	RETURN_LONG(ptr);
}

PHP_METHOD(AppKit_NS_NSCollectionViewLayout_NSCollectionViewLayout, invalidate)
{
	zval *layout_param = NULL;
	zend_long layout;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(layout)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &layout_param);
	
            ns_collectionviewlayout_invalidate((uintptr_t) layout);
        
}

PHP_METHOD(AppKit_NS_NSCollectionViewLayout_NSCollectionViewLayout, collectionView)
{
	zval *layout_param = NULL;
	zend_long layout, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(layout)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &layout_param);
	
            value = (zend_long) ns_collectionviewlayout_collection_view((uintptr_t) layout);
        
	RETURN_LONG(value);
}

PHP_METHOD(AppKit_NS_NSCollectionViewLayout_NSCollectionViewLayout, contentWidth)
{
	double value = 0;
	zval *layout_param = NULL;
	zend_long layout;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(layout)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &layout_param);
	
            value = ns_collectionviewlayout_content_width((uintptr_t) layout);
        
	RETURN_DOUBLE(value);
}

PHP_METHOD(AppKit_NS_NSCollectionViewLayout_NSCollectionViewLayout, contentHeight)
{
	double value = 0;
	zval *layout_param = NULL;
	zend_long layout;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(layout)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &layout_param);
	
            value = ns_collectionviewlayout_content_height((uintptr_t) layout);
        
	RETURN_DOUBLE(value);
}

