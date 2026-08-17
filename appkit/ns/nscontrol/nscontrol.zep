namespace AppKit\NS\NSControl;

%{
#include "ns-control.h"
#include <stdint.h>
}%

/**
 * NSControl — shared control API for any NSControl subclass view-box handle
 * (NSButton, NSTextField, NSSlider, etc.).
 */
class NSControl
{
    public static function setEnabled(int control, bool enabled) -> void
    {
        %{
            ns_control_set_enabled((uintptr_t) control, enabled ? 1 : 0);
        }%
    }

    public static function isEnabled(int control) -> bool
    {
        bool result;
        %{
            result = ns_control_is_enabled((uintptr_t) control) == 1;
        }%
        return result;
    }

    public static function setStringValue(int control, string value) -> void
    {
        %{
            ns_control_set_string((uintptr_t) control, Z_STRVAL(value));
        }%
    }

    public static function getStringValue(int control) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\0';
            if (ns_control_get_string((uintptr_t) control, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }

    public static function setIntValue(int control, int value) -> void
    {
        %{
            ns_control_set_int_value((uintptr_t) control, (int) value);
        }%
    }

    public static function getIntValue(int control) -> int
    {
        int value;
        %{
            value = (zend_long) ns_control_get_int_value((uintptr_t) control);
        }%
        return value;
    }

    public static function setTag(int control, int tag) -> void
    {
        %{
            ns_control_set_tag((uintptr_t) control, (int) tag);
        }%
    }

    public static function getTag(int control) -> int
    {
        int value;
        %{
            value = (zend_long) ns_control_get_tag((uintptr_t) control);
        }%
        return value;
    }

    public static function performClick(int control) -> void
    {
        %{
            ns_control_perform_click((uintptr_t) control);
        }%
    }

    public static function setContinuous(int control, bool continuous) -> void
    {
        %{
            ns_control_set_continuous((uintptr_t) control, continuous ? 1 : 0);
        }%
    }

    public static function isContinuous(int control) -> bool
    {
        bool result;
        %{
            result = ns_control_is_continuous((uintptr_t) control) == 1;
        }%
        return result;
    }

    /**
     * NSControlStateValue: -1 mixed, 0 off, 1 on.
     */
    public static function setState(int control, int state) -> void
    {
        %{
            ns_control_set_state((uintptr_t) control, (int) state);
        }%
    }

    public static function getState(int control) -> int
    {
        int value;
        %{
            value = (zend_long) ns_control_get_state((uintptr_t) control);
        }%
        return value;
    }

    /**
     * NSControlSize: 0 regular, 1 small, 2 mini, 3 large.
     */
    public static function setControlSize(int control, int size) -> void
    {
        %{
            ns_control_set_control_size((uintptr_t) control, (int) size);
        }%
    }

    public static function getControlSize(int control) -> int
    {
        int value;
        %{
            value = (zend_long) ns_control_get_control_size((uintptr_t) control);
        }%
        return value;
    }

    /**
     * NSTextAlignment ABI ints. Current macOS (`TARGET_ABI_USES_IOS_VALUES`): 0 left, 1 center, 2 right, 3 justified, 4 natural.
     */
    public static function setAlignment(int control, int alignment) -> void
    {
        %{
            ns_control_set_alignment((uintptr_t) control, (int) alignment);
        }%
    }

    /**
     * `font` is an NSFont handle from NSFont::* factories.
     */
    public static function setFont(int control, int font) -> void
    {
        %{
            ns_control_set_font((uintptr_t) control, (uintptr_t) font);
        }%
    }
}
