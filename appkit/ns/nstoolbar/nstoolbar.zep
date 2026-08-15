namespace AppKit\NS\NSToolbar;

%{
#include "ns-toolbar.h"
#include <stdint.h>
}%

/**
 * NSToolbar window chrome.
 */
class NSToolbar
{
    public static function create() -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_toolbar_create();
        }%
        return handle;
    }

    public static function destroy(int toolbar) -> void
    {
        %{
            ns_toolbar_destroy((uintptr_t) toolbar);
        }%
    }

    public static function addItem(int toolbar, string title, string actionId) -> void
    {
        %{
            ns_toolbar_add_item((uintptr_t) toolbar, Z_STRVAL(title), Z_STRVAL(actionId));
        }%
    }

    public static function install(int toolbar, int window) -> bool
    {
        bool result;
        %{
            result = ns_toolbar_install((uintptr_t) toolbar, (uintptr_t) window) == 1;
        }%
        return result;
    }

    public static function pollAction(int toolbar) -> string
    {
        %{
            char buf[256];
            buf[0] = '\0';
            if (ns_toolbar_poll_action((uintptr_t) toolbar, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }
}
