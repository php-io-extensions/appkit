namespace AppKit\NS\NSComboButton;

%{
#include "ns-combobutton.h"
#include <stdint.h>
}%


/**
 * NSComboButton — button with an attached menu.
 */
class NSComboButton
{
    public static function createWithTitle(int x, int y, int width, int height, string title = "", int menuHandle = 0) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_combobutton_create_with_title((double) x, (double) y, (double) width, (double) height, Z_STRVAL(title), (uintptr_t) menuHandle);
        }%
        return handle;
    }

    public static function destroy(int button) -> void
    {
        %{
            ns_combobutton_destroy((uintptr_t) button);
        }%
    }

    public static function setTitle(int button, string title) -> void
    {
        %{
            ns_combobutton_set_title((uintptr_t) button, Z_STRVAL(title));
        }%
    }

    public static function getTitle(int button) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\0';
            if (ns_combobutton_get_title((uintptr_t) button, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }

    public static function setImage(int button, int imageHandle) -> void
    {
        %{
            ns_combobutton_set_image((uintptr_t) button, (uintptr_t) imageHandle);
        }%
    }

    public static function setMenu(int button, int menuHandle) -> void
    {
        %{
            ns_combobutton_set_menu((uintptr_t) button, (uintptr_t) menuHandle);
        }%
    }

    public static function getMenu(int button) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_combobutton_get_menu((uintptr_t) button);
        }%
        return handle;
    }

    public static function setStyle(int button, int style) -> void
    {
        %{
            ns_combobutton_set_style((uintptr_t) button, (int) style);
        }%
    }

    public static function getStyle(int button) -> int
    {
        int value;
        %{
            value = (zend_long) ns_combobutton_get_style((uintptr_t) button);
        }%
        return value;
    }
}
