namespace AppKit\NS\NSTableColumn;

%{
#include "ns-tablecolumn.h"
#include <stdint.h>
}%


/**
 * NSTableColumn for NSTableView.
 */
class NSTableColumn
{
    public static function create(string value = "") -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_tablecolumn_create(Z_STRVAL(value));
        }%
        return handle;
    }
    public static function wrap(int nsTableColumnPtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_tablecolumn_wrap((void *)(uintptr_t) nsTableColumnPtr);
        }%
        return handle;
    }
    public static function destroy(int column) -> void
    {
        %{
            ns_tablecolumn_destroy((uintptr_t) column);
        }%
    }
    public static function nsTableColumn(int column) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_tablecolumn_nstablecolumn((uintptr_t) column);
        }%
        return ptr;
    }
    public static function setIdentifier(int column, string identifier) -> void
    {
        %{
            ns_tablecolumn_set_identifier((uintptr_t) column, Z_STRVAL(identifier));
        }%
    }
    public static function getIdentifier(int column) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\0';
            if (ns_tablecolumn_get_identifier((uintptr_t) column, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }
    public static function setTitle(int column, string title) -> void
    {
        %{
            ns_tablecolumn_set_title((uintptr_t) column, Z_STRVAL(title));
        }%
    }
    public static function getTitle(int column) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\0';
            if (ns_tablecolumn_get_title((uintptr_t) column, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }
    public static function setWidth(int column, double width) -> void
    {
        %{
            ns_tablecolumn_set_width((uintptr_t) column, (double) width);
        }%
    }
    public static function getWidth(int column) -> double
    {
        double value;
        %{
            value = ns_tablecolumn_get_width((uintptr_t) column);
        }%
        return value;
    }
    public static function setMinWidth(int column, double width) -> void
    {
        %{
            ns_tablecolumn_set_min_width((uintptr_t) column, (double) width);
        }%
    }
    public static function getMinWidth(int column) -> double
    {
        double value;
        %{
            value = ns_tablecolumn_get_min_width((uintptr_t) column);
        }%
        return value;
    }
    public static function setMaxWidth(int column, double width) -> void
    {
        %{
            ns_tablecolumn_set_max_width((uintptr_t) column, (double) width);
        }%
    }
    public static function getMaxWidth(int column) -> double
    {
        double value;
        %{
            value = ns_tablecolumn_get_max_width((uintptr_t) column);
        }%
        return value;
    }
    public static function setHidden(int column, bool flag) -> void
    {
        %{
            ns_tablecolumn_set_hidden((uintptr_t) column, flag ? 1 : 0);
        }%
    }
    public static function isHidden(int column) -> bool
    {
        bool result;
        %{
            result = ns_tablecolumn_is_hidden((uintptr_t) column) == 1;
        }%
        return result;
    }
    public static function setEditable(int column, bool flag) -> void
    {
        %{
            ns_tablecolumn_set_editable((uintptr_t) column, flag ? 1 : 0);
        }%
    }
    public static function isEditable(int column) -> bool
    {
        bool result;
        %{
            result = ns_tablecolumn_is_editable((uintptr_t) column) == 1;
        }%
        return result;
    }
    public static function setResizingMask(int column, int mask) -> void
    {
        %{
            ns_tablecolumn_set_resizing_mask((uintptr_t) column, (int) mask);
        }%
    }
    public static function getResizingMask(int column) -> int
    {
        int value;
        %{
            value = (zend_long) ns_tablecolumn_get_resizing_mask((uintptr_t) column);
        }%
        return value;
    }
}
