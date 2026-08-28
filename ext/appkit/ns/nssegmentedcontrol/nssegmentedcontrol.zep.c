
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
#include "src/ns-segmentedcontrol.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(AppKit_NS_NSSegmentedControl_NSSegmentedControl)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSSegmentedControl, NSSegmentedControl, appkit, ns_nssegmentedcontrol_nssegmentedcontrol, appkit_ns_nssegmentedcontrol_nssegmentedcontrol_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSSegmentedControl_NSSegmentedControl, initWithFrame)
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
	RETURN_LONG(ns_nssegmentedcontrol_init_with_frame(&_0, &_1, &_2, &_3));
}

PHP_METHOD(AppKit_NS_NSSegmentedControl_NSSegmentedControl, segmentCount)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nssegmentedcontrol_segment_count(&_0));
}

PHP_METHOD(AppKit_NS_NSSegmentedControl_NSSegmentedControl, setSegmentCount)
{
	zval *handle_param = NULL, *segmentCount_param = NULL, _0, _1;
	zend_long handle, segmentCount;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(segmentCount)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &segmentCount_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, segmentCount);
	ns_nssegmentedcontrol_set_segment_count(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSSegmentedControl_NSSegmentedControl, selectedSegment)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nssegmentedcontrol_selected_segment(&_0));
}

PHP_METHOD(AppKit_NS_NSSegmentedControl_NSSegmentedControl, setSelectedSegment)
{
	zval *handle_param = NULL, *selectedSegment_param = NULL, _0, _1;
	zend_long handle, selectedSegment;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(selectedSegment)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &selectedSegment_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, selectedSegment);
	ns_nssegmentedcontrol_set_selected_segment(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSSegmentedControl_NSSegmentedControl, selectSegmentWithTag)
{
	zval *handle_param = NULL, *tag_param = NULL, _0, _1;
	zend_long handle, tag, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(tag)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &tag_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, tag);
	r = ns_nssegmentedcontrol_select_segment_with_tag(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSSegmentedControl_NSSegmentedControl, setWidthForSegment)
{
	double width;
	zval *handle_param = NULL, *width_param = NULL, *segment_param = NULL, _0, _1, _2;
	zend_long handle, segment;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(width)
		Z_PARAM_LONG(segment)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &width_param, &segment_param);
	width = zephir_get_doubleval(width_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, width);
	ZVAL_LONG(&_2, segment);
	ns_nssegmentedcontrol_set_width_for_segment(&_0, &_1, &_2);
}

PHP_METHOD(AppKit_NS_NSSegmentedControl_NSSegmentedControl, widthForSegment)
{
	zval *handle_param = NULL, *segment_param = NULL, _0, _1;
	zend_long handle, segment;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(segment)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &segment_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, segment);
	RETURN_DOUBLE(ns_nssegmentedcontrol_width_for_segment(&_0, &_1));
}

PHP_METHOD(AppKit_NS_NSSegmentedControl_NSSegmentedControl, setImageForSegment)
{
	zval *handle_param = NULL, *image_param = NULL, *segment_param = NULL, _0, _1, _2;
	zend_long handle, image, segment;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(image)
		Z_PARAM_LONG(segment)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &image_param, &segment_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, image);
	ZVAL_LONG(&_2, segment);
	ns_nssegmentedcontrol_set_image_for_segment(&_0, &_1, &_2);
}

PHP_METHOD(AppKit_NS_NSSegmentedControl_NSSegmentedControl, imageForSegment)
{
	zval *handle_param = NULL, *segment_param = NULL, _0, _1;
	zend_long handle, segment;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(segment)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &segment_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, segment);
	RETURN_LONG(ns_nssegmentedcontrol_image_for_segment(&_0, &_1));
}

PHP_METHOD(AppKit_NS_NSSegmentedControl_NSSegmentedControl, setImageScalingForSegment)
{
	zval *handle_param = NULL, *scaling_param = NULL, *segment_param = NULL, _0, _1, _2;
	zend_long handle, scaling, segment;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(scaling)
		Z_PARAM_LONG(segment)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &scaling_param, &segment_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, scaling);
	ZVAL_LONG(&_2, segment);
	ns_nssegmentedcontrol_set_image_scaling_for_segment(&_0, &_1, &_2);
}

PHP_METHOD(AppKit_NS_NSSegmentedControl_NSSegmentedControl, imageScalingForSegment)
{
	zval *handle_param = NULL, *segment_param = NULL, _0, _1;
	zend_long handle, segment;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(segment)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &segment_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, segment);
	RETURN_LONG(ns_nssegmentedcontrol_image_scaling_for_segment(&_0, &_1));
}

PHP_METHOD(AppKit_NS_NSSegmentedControl_NSSegmentedControl, setLabelForSegment)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval label;
	zval *handle_param = NULL, *label_param = NULL, *segment_param = NULL, _0, _1;
	zend_long handle, segment;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&label);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(label)
		Z_PARAM_LONG(segment)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &label_param, &segment_param);
	zephir_get_strval(&label, label_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, segment);
	ns_nssegmentedcontrol_set_label_for_segment(&_0, &label, &_1);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSSegmentedControl_NSSegmentedControl, labelForSegment)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *segment_param = NULL, result, _0, _1;
	zend_long handle, segment;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(segment)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &segment_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, segment);
	ns_nssegmentedcontrol_label_for_segment(&result, &_0, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSSegmentedControl_NSSegmentedControl, setMenuForSegment)
{
	zval *handle_param = NULL, *menu_param = NULL, *segment_param = NULL, _0, _1, _2;
	zend_long handle, menu, segment;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(menu)
		Z_PARAM_LONG(segment)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &menu_param, &segment_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, menu);
	ZVAL_LONG(&_2, segment);
	ns_nssegmentedcontrol_set_menu_for_segment(&_0, &_1, &_2);
}

PHP_METHOD(AppKit_NS_NSSegmentedControl_NSSegmentedControl, menuForSegment)
{
	zval *handle_param = NULL, *segment_param = NULL, _0, _1;
	zend_long handle, segment;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(segment)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &segment_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, segment);
	RETURN_LONG(ns_nssegmentedcontrol_menu_for_segment(&_0, &_1));
}

PHP_METHOD(AppKit_NS_NSSegmentedControl_NSSegmentedControl, setSelectedForSegment)
{
	zend_bool selected;
	zval *handle_param = NULL, *selected_param = NULL, *segment_param = NULL, _0, _1, _2;
	zend_long handle, segment;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(selected)
		Z_PARAM_LONG(segment)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &selected_param, &segment_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (selected ? 1 : 0));
	ZVAL_LONG(&_2, segment);
	ns_nssegmentedcontrol_set_selected_for_segment(&_0, &_1, &_2);
}

PHP_METHOD(AppKit_NS_NSSegmentedControl_NSSegmentedControl, isSelectedForSegment)
{
	zval *handle_param = NULL, *segment_param = NULL, _0, _1;
	zend_long handle, segment, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(segment)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &segment_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, segment);
	r = ns_nssegmentedcontrol_is_selected_for_segment(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSSegmentedControl_NSSegmentedControl, setEnabledForSegment)
{
	zend_bool enabled;
	zval *handle_param = NULL, *enabled_param = NULL, *segment_param = NULL, _0, _1, _2;
	zend_long handle, segment;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(enabled)
		Z_PARAM_LONG(segment)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &enabled_param, &segment_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (enabled ? 1 : 0));
	ZVAL_LONG(&_2, segment);
	ns_nssegmentedcontrol_set_enabled_for_segment(&_0, &_1, &_2);
}

PHP_METHOD(AppKit_NS_NSSegmentedControl_NSSegmentedControl, isEnabledForSegment)
{
	zval *handle_param = NULL, *segment_param = NULL, _0, _1;
	zend_long handle, segment, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(segment)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &segment_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, segment);
	r = ns_nssegmentedcontrol_is_enabled_for_segment(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSSegmentedControl_NSSegmentedControl, setToolTipForSegment)
{
	zval *handle_param = NULL, *toolTip = NULL, toolTip_sub, *segment_param = NULL, _0, _1;
	zend_long handle, segment;

	ZVAL_UNDEF(&toolTip_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(toolTip)
		Z_PARAM_LONG(segment)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &toolTip, &segment_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, segment);
	ns_nssegmentedcontrol_set_tool_tip_for_segment(&_0, toolTip, &_1);
}

PHP_METHOD(AppKit_NS_NSSegmentedControl_NSSegmentedControl, toolTipForSegment)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *segment_param = NULL, result, _0, _1;
	zend_long handle, segment;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(segment)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &segment_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, segment);
	ns_nssegmentedcontrol_tool_tip_for_segment(&result, &_0, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSSegmentedControl_NSSegmentedControl, setTagForSegment)
{
	zval *handle_param = NULL, *tag_param = NULL, *segment_param = NULL, _0, _1, _2;
	zend_long handle, tag, segment;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(tag)
		Z_PARAM_LONG(segment)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &tag_param, &segment_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, tag);
	ZVAL_LONG(&_2, segment);
	ns_nssegmentedcontrol_set_tag_for_segment(&_0, &_1, &_2);
}

PHP_METHOD(AppKit_NS_NSSegmentedControl_NSSegmentedControl, tagForSegment)
{
	zval *handle_param = NULL, *segment_param = NULL, _0, _1;
	zend_long handle, segment;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(segment)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &segment_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, segment);
	RETURN_LONG(ns_nssegmentedcontrol_tag_for_segment(&_0, &_1));
}

PHP_METHOD(AppKit_NS_NSSegmentedControl_NSSegmentedControl, setShowsMenuIndicatorForSegment)
{
	zend_bool showsMenuIndicator;
	zval *handle_param = NULL, *showsMenuIndicator_param = NULL, *segment_param = NULL, _0, _1, _2;
	zend_long handle, segment;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(showsMenuIndicator)
		Z_PARAM_LONG(segment)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &showsMenuIndicator_param, &segment_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (showsMenuIndicator ? 1 : 0));
	ZVAL_LONG(&_2, segment);
	ns_nssegmentedcontrol_set_shows_menu_indicator_for_segment(&_0, &_1, &_2);
}

PHP_METHOD(AppKit_NS_NSSegmentedControl_NSSegmentedControl, showsMenuIndicatorForSegment)
{
	zval *handle_param = NULL, *segment_param = NULL, _0, _1;
	zend_long handle, segment, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(segment)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &segment_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, segment);
	r = ns_nssegmentedcontrol_shows_menu_indicator_for_segment(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSSegmentedControl_NSSegmentedControl, segmentStyle)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nssegmentedcontrol_segment_style(&_0));
}

PHP_METHOD(AppKit_NS_NSSegmentedControl_NSSegmentedControl, setSegmentStyle)
{
	zval *handle_param = NULL, *segmentStyle_param = NULL, _0, _1;
	zend_long handle, segmentStyle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(segmentStyle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &segmentStyle_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, segmentStyle);
	ns_nssegmentedcontrol_set_segment_style(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSSegmentedControl_NSSegmentedControl, isSpringLoaded)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nssegmentedcontrol_is_spring_loaded(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSSegmentedControl_NSSegmentedControl, setSpringLoaded)
{
	zend_bool springLoaded;
	zval *handle_param = NULL, *springLoaded_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(springLoaded)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &springLoaded_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (springLoaded ? 1 : 0));
	ns_nssegmentedcontrol_set_spring_loaded(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSSegmentedControl_NSSegmentedControl, trackingMode)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nssegmentedcontrol_tracking_mode(&_0));
}

PHP_METHOD(AppKit_NS_NSSegmentedControl_NSSegmentedControl, setTrackingMode)
{
	zval *handle_param = NULL, *trackingMode_param = NULL, _0, _1;
	zend_long handle, trackingMode;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(trackingMode)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &trackingMode_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, trackingMode);
	ns_nssegmentedcontrol_set_tracking_mode(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSSegmentedControl_NSSegmentedControl, doubleValueForSelectedSegment)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(ns_nssegmentedcontrol_double_value_for_selected_segment(&_0));
}

PHP_METHOD(AppKit_NS_NSSegmentedControl_NSSegmentedControl, selectedSegmentBezelColor)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nssegmentedcontrol_selected_segment_bezel_color(&_0));
}

PHP_METHOD(AppKit_NS_NSSegmentedControl_NSSegmentedControl, setSelectedSegmentBezelColor)
{
	zval *handle_param = NULL, *selectedSegmentBezelColor_param = NULL, _0, _1;
	zend_long handle, selectedSegmentBezelColor;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(selectedSegmentBezelColor)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &selectedSegmentBezelColor_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, selectedSegmentBezelColor);
	ns_nssegmentedcontrol_set_selected_segment_bezel_color(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSSegmentedControl_NSSegmentedControl, indexOfSelectedItem)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nssegmentedcontrol_index_of_selected_item(&_0));
}

PHP_METHOD(AppKit_NS_NSSegmentedControl_NSSegmentedControl, setAlignmentForSegment)
{
	zval *handle_param = NULL, *alignment_param = NULL, *segment_param = NULL, _0, _1, _2;
	zend_long handle, alignment, segment;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(alignment)
		Z_PARAM_LONG(segment)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &alignment_param, &segment_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, alignment);
	ZVAL_LONG(&_2, segment);
	ns_nssegmentedcontrol_set_alignment_for_segment(&_0, &_1, &_2);
}

PHP_METHOD(AppKit_NS_NSSegmentedControl_NSSegmentedControl, alignmentForSegment)
{
	zval *handle_param = NULL, *segment_param = NULL, _0, _1;
	zend_long handle, segment;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(segment)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &segment_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, segment);
	RETURN_LONG(ns_nssegmentedcontrol_alignment_for_segment(&_0, &_1));
}

PHP_METHOD(AppKit_NS_NSSegmentedControl_NSSegmentedControl, segmentDistribution)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nssegmentedcontrol_segment_distribution(&_0));
}

PHP_METHOD(AppKit_NS_NSSegmentedControl_NSSegmentedControl, setSegmentDistribution)
{
	zval *handle_param = NULL, *segmentDistribution_param = NULL, _0, _1;
	zend_long handle, segmentDistribution;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(segmentDistribution)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &segmentDistribution_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, segmentDistribution);
	ns_nssegmentedcontrol_set_segment_distribution(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSSegmentedControl_NSSegmentedControl, compressWithPrioritizedCompressionOptions)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval prioritizedOptions;
	zval *handle_param = NULL, *prioritizedOptions_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&prioritizedOptions);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ARRAY(prioritizedOptions)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &prioritizedOptions_param);
	zephir_get_arrval(&prioritizedOptions, prioritizedOptions_param);
	ZVAL_LONG(&_0, handle);
	ns_nssegmentedcontrol_compress_with_prioritized_compression_options(&_0, &prioritizedOptions);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSSegmentedControl_NSSegmentedControl, minimumSizeWithPrioritizedCompressionOptions)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval prioritizedOptions;
	zval *handle_param = NULL, *prioritizedOptions_param = NULL, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&prioritizedOptions);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ARRAY(prioritizedOptions)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &prioritizedOptions_param);
	zephir_get_arrval(&prioritizedOptions, prioritizedOptions_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ns_nssegmentedcontrol_minimum_size_with_prioritized_compression_options(&result, &_0, &prioritizedOptions);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSSegmentedControl_NSSegmentedControl, activeCompressionOptions)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nssegmentedcontrol_active_compression_options(&_0));
}

PHP_METHOD(AppKit_NS_NSSegmentedControl_NSSegmentedControl, segmentedControlWithLabelsTrackingModeTargetAction)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long trackingMode, target;
	zval *labels_param = NULL, *trackingMode_param = NULL, *target_param = NULL, *action = NULL, action_sub, _0, _1;
	zval labels;

	ZVAL_UNDEF(&labels);
	ZVAL_UNDEF(&action_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_ARRAY(labels)
		Z_PARAM_LONG(trackingMode)
		Z_PARAM_LONG(target)
		Z_PARAM_ZVAL(action)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 0, &labels_param, &trackingMode_param, &target_param, &action);
	zephir_get_arrval(&labels, labels_param);
	ZVAL_LONG(&_0, trackingMode);
	ZVAL_LONG(&_1, target);
	RETURN_MM_LONG(ns_nssegmentedcontrol_segmented_control_with_labels_tracking_mode_target_action(&labels, &_0, &_1, action));
}

PHP_METHOD(AppKit_NS_NSSegmentedControl_NSSegmentedControl, segmentedControlWithImagesTrackingModeTargetAction)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long trackingMode, target;
	zval *images_param = NULL, *trackingMode_param = NULL, *target_param = NULL, *action = NULL, action_sub, _0, _1;
	zval images;

	ZVAL_UNDEF(&images);
	ZVAL_UNDEF(&action_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_ARRAY(images)
		Z_PARAM_LONG(trackingMode)
		Z_PARAM_LONG(target)
		Z_PARAM_ZVAL(action)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 0, &images_param, &trackingMode_param, &target_param, &action);
	zephir_get_arrval(&images, images_param);
	ZVAL_LONG(&_0, trackingMode);
	ZVAL_LONG(&_1, target);
	RETURN_MM_LONG(ns_nssegmentedcontrol_segmented_control_with_images_tracking_mode_target_action(&images, &_0, &_1, action));
}

