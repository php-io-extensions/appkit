namespace AppKit\NS\NSController;

%{
#include "ns-controller.h"
#include <stdint.h>
}%


/**
 * NSController Cocoa bindings editor base.
 */
class NSController
{
    public static function create() -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_controller_create();
        }%
        return handle;
    }
    public static function wrap(int nsControllerPtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_controller_wrap((void *)(uintptr_t) nsControllerPtr);
        }%
        return handle;
    }
    public static function destroy(int controller) -> void
    {
        %{
            ns_controller_destroy((uintptr_t) controller);
        }%
    }
    public static function nsController(int controller) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_controller_nscontroller((uintptr_t) controller);
        }%
        return ptr;
    }
    public static function discardEditing(int controller) -> void
    {
        %{
            ns_controller_discard_editing((uintptr_t) controller);
        }%
    }
    public static function commitEditing(int controller) -> bool
    {
        bool result;
        %{
            result = ns_controller_commit_editing((uintptr_t) controller) == 1;
        }%
        return result;
    }
    public static function isEditing(int controller) -> bool
    {
        bool result;
        %{
            result = ns_controller_is_editing((uintptr_t) controller) == 1;
        }%
        return result;
    }
}
