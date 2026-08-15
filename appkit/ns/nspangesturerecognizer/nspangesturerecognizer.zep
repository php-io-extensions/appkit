namespace AppKit\NS\NSPanGestureRecognizer;

%{
#include "ns-pangesturerecognizer.h"
#include "ns-gesturerecognizer.h"
#include <stdint.h>
}%

/**
 * NSPanGestureRecognizer — drag / pan translation on NSView.
 */
class NSPanGestureRecognizer
{
    public static function create() -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_pangesturerecognizer_create();
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

    public static function setButtonMask(int recognizer, int mask) -> void
    {
        %{
            ns_pangesturerecognizer_set_button_mask((uintptr_t) recognizer, (unsigned) mask);
        }%
    }

    public static function buttonMask(int recognizer) -> int
    {
        int value;
        %{
            value = (zend_long) ns_pangesturerecognizer_button_mask((uintptr_t) recognizer);
        }%
        return value;
    }

    public static function translationInView(int recognizer, int view = 0) -> array
    {
        array out = [];
        %{
            double x = 0.0, y = 0.0;
            if (ns_pangesturerecognizer_translation_in_view((uintptr_t) recognizer, (uintptr_t) view, &x, &y)) {
                add_next_index_double(&out, x);
                add_next_index_double(&out, y);
            }
        }%
        return out;
    }

    public static function setTranslationInView(int recognizer, float x, float y, int view = 0) -> void
    {
        %{
            ns_pangesturerecognizer_set_translation_in_view(
                (uintptr_t) recognizer,
                (uintptr_t) view,
                (double) x,
                (double) y
            );
        }%
    }

    public static function velocityInView(int recognizer, int view = 0) -> array
    {
        array out = [];
        %{
            double x = 0.0, y = 0.0;
            if (ns_pangesturerecognizer_velocity_in_view((uintptr_t) recognizer, (uintptr_t) view, &x, &y)) {
                add_next_index_double(&out, x);
                add_next_index_double(&out, y);
            }
        }%
        return out;
    }

    public static function setNumberOfTouchesRequired(int recognizer, int count) -> void
    {
        %{
            ns_pangesturerecognizer_set_number_of_touches_required((uintptr_t) recognizer, (int) count);
        }%
    }

    public static function numberOfTouchesRequired(int recognizer) -> int
    {
        int value;
        %{
            value = (zend_long) ns_pangesturerecognizer_number_of_touches_required((uintptr_t) recognizer);
        }%
        return value;
    }

    public static function nsPanGestureRecognizer(int recognizer) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_gesturerecognizer_nsgesturerecognizer((uintptr_t) recognizer);
        }%
        return ptr;
    }
}
