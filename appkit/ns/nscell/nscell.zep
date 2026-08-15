namespace AppKit\NS\NSCell;

%{
#include "ns-cell.h"
#include <stdint.h>
}%

/**
 * NSCell — standalone cell objects used by NSMatrix and legacy cell-based controls.
 */
class NSCell
{
    /**
     * @return int Opaque cell handle, or 0 on failure
     */
    public static function createText(string title = "") -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_cell_create_text(Z_STRVAL(title));
        }%
        return handle;
    }

    /**
     * @return int Opaque cell handle, or 0 on failure
     */
    public static function wrap(int nsCellPtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_cell_wrap((void *)(uintptr_t) nsCellPtr);
        }%
        return handle;
    }

    public static function destroy(int cell) -> void
    {
        %{
            ns_cell_destroy((uintptr_t) cell);
        }%
    }

    /**
     * @return int Borrowed NSCell pointer, or 0
     */
    public static function nsCell(int cell) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_cell_nscell((uintptr_t) cell);
        }%
        return ptr;
    }

    public static function setTitle(int cell, string title) -> void
    {
        %{
            ns_cell_set_title((uintptr_t) cell, Z_STRVAL(title));
        }%
    }

    public static function getTitle(int cell) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\0';
            if (ns_cell_get_title((uintptr_t) cell, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }

    /**
     * NSControlStateValue: -1 mixed, 0 off, 1 on.
     */
    public static function setState(int cell, int state) -> void
    {
        %{
            ns_cell_set_state((uintptr_t) cell, (int) state);
        }%
    }

    public static function getState(int cell) -> int
    {
        int value;
        %{
            value = (zend_long) ns_cell_get_state((uintptr_t) cell);
        }%
        return value;
    }

    public static function setEnabled(int cell, bool enabled) -> void
    {
        %{
            ns_cell_set_enabled((uintptr_t) cell, enabled ? 1 : 0);
        }%
    }

    public static function isEnabled(int cell) -> bool
    {
        bool result;
        %{
            result = ns_cell_is_enabled((uintptr_t) cell) == 1;
        }%
        return result;
    }

    public static function setTag(int cell, int tag) -> void
    {
        %{
            ns_cell_set_tag((uintptr_t) cell, (int) tag);
        }%
    }

    public static function getTag(int cell) -> int
    {
        int value;
        %{
            value = (zend_long) ns_cell_get_tag((uintptr_t) cell);
        }%
        return value;
    }

    public static function setStringValue(int cell, string value) -> void
    {
        %{
            ns_cell_set_string((uintptr_t) cell, Z_STRVAL(value));
        }%
    }

    public static function getStringValue(int cell) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\0';
            if (ns_cell_get_string((uintptr_t) cell, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }
}
