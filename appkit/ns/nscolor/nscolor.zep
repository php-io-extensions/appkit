namespace AppKit\NS\NSColor;

%{
#include "ns-color.h"
#include <stdint.h>
}%

/**
 * NSColor — component, catalog, and system semantic colors.
 */
class NSColor
{
    public static function wrap(int nsColorPtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_color_wrap((void *)(uintptr_t) nsColorPtr);
        }%
        return handle;
    }

    public static function destroy(int color) -> void
    {
        %{
            ns_color_destroy((uintptr_t) color);
        }%
    }

    public static function withRgba(float red, float green, float blue, float alpha = 1.0) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_color_with_rgba((double) red, (double) green, (double) blue, (double) alpha);
        }%
        return handle;
    }

    public static function withSrgbBytes(int red, int green, int blue, int alpha = 255) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_color_with_srgb_bytes((int) red, (int) green, (int) blue, (int) alpha);
        }%
        return handle;
    }

    public static function withWhite(float white, float alpha = 1.0) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_color_with_white((double) white, (double) alpha);
        }%
        return handle;
    }

    public static function withHsb(float hue, float saturation, float brightness, float alpha = 1.0) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_color_with_hsb((double) hue, (double) saturation, (double) brightness, (double) alpha);
        }%
        return handle;
    }

    public static function named(string name) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_color_named(Z_STRVAL(name));
        }%
        return handle;
    }

    public static function withCatalog(string listName, string colorName) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_color_with_catalog(Z_STRVAL(listName), Z_STRVAL(colorName));
        }%
        return handle;
    }

    /**
     * Standard color kind integer — see OKF nscolor.md.
     */
    public static function standard(int kind) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_color_standard((int) kind);
        }%
        return handle;
    }

    public static function withAlpha(int color, float alpha) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_color_with_alpha((uintptr_t) color, (double) alpha);
        }%
        return handle;
    }

    public static function usingColorSpace(int color, int space) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_color_using_color_space((uintptr_t) color, (uintptr_t) space);
        }%
        return handle;
    }

    public static function type(int color) -> int
    {
        int value;
        %{
            value = (zend_long) ns_color_type((uintptr_t) color);
        }%
        return value;
    }

    public static function alpha(int color) -> double
    {
        double value;
        %{
            value = ns_color_alpha((uintptr_t) color);
        }%
        return value;
    }

    /**
     * @return array [r, g, b, a] byte components or empty array
     */
    public static function getSrgba(int color) -> array
    {
        array out = [];
        %{
            int r = 0, g = 0, b = 0, a = 0;
            if (ns_color_get_srgba((uintptr_t) color, &r, &g, &b, &a)) {
                add_next_index_long(&out, r);
                add_next_index_long(&out, g);
                add_next_index_long(&out, b);
                add_next_index_long(&out, a);
            }
        }%
        return out;
    }

    /**
     * @return array [r, g, b, a] float 0..1 or empty array
     */
    public static function getRgbaDouble(int color) -> array
    {
        array out = [];
        %{
            double r = 0.0, g = 0.0, b = 0.0, a = 0.0;
            if (ns_color_get_rgba_double((uintptr_t) color, &r, &g, &b, &a)) {
                add_next_index_double(&out, r);
                add_next_index_double(&out, g);
                add_next_index_double(&out, b);
                add_next_index_double(&out, a);
            }
        }%
        return out;
    }

    public static function set(int color) -> void
    {
        %{
            ns_color_set((uintptr_t) color);
        }%
    }

    public static function setFill(int color) -> void
    {
        %{
            ns_color_set_fill((uintptr_t) color);
        }%
    }

    public static function setStroke(int color) -> void
    {
        %{
            ns_color_set_stroke((uintptr_t) color);
        }%
    }

    public static function catalogName(int color) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\0';
            if (ns_color_catalog_name((uintptr_t) color, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }

    public static function colorName(int color) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\0';
            if (ns_color_color_name((uintptr_t) color, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }

    public static function nsColor(int color) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_color_nscolor((uintptr_t) color);
        }%
        return ptr;
    }
}
