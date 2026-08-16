namespace AppKit\NS\NSPrintOperation;

%{
#include "ns-printoperation.h"
#include <stdint.h>
}%

/**
 * NSPrintOperation — print, PDF, and EPS output operations.
 */
class NSPrintOperation
{
    public static function wrap(int nsPrintOperationPtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_printoperation_wrap((void *)(uintptr_t) nsPrintOperationPtr);
        }%
        return handle;
    }

    public static function destroy(int operation) -> void
    {
        %{
            ns_printoperation_destroy((uintptr_t) operation);
        }%
    }

    public static function nsPrintOperation(int operation) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_printoperation_nsprintoperation((uintptr_t) operation);
        }%
        return ptr;
    }

    public static function printOperationWithView(int view) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_printoperation_with_view((uintptr_t) view);
        }%
        return handle;
    }

    public static function printOperationWithViewPrintInfo(int view, int printInfo) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_printoperation_with_view_print_info((uintptr_t) view, (uintptr_t) printInfo);
        }%
        return handle;
    }

    public static function pdfOperationWithViewRectPath(int view, double x, double y, double width, double height, string path, int printInfo) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_printoperation_pdf_with_view_rect_path(
                (uintptr_t) view, x, y, width, height, Z_STRVAL(path), (uintptr_t) printInfo
            );
        }%
        return handle;
    }

    public static function epsOperationWithViewRectPath(int view, double x, double y, double width, double height, string path, int printInfo) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_printoperation_eps_with_view_rect_path(
                (uintptr_t) view, x, y, width, height, Z_STRVAL(path), (uintptr_t) printInfo
            );
        }%
        return handle;
    }

    public static function currentOperation() -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_printoperation_current_operation();
        }%
        return handle;
    }

    public static function setCurrentOperation(int operation) -> void
    {
        %{
            ns_printoperation_set_current_operation((uintptr_t) operation);
        }%
    }

    public static function isCopyingOperation(int operation) -> bool
    {
        bool result;
        %{
            result = ns_printoperation_is_copying_operation((uintptr_t) operation) == 1;
        }%
        return result;
    }

    public static function preferredRenderingQuality(int operation) -> int
    {
        int value;
        %{
            value = (zend_long) ns_printoperation_preferred_rendering_quality((uintptr_t) operation);
        }%
        return value;
    }

    public static function jobTitle(int operation) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\0';
            if (ns_printoperation_job_title((uintptr_t) operation, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }

    public static function setJobTitle(int operation, string title = "") -> void
    {
        %{
            ns_printoperation_set_job_title((uintptr_t) operation, Z_STRVAL(title));
        }%
    }

    public static function showsPrintPanel(int operation) -> bool
    {
        bool result;
        %{
            result = ns_printoperation_shows_print_panel((uintptr_t) operation) == 1;
        }%
        return result;
    }

    public static function setShowsPrintPanel(int operation, bool shows) -> void
    {
        %{
            ns_printoperation_set_shows_print_panel((uintptr_t) operation, shows ? 1 : 0);
        }%
    }

    public static function showsProgressPanel(int operation) -> bool
    {
        bool result;
        %{
            result = ns_printoperation_shows_progress_panel((uintptr_t) operation) == 1;
        }%
        return result;
    }

    public static function setShowsProgressPanel(int operation, bool shows) -> void
    {
        %{
            ns_printoperation_set_shows_progress_panel((uintptr_t) operation, shows ? 1 : 0);
        }%
    }

    public static function printPanel(int operation) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_printoperation_print_panel((uintptr_t) operation);
        }%
        return handle;
    }

    public static function setPrintPanel(int operation, int panel) -> void
    {
        %{
            ns_printoperation_set_print_panel((uintptr_t) operation, (uintptr_t) panel);
        }%
    }

    public static function pageOrder(int operation) -> int
    {
        int value;
        %{
            value = (zend_long) ns_printoperation_page_order((uintptr_t) operation);
        }%
        return value;
    }

    public static function setPageOrder(int operation, int pageOrder) -> void
    {
        %{
            ns_printoperation_set_page_order((uintptr_t) operation, (int) pageOrder);
        }%
    }

    public static function runOperation(int operation) -> bool
    {
        bool result;
        %{
            result = ns_printoperation_run_operation((uintptr_t) operation) == 1;
        }%
        return result;
    }

    public static function runOperationModalForWindow(int operation, int window) -> bool
    {
        bool result;
        %{
            result = ns_printoperation_run_operation_modal_for_window((uintptr_t) operation, (uintptr_t) window) == 1;
        }%
        return result;
    }

    /**
     * @return int Borrowed NSView pointer, or 0
     */
    public static function view(int operation) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_printoperation_view((uintptr_t) operation);
        }%
        return ptr;
    }

    public static function printInfo(int operation) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_printoperation_print_info((uintptr_t) operation);
        }%
        return handle;
    }

    public static function setPrintInfo(int operation, int printInfo) -> void
    {
        %{
            ns_printoperation_set_print_info((uintptr_t) operation, (uintptr_t) printInfo);
        }%
    }

    /**
     * @return array [location, length] or empty array
     */
    public static function pageRange(int operation) -> array
    {
        array out = [];
        %{
            long location = 0, length = 0;
            if (ns_printoperation_page_range((uintptr_t) operation, &location, &length)) {
                add_next_index_long(&out, location);
                add_next_index_long(&out, length);
            }
        }%
        return out;
    }

    public static function currentPage(int operation) -> int
    {
        int value;
        %{
            value = (zend_long) ns_printoperation_current_page((uintptr_t) operation);
        }%
        return value;
    }
}
