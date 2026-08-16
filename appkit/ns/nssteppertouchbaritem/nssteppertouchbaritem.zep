namespace AppKit\NS\NSStepperTouchBarItem;

%{
#include "ns-steppertouchbaritem.h"
#include <stdint.h>
}%

/** NSStepperTouchBarItem */
class NSStepperTouchBarItem
{

    public static function stepperWithFormatter(string identifier) -> int { int h; %{ h = (zend_long) ns_steppertouchbaritem_stepper_with_formatter(Z_STRVAL(identifier)); }% return h; }
    public static function wrap(int ptr) -> int
    {
        int handle;
        %{ handle = (zend_long) ns_steppertouchbaritem_wrap((void *)(uintptr_t) ptr); }%
        return handle;
    }
    public static function destroy(int item) -> void
    {
        %{ ns_steppertouchbaritem_destroy((uintptr_t) item); }%
    }
    public static function nsStepperTouchBarItem(int item) -> int
    {
        int ptr;
        %{ ptr = (zend_long)(uintptr_t) ns_steppertouchbaritem_nssteppertouchbaritem((uintptr_t) item); }%
        return ptr;
    }

    public static function setValue(int item, double value) -> void { %{ ns_steppertouchbaritem_set_value((uintptr_t) item, value); }% }
    public static function getValue(int item) -> double { double v; %{ v = ns_steppertouchbaritem_get_value((uintptr_t) item); }% return v; }
    public static function pollAction(int item) -> bool { bool r; %{ r = ns_steppertouchbaritem_poll_action((uintptr_t) item) == 1; }% return r; }
}
