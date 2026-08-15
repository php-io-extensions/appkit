namespace AppKit\NS\NSTextField;

%{
#include "ns-textfield.h"
#include <stdint.h>
}%

/**
 * NSTextField and static label (non-editable NSTextField).
 */
class NSTextField
{
    public static function create(int x, int y, int width, int height, string value = "") -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_textfield_create((double) x, (double) y, (double) width, (double) height, Z_STRVAL(value));
        }%
        return handle;
    }

    /**
     * Static label — non-editable NSTextField.
     */
    public static function createLabel(int x, int y, int width, int height, string value = "") -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_label_create((double) x, (double) y, (double) width, (double) height, Z_STRVAL(value));
        }%
        return handle;
    }

    public static function destroy(int field) -> void
    {
        %{
            ns_textfield_destroy((uintptr_t) field);
        }%
    }

    public static function destroyLabel(int label) -> void
    {
        %{
            ns_label_destroy((uintptr_t) label);
        }%
    }

    public static function setStringValue(int field, string value) -> void
    {
        %{
            ns_textfield_set_string((uintptr_t) field, Z_STRVAL(value));
        }%
    }

    public static function getStringValue(int field) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\0';
            if (ns_textfield_get_string((uintptr_t) field, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }

    public static function setEditable(int field, bool editable) -> void
    {
        %{
            ns_textfield_set_editable((uintptr_t) field, editable ? 1 : 0);
        }%
    }

    public static function pollChange(int field) -> bool
    {
        bool result;
        %{
            result = ns_textfield_poll_change((uintptr_t) field) == 1;
        }%
        return result;
    }
}
