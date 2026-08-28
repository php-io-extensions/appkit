#include "ns-collectionviewflowlayout.h"
#include "ns-value.h"

/* ====================================================================== */
/* NSCollectionViewFlowLayoutInvalidationContext                          */
/* ====================================================================== */

zend_long ns_nscollectionviewflowlayoutinvalidationcontext_init(void)
{
    @autoreleasepool {
        return ns_handle_for([[NSCollectionViewFlowLayoutInvalidationContext alloc] init]);
    }
}

zend_long ns_nscollectionviewflowlayoutinvalidationcontext_invalidate_flow_layout_delegate_metrics(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSCollectionViewFlowLayoutInvalidationContext *ctx = NS_ARG_AS(NSCollectionViewFlowLayoutInvalidationContext, handle);
        r = (ctx != nil && [ctx invalidateFlowLayoutDelegateMetrics]) ? 1 : 0;
    }
    return r;
}

void ns_nscollectionviewflowlayoutinvalidationcontext_set_invalidate_flow_layout_delegate_metrics(zval *handle, zval *invalidateFlowLayoutDelegateMetrics)
{
    @autoreleasepool {
        NSCollectionViewFlowLayoutInvalidationContext *ctx = NS_ARG_AS(NSCollectionViewFlowLayoutInvalidationContext, handle);
        if (ctx == nil) return;
        [ctx setInvalidateFlowLayoutDelegateMetrics:ns_arg_bool(invalidateFlowLayoutDelegateMetrics)];
    }
}

zend_long ns_nscollectionviewflowlayoutinvalidationcontext_invalidate_flow_layout_attributes(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSCollectionViewFlowLayoutInvalidationContext *ctx = NS_ARG_AS(NSCollectionViewFlowLayoutInvalidationContext, handle);
        r = (ctx != nil && [ctx invalidateFlowLayoutAttributes]) ? 1 : 0;
    }
    return r;
}

void ns_nscollectionviewflowlayoutinvalidationcontext_set_invalidate_flow_layout_attributes(zval *handle, zval *invalidateFlowLayoutAttributes)
{
    @autoreleasepool {
        NSCollectionViewFlowLayoutInvalidationContext *ctx = NS_ARG_AS(NSCollectionViewFlowLayoutInvalidationContext, handle);
        if (ctx == nil) return;
        [ctx setInvalidateFlowLayoutAttributes:ns_arg_bool(invalidateFlowLayoutAttributes)];
    }
}

/* ====================================================================== */
/* NSCollectionViewFlowLayout                                             */
/* ====================================================================== */

zend_long ns_nscollectionviewflowlayout_init(void)
{
    @autoreleasepool {
        return ns_handle_for([[NSCollectionViewFlowLayout alloc] init]);
    }
}

double ns_nscollectionviewflowlayout_minimum_line_spacing(zval *handle)
{
    double r = 0.0;
    @autoreleasepool {
        NSCollectionViewFlowLayout *l = NS_ARG_AS(NSCollectionViewFlowLayout, handle);
        r = l != nil ? (double) [l minimumLineSpacing] : 0.0;
    }
    return r;
}

void ns_nscollectionviewflowlayout_set_minimum_line_spacing(zval *handle, zval *minimumLineSpacing)
{
    @autoreleasepool {
        NSCollectionViewFlowLayout *l = NS_ARG_AS(NSCollectionViewFlowLayout, handle);
        if (l == nil) return;
        [l setMinimumLineSpacing:ns_arg_double(minimumLineSpacing)];
    }
}

double ns_nscollectionviewflowlayout_minimum_interitem_spacing(zval *handle)
{
    double r = 0.0;
    @autoreleasepool {
        NSCollectionViewFlowLayout *l = NS_ARG_AS(NSCollectionViewFlowLayout, handle);
        r = l != nil ? (double) [l minimumInteritemSpacing] : 0.0;
    }
    return r;
}

void ns_nscollectionviewflowlayout_set_minimum_interitem_spacing(zval *handle, zval *minimumInteritemSpacing)
{
    @autoreleasepool {
        NSCollectionViewFlowLayout *l = NS_ARG_AS(NSCollectionViewFlowLayout, handle);
        if (l == nil) return;
        [l setMinimumInteritemSpacing:ns_arg_double(minimumInteritemSpacing)];
    }
}

void ns_nscollectionviewflowlayout_item_size(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSCollectionViewFlowLayout *l = NS_ARG_AS(NSCollectionViewFlowLayout, handle);
        ns_ret_size(return_value, l != nil ? [l itemSize] : NSZeroSize);
    }
}

void ns_nscollectionviewflowlayout_set_item_size(zval *handle, zval *width, zval *height)
{
    @autoreleasepool {
        NSCollectionViewFlowLayout *l = NS_ARG_AS(NSCollectionViewFlowLayout, handle);
        if (l == nil) return;
        [l setItemSize:ns_arg_size(width, height)];
    }
}

void ns_nscollectionviewflowlayout_estimated_item_size(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSCollectionViewFlowLayout *l = NS_ARG_AS(NSCollectionViewFlowLayout, handle);
        ns_ret_size(return_value, l != nil ? [l estimatedItemSize] : NSZeroSize);
    }
}

void ns_nscollectionviewflowlayout_set_estimated_item_size(zval *handle, zval *width, zval *height)
{
    @autoreleasepool {
        NSCollectionViewFlowLayout *l = NS_ARG_AS(NSCollectionViewFlowLayout, handle);
        if (l == nil) return;
        [l setEstimatedItemSize:ns_arg_size(width, height)];
    }
}

zend_long ns_nscollectionviewflowlayout_scroll_direction(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSCollectionViewFlowLayout *l = NS_ARG_AS(NSCollectionViewFlowLayout, handle);
        r = l != nil ? (zend_long) [l scrollDirection] : 0;
    }
    return r;
}

void ns_nscollectionviewflowlayout_set_scroll_direction(zval *handle, zval *scrollDirection)
{
    @autoreleasepool {
        NSCollectionViewFlowLayout *l = NS_ARG_AS(NSCollectionViewFlowLayout, handle);
        if (l == nil) return;
        [l setScrollDirection:(NSCollectionViewScrollDirection) ns_arg_long(scrollDirection)];
    }
}

void ns_nscollectionviewflowlayout_header_reference_size(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSCollectionViewFlowLayout *l = NS_ARG_AS(NSCollectionViewFlowLayout, handle);
        ns_ret_size(return_value, l != nil ? [l headerReferenceSize] : NSZeroSize);
    }
}

void ns_nscollectionviewflowlayout_set_header_reference_size(zval *handle, zval *width, zval *height)
{
    @autoreleasepool {
        NSCollectionViewFlowLayout *l = NS_ARG_AS(NSCollectionViewFlowLayout, handle);
        if (l == nil) return;
        [l setHeaderReferenceSize:ns_arg_size(width, height)];
    }
}

void ns_nscollectionviewflowlayout_footer_reference_size(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSCollectionViewFlowLayout *l = NS_ARG_AS(NSCollectionViewFlowLayout, handle);
        ns_ret_size(return_value, l != nil ? [l footerReferenceSize] : NSZeroSize);
    }
}

void ns_nscollectionviewflowlayout_set_footer_reference_size(zval *handle, zval *width, zval *height)
{
    @autoreleasepool {
        NSCollectionViewFlowLayout *l = NS_ARG_AS(NSCollectionViewFlowLayout, handle);
        if (l == nil) return;
        [l setFooterReferenceSize:ns_arg_size(width, height)];
    }
}

void ns_nscollectionviewflowlayout_section_inset(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSCollectionViewFlowLayout *l = NS_ARG_AS(NSCollectionViewFlowLayout, handle);
        ns_ret_edge_insets(return_value, l != nil ? [l sectionInset] : NSEdgeInsetsZero);
    }
}

void ns_nscollectionviewflowlayout_set_section_inset(zval *handle, zval *top, zval *left, zval *bottom, zval *right)
{
    @autoreleasepool {
        NSCollectionViewFlowLayout *l = NS_ARG_AS(NSCollectionViewFlowLayout, handle);
        if (l == nil) return;
        [l setSectionInset:NSEdgeInsetsMake(ns_arg_double(top), ns_arg_double(left), ns_arg_double(bottom), ns_arg_double(right))];
    }
}

zend_long ns_nscollectionviewflowlayout_section_headers_pin_to_visible_bounds(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSCollectionViewFlowLayout *l = NS_ARG_AS(NSCollectionViewFlowLayout, handle);
        r = (l != nil && [l sectionHeadersPinToVisibleBounds]) ? 1 : 0;
    }
    return r;
}

void ns_nscollectionviewflowlayout_set_section_headers_pin_to_visible_bounds(zval *handle, zval *sectionHeadersPinToVisibleBounds)
{
    @autoreleasepool {
        NSCollectionViewFlowLayout *l = NS_ARG_AS(NSCollectionViewFlowLayout, handle);
        if (l == nil) return;
        [l setSectionHeadersPinToVisibleBounds:ns_arg_bool(sectionHeadersPinToVisibleBounds)];
    }
}

zend_long ns_nscollectionviewflowlayout_section_footers_pin_to_visible_bounds(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSCollectionViewFlowLayout *l = NS_ARG_AS(NSCollectionViewFlowLayout, handle);
        r = (l != nil && [l sectionFootersPinToVisibleBounds]) ? 1 : 0;
    }
    return r;
}

void ns_nscollectionviewflowlayout_set_section_footers_pin_to_visible_bounds(zval *handle, zval *sectionFootersPinToVisibleBounds)
{
    @autoreleasepool {
        NSCollectionViewFlowLayout *l = NS_ARG_AS(NSCollectionViewFlowLayout, handle);
        if (l == nil) return;
        [l setSectionFootersPinToVisibleBounds:ns_arg_bool(sectionFootersPinToVisibleBounds)];
    }
}

zend_long ns_nscollectionviewflowlayout_section_at_index_is_collapsed(zval *handle, zval *sectionIndex)
{
    zend_long r = 0;
    @autoreleasepool {
        NSCollectionViewFlowLayout *l = NS_ARG_AS(NSCollectionViewFlowLayout, handle);
        r = (l != nil && [l sectionAtIndexIsCollapsed:(NSUInteger) ns_arg_long(sectionIndex)]) ? 1 : 0;
    }
    return r;
}

void ns_nscollectionviewflowlayout_collapse_section_at_index(zval *handle, zval *sectionIndex)
{
    @autoreleasepool {
        NSCollectionViewFlowLayout *l = NS_ARG_AS(NSCollectionViewFlowLayout, handle);
        if (l == nil) return;
        [l collapseSectionAtIndex:(NSUInteger) ns_arg_long(sectionIndex)];
    }
}

void ns_nscollectionviewflowlayout_expand_section_at_index(zval *handle, zval *sectionIndex)
{
    @autoreleasepool {
        NSCollectionViewFlowLayout *l = NS_ARG_AS(NSCollectionViewFlowLayout, handle);
        if (l == nil) return;
        [l expandSectionAtIndex:(NSUInteger) ns_arg_long(sectionIndex)];
    }
}
