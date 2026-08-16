namespace AppKit\NS\NSPopoverTouchBarItem;

%{
#include "ns-popovertouchbaritem.h"
#include <stdint.h>
}%

/** NSPopoverTouchBarItem */
class NSPopoverTouchBarItem
{

    public static function create(string identifier) -> int { int h; %{ h = (zend_long) ns_popovertouchbaritem_create(Z_STRVAL(identifier)); }% return h; }
    public static function wrap(int ptr) -> int
    {
        int handle;
        %{ handle = (zend_long) ns_popovertouchbaritem_wrap((void *)(uintptr_t) ptr); }%
        return handle;
    }
    public static function destroy(int item) -> void
    {
        %{ ns_popovertouchbaritem_destroy((uintptr_t) item); }%
    }
    public static function nsPopoverTouchBarItem(int item) -> int
    {
        int ptr;
        %{ ptr = (zend_long)(uintptr_t) ns_popovertouchbaritem_nspopovertouchbaritem((uintptr_t) item); }%
        return ptr;
    }

    public static function setPopoverTouchBar(int item, int bar) -> void { %{ ns_popovertouchbaritem_set_popover_touchbar((uintptr_t) item, (uintptr_t) bar); }% }
    public static function showPopover(int item) -> void { %{ ns_popovertouchbaritem_show_popover((uintptr_t) item); }% }
    public static function dismissPopover(int item) -> void { %{ ns_popovertouchbaritem_dismiss_popover((uintptr_t) item); }% }
}
