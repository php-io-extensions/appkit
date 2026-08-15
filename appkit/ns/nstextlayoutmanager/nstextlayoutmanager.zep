namespace AppKit\NS\NSTextLayoutManager;

%{
#include "ns-textlayoutmanager.h"
#include <stdint.h>
}%


/**
 * NSTextLayoutManager — TextKit 2 layout manager.
 */
class NSTextLayoutManager

{
    public static function create() -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_textlayoutmanager_create();
        }%
        return handle;
    }

    public static function wrap(int nsTextLayoutManagerPtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_textlayoutmanager_wrap((void *)(uintptr_t) nsTextLayoutManagerPtr);
        }%
        return handle;
    }

    public static function destroy(int manager) -> void
    {
        %{
            ns_textlayoutmanager_destroy((uintptr_t) manager);
        }%
    }

    public static function usesFontLeading(int manager) -> bool
    {
        bool result;
        %{
            result = ns_textlayoutmanager_uses_font_leading((uintptr_t) manager) == 1;
        }%
        return result;
    }

    public static function setUsesFontLeading(int manager, bool flag) -> void
    {
        %{
            ns_textlayoutmanager_set_uses_font_leading((uintptr_t) manager, flag ? 1 : 0);
        }%
    }

    public static function limitsLayoutForSuspiciousContents(int manager) -> bool
    {
        bool result;
        %{
            result = ns_textlayoutmanager_limits_layout_for_suspicious_contents((uintptr_t) manager) == 1;
        }%
        return result;
    }

    public static function setLimitsLayoutForSuspiciousContents(int manager, bool flag) -> void
    {
        %{
            ns_textlayoutmanager_set_limits_layout_for_suspicious_contents((uintptr_t) manager, flag ? 1 : 0);
        }%
    }

    public static function usesHyphenation(int manager) -> bool
    {
        bool result;
        %{
            result = ns_textlayoutmanager_uses_hyphenation((uintptr_t) manager) == 1;
        }%
        return result;
    }

    public static function setUsesHyphenation(int manager, bool flag) -> void
    {
        %{
            ns_textlayoutmanager_set_uses_hyphenation((uintptr_t) manager, flag ? 1 : 0);
        }%
    }

    public static function replaceTextContentManager(int manager, int contentManager) -> void
    {
        %{
            ns_textlayoutmanager_replace_text_content_manager((uintptr_t) manager, (uintptr_t) contentManager);
        }%
    }

    public static function setTextContainer(int manager, int container) -> void
    {
        %{
            ns_textlayoutmanager_set_text_container((uintptr_t) manager, (uintptr_t) container);
        }%
    }

    public static function getTextContainer(int manager) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_textlayoutmanager_get_text_container((uintptr_t) manager);
        }%
        return handle;
    }

    /**
     * @return array [x, y, w, h]
     */
    public static function usageBoundsForTextContainer(int manager) -> array
    {
        array out = [];
        %{
            double x = 0.0, y = 0.0, w = 0.0, h = 0.0;
            ns_textlayoutmanager_usage_bounds_for_text_container((uintptr_t) manager, &x, &y, &w, &h);
            add_next_index_double(&out, x);
            add_next_index_double(&out, y);
            add_next_index_double(&out, w);
            add_next_index_double(&out, h);
        }%
        return out;
    }

    public static function textViewportLayoutController(int manager) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_textlayoutmanager_text_viewport_layout_controller((uintptr_t) manager);
        }%
        return handle;
    }

    public static function ensureLayoutForBounds(int manager, float x, float y, float w, float h) -> void
    {
        %{
            ns_textlayoutmanager_ensure_layout_for_bounds((uintptr_t) manager, (double) x, (double) y, (double) w, (double) h);
        }%
    }

    public static function invalidateLayoutForRange(int manager, int nsTextRangePtr) -> void
    {
        %{
            ns_textlayoutmanager_invalidate_layout_for_range((uintptr_t) manager, (uintptr_t) nsTextRangePtr);
        }%
    }

    public static function textLayoutFragmentForPosition(int manager, float x, float y) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_textlayoutmanager_text_layout_fragment_for_position((uintptr_t) manager, (double) x, (double) y);
        }%
        return handle;
    }

    public static function textSelectionsCount(int manager) -> int
    {
        int value;
        %{
            value = (zend_long) ns_textlayoutmanager_text_selections_count((uintptr_t) manager);
        }%
        return value;
    }
}
