namespace AppKit\NS\NSColorPanel;

%{
#include "ns-colorpanel.h"
#include <stdint.h>
}%

/**
 * NSColorPanel — shared system color picker panel.
 */
class NSColorPanel
{
    public static function shared() -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_colorpanel_shared();
        }%
        return handle;
    }

    public static function destroy(int panel) -> void
    {
        %{
            ns_colorpanel_destroy((uintptr_t) panel);
        }%
    }

    public static function sharedExists() -> bool
    {
        bool result;
        %{
            result = ns_colorpanel_shared_exists() == 1;
        }%
        return result;
    }

    public static function setPickerMask(int mask) -> void
    {
        %{
            ns_colorpanel_set_picker_mask((unsigned) mask);
        }%
    }

    public static function setPickerMode(int mode) -> void
    {
        %{
            ns_colorpanel_set_picker_mode((int) mode);
        }%
    }

    public static function orderFront() -> void
    {
        %{
            ns_colorpanel_order_front();
        }%
    }

    public static function mode(int panel) -> int
    {
        int value;
        %{
            value = (zend_long) ns_colorpanel_mode((uintptr_t) panel);
        }%
        return value;
    }

    public static function setMode(int panel, int mode) -> void
    {
        %{
            ns_colorpanel_set_mode((uintptr_t) panel, (int) mode);
        }%
    }

    public static function showsAlpha(int panel) -> bool
    {
        bool result;
        %{
            result = ns_colorpanel_shows_alpha((uintptr_t) panel) == 1;
        }%
        return result;
    }

    public static function setShowsAlpha(int panel, bool shows) -> void
    {
        %{
            ns_colorpanel_set_shows_alpha((uintptr_t) panel, shows ? 1 : 0);
        }%
    }

    public static function isContinuous(int panel) -> bool
    {
        bool result;
        %{
            result = ns_colorpanel_is_continuous((uintptr_t) panel) == 1;
        }%
        return result;
    }

    public static function setContinuous(int panel, bool continuous) -> void
    {
        %{
            ns_colorpanel_set_continuous((uintptr_t) panel, continuous ? 1 : 0);
        }%
    }

    public static function setColorRgba(int panel, int r, int g, int b, int a = 255) -> bool
    {
        bool result;
        %{
            result = ns_colorpanel_set_color_rgba((uintptr_t) panel, (int) r, (int) g, (int) b, (int) a) == 1;
        }%
        return result;
    }

    /**
     * @return array [r, g, b, a] byte components or empty array
     */
    public static function getColorRgba(int panel) -> array
    {
        array out = [];
        %{
            int r = 0, g = 0, b = 0, a = 0;
            if (ns_colorpanel_get_color_rgba((uintptr_t) panel, &r, &g, &b, &a)) {
                add_next_index_long(&out, r);
                add_next_index_long(&out, g);
                add_next_index_long(&out, b);
                add_next_index_long(&out, a);
            }
        }%
        return out;
    }

    public static function alpha(int panel) -> double
    {
        double value;
        %{
            value = ns_colorpanel_alpha((uintptr_t) panel);
        }%
        return value;
    }

    public static function attachColorList(int panel, int list) -> void
    {
        %{
            ns_colorpanel_attach_color_list((uintptr_t) panel, (uintptr_t) list);
        }%
    }

    public static function detachColorList(int panel, int list) -> void
    {
        %{
            ns_colorpanel_detach_color_list((uintptr_t) panel, (uintptr_t) list);
        }%
    }

    public static function nsColorPanel(int panel) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_colorpanel_nscolorpanel((uintptr_t) panel);
        }%
        return ptr;
    }
}
