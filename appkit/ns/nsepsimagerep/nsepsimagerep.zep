namespace AppKit\NS\NSEPSImageRep;

%{
#include "ns-epsimagerep.h"
#include <stdint.h>
}%

/**
 * NSEPSImageRep — EPS image representation (deprecated; nil on macOS 14+).
 */
class NSEPSImageRep
{
    public static function wrap(int nsEPSImageRepPtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_epsimagerep_wrap((void *)(uintptr_t) nsEPSImageRepPtr);
        }%
        return handle;
    }

    public static function destroy(int rep) -> void
    {
        %{
            ns_epsimagerep_destroy((uintptr_t) rep);
        }%
    }

    public static function nsEPSImageRep(int rep) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_epsimagerep_nsepsimagerep((uintptr_t) rep);
        }%
        return ptr;
    }

    public static function withData(string data) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_epsimagerep_with_data(Z_STRVAL(data), Z_STRLEN(data));
        }%
        return handle;
    }

    /**
     * @return array [x, y, width, height] or empty array
     */
    public static function getBoundingBox(int rep) -> array
    {
        array out = [];
        %{
            double x = 0.0, y = 0.0, w = 0.0, h = 0.0;
            if (ns_epsimagerep_get_bounding_box((uintptr_t) rep, &x, &y, &w, &h)) {
                add_next_index_double(&out, x);
                add_next_index_double(&out, y);
                add_next_index_double(&out, w);
                add_next_index_double(&out, h);
            }
        }%
        return out;
    }

    public static function epsRepresentation(int rep) -> string
    {
        %{
            char *buf = NULL;
            size_t len = 0;
            if (ns_epsimagerep_get_eps_representation((uintptr_t) rep, &buf, &len) && buf && len > 0) {
                RETVAL_STRINGL(buf, len);
                ns_epsimagerep_free_buffer(buf);
                return;
            }
            ns_epsimagerep_free_buffer(buf);
            RETURN_EMPTY_STRING();
        }%
        return "";
    }
}
