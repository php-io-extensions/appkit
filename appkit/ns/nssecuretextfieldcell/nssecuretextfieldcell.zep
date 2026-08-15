namespace AppKit\NS\NSSecureTextFieldCell;

%{
#include "ns-securetextfieldcell.h"
#include <stdint.h>
}%

/**
 * NSSecureTextFieldCell — secure text field cell (password bullets).
 */
class NSSecureTextFieldCell
{
    public static function createText(string value = "") -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_securetextfieldcell_create_text(Z_STRVAL(value));
        }%
        return handle;
    }

    public static function wrap(int nsSecureTextFieldCellPtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_securetextfieldcell_wrap((void *)(uintptr_t) nsSecureTextFieldCellPtr);
        }%
        return handle;
    }

    public static function destroy(int cell) -> void
    {
        %{
            ns_securetextfieldcell_destroy((uintptr_t) cell);
        }%
    }

    public static function nsSecureTextFieldCell(int cell) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_securetextfieldcell_nssecuretextfieldcell((uintptr_t) cell);
        }%
        return ptr;
    }

    public static function setEchosBullets(int cell, bool echosBullets) -> void
    {
        %{
            ns_securetextfieldcell_set_echos_bullets((uintptr_t) cell, echosBullets ? 1 : 0);
        }%
    }

    public static function echosBullets(int cell) -> bool
    {
        bool result;
        %{
            result = ns_securetextfieldcell_echos_bullets((uintptr_t) cell) == 1;
        }%
        return result;
    }

    public static function setStringValue(int cell, string value) -> void
    {
        %{
            ns_securetextfieldcell_set_string((uintptr_t) cell, Z_STRVAL(value));
        }%
    }

    public static function getStringValue(int cell) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\0';
            if (ns_securetextfieldcell_get_string((uintptr_t) cell, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }

    public static function setPlaceholderString(int cell, string placeholder) -> void
    {
        %{
            ns_securetextfieldcell_set_placeholder_string((uintptr_t) cell, Z_STRVAL(placeholder));
        }%
    }

    public static function getPlaceholderString(int cell) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\0';
            if (ns_securetextfieldcell_get_placeholder_string((uintptr_t) cell, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }

    public static function setBezelStyle(int cell, int style) -> void
    {
        %{
            ns_securetextfieldcell_set_bezel_style((uintptr_t) cell, (int) style);
        }%
    }

    public static function getBezelStyle(int cell) -> int
    {
        int value;
        %{
            value = (zend_long) ns_securetextfieldcell_get_bezel_style((uintptr_t) cell);
        }%
        return value;
    }
}
