
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


ZEPHIR_INIT_CLASS(AppKit_NS_NSCollectionViewFlowLayoutInvalidationContext_NSCollectionViewFlowLayoutInvalidationContext)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSCollectionViewFlowLayoutInvalidationContext, NSCollectionViewFlowLayoutInvalidationContext, appkit, ns_nscollectionviewflowlayoutinvalidationcontext_nscollectionviewflowlayoutinvalidationcontext, appkit_ns_nscollectionviewflowlayoutinvalidationcontext_nscollectionviewflowlayoutinvalidationcontext_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSCollectionViewFlowLayoutInvalidationContext_NSCollectionViewFlowLayoutInvalidationContext, init)
{

	RETURN_LONG(ns_nscollectionviewflowlayoutinvalidationcontext_init());
}

PHP_METHOD(AppKit_NS_NSCollectionViewFlowLayoutInvalidationContext_NSCollectionViewFlowLayoutInvalidationContext, invalidateFlowLayoutDelegateMetrics)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nscollectionviewflowlayoutinvalidationcontext_invalidate_flow_layout_delegate_metrics(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSCollectionViewFlowLayoutInvalidationContext_NSCollectionViewFlowLayoutInvalidationContext, setInvalidateFlowLayoutDelegateMetrics)
{
	zend_bool invalidateFlowLayoutDelegateMetrics;
	zval *handle_param = NULL, *invalidateFlowLayoutDelegateMetrics_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(invalidateFlowLayoutDelegateMetrics)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &invalidateFlowLayoutDelegateMetrics_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (invalidateFlowLayoutDelegateMetrics ? 1 : 0));
	ns_nscollectionviewflowlayoutinvalidationcontext_set_invalidate_flow_layout_delegate_metrics(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSCollectionViewFlowLayoutInvalidationContext_NSCollectionViewFlowLayoutInvalidationContext, invalidateFlowLayoutAttributes)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nscollectionviewflowlayoutinvalidationcontext_invalidate_flow_layout_attributes(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSCollectionViewFlowLayoutInvalidationContext_NSCollectionViewFlowLayoutInvalidationContext, setInvalidateFlowLayoutAttributes)
{
	zend_bool invalidateFlowLayoutAttributes;
	zval *handle_param = NULL, *invalidateFlowLayoutAttributes_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(invalidateFlowLayoutAttributes)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &invalidateFlowLayoutAttributes_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (invalidateFlowLayoutAttributes ? 1 : 0));
	ns_nscollectionviewflowlayoutinvalidationcontext_set_invalidate_flow_layout_attributes(&_0, &_1);
}

