namespace AppKit\NS\NSSegmentedControl;

%{
#include "ns-segmentedcontrol.h"
#include <stdint.h>
}%

/**
 * NSSegmentedControl multi-segment picker.
 */
class NSSegmentedControl
{
    public static function create(int x, int y, int width, int height, int count) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_segmentedcontrol_create(
                (double) x,
                (double) y,
                (double) width,
                (double) height,
                (int) count
            );
        }%
        return handle;
    }

    public static function destroy(int control) -> void
    {
        %{
            ns_segmentedcontrol_destroy((uintptr_t) control);
        }%
    }

    public static function setLabel(int control, int index, string title) -> void
    {
        %{
            ns_segmentedcontrol_set_label((uintptr_t) control, (int) index, Z_STRVAL(title));
        }%
    }

    public static function setSelected(int control, int index) -> void
    {
        %{
            ns_segmentedcontrol_set_selected((uintptr_t) control, (int) index);
        }%
    }

    public static function getSelected(int control) -> int
    {
        int value;
        %{
            value = (zend_long) ns_segmentedcontrol_get_selected((uintptr_t) control);
        }%
        return value;
    }

    public static function pollChange(int control) -> bool
    {
        bool result;
        %{
            result = ns_segmentedcontrol_poll_change((uintptr_t) control) == 1;
        }%
        return result;
    }
}
