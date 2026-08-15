namespace AppKit\NS\NSFont;

%{
#include "ns-font.h"
#include <stdint.h>
}%

/**
 * NSFont — typeface instances and UI meta fonts.
 */
class NSFont
{
    public static function wrap(int nsFontPtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_font_wrap((void *)(uintptr_t) nsFontPtr);
        }%
        return handle;
    }

    public static function destroy(int font) -> void
    {
        %{
            ns_font_destroy((uintptr_t) font);
        }%
    }

    public static function withName(string name, float size) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_font_with_name(Z_STRVAL(name), (double) size);
        }%
        return handle;
    }

    public static function withDescriptor(int descriptor, float size = 0.0) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_font_with_descriptor((uintptr_t) descriptor, (double) size);
        }%
        return handle;
    }

    /**
     * Meta font kind — see OKF nsfont.md.
     */
    public static function meta(int kind, float size) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_font_meta((int) kind, (double) size);
        }%
        return handle;
    }

    public static function systemWeight(float size, int weightKind = 3) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_font_system_weight((double) size, (int) weightKind);
        }%
        return handle;
    }

    public static function systemWeightWidth(float size, int weightKind = 3, int widthKind = 2) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_font_system_weight_width((double) size, (int) weightKind, (int) widthKind);
        }%
        return handle;
    }

    public static function monospacedDigitSystem(float size, int weightKind = 3) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_font_monospaced_digit_system((double) size, (int) weightKind);
        }%
        return handle;
    }

    public static function monospacedSystem(float size, int weightKind = 3) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_font_monospaced_system((double) size, (int) weightKind);
        }%
        return handle;
    }

    public static function preferredForTextStyle(int styleKind) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_font_preferred_for_text_style((int) styleKind);
        }%
        return handle;
    }

    public static function withSize(int font, float size) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_font_with_size((uintptr_t) font, (double) size);
        }%
        return handle;
    }

    public static function setUserFont(int font) -> void
    {
        %{
            ns_font_set_user_font((uintptr_t) font);
        }%
    }

    public static function setUserFixedPitchFont(int font) -> void
    {
        %{
            ns_font_set_user_fixed_pitch_font((uintptr_t) font);
        }%
    }

    public static function systemFontSize() -> double
    {
        double value;
        %{
            value = ns_font_system_font_size();
        }%
        return value;
    }

    public static function smallSystemFontSize() -> double
    {
        double value;
        %{
            value = ns_font_small_system_font_size();
        }%
        return value;
    }

    public static function labelFontSize() -> double
    {
        double value;
        %{
            value = ns_font_label_font_size();
        }%
        return value;
    }

    public static function systemFontSizeForControlSize(int controlSize) -> double
    {
        double value;
        %{
            value = ns_font_system_font_size_for_control_size((unsigned) controlSize);
        }%
        return value;
    }

    public static function fontName(int font) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\0';
            if (ns_font_font_name((uintptr_t) font, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }

    public static function familyName(int font) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\0';
            if (ns_font_family_name((uintptr_t) font, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }

    public static function displayName(int font) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\0';
            if (ns_font_display_name((uintptr_t) font, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }

    public static function pointSize(int font) -> double
    {
        double value;
        %{
            value = ns_font_point_size((uintptr_t) font);
        }%
        return value;
    }

    public static function fontDescriptor(int font) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_font_font_descriptor((uintptr_t) font);
        }%
        return handle;
    }

    public static function numberOfGlyphs(int font) -> int
    {
        int value;
        %{
            value = (zend_long) ns_font_number_of_glyphs((uintptr_t) font);
        }%
        return value;
    }

    public static function isFixedPitch(int font) -> bool
    {
        bool result;
        %{
            result = ns_font_is_fixed_pitch((uintptr_t) font) == 1;
        }%
        return result;
    }

    public static function isVertical(int font) -> bool
    {
        bool result;
        %{
            result = ns_font_is_vertical((uintptr_t) font) == 1;
        }%
        return result;
    }

    public static function verticalFont(int font) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_font_vertical_font((uintptr_t) font);
        }%
        return handle;
    }

    public static function ascender(int font) -> double
    {
        double value;
        %{
            value = ns_font_ascender((uintptr_t) font);
        }%
        return value;
    }

    public static function descender(int font) -> double
    {
        double value;
        %{
            value = ns_font_descender((uintptr_t) font);
        }%
        return value;
    }

    public static function leading(int font) -> double
    {
        double value;
        %{
            value = ns_font_leading((uintptr_t) font);
        }%
        return value;
    }

    public static function underlinePosition(int font) -> double
    {
        double value;
        %{
            value = ns_font_underline_position((uintptr_t) font);
        }%
        return value;
    }

    public static function underlineThickness(int font) -> double
    {
        double value;
        %{
            value = ns_font_underline_thickness((uintptr_t) font);
        }%
        return value;
    }

    public static function italicAngle(int font) -> double
    {
        double value;
        %{
            value = ns_font_italic_angle((uintptr_t) font);
        }%
        return value;
    }

    public static function capHeight(int font) -> double
    {
        double value;
        %{
            value = ns_font_cap_height((uintptr_t) font);
        }%
        return value;
    }

    public static function xHeight(int font) -> double
    {
        double value;
        %{
            value = ns_font_x_height((uintptr_t) font);
        }%
        return value;
    }

    /**
     * @return array [x, y, width, height] or empty array
     */
    public static function boundingRect(int font) -> array
    {
        array out = [];
        %{
            double x = 0, y = 0, w = 0, h = 0;
            if (ns_font_bounding_rect((uintptr_t) font, &x, &y, &w, &h)) {
                add_next_index_double(&out, x);
                add_next_index_double(&out, y);
                add_next_index_double(&out, w);
                add_next_index_double(&out, h);
            }
        }%
        return out;
    }

    /**
     * @return array [width, height] or empty array
     */
    public static function maximumAdvancement(int font) -> array
    {
        array out = [];
        %{
            double w = 0, h = 0;
            if (ns_font_maximum_advancement((uintptr_t) font, &w, &h)) {
                add_next_index_double(&out, w);
                add_next_index_double(&out, h);
            }
        }%
        return out;
    }

    public static function set(int font) -> void
    {
        %{
            ns_font_set((uintptr_t) font);
        }%
    }

    public static function nsFont(int font) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_font_nsfont((uintptr_t) font);
        }%
        return ptr;
    }
}
