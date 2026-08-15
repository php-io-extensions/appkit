namespace AppKit\NS\NSStepper;

%{
#include "ns-stepper.h"
#include <stdint.h>
}%

/**
 * NSStepper value control.
 */
class NSStepper
{
    public static function create(int x, int y, int width, int height, double min = 0.0, double max = 100.0) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_stepper_create(
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

    public static function destroy(int stepper) -> void
    {
        %{
            ns_stepper_destroy((uintptr_t) stepper);
        }%
    }

    public static function setValue(int stepper, double value) -> void
    {
        %{
            ns_stepper_set_value((uintptr_t) stepper, (double) value);
        }%
    }

    public static function getValue(int stepper) -> double
    {
        double value;
        %{
            value = ns_stepper_get_value((uintptr_t) stepper);
        }%
        return value;
    }

    public static function pollChange(int stepper) -> bool
    {
        bool result;
        %{
            result = ns_stepper_poll_change((uintptr_t) stepper) == 1;
        }%
        return result;
    }
}
