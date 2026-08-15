namespace AppKit\NS\NSTableHeaderView;

%{
#include "ns-tableheaderview.h"
#include <stdint.h>
}%


/**
 * NSTableHeaderView for NSTableView.
 */
class NSTableHeaderView
{
    public static function create(int x, int y, int width, int height) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_tableheaderview_create((double) x, (double) y, (double) width, (double) height);
        }%
        return handle;
    }
    public static function wrap(int nsTableHeaderViewPtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_tableheaderview_wrap((void *)(uintptr_t) nsTableHeaderViewPtr);
        }%
        return handle;
    }
    public static function destroy(int header) -> void
    {
        %{
            ns_tableheaderview_destroy((uintptr_t) header);
        }%
    }
    public static function setTableView(int header, int table) -> void
    {
        %{
            ns_tableheaderview_set_table_view((uintptr_t) header, (uintptr_t) table);
        }%
    }
    public static function tableView(int header) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_tableheaderview_table_view((uintptr_t) header);
        }%
        return handle;
    }
    public static function headerHeight(int header) -> double
    {
        double value;
        %{
            value = ns_tableheaderview_header_height((uintptr_t) header);
        }%
        return value;
    }
}
