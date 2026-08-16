namespace AppKit\NS\NSTrackingSeparatorToolbarItem;

%{
#include "ns-trackingseparatortoolbaritem.h"
#include <stdint.h>
}%

/** NSTrackingSeparatorToolbarItem — split-view tracking separator (macOS 11.0+). */
class NSTrackingSeparatorToolbarItem
{
    public static function create(string identifier) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_trackingseparatortoolbaritem_create(Z_STRVAL(identifier));
        }%
        return handle;
    }

    public static function trackingSeparator(string identifier, int splitView, int dividerIndex) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_trackingseparatortoolbaritem_tracking_separator(
                Z_STRVAL(identifier),
                (uintptr_t) splitView,
                (int) dividerIndex
            );
        }%
        return handle;
    }

    public static function wrap(int nsTrackingSeparatorToolbarItemPtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_trackingseparatortoolbaritem_wrap((void *)(uintptr_t) nsTrackingSeparatorToolbarItemPtr);
        }%
        return handle;
    }

    public static function destroy(int item) -> void
    {
        %{
            ns_trackingseparatortoolbaritem_destroy((uintptr_t) item);
        }%
    }

    public static function nsTrackingSeparatorToolbarItem(int item) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_trackingseparatortoolbaritem_nstrackingseparatortoolbaritem((uintptr_t) item);
        }%
        return ptr;
    }

    public static function setSplitView(int item, int splitView) -> void
    {
        %{
            ns_trackingseparatortoolbaritem_set_split_view((uintptr_t) item, (uintptr_t) splitView);
        }%
    }

    public static function getSplitView(int item) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_trackingseparatortoolbaritem_get_split_view((uintptr_t) item);
        }%
        return handle;
    }

    public static function setDividerIndex(int item, int dividerIndex) -> void
    {
        %{
            ns_trackingseparatortoolbaritem_set_divider_index((uintptr_t) item, (int) dividerIndex);
        }%
    }

    public static function getDividerIndex(int item) -> int
    {
        int value;
        %{
            value = (zend_long) ns_trackingseparatortoolbaritem_get_divider_index((uintptr_t) item);
        }%
        return value;
    }
}
