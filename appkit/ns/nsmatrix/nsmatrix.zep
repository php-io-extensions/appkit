namespace AppKit\NS\NSMatrix;

%{
#include "ns-matrix.h"
#include <stdint.h>
}%


/**
 * Deprecated NSMatrix cell grid.
 */
class NSMatrix
{
    public static function create(int x, int y, int width, int height) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_matrix_create((double) x, (double) y, (double) width, (double) height);
        }%
        return handle;
    }
    public static function destroy(int matrix) -> void
    {
        %{
            ns_matrix_destroy((uintptr_t) matrix);
        }%
    }
    public static function setMode(int matrix, int mode) -> void
    {
        %{
            ns_matrix_set_mode((uintptr_t) matrix, (int) mode);
        }%
    }
    public static function getMode(int matrix) -> int
    {
        int value;
        %{
            value = (zend_long) ns_matrix_get_mode((uintptr_t) matrix);
        }%
        return value;
    }
    public static function numberOfRows(int matrix) -> int
    {
        int value;
        %{
            value = (zend_long) ns_matrix_number_of_rows((uintptr_t) matrix);
        }%
        return value;
    }
    public static function numberOfColumns(int matrix) -> int
    {
        int value;
        %{
            value = (zend_long) ns_matrix_number_of_columns((uintptr_t) matrix);
        }%
        return value;
    }
    public static function addRow(int matrix) -> void
    {
        %{
            ns_matrix_add_row((uintptr_t) matrix);
        }%
    }
    public static function addColumn(int matrix) -> void
    {
        %{
            ns_matrix_add_column((uintptr_t) matrix);
        }%
    }
    public static function selectedRow(int matrix) -> int
    {
        int value;
        %{
            value = (zend_long) ns_matrix_selected_row((uintptr_t) matrix);
        }%
        return value;
    }
    public static function selectedColumn(int matrix) -> int
    {
        int value;
        %{
            value = (zend_long) ns_matrix_selected_column((uintptr_t) matrix);
        }%
        return value;
    }
    public static function selectCellAt(int matrix, int row, int column) -> void
    {
        %{
            ns_matrix_select_cell_at((uintptr_t) matrix, (int) row, (int) column);
        }%
    }

    public static function cellAt(int matrix, int row, int column) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_matrix_cell_at((uintptr_t) matrix, (int) row, (int) column);
        }%
        return handle;
    }
}
