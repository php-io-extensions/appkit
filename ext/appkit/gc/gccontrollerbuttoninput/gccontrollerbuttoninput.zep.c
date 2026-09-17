
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
#include "src/gc-controllerbuttoninput.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(AppKit_GC_GCControllerButtonInput_GCControllerButtonInput)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\GC\\GCControllerButtonInput, GCControllerButtonInput, appkit, gc_gccontrollerbuttoninput_gccontrollerbuttoninput, appkit_gc_gccontrollerbuttoninput_gccontrollerbuttoninput_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_GC_GCControllerButtonInput_GCControllerButtonInput, value)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(ns_gccontrollerbuttoninput_value(&_0));
}

PHP_METHOD(AppKit_GC_GCControllerButtonInput_GCControllerButtonInput, isPressed)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_gccontrollerbuttoninput_is_pressed(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_GC_GCControllerButtonInput_GCControllerButtonInput, isTouched)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_gccontrollerbuttoninput_is_touched(&_0);
	RETURN_BOOL(r == 1);
}

