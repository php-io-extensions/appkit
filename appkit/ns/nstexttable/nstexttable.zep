namespace AppKit\NS\NSTextTable;

%{
#include "ns-texttable.h"
#include <stdint.h>
}%


/**
 * NSTextTable — table block for attributed text.
 */
class NSTextTable
{
    public static function create() -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_texttable_create();
        }%
        return handle;
    }

    public static function wrap(int nsTextTablePtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_texttable_wrap((void *)(uintptr_t) nsTextTablePtr);
        }%
        return handle;
    }

    public static function destroy(int table) -> void
    {
        %{
            ns_texttable_destroy((uintptr_t) table);
        }%
    }

    public static function setNumberOfColumns(int table, int columns) -> void
    {
        %{
            ns_texttable_set_number_of_columns((uintptr_t) table, (int) columns);
        }%
    }

    public static function getNumberOfColumns(int table) -> int
    {
        int value;
        %{
            value = (zend_long) ns_texttable_get_number_of_columns((uintptr_t) table);
        }%
        return value;
    }

    public static function setLayoutAlgorithm(int table, int algorithm) -> void
    {
        %{
            ns_texttable_set_layout_algorithm((uintptr_t) table, (int) algorithm);
        }%
    }

    public static function getLayoutAlgorithm(int table) -> int
    {
        int value;
        %{
            value = (zend_long) ns_texttable_get_layout_algorithm((uintptr_t) table);
        }%
        return value;
    }

    public static function setCollapsesBorders(int table, bool flag) -> void
    {
        %{
            ns_texttable_set_collapses_borders((uintptr_t) table, flag ? 1 : 0);
        }%
    }

    public static function collapsesBorders(int table) -> bool
    {
        bool result;
        %{
            result = ns_texttable_collapses_borders((uintptr_t) table) == 1;
        }%
        return result;
    }

    public static function setHidesEmptyCells(int table, bool flag) -> void
    {
        %{
            ns_texttable_set_hides_empty_cells((uintptr_t) table, flag ? 1 : 0);
        }%
    }

    public static function hidesEmptyCells(int table) -> bool
    {
        bool result;
        %{
            result = ns_texttable_hides_empty_cells((uintptr_t) table) == 1;
        }%
        return result;
    }

    public static function setContentWidth(int table, float width, int type) -> void
    {
        %{
            ns_texttable_set_content_width((uintptr_t) table, (double) width, (int) type);
        }%
    }

    /**
     * @return array [width, type]
     */
    public static function getContentWidth(int table) -> array
    {
        array out = [];
        %{
            double width = 0.0;
            int type = 0;
            ns_texttable_get_content_width((uintptr_t) table, &width, &type);
            add_next_index_double(&out, width);
            add_next_index_long(&out, type);
        }%
        return out;
    }

    public static function setVerticalAlignment(int table, int alignment) -> void
    {
        %{
            ns_texttable_set_vertical_alignment((uintptr_t) table, (int) alignment);
        }%
    }

    public static function getVerticalAlignment(int table) -> int
    {
        int value;
        %{
            value = (zend_long) ns_texttable_get_vertical_alignment((uintptr_t) table);
        }%
        return value;
    }
}
