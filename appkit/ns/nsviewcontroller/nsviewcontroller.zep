namespace AppKit\NS\NSViewController;

%{
#include "ns-viewcontroller.h"
#include <stdint.h>
}%

/**
 * NSViewController — view lifecycle host for NSPopover, window content, etc.
 */
class NSViewController
{
    /**
     * @return int Opaque controller handle, or 0 on failure
     */
    public static function create() -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_viewcontroller_create();
        }%
        return handle;
    }

    /**
     * @return int Opaque controller handle with the given view-box as its view, or 0
     */
    public static function createWithView(int view) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_viewcontroller_create_with_view((uintptr_t) view);
        }%
        return handle;
    }

    /**
     * @return int Opaque controller handle, or 0 on failure
     */
    public static function wrap(int nsViewControllerPtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_viewcontroller_wrap((void *)(uintptr_t) nsViewControllerPtr);
        }%
        return handle;
    }

    public static function destroy(int controller) -> void
    {
        %{
            ns_viewcontroller_destroy((uintptr_t) controller);
        }%
    }

    /**
     * @return int Borrowed NSViewController pointer, or 0
     */
    public static function nsViewController(int controller) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_viewcontroller_nsviewcontroller((uintptr_t) controller);
        }%
        return ptr;
    }

    public static function setView(int controller, int view) -> void
    {
        %{
            ns_viewcontroller_set_view((uintptr_t) controller, (uintptr_t) view);
        }%
    }

    /**
     * @return int View-box handle for the controller's view, or 0
     */
    public static function view(int controller) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_viewcontroller_view((uintptr_t) controller);
        }%
        return handle;
    }

    public static function setTitle(int controller, string title) -> void
    {
        %{
            ns_viewcontroller_set_title((uintptr_t) controller, Z_STRVAL(title));
        }%
    }

    public static function getTitle(int controller) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\0';
            if (ns_viewcontroller_get_title((uintptr_t) controller, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }

    public static function isViewLoaded(int controller) -> bool
    {
        bool result;
        %{
            result = ns_viewcontroller_is_view_loaded((uintptr_t) controller) == 1;
        }%
        return result;
    }

    public static function loadViewIfNeeded(int controller) -> void
    {
        %{
            ns_viewcontroller_load_view_if_needed((uintptr_t) controller);
        }%
    }
}
