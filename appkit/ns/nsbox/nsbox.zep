namespace AppKit\NS\NSBox;

%{
#include "ns-box.h"
#include <stdint.h>
}%

/**
 * NSBox titled container view.
 */
class NSBox
{
    public static function create(int x, int y, int width, int height, string title = "") -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_box_create((double) x, (double) y, (double) width, (double) height, Z_STRVAL(title));
        }%
        return handle;
    }

    public static function destroy(int box) -> void
    {
        %{
            ns_box_destroy((uintptr_t) box);
        }%
    }

    public static function setTitle(int box, string title) -> void
    {
        %{
            ns_box_set_title((uintptr_t) box, Z_STRVAL(title));
        }%
    }

    public static function addSubview(int box, int child) -> void
    {
        %{
            ns_box_add_subview((uintptr_t) box, (uintptr_t) child);
        }%
    }
}
