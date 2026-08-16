namespace AppKit\NS\NSWindowTab;

%{
#include "ns-windowtab.h"
#include <stdint.h>
}%

class NSWindowTab
{
    public static function wrap(int nsWindowTabPtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_windowtab_wrap((void *)(uintptr_t) nsWindowTabPtr);
        }%
        return handle;
    }

    public static function destroy(int tab) -> void
    {
        %{
            ns_windowtab_destroy((uintptr_t) tab);
        }%
    }

    public static function nsWindowTab(int tab) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_windowtab_nswindowtab((uintptr_t) tab);
        }%
        return ptr;
    }

    public static function title(int tab) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\0';
            if (ns_windowtab_title((uintptr_t) tab, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }

    public static function setTitle(int tab, string title) -> void
    {
        %{
            ns_windowtab_set_title((uintptr_t) tab, Z_STRVAL(title));
        }%
    }

    public static function toolTip(int tab) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\0';
            if (ns_windowtab_tool_tip((uintptr_t) tab, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }

    public static function setToolTip(int tab, string toolTip) -> void
    {
        %{
            ns_windowtab_set_tool_tip((uintptr_t) tab, Z_STRVAL(toolTip));
        }%
    }

    public static function setAccessoryView(int tab, int view) -> void
    {
        %{
            ns_windowtab_set_accessory_view((uintptr_t) tab, (uintptr_t) view);
        }%
    }

    public static function accessoryView(int tab) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_windowtab_accessory_view((uintptr_t) tab);
        }%
        return handle;
    }
}
