namespace AppKit\NS\NSLayoutXAxisAnchor;

%{
#include "ns-layoutanchor.h"
#include <stdint.h>
}%

/**
 * NSLayoutXAxisAnchor — horizontal layout anchor.
 */
class NSLayoutXAxisAnchor
{
    public static function anchorWithOffsetToAnchor(int anchor, int other) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_layoutxaxisanchor_anchor_with_offset_to_anchor((uintptr_t) anchor, (uintptr_t) other);
        }%
        return handle;
    }

    public static function constraintEqualToSystemSpacingAfterAnchor(int anchor, int other, double multiplier) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_layoutxaxisanchor_constraint_equal_to_system_spacing_after(
                (uintptr_t) anchor, (uintptr_t) other, multiplier);
        }%
        return handle;
    }

    public static function constraintGreaterThanOrEqualToSystemSpacingAfterAnchor(int anchor, int other, double multiplier) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_layoutxaxisanchor_constraint_greater_than_or_equal_to_system_spacing_after(
                (uintptr_t) anchor, (uintptr_t) other, multiplier);
        }%
        return handle;
    }

    public static function constraintLessThanOrEqualToSystemSpacingAfterAnchor(int anchor, int other, double multiplier) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_layoutxaxisanchor_constraint_less_than_or_equal_to_system_spacing_after(
                (uintptr_t) anchor, (uintptr_t) other, multiplier);
        }%
        return handle;
    }
}
