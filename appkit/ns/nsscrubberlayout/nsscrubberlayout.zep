namespace AppKit\NS\NSScrubberLayout;

%{
#include "ns-scrubberlayout.h"
#include <stdint.h>
}%

/**
 * NSScrubberLayout — abstract scrubber item layout base.
 */
class NSScrubberLayout
{
    public static function create() -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_scrubberlayout_create();
        }%
        return handle;
    }

    public static function wrap(int nsScrubberLayoutPtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_scrubberlayout_wrap((void *)(uintptr_t) nsScrubberLayoutPtr);
        }%
        return handle;
    }

    public static function destroy(int layout) -> void
    {
        %{
            ns_scrubberlayout_destroy((uintptr_t) layout);
        }%
    }

    public static function nsScrubberLayout(int layout) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_scrubberlayout_nsscrubberlayout((uintptr_t) layout);
        }%
        return ptr;
    }

    public static function invalidate(int layout) -> void
    {
        %{
            ns_scrubberlayout_invalidate((uintptr_t) layout);
        }%
    }

    public static function scrubber(int layout) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_scrubberlayout_scrubber((uintptr_t) layout);
        }%
        return handle;
    }

    /**
     * @return array [x, y, width, height] or empty array
     */
    public static function visibleRect(int layout) -> array
    {
        array out = [];
        %{
            double x = 0.0, y = 0.0, w = 0.0, h = 0.0;
            if (ns_scrubberlayout_visible_rect((uintptr_t) layout, &x, &y, &w, &h)) {
                add_next_index_double(&out, x);
                add_next_index_double(&out, y);
                add_next_index_double(&out, w);
                add_next_index_double(&out, h);
            }
        }%
        return out;
    }

    public static function contentWidth(int layout) -> double
    {
        double value;
        %{
            value = ns_scrubberlayout_content_width((uintptr_t) layout);
        }%
        return value;
    }

    public static function contentHeight(int layout) -> double
    {
        double value;
        %{
            value = ns_scrubberlayout_content_height((uintptr_t) layout);
        }%
        return value;
    }

    public static function shouldInvalidateForSelectionChange(int layout) -> bool
    {
        bool result;
        %{
            result = ns_scrubberlayout_should_invalidate_for_selection_change((uintptr_t) layout) == 1;
        }%
        return result;
    }

    public static function shouldInvalidateForHighlightChange(int layout) -> bool
    {
        bool result;
        %{
            result = ns_scrubberlayout_should_invalidate_for_highlight_change((uintptr_t) layout) == 1;
        }%
        return result;
    }

    public static function automaticallyMirrorsInRightToLeftLayout(int layout) -> bool
    {
        bool result;
        %{
            result = ns_scrubberlayout_automatically_mirrors_in_rtl((uintptr_t) layout) == 1;
        }%
        return result;
    }
}
