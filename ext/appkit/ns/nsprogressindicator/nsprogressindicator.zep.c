
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
#include "src/ns-progressindicator.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(AppKit_NS_NSProgressIndicator_NSProgressIndicator)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSProgressIndicator, NSProgressIndicator, appkit, ns_nsprogressindicator_nsprogressindicator, appkit_ns_nsprogressindicator_nsprogressindicator_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSProgressIndicator_NSProgressIndicator, initWithFrame)
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
	RETURN_LONG(ns_nsprogressindicator_init_with_frame(&_0, &_1, &_2, &_3));
}

PHP_METHOD(AppKit_NS_NSProgressIndicator_NSProgressIndicator, isIndeterminate)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nsprogressindicator_is_indeterminate(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSProgressIndicator_NSProgressIndicator, setIndeterminate)
{
	zend_bool indeterminate;
	zval *handle_param = NULL, *indeterminate_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(indeterminate)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &indeterminate_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (indeterminate ? 1 : 0));
	ns_nsprogressindicator_set_indeterminate(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSProgressIndicator_NSProgressIndicator, controlSize)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsprogressindicator_control_size(&_0));
}

PHP_METHOD(AppKit_NS_NSProgressIndicator_NSProgressIndicator, setControlSize)
{
	zval *handle_param = NULL, *controlSize_param = NULL, _0, _1;
	zend_long handle, controlSize;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(controlSize)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &controlSize_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, controlSize);
	ns_nsprogressindicator_set_control_size(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSProgressIndicator_NSProgressIndicator, doubleValue)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(ns_nsprogressindicator_double_value(&_0));
}

PHP_METHOD(AppKit_NS_NSProgressIndicator_NSProgressIndicator, setDoubleValue)
{
	double doubleValue;
	zval *handle_param = NULL, *doubleValue_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(doubleValue)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &doubleValue_param);
	doubleValue = zephir_get_doubleval(doubleValue_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, doubleValue);
	ns_nsprogressindicator_set_double_value(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSProgressIndicator_NSProgressIndicator, incrementBy)
{
	double delta;
	zval *handle_param = NULL, *delta_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(delta)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &delta_param);
	delta = zephir_get_doubleval(delta_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, delta);
	ns_nsprogressindicator_increment_by(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSProgressIndicator_NSProgressIndicator, minValue)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(ns_nsprogressindicator_min_value(&_0));
}

PHP_METHOD(AppKit_NS_NSProgressIndicator_NSProgressIndicator, setMinValue)
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
	ns_nsprogressindicator_set_min_value(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSProgressIndicator_NSProgressIndicator, maxValue)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(ns_nsprogressindicator_max_value(&_0));
}

PHP_METHOD(AppKit_NS_NSProgressIndicator_NSProgressIndicator, setMaxValue)
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
	ns_nsprogressindicator_set_max_value(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSProgressIndicator_NSProgressIndicator, observedProgress)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsprogressindicator_observed_progress(&_0));
}

PHP_METHOD(AppKit_NS_NSProgressIndicator_NSProgressIndicator, setObservedProgress)
{
	zval *handle_param = NULL, *observedProgress_param = NULL, _0, _1;
	zend_long handle, observedProgress;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(observedProgress)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &observedProgress_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, observedProgress);
	ns_nsprogressindicator_set_observed_progress(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSProgressIndicator_NSProgressIndicator, usesThreadedAnimation)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nsprogressindicator_uses_threaded_animation(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSProgressIndicator_NSProgressIndicator, setUsesThreadedAnimation)
{
	zend_bool usesThreadedAnimation;
	zval *handle_param = NULL, *usesThreadedAnimation_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(usesThreadedAnimation)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &usesThreadedAnimation_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (usesThreadedAnimation ? 1 : 0));
	ns_nsprogressindicator_set_uses_threaded_animation(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSProgressIndicator_NSProgressIndicator, startAnimation)
{
	zval *handle_param = NULL, *sender_param = NULL, _0, _1;
	zend_long handle, sender;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(sender)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &sender_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, sender);
	ns_nsprogressindicator_start_animation(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSProgressIndicator_NSProgressIndicator, stopAnimation)
{
	zval *handle_param = NULL, *sender_param = NULL, _0, _1;
	zend_long handle, sender;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(sender)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &sender_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, sender);
	ns_nsprogressindicator_stop_animation(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSProgressIndicator_NSProgressIndicator, style)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsprogressindicator_style(&_0));
}

PHP_METHOD(AppKit_NS_NSProgressIndicator_NSProgressIndicator, setStyle)
{
	zval *handle_param = NULL, *style_param = NULL, _0, _1;
	zend_long handle, style;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(style)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &style_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, style);
	ns_nsprogressindicator_set_style(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSProgressIndicator_NSProgressIndicator, sizeToFit)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	ns_nsprogressindicator_size_to_fit(&_0);
}

PHP_METHOD(AppKit_NS_NSProgressIndicator_NSProgressIndicator, isDisplayedWhenStopped)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nsprogressindicator_is_displayed_when_stopped(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSProgressIndicator_NSProgressIndicator, setDisplayedWhenStopped)
{
	zend_bool displayedWhenStopped;
	zval *handle_param = NULL, *displayedWhenStopped_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(displayedWhenStopped)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &displayedWhenStopped_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (displayedWhenStopped ? 1 : 0));
	ns_nsprogressindicator_set_displayed_when_stopped(&_0, &_1);
}

