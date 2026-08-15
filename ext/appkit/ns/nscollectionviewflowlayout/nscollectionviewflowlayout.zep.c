
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

#include "ns-collectionviewflowlayout.h"
#include <stdint.h>



/**
 * NSCollectionViewFlowLayout flowing item layout.
 */
ZEPHIR_INIT_CLASS(AppKit_NS_NSCollectionViewFlowLayout_NSCollectionViewFlowLayout)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSCollectionViewFlowLayout, NSCollectionViewFlowLayout, appkit, ns_nscollectionviewflowlayout_nscollectionviewflowlayout, appkit_ns_nscollectionviewflowlayout_nscollectionviewflowlayout_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSCollectionViewFlowLayout_NSCollectionViewFlowLayout, create)
{
	zend_long handle = 0;
	
            handle = (zend_long) ns_collectionviewflowlayout_create();
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSCollectionViewFlowLayout_NSCollectionViewFlowLayout, wrap)
{
	zval *nsCollectionViewFlowLayoutPtr_param = NULL;
	zend_long nsCollectionViewFlowLayoutPtr, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(nsCollectionViewFlowLayoutPtr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &nsCollectionViewFlowLayoutPtr_param);
	
            handle = (zend_long) ns_collectionviewflowlayout_wrap((void *)(uintptr_t) nsCollectionViewFlowLayoutPtr);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSCollectionViewFlowLayout_NSCollectionViewFlowLayout, destroy)
{
	zval *layout_param = NULL;
	zend_long layout;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(layout)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &layout_param);
	
            ns_collectionviewflowlayout_destroy((uintptr_t) layout);
        
}

PHP_METHOD(AppKit_NS_NSCollectionViewFlowLayout_NSCollectionViewFlowLayout, nsCollectionViewFlowLayout)
{
	zval *layout_param = NULL;
	zend_long layout, ptr = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(layout)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &layout_param);
	
            ptr = (zend_long)(uintptr_t) ns_collectionviewflowlayout_nscollectionviewflowlayout((uintptr_t) layout);
        
	RETURN_LONG(ptr);
}

PHP_METHOD(AppKit_NS_NSCollectionViewFlowLayout_NSCollectionViewFlowLayout, setItemSize)
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
	
            ns_collectionviewflowlayout_set_item_size((uintptr_t) layout, width, height);
        
}

PHP_METHOD(AppKit_NS_NSCollectionViewFlowLayout_NSCollectionViewFlowLayout, getItemSize)
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
            if (ns_collectionviewflowlayout_get_item_size((uintptr_t) layout, &w, &h)) {
                add_next_index_double(&out, w);
                add_next_index_double(&out, h);
            }
        
	RETURN_CTOR(&out);
}

PHP_METHOD(AppKit_NS_NSCollectionViewFlowLayout_NSCollectionViewFlowLayout, setEstimatedItemSize)
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
	
            ns_collectionviewflowlayout_set_estimated_item_size((uintptr_t) layout, width, height);
        
}

PHP_METHOD(AppKit_NS_NSCollectionViewFlowLayout_NSCollectionViewFlowLayout, getEstimatedItemSize)
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
            if (ns_collectionviewflowlayout_get_estimated_item_size((uintptr_t) layout, &w, &h)) {
                add_next_index_double(&out, w);
                add_next_index_double(&out, h);
            }
        
	RETURN_CTOR(&out);
}

PHP_METHOD(AppKit_NS_NSCollectionViewFlowLayout_NSCollectionViewFlowLayout, setMinimumLineSpacing)
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
	
            ns_collectionviewflowlayout_set_minimum_line_spacing((uintptr_t) layout, spacing);
        
}

PHP_METHOD(AppKit_NS_NSCollectionViewFlowLayout_NSCollectionViewFlowLayout, getMinimumLineSpacing)
{
	double value = 0;
	zval *layout_param = NULL;
	zend_long layout;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(layout)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &layout_param);
	
            value = ns_collectionviewflowlayout_get_minimum_line_spacing((uintptr_t) layout);
        
	RETURN_DOUBLE(value);
}

PHP_METHOD(AppKit_NS_NSCollectionViewFlowLayout_NSCollectionViewFlowLayout, setMinimumInteritemSpacing)
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
	
            ns_collectionviewflowlayout_set_minimum_interitem_spacing((uintptr_t) layout, spacing);
        
}

PHP_METHOD(AppKit_NS_NSCollectionViewFlowLayout_NSCollectionViewFlowLayout, getMinimumInteritemSpacing)
{
	double value = 0;
	zval *layout_param = NULL;
	zend_long layout;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(layout)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &layout_param);
	
            value = ns_collectionviewflowlayout_get_minimum_interitem_spacing((uintptr_t) layout);
        
	RETURN_DOUBLE(value);
}

PHP_METHOD(AppKit_NS_NSCollectionViewFlowLayout_NSCollectionViewFlowLayout, setScrollDirection)
{
	zval *layout_param = NULL, *direction_param = NULL;
	zend_long layout, direction;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(layout)
		Z_PARAM_LONG(direction)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &layout_param, &direction_param);
	
            ns_collectionviewflowlayout_set_scroll_direction((uintptr_t) layout, (int) direction);
        
}

PHP_METHOD(AppKit_NS_NSCollectionViewFlowLayout_NSCollectionViewFlowLayout, getScrollDirection)
{
	zval *layout_param = NULL;
	zend_long layout, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(layout)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &layout_param);
	
            value = (zend_long) ns_collectionviewflowlayout_get_scroll_direction((uintptr_t) layout);
        
	RETURN_LONG(value);
}

PHP_METHOD(AppKit_NS_NSCollectionViewFlowLayout_NSCollectionViewFlowLayout, setHeaderReferenceSize)
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
	
            ns_collectionviewflowlayout_set_header_reference_size((uintptr_t) layout, width, height);
        
}

PHP_METHOD(AppKit_NS_NSCollectionViewFlowLayout_NSCollectionViewFlowLayout, getHeaderReferenceSize)
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
            if (ns_collectionviewflowlayout_get_header_reference_size((uintptr_t) layout, &w, &h)) {
                add_next_index_double(&out, w);
                add_next_index_double(&out, h);
            }
        
	RETURN_CTOR(&out);
}

PHP_METHOD(AppKit_NS_NSCollectionViewFlowLayout_NSCollectionViewFlowLayout, setFooterReferenceSize)
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
	
            ns_collectionviewflowlayout_set_footer_reference_size((uintptr_t) layout, width, height);
        
}

PHP_METHOD(AppKit_NS_NSCollectionViewFlowLayout_NSCollectionViewFlowLayout, getFooterReferenceSize)
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
            if (ns_collectionviewflowlayout_get_footer_reference_size((uintptr_t) layout, &w, &h)) {
                add_next_index_double(&out, w);
                add_next_index_double(&out, h);
            }
        
	RETURN_CTOR(&out);
}

PHP_METHOD(AppKit_NS_NSCollectionViewFlowLayout_NSCollectionViewFlowLayout, setSectionInset)
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
	
            ns_collectionviewflowlayout_set_section_inset((uintptr_t) layout, top, left, bottom, right);
        
}

PHP_METHOD(AppKit_NS_NSCollectionViewFlowLayout_NSCollectionViewFlowLayout, setSectionHeadersPin)
{
	zend_bool flag;
	zval *layout_param = NULL, *flag_param = NULL;
	zend_long layout;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(layout)
		Z_PARAM_BOOL(flag)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &layout_param, &flag_param);
	
            ns_collectionviewflowlayout_set_section_headers_pin((uintptr_t) layout, flag ? 1 : 0);
        
}

PHP_METHOD(AppKit_NS_NSCollectionViewFlowLayout_NSCollectionViewFlowLayout, sectionHeadersPin)
{
	zend_bool result = 0;
	zval *layout_param = NULL;
	zend_long layout;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(layout)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &layout_param);
	
            result = ns_collectionviewflowlayout_section_headers_pin((uintptr_t) layout) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSCollectionViewFlowLayout_NSCollectionViewFlowLayout, setSectionFootersPin)
{
	zend_bool flag;
	zval *layout_param = NULL, *flag_param = NULL;
	zend_long layout;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(layout)
		Z_PARAM_BOOL(flag)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &layout_param, &flag_param);
	
            ns_collectionviewflowlayout_set_section_footers_pin((uintptr_t) layout, flag ? 1 : 0);
        
}

PHP_METHOD(AppKit_NS_NSCollectionViewFlowLayout_NSCollectionViewFlowLayout, sectionFootersPin)
{
	zend_bool result = 0;
	zval *layout_param = NULL;
	zend_long layout;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(layout)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &layout_param);
	
            result = ns_collectionviewflowlayout_section_footers_pin((uintptr_t) layout) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSCollectionViewFlowLayout_NSCollectionViewFlowLayout, sectionIsCollapsed)
{
	zend_bool result = 0;
	zval *layout_param = NULL, *section_param = NULL;
	zend_long layout, section;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(layout)
		Z_PARAM_LONG(section)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &layout_param, &section_param);
	
            result = ns_collectionviewflowlayout_section_is_collapsed((uintptr_t) layout, (int) section) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSCollectionViewFlowLayout_NSCollectionViewFlowLayout, collapseSection)
{
	zval *layout_param = NULL, *section_param = NULL;
	zend_long layout, section;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(layout)
		Z_PARAM_LONG(section)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &layout_param, &section_param);
	
            ns_collectionviewflowlayout_collapse_section((uintptr_t) layout, (int) section);
        
}

PHP_METHOD(AppKit_NS_NSCollectionViewFlowLayout_NSCollectionViewFlowLayout, expandSection)
{
	zval *layout_param = NULL, *section_param = NULL;
	zend_long layout, section;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(layout)
		Z_PARAM_LONG(section)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &layout_param, &section_param);
	
            ns_collectionviewflowlayout_expand_section((uintptr_t) layout, (int) section);
        
}

