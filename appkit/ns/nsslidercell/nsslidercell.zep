namespace AppKit\NS\NSSliderCell;

%{
#include "ns-slidercell.h"
#include <stdint.h>
}%


/**
 * NSSliderCell — cell used by NSSlider.
 */
class NSSliderCell
{
    public static function createText(string value = "") -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_slidercell_create_text(Z_STRVAL(value));
        }%
        return handle;
    }

    public static function wrap(int nsSliderCellPtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_slidercell_wrap((void *)(uintptr_t) nsSliderCellPtr);
        }%
        return handle;
    }

    public static function destroy(int cell) -> void
    {
        %{
            ns_slidercell_destroy((uintptr_t) cell);
        }%
    }

    public static function nsSliderCell(int cell) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_slidercell_nsslidercell((uintptr_t) cell);
        }%
        return ptr;
    }

    public static function setTitle(int cell, string title) -> void
    {
        %{
            ns_slidercell_set_title((uintptr_t) cell, Z_STRVAL(title));
        }%
    }

    public static function getTitle(int cell) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\0';
            if (ns_slidercell_get_title((uintptr_t) cell, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }

    public static function setState(int cell, int state) -> void
    {
        %{
            ns_slidercell_set_state((uintptr_t) cell, (int) state);
        }%
    }

    public static function getState(int cell) -> int
    {
        int value;
        %{
            value = (zend_long) ns_slidercell_get_state((uintptr_t) cell);
        }%
        return value;
    }

    public static function setEnabled(int cell, bool enabled) -> void
    {
        %{
            ns_slidercell_set_enabled((uintptr_t) cell, enabled ? 1 : 0);
        }%
    }

    public static function isEnabled(int cell) -> bool
    {
        bool result;
        %{
            result = ns_slidercell_is_enabled((uintptr_t) cell) == 1;
        }%
        return result;
    }

    public static function setTag(int cell, int tag) -> void
    {
        %{
            ns_slidercell_set_tag((uintptr_t) cell, (int) tag);
        }%
    }

    public static function getTag(int cell) -> int
    {
        int value;
        %{
            value = (zend_long) ns_slidercell_get_tag((uintptr_t) cell);
        }%
        return value;
    }

    public static function setMinValue(int cell, double value) -> void
    {
        %{
            ns_slidercell_set_min_value((uintptr_t) cell, (double) value);
        }%
    }

    public static function getMinValue(int cell) -> double
    {
        double value;
        %{
            value = ns_slidercell_get_min_value((uintptr_t) cell);
        }%
        return value;
    }

    public static function setMaxValue(int cell, double value) -> void
    {
        %{
            ns_slidercell_set_max_value((uintptr_t) cell, (double) value);
        }%
    }

    public static function getMaxValue(int cell) -> double
    {
        double value;
        %{
            value = ns_slidercell_get_max_value((uintptr_t) cell);
        }%
        return value;
    }

    public static function setAltIncrementValue(int cell, double value) -> void
    {
        %{
            ns_slidercell_set_alt_increment_value((uintptr_t) cell, (double) value);
        }%
    }

    public static function getAltIncrementValue(int cell) -> double
    {
        double value;
        %{
            value = ns_slidercell_get_alt_increment_value((uintptr_t) cell);
        }%
        return value;
    }

    public static function setSliderType(int cell, int type) -> void
    {
        %{
            ns_slidercell_set_slider_type((uintptr_t) cell, (int) type);
        }%
    }

    public static function getSliderType(int cell) -> int
    {
        int value;
        %{
            value = (zend_long) ns_slidercell_get_slider_type((uintptr_t) cell);
        }%
        return value;
    }

    public static function setVertical(int cell, bool flag) -> void
    {
        %{
            ns_slidercell_set_vertical((uintptr_t) cell, flag ? 1 : 0);
        }%
    }

    public static function isVertical(int cell) -> bool
    {
        bool result;
        %{
            result = ns_slidercell_is_vertical((uintptr_t) cell) == 1;
        }%
        return result;
    }

    public static function setNumberOfTickMarks(int cell, int count) -> void
    {
        %{
            ns_slidercell_set_number_of_tick_marks((uintptr_t) cell, (int) count);
        }%
    }

    public static function getNumberOfTickMarks(int cell) -> int
    {
        int value;
        %{
            value = (zend_long) ns_slidercell_get_number_of_tick_marks((uintptr_t) cell);
        }%
        return value;
    }

    public static function setTickMarkPosition(int cell, int position) -> void
    {
        %{
            ns_slidercell_set_tick_mark_position((uintptr_t) cell, (int) position);
        }%
    }

    public static function getTickMarkPosition(int cell) -> int
    {
        int value;
        %{
            value = (zend_long) ns_slidercell_get_tick_mark_position((uintptr_t) cell);
        }%
        return value;
    }

    public static function setAllowsTickMarkValuesOnly(int cell, bool flag) -> void
    {
        %{
            ns_slidercell_set_allows_tick_mark_values_only((uintptr_t) cell, flag ? 1 : 0);
        }%
    }

    public static function allowsTickMarkValuesOnly(int cell) -> bool
    {
        bool result;
        %{
            result = ns_slidercell_allows_tick_mark_values_only((uintptr_t) cell) == 1;
        }%
        return result;
    }

    public static function tickMarkValueAtIndex(int cell, int index) -> double
    {
        double value;
        %{
            value = ns_slidercell_tick_mark_value_at_index((uintptr_t) cell, (int) index);
        }%
        return value;
    }

    public static function closestTickMarkValueToValue(int cell, double value) -> double
    {
        double result;
        %{
            result = ns_slidercell_closest_tick_mark_value_to_value((uintptr_t) cell, (double) value);
        }%
        return result;
    }
}
