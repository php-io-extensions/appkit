namespace AppKit\NS\NSEvent;

%{
#include "ns-event.h"
#include <stdint.h>
}%

/**
 * NSEvent / CoreGraphics keyboard + mouse queries.
 * Call NSApplication::poll() each frame so scroll deltas reset and events drain.
 */
class NSEvent
{
    /**
     * @return bool true if macOS virtual key code is currently down
     */
    public static function keyDown(int keycode) -> bool
    {
        bool result;
        %{
            result = ns_event_key_down((int) keycode) == 1;
        }%
        return result;
    }

    /**
     * Mouse button: 0=left, 1=right, 2=middle.
     */
    public static function mouseButtonDown(int button) -> bool
    {
        bool result;
        %{
            result = ns_event_mouse_button_down((int) button) == 1;
        }%
        return result;
    }

    /**
     * Mouse position as [x, y].
     * window=0 → screen coords; otherwise content-view local for that window handle.
     * Y grows upward (AppKit). Empty array on failure.
     */
    public static function mousePosition(int window = 0) -> array
    {
        array out = [];
        %{
            double x = 0.0, y = 0.0;
            if (ns_event_mouse_position((uintptr_t) window, &x, &y)) {
                add_next_index_double(&out, x);
                add_next_index_double(&out, y);
            }
        }%
        return out;
    }

    /**
     * Scroll deltas since the last NSApplication::poll() begin as [dx, dy].
     */
    public static function mouseScrollDelta() -> array
    {
        array out = [];
        %{
            double dx = 0.0, dy = 0.0;
            ns_event_mouse_scroll_delta(&dx, &dy);
            add_next_index_double(&out, dx);
            add_next_index_double(&out, dy);
        }%
        return out;
    }

    /**
     * Content-view / screen mouse X. window=0 → screen coords.
     */
    public static function mouseX(int window = 0) -> double
    {
        double x = 0.0;
        %{
            double y = 0.0;
            ns_event_mouse_position((uintptr_t) window, &x, &y);
        }%
        return x;
    }

    /**
     * Content-view / screen mouse Y (AppKit, up is positive).
     */
    public static function mouseY(int window = 0) -> double
    {
        double y = 0.0;
        %{
            double x = 0.0;
            ns_event_mouse_position((uintptr_t) window, &x, &y);
        }%
        return y;
    }

    /**
     * Scroll Y since the last NSApplication::poll() begin.
     */
    public static function mouseScrollY() -> double
    {
        double dy = 0.0;
        %{
            double dx = 0.0;
            ns_event_mouse_scroll_delta(&dx, &dy);
        }%
        return dy;
    }
}
