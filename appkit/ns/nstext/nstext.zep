namespace AppKit\NS\NSText;

%{
#include "ns-text.h"
#include <stdint.h>
}%

/**
 * NSText — text object editing and display attributes.
 */
class NSText
{
    public static function create(int x, int y, int width, int height, string value = "") -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_text_create((double) x, (double) y, (double) width, (double) height, Z_STRVAL(value));
        }%
        return handle;
    }

    public static function wrap(int nsTextPtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_text_wrap((void *)(uintptr_t) nsTextPtr);
        }%
        return handle;
    }

    public static function destroy(int text) -> void
    {
        %{
            ns_text_destroy((uintptr_t) text);
        }%
    }

    public static function nsText(int text) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_text_nstext((uintptr_t) text);
        }%
        return ptr;
    }

    public static function setString(int text, string value) -> void
    {
        %{
            ns_text_set_string((uintptr_t) text, Z_STRVAL(value));
        }%
    }

    public static function getString(int text) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\0';
            if (ns_text_get_string((uintptr_t) text, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }

    public static function setEditable(int text, bool editable) -> void
    {
        %{
            ns_text_set_editable((uintptr_t) text, editable ? 1 : 0);
        }%
    }

    public static function isEditable(int text) -> bool
    {
        bool result;
        %{
            result = ns_text_is_editable((uintptr_t) text) == 1;
        }%
        return result;
    }

    public static function setSelectable(int text, bool selectable) -> void
    {
        %{
            ns_text_set_selectable((uintptr_t) text, selectable ? 1 : 0);
        }%
    }

    public static function isSelectable(int text) -> bool
    {
        bool result;
        %{
            result = ns_text_is_selectable((uintptr_t) text) == 1;
        }%
        return result;
    }

    public static function setRichText(int text, bool richText) -> void
    {
        %{
            ns_text_set_rich_text((uintptr_t) text, richText ? 1 : 0);
        }%
    }

    public static function isRichText(int text) -> bool
    {
        bool result;
        %{
            result = ns_text_is_rich_text((uintptr_t) text) == 1;
        }%
        return result;
    }

    public static function setDrawsBackground(int text, bool drawsBackground) -> void
    {
        %{
            ns_text_set_draws_background((uintptr_t) text, drawsBackground ? 1 : 0);
        }%
    }

    public static function drawsBackground(int text) -> bool
    {
        bool result;
        %{
            result = ns_text_draws_background((uintptr_t) text) == 1;
        }%
        return result;
    }

    public static function setBackgroundColor(int text, int color) -> void
    {
        %{
            ns_text_set_background_color((uintptr_t) text, (uintptr_t) color);
        }%
    }

    public static function setTextColor(int text, int color) -> void
    {
        %{
            ns_text_set_text_color((uintptr_t) text, (uintptr_t) color);
        }%
    }

    public static function setFont(int text, int font) -> void
    {
        %{
            ns_text_set_font((uintptr_t) text, (uintptr_t) font);
        }%
    }

    public static function setAlignment(int text, int alignment) -> void
    {
        %{
            ns_text_set_alignment((uintptr_t) text, (int) alignment);
        }%
    }

    public static function getAlignment(int text) -> int
    {
        int value;
        %{
            value = (zend_long) ns_text_get_alignment((uintptr_t) text);
        }%
        return value;
    }

    public static function setWritingDirection(int text, int direction) -> void
    {
        %{
            ns_text_set_writing_direction((uintptr_t) text, (int) direction);
        }%
    }

    public static function getWritingDirection(int text) -> int
    {
        int value;
        %{
            value = (zend_long) ns_text_get_writing_direction((uintptr_t) text);
        }%
        return value;
    }

    public static function setSelectedRange(int text, int location, int length) -> void
    {
        %{
            ns_text_set_selected_range((uintptr_t) text, (int) location, (int) length);
        }%
    }

    /**
     * @return array [location, length]
     */
    public static function getSelectedRange(int text) -> array
    {
        array out = [];
        %{
            int location = 0, length = 0;
            ns_text_get_selected_range((uintptr_t) text, &location, &length);
            add_next_index_long(&out, location);
            add_next_index_long(&out, length);
        }%
        return out;
    }

    public static function sizeToFit(int text) -> void
    {
        %{
            ns_text_size_to_fit((uintptr_t) text);
        }%
    }
}
