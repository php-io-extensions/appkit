namespace AppKit\NS\NSTableRowView;

%{
#include "ns-tablerowview.h"
#include <stdint.h>
}%


/**
 * NSTableRowView row chrome for NSTableView.
 */
class NSTableRowView
{
    public static function create(int x, int y, int width, int height) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_tablerowview_create((double) x, (double) y, (double) width, (double) height);
        }%
        return handle;
    }
    public static function wrap(int nsTableRowViewPtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_tablerowview_wrap((void *)(uintptr_t) nsTableRowViewPtr);
        }%
        return handle;
    }
    public static function destroy(int row) -> void
    {
        %{
            ns_tablerowview_destroy((uintptr_t) row);
        }%
    }
    public static function setEmphasized(int row, bool flag) -> void
    {
        %{
            ns_tablerowview_set_emphasized((uintptr_t) row, flag ? 1 : 0);
        }%
    }
    public static function isEmphasized(int row) -> bool
    {
        bool result;
        %{
            result = ns_tablerowview_is_emphasized((uintptr_t) row) == 1;
        }%
        return result;
    }
    public static function setSelected(int row, bool flag) -> void
    {
        %{
            ns_tablerowview_set_selected((uintptr_t) row, flag ? 1 : 0);
        }%
    }
    public static function isSelected(int row) -> bool
    {
        bool result;
        %{
            result = ns_tablerowview_is_selected((uintptr_t) row) == 1;
        }%
        return result;
    }
    public static function setGroupRowStyle(int row, bool flag) -> void
    {
        %{
            ns_tablerowview_set_group_row_style((uintptr_t) row, flag ? 1 : 0);
        }%
    }
    public static function isGroupRowStyle(int row) -> bool
    {
        bool result;
        %{
            result = ns_tablerowview_is_group_row_style((uintptr_t) row) == 1;
        }%
        return result;
    }
    public static function setFloating(int row, bool flag) -> void
    {
        %{
            ns_tablerowview_set_floating((uintptr_t) row, flag ? 1 : 0);
        }%
    }
    public static function isFloating(int row) -> bool
    {
        bool result;
        %{
            result = ns_tablerowview_is_floating((uintptr_t) row) == 1;
        }%
        return result;
    }
    public static function interiorBackgroundStyle(int row) -> int
    {
        int value;
        %{
            value = (zend_long) ns_tablerowview_interior_background_style((uintptr_t) row);
        }%
        return value;
    }
}
