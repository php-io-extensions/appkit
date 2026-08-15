namespace AppKit\NS\NSTabView;

%{
#include "ns-tabview.h"
#include <stdint.h>
}%

/**
 * NSTabView tabbed container.
 */
class NSTabView
{
    public static function create(int x, int y, int width, int height) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_tabview_create((double) x, (double) y, (double) width, (double) height);
        }%
        return handle;
    }

    public static function destroy(int tabs) -> void
    {
        %{
            ns_tabview_destroy((uintptr_t) tabs);
        }%
    }

    public static function addTab(int tabs, string title, int child) -> void
    {
        %{
            ns_tabview_add_tab((uintptr_t) tabs, Z_STRVAL(title), (uintptr_t) child);
        }%
    }

    public static function getSelected(int tabs) -> int
    {
        int value;
        %{
            value = (zend_long) ns_tabview_get_selected((uintptr_t) tabs);
        }%
        return value;
    }

    public static function setSelected(int tabs, int index) -> void
    {
        %{
            ns_tabview_set_selected((uintptr_t) tabs, (int) index);
        }%
    }
}
