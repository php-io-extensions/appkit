namespace AppKit\NS\NSGroupTouchBarItem;

%{
#include "ns-grouptouchbaritem.h"
#include <stdint.h>
}%

/** NSGroupTouchBarItem */
class NSGroupTouchBarItem
{

    public static function groupItem(string identifier, array items) -> int { int h; %{
        zval *entry; uintptr_t handles[256]; int count = 0;
        ZEND_HASH_FOREACH_VAL(Z_ARRVAL(items), entry) { if (count >= 256) break; convert_to_long(entry); handles[count++] = (uintptr_t) Z_LVAL_P(entry); } ZEND_HASH_FOREACH_END();
        h = (zend_long) ns_grouptouchbaritem_group_item(Z_STRVAL(identifier), handles, count);
    }% return h; }
    public static function alertStyleGroupItem(string identifier) -> int { int h; %{ h = (zend_long) ns_grouptouchbaritem_alert_style_group_item(Z_STRVAL(identifier)); }% return h; }
    public static function wrap(int ptr) -> int
    {
        int handle;
        %{ handle = (zend_long) ns_grouptouchbaritem_wrap((void *)(uintptr_t) ptr); }%
        return handle;
    }
    public static function destroy(int item) -> void
    {
        %{ ns_grouptouchbaritem_destroy((uintptr_t) item); }%
    }
    public static function nsGroupTouchBarItem(int item) -> int
    {
        int ptr;
        %{ ptr = (zend_long)(uintptr_t) ns_grouptouchbaritem_nsgrouptouchbaritem((uintptr_t) item); }%
        return ptr;
    }

    public static function setGroupTouchBar(int item, int bar) -> void { %{ ns_grouptouchbaritem_set_group_touchbar((uintptr_t) item, (uintptr_t) bar); }% }
    public static function getGroupTouchBar(int item) -> int { int h; %{ h = (zend_long) ns_grouptouchbaritem_get_group_touchbar((uintptr_t) item); }% return h; }
}
