
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
#include "src/ns-collectionviewflowlayout.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"


ZEPHIR_INIT_CLASS(AppKit_NS_NSCollectionViewFlowLayout_NSCollectionViewFlowLayout)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSCollectionViewFlowLayout, NSCollectionViewFlowLayout, appkit, ns_nscollectionviewflowlayout_nscollectionviewflowlayout, appkit_ns_nscollectionviewflowlayout_nscollectionviewflowlayout_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSCollectionViewFlowLayout_NSCollectionViewFlowLayout, init)
{

	RETURN_LONG(ns_nscollectionviewflowlayout_init());
}

PHP_METHOD(AppKit_NS_NSCollectionViewFlowLayout_NSCollectionViewFlowLayout, minimumLineSpacing)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(ns_nscollectionviewflowlayout_minimum_line_spacing(&_0));
}

PHP_METHOD(AppKit_NS_NSCollectionViewFlowLayout_NSCollectionViewFlowLayout, setMinimumLineSpacing)
{
	double minimumLineSpacing;
	zval *handle_param = NULL, *minimumLineSpacing_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(minimumLineSpacing)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &minimumLineSpacing_param);
	minimumLineSpacing = zephir_get_doubleval(minimumLineSpacing_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, minimumLineSpacing);
	ns_nscollectionviewflowlayout_set_minimum_line_spacing(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSCollectionViewFlowLayout_NSCollectionViewFlowLayout, minimumInteritemSpacing)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(ns_nscollectionviewflowlayout_minimum_interitem_spacing(&_0));
}

PHP_METHOD(AppKit_NS_NSCollectionViewFlowLayout_NSCollectionViewFlowLayout, setMinimumInteritemSpacing)
{
	double minimumInteritemSpacing;
	zval *handle_param = NULL, *minimumInteritemSpacing_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(minimumInteritemSpacing)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &minimumInteritemSpacing_param);
	minimumInteritemSpacing = zephir_get_doubleval(minimumInteritemSpacing_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, minimumInteritemSpacing);
	ns_nscollectionviewflowlayout_set_minimum_interitem_spacing(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSCollectionViewFlowLayout_NSCollectionViewFlowLayout, itemSize)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &handle_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ns_nscollectionviewflowlayout_item_size(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSCollectionViewFlowLayout_NSCollectionViewFlowLayout, setItemSize)
{
	double width, height;
	zval *handle_param = NULL, *width_param = NULL, *height_param = NULL, _0, _1, _2;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(width)
		Z_PARAM_ZVAL(height)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &width_param, &height_param);
	width = zephir_get_doubleval(width_param);
	height = zephir_get_doubleval(height_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, width);
	ZVAL_DOUBLE(&_2, height);
	ns_nscollectionviewflowlayout_set_item_size(&_0, &_1, &_2);
}

PHP_METHOD(AppKit_NS_NSCollectionViewFlowLayout_NSCollectionViewFlowLayout, estimatedItemSize)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &handle_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ns_nscollectionviewflowlayout_estimated_item_size(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSCollectionViewFlowLayout_NSCollectionViewFlowLayout, setEstimatedItemSize)
{
	double width, height;
	zval *handle_param = NULL, *width_param = NULL, *height_param = NULL, _0, _1, _2;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(width)
		Z_PARAM_ZVAL(height)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &width_param, &height_param);
	width = zephir_get_doubleval(width_param);
	height = zephir_get_doubleval(height_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, width);
	ZVAL_DOUBLE(&_2, height);
	ns_nscollectionviewflowlayout_set_estimated_item_size(&_0, &_1, &_2);
}

PHP_METHOD(AppKit_NS_NSCollectionViewFlowLayout_NSCollectionViewFlowLayout, scrollDirection)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nscollectionviewflowlayout_scroll_direction(&_0));
}

PHP_METHOD(AppKit_NS_NSCollectionViewFlowLayout_NSCollectionViewFlowLayout, setScrollDirection)
{
	zval *handle_param = NULL, *scrollDirection_param = NULL, _0, _1;
	zend_long handle, scrollDirection;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(scrollDirection)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &scrollDirection_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, scrollDirection);
	ns_nscollectionviewflowlayout_set_scroll_direction(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSCollectionViewFlowLayout_NSCollectionViewFlowLayout, headerReferenceSize)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &handle_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ns_nscollectionviewflowlayout_header_reference_size(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSCollectionViewFlowLayout_NSCollectionViewFlowLayout, setHeaderReferenceSize)
{
	double width, height;
	zval *handle_param = NULL, *width_param = NULL, *height_param = NULL, _0, _1, _2;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(width)
		Z_PARAM_ZVAL(height)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &width_param, &height_param);
	width = zephir_get_doubleval(width_param);
	height = zephir_get_doubleval(height_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, width);
	ZVAL_DOUBLE(&_2, height);
	ns_nscollectionviewflowlayout_set_header_reference_size(&_0, &_1, &_2);
}

PHP_METHOD(AppKit_NS_NSCollectionViewFlowLayout_NSCollectionViewFlowLayout, footerReferenceSize)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &handle_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ns_nscollectionviewflowlayout_footer_reference_size(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSCollectionViewFlowLayout_NSCollectionViewFlowLayout, setFooterReferenceSize)
{
	double width, height;
	zval *handle_param = NULL, *width_param = NULL, *height_param = NULL, _0, _1, _2;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(width)
		Z_PARAM_ZVAL(height)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &width_param, &height_param);
	width = zephir_get_doubleval(width_param);
	height = zephir_get_doubleval(height_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, width);
	ZVAL_DOUBLE(&_2, height);
	ns_nscollectionviewflowlayout_set_footer_reference_size(&_0, &_1, &_2);
}

PHP_METHOD(AppKit_NS_NSCollectionViewFlowLayout_NSCollectionViewFlowLayout, sectionInset)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &handle_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ns_nscollectionviewflowlayout_section_inset(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSCollectionViewFlowLayout_NSCollectionViewFlowLayout, setSectionInset)
{
	double top, left, bottom, right;
	zval *handle_param = NULL, *top_param = NULL, *left_param = NULL, *bottom_param = NULL, *right_param = NULL, _0, _1, _2, _3, _4;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(top)
		Z_PARAM_ZVAL(left)
		Z_PARAM_ZVAL(bottom)
		Z_PARAM_ZVAL(right)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &handle_param, &top_param, &left_param, &bottom_param, &right_param);
	top = zephir_get_doubleval(top_param);
	left = zephir_get_doubleval(left_param);
	bottom = zephir_get_doubleval(bottom_param);
	right = zephir_get_doubleval(right_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, top);
	ZVAL_DOUBLE(&_2, left);
	ZVAL_DOUBLE(&_3, bottom);
	ZVAL_DOUBLE(&_4, right);
	ns_nscollectionviewflowlayout_set_section_inset(&_0, &_1, &_2, &_3, &_4);
}

PHP_METHOD(AppKit_NS_NSCollectionViewFlowLayout_NSCollectionViewFlowLayout, sectionHeadersPinToVisibleBounds)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nscollectionviewflowlayout_section_headers_pin_to_visible_bounds(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSCollectionViewFlowLayout_NSCollectionViewFlowLayout, setSectionHeadersPinToVisibleBounds)
{
	zend_bool sectionHeadersPinToVisibleBounds;
	zval *handle_param = NULL, *sectionHeadersPinToVisibleBounds_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(sectionHeadersPinToVisibleBounds)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &sectionHeadersPinToVisibleBounds_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (sectionHeadersPinToVisibleBounds ? 1 : 0));
	ns_nscollectionviewflowlayout_set_section_headers_pin_to_visible_bounds(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSCollectionViewFlowLayout_NSCollectionViewFlowLayout, sectionFootersPinToVisibleBounds)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nscollectionviewflowlayout_section_footers_pin_to_visible_bounds(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSCollectionViewFlowLayout_NSCollectionViewFlowLayout, setSectionFootersPinToVisibleBounds)
{
	zend_bool sectionFootersPinToVisibleBounds;
	zval *handle_param = NULL, *sectionFootersPinToVisibleBounds_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(sectionFootersPinToVisibleBounds)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &sectionFootersPinToVisibleBounds_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (sectionFootersPinToVisibleBounds ? 1 : 0));
	ns_nscollectionviewflowlayout_set_section_footers_pin_to_visible_bounds(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSCollectionViewFlowLayout_NSCollectionViewFlowLayout, sectionAtIndexIsCollapsed)
{
	zval *handle_param = NULL, *sectionIndex_param = NULL, _0, _1;
	zend_long handle, sectionIndex, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(sectionIndex)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &sectionIndex_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, sectionIndex);
	r = ns_nscollectionviewflowlayout_section_at_index_is_collapsed(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSCollectionViewFlowLayout_NSCollectionViewFlowLayout, collapseSectionAtIndex)
{
	zval *handle_param = NULL, *sectionIndex_param = NULL, _0, _1;
	zend_long handle, sectionIndex;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(sectionIndex)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &sectionIndex_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, sectionIndex);
	ns_nscollectionviewflowlayout_collapse_section_at_index(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSCollectionViewFlowLayout_NSCollectionViewFlowLayout, expandSectionAtIndex)
{
	zval *handle_param = NULL, *sectionIndex_param = NULL, _0, _1;
	zend_long handle, sectionIndex;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(sectionIndex)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &sectionIndex_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, sectionIndex);
	ns_nscollectionviewflowlayout_expand_section_at_index(&_0, &_1);
}

