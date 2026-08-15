namespace AppKit\NS\NSGridRow;

%{
#include "ns-gridrow.h"
#include <stdint.h>
}%


/**
 * NSGridRow of an NSGridView.
 */
class NSGridRow
{
    public static function wrap(int nsGridRowPtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_gridrow_wrap((void *)(uintptr_t) nsGridRowPtr);
        }%
        return handle;
    }
    public static function destroy(int row) -> void
    {
        %{
            ns_gridrow_destroy((uintptr_t) row);
        }%
    }
    public static function nsGridRow(int row) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_gridrow_nsgridrow((uintptr_t) row);
        }%
        return ptr;
    }
    public static function numberOfCells(int row) -> int
    {
        int value;
        %{
            value = (zend_long) ns_gridrow_number_of_cells((uintptr_t) row);
        }%
        return value;
    }
    public static function cellAt(int row, int index) -> int
    {
        int value;
        %{
            value = (zend_long) ns_gridrow_cell_at((uintptr_t) row, (int) index);
        }%
        return value;
    }
    public static function setYPlacement(int row, int placement) -> void
    {
        %{
            ns_gridrow_set_y_placement((uintptr_t) row, (int) placement);
        }%
    }
    public static function getYPlacement(int row) -> int
    {
        int value;
        %{
            value = (zend_long) ns_gridrow_get_y_placement((uintptr_t) row);
        }%
        return value;
    }
    public static function setRowAlignment(int row, int alignment) -> void
    {
        %{
            ns_gridrow_set_row_alignment((uintptr_t) row, (int) alignment);
        }%
    }
    public static function getRowAlignment(int row) -> int
    {
        int value;
        %{
            value = (zend_long) ns_gridrow_get_row_alignment((uintptr_t) row);
        }%
        return value;
    }
    public static function setHeight(int row, double height) -> void
    {
        %{
            ns_gridrow_set_height((uintptr_t) row, height);
        }%
    }
    public static function getHeight(int row) -> double
    {
        double value;
        %{
            value = ns_gridrow_get_height((uintptr_t) row);
        }%
        return value;
    }
    public static function setTopPadding(int row, double padding) -> void
    {
        %{
            ns_gridrow_set_top_padding((uintptr_t) row, padding);
        }%
    }
    public static function getTopPadding(int row) -> double
    {
        double value;
        %{
            value = ns_gridrow_get_top_padding((uintptr_t) row);
        }%
        return value;
    }
    public static function setBottomPadding(int row, double padding) -> void
    {
        %{
            ns_gridrow_set_bottom_padding((uintptr_t) row, padding);
        }%
    }
    public static function getBottomPadding(int row) -> double
    {
        double value;
        %{
            value = ns_gridrow_get_bottom_padding((uintptr_t) row);
        }%
        return value;
    }
    public static function setHidden(int row, bool flag) -> void
    {
        %{
            ns_gridrow_set_hidden((uintptr_t) row, flag ? 1 : 0);
        }%
    }
    public static function isHidden(int row) -> bool
    {
        bool result;
        %{
            result = ns_gridrow_is_hidden((uintptr_t) row) == 1;
        }%
        return result;
    }
    public static function mergeCells(int row, int start, int length) -> void
    {
        %{
            ns_gridrow_merge_cells((uintptr_t) row, (int) start, (int) length);
        }%
    }
}
