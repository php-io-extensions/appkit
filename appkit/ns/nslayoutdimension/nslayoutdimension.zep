namespace AppKit\NS\NSLayoutDimension;

%{
#include "ns-layoutanchor.h"
#include <stdint.h>
}%

/**
 * NSLayoutDimension — width/height layout anchor.
 */
class NSLayoutDimension
{
    public static function constraintEqualToConstant(int anchor, double constant) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_layoutdimension_constraint_equal_to_constant((uintptr_t) anchor, constant);
        }%
        return handle;
    }

    public static function constraintGreaterThanOrEqualToConstant(int anchor, double constant) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_layoutdimension_constraint_greater_than_or_equal_to_constant((uintptr_t) anchor, constant);
        }%
        return handle;
    }

    public static function constraintLessThanOrEqualToConstant(int anchor, double constant) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_layoutdimension_constraint_less_than_or_equal_to_constant((uintptr_t) anchor, constant);
        }%
        return handle;
    }

    public static function constraintEqualToAnchor(int anchor, int other, double multiplier) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_layoutdimension_constraint_equal_to_anchor_multiplier(
                (uintptr_t) anchor, (uintptr_t) other, multiplier);
        }%
        return handle;
    }

    public static function constraintGreaterThanOrEqualToAnchor(int anchor, int other, double multiplier) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_layoutdimension_constraint_greater_than_or_equal_to_anchor_multiplier(
                (uintptr_t) anchor, (uintptr_t) other, multiplier);
        }%
        return handle;
    }

    public static function constraintLessThanOrEqualToAnchor(int anchor, int other, double multiplier) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_layoutdimension_constraint_less_than_or_equal_to_anchor_multiplier(
                (uintptr_t) anchor, (uintptr_t) other, multiplier);
        }%
        return handle;
    }

    public static function constraintEqualToAnchorConstant(int anchor, int other, double multiplier, double constant) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_layoutdimension_constraint_equal_to_anchor_multiplier_constant(
                (uintptr_t) anchor, (uintptr_t) other, multiplier, constant);
        }%
        return handle;
    }

    public static function constraintGreaterThanOrEqualToAnchorConstant(int anchor, int other, double multiplier, double constant) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_layoutdimension_constraint_greater_than_or_equal_to_anchor_multiplier_constant(
                (uintptr_t) anchor, (uintptr_t) other, multiplier, constant);
        }%
        return handle;
    }

    public static function constraintLessThanOrEqualToAnchorConstant(int anchor, int other, double multiplier, double constant) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_layoutdimension_constraint_less_than_or_equal_to_anchor_multiplier_constant(
                (uintptr_t) anchor, (uintptr_t) other, multiplier, constant);
        }%
        return handle;
    }
}
