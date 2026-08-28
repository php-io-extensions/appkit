
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
#include "src/ns-collectionviewgridlayout.h"
#include "kernel/object.h"
#include "kernel/memory.h"
#include "kernel/operators.h"


ZEPHIR_INIT_CLASS(AppKit_NS_NSCollectionViewGridLayout_NSCollectionViewGridLayout)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSCollectionViewGridLayout, NSCollectionViewGridLayout, appkit, ns_nscollectionviewgridlayout_nscollectionviewgridlayout, appkit_ns_nscollectionviewgridlayout_nscollectionviewgridlayout_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSCollectionViewGridLayout_NSCollectionViewGridLayout, init)
{

	RETURN_LONG(ns_nscollectionviewgridlayout_init());
}

PHP_METHOD(AppKit_NS_NSCollectionViewGridLayout_NSCollectionViewGridLayout, margins)
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
	ns_nscollectionviewgridlayout_margins(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSCollectionViewGridLayout_NSCollectionViewGridLayout, setMargins)
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
	ns_nscollectionviewgridlayout_set_margins(&_0, &_1, &_2, &_3, &_4);
}

PHP_METHOD(AppKit_NS_NSCollectionViewGridLayout_NSCollectionViewGridLayout, minimumInteritemSpacing)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(ns_nscollectionviewgridlayout_minimum_interitem_spacing(&_0));
}

PHP_METHOD(AppKit_NS_NSCollectionViewGridLayout_NSCollectionViewGridLayout, setMinimumInteritemSpacing)
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
	ns_nscollectionviewgridlayout_set_minimum_interitem_spacing(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSCollectionViewGridLayout_NSCollectionViewGridLayout, minimumLineSpacing)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(ns_nscollectionviewgridlayout_minimum_line_spacing(&_0));
}

PHP_METHOD(AppKit_NS_NSCollectionViewGridLayout_NSCollectionViewGridLayout, setMinimumLineSpacing)
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
	ns_nscollectionviewgridlayout_set_minimum_line_spacing(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSCollectionViewGridLayout_NSCollectionViewGridLayout, maximumNumberOfRows)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nscollectionviewgridlayout_maximum_number_of_rows(&_0));
}

PHP_METHOD(AppKit_NS_NSCollectionViewGridLayout_NSCollectionViewGridLayout, setMaximumNumberOfRows)
{
	zval *handle_param = NULL, *maximumNumberOfRows_param = NULL, _0, _1;
	zend_long handle, maximumNumberOfRows;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(maximumNumberOfRows)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &maximumNumberOfRows_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, maximumNumberOfRows);
	ns_nscollectionviewgridlayout_set_maximum_number_of_rows(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSCollectionViewGridLayout_NSCollectionViewGridLayout, maximumNumberOfColumns)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nscollectionviewgridlayout_maximum_number_of_columns(&_0));
}

PHP_METHOD(AppKit_NS_NSCollectionViewGridLayout_NSCollectionViewGridLayout, setMaximumNumberOfColumns)
{
	zval *handle_param = NULL, *maximumNumberOfColumns_param = NULL, _0, _1;
	zend_long handle, maximumNumberOfColumns;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(maximumNumberOfColumns)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &maximumNumberOfColumns_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, maximumNumberOfColumns);
	ns_nscollectionviewgridlayout_set_maximum_number_of_columns(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSCollectionViewGridLayout_NSCollectionViewGridLayout, minimumItemSize)
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
	ns_nscollectionviewgridlayout_minimum_item_size(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSCollectionViewGridLayout_NSCollectionViewGridLayout, setMinimumItemSize)
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
	ns_nscollectionviewgridlayout_set_minimum_item_size(&_0, &_1, &_2);
}

PHP_METHOD(AppKit_NS_NSCollectionViewGridLayout_NSCollectionViewGridLayout, maximumItemSize)
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
	ns_nscollectionviewgridlayout_maximum_item_size(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSCollectionViewGridLayout_NSCollectionViewGridLayout, setMaximumItemSize)
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
	ns_nscollectionviewgridlayout_set_maximum_item_size(&_0, &_1, &_2);
}

PHP_METHOD(AppKit_NS_NSCollectionViewGridLayout_NSCollectionViewGridLayout, backgroundColors)
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
	ns_nscollectionviewgridlayout_background_colors(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSCollectionViewGridLayout_NSCollectionViewGridLayout, setBackgroundColors)
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
	ns_nscollectionviewgridlayout_set_background_colors(&_0, backgroundColors);
}

