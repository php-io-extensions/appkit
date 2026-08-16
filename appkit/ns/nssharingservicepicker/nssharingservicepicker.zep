namespace AppKit\NS\NSSharingServicePicker;

%{
#include "ns-sharingservicepicker.h"
#include <stdint.h>
}%

/** NSSharingServicePicker — share menu picker anchored to a view. */
class NSSharingServicePicker
{
    public static function create(array strings) -> int
    {
        int handle;
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
            handle = (zend_long) ns_sharingservicepicker_create(cstrings, count);
        }%
        return handle;
    }

    public static function wrap(int nsSharingServicePickerPtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_sharingservicepicker_wrap((void *)(uintptr_t) nsSharingServicePickerPtr);
        }%
        return handle;
    }

    public static function destroy(int picker) -> void
    {
        %{
            ns_sharingservicepicker_destroy((uintptr_t) picker);
        }%
    }

    public static function nsSharingServicePicker(int picker) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_sharingservicepicker_nssharingservicepicker((uintptr_t) picker);
        }%
        return ptr;
    }

    public static function showRelativeToRect(int picker, double x, double y, double width, double height, int view, int preferredEdge) -> void
    {
        %{
            ns_sharingservicepicker_show_relative_to_rect(
                (uintptr_t) picker, x, y, width, height, (uintptr_t) view, preferredEdge
            );
        }%
    }

    public static function close(int picker) -> void
    {
        %{
            ns_sharingservicepicker_close((uintptr_t) picker);
        }%
    }

    public static function pollChosenService(int picker) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\0';
            if (ns_sharingservicepicker_poll_chosen_service((uintptr_t) picker, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }

    public static function standardShareMenuItem(int picker) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_sharingservicepicker_standard_share_menu_item((uintptr_t) picker);
        }%
        return handle;
    }
}
