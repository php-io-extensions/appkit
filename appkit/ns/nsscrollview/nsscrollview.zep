namespace AppKit\NS\NSScrollView;

%{
#include "ns-scrollview.h"
#include <stdint.h>
}%

/**
 * NSScrollView scrollable document container.
 */
class NSScrollView
{
    public static function create(int x, int y, int width, int height) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_scrollview_create((double) x, (double) y, (double) width, (double) height);
        }%
        return handle;
    }

    public static function destroy(int scroll) -> void
    {
        %{
            ns_scrollview_destroy((uintptr_t) scroll);
        }%
    }

    public static function setDocumentView(int scroll, int child) -> void
    {
        %{
            ns_scrollview_set_document_view((uintptr_t) scroll, (uintptr_t) child);
        }%
    }
}
