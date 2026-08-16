namespace AppKit\NS\NSScrubberArrangedView;

%{
#include "ns-scrubberarrangedview.h"
#include <stdint.h>
}%

/**
 * NSScrubberArrangedView base for scrubber item and selection views.
 */
class NSScrubberArrangedView
{
    public static function create(int x, int y, int width, int height) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_scrubberarrangedview_create((double) x, (double) y, (double) width, (double) height);
        }%
        return handle;
    }

    public static function wrap(int nsScrubberArrangedViewPtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_scrubberarrangedview_wrap((void *)(uintptr_t) nsScrubberArrangedViewPtr);
        }%
        return handle;
    }

    public static function destroy(int view) -> void
    {
        %{
            ns_scrubberarrangedview_destroy((uintptr_t) view);
        }%
    }

    public static function nsScrubberArrangedView(int view) -> int
    {
        int handle;
        %{
            handle = (zend_long) (uintptr_t) ns_scrubberarrangedview_nsscrubberarrangedview((uintptr_t) view);
        }%
        return handle;
    }

    public static function setSelected(int view, bool flag) -> void
    {
        %{
            ns_scrubberarrangedview_set_selected((uintptr_t) view, flag ? 1 : 0);
        }%
    }

    public static function isSelected(int view) -> bool
    {
        bool result;
        %{
            result = ns_scrubberarrangedview_is_selected((uintptr_t) view) == 1;
        }%
        return result;
    }

    public static function setHighlighted(int view, bool flag) -> void
    {
        %{
            ns_scrubberarrangedview_set_highlighted((uintptr_t) view, flag ? 1 : 0);
        }%
    }

    public static function isHighlighted(int view) -> bool
    {
        bool result;
        %{
            result = ns_scrubberarrangedview_is_highlighted((uintptr_t) view) == 1;
        }%
        return result;
    }

    public static function applyLayoutAttributes(int view, int layoutAttributesPtr) -> void
    {
        %{
            ns_scrubberarrangedview_apply_layout_attributes((uintptr_t) view, (void *)(uintptr_t) layoutAttributesPtr);
        }%
    }
}
