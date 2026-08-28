
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
#include "src/ns-slidercell.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(AppKit_NS_NSSliderCell_NSSliderCell)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSSliderCell, NSSliderCell, appkit, ns_nsslidercell_nsslidercell, appkit_ns_nsslidercell_nsslidercell_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSSliderCell_NSSliderCell, initTextCell)
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
	RETURN_MM_LONG(ns_nsslidercell_init_text_cell(&string_));
}

PHP_METHOD(AppKit_NS_NSSliderCell_NSSliderCell, initImageCell)
{
	zval *image_param = NULL, _0;
	zend_long image;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(image)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &image_param);
	ZVAL_LONG(&_0, image);
	RETURN_LONG(ns_nsslidercell_init_image_cell(&_0));
}

PHP_METHOD(AppKit_NS_NSSliderCell_NSSliderCell, prefersTrackingUntilMouseUp)
{
	zend_long r = 0;
	r = ns_nsslidercell_prefers_tracking_until_mouse_up();
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSSliderCell_NSSliderCell, minValue)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(ns_nsslidercell_min_value(&_0));
}

PHP_METHOD(AppKit_NS_NSSliderCell_NSSliderCell, setMinValue)
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
	ns_nsslidercell_set_min_value(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSSliderCell_NSSliderCell, maxValue)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(ns_nsslidercell_max_value(&_0));
}

PHP_METHOD(AppKit_NS_NSSliderCell_NSSliderCell, setMaxValue)
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
	ns_nsslidercell_set_max_value(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSSliderCell_NSSliderCell, altIncrementValue)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(ns_nsslidercell_alt_increment_value(&_0));
}

PHP_METHOD(AppKit_NS_NSSliderCell_NSSliderCell, setAltIncrementValue)
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
	ns_nsslidercell_set_alt_increment_value(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSSliderCell_NSSliderCell, sliderType)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsslidercell_slider_type(&_0));
}

PHP_METHOD(AppKit_NS_NSSliderCell_NSSliderCell, setSliderType)
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
	ns_nsslidercell_set_slider_type(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSSliderCell_NSSliderCell, isVertical)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nsslidercell_is_vertical(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSSliderCell_NSSliderCell, setVertical)
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
	ns_nsslidercell_set_vertical(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSSliderCell_NSSliderCell, trackRect)
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
	ns_nsslidercell_track_rect(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSSliderCell_NSSliderCell, knobThickness)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(ns_nsslidercell_knob_thickness(&_0));
}

PHP_METHOD(AppKit_NS_NSSliderCell_NSSliderCell, knobRectFlipped)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_bool flipped;
	zval *handle_param = NULL, *flipped_param = NULL, result, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(flipped)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &flipped_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (flipped ? 1 : 0));
	ns_nsslidercell_knob_rect_flipped(&result, &_0, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSSliderCell_NSSliderCell, barRectFlipped)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_bool flipped;
	zval *handle_param = NULL, *flipped_param = NULL, result, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(flipped)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &flipped_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (flipped ? 1 : 0));
	ns_nsslidercell_bar_rect_flipped(&result, &_0, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSSliderCell_NSSliderCell, drawKnobRect)
{
	double x, y, width, height;
	zval *handle_param = NULL, *x_param = NULL, *y_param = NULL, *width_param = NULL, *height_param = NULL, _0, _1, _2, _3, _4;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(x)
		Z_PARAM_ZVAL(y)
		Z_PARAM_ZVAL(width)
		Z_PARAM_ZVAL(height)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &handle_param, &x_param, &y_param, &width_param, &height_param);
	x = zephir_get_doubleval(x_param);
	y = zephir_get_doubleval(y_param);
	width = zephir_get_doubleval(width_param);
	height = zephir_get_doubleval(height_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, x);
	ZVAL_DOUBLE(&_2, y);
	ZVAL_DOUBLE(&_3, width);
	ZVAL_DOUBLE(&_4, height);
	ns_nsslidercell_draw_knob_rect(&_0, &_1, &_2, &_3, &_4);
}

PHP_METHOD(AppKit_NS_NSSliderCell_NSSliderCell, drawKnob)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	ns_nsslidercell_draw_knob(&_0);
}

PHP_METHOD(AppKit_NS_NSSliderCell_NSSliderCell, drawBarInsideFlipped)
{
	zend_bool flipped;
	double x, y, width, height;
	zval *handle_param = NULL, *x_param = NULL, *y_param = NULL, *width_param = NULL, *height_param = NULL, *flipped_param = NULL, _0, _1, _2, _3, _4, _5;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZEND_PARSE_PARAMETERS_START(6, 6)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(x)
		Z_PARAM_ZVAL(y)
		Z_PARAM_ZVAL(width)
		Z_PARAM_ZVAL(height)
		Z_PARAM_BOOL(flipped)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(6, 0, &handle_param, &x_param, &y_param, &width_param, &height_param, &flipped_param);
	x = zephir_get_doubleval(x_param);
	y = zephir_get_doubleval(y_param);
	width = zephir_get_doubleval(width_param);
	height = zephir_get_doubleval(height_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, x);
	ZVAL_DOUBLE(&_2, y);
	ZVAL_DOUBLE(&_3, width);
	ZVAL_DOUBLE(&_4, height);
	ZVAL_BOOL(&_5, (flipped ? 1 : 0));
	ns_nsslidercell_draw_bar_inside_flipped(&_0, &_1, &_2, &_3, &_4, &_5);
}

PHP_METHOD(AppKit_NS_NSSliderCell_NSSliderCell, numberOfTickMarks)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsslidercell_number_of_tick_marks(&_0));
}

PHP_METHOD(AppKit_NS_NSSliderCell_NSSliderCell, setNumberOfTickMarks)
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
	ns_nsslidercell_set_number_of_tick_marks(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSSliderCell_NSSliderCell, tickMarkPosition)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsslidercell_tick_mark_position(&_0));
}

PHP_METHOD(AppKit_NS_NSSliderCell_NSSliderCell, setTickMarkPosition)
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
	ns_nsslidercell_set_tick_mark_position(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSSliderCell_NSSliderCell, allowsTickMarkValuesOnly)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nsslidercell_allows_tick_mark_values_only(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSSliderCell_NSSliderCell, setAllowsTickMarkValuesOnly)
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
	ns_nsslidercell_set_allows_tick_mark_values_only(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSSliderCell_NSSliderCell, tickMarkValueAtIndex)
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
	RETURN_DOUBLE(ns_nsslidercell_tick_mark_value_at_index(&_0, &_1));
}

PHP_METHOD(AppKit_NS_NSSliderCell_NSSliderCell, rectOfTickMarkAtIndex)
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
	ns_nsslidercell_rect_of_tick_mark_at_index(&result, &_0, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSSliderCell_NSSliderCell, indexOfTickMarkAtPoint)
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
	RETURN_LONG(ns_nsslidercell_index_of_tick_mark_at_point(&_0, &_1, &_2));
}

PHP_METHOD(AppKit_NS_NSSliderCell_NSSliderCell, closestTickMarkValueToValue)
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
	RETURN_DOUBLE(ns_nsslidercell_closest_tick_mark_value_to_value(&_0, &_1));
}

PHP_METHOD(AppKit_NS_NSSliderCell_NSSliderCell, drawTickMarks)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	ns_nsslidercell_draw_tick_marks(&_0);
}

