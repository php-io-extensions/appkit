namespace AppKit\NS\NSScrubberProportionalLayout;

%{
#include "ns-scrubberproportionallayout.h"
#include <stdint.h>
}%

/**
 * NSScrubberProportionalLayout — viewport-fraction scrubber item layout.
 */
class NSScrubberProportionalLayout
{
    public static function create(int numberOfVisibleItems) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_scrubberproportionallayout_create((int) numberOfVisibleItems);
        }%
        return handle;
    }

    public static function wrap(int nsScrubberProportionalLayoutPtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_scrubberproportionallayout_wrap((void *)(uintptr_t) nsScrubberProportionalLayoutPtr);
        }%
        return handle;
    }

    public static function destroy(int layout) -> void
    {
        %{
            ns_scrubberproportionallayout_destroy((uintptr_t) layout);
        }%
    }

    public static function nsScrubberProportionalLayout(int layout) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_scrubberproportionallayout_nsscrubberproportionallayout((uintptr_t) layout);
        }%
        return ptr;
    }

    public static function setNumberOfVisibleItems(int layout, int count) -> void
    {
        %{
            ns_scrubberproportionallayout_set_number_of_visible_items((uintptr_t) layout, (int) count);
        }%
    }

    public static function getNumberOfVisibleItems(int layout) -> int
    {
        int value;
        %{
            value = (zend_long) ns_scrubberproportionallayout_get_number_of_visible_items((uintptr_t) layout);
        }%
        return value;
    }
}
