namespace AppKit\NS\NSCollectionViewFlowLayout;

%{
#include "ns-collectionviewflowlayout.h"
#include <stdint.h>
}%


/**
 * NSCollectionViewFlowLayout flowing item layout.
 */
class NSCollectionViewFlowLayout
{
    public static function create() -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_collectionviewflowlayout_create();
        }%
        return handle;
    }
    public static function wrap(int nsCollectionViewFlowLayoutPtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_collectionviewflowlayout_wrap((void *)(uintptr_t) nsCollectionViewFlowLayoutPtr);
        }%
        return handle;
    }
    public static function destroy(int layout) -> void
    {
        %{
            ns_collectionviewflowlayout_destroy((uintptr_t) layout);
        }%
    }
    public static function nsCollectionViewFlowLayout(int layout) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_collectionviewflowlayout_nscollectionviewflowlayout((uintptr_t) layout);
        }%
        return ptr;
    }
    public static function setItemSize(int layout, double width, double height) -> void
    {
        %{
            ns_collectionviewflowlayout_set_item_size((uintptr_t) layout, width, height);
        }%
    }
    public static function getItemSize(int layout) -> array
    {
        array out = [];
        %{
            double w = 0.0, h = 0.0;
            if (ns_collectionviewflowlayout_get_item_size((uintptr_t) layout, &w, &h)) {
                add_next_index_double(&out, w);
                add_next_index_double(&out, h);
            }
        }%
        return out;
    }
    public static function setEstimatedItemSize(int layout, double width, double height) -> void
    {
        %{
            ns_collectionviewflowlayout_set_estimated_item_size((uintptr_t) layout, width, height);
        }%
    }
    public static function getEstimatedItemSize(int layout) -> array
    {
        array out = [];
        %{
            double w = 0.0, h = 0.0;
            if (ns_collectionviewflowlayout_get_estimated_item_size((uintptr_t) layout, &w, &h)) {
                add_next_index_double(&out, w);
                add_next_index_double(&out, h);
            }
        }%
        return out;
    }
    public static function setMinimumLineSpacing(int layout, double spacing) -> void
    {
        %{
            ns_collectionviewflowlayout_set_minimum_line_spacing((uintptr_t) layout, spacing);
        }%
    }
    public static function getMinimumLineSpacing(int layout) -> double
    {
        double value;
        %{
            value = ns_collectionviewflowlayout_get_minimum_line_spacing((uintptr_t) layout);
        }%
        return value;
    }
    public static function setMinimumInteritemSpacing(int layout, double spacing) -> void
    {
        %{
            ns_collectionviewflowlayout_set_minimum_interitem_spacing((uintptr_t) layout, spacing);
        }%
    }
    public static function getMinimumInteritemSpacing(int layout) -> double
    {
        double value;
        %{
            value = ns_collectionviewflowlayout_get_minimum_interitem_spacing((uintptr_t) layout);
        }%
        return value;
    }
    public static function setScrollDirection(int layout, int direction) -> void
    {
        %{
            ns_collectionviewflowlayout_set_scroll_direction((uintptr_t) layout, (int) direction);
        }%
    }
    public static function getScrollDirection(int layout) -> int
    {
        int value;
        %{
            value = (zend_long) ns_collectionviewflowlayout_get_scroll_direction((uintptr_t) layout);
        }%
        return value;
    }
    public static function setHeaderReferenceSize(int layout, double width, double height) -> void
    {
        %{
            ns_collectionviewflowlayout_set_header_reference_size((uintptr_t) layout, width, height);
        }%
    }
    public static function getHeaderReferenceSize(int layout) -> array
    {
        array out = [];
        %{
            double w = 0.0, h = 0.0;
            if (ns_collectionviewflowlayout_get_header_reference_size((uintptr_t) layout, &w, &h)) {
                add_next_index_double(&out, w);
                add_next_index_double(&out, h);
            }
        }%
        return out;
    }
    public static function setFooterReferenceSize(int layout, double width, double height) -> void
    {
        %{
            ns_collectionviewflowlayout_set_footer_reference_size((uintptr_t) layout, width, height);
        }%
    }
    public static function getFooterReferenceSize(int layout) -> array
    {
        array out = [];
        %{
            double w = 0.0, h = 0.0;
            if (ns_collectionviewflowlayout_get_footer_reference_size((uintptr_t) layout, &w, &h)) {
                add_next_index_double(&out, w);
                add_next_index_double(&out, h);
            }
        }%
        return out;
    }
    public static function setSectionInset(int layout, double top, double left, double bottom, double right) -> void
    {
        %{
            ns_collectionviewflowlayout_set_section_inset((uintptr_t) layout, top, left, bottom, right);
        }%
    }
    public static function setSectionHeadersPin(int layout, bool flag) -> void
    {
        %{
            ns_collectionviewflowlayout_set_section_headers_pin((uintptr_t) layout, flag ? 1 : 0);
        }%
    }
    public static function sectionHeadersPin(int layout) -> bool
    {
        bool result;
        %{
            result = ns_collectionviewflowlayout_section_headers_pin((uintptr_t) layout) == 1;
        }%
        return result;
    }
    public static function setSectionFootersPin(int layout, bool flag) -> void
    {
        %{
            ns_collectionviewflowlayout_set_section_footers_pin((uintptr_t) layout, flag ? 1 : 0);
        }%
    }
    public static function sectionFootersPin(int layout) -> bool
    {
        bool result;
        %{
            result = ns_collectionviewflowlayout_section_footers_pin((uintptr_t) layout) == 1;
        }%
        return result;
    }
    public static function sectionIsCollapsed(int layout, int section) -> bool
    {
        bool result;
        %{
            result = ns_collectionviewflowlayout_section_is_collapsed((uintptr_t) layout, (int) section) == 1;
        }%
        return result;
    }
    public static function collapseSection(int layout, int section) -> void
    {
        %{
            ns_collectionviewflowlayout_collapse_section((uintptr_t) layout, (int) section);
        }%
    }
    public static function expandSection(int layout, int section) -> void
    {
        %{
            ns_collectionviewflowlayout_expand_section((uintptr_t) layout, (int) section);
        }%
    }
}
