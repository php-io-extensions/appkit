namespace AppKit\NS\NSButton;

%{
#include "ns-button.h"
#include <stdint.h>
}%

/**
 * NSButton push, checkbox (NSButtonTypeSwitch), and radio (NSButtonTypeRadio).
 * Handle is a view box — use NSView::addSubview to place it.
 */
class NSButton
{
    /**
     * @return int Opaque button/view handle, or 0 on failure
     */
    public static function create(int x, int y, int width, int height, string title) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_button_create(
                (double) x,
                (double) y,
                (double) width,
                (double) height,
                Z_STRVAL(title)
            );
        }%
        return handle;
    }

    /** NSButtonTypeSwitch checkbox. */
    public static function createCheckbox(int x, int y, int width, int height, string title) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_button_create_checkbox(
                (double) x,
                (double) y,
                (double) width,
                (double) height,
                Z_STRVAL(title)
            );
        }%
        return handle;
    }

    /** NSButtonTypeRadio. */
    public static function createRadio(int x, int y, int width, int height, string title) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_button_create_radio(
                (double) x,
                (double) y,
                (double) width,
                (double) height,
                Z_STRVAL(title)
            );
        }%
        return handle;
    }

    public static function destroy(int button) -> void
    {
        %{
            ns_button_destroy((uintptr_t) button);
        }%
    }

    public static function setTitle(int button, string title) -> void
    {
        %{
            ns_button_set_title((uintptr_t) button, Z_STRVAL(title));
        }%
    }

    public static function setChecked(int button, bool checked) -> void
    {
        %{
            ns_button_set_checked((uintptr_t) button, checked ? 1 : 0);
        }%
    }

    public static function isChecked(int button) -> bool
    {
        bool result;
        %{
            result = ns_button_is_checked((uintptr_t) button) == 1;
        }%
        return result;
    }

    public static function setSelected(int button, bool selected) -> void
    {
        %{
            ns_button_set_selected((uintptr_t) button, selected ? 1 : 0);
        }%
    }

    public static function isSelected(int button) -> bool
    {
        bool result;
        %{
            result = ns_button_is_selected((uintptr_t) button) == 1;
        }%
        return result;
    }

    /**
     * One-shot. True if clicked since the last poll.
     */
    public static function pollClick(int button) -> bool
    {
        bool result;
        %{
            result = ns_button_poll_click((uintptr_t) button) == 1;
        }%
        return result;
    }
}
