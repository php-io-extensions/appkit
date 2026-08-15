namespace AppKit\NS\NSComboBox;

%{
#include "ns-combobox.h"
#include <stdint.h>
}%

/**
 * NSComboBox text + list selection control.
 */
class NSComboBox
{
    public static function create(int x, int y, int width, int height) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_combobox_create((double) x, (double) y, (double) width, (double) height);
        }%
        return handle;
    }

    public static function destroy(int combo) -> void
    {
        %{
            ns_combobox_destroy((uintptr_t) combo);
        }%
    }

    public static function addItem(int combo, string title) -> void
    {
        %{
            ns_combobox_add_item((uintptr_t) combo, Z_STRVAL(title));
        }%
    }

    public static function removeAll(int combo) -> void
    {
        %{
            ns_combobox_remove_all((uintptr_t) combo);
        }%
    }

    public static function setStringValue(int combo, string value) -> void
    {
        %{
            ns_combobox_set_string((uintptr_t) combo, Z_STRVAL(value));
        }%
    }

    public static function getStringValue(int combo) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\0';
            if (ns_combobox_get_string((uintptr_t) combo, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }

    public static function pollChange(int combo) -> bool
    {
        bool result;
        %{
            result = ns_combobox_poll_change((uintptr_t) combo) == 1;
        }%
        return result;
    }
}
