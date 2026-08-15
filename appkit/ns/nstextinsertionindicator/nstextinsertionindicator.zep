namespace AppKit\NS\NSTextInsertionIndicator;

%{
#include "ns-textinsertionindicator.h"
#include <stdint.h>
}%


/**
 * NSTextInsertionIndicator — TextKit 2 caret indicator view (macOS 14+).
 */
class NSTextInsertionIndicator
{
    public static function create(int x, int y, int width, int height) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_textinsertionindicator_create((double) x, (double) y, (double) width, (double) height);
        }%
        return handle;
    }

    public static function wrap(int nsTextInsertionIndicatorPtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_textinsertionindicator_wrap((void *)(uintptr_t) nsTextInsertionIndicatorPtr);
        }%
        return handle;
    }

    public static function destroy(int indicator) -> void
    {
        %{
            ns_textinsertionindicator_destroy((uintptr_t) indicator);
        }%
    }

    public static function nsTextInsertionIndicator(int indicator) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_textinsertionindicator_nstextinsertionindicator((uintptr_t) indicator);
        }%
        return ptr;
    }

    public static function setDisplayMode(int indicator, int mode) -> void
    {
        %{
            ns_textinsertionindicator_set_display_mode((uintptr_t) indicator, (int) mode);
        }%
    }

    public static function getDisplayMode(int indicator) -> int
    {
        int value;
        %{
            value = (zend_long) ns_textinsertionindicator_get_display_mode((uintptr_t) indicator);
        }%
        return value;
    }

    public static function setColor(int indicator, int color) -> void
    {
        %{
            ns_textinsertionindicator_set_color((uintptr_t) indicator, (uintptr_t) color);
        }%
    }

    public static function getColor(int indicator) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_textinsertionindicator_get_color((uintptr_t) indicator);
        }%
        return handle;
    }

    public static function setAutomaticModeOptions(int indicator, int options) -> void
    {
        %{
            ns_textinsertionindicator_set_automatic_mode_options((uintptr_t) indicator, (int) options);
        }%
    }

    public static function getAutomaticModeOptions(int indicator) -> int
    {
        int value;
        %{
            value = (zend_long) ns_textinsertionindicator_get_automatic_mode_options((uintptr_t) indicator);
        }%
        return value;
    }

    /** Maps to effectsViewInserter — adds the glow view as subview of parentView. */
    public static function setEffectsViewInserterParent(int indicator, int parentView) -> void
    {
        %{
            ns_textinsertionindicator_set_effects_view_inserter_parent((uintptr_t) indicator, (uintptr_t) parentView);
        }%
    }

    public static function clearEffectsViewInserter(int indicator) -> void
    {
        %{
            ns_textinsertionindicator_clear_effects_view_inserter((uintptr_t) indicator);
        }%
    }

    public static function hasEffectsViewInserter(int indicator) -> bool
    {
        bool result;
        %{
            result = ns_textinsertionindicator_has_effects_view_inserter((uintptr_t) indicator) == 1;
        }%
        return result;
    }
}
