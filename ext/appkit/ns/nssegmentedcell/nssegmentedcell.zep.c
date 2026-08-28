
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
#include "src/ns-segmentedcell.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(AppKit_NS_NSSegmentedCell_NSSegmentedCell)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSSegmentedCell, NSSegmentedCell, appkit, ns_nssegmentedcell_nssegmentedcell, appkit_ns_nssegmentedcell_nssegmentedcell_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSSegmentedCell_NSSegmentedCell, initTextCell)
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
	RETURN_MM_LONG(ns_nssegmentedcell_init_text_cell(&string_));
}

PHP_METHOD(AppKit_NS_NSSegmentedCell_NSSegmentedCell, initImageCell)
{
	zval *image_param = NULL, _0;
	zend_long image;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(image)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &image_param);
	ZVAL_LONG(&_0, image);
	RETURN_LONG(ns_nssegmentedcell_init_image_cell(&_0));
}

PHP_METHOD(AppKit_NS_NSSegmentedCell_NSSegmentedCell, segmentCount)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nssegmentedcell_segment_count(&_0));
}

PHP_METHOD(AppKit_NS_NSSegmentedCell_NSSegmentedCell, setSegmentCount)
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
	ns_nssegmentedcell_set_segment_count(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSSegmentedCell_NSSegmentedCell, selectedSegment)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nssegmentedcell_selected_segment(&_0));
}

PHP_METHOD(AppKit_NS_NSSegmentedCell_NSSegmentedCell, setSelectedSegment)
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
	ns_nssegmentedcell_set_selected_segment(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSSegmentedCell_NSSegmentedCell, selectSegmentWithTag)
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
	r = ns_nssegmentedcell_select_segment_with_tag(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSSegmentedCell_NSSegmentedCell, makeNextSegmentKey)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	ns_nssegmentedcell_make_next_segment_key(&_0);
}

PHP_METHOD(AppKit_NS_NSSegmentedCell_NSSegmentedCell, makePreviousSegmentKey)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	ns_nssegmentedcell_make_previous_segment_key(&_0);
}

PHP_METHOD(AppKit_NS_NSSegmentedCell_NSSegmentedCell, trackingMode)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nssegmentedcell_tracking_mode(&_0));
}

PHP_METHOD(AppKit_NS_NSSegmentedCell_NSSegmentedCell, setTrackingMode)
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
	ns_nssegmentedcell_set_tracking_mode(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSSegmentedCell_NSSegmentedCell, setWidthForSegment)
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
	ns_nssegmentedcell_set_width_for_segment(&_0, &_1, &_2);
}

PHP_METHOD(AppKit_NS_NSSegmentedCell_NSSegmentedCell, widthForSegment)
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
	RETURN_DOUBLE(ns_nssegmentedcell_width_for_segment(&_0, &_1));
}

PHP_METHOD(AppKit_NS_NSSegmentedCell_NSSegmentedCell, setImageForSegment)
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
	ns_nssegmentedcell_set_image_for_segment(&_0, &_1, &_2);
}

PHP_METHOD(AppKit_NS_NSSegmentedCell_NSSegmentedCell, imageForSegment)
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
	RETURN_LONG(ns_nssegmentedcell_image_for_segment(&_0, &_1));
}

PHP_METHOD(AppKit_NS_NSSegmentedCell_NSSegmentedCell, setImageScalingForSegment)
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
	ns_nssegmentedcell_set_image_scaling_for_segment(&_0, &_1, &_2);
}

PHP_METHOD(AppKit_NS_NSSegmentedCell_NSSegmentedCell, imageScalingForSegment)
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
	RETURN_LONG(ns_nssegmentedcell_image_scaling_for_segment(&_0, &_1));
}

PHP_METHOD(AppKit_NS_NSSegmentedCell_NSSegmentedCell, setLabelForSegment)
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
	ns_nssegmentedcell_set_label_for_segment(&_0, &label, &_1);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSSegmentedCell_NSSegmentedCell, labelForSegment)
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
	ns_nssegmentedcell_label_for_segment(&result, &_0, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSSegmentedCell_NSSegmentedCell, setSelectedForSegment)
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
	ns_nssegmentedcell_set_selected_for_segment(&_0, &_1, &_2);
}

PHP_METHOD(AppKit_NS_NSSegmentedCell_NSSegmentedCell, isSelectedForSegment)
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
	r = ns_nssegmentedcell_is_selected_for_segment(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSSegmentedCell_NSSegmentedCell, setEnabledForSegment)
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
	ns_nssegmentedcell_set_enabled_for_segment(&_0, &_1, &_2);
}

PHP_METHOD(AppKit_NS_NSSegmentedCell_NSSegmentedCell, isEnabledForSegment)
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
	r = ns_nssegmentedcell_is_enabled_for_segment(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSSegmentedCell_NSSegmentedCell, setMenuForSegment)
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
	ns_nssegmentedcell_set_menu_for_segment(&_0, &_1, &_2);
}

PHP_METHOD(AppKit_NS_NSSegmentedCell_NSSegmentedCell, menuForSegment)
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
	RETURN_LONG(ns_nssegmentedcell_menu_for_segment(&_0, &_1));
}

PHP_METHOD(AppKit_NS_NSSegmentedCell_NSSegmentedCell, setToolTipForSegment)
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
	ns_nssegmentedcell_set_tool_tip_for_segment(&_0, toolTip, &_1);
}

PHP_METHOD(AppKit_NS_NSSegmentedCell_NSSegmentedCell, toolTipForSegment)
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
	ns_nssegmentedcell_tool_tip_for_segment(&result, &_0, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSSegmentedCell_NSSegmentedCell, setTagForSegment)
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
	ns_nssegmentedcell_set_tag_for_segment(&_0, &_1, &_2);
}

PHP_METHOD(AppKit_NS_NSSegmentedCell_NSSegmentedCell, tagForSegment)
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
	RETURN_LONG(ns_nssegmentedcell_tag_for_segment(&_0, &_1));
}

PHP_METHOD(AppKit_NS_NSSegmentedCell_NSSegmentedCell, segmentStyle)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nssegmentedcell_segment_style(&_0));
}

PHP_METHOD(AppKit_NS_NSSegmentedCell_NSSegmentedCell, setSegmentStyle)
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
	ns_nssegmentedcell_set_segment_style(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSSegmentedCell_NSSegmentedCell, drawSegmentInFrameWithView)
{
	double x, y, width, height;
	zval *handle_param = NULL, *segment_param = NULL, *x_param = NULL, *y_param = NULL, *width_param = NULL, *height_param = NULL, *controlView_param = NULL, _0, _1, _2, _3, _4, _5, _6;
	zend_long handle, segment, controlView;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_6);
	ZEND_PARSE_PARAMETERS_START(7, 7)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(segment)
		Z_PARAM_ZVAL(x)
		Z_PARAM_ZVAL(y)
		Z_PARAM_ZVAL(width)
		Z_PARAM_ZVAL(height)
		Z_PARAM_LONG(controlView)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(7, 0, &handle_param, &segment_param, &x_param, &y_param, &width_param, &height_param, &controlView_param);
	x = zephir_get_doubleval(x_param);
	y = zephir_get_doubleval(y_param);
	width = zephir_get_doubleval(width_param);
	height = zephir_get_doubleval(height_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, segment);
	ZVAL_DOUBLE(&_2, x);
	ZVAL_DOUBLE(&_3, y);
	ZVAL_DOUBLE(&_4, width);
	ZVAL_DOUBLE(&_5, height);
	ZVAL_LONG(&_6, controlView);
	ns_nssegmentedcell_draw_segment_in_frame_with_view(&_0, &_1, &_2, &_3, &_4, &_5, &_6);
}

PHP_METHOD(AppKit_NS_NSSegmentedCell_NSSegmentedCell, interiorBackgroundStyleForSegment)
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
	RETURN_LONG(ns_nssegmentedcell_interior_background_style_for_segment(&_0, &_1));
}

