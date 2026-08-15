namespace AppKit\NS\NSTextViewportLayoutController;

%{
#include "ns-textviewportlayoutcontroller.h"
#include <stdint.h>
}%


/**
 * NSTextViewportLayoutController — viewport layout from a layout manager.
 */
class NSTextViewportLayoutController

{
    public static function wrap(int nsTextViewportLayoutControllerPtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_textviewportlayoutcontroller_wrap((void *)(uintptr_t) nsTextViewportLayoutControllerPtr);
        }%
        return handle;
    }

    public static function destroy(int controller) -> void
    {
        %{
            ns_textviewportlayoutcontroller_destroy((uintptr_t) controller);
        }%
    }

    /**
     * @return array [x, y, w, h]
     */
    public static function viewportBounds(int controller) -> array
    {
        array out = [];
        %{
            double x = 0.0, y = 0.0, w = 0.0, h = 0.0;
            ns_textviewportlayoutcontroller_viewport_bounds((uintptr_t) controller, &x, &y, &w, &h);
            add_next_index_double(&out, x);
            add_next_index_double(&out, y);
            add_next_index_double(&out, w);
            add_next_index_double(&out, h);
        }%
        return out;
    }

    public static function layoutViewport(int controller) -> void
    {
        %{
            ns_textviewportlayoutcontroller_layout_viewport((uintptr_t) controller);
        }%
    }

    public static function adjustViewportByVerticalOffset(int controller, float offset) -> void
    {
        %{
            ns_textviewportlayoutcontroller_adjust_viewport_by_vertical_offset((uintptr_t) controller, (double) offset);
        }%
    }
}
