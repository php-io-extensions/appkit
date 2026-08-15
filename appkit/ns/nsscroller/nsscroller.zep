namespace AppKit\NS\NSScroller;

%{
#include "ns-scroller.h"
#include <stdint.h>
}%

/** NSScroller — scroll bar control (NSControl subclass). */
class NSScroller
{
    public static function create(int x, int y, int width, int height) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_scroller_create((double) x, (double) y, (double) width, (double) height);
        }%
        return handle;
    }

    public static function wrap(int nsScrollerPtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_scroller_wrap((void *)(uintptr_t) nsScrollerPtr);
        }%
        return handle;
    }

    public static function destroy(int scroller) -> void
    {
        %{
            ns_scroller_destroy((uintptr_t) scroller);
        }%
    }

    public static function nsScroller(int scroller) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_scroller_nsscroller((uintptr_t) scroller);
        }%
        return ptr;
    }

    public static function setScrollerStyle(int scroller, int style) -> void
    {
        %{
            ns_scroller_set_scroller_style((uintptr_t) scroller, (int) style);
        }%
    }

    public static function getScrollerStyle(int scroller) -> int
    {
        int value;
        %{
            value = (zend_long) ns_scroller_get_scroller_style((uintptr_t) scroller);
        }%
        return value;
    }

    public static function setKnobStyle(int scroller, int style) -> void
    {
        %{
            ns_scroller_set_knob_style((uintptr_t) scroller, (int) style);
        }%
    }

    public static function getKnobStyle(int scroller) -> int
    {
        int value;
        %{
            value = (zend_long) ns_scroller_get_knob_style((uintptr_t) scroller);
        }%
        return value;
    }

    public static function setControlSize(int scroller, int size) -> void
    {
        %{
            ns_scroller_set_control_size((uintptr_t) scroller, (int) size);
        }%
    }

    public static function getControlSize(int scroller) -> int
    {
        int value;
        %{
            value = (zend_long) ns_scroller_get_control_size((uintptr_t) scroller);
        }%
        return value;
    }

    public static function setKnobProportion(int scroller, double proportion) -> void
    {
        %{
            ns_scroller_set_knob_proportion((uintptr_t) scroller, proportion);
        }%
    }

    public static function getKnobProportion(int scroller) -> double
    {
        double value;
        %{
            value = ns_scroller_get_knob_proportion((uintptr_t) scroller);
        }%
        return value;
    }

    public static function hitPart(int scroller) -> int
    {
        int value;
        %{
            value = (zend_long) ns_scroller_get_hit_part((uintptr_t) scroller);
        }%
        return value;
    }

    public static function preferredScrollerStyle() -> int
    {
        int value;
        %{
            value = (zend_long) ns_scroller_get_preferred_scroller_style();
        }%
        return value;
    }

    public static function scrollerWidth(int controlSize, int scrollerStyle) -> double
    {
        double value;
        %{
            value = ns_scroller_scroller_width((int) controlSize, (int) scrollerStyle);
        }%
        return value;
    }
}
