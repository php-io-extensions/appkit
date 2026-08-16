namespace AppKit\NS\NSLayoutYAxisAnchor;

%{
#include "ns-layoutanchor.h"
#include <stdint.h>
}%

/**
 * NSLayoutYAxisAnchor — vertical layout anchor.
 */
class NSLayoutYAxisAnchor
{
    public static function anchorWithOffsetToAnchor(int anchor, int other) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_layoutyaxisanchor_anchor_with_offset_to_anchor((uintptr_t) anchor, (uintptr_t) other);
        }%
        return handle;
    }

    public static function constraintEqualToSystemSpacingBelowAnchor(int anchor, int other, double multiplier) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_layoutyaxisanchor_constraint_equal_to_system_spacing_below(
                (uintptr_t) anchor, (uintptr_t) other, multiplier);
        }%
        return handle;
    }

    public static function constraintGreaterThanOrEqualToSystemSpacingBelowAnchor(int anchor, int other, double multiplier) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_layoutyaxisanchor_constraint_greater_than_or_equal_to_system_spacing_below(
                (uintptr_t) anchor, (uintptr_t) other, multiplier);
        }%
        return handle;
    }

    public static function constraintLessThanOrEqualToSystemSpacingBelowAnchor(int anchor, int other, double multiplier) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_layoutyaxisanchor_constraint_less_than_or_equal_to_system_spacing_below(
                (uintptr_t) anchor, (uintptr_t) other, multiplier);
        }%
        return handle;
    }
}
