namespace AppKit\NS\NSCollectionViewGridLayout;

%{
#include "ns-collectionviewgridlayout.h"
#include <stdint.h>
}%


/**
 * NSCollectionViewGridLayout legacy grid layout.
 */
class NSCollectionViewGridLayout
{
    public static function create() -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_collectionviewgridlayout_create();
        }%
        return handle;
    }
    public static function wrap(int nsCollectionViewGridLayoutPtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_collectionviewgridlayout_wrap((void *)(uintptr_t) nsCollectionViewGridLayoutPtr);
        }%
        return handle;
    }
    public static function destroy(int layout) -> void
    {
        %{
            ns_collectionviewgridlayout_destroy((uintptr_t) layout);
        }%
    }
    public static function nsCollectionViewGridLayout(int layout) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_collectionviewgridlayout_nscollectionviewgridlayout((uintptr_t) layout);
        }%
        return ptr;
    }
    public static function setMargins(int layout, double top, double left, double bottom, double right) -> void
    {
        %{
            ns_collectionviewgridlayout_set_margins((uintptr_t) layout, top, left, bottom, right);
        }%
    }
    public static function setMinimumInteritemSpacing(int layout, double spacing) -> void
    {
        %{
            ns_collectionviewgridlayout_set_minimum_interitem_spacing((uintptr_t) layout, spacing);
        }%
    }
    public static function getMinimumInteritemSpacing(int layout) -> double
    {
        double value;
        %{
            value = ns_collectionviewgridlayout_get_minimum_interitem_spacing((uintptr_t) layout);
        }%
        return value;
    }
    public static function setMinimumLineSpacing(int layout, double spacing) -> void
    {
        %{
            ns_collectionviewgridlayout_set_minimum_line_spacing((uintptr_t) layout, spacing);
        }%
    }
    public static function getMinimumLineSpacing(int layout) -> double
    {
        double value;
        %{
            value = ns_collectionviewgridlayout_get_minimum_line_spacing((uintptr_t) layout);
        }%
        return value;
    }
    public static function setMaximumNumberOfRows(int layout, int rows) -> void
    {
        %{
            ns_collectionviewgridlayout_set_maximum_number_of_rows((uintptr_t) layout, (int) rows);
        }%
    }
    public static function getMaximumNumberOfRows(int layout) -> int
    {
        int value;
        %{
            value = (zend_long) ns_collectionviewgridlayout_get_maximum_number_of_rows((uintptr_t) layout);
        }%
        return value;
    }
    public static function setMaximumNumberOfColumns(int layout, int columns) -> void
    {
        %{
            ns_collectionviewgridlayout_set_maximum_number_of_columns((uintptr_t) layout, (int) columns);
        }%
    }
    public static function getMaximumNumberOfColumns(int layout) -> int
    {
        int value;
        %{
            value = (zend_long) ns_collectionviewgridlayout_get_maximum_number_of_columns((uintptr_t) layout);
        }%
        return value;
    }
    public static function setMinimumItemSize(int layout, double width, double height) -> void
    {
        %{
            ns_collectionviewgridlayout_set_minimum_item_size((uintptr_t) layout, width, height);
        }%
    }
    public static function getMinimumItemSize(int layout) -> array
    {
        array out = [];
        %{
            double w = 0.0, h = 0.0;
            if (ns_collectionviewgridlayout_get_minimum_item_size((uintptr_t) layout, &w, &h)) {
                add_next_index_double(&out, w);
                add_next_index_double(&out, h);
            }
        }%
        return out;
    }
    public static function setMaximumItemSize(int layout, double width, double height) -> void
    {
        %{
            ns_collectionviewgridlayout_set_maximum_item_size((uintptr_t) layout, width, height);
        }%
    }
    public static function getMaximumItemSize(int layout) -> array
    {
        array out = [];
        %{
            double w = 0.0, h = 0.0;
            if (ns_collectionviewgridlayout_get_maximum_item_size((uintptr_t) layout, &w, &h)) {
                add_next_index_double(&out, w);
                add_next_index_double(&out, h);
            }
        }%
        return out;
    }
}
