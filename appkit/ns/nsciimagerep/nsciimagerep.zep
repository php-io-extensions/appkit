namespace AppKit\NS\NSCIImageRep;

%{
#include "ns-ciimagerep.h"
#include <stdint.h>
}%

/**
 * NSCIImageRep — Core Image backed image representation.
 */
class NSCIImageRep
{
    public static function wrap(int nsCIImageRepPtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_ciimagerep_wrap((void *)(uintptr_t) nsCIImageRepPtr);
        }%
        return handle;
    }

    public static function destroy(int rep) -> void
    {
        %{
            ns_ciimagerep_destroy((uintptr_t) rep);
        }%
    }

    public static function nsCIImageRep(int rep) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_ciimagerep_nsciimagerep((uintptr_t) rep);
        }%
        return ptr;
    }

    public static function withCIImage(int ciImagePtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_ciimagerep_with_ciimage((uintptr_t) ciImagePtr);
        }%
        return handle;
    }

    public static function ciImage(int rep) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_ciimagerep_ciimage((uintptr_t) rep);
        }%
        return ptr;
    }
}
