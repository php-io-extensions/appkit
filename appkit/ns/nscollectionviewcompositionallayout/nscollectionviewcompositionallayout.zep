namespace AppKit\NS\NSCollectionViewCompositionalLayout;

%{
#include "ns-collectionviewcompositionallayout.h"
#include <stdint.h>
}%


/**
 * NSCollectionViewCompositionalLayout section-based layout.
 */
class NSCollectionViewCompositionalLayout
{
    public static function createList(double itemHeight = 32.0) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_collectionviewcompositionallayout_create_list(itemHeight);
        }%
        return handle;
    }
    public static function createGrid(int columns = 3, double itemHeight = 96.0) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_collectionviewcompositionallayout_create_grid((int) columns, itemHeight);
        }%
        return handle;
    }
    public static function wrap(int nsCollectionViewCompositionalLayoutPtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_collectionviewcompositionallayout_wrap((void *)(uintptr_t) nsCollectionViewCompositionalLayoutPtr);
        }%
        return handle;
    }
    public static function destroy(int layout) -> void
    {
        %{
            ns_collectionviewcompositionallayout_destroy((uintptr_t) layout);
        }%
    }
    public static function nsCollectionViewCompositionalLayout(int layout) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_collectionviewcompositionallayout_nscollectionviewcompositionallayout((uintptr_t) layout);
        }%
        return ptr;
    }
    public static function setScrollDirection(int layout, int direction) -> void
    {
        %{
            ns_collectionviewcompositionallayout_set_scroll_direction((uintptr_t) layout, (int) direction);
        }%
    }
    public static function getScrollDirection(int layout) -> int
    {
        int value;
        %{
            value = (zend_long) ns_collectionviewcompositionallayout_get_scroll_direction((uintptr_t) layout);
        }%
        return value;
    }
    public static function setInterSectionSpacing(int layout, double spacing) -> void
    {
        %{
            ns_collectionviewcompositionallayout_set_inter_section_spacing((uintptr_t) layout, spacing);
        }%
    }
    public static function getInterSectionSpacing(int layout) -> double
    {
        double value;
        %{
            value = ns_collectionviewcompositionallayout_get_inter_section_spacing((uintptr_t) layout);
        }%
        return value;
    }
}
