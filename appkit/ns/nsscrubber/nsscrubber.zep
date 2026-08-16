namespace AppKit\NS\NSScrubber;

%{
#include "ns-scrubber.h"
#include <stdint.h>
}%

/** NSScrubber — horizontal scrubber control with PHP-driven items. */
class NSScrubber
{
    public static function create(int x, int y, int width, int height) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_scrubber_create((double) x, (double) y, (double) width, (double) height);
        }%
        return handle;
    }

    public static function wrap(int nsScrubberPtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_scrubber_wrap((void *)(uintptr_t) nsScrubberPtr);
        }%
        return handle;
    }

    public static function destroy(int scrubber) -> void
    {
        %{
            ns_scrubber_destroy((uintptr_t) scrubber);
        }%
    }

    public static function nsScrubber(int scrubber) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_scrubber_nsscrubber((uintptr_t) scrubber);
        }%
        return ptr;
    }

    public static function clear(int scrubber) -> void
    {
        %{
            ns_scrubber_clear((uintptr_t) scrubber);
        }%
    }

    public static function addItem(int scrubber, string title) -> void
    {
        %{
            ns_scrubber_add_item((uintptr_t) scrubber, Z_STRVAL(title));
        }%
    }

    public static function numberOfItems(int scrubber) -> int
    {
        int value;
        %{
            value = (zend_long) ns_scrubber_number_of_items((uintptr_t) scrubber);
        }%
        return value;
    }

    public static function setMode(int scrubber, int mode) -> void
    {
        %{
            ns_scrubber_set_mode((uintptr_t) scrubber, (int) mode);
        }%
    }

    public static function getMode(int scrubber) -> int
    {
        int value;
        %{
            value = (zend_long) ns_scrubber_get_mode((uintptr_t) scrubber);
        }%
        return value;
    }

    public static function setItemAlignment(int scrubber, int alignment) -> void
    {
        %{
            ns_scrubber_set_item_alignment((uintptr_t) scrubber, (int) alignment);
        }%
    }

    public static function getItemAlignment(int scrubber) -> int
    {
        int value;
        %{
            value = (zend_long) ns_scrubber_get_item_alignment((uintptr_t) scrubber);
        }%
        return value;
    }

    public static function setContinuous(int scrubber, bool flag) -> void
    {
        %{
            ns_scrubber_set_continuous((uintptr_t) scrubber, flag ? 1 : 0);
        }%
    }

    public static function isContinuous(int scrubber) -> bool
    {
        bool result;
        %{
            result = ns_scrubber_is_continuous((uintptr_t) scrubber) == 1;
        }%
        return result;
    }

    public static function setSelectedIndex(int scrubber, int index) -> void
    {
        %{
            ns_scrubber_set_selected_index((uintptr_t) scrubber, (int) index);
        }%
    }

    public static function getSelectedIndex(int scrubber) -> int
    {
        int value;
        %{
            value = (zend_long) ns_scrubber_get_selected_index((uintptr_t) scrubber);
        }%
        return value;
    }

    public static function highlightedIndex(int scrubber) -> int
    {
        int value;
        %{
            value = (zend_long) ns_scrubber_get_highlighted_index((uintptr_t) scrubber);
        }%
        return value;
    }

    public static function setShowsArrowButtons(int scrubber, bool flag) -> void
    {
        %{
            ns_scrubber_set_shows_arrow_buttons((uintptr_t) scrubber, flag ? 1 : 0);
        }%
    }

    public static function showsArrowButtons(int scrubber) -> bool
    {
        bool result;
        %{
            result = ns_scrubber_shows_arrow_buttons((uintptr_t) scrubber) == 1;
        }%
        return result;
    }

    public static function setShowsAdditionalContentIndicators(int scrubber, bool flag) -> void
    {
        %{
            ns_scrubber_set_shows_additional_content_indicators((uintptr_t) scrubber, flag ? 1 : 0);
        }%
    }

    public static function showsAdditionalContentIndicators(int scrubber) -> bool
    {
        bool result;
        %{
            result = ns_scrubber_shows_additional_content_indicators((uintptr_t) scrubber) == 1;
        }%
        return result;
    }

    public static function reloadData(int scrubber) -> void
    {
        %{
            ns_scrubber_reload_data((uintptr_t) scrubber);
        }%
    }

    public static function pollSelection(int scrubber) -> bool
    {
        bool result;
        %{
            result = ns_scrubber_poll_selection((uintptr_t) scrubber) == 1;
        }%
        return result;
    }

    public static function setLayout(int scrubber, int layout) -> void
    {
        %{
            ns_scrubber_set_layout((uintptr_t) scrubber, (uintptr_t) layout);
        }%
    }

    public static function getLayout(int scrubber) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_scrubber_get_layout((uintptr_t) scrubber);
        }%
        return handle;
    }
}
