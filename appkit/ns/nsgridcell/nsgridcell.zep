namespace AppKit\NS\NSGridCell;

%{
#include "ns-gridcell.h"
#include <stdint.h>
}%


/**
 * NSGridCell of an NSGridView.
 */
class NSGridCell
{
    public static function wrap(int nsGridCellPtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_gridcell_wrap((void *)(uintptr_t) nsGridCellPtr);
        }%
        return handle;
    }
    public static function destroy(int cell) -> void
    {
        %{
            ns_gridcell_destroy((uintptr_t) cell);
        }%
    }
    public static function nsGridCell(int cell) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_gridcell_nsgridcell((uintptr_t) cell);
        }%
        return ptr;
    }
    public static function setContentView(int cell, int view) -> void
    {
        %{
            ns_gridcell_set_content_view((uintptr_t) cell, (uintptr_t) view);
        }%
    }
    public static function contentView(int cell) -> int
    {
        int value;
        %{
            value = (zend_long) ns_gridcell_content_view((uintptr_t) cell);
        }%
        return value;
    }
    public static function row(int cell) -> int
    {
        int value;
        %{
            value = (zend_long) ns_gridcell_row((uintptr_t) cell);
        }%
        return value;
    }
    public static function column(int cell) -> int
    {
        int value;
        %{
            value = (zend_long) ns_gridcell_column((uintptr_t) cell);
        }%
        return value;
    }
    public static function setXPlacement(int cell, int placement) -> void
    {
        %{
            ns_gridcell_set_x_placement((uintptr_t) cell, (int) placement);
        }%
    }
    public static function getXPlacement(int cell) -> int
    {
        int value;
        %{
            value = (zend_long) ns_gridcell_get_x_placement((uintptr_t) cell);
        }%
        return value;
    }
    public static function setYPlacement(int cell, int placement) -> void
    {
        %{
            ns_gridcell_set_y_placement((uintptr_t) cell, (int) placement);
        }%
    }
    public static function getYPlacement(int cell) -> int
    {
        int value;
        %{
            value = (zend_long) ns_gridcell_get_y_placement((uintptr_t) cell);
        }%
        return value;
    }
    public static function setRowAlignment(int cell, int alignment) -> void
    {
        %{
            ns_gridcell_set_row_alignment((uintptr_t) cell, (int) alignment);
        }%
    }
    public static function getRowAlignment(int cell) -> int
    {
        int value;
        %{
            value = (zend_long) ns_gridcell_get_row_alignment((uintptr_t) cell);
        }%
        return value;
    }
}
