namespace AppKit\NS\NSDatePicker;

%{
#include "ns-datepicker.h"
#include <stdint.h>
}%

/**
 * NSDatePicker date/time control.
 */
class NSDatePicker
{
    public static function create(int x, int y, int width, int height) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_datepicker_create((double) x, (double) y, (double) width, (double) height);
        }%
        return handle;
    }

    public static function destroy(int picker) -> void
    {
        %{
            ns_datepicker_destroy((uintptr_t) picker);
        }%
    }

    public static function setTimestamp(int picker, int timestamp) -> void
    {
        %{
            ns_datepicker_set_timestamp((uintptr_t) picker, (long) timestamp);
        }%
    }

    public static function getTimestamp(int picker) -> int
    {
        int value;
        %{
            value = (zend_long) ns_datepicker_get_timestamp((uintptr_t) picker);
        }%
        return value;
    }

    public static function pollChange(int picker) -> bool
    {
        bool result;
        %{
            result = ns_datepicker_poll_change((uintptr_t) picker) == 1;
        }%
        return result;
    }
}
