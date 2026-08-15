namespace AppKit\NS\NSPanel;

%{
#include "ns-panel.h"
#include <stdint.h>
}%

/**
 * NSPanel — floating utility panel subclass of NSWindow.
 */
class NSPanel
{
    /**
     * @return int Opaque panel handle, or 0 on failure
     */
    public static function create(string title, int width, int height) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_panel_create(Z_STRVAL(title), (int) width, (int) height);
        }%
        return handle;
    }

    public static function destroy(int panel) -> void
    {
        %{
            ns_panel_destroy((uintptr_t) panel);
        }%
    }

    public static function setTitle(int panel, string title) -> void
    {
        %{
            ns_panel_set_title((uintptr_t) panel, Z_STRVAL(title));
        }%
    }

    public static function show(int panel) -> void
    {
        %{
            ns_panel_show((uintptr_t) panel);
        }%
    }

    public static function hide(int panel) -> void
    {
        %{
            ns_panel_hide((uintptr_t) panel);
        }%
    }

    public static function center(int panel) -> void
    {
        %{
            ns_panel_center((uintptr_t) panel);
        }%
    }

    public static function shouldClose(int panel) -> bool
    {
        bool result;
        %{
            result = ns_panel_should_close((uintptr_t) panel) == 1;
        }%
        return result;
    }

    public static function getWidth(int panel) -> int
    {
        int value;
        %{
            value = (zend_long) ns_panel_get_width((uintptr_t) panel);
        }%
        return value;
    }

    public static function getHeight(int panel) -> int
    {
        int value;
        %{
            value = (zend_long) ns_panel_get_height((uintptr_t) panel);
        }%
        return value;
    }

    /**
     * @return int Opaque NSView handle for contentView, or 0
     */
    public static function contentView(int panel) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_panel_content_view((uintptr_t) panel);
        }%
        return handle;
    }

    public static function setContentView(int panel, int view) -> bool
    {
        bool result;
        %{
            result = ns_panel_set_content_view((uintptr_t) panel, (uintptr_t) view) == 1;
        }%
        return result;
    }

    public static function makeFirstResponder(int panel, int view) -> bool
    {
        bool result;
        %{
            result = ns_panel_make_first_responder((uintptr_t) panel, (uintptr_t) view) == 1;
        }%
        return result;
    }

    /**
     * @return array [x, y] on success, or empty array on failure
     */
    public static function screenToContent(int panel, float screenX, float screenY) -> array
    {
        %{
            double out_x = 0.0;
            double out_y = 0.0;
            zval point;
            array_init(&point);
            if (ns_panel_screen_to_content((uintptr_t) panel, (double) screenX, (double) screenY, &out_x, &out_y)) {
                add_next_index_double(&point, out_x);
                add_next_index_double(&point, out_y);
            }
            RETURN_ZVAL(&point, 0, 0);
        }%
        return [];
    }

    public static function setFloatingPanel(int panel, bool floating) -> void
    {
        %{
            ns_panel_set_floating_panel((uintptr_t) panel, floating ? 1 : 0);
        }%
    }

    public static function isFloatingPanel(int panel) -> bool
    {
        bool result;
        %{
            result = ns_panel_is_floating_panel((uintptr_t) panel) == 1;
        }%
        return result;
    }

    public static function setBecomesKeyOnlyIfNeeded(int panel, bool flag) -> void
    {
        %{
            ns_panel_set_becomes_key_only_if_needed((uintptr_t) panel, flag ? 1 : 0);
        }%
    }

    public static function becomesKeyOnlyIfNeeded(int panel) -> bool
    {
        bool result;
        %{
            result = ns_panel_becomes_key_only_if_needed((uintptr_t) panel) == 1;
        }%
        return result;
    }

    public static function setWorksWhenModal(int panel, bool flag) -> void
    {
        %{
            ns_panel_set_works_when_modal((uintptr_t) panel, flag ? 1 : 0);
        }%
    }

    public static function worksWhenModal(int panel) -> bool
    {
        bool result;
        %{
            result = ns_panel_works_when_modal((uintptr_t) panel) == 1;
        }%
        return result;
    }

    /**
     * @return int Borrowed NSPanel pointer, or 0
     */
    public static function nsPanel(int panel) -> int
    {
        int handle;
        %{
            handle = (zend_long)(uintptr_t) ns_panel_nspanel((uintptr_t) panel);
        }%
        return handle;
    }
}
