
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
#include "src/ns-stepper.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(AppKit_NS_NSStepper_NSStepper)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSStepper, NSStepper, appkit, ns_nsstepper_nsstepper, appkit_ns_nsstepper_nsstepper_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSStepper_NSStepper, initWithFrame)
{
	zval *x_param = NULL, *y_param = NULL, *width_param = NULL, *height_param = NULL, _0, _1, _2, _3;
	double x, y, width, height;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_ZVAL(x)
		Z_PARAM_ZVAL(y)
		Z_PARAM_ZVAL(width)
		Z_PARAM_ZVAL(height)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &x_param, &y_param, &width_param, &height_param);
	x = zephir_get_doubleval(x_param);
	y = zephir_get_doubleval(y_param);
	width = zephir_get_doubleval(width_param);
	height = zephir_get_doubleval(height_param);
	ZVAL_DOUBLE(&_0, x);
	ZVAL_DOUBLE(&_1, y);
	ZVAL_DOUBLE(&_2, width);
	ZVAL_DOUBLE(&_3, height);
	RETURN_LONG(ns_nsstepper_init_with_frame(&_0, &_1, &_2, &_3));
}

PHP_METHOD(AppKit_NS_NSStepper_NSStepper, minValue)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(ns_nsstepper_min_value(&_0));
}

PHP_METHOD(AppKit_NS_NSStepper_NSStepper, setMinValue)
{
	double minValue;
	zval *handle_param = NULL, *minValue_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(minValue)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &minValue_param);
	minValue = zephir_get_doubleval(minValue_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, minValue);
	ns_nsstepper_set_min_value(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSStepper_NSStepper, maxValue)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(ns_nsstepper_max_value(&_0));
}

PHP_METHOD(AppKit_NS_NSStepper_NSStepper, setMaxValue)
{
	double maxValue;
	zval *handle_param = NULL, *maxValue_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(maxValue)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &maxValue_param);
	maxValue = zephir_get_doubleval(maxValue_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, maxValue);
	ns_nsstepper_set_max_value(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSStepper_NSStepper, increment)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(ns_nsstepper_increment(&_0));
}

PHP_METHOD(AppKit_NS_NSStepper_NSStepper, setIncrement)
{
	double increment;
	zval *handle_param = NULL, *increment_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(increment)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &increment_param);
	increment = zephir_get_doubleval(increment_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, increment);
	ns_nsstepper_set_increment(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSStepper_NSStepper, valueWraps)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nsstepper_value_wraps(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSStepper_NSStepper, setValueWraps)
{
	zend_bool valueWraps;
	zval *handle_param = NULL, *valueWraps_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(valueWraps)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &valueWraps_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (valueWraps ? 1 : 0));
	ns_nsstepper_set_value_wraps(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSStepper_NSStepper, autorepeat)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nsstepper_autorepeat(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSStepper_NSStepper, setAutorepeat)
{
	zend_bool autorepeat;
	zval *handle_param = NULL, *autorepeat_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(autorepeat)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &autorepeat_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (autorepeat ? 1 : 0));
	ns_nsstepper_set_autorepeat(&_0, &_1);
}

