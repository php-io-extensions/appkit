namespace AppKit\NS\NSCustomTouchBarItem;

%{
#include "ns-customtouchbaritem.h"
#include <stdint.h>
}%

/** NSCustomTouchBarItem */
class NSCustomTouchBarItem
{
    public static function create(string identifier) -> int { int h; %{ h = (zend_long) ns_customtouchbaritem_create(Z_STRVAL(identifier)); }% return h; }
    public static function wrap(int ptr) -> int
    {
        int handle;
        %{ handle = (zend_long) ns_customtouchbaritem_wrap((void *)(uintptr_t) ptr); }%
        return handle;
    }
    public static function destroy(int item) -> void
    {
        %{ ns_customtouchbaritem_destroy((uintptr_t) item); }%
    }
    public static function nsCustomTouchBarItem(int item) -> int
    {
        int ptr;
        %{ ptr = (zend_long)(uintptr_t) ns_customtouchbaritem_nscustomtouchbaritem((uintptr_t) item); }%
        return ptr;
    }

    public static function setView(int item, int view) -> void { %{ ns_customtouchbaritem_set_view((uintptr_t) item, (uintptr_t) view); }% }
    public static function getView(int item) -> int { int h; %{ h = (zend_long) ns_customtouchbaritem_get_view((uintptr_t) item); }% return h; }
    public static function setCustomizationLabel(int item, string label) -> void { %{ ns_customtouchbaritem_set_customization_label((uintptr_t) item, Z_STRVAL(label)); }% }
    public static function getCustomizationLabel(int item) -> string
    {
        %{ char buf[4096]; buf[0] = '\0'; if (ns_customtouchbaritem_get_customization_label((uintptr_t) item, buf, (int) sizeof(buf))) { RETURN_STRING(buf); } RETURN_EMPTY_STRING(); }%
        return "";
    }
}
