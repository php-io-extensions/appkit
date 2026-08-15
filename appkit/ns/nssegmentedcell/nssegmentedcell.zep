namespace AppKit\NS\NSSegmentedCell;

%{
#include "ns-segmentedcell.h"
#include <stdint.h>
}%


/**
 * NSSegmentedCell — cell used by NSSegmentedControl.
 */
class NSSegmentedCell
{
    public static function createText(string value = "") -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_segmentedcell_create_text(Z_STRVAL(value));
        }%
        return handle;
    }

    public static function wrap(int nsSegmentedCellPtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_segmentedcell_wrap((void *)(uintptr_t) nsSegmentedCellPtr);
        }%
        return handle;
    }

    public static function destroy(int cell) -> void
    {
        %{
            ns_segmentedcell_destroy((uintptr_t) cell);
        }%
    }

    public static function nsSegmentedCell(int cell) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_segmentedcell_nssegmentedcell((uintptr_t) cell);
        }%
        return ptr;
    }

    public static function setTitle(int cell, string title) -> void
    {
        %{
            ns_segmentedcell_set_title((uintptr_t) cell, Z_STRVAL(title));
        }%
    }

    public static function getTitle(int cell) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\0';
            if (ns_segmentedcell_get_title((uintptr_t) cell, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }

    public static function setState(int cell, int state) -> void
    {
        %{
            ns_segmentedcell_set_state((uintptr_t) cell, (int) state);
        }%
    }

    public static function getState(int cell) -> int
    {
        int value;
        %{
            value = (zend_long) ns_segmentedcell_get_state((uintptr_t) cell);
        }%
        return value;
    }

    public static function setEnabled(int cell, bool enabled) -> void
    {
        %{
            ns_segmentedcell_set_enabled((uintptr_t) cell, enabled ? 1 : 0);
        }%
    }

    public static function isEnabled(int cell) -> bool
    {
        bool result;
        %{
            result = ns_segmentedcell_is_enabled((uintptr_t) cell) == 1;
        }%
        return result;
    }

    public static function setTag(int cell, int tag) -> void
    {
        %{
            ns_segmentedcell_set_tag((uintptr_t) cell, (int) tag);
        }%
    }

    public static function getTag(int cell) -> int
    {
        int value;
        %{
            value = (zend_long) ns_segmentedcell_get_tag((uintptr_t) cell);
        }%
        return value;
    }

    public static function setSegmentCount(int cell, int count) -> void
    {
        %{
            ns_segmentedcell_set_segment_count((uintptr_t) cell, (int) count);
        }%
    }

    public static function getSegmentCount(int cell) -> int
    {
        int value;
        %{
            value = (zend_long) ns_segmentedcell_get_segment_count((uintptr_t) cell);
        }%
        return value;
    }

    public static function setSelectedSegment(int cell, int index) -> void
    {
        %{
            ns_segmentedcell_set_selected_segment((uintptr_t) cell, (int) index);
        }%
    }

    public static function getSelectedSegment(int cell) -> int
    {
        int value;
        %{
            value = (zend_long) ns_segmentedcell_get_selected_segment((uintptr_t) cell);
        }%
        return value;
    }

    public static function selectSegmentWithTag(int cell, int tag) -> bool
    {
        bool result;
        %{
            result = ns_segmentedcell_select_segment_with_tag((uintptr_t) cell, (int) tag) == 1;
        }%
        return result;
    }

    public static function setTrackingMode(int cell, int mode) -> void
    {
        %{
            ns_segmentedcell_set_tracking_mode((uintptr_t) cell, (int) mode);
        }%
    }

    public static function getTrackingMode(int cell) -> int
    {
        int value;
        %{
            value = (zend_long) ns_segmentedcell_get_tracking_mode((uintptr_t) cell);
        }%
        return value;
    }

    public static function setSegmentStyle(int cell, int style) -> void
    {
        %{
            ns_segmentedcell_set_segment_style((uintptr_t) cell, (int) style);
        }%
    }

    public static function getSegmentStyle(int cell) -> int
    {
        int value;
        %{
            value = (zend_long) ns_segmentedcell_get_segment_style((uintptr_t) cell);
        }%
        return value;
    }

    public static function setWidthForSegment(int cell, double width, int segment) -> void
    {
        %{
            ns_segmentedcell_set_width_for_segment((uintptr_t) cell, (double) width, (int) segment);
        }%
    }

    public static function widthForSegment(int cell, int segment) -> double
    {
        double value;
        %{
            value = ns_segmentedcell_width_for_segment((uintptr_t) cell, (int) segment);
        }%
        return value;
    }

    public static function setLabelForSegment(int cell, string label, int segment) -> void
    {
        %{
            ns_segmentedcell_set_label_for_segment((uintptr_t) cell, Z_STRVAL(label), (int) segment);
        }%
    }

    public static function labelForSegment(int cell, int segment) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\0';
            if (ns_segmentedcell_label_for_segment((uintptr_t) cell, (int) segment, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }

    public static function setSelectedForSegment(int cell, bool selected, int segment) -> void
    {
        %{
            ns_segmentedcell_set_selected_for_segment((uintptr_t) cell, selected ? 1 : 0, (int) segment);
        }%
    }

    public static function isSelectedForSegment(int cell, int segment) -> bool
    {
        bool result;
        %{
            result = ns_segmentedcell_is_selected_for_segment((uintptr_t) cell, (int) segment) == 1;
        }%
        return result;
    }

    public static function setEnabledForSegment(int cell, bool enabled, int segment) -> void
    {
        %{
            ns_segmentedcell_set_enabled_for_segment((uintptr_t) cell, enabled ? 1 : 0, (int) segment);
        }%
    }

    public static function isEnabledForSegment(int cell, int segment) -> bool
    {
        bool result;
        %{
            result = ns_segmentedcell_is_enabled_for_segment((uintptr_t) cell, (int) segment) == 1;
        }%
        return result;
    }

    public static function setTagForSegment(int cell, int tag, int segment) -> void
    {
        %{
            ns_segmentedcell_set_tag_for_segment((uintptr_t) cell, (int) tag, (int) segment);
        }%
    }

    public static function tagForSegment(int cell, int segment) -> int
    {
        int value;
        %{
            value = (zend_long) ns_segmentedcell_tag_for_segment((uintptr_t) cell, (int) segment);
        }%
        return value;
    }
}
