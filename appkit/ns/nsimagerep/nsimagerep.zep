namespace AppKit\NS\NSImageRep;

%{
#include "ns-imagerep.h"
#include <stdint.h>
}%

/**
 * NSImageRep — base image representation type.
 */
class NSImageRep
{
    public static function wrap(int nsImageRepPtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_imagerep_wrap((void *)(uintptr_t) nsImageRepPtr);
        }%
        return handle;
    }

    public static function destroy(int rep) -> void
    {
        %{
            ns_imagerep_destroy((uintptr_t) rep);
        }%
    }

    public static function nsImageRep(int rep) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_imagerep_nsimagerep((uintptr_t) rep);
        }%
        return ptr;
    }

    public static function repWithContentsOfFile(string path) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_imagerep_rep_with_contents_of_file(Z_STRVAL(path));
        }%
        return handle;
    }

    /**
     * @return array [width, height] or empty array
     */
    public static function getSize(int rep) -> array
    {
        array out = [];
        %{
            double w = 0.0, h = 0.0;
            if (ns_imagerep_get_size((uintptr_t) rep, &w, &h)) {
                add_next_index_double(&out, w);
                add_next_index_double(&out, h);
            }
        }%
        return out;
    }

    public static function setSize(int rep, double width, double height) -> void
    {
        %{
            ns_imagerep_set_size((uintptr_t) rep, (double) width, (double) height);
        }%
    }

    public static function hasAlpha(int rep) -> bool
    {
        bool value;
        %{
            value = ns_imagerep_has_alpha((uintptr_t) rep) == 1;
        }%
        return value;
    }

    public static function isOpaque(int rep) -> bool
    {
        bool value;
        %{
            value = ns_imagerep_is_opaque((uintptr_t) rep) == 1;
        }%
        return value;
    }

    public static function pixelsWide(int rep) -> int
    {
        int value;
        %{
            value = (zend_long) ns_imagerep_pixels_wide((uintptr_t) rep);
        }%
        return value;
    }

    public static function pixelsHigh(int rep) -> int
    {
        int value;
        %{
            value = (zend_long) ns_imagerep_pixels_high((uintptr_t) rep);
        }%
        return value;
    }

    public static function bitsPerSample(int rep) -> int
    {
        int value;
        %{
            value = (zend_long) ns_imagerep_bits_per_sample((uintptr_t) rep);
        }%
        return value;
    }

    /**
     * NSImageLayoutDirection integer — see OKF nsimagerep.md.
     */
    public static function layoutDirection(int rep) -> int
    {
        int value;
        %{
            value = (zend_long) ns_imagerep_layout_direction((uintptr_t) rep);
        }%
        return value;
    }

    public static function setLayoutDirection(int rep, int direction) -> void
    {
        %{
            ns_imagerep_set_layout_direction((uintptr_t) rep, (int) direction);
        }%
    }

    public static function draw(int rep) -> bool
    {
        bool value;
        %{
            value = ns_imagerep_draw((uintptr_t) rep) == 1;
        }%
        return value;
    }

    public static function drawAtPoint(int rep, double x, double y) -> bool
    {
        bool value;
        %{
            value = ns_imagerep_draw_at_point((uintptr_t) rep, (double) x, (double) y) == 1;
        }%
        return value;
    }

    public static function drawInRect(int rep, double x, double y, double width, double height) -> bool
    {
        bool value;
        %{
            value = ns_imagerep_draw_in_rect((uintptr_t) rep, (double) x, (double) y, (double) width, (double) height) == 1;
        }%
        return value;
    }

    public static function imageTypeCount() -> int
    {
        int count;
        %{
            count = (zend_long) ns_imagerep_image_type_count();
        }%
        return count;
    }

    public static function imageTypeAt(int index) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\0';
            if (ns_imagerep_image_type_at((int) index, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }
}
