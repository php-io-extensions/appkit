namespace AppKit\NS\NSSplitViewItem;

%{
#include "ns-splitviewitem.h"
#include <stdint.h>
}%

/** NSSplitViewItem — split pane descriptor for NSSplitViewController. */
class NSSplitViewItem
{
    public static function create(int viewController) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_splitviewitem_create((uintptr_t) viewController);
        }%
        return handle;
    }

    public static function createSidebar(int viewController) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_splitviewitem_create_sidebar((uintptr_t) viewController);
        }%
        return handle;
    }

    public static function createContentList(int viewController) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_splitviewitem_create_content_list((uintptr_t) viewController);
        }%
        return handle;
    }

    public static function createInspector(int viewController) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_splitviewitem_create_inspector((uintptr_t) viewController);
        }%
        return handle;
    }

    public static function wrap(int nsSplitViewItemPtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_splitviewitem_wrap((void *)(uintptr_t) nsSplitViewItemPtr);
        }%
        return handle;
    }

    public static function destroy(int item) -> void
    {
        %{
            ns_splitviewitem_destroy((uintptr_t) item);
        }%
    }

    public static function nsSplitViewItem(int item) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_splitviewitem_nssplitviewitem((uintptr_t) item);
        }%
        return ptr;
    }

    public static function setViewController(int item, int viewController) -> void
    {
        %{
            ns_splitviewitem_set_view_controller((uintptr_t) item, (uintptr_t) viewController);
        }%
    }

    public static function viewController(int item) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_splitviewitem_view_controller((uintptr_t) item);
        }%
        return handle;
    }

    public static function setCollapsed(int item, bool flag) -> void
    {
        %{
            ns_splitviewitem_set_collapsed((uintptr_t) item, flag ? 1 : 0);
        }%
    }

    public static function isCollapsed(int item) -> bool
    {
        bool result;
        %{
            result = ns_splitviewitem_is_collapsed((uintptr_t) item) == 1;
        }%
        return result;
    }

    public static function setCanCollapse(int item, bool flag) -> void
    {
        %{
            ns_splitviewitem_set_can_collapse((uintptr_t) item, flag ? 1 : 0);
        }%
    }

    public static function canCollapse(int item) -> bool
    {
        bool result;
        %{
            result = ns_splitviewitem_can_collapse((uintptr_t) item) == 1;
        }%
        return result;
    }

    public static function setMinimumThickness(int item, double value) -> void
    {
        %{
            ns_splitviewitem_set_minimum_thickness((uintptr_t) item, value);
        }%
    }

    public static function getMinimumThickness(int item) -> double
    {
        double value;
        %{
            value = ns_splitviewitem_get_minimum_thickness((uintptr_t) item);
        }%
        return value;
    }

    public static function setMaximumThickness(int item, double value) -> void
    {
        %{
            ns_splitviewitem_set_maximum_thickness((uintptr_t) item, value);
        }%
    }

    public static function getMaximumThickness(int item) -> double
    {
        double value;
        %{
            value = ns_splitviewitem_get_maximum_thickness((uintptr_t) item);
        }%
        return value;
    }

    public static function setPreferredThicknessFraction(int item, double value) -> void
    {
        %{
            ns_splitviewitem_set_preferred_thickness_fraction((uintptr_t) item, value);
        }%
    }

    public static function getPreferredThicknessFraction(int item) -> double
    {
        double value;
        %{
            value = ns_splitviewitem_get_preferred_thickness_fraction((uintptr_t) item);
        }%
        return value;
    }

    public static function setHoldingPriority(int item, double priority) -> void
    {
        %{
            ns_splitviewitem_set_holding_priority((uintptr_t) item, priority);
        }%
    }

    public static function getHoldingPriority(int item) -> double
    {
        double value;
        %{
            value = ns_splitviewitem_get_holding_priority((uintptr_t) item);
        }%
        return value;
    }

    public static function setSpringLoaded(int item, bool flag) -> void
    {
        %{
            ns_splitviewitem_set_spring_loaded((uintptr_t) item, flag ? 1 : 0);
        }%
    }

    public static function isSpringLoaded(int item) -> bool
    {
        bool result;
        %{
            result = ns_splitviewitem_is_spring_loaded((uintptr_t) item) == 1;
        }%
        return result;
    }

    public static function getBehavior(int item) -> int
    {
        int value;
        %{
            value = (zend_long) ns_splitviewitem_get_behavior((uintptr_t) item);
        }%
        return value;
    }
}
