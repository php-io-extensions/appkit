namespace AppKit\NS\NSPopUpButton;

%{
#include "ns-popupbutton.h"
#include <stdint.h>
}%

/**
 * NSPopUpButton selection control.
 */
class NSPopUpButton
{
    public static function create(int x, int y, int width, int height) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_popupbutton_create((double) x, (double) y, (double) width, (double) height);
        }%
        return handle;
    }

    public static function destroy(int popup) -> void
    {
        %{
            ns_popupbutton_destroy((uintptr_t) popup);
        }%
    }

    public static function addItem(int popup, string title) -> void
    {
        %{
            ns_popupbutton_add_item((uintptr_t) popup, Z_STRVAL(title));
        }%
    }

    public static function removeAll(int popup) -> void
    {
        %{
            ns_popupbutton_remove_all((uintptr_t) popup);
        }%
    }

    public static function count(int popup) -> int
    {
        int value;
        %{
            value = (zend_long) ns_popupbutton_count((uintptr_t) popup);
        }%
        return value;
    }

    public static function setSelected(int popup, int index) -> void
    {
        %{
            ns_popupbutton_set_selected((uintptr_t) popup, (int) index);
        }%
    }

    public static function getSelected(int popup) -> int
    {
        int value;
        %{
            value = (zend_long) ns_popupbutton_get_selected((uintptr_t) popup);
        }%
        return value;
    }

    public static function getSelectedTitle(int popup) -> string
    {
        %{
            char buf[1024];
            buf[0] = '\0';
            if (ns_popupbutton_get_selected_title((uintptr_t) popup, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }

    public static function pollChange(int popup) -> bool
    {
        bool result;
        %{
            result = ns_popupbutton_poll_change((uintptr_t) popup) == 1;
        }%
        return result;
    }
}
