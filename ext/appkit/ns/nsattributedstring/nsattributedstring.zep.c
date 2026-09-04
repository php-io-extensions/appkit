
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
#include "src/ns-attributedstring.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(AppKit_NS_NSAttributedString_NSAttributedString)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSAttributedString, NSAttributedString, appkit, ns_nsattributedstring_nsattributedstring, appkit_ns_nsattributedstring_nsattributedstring_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSAttributedString_NSAttributedString, initWithString)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *str_param = NULL;
	zval str;

	ZVAL_UNDEF(&str);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(str)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &str_param);
	zephir_get_strval(&str, str_param);
	RETURN_MM_LONG(ns_nsattributedstring_init_with_string(&str));
}

PHP_METHOD(AppKit_NS_NSAttributedString_NSAttributedString, initWithStringAttributes)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *str_param = NULL, *attributes = NULL, attributes_sub;
	zval str;

	ZVAL_UNDEF(&str);
	ZVAL_UNDEF(&attributes_sub);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_STR(str)
		Z_PARAM_ZVAL(attributes)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &str_param, &attributes);
	zephir_get_strval(&str, str_param);
	RETURN_MM_LONG(ns_nsattributedstring_init_with_string_attributes(&str, attributes));
}

PHP_METHOD(AppKit_NS_NSAttributedString_NSAttributedString, string_)
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
	ns_nsattributedstring_string(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSAttributedString_NSAttributedString, length)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsattributedstring_length(&_0));
}

