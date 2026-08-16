namespace AppKit\NS\NSStoryboard;

%{
#include "ns-storyboard.h"
#include <stdint.h>
}%


/**
 * NSStoryboard storyboard file loader.
 */
class NSStoryboard
{
    public static function main() -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_storyboard_main();
        }%
        return handle;
    }
    public static function withName(string name, string bundlePath = "") -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_storyboard_with_name(Z_STRVAL(name), Z_STRVAL(bundlePath));
        }%
        return handle;
    }
    public static function wrap(int nsStoryboardPtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_storyboard_wrap((void *)(uintptr_t) nsStoryboardPtr);
        }%
        return handle;
    }
    public static function destroy(int storyboard) -> void
    {
        %{
            ns_storyboard_destroy((uintptr_t) storyboard);
        }%
    }
    public static function nsStoryboard(int storyboard) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_storyboard_nsstoryboard((uintptr_t) storyboard);
        }%
        return ptr;
    }
    public static function instantiateInitialController(int storyboard) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_storyboard_instantiate_initial_controller((uintptr_t) storyboard);
        }%
        return handle;
    }
    public static function instantiateControllerWithIdentifier(int storyboard, string identifier) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_storyboard_instantiate_controller_with_identifier((uintptr_t) storyboard, Z_STRVAL(identifier));
        }%
        return handle;
    }
}
