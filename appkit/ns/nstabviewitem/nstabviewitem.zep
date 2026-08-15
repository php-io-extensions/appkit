namespace AppKit\NS\NSTabViewItem;

%{
#include "ns-tabviewitem.h"
#include <stdint.h>
}%

/** NSTabViewItem — single tab in an NSTabView or NSTabViewController. */
class NSTabViewItem
{
    public static function create(string identifier = "tab") -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_tabviewitem_create(Z_STRVAL(identifier));
        }%
        return handle;
    }

    public static function createWithViewController(int viewController) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_tabviewitem_create_with_view_controller((uintptr_t) viewController);
        }%
        return handle;
    }

    public static function wrap(int nsTabViewItemPtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_tabviewitem_wrap((void *)(uintptr_t) nsTabViewItemPtr);
        }%
        return handle;
    }

    public static function destroy(int item) -> void
    {
        %{
            ns_tabviewitem_destroy((uintptr_t) item);
        }%
    }

    public static function nsTabViewItem(int item) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_tabviewitem_nstabviewitem((uintptr_t) item);
        }%
        return ptr;
    }

    public static function setLabel(int item, string label) -> void
    {
        %{
            ns_tabviewitem_set_label((uintptr_t) item, Z_STRVAL(label));
        }%
    }

    public static function getLabel(int item) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\0';
            if (ns_tabviewitem_get_label((uintptr_t) item, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }

    public static function setToolTip(int item, string tip) -> void
    {
        %{
            ns_tabviewitem_set_tool_tip((uintptr_t) item, Z_STRVAL(tip));
        }%
    }

    public static function getToolTip(int item) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\0';
            if (ns_tabviewitem_get_tool_tip((uintptr_t) item, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }

    public static function setView(int item, int view) -> void
    {
        %{
            ns_tabviewitem_set_view((uintptr_t) item, (uintptr_t) view);
        }%
    }

    public static function view(int item) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_tabviewitem_view((uintptr_t) item);
        }%
        return handle;
    }

    public static function setViewController(int item, int viewController) -> void
    {
        %{
            ns_tabviewitem_set_view_controller((uintptr_t) item, (uintptr_t) viewController);
        }%
    }

    public static function viewController(int item) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_tabviewitem_view_controller((uintptr_t) item);
        }%
        return handle;
    }

    public static function tabState(int item) -> int
    {
        int value;
        %{
            value = (zend_long) ns_tabviewitem_get_tab_state((uintptr_t) item);
        }%
        return value;
    }
}
