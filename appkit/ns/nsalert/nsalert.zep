namespace AppKit\NS\NSAlert;

%{
#include "ns-alert.h"
#include <stdint.h>
}%

/**
 * NSAlert modal dialog.
 */
class NSAlert
{
    public static function create() -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_alert_create();
        }%
        return handle;
    }

    public static function destroy(int alert) -> void
    {
        %{
            ns_alert_destroy((uintptr_t) alert);
        }%
    }

    public static function setMessage(int alert, string text) -> void
    {
        %{
            ns_alert_set_message((uintptr_t) alert, Z_STRVAL(text));
        }%
    }

    public static function setInfo(int alert, string text) -> void
    {
        %{
            ns_alert_set_info((uintptr_t) alert, Z_STRVAL(text));
        }%
    }

    public static function addButton(int alert, string title) -> void
    {
        %{
            ns_alert_add_button((uintptr_t) alert, Z_STRVAL(title));
        }%
    }

    public static function runModal(int alert) -> int
    {
        int value;
        %{
            value = (zend_long) ns_alert_run_modal((uintptr_t) alert);
        }%
        return value;
    }

    /**
     * Sheet on window; poll response each frame (no nested run loop).
     */
    public static function beginSheet(int alert, int window) -> void
    {
        %{
            ns_alert_begin_sheet((uintptr_t) alert, (uintptr_t) window);
        }%
    }

    /**
     * One-shot NSModalResponse; 0 = none this frame.
     */
    public static function pollResponse(int alert) -> int
    {
        int value;
        %{
            value = (zend_long) ns_alert_poll_response((uintptr_t) alert);
        }%
        return value;
    }
}
