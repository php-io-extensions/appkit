namespace AppKit\NS\NSGraphicsContext;

%{
#include "ns-graphicscontext.h"
#include <stdint.h>
}%

/**
 * NSGraphicsContext — current drawing context and graphics state.
 */
class NSGraphicsContext
{
    public static function current() -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_graphicscontext_current();
        }%
        return handle;
    }

    public static function setCurrent(int context) -> void
    {
        %{
            ns_graphicscontext_set_current((uintptr_t) context);
        }%
    }

    public static function drawingToScreen() -> bool
    {
        bool result;
        %{
            result = ns_graphicscontext_drawing_to_screen() == 1;
        }%
        return result;
    }

    public static function instanceDrawingToScreen(int context) -> bool
    {
        bool result;
        %{
            result = ns_graphicscontext_instance_drawing_to_screen((uintptr_t) context) == 1;
        }%
        return result;
    }

    public static function saveState() -> void
    {
        %{
            ns_graphicscontext_save_state();
        }%
    }

    public static function restoreState() -> void
    {
        %{
            ns_graphicscontext_restore_state();
        }%
    }

    public static function withBitmapRep(int bitmapRep) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_graphicscontext_with_bitmap_rep((uintptr_t) bitmapRep);
        }%
        return handle;
    }

    public static function wrap(int nsGraphicsContextPtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_graphicscontext_wrap((void *)(uintptr_t) nsGraphicsContextPtr);
        }%
        return handle;
    }

    public static function destroy(int context) -> void
    {
        %{
            ns_graphicscontext_destroy((uintptr_t) context);
        }%
    }

    public static function nsGraphicsContext(int context) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_graphicscontext_nsgraphicscontext((uintptr_t) context);
        }%
        return ptr;
    }

    public static function saveGraphicsState(int context) -> void
    {
        %{
            ns_graphicscontext_save_graphics_state((uintptr_t) context);
        }%
    }

    public static function restoreGraphicsState(int context) -> void
    {
        %{
            ns_graphicscontext_restore_graphics_state((uintptr_t) context);
        }%
    }

    public static function flush(int context) -> void
    {
        %{
            ns_graphicscontext_flush((uintptr_t) context);
        }%
    }

    public static function setShouldAntialias(int context, bool enabled) -> void
    {
        %{
            ns_graphicscontext_set_should_antialias((uintptr_t) context, enabled ? 1 : 0);
        }%
    }

    public static function getShouldAntialias(int context) -> bool
    {
        bool result;
        %{
            result = ns_graphicscontext_get_should_antialias((uintptr_t) context) == 1;
        }%
        return result;
    }

    public static function setImageInterpolation(int context, int interpolation) -> void
    {
        %{
            ns_graphicscontext_set_image_interpolation((uintptr_t) context, (int) interpolation);
        }%
    }

    public static function getImageInterpolation(int context) -> int
    {
        int value;
        %{
            value = (zend_long) ns_graphicscontext_get_image_interpolation((uintptr_t) context);
        }%
        return value;
    }

    public static function setPatternPhase(int context, float x, float y) -> void
    {
        %{
            ns_graphicscontext_set_pattern_phase((uintptr_t) context, (double) x, (double) y);
        }%
    }

    /**
     * @return array [x, y]
     */
    public static function getPatternPhase(int context) -> array
    {
        array out = [];
        %{
            double x = 0.0, y = 0.0;
            ns_graphicscontext_get_pattern_phase((uintptr_t) context, &x, &y);
            add_next_index_double(&out, x);
            add_next_index_double(&out, y);
        }%
        return out;
    }

    public static function setCompositingOperation(int context, int operation) -> void
    {
        %{
            ns_graphicscontext_set_compositing_operation((uintptr_t) context, (int) operation);
        }%
    }

    public static function getCompositingOperation(int context) -> int
    {
        int value;
        %{
            value = (zend_long) ns_graphicscontext_get_compositing_operation((uintptr_t) context);
        }%
        return value;
    }

    public static function isFlipped(int context) -> bool
    {
        bool result;
        %{
            result = ns_graphicscontext_is_flipped((uintptr_t) context) == 1;
        }%
        return result;
    }
}
