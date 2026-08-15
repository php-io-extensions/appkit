namespace AppKit\NS\NSSplitView;

%{
#include "ns-splitview.h"
#include <stdint.h>
}%

/**
 * NSSplitView resizable split pane container.
 */
class NSSplitView
{
    public static function create(int x, int y, int width, int height, bool vertical = true) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_splitview_create((double) x, (double) y, (double) width, (double) height, vertical ? 1 : 0);
        }%
        return handle;
    }

    public static function destroy(int split) -> void
    {
        %{
            ns_splitview_destroy((uintptr_t) split);
        }%
    }

    public static function addSubview(int split, int child) -> void
    {
        %{
            ns_splitview_add_subview((uintptr_t) split, (uintptr_t) child);
        }%
    }
}
