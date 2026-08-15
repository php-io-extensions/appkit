namespace AppKit\NS\NSImageView;

%{
#include "ns-imageview.h"
#include <stdint.h>
}%

/**
 * NSImageView image display control.
 */
class NSImageView
{
    public static function create(int x, int y, int width, int height) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_imageview_create((double) x, (double) y, (double) width, (double) height);
        }%
        return handle;
    }

    public static function destroy(int view) -> void
    {
        %{
            ns_imageview_destroy((uintptr_t) view);
        }%
    }

    public static function setPath(int view, string path) -> bool
    {
        bool result;
        %{
            result = ns_imageview_set_path((uintptr_t) view, Z_STRVAL(path)) == 1;
        }%
        return result;
    }
}
