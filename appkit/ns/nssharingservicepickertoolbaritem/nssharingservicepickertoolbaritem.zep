namespace AppKit\NS\NSSharingServicePickerToolbarItem;

%{
#include "ns-sharingservicepickertoolbaritem.h"
#include <stdint.h>
}%

/** NSSharingServicePickerToolbarItem — share picker toolbar item (macOS 10.15+). */
class NSSharingServicePickerToolbarItem
{
    public static function create(string identifier) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_sharingservicepickertoolbaritem_create(Z_STRVAL(identifier));
        }%
        return handle;
    }

    public static function wrap(int nsSharingServicePickerToolbarItemPtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_sharingservicepickertoolbaritem_wrap((void *)(uintptr_t) nsSharingServicePickerToolbarItemPtr);
        }%
        return handle;
    }

    public static function destroy(int item) -> void
    {
        %{
            ns_sharingservicepickertoolbaritem_destroy((uintptr_t) item);
        }%
    }

    public static function nsSharingServicePickerToolbarItem(int item) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_sharingservicepickertoolbaritem_nssharingservicepickertoolbaritem((uintptr_t) item);
        }%
        return ptr;
    }

    public static function setShareStrings(int item, array strings) -> void
    {
        %{
            zval *entry;
            const char *cstrings[256];
            int count = 0;
            ZEND_HASH_FOREACH_VAL(Z_ARRVAL(strings), entry) {
                if (count >= 256) {
                    break;
                }
                convert_to_string(entry);
                cstrings[count++] = Z_STRVAL_P(entry);
            } ZEND_HASH_FOREACH_END();
            ns_sharingservicepickertoolbaritem_set_share_strings((uintptr_t) item, cstrings, count);
        }%
    }

    public static function getShareStrings(int item) -> array
    {
        array out = [];
        %{
            int count = ns_sharingservicepickertoolbaritem_share_strings_count((uintptr_t) item);
            int i;
            for (i = 0; i < count; i++) {
                char buf[4096];
                buf[0] = '\0';
                if (ns_sharingservicepickertoolbaritem_share_string_at((uintptr_t) item, i, buf, (int) sizeof(buf))) {
                    add_next_index_string(&out, buf);
                }
            }
        }%
        return out;
    }

    public static function pollShareRequest(int item) -> bool
    {
        bool result;
        %{
            result = ns_sharingservicepickertoolbaritem_poll_share_request((uintptr_t) item) == 1;
        }%
        return result;
    }
}
