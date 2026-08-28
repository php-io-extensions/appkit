
#ifdef HAVE_CONFIG_H
#include "../../ext_config.h"
#endif

#include <php.h>
#include "../../php_ext.h"
#include "../../ext.h"

#include <Zend/zend_operators.h>
#include <Zend/zend_exceptions.h>
#include <Zend/zend_interfaces.h>

#include "kernel/main.h"
#include "src/ns-bridge.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(AppKit_Bridge_Bridge)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\Bridge, Bridge, appkit, bridge_bridge, appkit_bridge_bridge_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_Bridge_Bridge, retain)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_bridge_retain(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_Bridge_Bridge, release)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	ns_bridge_release(&_0);
}

PHP_METHOD(AppKit_Bridge_Bridge, isValid)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_bridge_is_valid(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_Bridge_Bridge, className)
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
	ns_bridge_class_name(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_Bridge_Bridge, isKindOfClass)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval className;
	zval *handle_param = NULL, *className_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&className);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(className)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &className_param);
	zephir_get_strval(&className, className_param);
	ZVAL_LONG(&_0, handle);
	r = ns_bridge_is_kind_of_class(&_0, &className);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(AppKit_Bridge_Bridge, pump)
{
	zval *timeout_param = NULL, _0;
	double timeout;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ZVAL(timeout)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &timeout_param);
	timeout = zephir_get_doubleval(timeout_param);
	ZVAL_DOUBLE(&_0, timeout);
	RETURN_LONG(ns_bridge_pump(&_0));
}

PHP_METHOD(AppKit_Bridge_Bridge, setAction)
{
	zval *handle_param = NULL, *callable_ = NULL, callable__sub, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&callable__sub);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(callable_)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &callable_);
	ZVAL_LONG(&_0, handle);
	r = ns_bridge_set_action(&_0, callable_);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_Bridge_Bridge, removeAction)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	ns_bridge_remove_action(&_0);
}

PHP_METHOD(AppKit_Bridge_Bridge, observeNotification)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval name;
	zval *object__param = NULL, *name_param = NULL, *callable_ = NULL, callable__sub, _0;
	zend_long object_;

	ZVAL_UNDEF(&callable__sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&name);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(object_)
		Z_PARAM_STR(name)
		Z_PARAM_ZVAL(callable_)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &object__param, &name_param, &callable_);
	zephir_get_strval(&name, name_param);
	ZVAL_LONG(&_0, object_);
	RETURN_MM_LONG(ns_bridge_observe(&_0, &name, callable_));
}

PHP_METHOD(AppKit_Bridge_Bridge, removeObserver)
{
	zval *token_param = NULL, _0;
	zend_long token;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(token)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &token_param);
	ZVAL_LONG(&_0, token);
	ns_bridge_unobserve(&_0);
}

PHP_METHOD(AppKit_Bridge_Bridge, delegateNew)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *protocolName_param = NULL;
	zval protocolName;

	ZVAL_UNDEF(&protocolName);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(protocolName)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &protocolName_param);
	zephir_get_strval(&protocolName, protocolName_param);
	RETURN_MM_LONG(ns_bridge_delegate_new(&protocolName));
}

PHP_METHOD(AppKit_Bridge_Bridge, delegateOn)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval selector;
	zval *delegate_param = NULL, *selector_param = NULL, *callable_ = NULL, callable__sub, _0;
	zend_long delegate, r = 0;

	ZVAL_UNDEF(&callable__sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&selector);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(delegate)
		Z_PARAM_STR(selector)
		Z_PARAM_ZVAL(callable_)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &delegate_param, &selector_param, &callable_);
	zephir_get_strval(&selector, selector_param);
	ZVAL_LONG(&_0, delegate);
	r = ns_bridge_delegate_on(&_0, &selector, callable_);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(AppKit_Bridge_Bridge, delegateOff)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval selector;
	zval *delegate_param = NULL, *selector_param = NULL, _0;
	zend_long delegate;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&selector);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(delegate)
		Z_PARAM_STR(selector)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &delegate_param, &selector_param);
	zephir_get_strval(&selector, selector_param);
	ZVAL_LONG(&_0, delegate);
	ns_bridge_delegate_off(&_0, &selector);
	ZEPHIR_MM_RESTORE();
}

