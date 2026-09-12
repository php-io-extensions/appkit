
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
#include "src/ns-indexset.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"


ZEPHIR_INIT_CLASS(AppKit_NS_NSIndexSet_NSIndexSet)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSIndexSet, NSIndexSet, appkit, ns_nsindexset_nsindexset, appkit_ns_nsindexset_nsindexset_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSIndexSet_NSIndexSet, indexSet)
{

	RETURN_LONG(ns_nsindexset_index_set());
}

PHP_METHOD(AppKit_NS_NSIndexSet_NSIndexSet, indexSetWithIndex)
{
	zval *value_param = NULL, _0;
	zend_long value;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &value_param);
	ZVAL_LONG(&_0, value);
	RETURN_LONG(ns_nsindexset_index_set_with_index(&_0));
}

PHP_METHOD(AppKit_NS_NSIndexSet_NSIndexSet, containsIndex)
{
	zval *handle_param = NULL, *value_param = NULL, _0, _1;
	zend_long handle, value, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &value_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, value);
	r = ns_nsindexset_contains_index(&_0, &_1);
	RETURN_BOOL(r == 1);
}

