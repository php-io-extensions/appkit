namespace AppKit\NS\NSBrowser;

%{
#include "ns-browser.h"
#include <stdint.h>
}%


/**
 * NSBrowser column-path browser.
 */
class NSBrowser
{
    public static function create(int x, int y, int width, int height) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_browser_create((double) x, (double) y, (double) width, (double) height);
        }%
        return handle;
    }
    public static function destroy(int browser) -> void
    {
        %{
            ns_browser_destroy((uintptr_t) browser);
        }%
    }
    public static function setPath(int browser, string path) -> void
    {
        %{
            ns_browser_set_path((uintptr_t) browser, Z_STRVAL(path));
        }%
    }
    public static function getPath(int browser) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\0';
            if (ns_browser_get_path((uintptr_t) browser, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }
    public static function setMaxVisibleColumns(int browser, int count) -> void
    {
        %{
            ns_browser_set_max_visible_columns((uintptr_t) browser, (int) count);
        }%
    }
    public static function getMaxVisibleColumns(int browser) -> int
    {
        int value;
        %{
            value = (zend_long) ns_browser_get_max_visible_columns((uintptr_t) browser);
        }%
        return value;
    }
    public static function lastColumn(int browser) -> int
    {
        int value;
        %{
            value = (zend_long) ns_browser_last_column((uintptr_t) browser);
        }%
        return value;
    }
    public static function reloadColumn(int browser, int column) -> void
    {
        %{
            ns_browser_reload_column((uintptr_t) browser, (int) column);
        }%
    }
    public static function setTakesTitleFromPreviousColumn(int browser, bool flag) -> void
    {
        %{
            ns_browser_set_takes_title_from_previous_column((uintptr_t) browser, flag ? 1 : 0);
        }%
    }
    public static function takesTitleFromPreviousColumn(int browser) -> bool
    {
        bool result;
        %{
            result = ns_browser_takes_title_from_previous_column((uintptr_t) browser) == 1;
        }%
        return result;
    }
    public static function selectedRowInColumn(int browser, int column) -> int
    {
        int value;
        %{
            value = (zend_long) ns_browser_selected_row_in_column((uintptr_t) browser, (int) column);
        }%
        return value;
    }

    public static function selectRowInColumn(int browser, int row, int column) -> void
    {
        %{
            ns_browser_select_row_in_column((uintptr_t) browser, (int) row, (int) column);
        }%
    }
}
