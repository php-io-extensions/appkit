namespace AppKit\NS\NSStatusBar;

%{
#include "ns-statusbar.h"
#include <stdint.h>
}%


/**
 * NSStatusBar system menu-bar status bar.
 */
class NSStatusBar
{
    public static function system() -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_statusbar_system();
        }%
        return handle;
    }
    public static function wrap(int nsStatusBarPtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_statusbar_wrap((void *)(uintptr_t) nsStatusBarPtr);
        }%
        return handle;
    }
    public static function destroy(int bar) -> void
    {
        %{
            ns_statusbar_destroy((uintptr_t) bar);
        }%
    }
    public static function nsStatusBar(int bar) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_statusbar_nsstatusbar((uintptr_t) bar);
        }%
        return ptr;
    }
    public static function statusItemWithLength(int bar, double length) -> int
    {
        int value;
        %{
            value = (zend_long) ns_statusbar_status_item_with_length((uintptr_t) bar, length);
        }%
        return value;
    }
    public static function statusItemWithKind(int bar, int kind) -> int
    {
        int value;
        %{
            value = (zend_long) ns_statusbar_status_item_with_kind((uintptr_t) bar, (int) kind);
        }%
        return value;
    }
    public static function removeStatusItem(int bar, int item) -> void
    {
        %{
            ns_statusbar_remove_status_item((uintptr_t) bar, (uintptr_t) item);
        }%
    }
    public static function isVertical(int bar) -> bool
    {
        bool result;
        %{
            result = ns_statusbar_is_vertical((uintptr_t) bar) == 1;
        }%
        return result;
    }
    public static function thickness(int bar) -> double
    {
        double value;
        %{
            value = ns_statusbar_thickness((uintptr_t) bar);
        }%
        return value;
    }
}
