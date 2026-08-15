namespace AppKit\NS\NSWindowController;

%{
#include "ns-windowcontroller.h"
#include <stdint.h>
}%

/**
 * NSWindowController — window + nib lifecycle host.
 */
class NSWindowController
{
    /**
     * @return int Opaque controller handle bound to an existing window-box, or 0
     */
    public static function create(int window) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_windowcontroller_create((uintptr_t) window);
        }%
        return handle;
    }

    /**
     * @return int Opaque controller handle with no window yet, or 0
     */
    public static function createEmpty() -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_windowcontroller_create_empty();
        }%
        return handle;
    }

    /**
     * @return int Opaque controller handle, or 0 on failure
     */
    public static function wrap(int nsWindowControllerPtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_windowcontroller_wrap((void *)(uintptr_t) nsWindowControllerPtr);
        }%
        return handle;
    }

    public static function destroy(int controller) -> void
    {
        %{
            ns_windowcontroller_destroy((uintptr_t) controller);
        }%
    }

    /**
     * @return int Borrowed NSWindowController pointer, or 0
     */
    public static function nsWindowController(int controller) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_windowcontroller_nswindowcontroller((uintptr_t) controller);
        }%
        return ptr;
    }

    /**
     * @return int Borrowed NSWindow pointer from the controller, or 0
     */
    public static function nsWindow(int controller) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_windowcontroller_nswindow((uintptr_t) controller);
        }%
        return ptr;
    }

    public static function showWindow(int controller) -> void
    {
        %{
            ns_windowcontroller_show_window((uintptr_t) controller);
        }%
    }

    public static function close(int controller) -> void
    {
        %{
            ns_windowcontroller_close((uintptr_t) controller);
        }%
    }

    public static function setContentViewController(int controller, int viewController) -> void
    {
        %{
            ns_windowcontroller_set_content_view_controller((uintptr_t) controller, (uintptr_t) viewController);
        }%
    }

    public static function isWindowLoaded(int controller) -> bool
    {
        bool result;
        %{
            result = ns_windowcontroller_is_window_loaded((uintptr_t) controller) == 1;
        }%
        return result;
    }

    public static function setShouldCloseDocument(int controller, bool shouldClose) -> void
    {
        %{
            ns_windowcontroller_set_should_close_document((uintptr_t) controller, shouldClose ? 1 : 0);
        }%
    }

    public static function shouldCloseDocument(int controller) -> bool
    {
        bool result;
        %{
            result = ns_windowcontroller_should_close_document((uintptr_t) controller) == 1;
        }%
        return result;
    }
}
