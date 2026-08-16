namespace AppKit\NS\NSLayoutAnchor;

%{
#include "ns-layoutanchor.h"
#include <stdint.h>
}%

/**
 * NSLayoutAnchor — base layout anchor for constraint creation.
 */
class NSLayoutAnchor
{
    public static function wrap(int nsLayoutAnchorPtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_layoutanchor_wrap((void *)(uintptr_t) nsLayoutAnchorPtr);
        }%
        return handle;
    }

    public static function destroy(int anchor) -> void
    {
        %{
            ns_layoutanchor_destroy((uintptr_t) anchor);
        }%
    }

    public static function nsLayoutAnchor(int anchor) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_layoutanchor_nslayoutanchor((uintptr_t) anchor);
        }%
        return ptr;
    }

    public static function constraintEqualToAnchor(int anchor, int other, double constant = 0.0, bool hasConstant = false) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_layoutanchor_constraint_equal_to_anchor(
                (uintptr_t) anchor, (uintptr_t) other, hasConstant ? 1 : 0, constant);
        }%
        return handle;
    }

    public static function constraintGreaterThanOrEqualToAnchor(int anchor, int other, double constant = 0.0, bool hasConstant = false) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_layoutanchor_constraint_greater_than_or_equal_to_anchor(
                (uintptr_t) anchor, (uintptr_t) other, hasConstant ? 1 : 0, constant);
        }%
        return handle;
    }

    public static function constraintLessThanOrEqualToAnchor(int anchor, int other, double constant = 0.0, bool hasConstant = false) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_layoutanchor_constraint_less_than_or_equal_to_anchor(
                (uintptr_t) anchor, (uintptr_t) other, hasConstant ? 1 : 0, constant);
        }%
        return handle;
    }

    public static function name(int anchor) -> string
    {
        string value;
        %{
            char buf[512];
            if (ns_layoutanchor_name((uintptr_t) anchor, buf, (int) sizeof(buf))) {
                ZVAL_STRING(&value, buf);
            } else {
                ZVAL_EMPTY_STRING(&value);
            }
        }%
        return value;
    }

    public static function item(int anchor) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_layoutanchor_item((uintptr_t) anchor);
        }%
        return ptr;
    }

    public static function hasAmbiguousLayout(int anchor) -> bool
    {
        bool result;
        %{
            result = ns_layoutanchor_has_ambiguous_layout((uintptr_t) anchor) == 1;
        }%
        return result;
    }

    public static function constraintsAffectingLayoutCount(int anchor) -> int
    {
        int value;
        %{
            value = (zend_long) ns_layoutanchor_constraints_affecting_layout_count((uintptr_t) anchor);
        }%
        return value;
    }

    public static function constraintAffectingLayoutAt(int anchor, int index) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_layoutanchor_constraint_affecting_layout_at((uintptr_t) anchor, (int) index);
        }%
        return handle;
    }

    public static function viewLeadingAnchor(int view) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_view_leading_anchor((uintptr_t) view);
        }%
        return handle;
    }

    public static function viewTrailingAnchor(int view) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_view_trailing_anchor((uintptr_t) view);
        }%
        return handle;
    }

    public static function viewLeftAnchor(int view) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_view_left_anchor((uintptr_t) view);
        }%
        return handle;
    }

    public static function viewRightAnchor(int view) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_view_right_anchor((uintptr_t) view);
        }%
        return handle;
    }

    public static function viewTopAnchor(int view) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_view_top_anchor((uintptr_t) view);
        }%
        return handle;
    }

    public static function viewBottomAnchor(int view) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_view_bottom_anchor((uintptr_t) view);
        }%
        return handle;
    }

    public static function viewWidthAnchor(int view) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_view_width_anchor((uintptr_t) view);
        }%
        return handle;
    }

    public static function viewHeightAnchor(int view) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_view_height_anchor((uintptr_t) view);
        }%
        return handle;
    }

    public static function viewCenterXAnchor(int view) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_view_center_x_anchor((uintptr_t) view);
        }%
        return handle;
    }

    public static function viewCenterYAnchor(int view) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_view_center_y_anchor((uintptr_t) view);
        }%
        return handle;
    }

    public static function viewFirstBaselineAnchor(int view) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_view_first_baseline_anchor((uintptr_t) view);
        }%
        return handle;
    }

    public static function viewLastBaselineAnchor(int view) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_view_last_baseline_anchor((uintptr_t) view);
        }%
        return handle;
    }
}
