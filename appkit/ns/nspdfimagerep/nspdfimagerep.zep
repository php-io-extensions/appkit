namespace AppKit\NS\NSPDFImageRep;

%{
#include "ns-pdfimagerep.h"
#include <stdint.h>
}%

/**
 * NSPDFImageRep — PDF page image representation.
 */
class NSPDFImageRep
{
    public static function wrap(int nsPDFImageRepPtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_pdfimagerep_wrap((void *)(uintptr_t) nsPDFImageRepPtr);
        }%
        return handle;
    }

    public static function destroy(int rep) -> void
    {
        %{
            ns_pdfimagerep_destroy((uintptr_t) rep);
        }%
    }

    public static function nsPDFImageRep(int rep) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_pdfimagerep_nspdfimagerep((uintptr_t) rep);
        }%
        return ptr;
    }

    public static function withData(string data) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_pdfimagerep_with_data(Z_STRVAL(data), Z_STRLEN(data));
        }%
        return handle;
    }

    /**
     * @return array [x, y, width, height] or empty array
     */
    public static function getBounds(int rep) -> array
    {
        array out = [];
        %{
            double x = 0.0, y = 0.0, w = 0.0, h = 0.0;
            if (ns_pdfimagerep_get_bounds((uintptr_t) rep, &x, &y, &w, &h)) {
                add_next_index_double(&out, x);
                add_next_index_double(&out, y);
                add_next_index_double(&out, w);
                add_next_index_double(&out, h);
            }
        }%
        return out;
    }

    public static function pdfRepresentation(int rep) -> string
    {
        %{
            char *buf = NULL;
            size_t len = 0;
            if (ns_pdfimagerep_get_pdf_representation((uintptr_t) rep, &buf, &len) && buf && len > 0) {
                RETVAL_STRINGL(buf, len);
                ns_pdfimagerep_free_buffer(buf);
                return;
            }
            ns_pdfimagerep_free_buffer(buf);
            RETURN_EMPTY_STRING();
        }%
        return "";
    }

    public static function currentPage(int rep) -> int
    {
        int value;
        %{
            value = (zend_long) ns_pdfimagerep_current_page((uintptr_t) rep);
        }%
        return value;
    }

    public static function setCurrentPage(int rep, int page) -> void
    {
        %{
            ns_pdfimagerep_set_current_page((uintptr_t) rep, (int) page);
        }%
    }

    public static function pageCount(int rep) -> int
    {
        int value;
        %{
            value = (zend_long) ns_pdfimagerep_page_count((uintptr_t) rep);
        }%
        return value;
    }
}
