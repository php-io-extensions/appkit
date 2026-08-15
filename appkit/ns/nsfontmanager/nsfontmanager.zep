namespace AppKit\NS\NSFontManager;

%{
#include "ns-fontmanager.h"
#include <stdint.h>
}%

/**
 * NSFontManager — shared font conversion and discovery.
 */
class NSFontManager
{
    public static function shared() -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_fontmanager_shared();
        }%
        return handle;
    }

    public static function destroy(int manager) -> void
    {
        %{
            ns_fontmanager_destroy((uintptr_t) manager);
        }%
    }

    public static function isMultiple(int manager) -> bool
    {
        bool result;
        %{
            result = ns_fontmanager_is_multiple((uintptr_t) manager) == 1;
        }%
        return result;
    }

    public static function selectedFont(int manager) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_fontmanager_selected_font((uintptr_t) manager);
        }%
        return handle;
    }

    public static function setSelectedFont(int manager, int font, bool isMultiple = false) -> void
    {
        %{
            ns_fontmanager_set_selected_font((uintptr_t) manager, (uintptr_t) font, isMultiple ? 1 : 0);
        }%
    }

    public static function fontWithFamily(int manager, string family, int traits, int weight, float size) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_fontmanager_font_with_family((uintptr_t) manager, Z_STRVAL(family), (unsigned) traits, (int) weight, (double) size);
        }%
        return handle;
    }

    public static function traitsOfFont(int manager, int font) -> int
    {
        int value;
        %{
            value = (zend_long) ns_fontmanager_traits_of_font((uintptr_t) manager, (uintptr_t) font);
        }%
        return value;
    }

    public static function weightOfFont(int manager, int font) -> int
    {
        int value;
        %{
            value = (zend_long) ns_fontmanager_weight_of_font((uintptr_t) manager, (uintptr_t) font);
        }%
        return value;
    }

    public static function availableFontsCount(int manager) -> int
    {
        int count;
        %{
            count = (zend_long) ns_fontmanager_available_fonts_count((uintptr_t) manager);
        }%
        return count;
    }

    public static function availableFontAt(int manager, int index) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\0';
            if (ns_fontmanager_available_font_at((uintptr_t) manager, (int) index, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }

    public static function availableFontFamiliesCount(int manager) -> int
    {
        int count;
        %{
            count = (zend_long) ns_fontmanager_available_font_families_count((uintptr_t) manager);
        }%
        return count;
    }

    public static function availableFontFamilyAt(int manager, int index) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\0';
            if (ns_fontmanager_available_font_family_at((uintptr_t) manager, (int) index, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }

    public static function convertFont(int manager, int font) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_fontmanager_convert_font((uintptr_t) manager, (uintptr_t) font);
        }%
        return handle;
    }

    public static function convertFontToSize(int manager, int font, float size) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_fontmanager_convert_font_to_size((uintptr_t) manager, (uintptr_t) font, (double) size);
        }%
        return handle;
    }

    public static function convertFontToFace(int manager, int font, string face) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_fontmanager_convert_font_to_face((uintptr_t) manager, (uintptr_t) font, Z_STRVAL(face));
        }%
        return handle;
    }

    public static function convertFontToFamily(int manager, int font, string family) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_fontmanager_convert_font_to_family((uintptr_t) manager, (uintptr_t) font, Z_STRVAL(family));
        }%
        return handle;
    }

    public static function convertFontToHaveTrait(int manager, int font, int trait) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_fontmanager_convert_font_to_have_trait((uintptr_t) manager, (uintptr_t) font, (unsigned) trait);
        }%
        return handle;
    }

    public static function convertFontToNotHaveTrait(int manager, int font, int trait) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_fontmanager_convert_font_to_not_have_trait((uintptr_t) manager, (uintptr_t) font, (unsigned) trait);
        }%
        return handle;
    }

    public static function convertWeight(int manager, int font, bool up) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_fontmanager_convert_weight((uintptr_t) manager, (uintptr_t) font, up ? 1 : 0);
        }%
        return handle;
    }

    public static function isEnabled(int manager) -> bool
    {
        bool result;
        %{
            result = ns_fontmanager_is_enabled((uintptr_t) manager) == 1;
        }%
        return result;
    }

    public static function setEnabled(int manager, bool enabled) -> void
    {
        %{
            ns_fontmanager_set_enabled((uintptr_t) manager, enabled ? 1 : 0);
        }%
    }

    public static function currentFontAction(int manager) -> int
    {
        int value;
        %{
            value = (zend_long) ns_fontmanager_current_font_action((uintptr_t) manager);
        }%
        return value;
    }

    public static function fontPanel(int manager, bool create = true) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_fontmanager_font_panel((uintptr_t) manager, create ? 1 : 0);
        }%
        return handle;
    }

    public static function orderFrontFontPanel(int manager) -> void
    {
        %{
            ns_fontmanager_order_front_font_panel((uintptr_t) manager);
        }%
    }

    public static function fontNamedHasTraits(int manager, string name, int traits) -> bool
    {
        bool result;
        %{
            result = ns_fontmanager_font_named_has_traits((uintptr_t) manager, Z_STRVAL(name), (unsigned) traits) == 1;
        }%
        return result;
    }

    public static function availableFontNamesWithTraitsCount(int manager, int traits) -> int
    {
        int count;
        %{
            count = (zend_long) ns_fontmanager_available_font_names_with_traits_count((uintptr_t) manager, (unsigned) traits);
        }%
        return count;
    }

    public static function availableFontNameWithTraitsAt(int manager, int traits, int index) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\0';
            if (ns_fontmanager_available_font_name_with_traits_at((uintptr_t) manager, (unsigned) traits, (int) index, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }

    public static function localizedNameForFamily(int manager, string family, string face = "") -> string
    {
        %{
            char buf[4096];
            buf[0] = '\0';
            if (ns_fontmanager_localized_name_for_family((uintptr_t) manager, Z_STRVAL(family), Z_STRVAL(face), buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }

    public static function nsFontManager(int manager) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_fontmanager_nsfontmanager((uintptr_t) manager);
        }%
        return ptr;
    }
}
