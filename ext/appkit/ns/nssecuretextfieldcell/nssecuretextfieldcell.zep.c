
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
#include "src/ns-securetextfield.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(AppKit_NS_NSSecureTextFieldCell_NSSecureTextFieldCell)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSSecureTextFieldCell, NSSecureTextFieldCell, appkit, ns_nssecuretextfieldcell_nssecuretextfieldcell, appkit_ns_nssecuretextfieldcell_nssecuretextfieldcell_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSSecureTextFieldCell_NSSecureTextFieldCell, initTextCell)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *string__param = NULL;
	zval string_;

	ZVAL_UNDEF(&string_);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(string_)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &string__param);
	zephir_get_strval(&string_, string__param);
	RETURN_MM_LONG(ns_nssecuretextfieldcell_init_text_cell(&string_));
}

PHP_METHOD(AppKit_NS_NSSecureTextFieldCell_NSSecureTextFieldCell, echosBullets)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nssecuretextfieldcell_echos_bullets(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSSecureTextFieldCell_NSSecureTextFieldCell, setEchosBullets)
{
	zend_bool echosBullets;
	zval *handle_param = NULL, *echosBullets_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(echosBullets)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &echosBullets_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (echosBullets ? 1 : 0));
	ns_nssecuretextfieldcell_set_echos_bullets(&_0, &_1);
}

