namespace AppKit\NS\NSSliderTouchBarItem;

%{
#include "ns-slidertouchbaritem.h"
#include <stdint.h>
}%

/** NSSliderTouchBarItem */
class NSSliderTouchBarItem
{

    public static function create(string identifier) -> int { int h; %{ h = (zend_long) ns_slidertouchbaritem_create(Z_STRVAL(identifier)); }% return h; }
    public static function wrap(int ptr) -> int
    {
        int handle;
        %{ handle = (zend_long) ns_slidertouchbaritem_wrap((void *)(uintptr_t) ptr); }%
        return handle;
    }
    public static function destroy(int item) -> void
    {
        %{ ns_slidertouchbaritem_destroy((uintptr_t) item); }%
    }
    public static function nsSliderTouchBarItem(int item) -> int
    {
        int ptr;
        %{ ptr = (zend_long)(uintptr_t) ns_slidertouchbaritem_nsslidertouchbaritem((uintptr_t) item); }%
        return ptr;
    }

    public static function setDoubleValue(int item, double value) -> void { %{ ns_slidertouchbaritem_set_double_value((uintptr_t) item, value); }% }
    public static function getDoubleValue(int item) -> double { double v; %{ v = ns_slidertouchbaritem_get_double_value((uintptr_t) item); }% return v; }
    public static function pollAction(int item) -> bool { bool r; %{ r = ns_slidertouchbaritem_poll_action((uintptr_t) item) == 1; }% return r; }
}
