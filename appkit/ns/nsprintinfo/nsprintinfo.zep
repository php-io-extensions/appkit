namespace AppKit\NS\NSPrintInfo;

%{
#include "ns-printinfo.h"
#include <stdint.h>
}%

/**
 * NSPrintInfo — page setup and print job attributes.
 */
class NSPrintInfo
{
    public static function wrap(int nsPrintInfoPtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_printinfo_wrap((void *)(uintptr_t) nsPrintInfoPtr);
        }%
        return handle;
    }

    public static function destroy(int printInfo) -> void
    {
        %{
            ns_printinfo_destroy((uintptr_t) printInfo);
        }%
    }

    public static function nsPrintInfo(int printInfo) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_printinfo_nsprintinfo((uintptr_t) printInfo);
        }%
        return ptr;
    }

    public static function create() -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_printinfo_create();
        }%
        return handle;
    }

    public static function shared() -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_printinfo_shared();
        }%
        return handle;
    }

    public static function setShared(int printInfo) -> void
    {
        %{
            ns_printinfo_set_shared((void *)(uintptr_t) printInfo);
        }%
    }

    /**
     * @return int Borrowed NSPrinter pointer, or 0
     */
    public static function defaultPrinter() -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_printinfo_default_printer();
        }%
        return ptr;
    }

    public static function paperName(int printInfo) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\0';
            if (ns_printinfo_paper_name((uintptr_t) printInfo, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }

    public static function setPaperName(int printInfo, string name) -> void
    {
        %{
            ns_printinfo_set_paper_name((uintptr_t) printInfo, Z_STRVAL(name));
        }%
    }

    /**
     * @return array [width, height] or empty array
     */
    public static function paperSize(int printInfo) -> array
    {
        array out = [];
        %{
            double w = 0, h = 0;
            if (ns_printinfo_paper_size((uintptr_t) printInfo, &w, &h)) {
                add_next_index_double(&out, w);
                add_next_index_double(&out, h);
            }
        }%
        return out;
    }

    public static function setPaperSize(int printInfo, double width, double height) -> void
    {
        %{
            ns_printinfo_set_paper_size((uintptr_t) printInfo, width, height);
        }%
    }

    public static function orientation(int printInfo) -> int
    {
        int value;
        %{
            value = (zend_long) ns_printinfo_orientation((uintptr_t) printInfo);
        }%
        return value;
    }

    public static function setOrientation(int printInfo, int orientation) -> void
    {
        %{
            ns_printinfo_set_orientation((uintptr_t) printInfo, (int) orientation);
        }%
    }

    public static function scalingFactor(int printInfo) -> double
    {
        double value;
        %{
            value = ns_printinfo_scaling_factor((uintptr_t) printInfo);
        }%
        return value;
    }

    public static function setScalingFactor(int printInfo, double factor) -> void
    {
        %{
            ns_printinfo_set_scaling_factor((uintptr_t) printInfo, factor);
        }%
    }

    public static function leftMargin(int printInfo) -> double
    {
        double value;
        %{
            value = ns_printinfo_left_margin((uintptr_t) printInfo);
        }%
        return value;
    }

    public static function setLeftMargin(int printInfo, double value) -> void
    {
        %{
            ns_printinfo_set_left_margin((uintptr_t) printInfo, value);
        }%
    }

    public static function rightMargin(int printInfo) -> double
    {
        double value;
        %{
            value = ns_printinfo_right_margin((uintptr_t) printInfo);
        }%
        return value;
    }

    public static function setRightMargin(int printInfo, double value) -> void
    {
        %{
            ns_printinfo_set_right_margin((uintptr_t) printInfo, value);
        }%
    }

    public static function topMargin(int printInfo) -> double
    {
        double value;
        %{
            value = ns_printinfo_top_margin((uintptr_t) printInfo);
        }%
        return value;
    }

    public static function setTopMargin(int printInfo, double value) -> void
    {
        %{
            ns_printinfo_set_top_margin((uintptr_t) printInfo, value);
        }%
    }

    public static function bottomMargin(int printInfo) -> double
    {
        double value;
        %{
            value = ns_printinfo_bottom_margin((uintptr_t) printInfo);
        }%
        return value;
    }

    public static function setBottomMargin(int printInfo, double value) -> void
    {
        %{
            ns_printinfo_set_bottom_margin((uintptr_t) printInfo, value);
        }%
    }

    public static function isHorizontallyCentered(int printInfo) -> bool
    {
        bool result;
        %{
            result = ns_printinfo_is_horizontally_centered((uintptr_t) printInfo) == 1;
        }%
        return result;
    }

    public static function setHorizontallyCentered(int printInfo, bool centered) -> void
    {
        %{
            ns_printinfo_set_horizontally_centered((uintptr_t) printInfo, centered ? 1 : 0);
        }%
    }

    public static function isVerticallyCentered(int printInfo) -> bool
    {
        bool result;
        %{
            result = ns_printinfo_is_vertically_centered((uintptr_t) printInfo) == 1;
        }%
        return result;
    }

    public static function setVerticallyCentered(int printInfo, bool centered) -> void
    {
        %{
            ns_printinfo_set_vertically_centered((uintptr_t) printInfo, centered ? 1 : 0);
        }%
    }

    public static function horizontalPagination(int printInfo) -> int
    {
        int value;
        %{
            value = (zend_long) ns_printinfo_horizontal_pagination((uintptr_t) printInfo);
        }%
        return value;
    }

    public static function setHorizontalPagination(int printInfo, int mode) -> void
    {
        %{
            ns_printinfo_set_horizontal_pagination((uintptr_t) printInfo, (int) mode);
        }%
    }

    public static function verticalPagination(int printInfo) -> int
    {
        int value;
        %{
            value = (zend_long) ns_printinfo_vertical_pagination((uintptr_t) printInfo);
        }%
        return value;
    }

    public static function setVerticalPagination(int printInfo, int mode) -> void
    {
        %{
            ns_printinfo_set_vertical_pagination((uintptr_t) printInfo, (int) mode);
        }%
    }

    public static function jobDisposition(int printInfo) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\0';
            if (ns_printinfo_job_disposition((uintptr_t) printInfo, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }

    public static function setJobDisposition(int printInfo, string disposition) -> void
    {
        %{
            ns_printinfo_set_job_disposition((uintptr_t) printInfo, Z_STRVAL(disposition));
        }%
    }

    public static function printer(int printInfo) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_printinfo_printer((uintptr_t) printInfo);
        }%
        return handle;
    }

    public static function setPrinter(int printInfo, int printer) -> void
    {
        %{
            ns_printinfo_set_printer((uintptr_t) printInfo, (uintptr_t) printer);
        }%
    }

    public static function setUpPrintOperationDefaultValues(int printInfo) -> void
    {
        %{
            ns_printinfo_set_up_print_operation_default_values((uintptr_t) printInfo);
        }%
    }

    /**
     * @return array [x, y, width, height] or empty array
     */
    public static function imageablePageBounds(int printInfo) -> array
    {
        array out = [];
        %{
            double x = 0, y = 0, w = 0, h = 0;
            if (ns_printinfo_imageable_page_bounds((uintptr_t) printInfo, &x, &y, &w, &h)) {
                add_next_index_double(&out, x);
                add_next_index_double(&out, y);
                add_next_index_double(&out, w);
                add_next_index_double(&out, h);
            }
        }%
        return out;
    }

    public static function localizedPaperName(int printInfo) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\0';
            if (ns_printinfo_localized_paper_name((uintptr_t) printInfo, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }

    public static function isSelectionOnly(int printInfo) -> bool
    {
        bool result;
        %{
            result = ns_printinfo_is_selection_only((uintptr_t) printInfo) == 1;
        }%
        return result;
    }

    public static function setSelectionOnly(int printInfo, bool selectionOnly) -> void
    {
        %{
            ns_printinfo_set_selection_only((uintptr_t) printInfo, selectionOnly ? 1 : 0);
        }%
    }
}
