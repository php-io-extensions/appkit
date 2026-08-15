namespace AppKit\NS\NSPopover;

%{
#include "ns-popover.h"
#include <stdint.h>
}%

/**
 * NSPopover anchored popup.
 */
class NSPopover
{
    public static function create() -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_popover_create();
        }%
        return handle;
    }

    public static function destroy(int popover) -> void
    {
        %{
            ns_popover_destroy((uintptr_t) popover);
        }%
    }

    public static function setContentView(int popover, int view) -> void
    {
        %{
            ns_popover_set_content((uintptr_t) popover, (uintptr_t) view);
        }%
    }

    public static function show(int popover, int anchor) -> void
    {
        %{
            ns_popover_show((uintptr_t) popover, (uintptr_t) anchor);
        }%
    }

    public static function close(int popover) -> void
    {
        %{
            ns_popover_close((uintptr_t) popover);
        }%
    }

    public static function isShown(int popover) -> bool
    {
        bool result;
        %{
            result = ns_popover_is_shown((uintptr_t) popover) == 1;
        }%
        return result;
    }
}
