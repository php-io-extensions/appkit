
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

#include "ns-collectionviewgridlayout.h"
#include <stdint.h>



/**
 * NSCollectionViewGridLayout legacy grid layout.
 */
ZEPHIR_INIT_CLASS(AppKit_NS_NSCollectionViewGridLayout_NSCollectionViewGridLayout)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSCollectionViewGridLayout, NSCollectionViewGridLayout, appkit, ns_nscollectionviewgridlayout_nscollectionviewgridlayout, appkit_ns_nscollectionviewgridlayout_nscollectionviewgridlayout_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSCollectionViewGridLayout_NSCollectionViewGridLayout, create)
{
	zend_long handle = 0;
	
            handle = (zend_long) ns_collectionviewgridlayout_create();
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSCollectionViewGridLayout_NSCollectionViewGridLayout, wrap)
{
	zval *nsCollectionViewGridLayoutPtr_param = NULL;
	zend_long nsCollectionViewGridLayoutPtr, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(nsCollectionViewGridLayoutPtr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &nsCollectionViewGridLayoutPtr_param);
	
            handle = (zend_long) ns_collectionviewgridlayout_wrap((void *)(uintptr_t) nsCollectionViewGridLayoutPtr);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSCollectionViewGridLayout_NSCollectionViewGridLayout, destroy)
{
	zval *layout_param = NULL;
	zend_long layout;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(layout)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &layout_param);
	
            ns_collectionviewgridlayout_destroy((uintptr_t) layout);
        
}

PHP_METHOD(AppKit_NS_NSCollectionViewGridLayout_NSCollectionViewGridLayout, nsCollectionViewGridLayout)
{
	zval *layout_param = NULL;
	zend_long layout, ptr = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(layout)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &layout_param);
	
            ptr = (zend_long)(uintptr_t) ns_collectionviewgridlayout_nscollectionviewgridlayout((uintptr_t) layout);
        
	RETURN_LONG(ptr);
}

PHP_METHOD(AppKit_NS_NSCollectionViewGridLayout_NSCollectionViewGridLayout, setMargins)
{
	double top, left, bottom, right;
	zval *layout_param = NULL, *top_param = NULL, *left_param = NULL, *bottom_param = NULL, *right_param = NULL;
	zend_long layout;

	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(layout)
		Z_PARAM_ZVAL(top)
		Z_PARAM_ZVAL(left)
		Z_PARAM_ZVAL(bottom)
		Z_PARAM_ZVAL(right)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &layout_param, &top_param, &left_param, &bottom_param, &right_param);
	top = zephir_get_doubleval(top_param);
	left = zephir_get_doubleval(left_param);
	bottom = zephir_get_doubleval(bottom_param);
	right = zephir_get_doubleval(right_param);
	
            ns_collectionviewgridlayout_set_margins((uintptr_t) layout, top, left, bottom, right);
        
}

PHP_METHOD(AppKit_NS_NSCollectionViewGridLayout_NSCollectionViewGridLayout, setMinimumInteritemSpacing)
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
	
            ns_collectionviewgridlayout_set_minimum_interitem_spacing((uintptr_t) layout, spacing);
        
}

PHP_METHOD(AppKit_NS_NSCollectionViewGridLayout_NSCollectionViewGridLayout, getMinimumInteritemSpacing)
{
	double value = 0;
	zval *layout_param = NULL;
	zend_long layout;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(layout)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &layout_param);
	
            value = ns_collectionviewgridlayout_get_minimum_interitem_spacing((uintptr_t) layout);
        
	RETURN_DOUBLE(value);
}

PHP_METHOD(AppKit_NS_NSCollectionViewGridLayout_NSCollectionViewGridLayout, setMinimumLineSpacing)
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
	
            ns_collectionviewgridlayout_set_minimum_line_spacing((uintptr_t) layout, spacing);
        
}

PHP_METHOD(AppKit_NS_NSCollectionViewGridLayout_NSCollectionViewGridLayout, getMinimumLineSpacing)
{
	double value = 0;
	zval *layout_param = NULL;
	zend_long layout;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(layout)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &layout_param);
	
            value = ns_collectionviewgridlayout_get_minimum_line_spacing((uintptr_t) layout);
        
	RETURN_DOUBLE(value);
}

PHP_METHOD(AppKit_NS_NSCollectionViewGridLayout_NSCollectionViewGridLayout, setMaximumNumberOfRows)
{
	zval *layout_param = NULL, *rows_param = NULL;
	zend_long layout, rows;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(layout)
		Z_PARAM_LONG(rows)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &layout_param, &rows_param);
	
            ns_collectionviewgridlayout_set_maximum_number_of_rows((uintptr_t) layout, (int) rows);
        
}

PHP_METHOD(AppKit_NS_NSCollectionViewGridLayout_NSCollectionViewGridLayout, getMaximumNumberOfRows)
{
	zval *layout_param = NULL;
	zend_long layout, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(layout)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &layout_param);
	
            value = (zend_long) ns_collectionviewgridlayout_get_maximum_number_of_rows((uintptr_t) layout);
        
	RETURN_LONG(value);
}

PHP_METHOD(AppKit_NS_NSCollectionViewGridLayout_NSCollectionViewGridLayout, setMaximumNumberOfColumns)
{
	zval *layout_param = NULL, *columns_param = NULL;
	zend_long layout, columns;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(layout)
		Z_PARAM_LONG(columns)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &layout_param, &columns_param);
	
            ns_collectionviewgridlayout_set_maximum_number_of_columns((uintptr_t) layout, (int) columns);
        
}

PHP_METHOD(AppKit_NS_NSCollectionViewGridLayout_NSCollectionViewGridLayout, getMaximumNumberOfColumns)
{
	zval *layout_param = NULL;
	zend_long layout, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(layout)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &layout_param);
	
            value = (zend_long) ns_collectionviewgridlayout_get_maximum_number_of_columns((uintptr_t) layout);
        
	RETURN_LONG(value);
}

PHP_METHOD(AppKit_NS_NSCollectionViewGridLayout_NSCollectionViewGridLayout, setMinimumItemSize)
{
	double width, height;
	zval *layout_param = NULL, *width_param = NULL, *height_param = NULL;
	zend_long layout;

	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(layout)
		Z_PARAM_ZVAL(width)
		Z_PARAM_ZVAL(height)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &layout_param, &width_param, &height_param);
	width = zephir_get_doubleval(width_param);
	height = zephir_get_doubleval(height_param);
	
            ns_collectionviewgridlayout_set_minimum_item_size((uintptr_t) layout, width, height);
        
}

PHP_METHOD(AppKit_NS_NSCollectionViewGridLayout_NSCollectionViewGridLayout, getMinimumItemSize)
{
	zval out;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *layout_param = NULL;
	zend_long layout;

	ZVAL_UNDEF(&out);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(layout)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &layout_param);
	ZEPHIR_INIT_VAR(&out);
	array_init(&out);
	
            double w = 0.0, h = 0.0;
            if (ns_collectionviewgridlayout_get_minimum_item_size((uintptr_t) layout, &w, &h)) {
                add_next_index_double(&out, w);
                add_next_index_double(&out, h);
            }
        
	RETURN_CTOR(&out);
}

PHP_METHOD(AppKit_NS_NSCollectionViewGridLayout_NSCollectionViewGridLayout, setMaximumItemSize)
{
	double width, height;
	zval *layout_param = NULL, *width_param = NULL, *height_param = NULL;
	zend_long layout;

	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(layout)
		Z_PARAM_ZVAL(width)
		Z_PARAM_ZVAL(height)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &layout_param, &width_param, &height_param);
	width = zephir_get_doubleval(width_param);
	height = zephir_get_doubleval(height_param);
	
            ns_collectionviewgridlayout_set_maximum_item_size((uintptr_t) layout, width, height);
        
}

PHP_METHOD(AppKit_NS_NSCollectionViewGridLayout_NSCollectionViewGridLayout, getMaximumItemSize)
{
	zval out;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *layout_param = NULL;
	zend_long layout;

	ZVAL_UNDEF(&out);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(layout)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &layout_param);
	ZEPHIR_INIT_VAR(&out);
	array_init(&out);
	
            double w = 0.0, h = 0.0;
            if (ns_collectionviewgridlayout_get_maximum_item_size((uintptr_t) layout, &w, &h)) {
                add_next_index_double(&out, w);
                add_next_index_double(&out, h);
            }
        
	RETURN_CTOR(&out);
}

