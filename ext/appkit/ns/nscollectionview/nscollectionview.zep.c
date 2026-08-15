
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

#include "ns-collectionview.h"
#include <stdint.h>



/**
 * NSCollectionView grid list.
 */
ZEPHIR_INIT_CLASS(AppKit_NS_NSCollectionView_NSCollectionView)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSCollectionView, NSCollectionView, appkit, ns_nscollectionview_nscollectionview, appkit_ns_nscollectionview_nscollectionview_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSCollectionView_NSCollectionView, create)
{
	zval *x_param = NULL, *y_param = NULL, *width_param = NULL, *height_param = NULL;
	zend_long x, y, width, height, handle = 0;

	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(x)
		Z_PARAM_LONG(y)
		Z_PARAM_LONG(width)
		Z_PARAM_LONG(height)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &x_param, &y_param, &width_param, &height_param);
	
            handle = (zend_long) ns_collectionview_create((double) x, (double) y, (double) width, (double) height);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSCollectionView_NSCollectionView, destroy)
{
	zval *collection_param = NULL;
	zend_long collection;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(collection)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &collection_param);
	
            ns_collectionview_destroy((uintptr_t) collection);
        
}

PHP_METHOD(AppKit_NS_NSCollectionView_NSCollectionView, clear)
{
	zval *collection_param = NULL;
	zend_long collection;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(collection)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &collection_param);
	
            ns_collectionview_clear((uintptr_t) collection);
        
}

PHP_METHOD(AppKit_NS_NSCollectionView_NSCollectionView, addItem)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval title;
	zval *collection_param = NULL, *title_param = NULL;
	zend_long collection;

	ZVAL_UNDEF(&title);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(collection)
		Z_PARAM_STR(title)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &collection_param, &title_param);
	zephir_get_strval(&title, title_param);
	
            ns_collectionview_add_item((uintptr_t) collection, Z_STRVAL(title));
        
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSCollectionView_NSCollectionView, itemCount)
{
	zval *collection_param = NULL;
	zend_long collection, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(collection)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &collection_param);
	
            value = (zend_long) ns_collectionview_item_count((uintptr_t) collection);
        
	RETURN_LONG(value);
}

PHP_METHOD(AppKit_NS_NSCollectionView_NSCollectionView, getSelected)
{
	zval *collection_param = NULL;
	zend_long collection, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(collection)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &collection_param);
	
            value = (zend_long) ns_collectionview_get_selected((uintptr_t) collection);
        
	RETURN_LONG(value);
}

PHP_METHOD(AppKit_NS_NSCollectionView_NSCollectionView, setSelected)
{
	zval *collection_param = NULL, *index_param = NULL;
	zend_long collection, index;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(collection)
		Z_PARAM_LONG(index)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &collection_param, &index_param);
	
            ns_collectionview_set_selected((uintptr_t) collection, (int) index);
        
}

PHP_METHOD(AppKit_NS_NSCollectionView_NSCollectionView, pollChange)
{
	zend_bool result = 0;
	zval *collection_param = NULL;
	zend_long collection;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(collection)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &collection_param);
	
            result = ns_collectionview_poll_change((uintptr_t) collection) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSCollectionView_NSCollectionView, setLayout)
{
	zval *collection_param = NULL, *layout_param = NULL;
	zend_long collection, layout;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(collection)
		Z_PARAM_LONG(layout)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &collection_param, &layout_param);
	
            ns_collectionview_set_layout((uintptr_t) collection, (uintptr_t) layout);
        
}

PHP_METHOD(AppKit_NS_NSCollectionView_NSCollectionView, getLayout)
{
	zval *collection_param = NULL;
	zend_long collection, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(collection)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &collection_param);
	
            handle = (zend_long) ns_collectionview_get_layout((uintptr_t) collection);
        
	RETURN_LONG(handle);
}

