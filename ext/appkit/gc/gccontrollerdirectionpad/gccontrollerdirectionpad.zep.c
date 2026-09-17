
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
#include "src/gc-controllerdirectionpad.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(AppKit_GC_GCControllerDirectionPad_GCControllerDirectionPad)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\GC\\GCControllerDirectionPad, GCControllerDirectionPad, appkit, gc_gccontrollerdirectionpad_gccontrollerdirectionpad, appkit_gc_gccontrollerdirectionpad_gccontrollerdirectionpad_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_GC_GCControllerDirectionPad_GCControllerDirectionPad, xAxis)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_gccontrollerdirectionpad_x_axis(&_0));
}

PHP_METHOD(AppKit_GC_GCControllerDirectionPad_GCControllerDirectionPad, yAxis)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_gccontrollerdirectionpad_y_axis(&_0));
}

PHP_METHOD(AppKit_GC_GCControllerDirectionPad_GCControllerDirectionPad, up)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_gccontrollerdirectionpad_up(&_0));
}

PHP_METHOD(AppKit_GC_GCControllerDirectionPad_GCControllerDirectionPad, down)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_gccontrollerdirectionpad_down(&_0));
}

PHP_METHOD(AppKit_GC_GCControllerDirectionPad_GCControllerDirectionPad, left)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_gccontrollerdirectionpad_left(&_0));
}

PHP_METHOD(AppKit_GC_GCControllerDirectionPad_GCControllerDirectionPad, right)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_gccontrollerdirectionpad_right(&_0));
}

