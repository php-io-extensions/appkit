namespace AppKit\NS\NSTextFinder;

%{
#include "ns-textfinder.h"
#include <stdint.h>
}%


/**
 * NSTextFinder — find / replace controller.
 */
class NSTextFinder
{
    public static function create() -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_textfinder_create();
        }%
        return handle;
    }

    public static function wrap(int nsTextFinderPtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_textfinder_wrap((void *)(uintptr_t) nsTextFinderPtr);
        }%
        return handle;
    }

    public static function destroy(int finder) -> void
    {
        %{
            ns_textfinder_destroy((uintptr_t) finder);
        }%
    }

    public static function performAction(int finder, int action) -> void
    {
        %{
            ns_textfinder_perform_action((uintptr_t) finder, (int) action);
        }%
    }

    public static function validateAction(int finder, int action) -> bool
    {
        bool result;
        %{
            result = ns_textfinder_validate_action((uintptr_t) finder, (int) action) == 1;
        }%
        return result;
    }

    public static function setIncrementalSearchingEnabled(int finder, bool flag) -> void
    {
        %{
            ns_textfinder_set_incremental_searching_enabled((uintptr_t) finder, flag ? 1 : 0);
        }%
    }

    public static function incrementalSearchingEnabled(int finder) -> bool
    {
        bool result;
        %{
            result = ns_textfinder_incremental_searching_enabled((uintptr_t) finder) == 1;
        }%
        return result;
    }

    public static function setFindIndicatorNeedsUpdate(int finder, bool flag) -> void
    {
        %{
            ns_textfinder_set_find_indicator_needs_update((uintptr_t) finder, flag ? 1 : 0);
        }%
    }

    public static function findIndicatorNeedsUpdate(int finder) -> bool
    {
        bool result;
        %{
            result = ns_textfinder_find_indicator_needs_update((uintptr_t) finder) == 1;
        }%
        return result;
    }

    public static function cancelFindIndicator(int finder) -> void
    {
        %{
            ns_textfinder_cancel_find_indicator((uintptr_t) finder);
        }%
    }

    public static function noteClientStringWillChange(int finder) -> void
    {
        %{
            ns_textfinder_note_client_string_will_change((uintptr_t) finder);
        }%
    }
}
