namespace AppKit\NS\NSGridView;

%{
#include "ns-gridview.h"
#include <stdint.h>
}%

/**
 * NSGridView grid layout container.
 */
class NSGridView
{
    public static function create(int x, int y, int width, int height) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_gridview_create((double) x, (double) y, (double) width, (double) height);
        }%
        return handle;
    }

    public static function destroy(int grid) -> void
    {
        %{
            ns_gridview_destroy((uintptr_t) grid);
        }%
    }

    public static function addView(int grid, int child, int row, int column) -> void
    {
        %{
            ns_gridview_add_view((uintptr_t) grid, (uintptr_t) child, (int) row, (int) column);
        }%
    }

    public static function setRowSpacing(int grid, double spacing) -> void
    {
        %{
            ns_gridview_set_row_spacing((uintptr_t) grid, spacing);
        }%
    }

    public static function setColumnSpacing(int grid, double spacing) -> void
    {
        %{
            ns_gridview_set_column_spacing((uintptr_t) grid, spacing);
        }%
    }

    public static function numberOfRows(int grid) -> int
    {
        int value;
        %{
            value = (zend_long) ns_gridview_number_of_rows((uintptr_t) grid);
        }%
        return value;
    }

    public static function numberOfColumns(int grid) -> int
    {
        int value;
        %{
            value = (zend_long) ns_gridview_number_of_columns((uintptr_t) grid);
        }%
        return value;
    }

    public static function rowAt(int grid, int index) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_gridview_row_at((uintptr_t) grid, (int) index);
        }%
        return handle;
    }

    public static function columnAt(int grid, int index) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_gridview_column_at((uintptr_t) grid, (int) index);
        }%
        return handle;
    }

    public static function cellAt(int grid, int column, int row) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_gridview_cell_at((uintptr_t) grid, (int) column, (int) row);
        }%
        return handle;
    }

    public static function sizeForContent() -> double
    {
        double value;
        %{
            value = ns_gridview_size_for_content();
        }%
        return value;
    }
}
