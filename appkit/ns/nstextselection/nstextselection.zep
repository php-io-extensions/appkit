namespace AppKit\NS\NSTextSelection;

%{
#include "ns-textselection.h"
#include <stdint.h>
}%


/**
 * NSTextSelection — TextKit 2 selection.
 */
class NSTextSelection

{
    public static function createWithLocation(int nsTextLocationPtr, int affinity) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_textselection_create_with_location((uintptr_t) nsTextLocationPtr, (int) affinity);
        }%
        return handle;
    }

    public static function wrap(int nsTextSelectionPtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_textselection_wrap((void *)(uintptr_t) nsTextSelectionPtr);
        }%
        return handle;
    }

    public static function destroy(int selection) -> void
    {
        %{
            ns_textselection_destroy((uintptr_t) selection);
        }%
    }

    public static function granularity(int selection) -> int
    {
        int value;
        %{
            value = (zend_long) ns_textselection_get_granularity((uintptr_t) selection);
        }%
        return value;
    }

    public static function affinity(int selection) -> int
    {
        int value;
        %{
            value = (zend_long) ns_textselection_get_affinity((uintptr_t) selection);
        }%
        return value;
    }

    public static function isTransient(int selection) -> bool
    {
        bool result;
        %{
            result = ns_textselection_is_transient((uintptr_t) selection) == 1;
        }%
        return result;
    }

    public static function textRangesCount(int selection) -> int
    {
        int value;
        %{
            value = (zend_long) ns_textselection_text_ranges_count((uintptr_t) selection);
        }%
        return value;
    }

    public static function getAnchorPositionOffset(int selection) -> float
    {
        double value;
        %{
            value = ns_textselection_anchor_position_offset((uintptr_t) selection);
        }%
        return (float) value;
    }

    public static function setAnchorPositionOffset(int selection, float offset) -> void
    {
        %{
            ns_textselection_set_anchor_position_offset((uintptr_t) selection, (double) offset);
        }%
    }
}
