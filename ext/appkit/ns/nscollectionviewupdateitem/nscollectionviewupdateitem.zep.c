
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


ZEPHIR_INIT_CLASS(AppKit_NS_NSCollectionViewUpdateItem_NSCollectionViewUpdateItem)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSCollectionViewUpdateItem, NSCollectionViewUpdateItem, appkit, ns_nscollectionviewupdateitem_nscollectionviewupdateitem, appkit_ns_nscollectionviewupdateitem_nscollectionviewupdateitem_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSCollectionViewUpdateItem_NSCollectionViewUpdateItem, init)
{

	RETURN_LONG(ns_nscollectionviewupdateitem_init());
}

PHP_METHOD(AppKit_NS_NSCollectionViewUpdateItem_NSCollectionViewUpdateItem, indexPathBeforeUpdate)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nscollectionviewupdateitem_index_path_before_update(&_0));
}

PHP_METHOD(AppKit_NS_NSCollectionViewUpdateItem_NSCollectionViewUpdateItem, indexPathAfterUpdate)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nscollectionviewupdateitem_index_path_after_update(&_0));
}

PHP_METHOD(AppKit_NS_NSCollectionViewUpdateItem_NSCollectionViewUpdateItem, updateAction)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nscollectionviewupdateitem_update_action(&_0));
}

