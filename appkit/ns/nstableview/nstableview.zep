namespace AppKit\NS\NSTableView;

%{
#include "ns-tableview.h"
#include <stdint.h>
}%

/**
 * NSTableView single-column list table.
 */
class NSTableView
{
    public static function create(int x, int y, int width, int height) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_tableview_create((double) x, (double) y, (double) width, (double) height);
        }%
        return handle;
    }

    public static function destroy(int table) -> void
    {
        %{
            ns_tableview_destroy((uintptr_t) table);
        }%
    }

    public static function clearRows(int table) -> void
    {
        %{
            ns_tableview_clear_rows((uintptr_t) table);
        }%
    }

    public static function addRow(int table, string value) -> void
    {
        %{
            ns_tableview_add_row((uintptr_t) table, Z_STRVAL(value));
        }%
    }

    public static function rowCount(int table) -> int
    {
        int value;
        %{
            value = (zend_long) ns_tableview_row_count((uintptr_t) table);
        }%
        return value;
    }

    public static function getSelected(int table) -> int
    {
        int value;
        %{
            value = (zend_long) ns_tableview_get_selected((uintptr_t) table);
        }%
        return value;
    }

    public static function setSelected(int table, int row) -> void
    {
        %{
            ns_tableview_set_selected((uintptr_t) table, (int) row);
        }%
    }

    public static function pollChange(int table) -> bool
    {
        bool result;
        %{
            result = ns_tableview_poll_change((uintptr_t) table) == 1;
        }%
        return result;
    }
}
