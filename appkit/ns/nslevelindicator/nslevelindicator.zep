namespace AppKit\NS\NSLevelIndicator;

%{
#include "ns-levelindicator.h"
#include <stdint.h>
}%


/**
 * NSLevelIndicator capacity / rating control.
 */
class NSLevelIndicator
{
    public static function create(int x, int y, int width, int height) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_levelindicator_create((double) x, (double) y, (double) width, (double) height);
        }%
        return handle;
    }
    public static function destroy(int indicator) -> void
    {
        %{
            ns_levelindicator_destroy((uintptr_t) indicator);
        }%
    }
    public static function setLevelIndicatorStyle(int indicator, int style) -> void
    {
        %{
            ns_levelindicator_set_level_indicator_style((uintptr_t) indicator, (int) style);
        }%
    }
    public static function getLevelIndicatorStyle(int indicator) -> int
    {
        int value;
        %{
            value = (zend_long) ns_levelindicator_get_level_indicator_style((uintptr_t) indicator);
        }%
        return value;
    }
    public static function setEditable(int indicator, bool flag) -> void
    {
        %{
            ns_levelindicator_set_editable((uintptr_t) indicator, flag ? 1 : 0);
        }%
    }
    public static function isEditable(int indicator) -> bool
    {
        bool result;
        %{
            result = ns_levelindicator_is_editable((uintptr_t) indicator) == 1;
        }%
        return result;
    }
    public static function setMinValue(int indicator, double value) -> void
    {
        %{
            ns_levelindicator_set_min_value((uintptr_t) indicator, (double) value);
        }%
    }
    public static function getMinValue(int indicator) -> double
    {
        double value;
        %{
            value = ns_levelindicator_get_min_value((uintptr_t) indicator);
        }%
        return value;
    }
    public static function setMaxValue(int indicator, double value) -> void
    {
        %{
            ns_levelindicator_set_max_value((uintptr_t) indicator, (double) value);
        }%
    }
    public static function getMaxValue(int indicator) -> double
    {
        double value;
        %{
            value = ns_levelindicator_get_max_value((uintptr_t) indicator);
        }%
        return value;
    }
    public static function setWarningValue(int indicator, double value) -> void
    {
        %{
            ns_levelindicator_set_warning_value((uintptr_t) indicator, (double) value);
        }%
    }
    public static function getWarningValue(int indicator) -> double
    {
        double value;
        %{
            value = ns_levelindicator_get_warning_value((uintptr_t) indicator);
        }%
        return value;
    }
    public static function setCriticalValue(int indicator, double value) -> void
    {
        %{
            ns_levelindicator_set_critical_value((uintptr_t) indicator, (double) value);
        }%
    }
    public static function getCriticalValue(int indicator) -> double
    {
        double value;
        %{
            value = ns_levelindicator_get_critical_value((uintptr_t) indicator);
        }%
        return value;
    }
    public static function setDoubleValue(int indicator, double value) -> void
    {
        %{
            ns_levelindicator_set_double_value((uintptr_t) indicator, (double) value);
        }%
    }
    public static function getDoubleValue(int indicator) -> double
    {
        double value;
        %{
            value = ns_levelindicator_get_double_value((uintptr_t) indicator);
        }%
        return value;
    }
    public static function setNumberOfTickMarks(int indicator, int count) -> void
    {
        %{
            ns_levelindicator_set_number_of_tick_marks((uintptr_t) indicator, (int) count);
        }%
    }
    public static function getNumberOfTickMarks(int indicator) -> int
    {
        int value;
        %{
            value = (zend_long) ns_levelindicator_get_number_of_tick_marks((uintptr_t) indicator);
        }%
        return value;
    }
    public static function setNumberOfMajorTickMarks(int indicator, int count) -> void
    {
        %{
            ns_levelindicator_set_number_of_major_tick_marks((uintptr_t) indicator, (int) count);
        }%
    }
    public static function getNumberOfMajorTickMarks(int indicator) -> int
    {
        int value;
        %{
            value = (zend_long) ns_levelindicator_get_number_of_major_tick_marks((uintptr_t) indicator);
        }%
        return value;
    }
    public static function setDrawsTieredCapacityLevels(int indicator, bool flag) -> void
    {
        %{
            ns_levelindicator_set_draws_tiered_capacity_levels((uintptr_t) indicator, flag ? 1 : 0);
        }%
    }
    public static function drawsTieredCapacityLevels(int indicator) -> bool
    {
        bool result;
        %{
            result = ns_levelindicator_draws_tiered_capacity_levels((uintptr_t) indicator) == 1;
        }%
        return result;
    }
    public static function setPlaceholderVisibility(int indicator, int visibility) -> void
    {
        %{
            ns_levelindicator_set_placeholder_visibility((uintptr_t) indicator, (int) visibility);
        }%
    }
    public static function getPlaceholderVisibility(int indicator) -> int
    {
        int value;
        %{
            value = (zend_long) ns_levelindicator_get_placeholder_visibility((uintptr_t) indicator);
        }%
        return value;
    }
}
