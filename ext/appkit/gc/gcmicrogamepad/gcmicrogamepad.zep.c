
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
#include "src/gc-microgamepad.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(AppKit_GC_GCMicroGamepad_GCMicroGamepad)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\GC\\GCMicroGamepad, GCMicroGamepad, appkit, gc_gcmicrogamepad_gcmicrogamepad, appkit_gc_gcmicrogamepad_gcmicrogamepad_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_GC_GCMicroGamepad_GCMicroGamepad, dpad)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_gcmicrogamepad_dpad(&_0));
}

PHP_METHOD(AppKit_GC_GCMicroGamepad_GCMicroGamepad, buttonA)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_gcmicrogamepad_button_a(&_0));
}

PHP_METHOD(AppKit_GC_GCMicroGamepad_GCMicroGamepad, buttonX)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_gcmicrogamepad_button_x(&_0));
}

PHP_METHOD(AppKit_GC_GCMicroGamepad_GCMicroGamepad, buttonMenu)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_gcmicrogamepad_button_menu(&_0));
}

