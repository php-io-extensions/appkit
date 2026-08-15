namespace AppKit\NS\NSATSTypesetter;

%{
#include "ns-atstypesetter.h"
#include <stdint.h>
}%


/**
 * NSATSTypesetter — ATS shared typesetter.
 */
class NSATSTypesetter

{
    public static function sharedTypesetter() -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_atstypesetter_shared_typesetter();
        }%
        return handle;
    }

    public static function wrap(int nsATSTypesetterPtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_atstypesetter_wrap((void *)(uintptr_t) nsATSTypesetterPtr);
        }%
        return handle;
    }

    public static function destroy(int typesetter) -> void
    {
        %{
            ns_atstypesetter_destroy((uintptr_t) typesetter);
        }%
    }
}
