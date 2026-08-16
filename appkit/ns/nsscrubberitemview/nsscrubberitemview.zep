namespace AppKit\NS\NSScrubberItemView;

%{
#include "ns-scrubberitemview.h"
#include <stdint.h>
}%

/**
 * NSScrubberItemView base for scrubber item views.
 */
class NSScrubberItemView
{
    public static function create(int x, int y, int width, int height) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_scrubberitemview_create((double) x, (double) y, (double) width, (double) height);
        }%
        return handle;
    }

    public static function wrap(int nsScrubberItemViewPtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_scrubberitemview_wrap((void *)(uintptr_t) nsScrubberItemViewPtr);
        }%
        return handle;
    }

    public static function destroy(int view) -> void
    {
        %{
            ns_scrubberitemview_destroy((uintptr_t) view);
        }%
    }

    public static function nsScrubberItemView(int view) -> int
    {
        int handle;
        %{
            handle = (zend_long) (uintptr_t) ns_scrubberitemview_nsscrubberitemview((uintptr_t) view);
        }%
        return handle;
    }

    public static function setSelected(int view, bool flag) -> void
    {
        %{
            ns_scrubberitemview_set_selected((uintptr_t) view, flag ? 1 : 0);
        }%
    }

    public static function isSelected(int view) -> bool
    {
        bool result;
        %{
            result = ns_scrubberitemview_is_selected((uintptr_t) view) == 1;
        }%
        return result;
    }

    public static function setHighlighted(int view, bool flag) -> void
    {
        %{
            ns_scrubberitemview_set_highlighted((uintptr_t) view, flag ? 1 : 0);
        }%
    }

    public static function isHighlighted(int view) -> bool
    {
        bool result;
        %{
            result = ns_scrubberitemview_is_highlighted((uintptr_t) view) == 1;
        }%
        return result;
    }

    public static function applyLayoutAttributes(int view, int layoutAttributesPtr) -> void
    {
        %{
            ns_scrubberitemview_apply_layout_attributes((uintptr_t) view, (void *)(uintptr_t) layoutAttributesPtr);
        }%
    }
}
