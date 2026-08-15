namespace AppKit\NS\NSButtonCell;

%{
#include "ns-buttoncell.h"
#include <stdint.h>
}%


/**
 * NSButtonCell — cell used by NSButton and matrix cells.
 */
class NSButtonCell
{
    public static function createText(string value = "") -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_buttoncell_create_text(Z_STRVAL(value));
        }%
        return handle;
    }

    public static function createImage(int image) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_buttoncell_create_image((uintptr_t) image);
        }%
        return handle;
    }

    public static function wrap(int nsButtonCellPtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_buttoncell_wrap((void *)(uintptr_t) nsButtonCellPtr);
        }%
        return handle;
    }

    public static function destroy(int cell) -> void
    {
        %{
            ns_buttoncell_destroy((uintptr_t) cell);
        }%
    }

    public static function nsButtonCell(int cell) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_buttoncell_nsbuttoncell((uintptr_t) cell);
        }%
        return ptr;
    }

    public static function setTitle(int cell, string title) -> void
    {
        %{
            ns_buttoncell_set_title((uintptr_t) cell, Z_STRVAL(title));
        }%
    }

    public static function getTitle(int cell) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\0';
            if (ns_buttoncell_get_title((uintptr_t) cell, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }

    public static function setState(int cell, int state) -> void
    {
        %{
            ns_buttoncell_set_state((uintptr_t) cell, (int) state);
        }%
    }

    public static function getState(int cell) -> int
    {
        int value;
        %{
            value = (zend_long) ns_buttoncell_get_state((uintptr_t) cell);
        }%
        return value;
    }

    public static function setEnabled(int cell, bool enabled) -> void
    {
        %{
            ns_buttoncell_set_enabled((uintptr_t) cell, enabled ? 1 : 0);
        }%
    }

    public static function isEnabled(int cell) -> bool
    {
        bool result;
        %{
            result = ns_buttoncell_is_enabled((uintptr_t) cell) == 1;
        }%
        return result;
    }

    public static function setTag(int cell, int tag) -> void
    {
        %{
            ns_buttoncell_set_tag((uintptr_t) cell, (int) tag);
        }%
    }

    public static function getTag(int cell) -> int
    {
        int value;
        %{
            value = (zend_long) ns_buttoncell_get_tag((uintptr_t) cell);
        }%
        return value;
    }

    public static function setBezelStyle(int cell, int style) -> void
    {
        %{
            ns_buttoncell_set_bezel_style((uintptr_t) cell, (int) style);
        }%
    }

    public static function getBezelStyle(int cell) -> int
    {
        int value;
        %{
            value = (zend_long) ns_buttoncell_get_bezel_style((uintptr_t) cell);
        }%
        return value;
    }

    public static function setButtonType(int cell, int type) -> void
    {
        %{
            ns_buttoncell_set_button_type((uintptr_t) cell, (int) type);
        }%
    }

    public static function setAlternateTitle(int cell, string title) -> void
    {
        %{
            ns_buttoncell_set_alternate_title((uintptr_t) cell, Z_STRVAL(title));
        }%
    }

    public static function getAlternateTitle(int cell) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\0';
            if (ns_buttoncell_get_alternate_title((uintptr_t) cell, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }

    public static function setKeyEquivalent(int cell, string key) -> void
    {
        %{
            ns_buttoncell_set_key_equivalent((uintptr_t) cell, Z_STRVAL(key));
        }%
    }

    public static function getKeyEquivalent(int cell) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\0';
            if (ns_buttoncell_get_key_equivalent((uintptr_t) cell, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }

    public static function setTransparent(int cell, bool flag) -> void
    {
        %{
            ns_buttoncell_set_transparent((uintptr_t) cell, flag ? 1 : 0);
        }%
    }

    public static function isTransparent(int cell) -> bool
    {
        bool result;
        %{
            result = ns_buttoncell_is_transparent((uintptr_t) cell) == 1;
        }%
        return result;
    }

    public static function setImageDimsWhenDisabled(int cell, bool flag) -> void
    {
        %{
            ns_buttoncell_set_image_dims_when_disabled((uintptr_t) cell, flag ? 1 : 0);
        }%
    }

    public static function imageDimsWhenDisabled(int cell) -> bool
    {
        bool result;
        %{
            result = ns_buttoncell_image_dims_when_disabled((uintptr_t) cell) == 1;
        }%
        return result;
    }

    public static function performClick(int cell) -> void
    {
        %{
            ns_buttoncell_perform_click((uintptr_t) cell);
        }%
    }
}
