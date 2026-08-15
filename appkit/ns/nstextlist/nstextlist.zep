namespace AppKit\NS\NSTextList;

%{
#include "ns-textlist.h"
#include <stdint.h>
}%


/**
 * NSTextList — list marker format for attributed text.
 */
class NSTextList
{
    public static function create(string markerFormat, int options = 0, int startingItemNumber = 1) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_textlist_create(Z_STRVAL(markerFormat), (int) options, (int) startingItemNumber);
        }%
        return handle;
    }

    public static function wrap(int nsTextListPtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_textlist_wrap((void *)(uintptr_t) nsTextListPtr);
        }%
        return handle;
    }

    public static function destroy(int list) -> void
    {
        %{
            ns_textlist_destroy((uintptr_t) list);
        }%
    }

    public static function markerForItemNumber(int list, int itemNumber) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\0';
            if (ns_textlist_marker_for_item_number((uintptr_t) list, (int) itemNumber, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }

    public static function isOrdered(int list) -> bool
    {
        bool result;
        %{
            result = ns_textlist_is_ordered((uintptr_t) list) == 1;
        }%
        return result;
    }

    public static function setStartingItemNumber(int list, int number) -> void
    {
        %{
            ns_textlist_set_starting_item_number((uintptr_t) list, (int) number);
        }%
    }

    public static function getStartingItemNumber(int list) -> int
    {
        int value;
        %{
            value = (zend_long) ns_textlist_get_starting_item_number((uintptr_t) list);
        }%
        return value;
    }

    public static function getMarkerFormat(int list) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\0';
            if (ns_textlist_get_marker_format((uintptr_t) list, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }
}
