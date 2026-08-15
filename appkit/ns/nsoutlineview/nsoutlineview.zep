namespace AppKit\NS\NSOutlineView;

%{
#include "ns-outlineview.h"
#include <stdint.h>
}%

/**
 * NSOutlineView hierarchical list.
 */
class NSOutlineView
{
    public static function create(int x, int y, int width, int height) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_outlineview_create((double) x, (double) y, (double) width, (double) height);
        }%
        return handle;
    }

    public static function destroy(int outline) -> void
    {
        %{
            ns_outlineview_destroy((uintptr_t) outline);
        }%
    }

    public static function clear(int outline) -> void
    {
        %{
            ns_outlineview_clear((uintptr_t) outline);
        }%
    }

    public static function addRoot(int outline, string title) -> int
    {
        int value;
        %{
            value = (zend_long) ns_outlineview_add_root((uintptr_t) outline, Z_STRVAL(title));
        }%
        return value;
    }

    public static function addChild(int outline, int parentId, string title) -> int
    {
        int value;
        %{
            value = (zend_long) ns_outlineview_add_child((uintptr_t) outline, (int) parentId, Z_STRVAL(title));
        }%
        return value;
    }

    public static function itemCount(int outline) -> int
    {
        int value;
        %{
            value = (zend_long) ns_outlineview_item_count((uintptr_t) outline);
        }%
        return value;
    }

    public static function getSelected(int outline) -> int
    {
        int value;
        %{
            value = (zend_long) ns_outlineview_get_selected((uintptr_t) outline);
        }%
        return value;
    }

    public static function setSelected(int outline, int itemId) -> void
    {
        %{
            ns_outlineview_set_selected((uintptr_t) outline, (int) itemId);
        }%
    }

    public static function pollChange(int outline) -> bool
    {
        bool result;
        %{
            result = ns_outlineview_poll_change((uintptr_t) outline) == 1;
        }%
        return result;
    }
}
