namespace AppKit\NS\NSPrinter;

%{
#include "ns-printer.h"
#include <stdint.h>
}%

/**
 * NSPrinter — available printers and device metadata.
 */
class NSPrinter
{
    public static function wrap(int nsPrinterPtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_printer_wrap((void *)(uintptr_t) nsPrinterPtr);
        }%
        return handle;
    }

    public static function destroy(int printer) -> void
    {
        %{
            ns_printer_destroy((uintptr_t) printer);
        }%
    }

    public static function nsPrinter(int printer) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_printer_nsprinter((uintptr_t) printer);
        }%
        return ptr;
    }

    public static function namesCount() -> int
    {
        int count;
        %{
            count = (zend_long) ns_printer_names_count();
        }%
        return count;
    }

    public static function nameAt(int index) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\0';
            if (ns_printer_names_at((int) index, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }

    public static function typesCount() -> int
    {
        int count;
        %{
            count = (zend_long) ns_printer_types_count();
        }%
        return count;
    }

    public static function typeAt(int index) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\0';
            if (ns_printer_types_at((int) index, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }

    public static function withName(string name) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_printer_with_name(Z_STRVAL(name));
        }%
        return handle;
    }

    public static function withType(string type) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_printer_with_type(Z_STRVAL(type));
        }%
        return handle;
    }

    public static function name(int printer) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\0';
            if (ns_printer_name((uintptr_t) printer, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }

    public static function type(int printer) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\0';
            if (ns_printer_type((uintptr_t) printer, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }

    public static function languageLevel(int printer) -> int
    {
        int value;
        %{
            value = (zend_long) ns_printer_language_level((uintptr_t) printer);
        }%
        return value;
    }

    /**
     * @return array [width, height] or empty array
     */
    public static function pageSizeForPaper(int printer, string paperName) -> array
    {
        array out = [];
        %{
            double w = 0, h = 0;
            if (ns_printer_page_size_for_paper((uintptr_t) printer, Z_STRVAL(paperName), &w, &h)) {
                add_next_index_double(&out, w);
                add_next_index_double(&out, h);
            }
        }%
        return out;
    }

    public static function deviceIsPrinter(int printer) -> bool
    {
        bool result;
        %{
            result = ns_printer_device_is_printer((uintptr_t) printer) == 1;
        }%
        return result;
    }
}
