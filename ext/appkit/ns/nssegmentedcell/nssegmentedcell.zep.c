
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
#include "kernel/memory.h"
#include "kernel/operators.h"
#include "kernel/object.h"

#include "ns-segmentedcell.h"
#include <stdint.h>



/**
 * NSSegmentedCell — cell used by NSSegmentedControl.
 */
ZEPHIR_INIT_CLASS(AppKit_NS_NSSegmentedCell_NSSegmentedCell)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSSegmentedCell, NSSegmentedCell, appkit, ns_nssegmentedcell_nssegmentedcell, appkit_ns_nssegmentedcell_nssegmentedcell_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSSegmentedCell_NSSegmentedCell, createText)
{
	zend_long handle = 0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *value_param = NULL;
	zval value;

	ZVAL_UNDEF(&value);
	ZEND_PARSE_PARAMETERS_START(0, 1)
		Z_PARAM_OPTIONAL
		Z_PARAM_STR(value)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 0, 1, &value_param);
	if (!value_param) {
		ZEPHIR_INIT_VAR(&value);
		ZVAL_STRING(&value, "");
	} else {
		zephir_get_strval(&value, value_param);
	}
	
            handle = (zend_long) ns_segmentedcell_create_text(Z_STRVAL(value));
        
	RETURN_MM_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSSegmentedCell_NSSegmentedCell, wrap)
{
	zval *nsSegmentedCellPtr_param = NULL;
	zend_long nsSegmentedCellPtr, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(nsSegmentedCellPtr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &nsSegmentedCellPtr_param);
	
            handle = (zend_long) ns_segmentedcell_wrap((void *)(uintptr_t) nsSegmentedCellPtr);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSSegmentedCell_NSSegmentedCell, destroy)
{
	zval *cell_param = NULL;
	zend_long cell;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(cell)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &cell_param);
	
            ns_segmentedcell_destroy((uintptr_t) cell);
        
}

PHP_METHOD(AppKit_NS_NSSegmentedCell_NSSegmentedCell, nsSegmentedCell)
{
	zval *cell_param = NULL;
	zend_long cell, ptr = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(cell)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &cell_param);
	
            ptr = (zend_long)(uintptr_t) ns_segmentedcell_nssegmentedcell((uintptr_t) cell);
        
	RETURN_LONG(ptr);
}

PHP_METHOD(AppKit_NS_NSSegmentedCell_NSSegmentedCell, setTitle)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval title;
	zval *cell_param = NULL, *title_param = NULL;
	zend_long cell;

	ZVAL_UNDEF(&title);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(cell)
		Z_PARAM_STR(title)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &cell_param, &title_param);
	zephir_get_strval(&title, title_param);
	
            ns_segmentedcell_set_title((uintptr_t) cell, Z_STRVAL(title));
        
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSSegmentedCell_NSSegmentedCell, getTitle)
{
	zval *cell_param = NULL;
	zend_long cell;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(cell)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &cell_param);
	
            char buf[4096];
            buf[0] = '\0';
            if (ns_segmentedcell_get_title((uintptr_t) cell, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        
	RETURN_STRING("");
}

PHP_METHOD(AppKit_NS_NSSegmentedCell_NSSegmentedCell, setState)
{
	zval *cell_param = NULL, *state_param = NULL;
	zend_long cell, state;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(cell)
		Z_PARAM_LONG(state)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &cell_param, &state_param);
	
            ns_segmentedcell_set_state((uintptr_t) cell, (int) state);
        
}

PHP_METHOD(AppKit_NS_NSSegmentedCell_NSSegmentedCell, getState)
{
	zval *cell_param = NULL;
	zend_long cell, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(cell)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &cell_param);
	
            value = (zend_long) ns_segmentedcell_get_state((uintptr_t) cell);
        
	RETURN_LONG(value);
}

PHP_METHOD(AppKit_NS_NSSegmentedCell_NSSegmentedCell, setEnabled)
{
	zend_bool enabled;
	zval *cell_param = NULL, *enabled_param = NULL;
	zend_long cell;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(cell)
		Z_PARAM_BOOL(enabled)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &cell_param, &enabled_param);
	
            ns_segmentedcell_set_enabled((uintptr_t) cell, enabled ? 1 : 0);
        
}

PHP_METHOD(AppKit_NS_NSSegmentedCell_NSSegmentedCell, isEnabled)
{
	zend_bool result = 0;
	zval *cell_param = NULL;
	zend_long cell;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(cell)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &cell_param);
	
            result = ns_segmentedcell_is_enabled((uintptr_t) cell) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSSegmentedCell_NSSegmentedCell, setTag)
{
	zval *cell_param = NULL, *tag_param = NULL;
	zend_long cell, tag;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(cell)
		Z_PARAM_LONG(tag)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &cell_param, &tag_param);
	
            ns_segmentedcell_set_tag((uintptr_t) cell, (int) tag);
        
}

PHP_METHOD(AppKit_NS_NSSegmentedCell_NSSegmentedCell, getTag)
{
	zval *cell_param = NULL;
	zend_long cell, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(cell)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &cell_param);
	
            value = (zend_long) ns_segmentedcell_get_tag((uintptr_t) cell);
        
	RETURN_LONG(value);
}

PHP_METHOD(AppKit_NS_NSSegmentedCell_NSSegmentedCell, setSegmentCount)
{
	zval *cell_param = NULL, *count_param = NULL;
	zend_long cell, count;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(cell)
		Z_PARAM_LONG(count)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &cell_param, &count_param);
	
            ns_segmentedcell_set_segment_count((uintptr_t) cell, (int) count);
        
}

PHP_METHOD(AppKit_NS_NSSegmentedCell_NSSegmentedCell, getSegmentCount)
{
	zval *cell_param = NULL;
	zend_long cell, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(cell)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &cell_param);
	
            value = (zend_long) ns_segmentedcell_get_segment_count((uintptr_t) cell);
        
	RETURN_LONG(value);
}

PHP_METHOD(AppKit_NS_NSSegmentedCell_NSSegmentedCell, setSelectedSegment)
{
	zval *cell_param = NULL, *index_param = NULL;
	zend_long cell, index;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(cell)
		Z_PARAM_LONG(index)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &cell_param, &index_param);
	
            ns_segmentedcell_set_selected_segment((uintptr_t) cell, (int) index);
        
}

PHP_METHOD(AppKit_NS_NSSegmentedCell_NSSegmentedCell, getSelectedSegment)
{
	zval *cell_param = NULL;
	zend_long cell, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(cell)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &cell_param);
	
            value = (zend_long) ns_segmentedcell_get_selected_segment((uintptr_t) cell);
        
	RETURN_LONG(value);
}

PHP_METHOD(AppKit_NS_NSSegmentedCell_NSSegmentedCell, selectSegmentWithTag)
{
	zend_bool result = 0;
	zval *cell_param = NULL, *tag_param = NULL;
	zend_long cell, tag;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(cell)
		Z_PARAM_LONG(tag)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &cell_param, &tag_param);
	
            result = ns_segmentedcell_select_segment_with_tag((uintptr_t) cell, (int) tag) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSSegmentedCell_NSSegmentedCell, setTrackingMode)
{
	zval *cell_param = NULL, *mode_param = NULL;
	zend_long cell, mode;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(cell)
		Z_PARAM_LONG(mode)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &cell_param, &mode_param);
	
            ns_segmentedcell_set_tracking_mode((uintptr_t) cell, (int) mode);
        
}

PHP_METHOD(AppKit_NS_NSSegmentedCell_NSSegmentedCell, getTrackingMode)
{
	zval *cell_param = NULL;
	zend_long cell, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(cell)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &cell_param);
	
            value = (zend_long) ns_segmentedcell_get_tracking_mode((uintptr_t) cell);
        
	RETURN_LONG(value);
}

PHP_METHOD(AppKit_NS_NSSegmentedCell_NSSegmentedCell, setSegmentStyle)
{
	zval *cell_param = NULL, *style_param = NULL;
	zend_long cell, style;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(cell)
		Z_PARAM_LONG(style)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &cell_param, &style_param);
	
            ns_segmentedcell_set_segment_style((uintptr_t) cell, (int) style);
        
}

PHP_METHOD(AppKit_NS_NSSegmentedCell_NSSegmentedCell, getSegmentStyle)
{
	zval *cell_param = NULL;
	zend_long cell, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(cell)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &cell_param);
	
            value = (zend_long) ns_segmentedcell_get_segment_style((uintptr_t) cell);
        
	RETURN_LONG(value);
}

PHP_METHOD(AppKit_NS_NSSegmentedCell_NSSegmentedCell, setWidthForSegment)
{
	double width;
	zval *cell_param = NULL, *width_param = NULL, *segment_param = NULL;
	zend_long cell, segment;

	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(cell)
		Z_PARAM_ZVAL(width)
		Z_PARAM_LONG(segment)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &cell_param, &width_param, &segment_param);
	width = zephir_get_doubleval(width_param);
	
            ns_segmentedcell_set_width_for_segment((uintptr_t) cell, (double) width, (int) segment);
        
}

PHP_METHOD(AppKit_NS_NSSegmentedCell_NSSegmentedCell, widthForSegment)
{
	double value = 0;
	zval *cell_param = NULL, *segment_param = NULL;
	zend_long cell, segment;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(cell)
		Z_PARAM_LONG(segment)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &cell_param, &segment_param);
	
            value = ns_segmentedcell_width_for_segment((uintptr_t) cell, (int) segment);
        
	RETURN_DOUBLE(value);
}

PHP_METHOD(AppKit_NS_NSSegmentedCell_NSSegmentedCell, setLabelForSegment)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval label;
	zval *cell_param = NULL, *label_param = NULL, *segment_param = NULL;
	zend_long cell, segment;

	ZVAL_UNDEF(&label);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(cell)
		Z_PARAM_STR(label)
		Z_PARAM_LONG(segment)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &cell_param, &label_param, &segment_param);
	zephir_get_strval(&label, label_param);
	
            ns_segmentedcell_set_label_for_segment((uintptr_t) cell, Z_STRVAL(label), (int) segment);
        
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSSegmentedCell_NSSegmentedCell, labelForSegment)
{
	zval *cell_param = NULL, *segment_param = NULL;
	zend_long cell, segment;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(cell)
		Z_PARAM_LONG(segment)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &cell_param, &segment_param);
	
            char buf[4096];
            buf[0] = '\0';
            if (ns_segmentedcell_label_for_segment((uintptr_t) cell, (int) segment, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        
	RETURN_STRING("");
}

PHP_METHOD(AppKit_NS_NSSegmentedCell_NSSegmentedCell, setSelectedForSegment)
{
	zend_bool selected;
	zval *cell_param = NULL, *selected_param = NULL, *segment_param = NULL;
	zend_long cell, segment;

	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(cell)
		Z_PARAM_BOOL(selected)
		Z_PARAM_LONG(segment)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &cell_param, &selected_param, &segment_param);
	
            ns_segmentedcell_set_selected_for_segment((uintptr_t) cell, selected ? 1 : 0, (int) segment);
        
}

PHP_METHOD(AppKit_NS_NSSegmentedCell_NSSegmentedCell, isSelectedForSegment)
{
	zend_bool result = 0;
	zval *cell_param = NULL, *segment_param = NULL;
	zend_long cell, segment;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(cell)
		Z_PARAM_LONG(segment)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &cell_param, &segment_param);
	
            result = ns_segmentedcell_is_selected_for_segment((uintptr_t) cell, (int) segment) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSSegmentedCell_NSSegmentedCell, setEnabledForSegment)
{
	zend_bool enabled;
	zval *cell_param = NULL, *enabled_param = NULL, *segment_param = NULL;
	zend_long cell, segment;

	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(cell)
		Z_PARAM_BOOL(enabled)
		Z_PARAM_LONG(segment)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &cell_param, &enabled_param, &segment_param);
	
            ns_segmentedcell_set_enabled_for_segment((uintptr_t) cell, enabled ? 1 : 0, (int) segment);
        
}

PHP_METHOD(AppKit_NS_NSSegmentedCell_NSSegmentedCell, isEnabledForSegment)
{
	zend_bool result = 0;
	zval *cell_param = NULL, *segment_param = NULL;
	zend_long cell, segment;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(cell)
		Z_PARAM_LONG(segment)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &cell_param, &segment_param);
	
            result = ns_segmentedcell_is_enabled_for_segment((uintptr_t) cell, (int) segment) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSSegmentedCell_NSSegmentedCell, setTagForSegment)
{
	zval *cell_param = NULL, *tag_param = NULL, *segment_param = NULL;
	zend_long cell, tag, segment;

	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(cell)
		Z_PARAM_LONG(tag)
		Z_PARAM_LONG(segment)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &cell_param, &tag_param, &segment_param);
	
            ns_segmentedcell_set_tag_for_segment((uintptr_t) cell, (int) tag, (int) segment);
        
}

PHP_METHOD(AppKit_NS_NSSegmentedCell_NSSegmentedCell, tagForSegment)
{
	zval *cell_param = NULL, *segment_param = NULL;
	zend_long cell, segment, value = 0;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(cell)
		Z_PARAM_LONG(segment)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &cell_param, &segment_param);
	
            value = (zend_long) ns_segmentedcell_tag_for_segment((uintptr_t) cell, (int) segment);
        
	RETURN_LONG(value);
}

