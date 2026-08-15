namespace AppKit\NS\NSCustomImageRep;

%{
#include "ns-customimagerep.h"
#include <stdint.h>
}%

/**
 * NSCustomImageRep — delegate or block-driven custom drawing image rep.
 */
class NSCustomImageRep
{
    public static function wrap(int nsCustomImageRepPtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_customimagerep_wrap((void *)(uintptr_t) nsCustomImageRepPtr);
        }%
        return handle;
    }

    public static function destroy(int rep) -> void
    {
        %{
            ns_customimagerep_destroy((uintptr_t) rep);
        }%
    }

    public static function nsCustomImageRep(int rep) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_customimagerep_nscustomimagerep((uintptr_t) rep);
        }%
        return ptr;
    }

    /**
     * Creates a no-op drawing rep suitable as a placeholder host.
     */
    public static function create(double width, double height, bool flipped = true) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_customimagerep_create((double) width, (double) height, flipped ? 1 : 0);
        }%
        return handle;
    }

    public static function drawSelector(int rep) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_customimagerep_draw_selector((uintptr_t) rep);
        }%
        return ptr;
    }

    public static function delegate(int rep) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_customimagerep_delegate((uintptr_t) rep);
        }%
        return ptr;
    }
}
