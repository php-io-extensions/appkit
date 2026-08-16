namespace AppKit\NS\NSSharingServicePickerTouchBarItem;

%{
#include "ns-sharingservicepickertouchbaritem.h"
#include <stdint.h>
}%

/** NSSharingServicePickerTouchBarItem */
class NSSharingServicePickerTouchBarItem
{

    public static function create(string identifier) -> int { int h; %{ h = (zend_long) ns_sharingservicepickertouchbaritem_create(Z_STRVAL(identifier)); }% return h; }
    public static function wrap(int ptr) -> int
    {
        int handle;
        %{ handle = (zend_long) ns_sharingservicepickertouchbaritem_wrap((void *)(uintptr_t) ptr); }%
        return handle;
    }
    public static function destroy(int item) -> void
    {
        %{ ns_sharingservicepickertouchbaritem_destroy((uintptr_t) item); }%
    }
    public static function nsSharingServicePickerTouchBarItem(int item) -> int
    {
        int ptr;
        %{ ptr = (zend_long)(uintptr_t) ns_sharingservicepickertouchbaritem_nssharingservicepickertouchbaritem((uintptr_t) item); }%
        return ptr;
    }

    public static function setShareStrings(int item, array strings) -> void { %{
            zval *entry;
            const char *cstrings[256];
            int count = 0;
            ZEND_HASH_FOREACH_VAL(Z_ARRVAL(strings), entry) {
                if (count >= 256) { break; }
                convert_to_string(entry);
                cstrings[count++] = Z_STRVAL_P(entry);
            } ZEND_HASH_FOREACH_END();
        ns_sharingservicepickertouchbaritem_set_share_strings((uintptr_t) item, cstrings, count);
    }% }
    public static function pollShareRequest(int item) -> bool { bool r; %{ r = ns_sharingservicepickertouchbaritem_poll_share_request((uintptr_t) item) == 1; }% return r; }
}
