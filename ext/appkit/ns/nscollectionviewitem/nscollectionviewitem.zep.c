
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


ZEPHIR_INIT_CLASS(AppKit_NS_NSCollectionViewItem_NSCollectionViewItem)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSCollectionViewItem, NSCollectionViewItem, appkit, ns_nscollectionviewitem_nscollectionviewitem, appkit_ns_nscollectionviewitem_nscollectionviewitem_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSCollectionViewItem_NSCollectionViewItem, initWithNibNameBundle)
{
	zend_long bundle;
	zval *nibName = NULL, nibName_sub, *bundle_param = NULL, _0;

	ZVAL_UNDEF(&nibName_sub);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_ZVAL(nibName)
		Z_PARAM_LONG(bundle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &nibName, &bundle_param);
	ZVAL_LONG(&_0, bundle);
	RETURN_LONG(ns_nscollectionviewitem_init_with_nib_name_bundle(nibName, &_0));
}

PHP_METHOD(AppKit_NS_NSCollectionViewItem_NSCollectionViewItem, collectionView)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nscollectionviewitem_collection_view(&_0));
}

PHP_METHOD(AppKit_NS_NSCollectionViewItem_NSCollectionViewItem, isSelected)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nscollectionviewitem_is_selected(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSCollectionViewItem_NSCollectionViewItem, setSelected)
{
	zend_bool selected;
	zval *handle_param = NULL, *selected_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(selected)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &selected_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (selected ? 1 : 0));
	ns_nscollectionviewitem_set_selected(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSCollectionViewItem_NSCollectionViewItem, highlightState)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nscollectionviewitem_highlight_state(&_0));
}

PHP_METHOD(AppKit_NS_NSCollectionViewItem_NSCollectionViewItem, setHighlightState)
{
	zval *handle_param = NULL, *highlightState_param = NULL, _0, _1;
	zend_long handle, highlightState;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(highlightState)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &highlightState_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, highlightState);
	ns_nscollectionviewitem_set_highlight_state(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSCollectionViewItem_NSCollectionViewItem, imageView)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nscollectionviewitem_image_view(&_0));
}

PHP_METHOD(AppKit_NS_NSCollectionViewItem_NSCollectionViewItem, setImageView)
{
	zval *handle_param = NULL, *imageView_param = NULL, _0, _1;
	zend_long handle, imageView;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(imageView)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &imageView_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, imageView);
	ns_nscollectionviewitem_set_image_view(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSCollectionViewItem_NSCollectionViewItem, textField)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nscollectionviewitem_text_field(&_0));
}

PHP_METHOD(AppKit_NS_NSCollectionViewItem_NSCollectionViewItem, setTextField)
{
	zval *handle_param = NULL, *textField_param = NULL, _0, _1;
	zend_long handle, textField;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(textField)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &textField_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, textField);
	ns_nscollectionviewitem_set_text_field(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSCollectionViewItem_NSCollectionViewItem, draggingImageComponents)
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
	ns_nscollectionviewitem_dragging_image_components(&result, &_0);
	RETURN_CCTOR(&result);
}

