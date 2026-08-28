
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
#include "src/ns-collectionviewlayout.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"


ZEPHIR_INIT_CLASS(AppKit_NS_NSCollectionViewLayout_NSCollectionViewLayout)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSCollectionViewLayout, NSCollectionViewLayout, appkit, ns_nscollectionviewlayout_nscollectionviewlayout, appkit_ns_nscollectionviewlayout_nscollectionviewlayout_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSCollectionViewLayout_NSCollectionViewLayout, init)
{

	RETURN_LONG(ns_nscollectionviewlayout_init());
}

PHP_METHOD(AppKit_NS_NSCollectionViewLayout_NSCollectionViewLayout, collectionView)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nscollectionviewlayout_collection_view(&_0));
}

PHP_METHOD(AppKit_NS_NSCollectionViewLayout_NSCollectionViewLayout, invalidateLayout)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	ns_nscollectionviewlayout_invalidate_layout(&_0);
}

PHP_METHOD(AppKit_NS_NSCollectionViewLayout_NSCollectionViewLayout, invalidateLayoutWithContext)
{
	zval *handle_param = NULL, *context_param = NULL, _0, _1;
	zend_long handle, context;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(context)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &context_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, context);
	ns_nscollectionviewlayout_invalidate_layout_with_context(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSCollectionViewLayout_NSCollectionViewLayout, registerNibForDecorationViewOfKind)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval elementKind;
	zval *handle_param = NULL, *nib_param = NULL, *elementKind_param = NULL, _0, _1;
	zend_long handle, nib;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&elementKind);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(nib)
		Z_PARAM_STR(elementKind)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &nib_param, &elementKind_param);
	zephir_get_strval(&elementKind, elementKind_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, nib);
	ns_nscollectionviewlayout_register_nib_for_decoration_view_of_kind(&_0, &_1, &elementKind);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSCollectionViewLayout_NSCollectionViewLayout, prepareLayout)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	ns_nscollectionviewlayout_prepare_layout(&_0);
}

PHP_METHOD(AppKit_NS_NSCollectionViewLayout_NSCollectionViewLayout, layoutAttributesForElementsInRect)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	double x, y, width, height;
	zval *handle_param = NULL, *x_param = NULL, *y_param = NULL, *width_param = NULL, *height_param = NULL, result, _0, _1, _2, _3, _4;
	zend_long handle;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(x)
		Z_PARAM_ZVAL(y)
		Z_PARAM_ZVAL(width)
		Z_PARAM_ZVAL(height)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 5, 0, &handle_param, &x_param, &y_param, &width_param, &height_param);
	x = zephir_get_doubleval(x_param);
	y = zephir_get_doubleval(y_param);
	width = zephir_get_doubleval(width_param);
	height = zephir_get_doubleval(height_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, x);
	ZVAL_DOUBLE(&_2, y);
	ZVAL_DOUBLE(&_3, width);
	ZVAL_DOUBLE(&_4, height);
	ns_nscollectionviewlayout_layout_attributes_for_elements_in_rect(&result, &_0, &_1, &_2, &_3, &_4);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSCollectionViewLayout_NSCollectionViewLayout, layoutAttributesForItemAtIndexPath)
{
	zval *handle_param = NULL, *indexPath_param = NULL, _0, _1;
	zend_long handle, indexPath;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(indexPath)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &indexPath_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, indexPath);
	RETURN_LONG(ns_nscollectionviewlayout_layout_attributes_for_item_at_index_path(&_0, &_1));
}

PHP_METHOD(AppKit_NS_NSCollectionViewLayout_NSCollectionViewLayout, layoutAttributesForSupplementaryViewOfKindAtIndexPath)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval elementKind;
	zval *handle_param = NULL, *elementKind_param = NULL, *indexPath_param = NULL, _0, _1;
	zend_long handle, indexPath;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&elementKind);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(elementKind)
		Z_PARAM_LONG(indexPath)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &elementKind_param, &indexPath_param);
	zephir_get_strval(&elementKind, elementKind_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, indexPath);
	RETURN_MM_LONG(ns_nscollectionviewlayout_layout_attributes_for_supplementary_view_of_kind_at_index_path(&_0, &elementKind, &_1));
}

PHP_METHOD(AppKit_NS_NSCollectionViewLayout_NSCollectionViewLayout, layoutAttributesForDecorationViewOfKindAtIndexPath)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval elementKind;
	zval *handle_param = NULL, *elementKind_param = NULL, *indexPath_param = NULL, _0, _1;
	zend_long handle, indexPath;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&elementKind);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(elementKind)
		Z_PARAM_LONG(indexPath)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &elementKind_param, &indexPath_param);
	zephir_get_strval(&elementKind, elementKind_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, indexPath);
	RETURN_MM_LONG(ns_nscollectionviewlayout_layout_attributes_for_decoration_view_of_kind_at_index_path(&_0, &elementKind, &_1));
}

PHP_METHOD(AppKit_NS_NSCollectionViewLayout_NSCollectionViewLayout, layoutAttributesForDropTargetAtPoint)
{
	double x, y;
	zval *handle_param = NULL, *x_param = NULL, *y_param = NULL, _0, _1, _2;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(x)
		Z_PARAM_ZVAL(y)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &x_param, &y_param);
	x = zephir_get_doubleval(x_param);
	y = zephir_get_doubleval(y_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, x);
	ZVAL_DOUBLE(&_2, y);
	RETURN_LONG(ns_nscollectionviewlayout_layout_attributes_for_drop_target_at_point(&_0, &_1, &_2));
}

PHP_METHOD(AppKit_NS_NSCollectionViewLayout_NSCollectionViewLayout, layoutAttributesForInterItemGapBeforeIndexPath)
{
	zval *handle_param = NULL, *indexPath_param = NULL, _0, _1;
	zend_long handle, indexPath;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(indexPath)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &indexPath_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, indexPath);
	RETURN_LONG(ns_nscollectionviewlayout_layout_attributes_for_inter_item_gap_before_index_path(&_0, &_1));
}

PHP_METHOD(AppKit_NS_NSCollectionViewLayout_NSCollectionViewLayout, shouldInvalidateLayoutForBoundsChange)
{
	double x, y, width, height;
	zval *handle_param = NULL, *x_param = NULL, *y_param = NULL, *width_param = NULL, *height_param = NULL, _0, _1, _2, _3, _4;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(x)
		Z_PARAM_ZVAL(y)
		Z_PARAM_ZVAL(width)
		Z_PARAM_ZVAL(height)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &handle_param, &x_param, &y_param, &width_param, &height_param);
	x = zephir_get_doubleval(x_param);
	y = zephir_get_doubleval(y_param);
	width = zephir_get_doubleval(width_param);
	height = zephir_get_doubleval(height_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, x);
	ZVAL_DOUBLE(&_2, y);
	ZVAL_DOUBLE(&_3, width);
	ZVAL_DOUBLE(&_4, height);
	r = ns_nscollectionviewlayout_should_invalidate_layout_for_bounds_change(&_0, &_1, &_2, &_3, &_4);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSCollectionViewLayout_NSCollectionViewLayout, invalidationContextForBoundsChange)
{
	double x, y, width, height;
	zval *handle_param = NULL, *x_param = NULL, *y_param = NULL, *width_param = NULL, *height_param = NULL, _0, _1, _2, _3, _4;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(x)
		Z_PARAM_ZVAL(y)
		Z_PARAM_ZVAL(width)
		Z_PARAM_ZVAL(height)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &handle_param, &x_param, &y_param, &width_param, &height_param);
	x = zephir_get_doubleval(x_param);
	y = zephir_get_doubleval(y_param);
	width = zephir_get_doubleval(width_param);
	height = zephir_get_doubleval(height_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, x);
	ZVAL_DOUBLE(&_2, y);
	ZVAL_DOUBLE(&_3, width);
	ZVAL_DOUBLE(&_4, height);
	RETURN_LONG(ns_nscollectionviewlayout_invalidation_context_for_bounds_change(&_0, &_1, &_2, &_3, &_4));
}

PHP_METHOD(AppKit_NS_NSCollectionViewLayout_NSCollectionViewLayout, shouldInvalidateLayoutForPreferredLayoutAttributesWithOriginalAttributes)
{
	zval *handle_param = NULL, *preferredAttributes_param = NULL, *originalAttributes_param = NULL, _0, _1, _2;
	zend_long handle, preferredAttributes, originalAttributes, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(preferredAttributes)
		Z_PARAM_LONG(originalAttributes)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &preferredAttributes_param, &originalAttributes_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, preferredAttributes);
	ZVAL_LONG(&_2, originalAttributes);
	r = ns_nscollectionviewlayout_should_invalidate_layout_for_preferred_layout_attributes_with_original_attributes(&_0, &_1, &_2);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSCollectionViewLayout_NSCollectionViewLayout, invalidationContextForPreferredLayoutAttributesWithOriginalAttributes)
{
	zval *handle_param = NULL, *preferredAttributes_param = NULL, *originalAttributes_param = NULL, _0, _1, _2;
	zend_long handle, preferredAttributes, originalAttributes;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(preferredAttributes)
		Z_PARAM_LONG(originalAttributes)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &preferredAttributes_param, &originalAttributes_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, preferredAttributes);
	ZVAL_LONG(&_2, originalAttributes);
	RETURN_LONG(ns_nscollectionviewlayout_invalidation_context_for_preferred_layout_attributes_with_original_attributes(&_0, &_1, &_2));
}

PHP_METHOD(AppKit_NS_NSCollectionViewLayout_NSCollectionViewLayout, targetContentOffsetForProposedContentOffsetWithScrollingVelocity)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	double x, y, velocityX, velocityY;
	zval *handle_param = NULL, *x_param = NULL, *y_param = NULL, *velocityX_param = NULL, *velocityY_param = NULL, result, _0, _1, _2, _3, _4;
	zend_long handle;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(x)
		Z_PARAM_ZVAL(y)
		Z_PARAM_ZVAL(velocityX)
		Z_PARAM_ZVAL(velocityY)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 5, 0, &handle_param, &x_param, &y_param, &velocityX_param, &velocityY_param);
	x = zephir_get_doubleval(x_param);
	y = zephir_get_doubleval(y_param);
	velocityX = zephir_get_doubleval(velocityX_param);
	velocityY = zephir_get_doubleval(velocityY_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, x);
	ZVAL_DOUBLE(&_2, y);
	ZVAL_DOUBLE(&_3, velocityX);
	ZVAL_DOUBLE(&_4, velocityY);
	ns_nscollectionviewlayout_target_content_offset_for_proposed_content_offset_with_scrolling_velocity(&result, &_0, &_1, &_2, &_3, &_4);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSCollectionViewLayout_NSCollectionViewLayout, targetContentOffsetForProposedContentOffset)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	double x, y;
	zval *handle_param = NULL, *x_param = NULL, *y_param = NULL, result, _0, _1, _2;
	zend_long handle;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(x)
		Z_PARAM_ZVAL(y)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &x_param, &y_param);
	x = zephir_get_doubleval(x_param);
	y = zephir_get_doubleval(y_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, x);
	ZVAL_DOUBLE(&_2, y);
	ns_nscollectionviewlayout_target_content_offset_for_proposed_content_offset(&result, &_0, &_1, &_2);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSCollectionViewLayout_NSCollectionViewLayout, collectionViewContentSize)
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
	ns_nscollectionviewlayout_collection_view_content_size(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSCollectionViewLayout_NSCollectionViewLayout, prepareForCollectionViewUpdates)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval updateItems;
	zval *handle_param = NULL, *updateItems_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&updateItems);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ARRAY(updateItems)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &updateItems_param);
	zephir_get_arrval(&updateItems, updateItems_param);
	ZVAL_LONG(&_0, handle);
	ns_nscollectionviewlayout_prepare_for_collection_view_updates(&_0, &updateItems);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSCollectionViewLayout_NSCollectionViewLayout, finalizeCollectionViewUpdates)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	ns_nscollectionviewlayout_finalize_collection_view_updates(&_0);
}

PHP_METHOD(AppKit_NS_NSCollectionViewLayout_NSCollectionViewLayout, prepareForAnimatedBoundsChange)
{
	double x, y, width, height;
	zval *handle_param = NULL, *x_param = NULL, *y_param = NULL, *width_param = NULL, *height_param = NULL, _0, _1, _2, _3, _4;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(x)
		Z_PARAM_ZVAL(y)
		Z_PARAM_ZVAL(width)
		Z_PARAM_ZVAL(height)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &handle_param, &x_param, &y_param, &width_param, &height_param);
	x = zephir_get_doubleval(x_param);
	y = zephir_get_doubleval(y_param);
	width = zephir_get_doubleval(width_param);
	height = zephir_get_doubleval(height_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, x);
	ZVAL_DOUBLE(&_2, y);
	ZVAL_DOUBLE(&_3, width);
	ZVAL_DOUBLE(&_4, height);
	ns_nscollectionviewlayout_prepare_for_animated_bounds_change(&_0, &_1, &_2, &_3, &_4);
}

PHP_METHOD(AppKit_NS_NSCollectionViewLayout_NSCollectionViewLayout, finalizeAnimatedBoundsChange)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	ns_nscollectionviewlayout_finalize_animated_bounds_change(&_0);
}

PHP_METHOD(AppKit_NS_NSCollectionViewLayout_NSCollectionViewLayout, prepareForTransitionToLayout)
{
	zval *handle_param = NULL, *newLayout_param = NULL, _0, _1;
	zend_long handle, newLayout;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(newLayout)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &newLayout_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, newLayout);
	ns_nscollectionviewlayout_prepare_for_transition_to_layout(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSCollectionViewLayout_NSCollectionViewLayout, prepareForTransitionFromLayout)
{
	zval *handle_param = NULL, *oldLayout_param = NULL, _0, _1;
	zend_long handle, oldLayout;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(oldLayout)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &oldLayout_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, oldLayout);
	ns_nscollectionviewlayout_prepare_for_transition_from_layout(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSCollectionViewLayout_NSCollectionViewLayout, finalizeLayoutTransition)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	ns_nscollectionviewlayout_finalize_layout_transition(&_0);
}

PHP_METHOD(AppKit_NS_NSCollectionViewLayout_NSCollectionViewLayout, initialLayoutAttributesForAppearingItemAtIndexPath)
{
	zval *handle_param = NULL, *itemIndexPath_param = NULL, _0, _1;
	zend_long handle, itemIndexPath;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(itemIndexPath)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &itemIndexPath_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, itemIndexPath);
	RETURN_LONG(ns_nscollectionviewlayout_initial_layout_attributes_for_appearing_item_at_index_path(&_0, &_1));
}

PHP_METHOD(AppKit_NS_NSCollectionViewLayout_NSCollectionViewLayout, finalLayoutAttributesForDisappearingItemAtIndexPath)
{
	zval *handle_param = NULL, *itemIndexPath_param = NULL, _0, _1;
	zend_long handle, itemIndexPath;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(itemIndexPath)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &itemIndexPath_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, itemIndexPath);
	RETURN_LONG(ns_nscollectionviewlayout_final_layout_attributes_for_disappearing_item_at_index_path(&_0, &_1));
}

PHP_METHOD(AppKit_NS_NSCollectionViewLayout_NSCollectionViewLayout, initialLayoutAttributesForAppearingSupplementaryElementOfKindAtIndexPath)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval elementKind;
	zval *handle_param = NULL, *elementKind_param = NULL, *elementIndexPath_param = NULL, _0, _1;
	zend_long handle, elementIndexPath;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&elementKind);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(elementKind)
		Z_PARAM_LONG(elementIndexPath)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &elementKind_param, &elementIndexPath_param);
	zephir_get_strval(&elementKind, elementKind_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, elementIndexPath);
	RETURN_MM_LONG(ns_nscollectionviewlayout_initial_layout_attributes_for_appearing_supplementary_element_of_kind_at_index_path(&_0, &elementKind, &_1));
}

PHP_METHOD(AppKit_NS_NSCollectionViewLayout_NSCollectionViewLayout, finalLayoutAttributesForDisappearingSupplementaryElementOfKindAtIndexPath)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval elementKind;
	zval *handle_param = NULL, *elementKind_param = NULL, *elementIndexPath_param = NULL, _0, _1;
	zend_long handle, elementIndexPath;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&elementKind);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(elementKind)
		Z_PARAM_LONG(elementIndexPath)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &elementKind_param, &elementIndexPath_param);
	zephir_get_strval(&elementKind, elementKind_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, elementIndexPath);
	RETURN_MM_LONG(ns_nscollectionviewlayout_final_layout_attributes_for_disappearing_supplementary_element_of_kind_at_index_path(&_0, &elementKind, &_1));
}

PHP_METHOD(AppKit_NS_NSCollectionViewLayout_NSCollectionViewLayout, initialLayoutAttributesForAppearingDecorationElementOfKindAtIndexPath)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval elementKind;
	zval *handle_param = NULL, *elementKind_param = NULL, *decorationIndexPath_param = NULL, _0, _1;
	zend_long handle, decorationIndexPath;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&elementKind);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(elementKind)
		Z_PARAM_LONG(decorationIndexPath)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &elementKind_param, &decorationIndexPath_param);
	zephir_get_strval(&elementKind, elementKind_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, decorationIndexPath);
	RETURN_MM_LONG(ns_nscollectionviewlayout_initial_layout_attributes_for_appearing_decoration_element_of_kind_at_index_path(&_0, &elementKind, &_1));
}

PHP_METHOD(AppKit_NS_NSCollectionViewLayout_NSCollectionViewLayout, finalLayoutAttributesForDisappearingDecorationElementOfKindAtIndexPath)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval elementKind;
	zval *handle_param = NULL, *elementKind_param = NULL, *decorationIndexPath_param = NULL, _0, _1;
	zend_long handle, decorationIndexPath;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&elementKind);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(elementKind)
		Z_PARAM_LONG(decorationIndexPath)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &elementKind_param, &decorationIndexPath_param);
	zephir_get_strval(&elementKind, elementKind_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, decorationIndexPath);
	RETURN_MM_LONG(ns_nscollectionviewlayout_final_layout_attributes_for_disappearing_decoration_element_of_kind_at_index_path(&_0, &elementKind, &_1));
}

PHP_METHOD(AppKit_NS_NSCollectionViewLayout_NSCollectionViewLayout, indexPathsToDeleteForSupplementaryViewOfKind)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval elementKind;
	zval *handle_param = NULL, *elementKind_param = NULL, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&elementKind);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(elementKind)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &elementKind_param);
	zephir_get_strval(&elementKind, elementKind_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ns_nscollectionviewlayout_index_paths_to_delete_for_supplementary_view_of_kind(&result, &_0, &elementKind);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSCollectionViewLayout_NSCollectionViewLayout, indexPathsToDeleteForDecorationViewOfKind)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval elementKind;
	zval *handle_param = NULL, *elementKind_param = NULL, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&elementKind);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(elementKind)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &elementKind_param);
	zephir_get_strval(&elementKind, elementKind_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ns_nscollectionviewlayout_index_paths_to_delete_for_decoration_view_of_kind(&result, &_0, &elementKind);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSCollectionViewLayout_NSCollectionViewLayout, indexPathsToInsertForSupplementaryViewOfKind)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval elementKind;
	zval *handle_param = NULL, *elementKind_param = NULL, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&elementKind);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(elementKind)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &elementKind_param);
	zephir_get_strval(&elementKind, elementKind_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ns_nscollectionviewlayout_index_paths_to_insert_for_supplementary_view_of_kind(&result, &_0, &elementKind);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSCollectionViewLayout_NSCollectionViewLayout, indexPathsToInsertForDecorationViewOfKind)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval elementKind;
	zval *handle_param = NULL, *elementKind_param = NULL, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&elementKind);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(elementKind)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &elementKind_param);
	zephir_get_strval(&elementKind, elementKind_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ns_nscollectionviewlayout_index_paths_to_insert_for_decoration_view_of_kind(&result, &_0, &elementKind);
	RETURN_CCTOR(&result);
}

