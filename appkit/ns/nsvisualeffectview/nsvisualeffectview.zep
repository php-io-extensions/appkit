namespace AppKit\NS\NSVisualEffectView;

%{
#include "ns-visualeffectview.h"
#include <stdint.h>
}%

/** NSVisualEffectView — vibrancy / material background view. */
class NSVisualEffectView
{
    public static function create(int x, int y, int width, int height) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_visualeffectview_create((double) x, (double) y, (double) width, (double) height);
        }%
        return handle;
    }

    public static function wrap(int nsVisualEffectViewPtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_visualeffectview_wrap((void *)(uintptr_t) nsVisualEffectViewPtr);
        }%
        return handle;
    }

    public static function destroy(int view) -> void
    {
        %{
            ns_visualeffectview_destroy((uintptr_t) view);
        }%
    }

    public static function nsVisualEffectView(int view) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_visualeffectview_nsvisualeffectview((uintptr_t) view);
        }%
        return ptr;
    }

    public static function setMaterial(int view, int material) -> void
    {
        %{
            ns_visualeffectview_set_material((uintptr_t) view, (int) material);
        }%
    }

    public static function getMaterial(int view) -> int
    {
        int value;
        %{
            value = (zend_long) ns_visualeffectview_get_material((uintptr_t) view);
        }%
        return value;
    }

    public static function setBlendingMode(int view, int mode) -> void
    {
        %{
            ns_visualeffectview_set_blending_mode((uintptr_t) view, (int) mode);
        }%
    }

    public static function getBlendingMode(int view) -> int
    {
        int value;
        %{
            value = (zend_long) ns_visualeffectview_get_blending_mode((uintptr_t) view);
        }%
        return value;
    }

    public static function setState(int view, int state) -> void
    {
        %{
            ns_visualeffectview_set_state((uintptr_t) view, (int) state);
        }%
    }

    public static function getState(int view) -> int
    {
        int value;
        %{
            value = (zend_long) ns_visualeffectview_get_state((uintptr_t) view);
        }%
        return value;
    }

    public static function setEmphasized(int view, bool flag) -> void
    {
        %{
            ns_visualeffectview_set_emphasized((uintptr_t) view, flag ? 1 : 0);
        }%
    }

    public static function isEmphasized(int view) -> bool
    {
        bool result;
        %{
            result = ns_visualeffectview_is_emphasized((uintptr_t) view) == 1;
        }%
        return result;
    }

    public static function interiorBackgroundStyle(int view) -> int
    {
        int value;
        %{
            value = (zend_long) ns_visualeffectview_interior_background_style((uintptr_t) view);
        }%
        return value;
    }
}
