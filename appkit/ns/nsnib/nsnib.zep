namespace AppKit\NS\NSNib;

%{
#include "ns-nib.h"
#include <stdint.h>
}%


/**
 * NSNib Interface Builder nib wrapper.
 */
class NSNib
{
    public static function createNamed(string nibName, string bundlePath = "") -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_nib_create_named(Z_STRVAL(nibName), Z_STRVAL(bundlePath));
        }%
        return handle;
    }
    public static function wrap(int nsNibPtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_nib_wrap((void *)(uintptr_t) nsNibPtr);
        }%
        return handle;
    }
    public static function destroy(int nib) -> void
    {
        %{
            ns_nib_destroy((uintptr_t) nib);
        }%
    }
    public static function nsNib(int nib) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_nib_nsnib((uintptr_t) nib);
        }%
        return ptr;
    }
    public static function instantiateWithOwner(int nib, int ownerPtr) -> bool
    {
        bool result;
        %{
            int count = 0;
            result = ns_nib_instantiate_with_owner((uintptr_t) nib, (uintptr_t) ownerPtr, &count) == 1;
        }%
        return result;
    }
    public static function instantiateWithOwnerTopLevelCount(int nib, int ownerPtr) -> int
    {
        int count;
        %{
            ns_nib_instantiate_with_owner((uintptr_t) nib, (uintptr_t) ownerPtr, &count);
        }%
        return count;
    }
}
