namespace AppKit\NS\NSAccessibilityElement;

%{
#include "ns-accessibilityelement.h"
#include <stdint.h>
}%

class NSAccessibilityElement
{
    public static function create(string role, double x, double y, double width, double height, string label = "", int parent = 0) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_accessibilityelement_create(Z_STRVAL(role), x, y, width, height, Z_STRVAL(label), (uintptr_t) parent);
        }%
        return handle;
    }

    public static function wrap(int nsAccessibilityElementPtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_accessibilityelement_wrap((void *)(uintptr_t) nsAccessibilityElementPtr);
        }%
        return handle;
    }

    public static function destroy(int element) -> void
    {
        %{
            ns_accessibilityelement_destroy((uintptr_t) element);
        }%
    }

    public static function nsAccessibilityElement(int element) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_accessibilityelement_nsaccessibilityelement((uintptr_t) element);
        }%
        return ptr;
    }

    public static function addChild(int element, int child) -> void
    {
        %{
            ns_accessibilityelement_add_child((uintptr_t) element, (uintptr_t) child);
        }%
    }

    public static function setFrameInParent(int element, double x, double y, double width, double height) -> void
    {
        %{
            ns_accessibilityelement_set_frame_in_parent((uintptr_t) element, x, y, width, height);
        }%
    }

    public static function frameInParent(int element) -> array
    {
        %{
            double x = 0, y = 0, w = 0, h = 0;
            zval frame;
            array_init(&frame);
            if (ns_accessibilityelement_frame_in_parent((uintptr_t) element, &x, &y, &w, &h)) {
                add_next_index_double(&frame, x);
                add_next_index_double(&frame, y);
                add_next_index_double(&frame, w);
                add_next_index_double(&frame, h);
            }
            RETURN_ZVAL(&frame, 0, 0);
        }%
        return [];
    }
}
