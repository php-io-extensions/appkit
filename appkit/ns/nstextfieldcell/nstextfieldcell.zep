namespace AppKit\NS\NSTextFieldCell;

%{
#include "ns-textfieldcell.h"
#include <stdint.h>
}%

/**
 * NSTextFieldCell — cell used by NSTextField.
 */
class NSTextFieldCell
{
    public static function createText(string value = "") -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_textfieldcell_create_text(Z_STRVAL(value));
        }%
        return handle;
    }

    public static function wrap(int nsTextFieldCellPtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_textfieldcell_wrap((void *)(uintptr_t) nsTextFieldCellPtr);
        }%
        return handle;
    }

    public static function destroy(int cell) -> void
    {
        %{
            ns_textfieldcell_destroy((uintptr_t) cell);
        }%
    }

    public static function nsTextFieldCell(int cell) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_textfieldcell_nstextfieldcell((uintptr_t) cell);
        }%
        return ptr;
    }

    public static function setTitle(int cell, string title) -> void
    {
        %{
            ns_textfieldcell_set_title((uintptr_t) cell, Z_STRVAL(title));
        }%
    }

    public static function getTitle(int cell) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\0';
            if (ns_textfieldcell_get_title((uintptr_t) cell, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }

    public static function setStringValue(int cell, string value) -> void
    {
        %{
            ns_textfieldcell_set_string((uintptr_t) cell, Z_STRVAL(value));
        }%
    }

    public static function getStringValue(int cell) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\0';
            if (ns_textfieldcell_get_string((uintptr_t) cell, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }

    public static function setBackgroundColor(int cell, int color) -> void
    {
        %{
            ns_textfieldcell_set_background_color((uintptr_t) cell, (uintptr_t) color);
        }%
    }

    public static function setDrawsBackground(int cell, bool drawsBackground) -> void
    {
        %{
            ns_textfieldcell_set_draws_background((uintptr_t) cell, drawsBackground ? 1 : 0);
        }%
    }

    public static function drawsBackground(int cell) -> bool
    {
        bool result;
        %{
            result = ns_textfieldcell_draws_background((uintptr_t) cell) == 1;
        }%
        return result;
    }

    public static function setTextColor(int cell, int color) -> void
    {
        %{
            ns_textfieldcell_set_text_color((uintptr_t) cell, (uintptr_t) color);
        }%
    }

    public static function setBezelStyle(int cell, int style) -> void
    {
        %{
            ns_textfieldcell_set_bezel_style((uintptr_t) cell, (int) style);
        }%
    }

    public static function getBezelStyle(int cell) -> int
    {
        int value;
        %{
            value = (zend_long) ns_textfieldcell_get_bezel_style((uintptr_t) cell);
        }%
        return value;
    }

    public static function setPlaceholderString(int cell, string placeholder) -> void
    {
        %{
            ns_textfieldcell_set_placeholder_string((uintptr_t) cell, Z_STRVAL(placeholder));
        }%
    }

    public static function getPlaceholderString(int cell) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\0';
            if (ns_textfieldcell_get_placeholder_string((uintptr_t) cell, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }

    public static function setWantsNotificationForMarkedText(int cell, bool flag) -> void
    {
        %{
            ns_textfieldcell_set_wants_notification_for_marked_text((uintptr_t) cell, flag ? 1 : 0);
        }%
    }
}
