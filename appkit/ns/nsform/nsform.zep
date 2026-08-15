namespace AppKit\NS\NSForm;

%{
#include "ns-form.h"
#include <stdint.h>
}%


/**
 * Deprecated NSForm labeled-entry matrix.
 */
class NSForm
{
    public static function create(int x, int y, int width, int height) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_form_create((double) x, (double) y, (double) width, (double) height);
        }%
        return handle;
    }
    public static function destroy(int form) -> void
    {
        %{
            ns_form_destroy((uintptr_t) form);
        }%
    }
    public static function addEntry(int form, string title) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_form_add_entry((uintptr_t) form, Z_STRVAL(title));
        }%
        return handle;
    }
    public static function setTitleAt(int form, int index, string title) -> void
    {
        %{
            ns_form_set_title_at((uintptr_t) form, (int) index, Z_STRVAL(title));
        }%
    }

    public static function getTitleAt(int form, int index) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\0';
            if (ns_form_get_title_at((uintptr_t) form, (int) index, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }

    public static function setValueAt(int form, int index, string value) -> void
    {
        %{
            ns_form_set_value_at((uintptr_t) form, (int) index, Z_STRVAL(value));
        }%
    }

    public static function getValueAt(int form, int index) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\0';
            if (ns_form_get_value_at((uintptr_t) form, (int) index, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }

    public static function cellAt(int form, int index) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_form_cell_at((uintptr_t) form, (int) index);
        }%
        return handle;
    }
    public static function numberOfRows(int form) -> int
    {
        int value;
        %{
            value = (zend_long) ns_form_number_of_rows((uintptr_t) form);
        }%
        return value;
    }
}
