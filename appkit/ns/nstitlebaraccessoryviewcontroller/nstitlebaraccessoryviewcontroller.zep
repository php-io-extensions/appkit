namespace AppKit\NS\NSTitlebarAccessoryViewController;

%{
#include "ns-titlebaraccessoryviewcontroller.h"
#include <stdint.h>
}%

class NSTitlebarAccessoryViewController
{
    public static function create() -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_titlebaraccessoryviewcontroller_create();
        }%
        return handle;
    }

    public static function createWithView(int view) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_titlebaraccessoryviewcontroller_create_with_view((uintptr_t) view);
        }%
        return handle;
    }

    public static function wrap(int nsTitlebarAccessoryViewControllerPtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_titlebaraccessoryviewcontroller_wrap((void *)(uintptr_t) nsTitlebarAccessoryViewControllerPtr);
        }%
        return handle;
    }

    public static function destroy(int controller) -> void
    {
        %{
            ns_titlebaraccessoryviewcontroller_destroy((uintptr_t) controller);
        }%
    }

    public static function nsTitlebarAccessoryViewController(int controller) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_titlebaraccessoryviewcontroller_nstitlebaraccessoryviewcontroller((uintptr_t) controller);
        }%
        return ptr;
    }

    public static function setView(int controller, int view) -> void
    {
        %{
            ns_titlebaraccessoryviewcontroller_set_view((uintptr_t) controller, (uintptr_t) view);
        }%
    }

    public static function view(int controller) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_titlebaraccessoryviewcontroller_view((uintptr_t) controller);
        }%
        return handle;
    }

    public static function setLayoutAttribute(int controller, int attribute) -> void
    {
        %{
            ns_titlebaraccessoryviewcontroller_set_layout_attribute((uintptr_t) controller, (int) attribute);
        }%
    }

    public static function layoutAttribute(int controller) -> int
    {
        int value;
        %{
            value = ns_titlebaraccessoryviewcontroller_layout_attribute((uintptr_t) controller);
        }%
        return value;
    }

    public static function setFullScreenMinHeight(int controller, double height) -> void
    {
        %{
            ns_titlebaraccessoryviewcontroller_set_full_screen_min_height((uintptr_t) controller, height);
        }%
    }

    public static function fullScreenMinHeight(int controller) -> double
    {
        double value;
        %{
            value = ns_titlebaraccessoryviewcontroller_full_screen_min_height((uintptr_t) controller);
        }%
        return value;
    }

    public static function setHidden(int controller, bool hidden) -> void
    {
        %{
            ns_titlebaraccessoryviewcontroller_set_hidden((uintptr_t) controller, hidden ? 1 : 0);
        }%
    }

    public static function isHidden(int controller) -> bool
    {
        bool result;
        %{
            result = ns_titlebaraccessoryviewcontroller_is_hidden((uintptr_t) controller) == 1;
        }%
        return result;
    }

    public static function setAutomaticallyAdjustsSize(int controller, bool adjusts) -> void
    {
        %{
            ns_titlebaraccessoryviewcontroller_set_automatically_adjusts_size((uintptr_t) controller, adjusts ? 1 : 0);
        }%
    }

    public static function automaticallyAdjustsSize(int controller) -> bool
    {
        bool result;
        %{
            result = ns_titlebaraccessoryviewcontroller_automatically_adjusts_size((uintptr_t) controller) == 1;
        }%
        return result;
    }
}
