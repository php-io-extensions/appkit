namespace AppKit\NS\NSProgressIndicator;

%{
#include "ns-progressindicator.h"
#include <stdint.h>
}%

/**
 * NSProgressIndicator bar control.
 */
class NSProgressIndicator
{
    public static function create(int x, int y, int width, int height) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_progressindicator_create((double) x, (double) y, (double) width, (double) height);
        }%
        return handle;
    }

    public static function destroy(int bar) -> void
    {
        %{
            ns_progressindicator_destroy((uintptr_t) bar);
        }%
    }

    public static function setIndeterminate(int bar, bool on) -> void
    {
        %{
            ns_progressindicator_set_indeterminate((uintptr_t) bar, on ? 1 : 0);
        }%
    }

    public static function setMin(int bar, double min) -> void
    {
        %{
            ns_progressindicator_set_min((uintptr_t) bar, (double) min);
        }%
    }

    public static function setMax(int bar, double max) -> void
    {
        %{
            ns_progressindicator_set_max((uintptr_t) bar, (double) max);
        }%
    }

    public static function setValue(int bar, double value) -> void
    {
        %{
            ns_progressindicator_set_value((uintptr_t) bar, (double) value);
        }%
    }

    public static function getValue(int bar) -> double
    {
        double value;
        %{
            value = ns_progressindicator_get_value((uintptr_t) bar);
        }%
        return value;
    }

    public static function start(int bar) -> void
    {
        %{
            ns_progressindicator_start((uintptr_t) bar);
        }%
    }

    public static function stop(int bar) -> void
    {
        %{
            ns_progressindicator_stop((uintptr_t) bar);
        }%
    }
}
