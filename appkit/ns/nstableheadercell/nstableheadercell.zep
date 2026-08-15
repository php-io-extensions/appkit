namespace AppKit\NS\NSTableHeaderCell;

%{
#include "ns-tableheadercell.h"
#include <stdint.h>
}%


/**
 * NSTableHeaderCell used by NSTableHeaderView.
 */
class NSTableHeaderCell
{
    public static function createText(string value = "") -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_tableheadercell_create_text(Z_STRVAL(value));
        }%
        return handle;
    }
    public static function wrap(int nsTableHeaderCellPtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_tableheadercell_wrap((void *)(uintptr_t) nsTableHeaderCellPtr);
        }%
        return handle;
    }
    public static function destroy(int cell) -> void
    {
        %{
            ns_tableheadercell_destroy((uintptr_t) cell);
        }%
    }
    public static function nsTableHeaderCell(int cell) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_tableheadercell_nstableheadercell((uintptr_t) cell);
        }%
        return ptr;
    }
    public static function setTitle(int cell, string title) -> void
    {
        %{
            ns_tableheadercell_set_title((uintptr_t) cell, Z_STRVAL(title));
        }%
    }
    public static function getTitle(int cell) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\0';
            if (ns_tableheadercell_get_title((uintptr_t) cell, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }
    public static function setState(int cell, int state) -> void
    {
        %{
            ns_tableheadercell_set_state((uintptr_t) cell, (int) state);
        }%
    }
    public static function getState(int cell) -> int
    {
        int value;
        %{
            value = (zend_long) ns_tableheadercell_get_state((uintptr_t) cell);
        }%
        return value;
    }
    public static function setEnabled(int cell, bool enabled) -> void
    {
        %{
            ns_tableheadercell_set_enabled((uintptr_t) cell, enabled ? 1 : 0);
        }%
    }
    public static function isEnabled(int cell) -> bool
    {
        bool result;
        %{
            result = ns_tableheadercell_is_enabled((uintptr_t) cell) == 1;
        }%
        return result;
    }
    public static function setTag(int cell, int tag) -> void
    {
        %{
            ns_tableheadercell_set_tag((uintptr_t) cell, (int) tag);
        }%
    }
    public static function getTag(int cell) -> int
    {
        int value;
        %{
            value = (zend_long) ns_tableheadercell_get_tag((uintptr_t) cell);
        }%
        return value;
    }
}
