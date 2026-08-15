namespace AppKit\NS\NSSplitViewController;

%{
#include "ns-splitviewcontroller.h"
#include <stdint.h>
}%

/** NSSplitViewController — container for side-by-side view controllers. */
class NSSplitViewController
{
    public static function create() -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_splitviewcontroller_create();
        }%
        return handle;
    }

    public static function wrap(int nsSplitViewControllerPtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_splitviewcontroller_wrap((void *)(uintptr_t) nsSplitViewControllerPtr);
        }%
        return handle;
    }

    public static function destroy(int controller) -> void
    {
        %{
            ns_splitviewcontroller_destroy((uintptr_t) controller);
        }%
    }

    public static function nsSplitViewController(int controller) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_splitviewcontroller_nssplitviewcontroller((uintptr_t) controller);
        }%
        return ptr;
    }

    public static function addSplitViewItem(int controller, int item) -> void
    {
        %{
            ns_splitviewcontroller_add_split_view_item((uintptr_t) controller, (uintptr_t) item);
        }%
    }

    public static function removeSplitViewItem(int controller, int item) -> void
    {
        %{
            ns_splitviewcontroller_remove_split_view_item((uintptr_t) controller, (uintptr_t) item);
        }%
    }

    public static function splitViewItemCount(int controller) -> int
    {
        int value;
        %{
            value = (zend_long) ns_splitviewcontroller_split_view_item_count((uintptr_t) controller);
        }%
        return value;
    }

    public static function splitViewItemAt(int controller, int index) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_splitviewcontroller_split_view_item_at((uintptr_t) controller, (int) index);
        }%
        return handle;
    }

    public static function setMinimumThicknessForInlineSidebars(int controller, double value) -> void
    {
        %{
            ns_splitviewcontroller_set_minimum_thickness_for_inline_sidebars((uintptr_t) controller, value);
        }%
    }

    public static function getMinimumThicknessForInlineSidebars(int controller) -> double
    {
        double value;
        %{
            value = ns_splitviewcontroller_get_minimum_thickness_for_inline_sidebars((uintptr_t) controller);
        }%
        return value;
    }

    public static function splitView(int controller) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_splitviewcontroller_split_view((uintptr_t) controller);
        }%
        return handle;
    }

    public static function toggleSidebar(int controller) -> void
    {
        %{
            ns_splitviewcontroller_toggle_sidebar((uintptr_t) controller);
        }%
    }
}
