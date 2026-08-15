namespace AppKit\NS\NSTrackingArea;

%{
#include "ns-trackingarea.h"
#include <stdint.h>
}%

/**
 * NSTrackingArea — mouse entered/exited and cursor update regions on NSView.
 * NSTrackingAreaOptions bitfield values are documented in OKF (no PHP constants).
 */
class NSTrackingArea
{
    /**
     * @param int options NSTrackingAreaOptions bitfield
     * @return int Opaque tracking area handle, or 0 on failure
     */
    public static function create(int x, int y, int width, int height, int options) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_trackingarea_create(
                (double) x,
                (double) y,
                (double) width,
                (double) height,
                (unsigned) options
            );
        }%
        return handle;
    }

    public static function destroy(int area) -> void
    {
        %{
            ns_trackingarea_destroy((uintptr_t) area);
        }%
    }

    public static function addToView(int area, int view) -> bool
    {
        bool result;
        %{
            result = ns_trackingarea_add_to_view((uintptr_t) area, (uintptr_t) view) == 1;
        }%
        return result;
    }

    public static function removeFromView(int area, int view) -> void
    {
        %{
            ns_trackingarea_remove_from_view((uintptr_t) area, (uintptr_t) view);
        }%
    }

    /**
     * @return array [x, y, width, height] or empty array
     */
    public static function rect(int area) -> array
    {
        array out = [];
        %{
            double x = 0.0, y = 0.0, w = 0.0, h = 0.0;
            if (ns_trackingarea_rect((uintptr_t) area, &x, &y, &w, &h)) {
                add_next_index_double(&out, x);
                add_next_index_double(&out, y);
                add_next_index_double(&out, w);
                add_next_index_double(&out, h);
            }
        }%
        return out;
    }

    public static function options(int area) -> int
    {
        int value;
        %{
            value = (zend_long) ns_trackingarea_options((uintptr_t) area);
        }%
        return value;
    }

    /**
     * @return int Borrowed NSTrackingArea pointer, or 0
     */
    public static function nsTrackingArea(int area) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_trackingarea_nstrackingarea((uintptr_t) area);
        }%
        return ptr;
    }
}
