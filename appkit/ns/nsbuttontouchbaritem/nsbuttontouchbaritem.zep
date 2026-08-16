namespace AppKit\NS\NSButtonTouchBarItem;

%{
#include "ns-buttontouchbaritem.h"
#include <stdint.h>
}%

/** NSButtonTouchBarItem */
class NSButtonTouchBarItem
{

    public static function buttonWithTitle(string identifier, string title) -> int { int h; %{ h = (zend_long) ns_buttontouchbaritem_button_with_title(Z_STRVAL(identifier), Z_STRVAL(title)); }% return h; }
    public static function buttonWithImage(string identifier, int image) -> int { int h; %{ h = (zend_long) ns_buttontouchbaritem_button_with_image(Z_STRVAL(identifier), (uintptr_t) image); }% return h; }
    public static function wrap(int ptr) -> int
    {
        int handle;
        %{ handle = (zend_long) ns_buttontouchbaritem_wrap((void *)(uintptr_t) ptr); }%
        return handle;
    }
    public static function destroy(int item) -> void
    {
        %{ ns_buttontouchbaritem_destroy((uintptr_t) item); }%
    }
    public static function nsButtonTouchBarItem(int item) -> int
    {
        int ptr;
        %{ ptr = (zend_long)(uintptr_t) ns_buttontouchbaritem_nsbuttontouchbaritem((uintptr_t) item); }%
        return ptr;
    }

    public static function setTitle(int item, string title) -> void { %{ ns_buttontouchbaritem_set_title((uintptr_t) item, Z_STRVAL(title)); }% }
    public static function pollAction(int item) -> bool { bool r; %{ r = ns_buttontouchbaritem_poll_action((uintptr_t) item) == 1; }% return r; }
}
