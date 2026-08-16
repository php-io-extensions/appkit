namespace AppKit\NS\NSTouchBarItem;

%{
#include "ns-touchbaritem.h"
#include <stdint.h>
}%

/** NSTouchBarItem base item */
class NSTouchBarItem
{
    public static function create(string identifier) -> int
    { int handle; %{ handle = (zend_long) ns_touchbaritem_create(Z_STRVAL(identifier)); }% return handle; }
    public static function wrap(int nsTouchBarItemPtr) -> int
    {
        int handle;
        %{ handle = (zend_long) ns_touchbaritem_wrap((void *)(uintptr_t) nsTouchBarItemPtr); }%
        return handle;
    }

    public static function destroy(int item) -> void
    {
        %{ ns_touchbaritem_destroy((uintptr_t) item); }%
    }

    public static function nsTouchBarItem(int item) -> int
    {
        int ptr;
        %{ ptr = (zend_long)(uintptr_t) ns_touchbaritem_nstouchbaritem((uintptr_t) item); }%
        return ptr;
    }

    public static function getIdentifier(int item) -> string
    {
        %{ char buf[4096]; buf[0] = '\0'; if (ns_touchbaritem_get_identifier((uintptr_t) item, buf, (int) sizeof(buf))) { RETURN_STRING(buf); } RETURN_EMPTY_STRING(); }%
        return "";
    }

    public static function setVisibilityPriority(int item, double priority) -> void
    { %{ ns_touchbaritem_set_visibility_priority((uintptr_t) item, (float) priority); }% }
    public static function getVisibilityPriority(int item) -> double
    { double value; %{ value = (double) ns_touchbaritem_get_visibility_priority((uintptr_t) item); }% return value; }
    public static function getCustomizationLabel(int item) -> string
    {
        %{ char buf[4096]; buf[0] = '\0'; if (ns_touchbaritem_get_customization_label((uintptr_t) item, buf, (int) sizeof(buf))) { RETURN_STRING(buf); } RETURN_EMPTY_STRING(); }%
        return "";
    }

    public static function isVisible(int item) -> bool
    { bool r; %{ r = ns_touchbaritem_is_visible((uintptr_t) item) == 1; }% return r; }
    public static function getView(int item) -> int
    { int h; %{ h = (zend_long) ns_touchbaritem_get_view((uintptr_t) item); }% return h; }
}
