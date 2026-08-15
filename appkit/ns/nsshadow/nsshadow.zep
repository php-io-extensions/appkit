namespace AppKit\NS\NSShadow;

%{
#include "ns-shadow.h"
#include <stdint.h>
}%

/**
 * NSShadow — drop-shadow attributes for drawing.
 */
class NSShadow
{
    public static function create() -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_shadow_create();
        }%
        return handle;
    }

    public static function wrap(int nsShadowPtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_shadow_wrap((void *)(uintptr_t) nsShadowPtr);
        }%
        return handle;
    }

    public static function destroy(int shadow) -> void
    {
        %{
            ns_shadow_destroy((uintptr_t) shadow);
        }%
    }

    public static function nsShadow(int shadow) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_shadow_nsshadow((uintptr_t) shadow);
        }%
        return ptr;
    }

    public static function setOffset(int shadow, float width, float height) -> void
    {
        %{
            ns_shadow_set_offset((uintptr_t) shadow, (double) width, (double) height);
        }%
    }

    /**
     * @return array [w, h]
     */
    public static function getOffset(int shadow) -> array
    {
        array out = [];
        %{
            double w = 0.0, h = 0.0;
            ns_shadow_get_offset((uintptr_t) shadow, &w, &h);
            add_next_index_double(&out, w);
            add_next_index_double(&out, h);
        }%
        return out;
    }

    public static function setBlurRadius(int shadow, float radius) -> void
    {
        %{
            ns_shadow_set_blur_radius((uintptr_t) shadow, (double) radius);
        }%
    }

    public static function getBlurRadius(int shadow) -> double
    {
        double value;
        %{
            value = ns_shadow_get_blur_radius((uintptr_t) shadow);
        }%
        return value;
    }

    public static function setColor(int shadow, int color) -> void
    {
        %{
            ns_shadow_set_color((uintptr_t) shadow, (uintptr_t) color);
        }%
    }

    public static function getColor(int shadow) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_shadow_get_color((uintptr_t) shadow);
        }%
        return handle;
    }

    public static function set(int shadow) -> void
    {
        %{
            ns_shadow_set((uintptr_t) shadow);
        }%
    }
}
