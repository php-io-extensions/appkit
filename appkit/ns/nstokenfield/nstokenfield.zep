namespace AppKit\NS\NSTokenField;

%{
#include "ns-tokenfield.h"
#include <stdint.h>
}%


/**
 * NSTokenField — tokenizing text field.
 */
class NSTokenField
{
    public static function create(int x, int y, int width, int height, string value = "") -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_tokenfield_create((double) x, (double) y, (double) width, (double) height, Z_STRVAL(value));
        }%
        return handle;
    }

    public static function destroy(int field) -> void
    {
        %{
            ns_tokenfield_destroy((uintptr_t) field);
        }%
    }

    public static function setStringValue(int field, string value) -> void
    {
        %{
            ns_tokenfield_set_string((uintptr_t) field, Z_STRVAL(value));
        }%
    }

    public static function getStringValue(int field) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\0';
            if (ns_tokenfield_get_string((uintptr_t) field, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }

    public static function setTokenStyle(int field, int style) -> void
    {
        %{
            ns_tokenfield_set_token_style((uintptr_t) field, (int) style);
        }%
    }

    public static function getTokenStyle(int field) -> int
    {
        int value;
        %{
            value = (zend_long) ns_tokenfield_get_token_style((uintptr_t) field);
        }%
        return value;
    }

    public static function setCompletionDelay(int field, float delay) -> void
    {
        %{
            ns_tokenfield_set_completion_delay((uintptr_t) field, (double) delay);
        }%
    }

    public static function getCompletionDelay(int field) -> float
    {
        double value;
        %{
            value = ns_tokenfield_get_completion_delay((uintptr_t) field);
        }%
        return (float) value;
    }

    public static function defaultCompletionDelay() -> float
    {
        double value;
        %{
            value = ns_tokenfield_default_completion_delay();
        }%
        return (float) value;
    }

    public static function pollChange(int field) -> bool
    {
        bool result;
        %{
            result = ns_tokenfield_poll_change((uintptr_t) field) == 1;
        }%
        return result;
    }
}
