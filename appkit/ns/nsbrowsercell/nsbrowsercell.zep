namespace AppKit\NS\NSBrowserCell;

%{
#include "ns-browsercell.h"
#include <stdint.h>
}%


/**
 * NSBrowserCell used by NSBrowser.
 */
class NSBrowserCell
{
    public static function createText(string value = "") -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_browsercell_create_text(Z_STRVAL(value));
        }%
        return handle;
    }
    public static function wrap(int nsBrowserCellPtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_browsercell_wrap((void *)(uintptr_t) nsBrowserCellPtr);
        }%
        return handle;
    }
    public static function destroy(int cell) -> void
    {
        %{
            ns_browsercell_destroy((uintptr_t) cell);
        }%
    }
    public static function nsBrowserCell(int cell) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_browsercell_nsbrowsercell((uintptr_t) cell);
        }%
        return ptr;
    }
    public static function setTitle(int cell, string title) -> void
    {
        %{
            ns_browsercell_set_title((uintptr_t) cell, Z_STRVAL(title));
        }%
    }
    public static function getTitle(int cell) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\0';
            if (ns_browsercell_get_title((uintptr_t) cell, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }
    public static function setState(int cell, int state) -> void
    {
        %{
            ns_browsercell_set_state((uintptr_t) cell, (int) state);
        }%
    }
    public static function getState(int cell) -> int
    {
        int value;
        %{
            value = (zend_long) ns_browsercell_get_state((uintptr_t) cell);
        }%
        return value;
    }
    public static function setEnabled(int cell, bool enabled) -> void
    {
        %{
            ns_browsercell_set_enabled((uintptr_t) cell, enabled ? 1 : 0);
        }%
    }
    public static function isEnabled(int cell) -> bool
    {
        bool result;
        %{
            result = ns_browsercell_is_enabled((uintptr_t) cell) == 1;
        }%
        return result;
    }
    public static function setTag(int cell, int tag) -> void
    {
        %{
            ns_browsercell_set_tag((uintptr_t) cell, (int) tag);
        }%
    }
    public static function getTag(int cell) -> int
    {
        int value;
        %{
            value = (zend_long) ns_browsercell_get_tag((uintptr_t) cell);
        }%
        return value;
    }
    public static function setLeaf(int cell, bool flag) -> void
    {
        %{
            ns_browsercell_set_leaf((uintptr_t) cell, flag ? 1 : 0);
        }%
    }
    public static function isLeaf(int cell) -> bool
    {
        bool result;
        %{
            result = ns_browsercell_is_leaf((uintptr_t) cell) == 1;
        }%
        return result;
    }
    public static function setLoaded(int cell, bool flag) -> void
    {
        %{
            ns_browsercell_set_loaded((uintptr_t) cell, flag ? 1 : 0);
        }%
    }
    public static function isLoaded(int cell) -> bool
    {
        bool result;
        %{
            result = ns_browsercell_is_loaded((uintptr_t) cell) == 1;
        }%
        return result;
    }
}
