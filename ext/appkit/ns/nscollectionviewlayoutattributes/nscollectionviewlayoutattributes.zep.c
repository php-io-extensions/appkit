
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
#include "kernel/memory.h"
#include "kernel/operators.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(AppKit_NS_NSCollectionViewLayoutAttributes_NSCollectionViewLayoutAttributes)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSCollectionViewLayoutAttributes, NSCollectionViewLayoutAttributes, appkit, ns_nscollectionviewlayoutattributes_nscollectionviewlayoutattributes, appkit_ns_nscollectionviewlayoutattributes_nscollectionviewlayoutattributes_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSCollectionViewLayoutAttributes_NSCollectionViewLayoutAttributes, frame)
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
	ns_nscollectionviewlayoutattributes_frame(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSCollectionViewLayoutAttributes_NSCollectionViewLayoutAttributes, setFrame)
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
	ns_nscollectionviewlayoutattributes_set_frame(&_0, &_1, &_2, &_3, &_4);
}

PHP_METHOD(AppKit_NS_NSCollectionViewLayoutAttributes_NSCollectionViewLayoutAttributes, size)
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
	ns_nscollectionviewlayoutattributes_size(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSCollectionViewLayoutAttributes_NSCollectionViewLayoutAttributes, setSize)
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
	ns_nscollectionviewlayoutattributes_set_size(&_0, &_1, &_2);
}

PHP_METHOD(AppKit_NS_NSCollectionViewLayoutAttributes_NSCollectionViewLayoutAttributes, alpha)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(ns_nscollectionviewlayoutattributes_alpha(&_0));
}

PHP_METHOD(AppKit_NS_NSCollectionViewLayoutAttributes_NSCollectionViewLayoutAttributes, setAlpha)
{
	double alpha;
	zval *handle_param = NULL, *alpha_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(alpha)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &alpha_param);
	alpha = zephir_get_doubleval(alpha_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, alpha);
	ns_nscollectionviewlayoutattributes_set_alpha(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSCollectionViewLayoutAttributes_NSCollectionViewLayoutAttributes, zIndex)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nscollectionviewlayoutattributes_z_index(&_0));
}

PHP_METHOD(AppKit_NS_NSCollectionViewLayoutAttributes_NSCollectionViewLayoutAttributes, setZIndex)
{
	zval *handle_param = NULL, *zIndex_param = NULL, _0, _1;
	zend_long handle, zIndex;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(zIndex)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &zIndex_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, zIndex);
	ns_nscollectionviewlayoutattributes_set_z_index(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSCollectionViewLayoutAttributes_NSCollectionViewLayoutAttributes, isHidden)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nscollectionviewlayoutattributes_is_hidden(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSCollectionViewLayoutAttributes_NSCollectionViewLayoutAttributes, setHidden)
{
	zend_bool hidden;
	zval *handle_param = NULL, *hidden_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(hidden)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &hidden_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (hidden ? 1 : 0));
	ns_nscollectionviewlayoutattributes_set_hidden(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSCollectionViewLayoutAttributes_NSCollectionViewLayoutAttributes, indexPath)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nscollectionviewlayoutattributes_index_path(&_0));
}

PHP_METHOD(AppKit_NS_NSCollectionViewLayoutAttributes_NSCollectionViewLayoutAttributes, setIndexPath)
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
	ns_nscollectionviewlayoutattributes_set_index_path(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSCollectionViewLayoutAttributes_NSCollectionViewLayoutAttributes, representedElementCategory)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nscollectionviewlayoutattributes_represented_element_category(&_0));
}

PHP_METHOD(AppKit_NS_NSCollectionViewLayoutAttributes_NSCollectionViewLayoutAttributes, representedElementKind)
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
	ns_nscollectionviewlayoutattributes_represented_element_kind(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSCollectionViewLayoutAttributes_NSCollectionViewLayoutAttributes, layoutAttributesForItemWithIndexPath)
{
	zval *indexPath_param = NULL, _0;
	zend_long indexPath;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(indexPath)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &indexPath_param);
	ZVAL_LONG(&_0, indexPath);
	RETURN_LONG(ns_nscollectionviewlayoutattributes_layout_attributes_for_item_with_index_path(&_0));
}

PHP_METHOD(AppKit_NS_NSCollectionViewLayoutAttributes_NSCollectionViewLayoutAttributes, layoutAttributesForInterItemGapBeforeIndexPath)
{
	zval *indexPath_param = NULL, _0;
	zend_long indexPath;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(indexPath)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &indexPath_param);
	ZVAL_LONG(&_0, indexPath);
	RETURN_LONG(ns_nscollectionviewlayoutattributes_layout_attributes_for_inter_item_gap_before_index_path(&_0));
}

PHP_METHOD(AppKit_NS_NSCollectionViewLayoutAttributes_NSCollectionViewLayoutAttributes, layoutAttributesForSupplementaryViewOfKindWithIndexPath)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long indexPath;
	zval *elementKind_param = NULL, *indexPath_param = NULL, _0;
	zval elementKind;

	ZVAL_UNDEF(&elementKind);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_STR(elementKind)
		Z_PARAM_LONG(indexPath)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &elementKind_param, &indexPath_param);
	zephir_get_strval(&elementKind, elementKind_param);
	ZVAL_LONG(&_0, indexPath);
	RETURN_MM_LONG(ns_nscollectionviewlayoutattributes_layout_attributes_for_supplementary_view_of_kind_with_index_path(&elementKind, &_0));
}

PHP_METHOD(AppKit_NS_NSCollectionViewLayoutAttributes_NSCollectionViewLayoutAttributes, layoutAttributesForDecorationViewOfKindWithIndexPath)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long indexPath;
	zval *decorationViewKind_param = NULL, *indexPath_param = NULL, _0;
	zval decorationViewKind;

	ZVAL_UNDEF(&decorationViewKind);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_STR(decorationViewKind)
		Z_PARAM_LONG(indexPath)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &decorationViewKind_param, &indexPath_param);
	zephir_get_strval(&decorationViewKind, decorationViewKind_param);
	ZVAL_LONG(&_0, indexPath);
	RETURN_MM_LONG(ns_nscollectionviewlayoutattributes_layout_attributes_for_decoration_view_of_kind_with_index_path(&decorationViewKind, &_0));
}

