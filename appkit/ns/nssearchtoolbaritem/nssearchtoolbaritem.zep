namespace AppKit\NS\NSSearchToolbarItem;

%{
#include "ns-searchtoolbaritem.h"
#include <stdint.h>
}%

/** NSSearchToolbarItem — toolbar search field item (macOS 11.0+). */
class NSSearchToolbarItem
{
    public static function create(string identifier) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_searchtoolbaritem_create(Z_STRVAL(identifier));
        }%
        return handle;
    }

    public static function wrap(int nsSearchToolbarItemPtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_searchtoolbaritem_wrap((void *)(uintptr_t) nsSearchToolbarItemPtr);
        }%
        return handle;
    }

    public static function destroy(int item) -> void
    {
        %{
            ns_searchtoolbaritem_destroy((uintptr_t) item);
        }%
    }

    public static function nsSearchToolbarItem(int item) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_searchtoolbaritem_nssearchtoolbaritem((uintptr_t) item);
        }%
        return ptr;
    }

    public static function setSearchField(int item, int searchField) -> void
    {
        %{
            ns_searchtoolbaritem_set_search_field((uintptr_t) item, (uintptr_t) searchField);
        }%
    }

    public static function getSearchField(int item) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_searchtoolbaritem_get_search_field((uintptr_t) item);
        }%
        return handle;
    }

    public static function setResignsFirstResponderWithCancel(int item, bool flag) -> void
    {
        %{
            ns_searchtoolbaritem_set_resigns_first_responder_with_cancel((uintptr_t) item, flag ? 1 : 0);
        }%
    }

    public static function resignsFirstResponderWithCancel(int item) -> bool
    {
        bool result;
        %{
            result = ns_searchtoolbaritem_resigns_first_responder_with_cancel((uintptr_t) item) == 1;
        }%
        return result;
    }

    public static function setPreferredWidthForSearchField(int item, double width) -> void
    {
        %{
            ns_searchtoolbaritem_set_preferred_width_for_search_field((uintptr_t) item, (double) width);
        }%
    }

    public static function preferredWidthForSearchField(int item) -> double
    {
        double value;
        %{
            value = ns_searchtoolbaritem_preferred_width_for_search_field((uintptr_t) item);
        }%
        return value;
    }

    public static function beginSearchInteraction(int item) -> void
    {
        %{
            ns_searchtoolbaritem_begin_search_interaction((uintptr_t) item);
        }%
    }

    public static function endSearchInteraction(int item) -> void
    {
        %{
            ns_searchtoolbaritem_end_search_interaction((uintptr_t) item);
        }%
    }
}
