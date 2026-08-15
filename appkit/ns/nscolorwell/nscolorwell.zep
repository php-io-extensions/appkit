namespace AppKit\NS\NSColorWell;

%{
#include "ns-colorwell.h"
#include <stdint.h>
}%

/**
 * NSColorWell color picker control.
 */
class NSColorWell
{
    public static function create(int x, int y, int width, int height) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_colorwell_create((double) x, (double) y, (double) width, (double) height);
        }%
        return handle;
    }

    public static function destroy(int well) -> void
    {
        %{
            ns_colorwell_destroy((uintptr_t) well);
        }%
    }

    public static function setRgba(int well, int r, int g, int b, int a = 255) -> void
    {
        %{
            ns_colorwell_set_rgba((uintptr_t) well, (int) r, (int) g, (int) b, (int) a);
        }%
    }

    public static function getRgba(int well) -> array
    {
        %{
            int r = 0, g = 0, b = 0, a = 0;
            zval packed;
            array_init(&packed);
            if (ns_colorwell_get_rgba((uintptr_t) well, &r, &g, &b, &a)) {
                add_next_index_long(&packed, r);
                add_next_index_long(&packed, g);
                add_next_index_long(&packed, b);
                add_next_index_long(&packed, a);
            }
            RETURN_ZVAL(&packed, 0, 0);
        }%
        return [];
    }

    public static function pollChange(int well) -> bool
    {
        bool result;
        %{
            result = ns_colorwell_poll_change((uintptr_t) well) == 1;
        }%
        return result;
    }
}
