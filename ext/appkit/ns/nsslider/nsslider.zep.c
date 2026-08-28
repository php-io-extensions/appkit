
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
#include "src/ns-slider.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(AppKit_NS_NSSlider_NSSlider)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSSlider, NSSlider, appkit, ns_nsslider_nsslider, appkit_ns_nsslider_nsslider_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSSlider_NSSlider, sliderType)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsslider_slider_type(&_0));
}

PHP_METHOD(AppKit_NS_NSSlider_NSSlider, setSliderType)
{
	zval *handle_param = NULL, *sliderType_param = NULL, _0, _1;
	zend_long handle, sliderType;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(sliderType)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &sliderType_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, sliderType);
	ns_nsslider_set_slider_type(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSSlider_NSSlider, minValue)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(ns_nsslider_min_value(&_0));
}

PHP_METHOD(AppKit_NS_NSSlider_NSSlider, setMinValue)
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
	ns_nsslider_set_min_value(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSSlider_NSSlider, maxValue)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(ns_nsslider_max_value(&_0));
}

PHP_METHOD(AppKit_NS_NSSlider_NSSlider, setMaxValue)
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
	ns_nsslider_set_max_value(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSSlider_NSSlider, altIncrementValue)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(ns_nsslider_alt_increment_value(&_0));
}

PHP_METHOD(AppKit_NS_NSSlider_NSSlider, setAltIncrementValue)
{
	double altIncrementValue;
	zval *handle_param = NULL, *altIncrementValue_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(altIncrementValue)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &altIncrementValue_param);
	altIncrementValue = zephir_get_doubleval(altIncrementValue_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, altIncrementValue);
	ns_nsslider_set_alt_increment_value(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSSlider_NSSlider, knobThickness)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(ns_nsslider_knob_thickness(&_0));
}

PHP_METHOD(AppKit_NS_NSSlider_NSSlider, acceptsFirstMouse)
{
	zval *handle_param = NULL, *event_param = NULL, _0, _1;
	zend_long handle, event, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(event)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &event_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, event);
	r = ns_nsslider_accepts_first_mouse(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSSlider_NSSlider, isVertical)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nsslider_is_vertical(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSSlider_NSSlider, setVertical)
{
	zend_bool vertical;
	zval *handle_param = NULL, *vertical_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(vertical)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &vertical_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (vertical ? 1 : 0));
	ns_nsslider_set_vertical(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSSlider_NSSlider, trackFillColor)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsslider_track_fill_color(&_0));
}

PHP_METHOD(AppKit_NS_NSSlider_NSSlider, setTrackFillColor)
{
	zval *handle_param = NULL, *trackFillColor_param = NULL, _0, _1;
	zend_long handle, trackFillColor;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(trackFillColor)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &trackFillColor_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, trackFillColor);
	ns_nsslider_set_track_fill_color(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSSlider_NSSlider, numberOfTickMarks)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsslider_number_of_tick_marks(&_0));
}

PHP_METHOD(AppKit_NS_NSSlider_NSSlider, setNumberOfTickMarks)
{
	zval *handle_param = NULL, *numberOfTickMarks_param = NULL, _0, _1;
	zend_long handle, numberOfTickMarks;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(numberOfTickMarks)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &numberOfTickMarks_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, numberOfTickMarks);
	ns_nsslider_set_number_of_tick_marks(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSSlider_NSSlider, tickMarkPosition)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsslider_tick_mark_position(&_0));
}

PHP_METHOD(AppKit_NS_NSSlider_NSSlider, setTickMarkPosition)
{
	zval *handle_param = NULL, *tickMarkPosition_param = NULL, _0, _1;
	zend_long handle, tickMarkPosition;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(tickMarkPosition)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &tickMarkPosition_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, tickMarkPosition);
	ns_nsslider_set_tick_mark_position(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSSlider_NSSlider, allowsTickMarkValuesOnly)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nsslider_allows_tick_mark_values_only(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSSlider_NSSlider, setAllowsTickMarkValuesOnly)
{
	zend_bool allowsTickMarkValuesOnly;
	zval *handle_param = NULL, *allowsTickMarkValuesOnly_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(allowsTickMarkValuesOnly)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &allowsTickMarkValuesOnly_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (allowsTickMarkValuesOnly ? 1 : 0));
	ns_nsslider_set_allows_tick_mark_values_only(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSSlider_NSSlider, tickMarkValueAtIndex)
{
	zval *handle_param = NULL, *index_param = NULL, _0, _1;
	zend_long handle, index;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(index)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &index_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, index);
	RETURN_DOUBLE(ns_nsslider_tick_mark_value_at_index(&_0, &_1));
}

PHP_METHOD(AppKit_NS_NSSlider_NSSlider, rectOfTickMarkAtIndex)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *index_param = NULL, result, _0, _1;
	zend_long handle, index;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(index)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &index_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, index);
	ns_nsslider_rect_of_tick_mark_at_index(&result, &_0, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSSlider_NSSlider, indexOfTickMarkAtPoint)
{
	double x, y;
	zval *handle_param = NULL, *x_param = NULL, *y_param = NULL, _0, _1, _2;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(x)
		Z_PARAM_ZVAL(y)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &x_param, &y_param);
	x = zephir_get_doubleval(x_param);
	y = zephir_get_doubleval(y_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, x);
	ZVAL_DOUBLE(&_2, y);
	RETURN_LONG(ns_nsslider_index_of_tick_mark_at_point(&_0, &_1, &_2));
}

PHP_METHOD(AppKit_NS_NSSlider_NSSlider, closestTickMarkValueToValue)
{
	double value;
	zval *handle_param = NULL, *value_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &value_param);
	value = zephir_get_doubleval(value_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, value);
	RETURN_DOUBLE(ns_nsslider_closest_tick_mark_value_to_value(&_0, &_1));
}

PHP_METHOD(AppKit_NS_NSSlider_NSSlider, sliderWithTargetAction)
{
	zval *target_param = NULL, *action = NULL, action_sub, _0;
	zend_long target;

	ZVAL_UNDEF(&action_sub);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(target)
		Z_PARAM_ZVAL(action)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &target_param, &action);
	ZVAL_LONG(&_0, target);
	RETURN_LONG(ns_nsslider_slider_with_target_action(&_0, action));
}

PHP_METHOD(AppKit_NS_NSSlider_NSSlider, sliderWithValueMinValueMaxValueTargetAction)
{
	zend_long target;
	zval *value_param = NULL, *minValue_param = NULL, *maxValue_param = NULL, *target_param = NULL, *action = NULL, action_sub, _0, _1, _2, _3;
	double value, minValue, maxValue;

	ZVAL_UNDEF(&action_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_ZVAL(value)
		Z_PARAM_ZVAL(minValue)
		Z_PARAM_ZVAL(maxValue)
		Z_PARAM_LONG(target)
		Z_PARAM_ZVAL(action)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &value_param, &minValue_param, &maxValue_param, &target_param, &action);
	value = zephir_get_doubleval(value_param);
	minValue = zephir_get_doubleval(minValue_param);
	maxValue = zephir_get_doubleval(maxValue_param);
	ZVAL_DOUBLE(&_0, value);
	ZVAL_DOUBLE(&_1, minValue);
	ZVAL_DOUBLE(&_2, maxValue);
	ZVAL_LONG(&_3, target);
	RETURN_LONG(ns_nsslider_slider_with_value_min_value_max_value_target_action(&_0, &_1, &_2, &_3, action));
}

