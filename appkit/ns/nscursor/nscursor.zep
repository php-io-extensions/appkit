namespace AppKit\NS\NSCursor;

%{
#include "ns-cursor.h"
#include <stdint.h>
}%

/**
 * NSCursor — mouse cursor display and system cursor instances.
 */
class NSCursor
{
    /**
     * @return int Opaque cursor handle, or 0
     */
    public static function wrap(int nsCursorPtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_cursor_wrap((void *)(uintptr_t) nsCursorPtr);
        }%
        return handle;
    }

    public static function destroy(int cursor) -> void
    {
        %{
            ns_cursor_destroy((uintptr_t) cursor);
        }%
    }

    public static function hide() -> void
    {
        %{
            ns_cursor_hide();
        }%
    }

    public static function unhide() -> void
    {
        %{
            ns_cursor_unhide();
        }%
    }

    public static function setHiddenUntilMouseMoves(bool flag) -> void
    {
        %{
            ns_cursor_set_hidden_until_mouse_moves(flag ? 1 : 0);
        }%
    }

    public static function popStack() -> void
    {
        %{
            ns_cursor_pop_class();
        }%
    }

    public static function push(int cursor) -> void
    {
        %{
            ns_cursor_push((uintptr_t) cursor);
        }%
    }

    public static function set(int cursor) -> void
    {
        %{
            ns_cursor_set((uintptr_t) cursor);
        }%
    }

    public static function pop(int cursor) -> void
    {
        %{
            ns_cursor_pop((uintptr_t) cursor);
        }%
    }

    /**
     * Hot spot as [x, y], or empty array.
     */
    public static function hotSpot(int cursor) -> array
    {
        array out = [];
        %{
            double x = 0.0, y = 0.0;
            if (ns_cursor_hot_spot((uintptr_t) cursor, &x, &y)) {
                add_next_index_double(&out, x);
                add_next_index_double(&out, y);
            }
        }%
        return out;
    }

    /**
     * @return int Opaque current cursor handle, or 0
     */
    public static function currentCursor() -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_cursor_current();
        }%
        return handle;
    }

    public static function arrowCursor() -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_cursor_arrow();
        }%
        return handle;
    }

    public static function crosshairCursor() -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_cursor_crosshair();
        }%
        return handle;
    }

    public static function pointingHandCursor() -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_cursor_pointing_hand();
        }%
        return handle;
    }

    public static function iBeamCursor() -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_cursor_i_beam();
        }%
        return handle;
    }

    public static function closedHandCursor() -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_cursor_closed_hand();
        }%
        return handle;
    }

    public static function openHandCursor() -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_cursor_open_hand();
        }%
        return handle;
    }

    public static function operationNotAllowedCursor() -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_cursor_operation_not_allowed();
        }%
        return handle;
    }

    public static function dragLinkCursor() -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_cursor_drag_link();
        }%
        return handle;
    }

    public static function dragCopyCursor() -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_cursor_drag_copy();
        }%
        return handle;
    }

    public static function contextualMenuCursor() -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_cursor_contextual_menu();
        }%
        return handle;
    }

    /**
     * @return int Borrowed NSCursor pointer, or 0
     */
    public static function nsCursor(int cursor) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_cursor_nscursor((uintptr_t) cursor);
        }%
        return ptr;
    }
}
