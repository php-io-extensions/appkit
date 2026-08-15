namespace AppKit\NS\NSTextLineFragment;

%{
#include "ns-textlinefragment.h"
#include <stdint.h>
}%


/**
 * NSTextLineFragment — single laid-out line.
 */
class NSTextLineFragment

{
    public static function createWithString(string value, int location, int length) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_textlinefragment_create_with_string(Z_STRVAL(value), (int) location, (int) length);
        }%
        return handle;
    }

    public static function wrap(int nsTextLineFragmentPtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_textlinefragment_wrap((void *)(uintptr_t) nsTextLineFragmentPtr);
        }%
        return handle;
    }

    public static function destroy(int fragment) -> void
    {
        %{
            ns_textlinefragment_destroy((uintptr_t) fragment);
        }%
    }

    /**
     * @return array [location, length]
     */
    public static function characterRange(int fragment) -> array
    {
        array out = [];
        %{
            int location = 0, length = 0;
            ns_textlinefragment_character_range((uintptr_t) fragment, &location, &length);
            add_next_index_long(&out, location);
            add_next_index_long(&out, length);
        }%
        return out;
    }

    /**
     * @return array [x, y, w, h]
     */
    public static function typographicBounds(int fragment) -> array
    {
        array out = [];
        %{
            double x = 0.0, y = 0.0, w = 0.0, h = 0.0;
            ns_textlinefragment_typographic_bounds((uintptr_t) fragment, &x, &y, &w, &h);
            add_next_index_double(&out, x);
            add_next_index_double(&out, y);
            add_next_index_double(&out, w);
            add_next_index_double(&out, h);
        }%
        return out;
    }

    /**
     * @return array [x, y]
     */
    public static function glyphOrigin(int fragment) -> array
    {
        array out = [];
        %{
            double x = 0.0, y = 0.0;
            ns_textlinefragment_glyph_origin((uintptr_t) fragment, &x, &y);
            add_next_index_double(&out, x);
            add_next_index_double(&out, y);
        }%
        return out;
    }
}
