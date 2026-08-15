namespace AppKit\NS\NSCollectionView;

%{
#include "ns-collectionview.h"
#include <stdint.h>
}%

/**
 * NSCollectionView grid list.
 */
class NSCollectionView
{
    public static function create(int x, int y, int width, int height) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_collectionview_create((double) x, (double) y, (double) width, (double) height);
        }%
        return handle;
    }

    public static function destroy(int collection) -> void
    {
        %{
            ns_collectionview_destroy((uintptr_t) collection);
        }%
    }

    public static function clear(int collection) -> void
    {
        %{
            ns_collectionview_clear((uintptr_t) collection);
        }%
    }

    public static function addItem(int collection, string title) -> void
    {
        %{
            ns_collectionview_add_item((uintptr_t) collection, Z_STRVAL(title));
        }%
    }

    public static function itemCount(int collection) -> int
    {
        int value;
        %{
            value = (zend_long) ns_collectionview_item_count((uintptr_t) collection);
        }%
        return value;
    }

    public static function getSelected(int collection) -> int
    {
        int value;
        %{
            value = (zend_long) ns_collectionview_get_selected((uintptr_t) collection);
        }%
        return value;
    }

    public static function setSelected(int collection, int index) -> void
    {
        %{
            ns_collectionview_set_selected((uintptr_t) collection, (int) index);
        }%
    }

    public static function pollChange(int collection) -> bool
    {
        bool result;
        %{
            result = ns_collectionview_poll_change((uintptr_t) collection) == 1;
        }%
        return result;
    }

    public static function setLayout(int collection, int layout) -> void
    {
        %{
            ns_collectionview_set_layout((uintptr_t) collection, (uintptr_t) layout);
        }%
    }

    public static function getLayout(int collection) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_collectionview_get_layout((uintptr_t) collection);
        }%
        return handle;
    }
}
