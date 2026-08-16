namespace AppKit\NS\NSScrubberSelectionView;

%{
#include "ns-scrubberselectionview.h"
#include <stdint.h>
}%

/**
 * NSScrubberSelectionView base for scrubber selection decorations.
 */
class NSScrubberSelectionView
{
    public static function create(int x, int y, int width, int height) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_scrubberselectionview_create((double) x, (double) y, (double) width, (double) height);
        }%
        return handle;
    }

    public static function wrap(int nsScrubberSelectionViewPtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_scrubberselectionview_wrap((void *)(uintptr_t) nsScrubberSelectionViewPtr);
        }%
        return handle;
    }

    public static function destroy(int view) -> void
    {
        %{
            ns_scrubberselectionview_destroy((uintptr_t) view);
        }%
    }

    public static function nsScrubberSelectionView(int view) -> int
    {
        int handle;
        %{
            handle = (zend_long) (uintptr_t) ns_scrubberselectionview_nsscrubberselectionview((uintptr_t) view);
        }%
        return handle;
    }

    public static function setSelected(int view, bool flag) -> void
    {
        %{
            ns_scrubberselectionview_set_selected((uintptr_t) view, flag ? 1 : 0);
        }%
    }

    public static function isSelected(int view) -> bool
    {
        bool result;
        %{
            result = ns_scrubberselectionview_is_selected((uintptr_t) view) == 1;
        }%
        return result;
    }

    public static function setHighlighted(int view, bool flag) -> void
    {
        %{
            ns_scrubberselectionview_set_highlighted((uintptr_t) view, flag ? 1 : 0);
        }%
    }

    public static function isHighlighted(int view) -> bool
    {
        bool result;
        %{
            result = ns_scrubberselectionview_is_highlighted((uintptr_t) view) == 1;
        }%
        return result;
    }

    public static function applyLayoutAttributes(int view, int layoutAttributesPtr) -> void
    {
        %{
            ns_scrubberselectionview_apply_layout_attributes((uintptr_t) view, (void *)(uintptr_t) layoutAttributesPtr);
        }%
    }
}
