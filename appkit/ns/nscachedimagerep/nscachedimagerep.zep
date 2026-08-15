namespace AppKit\NS\NSCachedImageRep;

%{
#include "ns-cachedimagerep.h"
#include <stdint.h>
}%

/**
 * NSCachedImageRep — deprecated window-backed cached image rep (macOS 10.0–10.6).
 */
class NSCachedImageRep
{
    public static function wrap(int nsCachedImageRepPtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_cachedimagerep_wrap((void *)(uintptr_t) nsCachedImageRepPtr);
        }%
        return handle;
    }

    public static function destroy(int rep) -> void
    {
        %{
            ns_cachedimagerep_destroy((uintptr_t) rep);
        }%
    }

    public static function nsCachedImageRep(int rep) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_cachedimagerep_nscachedimagerep((uintptr_t) rep);
        }%
        return ptr;
    }

    public static function withWindowRect(int window, double x, double y, double width, double height) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_cachedimagerep_with_window_rect((uintptr_t) window, (double) x, (double) y, (double) width, (double) height);
        }%
        return handle;
    }

    public static function withSize(double width, double height, int depth, bool separate, bool alpha) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_cachedimagerep_with_size((double) width, (double) height, (int) depth, separate ? 1 : 0, alpha ? 1 : 0);
        }%
        return handle;
    }

    public static function window(int rep) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_cachedimagerep_window((uintptr_t) rep);
        }%
        return ptr;
    }

    /**
     * @return array [x, y, width, height] or empty array
     */
    public static function getRect(int rep) -> array
    {
        array out = [];
        %{
            double x = 0.0, y = 0.0, w = 0.0, h = 0.0;
            if (ns_cachedimagerep_get_rect((uintptr_t) rep, &x, &y, &w, &h)) {
                add_next_index_double(&out, x);
                add_next_index_double(&out, y);
                add_next_index_double(&out, w);
                add_next_index_double(&out, h);
            }
        }%
        return out;
    }
}
