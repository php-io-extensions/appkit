namespace AppKit\NS\NSWindowTabGroup;

%{
#include "ns-windowtabgroup.h"
#include <stdint.h>
}%

class NSWindowTabGroup
{
    public static function wrap(int nsWindowTabGroupPtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_windowtabgroup_wrap((void *)(uintptr_t) nsWindowTabGroupPtr);
        }%
        return handle;
    }

    public static function destroy(int group) -> void
    {
        %{
            ns_windowtabgroup_destroy((uintptr_t) group);
        }%
    }

    public static function nsWindowTabGroup(int group) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_windowtabgroup_nswindowtabgroup((uintptr_t) group);
        }%
        return ptr;
    }

    public static function identifier(int group) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\0';
            if (ns_windowtabgroup_identifier((uintptr_t) group, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }

    public static function windowsCount(int group) -> int
    {
        int count;
        %{
            count = ns_windowtabgroup_windows_count((uintptr_t) group);
        }%
        return count;
    }

    public static function windowAt(int group, int index) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_windowtabgroup_window_at((uintptr_t) group, (int) index);
        }%
        return ptr;
    }

    public static function isOverviewVisible(int group) -> bool
    {
        bool result;
        %{
            result = ns_windowtabgroup_is_overview_visible((uintptr_t) group) == 1;
        }%
        return result;
    }

    public static function setOverviewVisible(int group, bool visible) -> void
    {
        %{
            ns_windowtabgroup_set_overview_visible((uintptr_t) group, visible ? 1 : 0);
        }%
    }

    public static function isTabBarVisible(int group) -> bool
    {
        bool result;
        %{
            result = ns_windowtabgroup_is_tab_bar_visible((uintptr_t) group) == 1;
        }%
        return result;
    }

    public static function selectedWindow(int group) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_windowtabgroup_selected_window((uintptr_t) group);
        }%
        return ptr;
    }

    public static function setSelectedWindow(int group, int window) -> void
    {
        %{
            ns_windowtabgroup_set_selected_window((uintptr_t) group, (uintptr_t) window);
        }%
    }

    public static function addWindow(int group, int window) -> void
    {
        %{
            ns_windowtabgroup_add_window((uintptr_t) group, (uintptr_t) window);
        }%
    }

    public static function insertWindow(int group, int window, int index) -> void
    {
        %{
            ns_windowtabgroup_insert_window((uintptr_t) group, (uintptr_t) window, (int) index);
        }%
    }

    public static function removeWindow(int group, int window) -> void
    {
        %{
            ns_windowtabgroup_remove_window((uintptr_t) group, (uintptr_t) window);
        }%
    }
}
