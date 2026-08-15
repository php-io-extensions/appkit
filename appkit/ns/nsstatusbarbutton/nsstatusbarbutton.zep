namespace AppKit\NS\NSStatusBarButton;

%{
#include "ns-statusbarbutton.h"
#include <stdint.h>
}%


/**
 * NSStatusBarButton for NSStatusItem.
 */
class NSStatusBarButton
{
    public static function wrap(int nsStatusBarButtonPtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_statusbarbutton_wrap((void *)(uintptr_t) nsStatusBarButtonPtr);
        }%
        return handle;
    }
    public static function fromStatusItem(int item) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_statusbarbutton_from_status_item((uintptr_t) item);
        }%
        return handle;
    }
    public static function destroy(int button) -> void
    {
        %{
            ns_statusbarbutton_destroy((uintptr_t) button);
        }%
    }
    public static function setTitle(int button, string title) -> void
    {
        %{
            ns_statusbarbutton_set_title((uintptr_t) button, Z_STRVAL(title));
        }%
    }
    public static function getTitle(int button) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\0';
            if (ns_statusbarbutton_get_title((uintptr_t) button, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }
    public static function setAppearsDisabled(int button, bool flag) -> void
    {
        %{
            ns_statusbarbutton_set_appears_disabled((uintptr_t) button, flag ? 1 : 0);
        }%
    }
    public static function appearsDisabled(int button) -> bool
    {
        bool result;
        %{
            result = ns_statusbarbutton_appears_disabled((uintptr_t) button) == 1;
        }%
        return result;
    }
    public static function setImage(int button, int image) -> void
    {
        %{
            ns_statusbarbutton_set_image((uintptr_t) button, (uintptr_t) image);
        }%
    }
}
