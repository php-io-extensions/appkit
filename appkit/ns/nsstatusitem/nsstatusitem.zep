namespace AppKit\NS\NSStatusItem;

%{
#include "ns-statusitem.h"
#include <stdint.h>
}%

/**
 * NSStatusItem menu-bar status button.
 */
class NSStatusItem
{
    public static function create(string title) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_statusitem_create(Z_STRVAL(title));
        }%
        return handle;
    }

    public static function wrap(int nsStatusItemPtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_statusitem_wrap_native((void *)(uintptr_t) nsStatusItemPtr);
        }%
        return handle;
    }

    public static function nsStatusItem(int item) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_statusitem_nsstatusitem((uintptr_t) item);
        }%
        return ptr;
    }

    public static function destroy(int item) -> void
    {
        %{
            ns_statusitem_destroy((uintptr_t) item);
        }%
    }

    public static function setTitle(int item, string title) -> void
    {
        %{
            ns_statusitem_set_title((uintptr_t) item, Z_STRVAL(title));
        }%
    }

    public static function pollClick(int item) -> bool
    {
        bool result;
        %{
            result = ns_statusitem_poll_click((uintptr_t) item) == 1;
        }%
        return result;
    }

    public static function button(int item) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_statusitem_button((uintptr_t) item);
        }%
        return handle;
    }
}
