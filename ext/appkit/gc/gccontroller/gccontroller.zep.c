
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
#include "src/gc-controller.h"
#include "kernel/memory.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/string.h"


ZEPHIR_INIT_CLASS(AppKit_GC_GCController_GCController)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\GC\\GCController, GCController, appkit, gc_gccontroller_gccontroller, appkit_gc_gccontroller_gccontroller_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_GC_GCController_GCController, controllers)
{
	zval result;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;

	ZVAL_UNDEF(&result);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

	ZEPHIR_INIT_VAR(&result);
	ns_gccontroller_controllers(&result);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_GC_GCController_GCController, current)
{

	RETURN_LONG(ns_gccontroller_current());
}

PHP_METHOD(AppKit_GC_GCController_GCController, shouldMonitorBackgroundEvents)
{
	zend_long r = 0;
	r = ns_gccontroller_should_monitor_background_events();
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_GC_GCController_GCController, setShouldMonitorBackgroundEvents)
{
	zval *value_param = NULL, _0;
	zend_bool value;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_BOOL(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &value_param);
	ZVAL_BOOL(&_0, (value ? 1 : 0));
	ns_gccontroller_set_should_monitor_background_events(&_0);
}

PHP_METHOD(AppKit_GC_GCController_GCController, isAttachedToDevice)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_gccontroller_is_attached_to_device(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_GC_GCController_GCController, playerIndex)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_gccontroller_player_index(&_0));
}

PHP_METHOD(AppKit_GC_GCController_GCController, setPlayerIndex)
{
	zval *handle_param = NULL, *playerIndex_param = NULL, _0, _1;
	zend_long handle, playerIndex;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(playerIndex)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &playerIndex_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, playerIndex);
	ns_gccontroller_set_player_index(&_0, &_1);
}

PHP_METHOD(AppKit_GC_GCController_GCController, microGamepad)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_gccontroller_micro_gamepad(&_0));
}

PHP_METHOD(AppKit_GC_GCController_GCController, extendedGamepad)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_gccontroller_extended_gamepad(&_0));
}

PHP_METHOD(AppKit_GC_GCController_GCController, isSnapshot)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_gccontroller_is_snapshot(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_GC_GCController_GCController, vendorName)
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
	ns_gccontroller_vendor_name(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_GC_GCController_GCController, productCategory)
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
	ns_gccontroller_product_category(&result, &_0);
	RETURN_CCTOR(&result);
}

