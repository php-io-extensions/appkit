namespace AppKit\NS\NSFontPanel;

%{
#include "ns-fontpanel.h"
#include <stdint.h>
}%

/**
 * NSFontPanel — shared system font picker panel.
 */
class NSFontPanel
{
    public static function wrap(int nsFontPanelPtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_fontpanel_wrap((void *)(uintptr_t) nsFontPanelPtr);
        }%
        return handle;
    }

    public static function shared() -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_fontpanel_shared();
        }%
        return handle;
    }

    public static function destroy(int panel) -> void
    {
        %{
            ns_fontpanel_destroy((uintptr_t) panel);
        }%
    }

    public static function sharedExists() -> bool
    {
        bool result;
        %{
            result = ns_fontpanel_shared_exists() == 1;
        }%
        return result;
    }

    public static function setPanelFont(int panel, int font, bool isMultiple = false) -> void
    {
        %{
            ns_fontpanel_set_panel_font((uintptr_t) panel, (uintptr_t) font, isMultiple ? 1 : 0);
        }%
    }

    public static function panelConvertFont(int panel, int font) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_fontpanel_panel_convert_font((uintptr_t) panel, (uintptr_t) font);
        }%
        return handle;
    }

    public static function worksWhenModal(int panel) -> bool
    {
        bool result;
        %{
            result = ns_fontpanel_works_when_modal((uintptr_t) panel) == 1;
        }%
        return result;
    }

    public static function setWorksWhenModal(int panel, bool works) -> void
    {
        %{
            ns_fontpanel_set_works_when_modal((uintptr_t) panel, works ? 1 : 0);
        }%
    }

    public static function isEnabled(int panel) -> bool
    {
        bool result;
        %{
            result = ns_fontpanel_is_enabled((uintptr_t) panel) == 1;
        }%
        return result;
    }

    public static function setEnabled(int panel, bool enabled) -> void
    {
        %{
            ns_fontpanel_set_enabled((uintptr_t) panel, enabled ? 1 : 0);
        }%
    }

    public static function reloadDefaultFontFamilies(int panel) -> void
    {
        %{
            ns_fontpanel_reload_default_font_families((uintptr_t) panel);
        }%
    }

    public static function orderFront(int panel) -> void
    {
        %{
            ns_fontpanel_order_front((uintptr_t) panel);
        }%
    }

    public static function nsFontPanel(int panel) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_fontpanel_nsfontpanel((uintptr_t) panel);
        }%
        return ptr;
    }
}
