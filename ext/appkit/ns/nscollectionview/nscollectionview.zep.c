
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
#include "src/ns-collectionview.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(AppKit_NS_NSCollectionView_NSCollectionView)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSCollectionView, NSCollectionView, appkit, ns_nscollectionview_nscollectionview, appkit_ns_nscollectionview_nscollectionview_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSCollectionView_NSCollectionView, initWithFrame)
{
	zval *x_param = NULL, *y_param = NULL, *width_param = NULL, *height_param = NULL, _0, _1, _2, _3;
	double x, y, width, height;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_ZVAL(x)
		Z_PARAM_ZVAL(y)
		Z_PARAM_ZVAL(width)
		Z_PARAM_ZVAL(height)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &x_param, &y_param, &width_param, &height_param);
	x = zephir_get_doubleval(x_param);
	y = zephir_get_doubleval(y_param);
	width = zephir_get_doubleval(width_param);
	height = zephir_get_doubleval(height_param);
	ZVAL_DOUBLE(&_0, x);
	ZVAL_DOUBLE(&_1, y);
	ZVAL_DOUBLE(&_2, width);
	ZVAL_DOUBLE(&_3, height);
	RETURN_LONG(ns_nscollectionview_init_with_frame(&_0, &_1, &_2, &_3));
}

PHP_METHOD(AppKit_NS_NSCollectionView_NSCollectionView, dataSource)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nscollectionview_data_source(&_0));
}

PHP_METHOD(AppKit_NS_NSCollectionView_NSCollectionView, setDataSource)
{
	zval *handle_param = NULL, *dataSource_param = NULL, _0, _1;
	zend_long handle, dataSource;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(dataSource)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &dataSource_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, dataSource);
	ns_nscollectionview_set_data_source(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSCollectionView_NSCollectionView, prefetchDataSource)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nscollectionview_prefetch_data_source(&_0));
}

PHP_METHOD(AppKit_NS_NSCollectionView_NSCollectionView, setPrefetchDataSource)
{
	zval *handle_param = NULL, *prefetchDataSource_param = NULL, _0, _1;
	zend_long handle, prefetchDataSource;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(prefetchDataSource)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &prefetchDataSource_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, prefetchDataSource);
	ns_nscollectionview_set_prefetch_data_source(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSCollectionView_NSCollectionView, content)
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
	ns_nscollectionview_content(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSCollectionView_NSCollectionView, setContent)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval content;
	zval *handle_param = NULL, *content_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&content);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ARRAY(content)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &content_param);
	zephir_get_arrval(&content, content_param);
	ZVAL_LONG(&_0, handle);
	ns_nscollectionview_set_content(&_0, &content);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSCollectionView_NSCollectionView, reloadData)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	ns_nscollectionview_reload_data(&_0);
}

PHP_METHOD(AppKit_NS_NSCollectionView_NSCollectionView, delegate)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nscollectionview_delegate(&_0));
}

PHP_METHOD(AppKit_NS_NSCollectionView_NSCollectionView, setDelegate)
{
	zval *handle_param = NULL, *delegate_param = NULL, _0, _1;
	zend_long handle, delegate;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(delegate)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &delegate_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, delegate);
	ns_nscollectionview_set_delegate(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSCollectionView_NSCollectionView, backgroundView)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nscollectionview_background_view(&_0));
}

PHP_METHOD(AppKit_NS_NSCollectionView_NSCollectionView, setBackgroundView)
{
	zval *handle_param = NULL, *backgroundView_param = NULL, _0, _1;
	zend_long handle, backgroundView;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(backgroundView)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &backgroundView_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, backgroundView);
	ns_nscollectionview_set_background_view(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSCollectionView_NSCollectionView, backgroundViewScrollsWithContent)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nscollectionview_background_view_scrolls_with_content(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSCollectionView_NSCollectionView, setBackgroundViewScrollsWithContent)
{
	zend_bool backgroundViewScrollsWithContent;
	zval *handle_param = NULL, *backgroundViewScrollsWithContent_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(backgroundViewScrollsWithContent)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &backgroundViewScrollsWithContent_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (backgroundViewScrollsWithContent ? 1 : 0));
	ns_nscollectionview_set_background_view_scrolls_with_content(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSCollectionView_NSCollectionView, collectionViewLayout)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nscollectionview_collection_view_layout(&_0));
}

PHP_METHOD(AppKit_NS_NSCollectionView_NSCollectionView, setCollectionViewLayout)
{
	zval *handle_param = NULL, *collectionViewLayout_param = NULL, _0, _1;
	zend_long handle, collectionViewLayout;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(collectionViewLayout)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &collectionViewLayout_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, collectionViewLayout);
	ns_nscollectionview_set_collection_view_layout(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSCollectionView_NSCollectionView, layoutAttributesForItemAtIndexPath)
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
	RETURN_LONG(ns_nscollectionview_layout_attributes_for_item_at_index_path(&_0, &_1));
}

PHP_METHOD(AppKit_NS_NSCollectionView_NSCollectionView, layoutAttributesForSupplementaryElementOfKindAtIndexPath)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval kind;
	zval *handle_param = NULL, *kind_param = NULL, *indexPath_param = NULL, _0, _1;
	zend_long handle, indexPath;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&kind);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(kind)
		Z_PARAM_LONG(indexPath)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &kind_param, &indexPath_param);
	zephir_get_strval(&kind, kind_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, indexPath);
	RETURN_MM_LONG(ns_nscollectionview_layout_attributes_for_supplementary_element_of_kind_at_index_path(&_0, &kind, &_1));
}

PHP_METHOD(AppKit_NS_NSCollectionView_NSCollectionView, frameForItemAtIndex)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *index_param = NULL, result, _0, _1;
	zend_long handle, index;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(index)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &index_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, index);
	ns_nscollectionview_frame_for_item_at_index(&result, &_0, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSCollectionView_NSCollectionView, frameForItemAtIndexWithNumberOfItems)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *index_param = NULL, *numberOfItems_param = NULL, result, _0, _1, _2;
	zend_long handle, index, numberOfItems;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(index)
		Z_PARAM_LONG(numberOfItems)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &index_param, &numberOfItems_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, index);
	ZVAL_LONG(&_2, numberOfItems);
	ns_nscollectionview_frame_for_item_at_index_with_number_of_items(&result, &_0, &_1, &_2);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSCollectionView_NSCollectionView, backgroundColors)
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
	ns_nscollectionview_background_colors(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSCollectionView_NSCollectionView, setBackgroundColors)
{
	zval *handle_param = NULL, *backgroundColors = NULL, backgroundColors_sub, _0;
	zend_long handle;

	ZVAL_UNDEF(&backgroundColors_sub);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(backgroundColors)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &backgroundColors);
	ZVAL_LONG(&_0, handle);
	ns_nscollectionview_set_background_colors(&_0, backgroundColors);
}

PHP_METHOD(AppKit_NS_NSCollectionView_NSCollectionView, numberOfSections)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nscollectionview_number_of_sections(&_0));
}

PHP_METHOD(AppKit_NS_NSCollectionView_NSCollectionView, numberOfItemsInSection)
{
	zval *handle_param = NULL, *section_param = NULL, _0, _1;
	zend_long handle, section;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(section)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &section_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, section);
	RETURN_LONG(ns_nscollectionview_number_of_items_in_section(&_0, &_1));
}

PHP_METHOD(AppKit_NS_NSCollectionView_NSCollectionView, isFirstResponder)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nscollectionview_is_first_responder(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSCollectionView_NSCollectionView, isSelectable)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nscollectionview_is_selectable(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSCollectionView_NSCollectionView, setSelectable)
{
	zend_bool selectable;
	zval *handle_param = NULL, *selectable_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(selectable)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &selectable_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (selectable ? 1 : 0));
	ns_nscollectionview_set_selectable(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSCollectionView_NSCollectionView, allowsEmptySelection)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nscollectionview_allows_empty_selection(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSCollectionView_NSCollectionView, setAllowsEmptySelection)
{
	zend_bool allowsEmptySelection;
	zval *handle_param = NULL, *allowsEmptySelection_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(allowsEmptySelection)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &allowsEmptySelection_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (allowsEmptySelection ? 1 : 0));
	ns_nscollectionview_set_allows_empty_selection(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSCollectionView_NSCollectionView, allowsMultipleSelection)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nscollectionview_allows_multiple_selection(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSCollectionView_NSCollectionView, setAllowsMultipleSelection)
{
	zend_bool allowsMultipleSelection;
	zval *handle_param = NULL, *allowsMultipleSelection_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(allowsMultipleSelection)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &allowsMultipleSelection_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (allowsMultipleSelection ? 1 : 0));
	ns_nscollectionview_set_allows_multiple_selection(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSCollectionView_NSCollectionView, selectionIndexes)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nscollectionview_selection_indexes(&_0));
}

PHP_METHOD(AppKit_NS_NSCollectionView_NSCollectionView, setSelectionIndexes)
{
	zval *handle_param = NULL, *selectionIndexes_param = NULL, _0, _1;
	zend_long handle, selectionIndexes;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(selectionIndexes)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &selectionIndexes_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, selectionIndexes);
	ns_nscollectionview_set_selection_indexes(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSCollectionView_NSCollectionView, selectionIndexPaths)
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
	ns_nscollectionview_selection_index_paths(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSCollectionView_NSCollectionView, setSelectionIndexPaths)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval selectionIndexPaths;
	zval *handle_param = NULL, *selectionIndexPaths_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&selectionIndexPaths);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ARRAY(selectionIndexPaths)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &selectionIndexPaths_param);
	zephir_get_arrval(&selectionIndexPaths, selectionIndexPaths_param);
	ZVAL_LONG(&_0, handle);
	ns_nscollectionview_set_selection_index_paths(&_0, &selectionIndexPaths);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSCollectionView_NSCollectionView, selectItemsAtIndexPathsScrollPosition)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval indexPaths;
	zval *handle_param = NULL, *indexPaths_param = NULL, *scrollPosition_param = NULL, _0, _1;
	zend_long handle, scrollPosition;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&indexPaths);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_ARRAY(indexPaths)
		Z_PARAM_LONG(scrollPosition)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &indexPaths_param, &scrollPosition_param);
	zephir_get_arrval(&indexPaths, indexPaths_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, scrollPosition);
	ns_nscollectionview_select_items_at_index_paths_scroll_position(&_0, &indexPaths, &_1);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSCollectionView_NSCollectionView, deselectItemsAtIndexPaths)
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
	ns_nscollectionview_deselect_items_at_index_paths(&_0, &indexPaths);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSCollectionView_NSCollectionView, selectAll)
{
	zval *handle_param = NULL, *sender_param = NULL, _0, _1;
	zend_long handle, sender;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(sender)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &sender_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, sender);
	ns_nscollectionview_select_all(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSCollectionView_NSCollectionView, deselectAll)
{
	zval *handle_param = NULL, *sender_param = NULL, _0, _1;
	zend_long handle, sender;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(sender)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &sender_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, sender);
	ns_nscollectionview_deselect_all(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSCollectionView_NSCollectionView, registerNibForItemWithIdentifier)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval identifier;
	zval *handle_param = NULL, *nib_param = NULL, *identifier_param = NULL, _0, _1;
	zend_long handle, nib;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&identifier);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(nib)
		Z_PARAM_STR(identifier)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &nib_param, &identifier_param);
	zephir_get_strval(&identifier, identifier_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, nib);
	ns_nscollectionview_register_nib_for_item_with_identifier(&_0, &_1, &identifier);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSCollectionView_NSCollectionView, registerNibForSupplementaryViewOfKindWithIdentifier)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval kind, identifier;
	zval *handle_param = NULL, *nib_param = NULL, *kind_param = NULL, *identifier_param = NULL, _0, _1;
	zend_long handle, nib;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&kind);
	ZVAL_UNDEF(&identifier);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(nib)
		Z_PARAM_STR(kind)
		Z_PARAM_STR(identifier)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 0, &handle_param, &nib_param, &kind_param, &identifier_param);
	zephir_get_strval(&kind, kind_param);
	zephir_get_strval(&identifier, identifier_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, nib);
	ns_nscollectionview_register_nib_for_supplementary_view_of_kind_with_identifier(&_0, &_1, &kind, &identifier);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSCollectionView_NSCollectionView, makeItemWithIdentifierForIndexPath)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval identifier;
	zval *handle_param = NULL, *identifier_param = NULL, *indexPath_param = NULL, _0, _1;
	zend_long handle, indexPath;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&identifier);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(identifier)
		Z_PARAM_LONG(indexPath)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &identifier_param, &indexPath_param);
	zephir_get_strval(&identifier, identifier_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, indexPath);
	RETURN_MM_LONG(ns_nscollectionview_make_item_with_identifier_for_index_path(&_0, &identifier, &_1));
}

PHP_METHOD(AppKit_NS_NSCollectionView_NSCollectionView, makeSupplementaryViewOfKindWithIdentifierForIndexPath)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval elementKind, identifier;
	zval *handle_param = NULL, *elementKind_param = NULL, *identifier_param = NULL, *indexPath_param = NULL, _0, _1;
	zend_long handle, indexPath;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&elementKind);
	ZVAL_UNDEF(&identifier);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(elementKind)
		Z_PARAM_STR(identifier)
		Z_PARAM_LONG(indexPath)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 0, &handle_param, &elementKind_param, &identifier_param, &indexPath_param);
	zephir_get_strval(&elementKind, elementKind_param);
	zephir_get_strval(&identifier, identifier_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, indexPath);
	RETURN_MM_LONG(ns_nscollectionview_make_supplementary_view_of_kind_with_identifier_for_index_path(&_0, &elementKind, &identifier, &_1));
}

PHP_METHOD(AppKit_NS_NSCollectionView_NSCollectionView, itemAtIndex)
{
	zval *handle_param = NULL, *index_param = NULL, _0, _1;
	zend_long handle, index;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(index)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &index_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, index);
	RETURN_LONG(ns_nscollectionview_item_at_index(&_0, &_1));
}

PHP_METHOD(AppKit_NS_NSCollectionView_NSCollectionView, itemAtIndexPath)
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
	RETURN_LONG(ns_nscollectionview_item_at_index_path(&_0, &_1));
}

PHP_METHOD(AppKit_NS_NSCollectionView_NSCollectionView, visibleItems)
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
	ns_nscollectionview_visible_items(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSCollectionView_NSCollectionView, indexPathsForVisibleItems)
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
	ns_nscollectionview_index_paths_for_visible_items(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSCollectionView_NSCollectionView, indexPathForItem)
{
	zval *handle_param = NULL, *item_param = NULL, _0, _1;
	zend_long handle, item;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &item_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, item);
	RETURN_LONG(ns_nscollectionview_index_path_for_item(&_0, &_1));
}

PHP_METHOD(AppKit_NS_NSCollectionView_NSCollectionView, indexPathForItemAtPoint)
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
	RETURN_LONG(ns_nscollectionview_index_path_for_item_at_point(&_0, &_1, &_2));
}

PHP_METHOD(AppKit_NS_NSCollectionView_NSCollectionView, supplementaryViewForElementKindAtIndexPath)
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
	RETURN_MM_LONG(ns_nscollectionview_supplementary_view_for_element_kind_at_index_path(&_0, &elementKind, &_1));
}

PHP_METHOD(AppKit_NS_NSCollectionView_NSCollectionView, visibleSupplementaryViewsOfKind)
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
	ns_nscollectionview_visible_supplementary_views_of_kind(&result, &_0, &elementKind);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSCollectionView_NSCollectionView, indexPathsForVisibleSupplementaryElementsOfKind)
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
	ns_nscollectionview_index_paths_for_visible_supplementary_elements_of_kind(&result, &_0, &elementKind);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSCollectionView_NSCollectionView, insertSections)
{
	zval *handle_param = NULL, *sections_param = NULL, _0, _1;
	zend_long handle, sections;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(sections)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &sections_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, sections);
	ns_nscollectionview_insert_sections(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSCollectionView_NSCollectionView, deleteSections)
{
	zval *handle_param = NULL, *sections_param = NULL, _0, _1;
	zend_long handle, sections;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(sections)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &sections_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, sections);
	ns_nscollectionview_delete_sections(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSCollectionView_NSCollectionView, reloadSections)
{
	zval *handle_param = NULL, *sections_param = NULL, _0, _1;
	zend_long handle, sections;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(sections)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &sections_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, sections);
	ns_nscollectionview_reload_sections(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSCollectionView_NSCollectionView, moveSectionToSection)
{
	zval *handle_param = NULL, *section_param = NULL, *newSection_param = NULL, _0, _1, _2;
	zend_long handle, section, newSection;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(section)
		Z_PARAM_LONG(newSection)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &section_param, &newSection_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, section);
	ZVAL_LONG(&_2, newSection);
	ns_nscollectionview_move_section_to_section(&_0, &_1, &_2);
}

PHP_METHOD(AppKit_NS_NSCollectionView_NSCollectionView, insertItemsAtIndexPaths)
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
	ns_nscollectionview_insert_items_at_index_paths(&_0, &indexPaths);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSCollectionView_NSCollectionView, deleteItemsAtIndexPaths)
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
	ns_nscollectionview_delete_items_at_index_paths(&_0, &indexPaths);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSCollectionView_NSCollectionView, reloadItemsAtIndexPaths)
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
	ns_nscollectionview_reload_items_at_index_paths(&_0, &indexPaths);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSCollectionView_NSCollectionView, moveItemAtIndexPathToIndexPath)
{
	zval *handle_param = NULL, *indexPath_param = NULL, *newIndexPath_param = NULL, _0, _1, _2;
	zend_long handle, indexPath, newIndexPath;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(indexPath)
		Z_PARAM_LONG(newIndexPath)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &indexPath_param, &newIndexPath_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, indexPath);
	ZVAL_LONG(&_2, newIndexPath);
	ns_nscollectionview_move_item_at_index_path_to_index_path(&_0, &_1, &_2);
}

PHP_METHOD(AppKit_NS_NSCollectionView_NSCollectionView, toggleSectionCollapse)
{
	zval *handle_param = NULL, *sender_param = NULL, _0, _1;
	zend_long handle, sender;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(sender)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &sender_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, sender);
	ns_nscollectionview_toggle_section_collapse(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSCollectionView_NSCollectionView, scrollToItemsAtIndexPathsScrollPosition)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval indexPaths;
	zval *handle_param = NULL, *indexPaths_param = NULL, *scrollPosition_param = NULL, _0, _1;
	zend_long handle, scrollPosition;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&indexPaths);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_ARRAY(indexPaths)
		Z_PARAM_LONG(scrollPosition)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &indexPaths_param, &scrollPosition_param);
	zephir_get_arrval(&indexPaths, indexPaths_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, scrollPosition);
	ns_nscollectionview_scroll_to_items_at_index_paths_scroll_position(&_0, &indexPaths, &_1);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSCollectionView_NSCollectionView, setDraggingSourceOperationMaskForLocal)
{
	zend_bool localDestination;
	zval *handle_param = NULL, *dragOperationMask_param = NULL, *localDestination_param = NULL, _0, _1, _2;
	zend_long handle, dragOperationMask;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(dragOperationMask)
		Z_PARAM_BOOL(localDestination)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &dragOperationMask_param, &localDestination_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, dragOperationMask);
	ZVAL_BOOL(&_2, (localDestination ? 1 : 0));
	ns_nscollectionview_set_dragging_source_operation_mask_for_local(&_0, &_1, &_2);
}

