namespace AppKit\NS\NSBitmapImageRep;

%{
#include "ns-bitmapimagerep.h"
#include <stdint.h>
}%

/**
 * NSBitmapImageRep — raster bitmap image representations.
 */
class NSBitmapImageRep
{
    public static function wrap(int nsBitmapImageRepPtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_bitmapimagerep_wrap((void *)(uintptr_t) nsBitmapImageRepPtr);
        }%
        return handle;
    }

    public static function destroy(int rep) -> void
    {
        %{
            ns_bitmapimagerep_destroy((uintptr_t) rep);
        }%
    }

    public static function nsBitmapImageRep(int rep) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_bitmapimagerep_nsbitmapimagerep((uintptr_t) rep);
        }%
        return ptr;
    }

    public static function withData(string data) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_bitmapimagerep_with_data(Z_STRVAL(data), Z_STRLEN(data));
        }%
        return handle;
    }

    public static function repWithContentsOfFile(string path) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_bitmapimagerep_rep_with_contents_of_file(Z_STRVAL(path));
        }%
        return handle;
    }

    public static function withPixels(int width, int height, bool hasAlpha = true) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_bitmapimagerep_with_pixels((int) width, (int) height, hasAlpha ? 1 : 0);
        }%
        return handle;
    }

    public static function withCGImage(int cgImagePtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_bitmapimagerep_with_cgimage((uintptr_t) cgImagePtr);
        }%
        return handle;
    }

    public static function isPlanar(int rep) -> bool
    {
        bool value;
        %{
            value = ns_bitmapimagerep_is_planar((uintptr_t) rep) == 1;
        }%
        return value;
    }

    public static function samplesPerPixel(int rep) -> int
    {
        int value;
        %{
            value = (zend_long) ns_bitmapimagerep_samples_per_pixel((uintptr_t) rep);
        }%
        return value;
    }

    public static function bitsPerPixel(int rep) -> int
    {
        int value;
        %{
            value = (zend_long) ns_bitmapimagerep_bits_per_pixel((uintptr_t) rep);
        }%
        return value;
    }

    public static function bytesPerRow(int rep) -> int
    {
        int value;
        %{
            value = (zend_long) ns_bitmapimagerep_bytes_per_row((uintptr_t) rep);
        }%
        return value;
    }

    public static function numberOfPlanes(int rep) -> int
    {
        int value;
        %{
            value = (zend_long) ns_bitmapimagerep_number_of_planes((uintptr_t) rep);
        }%
        return value;
    }

    public static function bitmapData(int rep) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_bitmapimagerep_bitmap_data((uintptr_t) rep);
        }%
        return ptr;
    }

    public static function tiffRepresentation(int rep) -> string
    {
        %{
            char *buf = NULL;
            size_t len = 0;
            if (ns_bitmapimagerep_get_tiff_representation((uintptr_t) rep, &buf, &len) && buf && len > 0) {
                RETVAL_STRINGL(buf, len);
                ns_bitmapimagerep_free_buffer(buf);
                return;
            }
            ns_bitmapimagerep_free_buffer(buf);
            RETURN_EMPTY_STRING();
        }%
        return "";
    }

    /**
     * NSBitmapImageFileType integer — see OKF nsbitmapimagerep.md.
     */
    public static function representationUsingType(int rep, int fileType) -> string
    {
        %{
            char *buf = NULL;
            size_t len = 0;
            if (ns_bitmapimagerep_representation_using_type((uintptr_t) rep, (int) fileType, &buf, &len) && buf && len > 0) {
                RETVAL_STRINGL(buf, len);
                ns_bitmapimagerep_free_buffer(buf);
                return;
            }
            ns_bitmapimagerep_free_buffer(buf);
            RETURN_EMPTY_STRING();
        }%
        return "";
    }

    public static function setColorAt(int rep, int x, int y, int color) -> bool
    {
        bool value;
        %{
            value = ns_bitmapimagerep_set_color_at((uintptr_t) rep, (int) x, (int) y, (uintptr_t) color) == 1;
        }%
        return value;
    }

    public static function colorAt(int rep, int x, int y) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_bitmapimagerep_color_at((uintptr_t) rep, (int) x, (int) y);
        }%
        return handle;
    }
}
