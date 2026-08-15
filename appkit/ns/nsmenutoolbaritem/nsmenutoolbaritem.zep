namespace AppKit\NS\NSMenuToolbarItem;

%{
#include "ns-menutoolbaritem.h"
#include <stdint.h>
}%

/** NSMenuToolbarItem — toolbar item with attached NSMenu (macOS 10.15+). */
class NSMenuToolbarItem
{
    public static function create(string identifier) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_menutoolbaritem_create(Z_STRVAL(identifier));
        }%
        return handle;
    }

    public static function wrap(int nsMenuToolbarItemPtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_menutoolbaritem_wrap((void *)(uintptr_t) nsMenuToolbarItemPtr);
        }%
        return handle;
    }

    public static function destroy(int item) -> void
    {
        %{
            ns_menutoolbaritem_destroy((uintptr_t) item);
        }%
    }

    public static function nsMenuToolbarItem(int item) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_menutoolbaritem_nsmenutoolbaritem((uintptr_t) item);
        }%
        return ptr;
    }

    public static function setShowsIndicator(int item, bool flag) -> void
    {
        %{
            ns_menutoolbaritem_set_shows_indicator((uintptr_t) item, flag ? 1 : 0);
        }%
    }

    public static function showsIndicator(int item) -> bool
    {
        bool result;
        %{
            result = ns_menutoolbaritem_shows_indicator((uintptr_t) item) == 1;
        }%
        return result;
    }

    public static function setLabel(int item, string label) -> void
    {
        %{
            ns_menutoolbaritem_set_label((uintptr_t) item, Z_STRVAL(label));
        }%
    }

    public static function getLabel(int item) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\0';
            if (ns_menutoolbaritem_get_label((uintptr_t) item, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }

    public static function setToolTip(int item, string tip) -> void
    {
        %{
            ns_menutoolbaritem_set_tool_tip((uintptr_t) item, Z_STRVAL(tip));
        }%
    }

    public static function getToolTip(int item) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\0';
            if (ns_menutoolbaritem_get_tool_tip((uintptr_t) item, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }
}
