namespace AppKit\NS\NSFormCell;

%{
#include "ns-formcell.h"
#include <stdint.h>
}%


/**
 * NSFormCell used by NSForm.
 */
class NSFormCell
{
    public static function createText(string value = "") -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_formcell_create_text(Z_STRVAL(value));
        }%
        return handle;
    }
    public static function wrap(int nsFormCellPtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_formcell_wrap((void *)(uintptr_t) nsFormCellPtr);
        }%
        return handle;
    }
    public static function destroy(int cell) -> void
    {
        %{
            ns_formcell_destroy((uintptr_t) cell);
        }%
    }
    public static function nsFormCell(int cell) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_formcell_nsformcell((uintptr_t) cell);
        }%
        return ptr;
    }
    public static function setTitle(int cell, string title) -> void
    {
        %{
            ns_formcell_set_title((uintptr_t) cell, Z_STRVAL(title));
        }%
    }
    public static function getTitle(int cell) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\0';
            if (ns_formcell_get_title((uintptr_t) cell, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }
    public static function setState(int cell, int state) -> void
    {
        %{
            ns_formcell_set_state((uintptr_t) cell, (int) state);
        }%
    }
    public static function getState(int cell) -> int
    {
        int value;
        %{
            value = (zend_long) ns_formcell_get_state((uintptr_t) cell);
        }%
        return value;
    }
    public static function setEnabled(int cell, bool enabled) -> void
    {
        %{
            ns_formcell_set_enabled((uintptr_t) cell, enabled ? 1 : 0);
        }%
    }
    public static function isEnabled(int cell) -> bool
    {
        bool result;
        %{
            result = ns_formcell_is_enabled((uintptr_t) cell) == 1;
        }%
        return result;
    }
    public static function setTag(int cell, int tag) -> void
    {
        %{
            ns_formcell_set_tag((uintptr_t) cell, (int) tag);
        }%
    }
    public static function getTag(int cell) -> int
    {
        int value;
        %{
            value = (zend_long) ns_formcell_get_tag((uintptr_t) cell);
        }%
        return value;
    }
    public static function setPlaceholderString(int cell, string placeholder) -> void
    {
        %{
            ns_formcell_set_placeholder_string((uintptr_t) cell, Z_STRVAL(placeholder));
        }%
    }
    public static function getPlaceholderString(int cell) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\0';
            if (ns_formcell_get_placeholder_string((uintptr_t) cell, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }
    public static function setTitleWidth(int cell, double width) -> void
    {
        %{
            ns_formcell_set_title_width((uintptr_t) cell, (double) width);
        }%
    }
    public static function getTitleWidth(int cell) -> double
    {
        double value;
        %{
            value = ns_formcell_get_title_width((uintptr_t) cell);
        }%
        return value;
    }
    public static function setStringValue(int cell, string value) -> void
    {
        %{
            ns_formcell_set_string_value((uintptr_t) cell, Z_STRVAL(value));
        }%
    }
    public static function getStringValue(int cell) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\0';
            if (ns_formcell_get_string_value((uintptr_t) cell, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }
}
