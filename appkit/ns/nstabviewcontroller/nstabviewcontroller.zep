namespace AppKit\NS\NSTabViewController;

%{
#include "ns-tabviewcontroller.h"
#include <stdint.h>
}%

/** NSTabViewController — tabbed container view controller. */
class NSTabViewController
{
    public static function create() -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_tabviewcontroller_create();
        }%
        return handle;
    }

    public static function wrap(int nsTabViewControllerPtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_tabviewcontroller_wrap((void *)(uintptr_t) nsTabViewControllerPtr);
        }%
        return handle;
    }

    public static function destroy(int controller) -> void
    {
        %{
            ns_tabviewcontroller_destroy((uintptr_t) controller);
        }%
    }

    public static function nsTabViewController(int controller) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_tabviewcontroller_nstabviewcontroller((uintptr_t) controller);
        }%
        return ptr;
    }

    public static function setTabStyle(int controller, int style) -> void
    {
        %{
            ns_tabviewcontroller_set_tab_style((uintptr_t) controller, (int) style);
        }%
    }

    public static function getTabStyle(int controller) -> int
    {
        int value;
        %{
            value = (zend_long) ns_tabviewcontroller_get_tab_style((uintptr_t) controller);
        }%
        return value;
    }

    public static function setSelectedTabViewItemIndex(int controller, int index) -> void
    {
        %{
            ns_tabviewcontroller_set_selected_tab_view_item_index((uintptr_t) controller, (int) index);
        }%
    }

    public static function getSelectedTabViewItemIndex(int controller) -> int
    {
        int value;
        %{
            value = (zend_long) ns_tabviewcontroller_get_selected_tab_view_item_index((uintptr_t) controller);
        }%
        return value;
    }

    public static function addTabViewItem(int controller, int item) -> void
    {
        %{
            ns_tabviewcontroller_add_tab_view_item((uintptr_t) controller, (uintptr_t) item);
        }%
    }

    public static function removeTabViewItem(int controller, int item) -> void
    {
        %{
            ns_tabviewcontroller_remove_tab_view_item((uintptr_t) controller, (uintptr_t) item);
        }%
    }

    public static function tabViewItemCount(int controller) -> int
    {
        int value;
        %{
            value = (zend_long) ns_tabviewcontroller_tab_view_item_count((uintptr_t) controller);
        }%
        return value;
    }

    public static function tabView(int controller) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_tabviewcontroller_tab_view((uintptr_t) controller);
        }%
        return handle;
    }

    public static function setCanPropagateSelectedChildViewControllerTitle(int controller, bool flag) -> void
    {
        %{
            ns_tabviewcontroller_set_can_propagate_selected_child_view_controller_title((uintptr_t) controller, flag ? 1 : 0);
        }%
    }

    public static function canPropagateSelectedChildViewControllerTitle(int controller) -> bool
    {
        bool result;
        %{
            result = ns_tabviewcontroller_can_propagate_selected_child_view_controller_title((uintptr_t) controller) == 1;
        }%
        return result;
    }
}
