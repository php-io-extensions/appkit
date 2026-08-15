namespace AppKit\NS\NSGridColumn;

%{
#include "ns-gridcolumn.h"
#include <stdint.h>
}%


/**
 * NSGridColumn of an NSGridView.
 */
class NSGridColumn
{
    public static function wrap(int nsGridColumnPtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_gridcolumn_wrap((void *)(uintptr_t) nsGridColumnPtr);
        }%
        return handle;
    }
    public static function destroy(int column) -> void
    {
        %{
            ns_gridcolumn_destroy((uintptr_t) column);
        }%
    }
    public static function nsGridColumn(int column) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_gridcolumn_nsgridcolumn((uintptr_t) column);
        }%
        return ptr;
    }
    public static function numberOfCells(int column) -> int
    {
        int value;
        %{
            value = (zend_long) ns_gridcolumn_number_of_cells((uintptr_t) column);
        }%
        return value;
    }
    public static function cellAt(int column, int index) -> int
    {
        int value;
        %{
            value = (zend_long) ns_gridcolumn_cell_at((uintptr_t) column, (int) index);
        }%
        return value;
    }
    public static function setXPlacement(int column, int placement) -> void
    {
        %{
            ns_gridcolumn_set_x_placement((uintptr_t) column, (int) placement);
        }%
    }
    public static function getXPlacement(int column) -> int
    {
        int value;
        %{
            value = (zend_long) ns_gridcolumn_get_x_placement((uintptr_t) column);
        }%
        return value;
    }
    public static function setWidth(int column, double width) -> void
    {
        %{
            ns_gridcolumn_set_width((uintptr_t) column, width);
        }%
    }
    public static function getWidth(int column) -> double
    {
        double value;
        %{
            value = ns_gridcolumn_get_width((uintptr_t) column);
        }%
        return value;
    }
    public static function setLeadingPadding(int column, double padding) -> void
    {
        %{
            ns_gridcolumn_set_leading_padding((uintptr_t) column, padding);
        }%
    }
    public static function getLeadingPadding(int column) -> double
    {
        double value;
        %{
            value = ns_gridcolumn_get_leading_padding((uintptr_t) column);
        }%
        return value;
    }
    public static function setTrailingPadding(int column, double padding) -> void
    {
        %{
            ns_gridcolumn_set_trailing_padding((uintptr_t) column, padding);
        }%
    }
    public static function getTrailingPadding(int column) -> double
    {
        double value;
        %{
            value = ns_gridcolumn_get_trailing_padding((uintptr_t) column);
        }%
        return value;
    }
    public static function setHidden(int column, bool flag) -> void
    {
        %{
            ns_gridcolumn_set_hidden((uintptr_t) column, flag ? 1 : 0);
        }%
    }
    public static function isHidden(int column) -> bool
    {
        bool result;
        %{
            result = ns_gridcolumn_is_hidden((uintptr_t) column) == 1;
        }%
        return result;
    }
    public static function mergeCells(int column, int start, int length) -> void
    {
        %{
            ns_gridcolumn_merge_cells((uintptr_t) column, (int) start, (int) length);
        }%
    }
}
