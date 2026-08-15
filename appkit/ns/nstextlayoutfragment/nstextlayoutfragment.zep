namespace AppKit\NS\NSTextLayoutFragment;

%{
#include "ns-textlayoutfragment.h"
#include <stdint.h>
}%


/**
 * NSTextLayoutFragment — laid-out text fragment.
 */
class NSTextLayoutFragment

{
    public static function wrap(int nsTextLayoutFragmentPtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_textlayoutfragment_wrap((void *)(uintptr_t) nsTextLayoutFragmentPtr);
        }%
        return handle;
    }

    public static function destroy(int fragment) -> void
    {
        %{
            ns_textlayoutfragment_destroy((uintptr_t) fragment);
        }%
    }

    public static function state(int fragment) -> int
    {
        int value;
        %{
            value = (zend_long) ns_textlayoutfragment_get_state((uintptr_t) fragment);
        }%
        return value;
    }

    /**
     * @return array [x, y, w, h]
     */
    public static function layoutFragmentFrame(int fragment) -> array
    {
        array out = [];
        %{
            double x = 0.0, y = 0.0, w = 0.0, h = 0.0;
            ns_textlayoutfragment_layout_fragment_frame((uintptr_t) fragment, &x, &y, &w, &h);
            add_next_index_double(&out, x);
            add_next_index_double(&out, y);
            add_next_index_double(&out, w);
            add_next_index_double(&out, h);
        }%
        return out;
    }

    /**
     * @return array [x, y, w, h]
     */
    public static function renderingSurfaceBounds(int fragment) -> array
    {
        array out = [];
        %{
            double x = 0.0, y = 0.0, w = 0.0, h = 0.0;
            ns_textlayoutfragment_rendering_surface_bounds((uintptr_t) fragment, &x, &y, &w, &h);
            add_next_index_double(&out, x);
            add_next_index_double(&out, y);
            add_next_index_double(&out, w);
            add_next_index_double(&out, h);
        }%
        return out;
    }

    public static function textLineFragmentsCount(int fragment) -> int
    {
        int value;
        %{
            value = (zend_long) ns_textlayoutfragment_text_line_fragments_count((uintptr_t) fragment);
        }%
        return value;
    }

    public static function invalidateLayout(int fragment) -> void
    {
        %{
            ns_textlayoutfragment_invalidate_layout((uintptr_t) fragment);
        }%
    }

    public static function leadingPadding(int fragment) -> float
    {
        double value;
        %{
            value = ns_textlayoutfragment_leading_padding((uintptr_t) fragment);
        }%
        return (float) value;
    }

    public static function trailingPadding(int fragment) -> float
    {
        double value;
        %{
            value = ns_textlayoutfragment_trailing_padding((uintptr_t) fragment);
        }%
        return (float) value;
    }

    public static function topMargin(int fragment) -> float
    {
        double value;
        %{
            value = ns_textlayoutfragment_top_margin((uintptr_t) fragment);
        }%
        return (float) value;
    }

    public static function bottomMargin(int fragment) -> float
    {
        double value;
        %{
            value = ns_textlayoutfragment_bottom_margin((uintptr_t) fragment);
        }%
        return (float) value;
    }
}
