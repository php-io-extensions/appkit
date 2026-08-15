namespace AppKit\NS\NSImage;

%{
#include "ns-image.h"
#include <stdint.h>
}%

/**
 * NSImage — multi-representation image objects.
 */
class NSImage
{
    public static function wrap(int nsImagePtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_image_wrap((void *)(uintptr_t) nsImagePtr);
        }%
        return handle;
    }

    public static function destroy(int image) -> void
    {
        %{
            ns_image_destroy((uintptr_t) image);
        }%
    }

    public static function nsImage(int image) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_image_nsimage((uintptr_t) image);
        }%
        return ptr;
    }

    public static function named(string name) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_image_named(Z_STRVAL(name));
        }%
        return handle;
    }

    public static function withSystemSymbolName(string name, string description = "") -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_image_with_system_symbol_name(Z_STRVAL(name), Z_STRVAL(description));
        }%
        return handle;
    }

    public static function withSize(double width, double height) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_image_with_size((double) width, (double) height);
        }%
        return handle;
    }

    public static function withContentsOfFile(string path) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_image_with_contents_of_file(Z_STRVAL(path));
        }%
        return handle;
    }

    public static function withData(string data) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_image_with_data(Z_STRVAL(data), Z_STRLEN(data));
        }%
        return handle;
    }

    public static function byReferencingFile(string path) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_image_by_referencing_file(Z_STRVAL(path));
        }%
        return handle;
    }

    /**
     * @return array [width, height] or empty array
     */
    public static function getSize(int image) -> array
    {
        array out = [];
        %{
            double w = 0.0, h = 0.0;
            if (ns_image_get_size((uintptr_t) image, &w, &h)) {
                add_next_index_double(&out, w);
                add_next_index_double(&out, h);
            }
        }%
        return out;
    }

    public static function setSize(int image, double width, double height) -> void
    {
        %{
            ns_image_set_size((uintptr_t) image, (double) width, (double) height);
        }%
    }

    public static function isValid(int image) -> bool
    {
        bool value;
        %{
            value = ns_image_is_valid((uintptr_t) image) == 1;
        }%
        return value;
    }

    public static function isTemplate(int image) -> bool
    {
        bool value;
        %{
            value = ns_image_is_template((uintptr_t) image) == 1;
        }%
        return value;
    }

    public static function setTemplate(int image, bool isTemplate) -> void
    {
        %{
            ns_image_set_template((uintptr_t) image, isTemplate ? 1 : 0);
        }%
    }

    public static function setName(int image, string name) -> bool
    {
        bool value;
        %{
            value = ns_image_set_name((uintptr_t) image, Z_STRVAL(name)) == 1;
        }%
        return value;
    }

    public static function getName(int image) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\0';
            if (ns_image_get_name((uintptr_t) image, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }

    public static function addRepresentation(int image, int rep) -> void
    {
        %{
            ns_image_add_representation((uintptr_t) image, (uintptr_t) rep);
        }%
    }

    public static function removeRepresentation(int image, int rep) -> void
    {
        %{
            ns_image_remove_representation((uintptr_t) image, (uintptr_t) rep);
        }%
    }

    public static function representationCount(int image) -> int
    {
        int count;
        %{
            count = (zend_long) ns_image_representation_count((uintptr_t) image);
        }%
        return count;
    }

    public static function representationAt(int image, int index) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_image_representation_at((uintptr_t) image, (int) index);
        }%
        return handle;
    }

    public static function drawInRect(int image, double x, double y, double width, double height) -> bool
    {
        bool value;
        %{
            value = ns_image_draw_in_rect((uintptr_t) image, (double) x, (double) y, (double) width, (double) height) == 1;
        }%
        return value;
    }

    public static function tiffRepresentation(int image) -> string
    {
        %{
            char *buf = NULL;
            size_t len = 0;
            if (ns_image_get_tiff_representation((uintptr_t) image, &buf, &len) && buf && len > 0) {
                RETVAL_STRINGL(buf, len);
                ns_image_free_buffer(buf);
                return;
            }
            ns_image_free_buffer(buf);
            RETURN_EMPTY_STRING();
        }%
        return "";
    }

    /**
     * NSImageCacheMode integer — see OKF nsimage.md.
     */
    public static function cacheMode(int image) -> int
    {
        int value;
        %{
            value = (zend_long) ns_image_get_cache_mode((uintptr_t) image);
        }%
        return value;
    }

    public static function setCacheMode(int image, int mode) -> void
    {
        %{
            ns_image_set_cache_mode((uintptr_t) image, (int) mode);
        }%
    }

    public static function getAccessibilityDescription(int image) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\0';
            if (ns_image_get_accessibility_description((uintptr_t) image, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }

    public static function setAccessibilityDescription(int image, string description) -> void
    {
        %{
            ns_image_set_accessibility_description((uintptr_t) image, Z_STRVAL(description));
        }%
    }
}
