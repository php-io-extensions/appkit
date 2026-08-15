namespace AppKit\NS\NSTouch;

%{
#include "ns-touch.h"
#include <stdint.h>
}%

/**
 * NSTouch — wrap touches from NSEvent (short-lived; use during event handling).
 */
class NSTouch
{
    /**
     * @return int Opaque touch handle, or 0
     */
    public static function wrap(int nsTouchPtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_touch_wrap((void *)(uintptr_t) nsTouchPtr);
        }%
        return handle;
    }

    public static function destroy(int touch) -> void
    {
        %{
            ns_touch_destroy((uintptr_t) touch);
        }%
    }

    /**
     * NSTouchPhase bitfield.
     */
    public static function phase(int touch) -> int
    {
        int value;
        %{
            value = (zend_long) ns_touch_phase((uintptr_t) touch);
        }%
        return value;
    }

    /**
     * NSTouchType: 0 direct, 1 indirect.
     */
    public static function type(int touch) -> int
    {
        int value;
        %{
            value = (zend_long) ns_touch_type((uintptr_t) touch);
        }%
        return value;
    }

    public static function isResting(int touch) -> bool
    {
        bool result;
        %{
            result = ns_touch_is_resting((uintptr_t) touch) == 1;
        }%
        return result;
    }

    /**
     * Normalized position [x, y] in [0,1], or empty array.
     */
    public static function normalizedPosition(int touch) -> array
    {
        array out = [];
        %{
            double x = 0.0, y = 0.0;
            if (ns_touch_normalized_position((uintptr_t) touch, &x, &y)) {
                add_next_index_double(&out, x);
                add_next_index_double(&out, y);
            }
        }%
        return out;
    }

    /**
     * Device size [width, height] in points, or empty array.
     */
    public static function deviceSize(int touch) -> array
    {
        array out = [];
        %{
            double w = 0.0, h = 0.0;
            if (ns_touch_device_size((uintptr_t) touch, &w, &h)) {
                add_next_index_double(&out, w);
                add_next_index_double(&out, h);
            }
        }%
        return out;
    }

    /**
     * Location in view coords [x, y]. view=0 uses touch root container.
     */
    public static function locationInView(int touch, int view = 0) -> array
    {
        array out = [];
        %{
            double x = 0.0, y = 0.0;
            if (ns_touch_location_in_view((uintptr_t) touch, (uintptr_t) view, &x, &y)) {
                add_next_index_double(&out, x);
                add_next_index_double(&out, y);
            }
        }%
        return out;
    }

    public static function previousLocationInView(int touch, int view = 0) -> array
    {
        array out = [];
        %{
            double x = 0.0, y = 0.0;
            if (ns_touch_previous_location_in_view((uintptr_t) touch, (uintptr_t) view, &x, &y)) {
                add_next_index_double(&out, x);
                add_next_index_double(&out, y);
            }
        }%
        return out;
    }

    /**
     * @return int Borrowed NSTouch pointer, or 0
     */
    public static function nsTouch(int touch) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_touch_nstouch((uintptr_t) touch);
        }%
        return ptr;
    }
}
