namespace AppKit\NS\NSLevelIndicatorCell;

%{
#include "ns-levelindicatorcell.h"
#include <stdint.h>
}%


/**
 * NSLevelIndicatorCell used by NSLevelIndicator.
 */
class NSLevelIndicatorCell
{
    public static function createText(string value = "") -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_levelindicatorcell_create_text(Z_STRVAL(value));
        }%
        return handle;
    }
    public static function wrap(int nsLevelIndicatorCellPtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_levelindicatorcell_wrap((void *)(uintptr_t) nsLevelIndicatorCellPtr);
        }%
        return handle;
    }
    public static function destroy(int cell) -> void
    {
        %{
            ns_levelindicatorcell_destroy((uintptr_t) cell);
        }%
    }
    public static function nsLevelIndicatorCell(int cell) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_levelindicatorcell_nslevelindicatorcell((uintptr_t) cell);
        }%
        return ptr;
    }
    public static function setTitle(int cell, string title) -> void
    {
        %{
            ns_levelindicatorcell_set_title((uintptr_t) cell, Z_STRVAL(title));
        }%
    }
    public static function getTitle(int cell) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\0';
            if (ns_levelindicatorcell_get_title((uintptr_t) cell, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }
    public static function setState(int cell, int state) -> void
    {
        %{
            ns_levelindicatorcell_set_state((uintptr_t) cell, (int) state);
        }%
    }
    public static function getState(int cell) -> int
    {
        int value;
        %{
            value = (zend_long) ns_levelindicatorcell_get_state((uintptr_t) cell);
        }%
        return value;
    }
    public static function setEnabled(int cell, bool enabled) -> void
    {
        %{
            ns_levelindicatorcell_set_enabled((uintptr_t) cell, enabled ? 1 : 0);
        }%
    }
    public static function isEnabled(int cell) -> bool
    {
        bool result;
        %{
            result = ns_levelindicatorcell_is_enabled((uintptr_t) cell) == 1;
        }%
        return result;
    }
    public static function setTag(int cell, int tag) -> void
    {
        %{
            ns_levelindicatorcell_set_tag((uintptr_t) cell, (int) tag);
        }%
    }
    public static function getTag(int cell) -> int
    {
        int value;
        %{
            value = (zend_long) ns_levelindicatorcell_get_tag((uintptr_t) cell);
        }%
        return value;
    }
    public static function setLevelIndicatorStyle(int cell, int style) -> void
    {
        %{
            ns_levelindicatorcell_set_level_indicator_style((uintptr_t) cell, (int) style);
        }%
    }
    public static function getLevelIndicatorStyle(int cell) -> int
    {
        int value;
        %{
            value = (zend_long) ns_levelindicatorcell_get_level_indicator_style((uintptr_t) cell);
        }%
        return value;
    }
    public static function setEditable(int cell, bool flag) -> void
    {
        %{
            ns_levelindicatorcell_set_editable((uintptr_t) cell, flag ? 1 : 0);
        }%
    }
    public static function isEditable(int cell) -> bool
    {
        bool result;
        %{
            result = ns_levelindicatorcell_is_editable((uintptr_t) cell) == 1;
        }%
        return result;
    }
    public static function setMinValue(int cell, double value) -> void
    {
        %{
            ns_levelindicatorcell_set_min_value((uintptr_t) cell, (double) value);
        }%
    }
    public static function getMinValue(int cell) -> double
    {
        double value;
        %{
            value = ns_levelindicatorcell_get_min_value((uintptr_t) cell);
        }%
        return value;
    }
    public static function setMaxValue(int cell, double value) -> void
    {
        %{
            ns_levelindicatorcell_set_max_value((uintptr_t) cell, (double) value);
        }%
    }
    public static function getMaxValue(int cell) -> double
    {
        double value;
        %{
            value = ns_levelindicatorcell_get_max_value((uintptr_t) cell);
        }%
        return value;
    }
    public static function setWarningValue(int cell, double value) -> void
    {
        %{
            ns_levelindicatorcell_set_warning_value((uintptr_t) cell, (double) value);
        }%
    }
    public static function getWarningValue(int cell) -> double
    {
        double value;
        %{
            value = ns_levelindicatorcell_get_warning_value((uintptr_t) cell);
        }%
        return value;
    }
    public static function setCriticalValue(int cell, double value) -> void
    {
        %{
            ns_levelindicatorcell_set_critical_value((uintptr_t) cell, (double) value);
        }%
    }
    public static function getCriticalValue(int cell) -> double
    {
        double value;
        %{
            value = ns_levelindicatorcell_get_critical_value((uintptr_t) cell);
        }%
        return value;
    }
    public static function setDoubleValue(int cell, double value) -> void
    {
        %{
            ns_levelindicatorcell_set_double_value((uintptr_t) cell, (double) value);
        }%
    }
    public static function getDoubleValue(int cell) -> double
    {
        double value;
        %{
            value = ns_levelindicatorcell_get_double_value((uintptr_t) cell);
        }%
        return value;
    }
}
