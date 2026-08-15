namespace AppKit\NS\NSMagnificationGestureRecognizer;

%{
#include "ns-magnificationgesturerecognizer.h"
#include "ns-gesturerecognizer.h"
#include <stdint.h>
}%

/**
 * NSMagnificationGestureRecognizer — pinch-to-zoom on NSView.
 */
class NSMagnificationGestureRecognizer
{
    public static function create() -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_magnificationgesturerecognizer_create();
        }%
        return handle;
    }

    public static function destroy(int recognizer) -> void
    {
        %{
            ns_gesturerecognizer_destroy((uintptr_t) recognizer);
        }%
    }

    public static function setEnabled(int recognizer, bool enabled) -> void
    {
        %{
            ns_gesturerecognizer_set_enabled((uintptr_t) recognizer, enabled ? 1 : 0);
        }%
    }

    public static function isEnabled(int recognizer) -> bool
    {
        bool result;
        %{
            result = ns_gesturerecognizer_is_enabled((uintptr_t) recognizer) == 1;
        }%
        return result;
    }

    public static function state(int recognizer) -> int
    {
        int value;
        %{
            value = (zend_long) ns_gesturerecognizer_state((uintptr_t) recognizer);
        }%
        return value;
    }

    public static function addToView(int recognizer, int view) -> bool
    {
        bool result;
        %{
            result = ns_gesturerecognizer_add_to_view((uintptr_t) recognizer, (uintptr_t) view) == 1;
        }%
        return result;
    }

    public static function removeFromView(int recognizer, int view) -> void
    {
        %{
            ns_gesturerecognizer_remove_from_view((uintptr_t) recognizer, (uintptr_t) view);
        }%
    }

    public static function locationInView(int recognizer, int view = 0) -> array
    {
        array out = [];
        %{
            double x = 0.0, y = 0.0;
            if (ns_gesturerecognizer_location_in_view((uintptr_t) recognizer, (uintptr_t) view, &x, &y)) {
                add_next_index_double(&out, x);
                add_next_index_double(&out, y);
            }
        }%
        return out;
    }

    public static function magnification(int recognizer) -> double
    {
        double value;
        %{
            value = ns_magnificationgesturerecognizer_magnification((uintptr_t) recognizer);
        }%
        return value;
    }

    public static function setMagnification(int recognizer, float value) -> void
    {
        %{
            ns_magnificationgesturerecognizer_set_magnification((uintptr_t) recognizer, (double) value);
        }%
    }

    public static function nsMagnificationGestureRecognizer(int recognizer) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_gesturerecognizer_nsgesturerecognizer((uintptr_t) recognizer);
        }%
        return ptr;
    }
}
