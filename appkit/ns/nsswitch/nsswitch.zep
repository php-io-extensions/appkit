namespace AppKit\NS\NSSwitch;

%{
#include "ns-switch.h"
#include <stdint.h>
}%

/**
 * NSSwitch toggle control.
 */
class NSSwitch
{
    public static function create(int x, int y, int width, int height) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_switch_create((double) x, (double) y, (double) width, (double) height);
        }%
        return handle;
    }

    public static function destroy(int toggle) -> void
    {
        %{
            ns_switch_destroy((uintptr_t) toggle);
        }%
    }

    public static function setOn(int toggle, bool on) -> void
    {
        %{
            ns_switch_set_on((uintptr_t) toggle, on ? 1 : 0);
        }%
    }

    public static function isOn(int toggle) -> bool
    {
        bool result;
        %{
            result = ns_switch_is_on((uintptr_t) toggle) == 1;
        }%
        return result;
    }

    public static function pollChange(int toggle) -> bool
    {
        bool result;
        %{
            result = ns_switch_poll_change((uintptr_t) toggle) == 1;
        }%
        return result;
    }
}
