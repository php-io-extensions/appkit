namespace AppKit\NS\NSSlider;

%{
#include "ns-slider.h"
#include <stdint.h>
}%

/**
 * NSSlider value control.
 */
class NSSlider
{
    public static function create(int x, int y, int width, int height, double min = 0.0, double max = 100.0) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_slider_create(
                (double) x,
                (double) y,
                (double) width,
                (double) height,
                (double) min,
                (double) max
            );
        }%
        return handle;
    }

    public static function destroy(int slider) -> void
    {
        %{
            ns_slider_destroy((uintptr_t) slider);
        }%
    }

    public static function setValue(int slider, double value) -> void
    {
        %{
            ns_slider_set_value((uintptr_t) slider, (double) value);
        }%
    }

    public static function getValue(int slider) -> double
    {
        double value;
        %{
            value = ns_slider_get_value((uintptr_t) slider);
        }%
        return value;
    }

    public static function pollChange(int slider) -> bool
    {
        bool result;
        %{
            result = ns_slider_poll_change((uintptr_t) slider) == 1;
        }%
        return result;
    }
}
