namespace AppKit\NS\NSCollectionViewTransitionLayout;

%{
#include "ns-collectionviewtransitionlayout.h"
#include <stdint.h>
}%


/**
 * NSCollectionViewTransitionLayout between two layouts.
 */
class NSCollectionViewTransitionLayout
{
    public static function create(int currentLayout, int nextLayout) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_collectionviewtransitionlayout_create((uintptr_t) currentLayout, (uintptr_t) nextLayout);
        }%
        return handle;
    }
    public static function wrap(int nsCollectionViewTransitionLayoutPtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_collectionviewtransitionlayout_wrap((void *)(uintptr_t) nsCollectionViewTransitionLayoutPtr);
        }%
        return handle;
    }
    public static function destroy(int layout) -> void
    {
        %{
            ns_collectionviewtransitionlayout_destroy((uintptr_t) layout);
        }%
    }
    public static function nsCollectionViewTransitionLayout(int layout) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_collectionviewtransitionlayout_nscollectionviewtransitionlayout((uintptr_t) layout);
        }%
        return ptr;
    }
    public static function setProgress(int layout, double progress) -> void
    {
        %{
            ns_collectionviewtransitionlayout_set_progress((uintptr_t) layout, progress);
        }%
    }
    public static function getProgress(int layout) -> double
    {
        double value;
        %{
            value = ns_collectionviewtransitionlayout_get_progress((uintptr_t) layout);
        }%
        return value;
    }
    public static function currentLayout(int layout) -> int
    {
        int value;
        %{
            value = (zend_long) ns_collectionviewtransitionlayout_current_layout((uintptr_t) layout);
        }%
        return value;
    }
    public static function nextLayout(int layout) -> int
    {
        int value;
        %{
            value = (zend_long) ns_collectionviewtransitionlayout_next_layout((uintptr_t) layout);
        }%
        return value;
    }
    public static function updateValue(int layout, string key, double value) -> void
    {
        %{
            ns_collectionviewtransitionlayout_update_value((uintptr_t) layout, Z_STRVAL(key), value);
        }%
    }
    public static function valueForKey(int layout, string key) -> double
    {
        double value;
        %{
            value = ns_collectionviewtransitionlayout_value_for_key((uintptr_t) layout, Z_STRVAL(key));
        }%
        return value;
    }
}
