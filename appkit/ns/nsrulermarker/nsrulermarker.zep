namespace AppKit\NS\NSRulerMarker;

%{
#include "ns-rulermarker.h"
#include <stdint.h>
}%

/** NSRulerMarker — draggable marker on an NSRulerView. */
class NSRulerMarker
{
    public static function create(int ruler, double location) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_rulermarker_create((uintptr_t) ruler, location);
        }%
        return handle;
    }

    public static function wrap(int nsRulerMarkerPtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_rulermarker_wrap((void *)(uintptr_t) nsRulerMarkerPtr);
        }%
        return handle;
    }

    public static function destroy(int marker) -> void
    {
        %{
            ns_rulermarker_destroy((uintptr_t) marker);
        }%
    }

    public static function nsRulerMarker(int marker) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_rulermarker_nsrulermarker((uintptr_t) marker);
        }%
        return ptr;
    }

    public static function setLocation(int marker, double location) -> void
    {
        %{
            ns_rulermarker_set_location((uintptr_t) marker, location);
        }%
    }

    public static function getLocation(int marker) -> double
    {
        double value;
        %{
            value = ns_rulermarker_get_location((uintptr_t) marker);
        }%
        return value;
    }

    public static function setMovable(int marker, bool flag) -> void
    {
        %{
            ns_rulermarker_set_movable((uintptr_t) marker, flag ? 1 : 0);
        }%
    }

    public static function isMovable(int marker) -> bool
    {
        bool result;
        %{
            result = ns_rulermarker_is_movable((uintptr_t) marker) == 1;
        }%
        return result;
    }

    public static function setRemovable(int marker, bool flag) -> void
    {
        %{
            ns_rulermarker_set_removable((uintptr_t) marker, flag ? 1 : 0);
        }%
    }

    public static function isRemovable(int marker) -> bool
    {
        bool result;
        %{
            result = ns_rulermarker_is_removable((uintptr_t) marker) == 1;
        }%
        return result;
    }

    public static function thicknessRequired(int marker) -> double
    {
        double value;
        %{
            value = ns_rulermarker_thickness_required((uintptr_t) marker);
        }%
        return value;
    }

    public static function isDragging(int marker) -> bool
    {
        bool result;
        %{
            result = ns_rulermarker_is_dragging((uintptr_t) marker) == 1;
        }%
        return result;
    }
}
