namespace AppKit\NS\NSStepperCell;

%{
#include "ns-steppercell.h"
#include <stdint.h>
}%


/**
 * NSStepperCell — cell used by NSStepper.
 */
class NSStepperCell
{
    public static function createText(string value = "") -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_steppercell_create_text(Z_STRVAL(value));
        }%
        return handle;
    }

    public static function wrap(int nsStepperCellPtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_steppercell_wrap((void *)(uintptr_t) nsStepperCellPtr);
        }%
        return handle;
    }

    public static function destroy(int cell) -> void
    {
        %{
            ns_steppercell_destroy((uintptr_t) cell);
        }%
    }

    public static function nsStepperCell(int cell) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_steppercell_nssteppercell((uintptr_t) cell);
        }%
        return ptr;
    }

    public static function setTitle(int cell, string title) -> void
    {
        %{
            ns_steppercell_set_title((uintptr_t) cell, Z_STRVAL(title));
        }%
    }

    public static function getTitle(int cell) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\0';
            if (ns_steppercell_get_title((uintptr_t) cell, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }

    public static function setState(int cell, int state) -> void
    {
        %{
            ns_steppercell_set_state((uintptr_t) cell, (int) state);
        }%
    }

    public static function getState(int cell) -> int
    {
        int value;
        %{
            value = (zend_long) ns_steppercell_get_state((uintptr_t) cell);
        }%
        return value;
    }

    public static function setEnabled(int cell, bool enabled) -> void
    {
        %{
            ns_steppercell_set_enabled((uintptr_t) cell, enabled ? 1 : 0);
        }%
    }

    public static function isEnabled(int cell) -> bool
    {
        bool result;
        %{
            result = ns_steppercell_is_enabled((uintptr_t) cell) == 1;
        }%
        return result;
    }

    public static function setTag(int cell, int tag) -> void
    {
        %{
            ns_steppercell_set_tag((uintptr_t) cell, (int) tag);
        }%
    }

    public static function getTag(int cell) -> int
    {
        int value;
        %{
            value = (zend_long) ns_steppercell_get_tag((uintptr_t) cell);
        }%
        return value;
    }

    public static function setMinValue(int cell, double value) -> void
    {
        %{
            ns_steppercell_set_min_value((uintptr_t) cell, (double) value);
        }%
    }

    public static function getMinValue(int cell) -> double
    {
        double value;
        %{
            value = ns_steppercell_get_min_value((uintptr_t) cell);
        }%
        return value;
    }

    public static function setMaxValue(int cell, double value) -> void
    {
        %{
            ns_steppercell_set_max_value((uintptr_t) cell, (double) value);
        }%
    }

    public static function getMaxValue(int cell) -> double
    {
        double value;
        %{
            value = ns_steppercell_get_max_value((uintptr_t) cell);
        }%
        return value;
    }

    public static function setIncrement(int cell, double value) -> void
    {
        %{
            ns_steppercell_set_increment((uintptr_t) cell, (double) value);
        }%
    }

    public static function getIncrement(int cell) -> double
    {
        double value;
        %{
            value = ns_steppercell_get_increment((uintptr_t) cell);
        }%
        return value;
    }

    public static function setValueWraps(int cell, bool flag) -> void
    {
        %{
            ns_steppercell_set_value_wraps((uintptr_t) cell, flag ? 1 : 0);
        }%
    }

    public static function valueWraps(int cell) -> bool
    {
        bool result;
        %{
            result = ns_steppercell_value_wraps((uintptr_t) cell) == 1;
        }%
        return result;
    }

    public static function setAutorepeat(int cell, bool flag) -> void
    {
        %{
            ns_steppercell_set_autorepeat((uintptr_t) cell, flag ? 1 : 0);
        }%
    }

    public static function autorepeat(int cell) -> bool
    {
        bool result;
        %{
            result = ns_steppercell_autorepeat((uintptr_t) cell) == 1;
        }%
        return result;
    }
}
