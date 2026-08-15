
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

#include "ns-collectionviewcompositionallayout.h"
#include <stdint.h>



/**
 * NSCollectionViewCompositionalLayout section-based layout.
 */
ZEPHIR_INIT_CLASS(AppKit_NS_NSCollectionViewCompositionalLayout_NSCollectionViewCompositionalLayout)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSCollectionViewCompositionalLayout, NSCollectionViewCompositionalLayout, appkit, ns_nscollectionviewcompositionallayout_nscollectionviewcompositionallayout, appkit_ns_nscollectionviewcompositionallayout_nscollectionviewcompositionallayout_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSCollectionViewCompositionalLayout_NSCollectionViewCompositionalLayout, createList)
{
	zend_long handle = 0;
	zval *itemHeight_param = NULL;
	double itemHeight;

	ZEND_PARSE_PARAMETERS_START(0, 1)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL(itemHeight)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(0, 1, &itemHeight_param);
	if (!itemHeight_param) {
		itemHeight = 32.0;
	} else {
		itemHeight = zephir_get_doubleval(itemHeight_param);
	}
	
            handle = (zend_long) ns_collectionviewcompositionallayout_create_list(itemHeight);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSCollectionViewCompositionalLayout_NSCollectionViewCompositionalLayout, createGrid)
{
	double itemHeight;
	zval *columns_param = NULL, *itemHeight_param = NULL;
	zend_long columns, handle = 0;

	ZEND_PARSE_PARAMETERS_START(0, 2)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(columns)
		Z_PARAM_ZVAL(itemHeight)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(0, 2, &columns_param, &itemHeight_param);
	if (!columns_param) {
		columns = 3;
	} else {
		}
	if (!itemHeight_param) {
		itemHeight = 96.0;
	} else {
		itemHeight = zephir_get_doubleval(itemHeight_param);
	}
	
            handle = (zend_long) ns_collectionviewcompositionallayout_create_grid((int) columns, itemHeight);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSCollectionViewCompositionalLayout_NSCollectionViewCompositionalLayout, wrap)
{
	zval *nsCollectionViewCompositionalLayoutPtr_param = NULL;
	zend_long nsCollectionViewCompositionalLayoutPtr, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(nsCollectionViewCompositionalLayoutPtr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &nsCollectionViewCompositionalLayoutPtr_param);
	
            handle = (zend_long) ns_collectionviewcompositionallayout_wrap((void *)(uintptr_t) nsCollectionViewCompositionalLayoutPtr);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSCollectionViewCompositionalLayout_NSCollectionViewCompositionalLayout, destroy)
{
	zval *layout_param = NULL;
	zend_long layout;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(layout)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &layout_param);
	
            ns_collectionviewcompositionallayout_destroy((uintptr_t) layout);
        
}

PHP_METHOD(AppKit_NS_NSCollectionViewCompositionalLayout_NSCollectionViewCompositionalLayout, nsCollectionViewCompositionalLayout)
{
	zval *layout_param = NULL;
	zend_long layout, ptr = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(layout)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &layout_param);
	
            ptr = (zend_long)(uintptr_t) ns_collectionviewcompositionallayout_nscollectionviewcompositionallayout((uintptr_t) layout);
        
	RETURN_LONG(ptr);
}

PHP_METHOD(AppKit_NS_NSCollectionViewCompositionalLayout_NSCollectionViewCompositionalLayout, setScrollDirection)
{
	zval *layout_param = NULL, *direction_param = NULL;
	zend_long layout, direction;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(layout)
		Z_PARAM_LONG(direction)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &layout_param, &direction_param);
	
            ns_collectionviewcompositionallayout_set_scroll_direction((uintptr_t) layout, (int) direction);
        
}

PHP_METHOD(AppKit_NS_NSCollectionViewCompositionalLayout_NSCollectionViewCompositionalLayout, getScrollDirection)
{
	zval *layout_param = NULL;
	zend_long layout, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(layout)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &layout_param);
	
            value = (zend_long) ns_collectionviewcompositionallayout_get_scroll_direction((uintptr_t) layout);
        
	RETURN_LONG(value);
}

PHP_METHOD(AppKit_NS_NSCollectionViewCompositionalLayout_NSCollectionViewCompositionalLayout, setInterSectionSpacing)
{
	double spacing;
	zval *layout_param = NULL, *spacing_param = NULL;
	zend_long layout;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(layout)
		Z_PARAM_ZVAL(spacing)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &layout_param, &spacing_param);
	spacing = zephir_get_doubleval(spacing_param);
	
            ns_collectionviewcompositionallayout_set_inter_section_spacing((uintptr_t) layout, spacing);
        
}

PHP_METHOD(AppKit_NS_NSCollectionViewCompositionalLayout_NSCollectionViewCompositionalLayout, getInterSectionSpacing)
{
	double value = 0;
	zval *layout_param = NULL;
	zend_long layout;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(layout)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &layout_param);
	
            value = ns_collectionviewcompositionallayout_get_inter_section_spacing((uintptr_t) layout);
        
	RETURN_DOUBLE(value);
}

