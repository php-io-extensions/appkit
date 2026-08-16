namespace AppKit\NS\NSPageLayout;

%{
#include "ns-pagelayout.h"
#include <stdint.h>
}%

/**
 * NSPageLayout — page setup panel (modal).
 */
class NSPageLayout
{
    public static function pageLayout() -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_pagelayout_page_layout();
        }%
        return handle;
    }

    public static function destroy(int layout) -> void
    {
        %{
            ns_pagelayout_destroy((uintptr_t) layout);
        }%
    }

    public static function nsPageLayout(int layout) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_pagelayout_nspagelayout((uintptr_t) layout);
        }%
        return ptr;
    }

    /**
     * @return int NSModalResponse (NSOKButton / NSCancelButton)
     */
    public static function runModal(int layout) -> int
    {
        int value;
        %{
            value = (zend_long) ns_pagelayout_run_modal((uintptr_t) layout);
        }%
        return value;
    }

    /**
     * @param printInfo Borrowed NSPrintInfo pointer, or 0 for sharedPrintInfo
     * @return int NSModalResponse (NSOKButton / NSCancelButton)
     */
    public static function runModalWithPrintInfo(int layout, int printInfo = 0) -> int
    {
        int value;
        %{
            value = (zend_long) ns_pagelayout_run_modal_with_print_info(
                (uintptr_t) layout,
                (void *)(uintptr_t) printInfo
            );
        }%
        return value;
    }

    /**
     * @return int Borrowed NSPrintInfo pointer after sheet/modal, or 0
     */
    public static function printInfo(int layout) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_pagelayout_print_info((uintptr_t) layout);
        }%
        return ptr;
    }

    public static function addAccessoryController(int layout, int controller) -> void
    {
        %{
            ns_pagelayout_add_accessory_controller((uintptr_t) layout, (uintptr_t) controller);
        }%
    }

    public static function removeAccessoryController(int layout, int controller) -> void
    {
        %{
            ns_pagelayout_remove_accessory_controller((uintptr_t) layout, (uintptr_t) controller);
        }%
    }

    public static function accessoryControllerCount(int layout) -> int
    {
        int value;
        %{
            value = (zend_long) ns_pagelayout_accessory_controller_count((uintptr_t) layout);
        }%
        return value;
    }
}
