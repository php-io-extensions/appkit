namespace AppKit\NS\NSCollectionViewLayout;

%{
#include "ns-collectionviewlayout.h"
#include <stdint.h>
}%


/**
 * NSCollectionViewLayout base collection layout.
 */
class NSCollectionViewLayout
{
    public static function create() -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_collectionviewlayout_create();
        }%
        return handle;
    }
    public static function wrap(int nsCollectionViewLayoutPtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_collectionviewlayout_wrap((void *)(uintptr_t) nsCollectionViewLayoutPtr);
        }%
        return handle;
    }
    public static function destroy(int layout) -> void
    {
        %{
            ns_collectionviewlayout_destroy((uintptr_t) layout);
        }%
    }
    public static function nsCollectionViewLayout(int layout) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_collectionviewlayout_nscollectionviewlayout((uintptr_t) layout);
        }%
        return ptr;
    }
    public static function invalidate(int layout) -> void
    {
        %{
            ns_collectionviewlayout_invalidate((uintptr_t) layout);
        }%
    }
    public static function collectionView(int layout) -> int
    {
        int value;
        %{
            value = (zend_long) ns_collectionviewlayout_collection_view((uintptr_t) layout);
        }%
        return value;
    }
    public static function contentWidth(int layout) -> double
    {
        double value;
        %{
            value = ns_collectionviewlayout_content_width((uintptr_t) layout);
        }%
        return value;
    }
    public static function contentHeight(int layout) -> double
    {
        double value;
        %{
            value = ns_collectionviewlayout_content_height((uintptr_t) layout);
        }%
        return value;
    }
}
