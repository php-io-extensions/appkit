namespace AppKit\NS\NSPrintPanel;

%{
#include "ns-printpanel.h"
#include <stdint.h>
}%

/**
 * NSPrintPanel — print job options panel.
 */
class NSPrintPanel
{
    public static function wrap(int nsPrintPanelPtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_printpanel_wrap((void *)(uintptr_t) nsPrintPanelPtr);
        }%
        return handle;
    }

    public static function destroy(int panel) -> void
    {
        %{
            ns_printpanel_destroy((uintptr_t) panel);
        }%
    }

    public static function nsPrintPanel(int panel) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_printpanel_nsprintpanel((uintptr_t) panel);
        }%
        return ptr;
    }

    public static function printPanel() -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_printpanel_print_panel();
        }%
        return handle;
    }

    public static function options(int panel) -> int
    {
        int value;
        %{
            value = (zend_long) ns_printpanel_options((uintptr_t) panel);
        }%
        return value;
    }

    public static function setOptions(int panel, int options) -> void
    {
        %{
            ns_printpanel_set_options((uintptr_t) panel, (unsigned) options);
        }%
    }

    public static function defaultButtonTitle(int panel) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\0';
            if (ns_printpanel_default_button_title((uintptr_t) panel, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }

    public static function setDefaultButtonTitle(int panel, string title = "") -> void
    {
        %{
            ns_printpanel_set_default_button_title((uintptr_t) panel, Z_STRVAL(title));
        }%
    }

    public static function helpAnchor(int panel) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\0';
            if (ns_printpanel_help_anchor((uintptr_t) panel, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }

    public static function setHelpAnchor(int panel, string anchor = "") -> void
    {
        %{
            ns_printpanel_set_help_anchor((uintptr_t) panel, Z_STRVAL(anchor));
        }%
    }

    public static function jobStyleHint(int panel) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\0';
            if (ns_printpanel_job_style_hint((uintptr_t) panel, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }

    public static function setJobStyleHint(int panel, string hint = "") -> void
    {
        %{
            ns_printpanel_set_job_style_hint((uintptr_t) panel, Z_STRVAL(hint));
        }%
    }

    /**
     * @return int NSModalResponse (NSOKButton / NSCancelButton)
     */
    public static function runModal(int panel) -> int
    {
        int value;
        %{
            value = (zend_long) ns_printpanel_run_modal((uintptr_t) panel);
        }%
        return value;
    }

    /**
     * @param printInfo Borrowed NSPrintInfo pointer, or 0 for sharedPrintInfo
     * @return int NSModalResponse (NSOKButton / NSCancelButton)
     */
    public static function runModalWithPrintInfo(int panel, int printInfo = 0) -> int
    {
        int value;
        %{
            value = (zend_long) ns_printpanel_run_modal_with_print_info(
                (uintptr_t) panel,
                (void *)(uintptr_t) printInfo
            );
        }%
        return value;
    }

    /**
     * @return int Borrowed NSPrintInfo pointer after modal, or 0
     */
    public static function printInfo(int panel) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_printpanel_print_info((uintptr_t) panel);
        }%
        return ptr;
    }

    public static function addAccessoryController(int panel, int controller) -> void
    {
        %{
            ns_printpanel_add_accessory_controller((uintptr_t) panel, (uintptr_t) controller);
        }%
    }

    public static function removeAccessoryController(int panel, int controller) -> void
    {
        %{
            ns_printpanel_remove_accessory_controller((uintptr_t) panel, (uintptr_t) controller);
        }%
    }

    public static function accessoryControllerCount(int panel) -> int
    {
        int value;
        %{
            value = (zend_long) ns_printpanel_accessory_controller_count((uintptr_t) panel);
        }%
        return value;
    }
}
