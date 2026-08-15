namespace AppKit\NS\NSSecureTextField;

%{
#include "ns-securetextfield.h"
#include <stdint.h>
}%

class NSSecureTextField
{
    public static function create(int x, int y, int width, int height, string value = "") -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_securetextfield_create((double) x, (double) y, (double) width, (double) height, Z_STRVAL(value));
        }%
        return handle;
    }

    public static function destroy(int field) -> void
    {
        %{
            ns_securetextfield_destroy((uintptr_t) field);
        }%
    }

    public static function setStringValue(int field, string value) -> void
    {
        %{
            ns_securetextfield_set_string((uintptr_t) field, Z_STRVAL(value));
        }%
    }

    public static function getStringValue(int field) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\0';
            if (ns_securetextfield_get_string((uintptr_t) field, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }

    public static function pollChange(int field) -> bool
    {
        bool result;
        %{
            result = ns_securetextfield_poll_change((uintptr_t) field) == 1;
        }%
        return result;
    }
}
