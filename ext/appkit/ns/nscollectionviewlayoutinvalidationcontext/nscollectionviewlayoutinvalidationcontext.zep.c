
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


ZEPHIR_INIT_CLASS(AppKit_NS_NSCollectionViewLayoutInvalidationContext_NSCollectionViewLayoutInvalidationContext)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSCollectionViewLayoutInvalidationContext, NSCollectionViewLayoutInvalidationContext, appkit, ns_nscollectionviewlayoutinvalidationcontext_nscollectionviewlayoutinvalidationcontext, appkit_ns_nscollectionviewlayoutinvalidationcontext_nscollectionviewlayoutinvalidationcontext_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSCollectionViewLayoutInvalidationContext_NSCollectionViewLayoutInvalidationContext, init)
{

	RETURN_LONG(ns_nscollectionviewlayoutinvalidationcontext_init());
}

PHP_METHOD(AppKit_NS_NSCollectionViewLayoutInvalidationContext_NSCollectionViewLayoutInvalidationContext, invalidateEverything)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nscollectionviewlayoutinvalidationcontext_invalidate_everything(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSCollectionViewLayoutInvalidationContext_NSCollectionViewLayoutInvalidationContext, invalidateDataSourceCounts)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nscollectionviewlayoutinvalidationcontext_invalidate_data_source_counts(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSCollectionViewLayoutInvalidationContext_NSCollectionViewLayoutInvalidationContext, invalidateItemsAtIndexPaths)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval indexPaths;
	zval *handle_param = NULL, *indexPaths_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&indexPaths);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ARRAY(indexPaths)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &indexPaths_param);
	zephir_get_arrval(&indexPaths, indexPaths_param);
	ZVAL_LONG(&_0, handle);
	ns_nscollectionviewlayoutinvalidationcontext_invalidate_items_at_index_paths(&_0, &indexPaths);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSCollectionViewLayoutInvalidationContext_NSCollectionViewLayoutInvalidationContext, invalidateSupplementaryElementsOfKindAtIndexPaths)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval indexPaths;
	zval elementKind;
	zval *handle_param = NULL, *elementKind_param = NULL, *indexPaths_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&elementKind);
	ZVAL_UNDEF(&indexPaths);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(elementKind)
		Z_PARAM_ARRAY(indexPaths)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &elementKind_param, &indexPaths_param);
	zephir_get_strval(&elementKind, elementKind_param);
	zephir_get_arrval(&indexPaths, indexPaths_param);
	ZVAL_LONG(&_0, handle);
	ns_nscollectionviewlayoutinvalidationcontext_invalidate_supplementary_elements_of_kind_at_index_paths(&_0, &elementKind, &indexPaths);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSCollectionViewLayoutInvalidationContext_NSCollectionViewLayoutInvalidationContext, invalidateDecorationElementsOfKindAtIndexPaths)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval indexPaths;
	zval elementKind;
	zval *handle_param = NULL, *elementKind_param = NULL, *indexPaths_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&elementKind);
	ZVAL_UNDEF(&indexPaths);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(elementKind)
		Z_PARAM_ARRAY(indexPaths)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &elementKind_param, &indexPaths_param);
	zephir_get_strval(&elementKind, elementKind_param);
	zephir_get_arrval(&indexPaths, indexPaths_param);
	ZVAL_LONG(&_0, handle);
	ns_nscollectionviewlayoutinvalidationcontext_invalidate_decoration_elements_of_kind_at_index_paths(&_0, &elementKind, &indexPaths);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSCollectionViewLayoutInvalidationContext_NSCollectionViewLayoutInvalidationContext, invalidatedItemIndexPaths)
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
	ns_nscollectionviewlayoutinvalidationcontext_invalidated_item_index_paths(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSCollectionViewLayoutInvalidationContext_NSCollectionViewLayoutInvalidationContext, invalidatedSupplementaryIndexPaths)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nscollectionviewlayoutinvalidationcontext_invalidated_supplementary_index_paths(&_0));
}

PHP_METHOD(AppKit_NS_NSCollectionViewLayoutInvalidationContext_NSCollectionViewLayoutInvalidationContext, invalidatedDecorationIndexPaths)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nscollectionviewlayoutinvalidationcontext_invalidated_decoration_index_paths(&_0));
}

PHP_METHOD(AppKit_NS_NSCollectionViewLayoutInvalidationContext_NSCollectionViewLayoutInvalidationContext, contentOffsetAdjustment)
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
	ns_nscollectionviewlayoutinvalidationcontext_content_offset_adjustment(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSCollectionViewLayoutInvalidationContext_NSCollectionViewLayoutInvalidationContext, setContentOffsetAdjustment)
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
	ns_nscollectionviewlayoutinvalidationcontext_set_content_offset_adjustment(&_0, &_1, &_2);
}

PHP_METHOD(AppKit_NS_NSCollectionViewLayoutInvalidationContext_NSCollectionViewLayoutInvalidationContext, contentSizeAdjustment)
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
	ns_nscollectionviewlayoutinvalidationcontext_content_size_adjustment(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSCollectionViewLayoutInvalidationContext_NSCollectionViewLayoutInvalidationContext, setContentSizeAdjustment)
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
	ns_nscollectionviewlayoutinvalidationcontext_set_content_size_adjustment(&_0, &_1, &_2);
}

