namespace AppKit\NS\NSPageController;

%{
#include "ns-pagecontroller.h"
#include <stdint.h>
}%

/** NSPageController — page history / stack navigation controller. */
class NSPageController
{
    public static function create() -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_pagecontroller_create();
        }%
        return handle;
    }

    public static function wrap(int nsPageControllerPtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_pagecontroller_wrap((void *)(uintptr_t) nsPageControllerPtr);
        }%
        return handle;
    }

    public static function destroy(int controller) -> void
    {
        %{
            ns_pagecontroller_destroy((uintptr_t) controller);
        }%
    }

    public static function nsPageController(int controller) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_pagecontroller_nspagecontroller((uintptr_t) controller);
        }%
        return ptr;
    }

    public static function setTransitionStyle(int controller, int style) -> void
    {
        %{
            ns_pagecontroller_set_transition_style((uintptr_t) controller, (int) style);
        }%
    }

    public static function getTransitionStyle(int controller) -> int
    {
        int value;
        %{
            value = (zend_long) ns_pagecontroller_get_transition_style((uintptr_t) controller);
        }%
        return value;
    }

    public static function setSelectedIndex(int controller, int index) -> void
    {
        %{
            ns_pagecontroller_set_selected_index((uintptr_t) controller, (int) index);
        }%
    }

    public static function getSelectedIndex(int controller) -> int
    {
        int value;
        %{
            value = (zend_long) ns_pagecontroller_get_selected_index((uintptr_t) controller);
        }%
        return value;
    }

    public static function arrangedObjectCount(int controller) -> int
    {
        int value;
        %{
            value = (zend_long) ns_pagecontroller_arranged_object_count((uintptr_t) controller);
        }%
        return value;
    }

    public static function navigateForwardToObject(int controller, string objectId) -> void
    {
        %{
            ns_pagecontroller_navigate_forward_to_object((uintptr_t) controller, Z_STRVAL(objectId));
        }%
    }

    public static function navigateBack(int controller) -> void
    {
        %{
            ns_pagecontroller_navigate_back((uintptr_t) controller);
        }%
    }

    public static function navigateForward(int controller) -> void
    {
        %{
            ns_pagecontroller_navigate_forward((uintptr_t) controller);
        }%
    }

    public static function completeTransition(int controller) -> void
    {
        %{
            ns_pagecontroller_complete_transition((uintptr_t) controller);
        }%
    }

    public static function selectedViewController(int controller) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_pagecontroller_selected_view_controller((uintptr_t) controller);
        }%
        return handle;
    }
}
