#include "ns-collectionviewlayout.h"
#include "ns-value.h"

/* ====================================================================== */
/* NSCollectionViewLayoutAttributes                                       */
/* ====================================================================== */

void ns_nscollectionviewlayoutattributes_frame(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSCollectionViewLayoutAttributes *a = NS_ARG_AS(NSCollectionViewLayoutAttributes, handle);
        ns_ret_rect(return_value, a != nil ? [a frame] : NSZeroRect);
    }
}

void ns_nscollectionviewlayoutattributes_set_frame(zval *handle, zval *x, zval *y, zval *width, zval *height)
{
    @autoreleasepool {
        NSCollectionViewLayoutAttributes *a = NS_ARG_AS(NSCollectionViewLayoutAttributes, handle);
        if (a == nil) return;
        [a setFrame:ns_arg_rect(x, y, width, height)];
    }
}

void ns_nscollectionviewlayoutattributes_size(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSCollectionViewLayoutAttributes *a = NS_ARG_AS(NSCollectionViewLayoutAttributes, handle);
        ns_ret_size(return_value, a != nil ? [a size] : NSZeroSize);
    }
}

void ns_nscollectionviewlayoutattributes_set_size(zval *handle, zval *width, zval *height)
{
    @autoreleasepool {
        NSCollectionViewLayoutAttributes *a = NS_ARG_AS(NSCollectionViewLayoutAttributes, handle);
        if (a == nil) return;
        [a setSize:ns_arg_size(width, height)];
    }
}

double ns_nscollectionviewlayoutattributes_alpha(zval *handle)
{
    double r = 0.0;
    @autoreleasepool {
        NSCollectionViewLayoutAttributes *a = NS_ARG_AS(NSCollectionViewLayoutAttributes, handle);
        r = a != nil ? (double) [a alpha] : 0.0;
    }
    return r;
}

void ns_nscollectionviewlayoutattributes_set_alpha(zval *handle, zval *alpha)
{
    @autoreleasepool {
        NSCollectionViewLayoutAttributes *a = NS_ARG_AS(NSCollectionViewLayoutAttributes, handle);
        if (a == nil) return;
        [a setAlpha:ns_arg_double(alpha)];
    }
}

zend_long ns_nscollectionviewlayoutattributes_z_index(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSCollectionViewLayoutAttributes *a = NS_ARG_AS(NSCollectionViewLayoutAttributes, handle);
        r = a != nil ? (zend_long) [a zIndex] : 0;
    }
    return r;
}

void ns_nscollectionviewlayoutattributes_set_z_index(zval *handle, zval *zIndex)
{
    @autoreleasepool {
        NSCollectionViewLayoutAttributes *a = NS_ARG_AS(NSCollectionViewLayoutAttributes, handle);
        if (a == nil) return;
        [a setZIndex:(NSInteger) ns_arg_long(zIndex)];
    }
}

zend_long ns_nscollectionviewlayoutattributes_is_hidden(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSCollectionViewLayoutAttributes *a = NS_ARG_AS(NSCollectionViewLayoutAttributes, handle);
        r = (a != nil && [a isHidden]) ? 1 : 0;
    }
    return r;
}

void ns_nscollectionviewlayoutattributes_set_hidden(zval *handle, zval *hidden)
{
    @autoreleasepool {
        NSCollectionViewLayoutAttributes *a = NS_ARG_AS(NSCollectionViewLayoutAttributes, handle);
        if (a == nil) return;
        [a setHidden:ns_arg_bool(hidden)];
    }
}

zend_long ns_nscollectionviewlayoutattributes_index_path(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSCollectionViewLayoutAttributes *a = NS_ARG_AS(NSCollectionViewLayoutAttributes, handle);
        h = ns_handle_for(a != nil ? [a indexPath] : nil);
    }
    return h;
}

void ns_nscollectionviewlayoutattributes_set_index_path(zval *handle, zval *indexPath)
{
    @autoreleasepool {
        NSCollectionViewLayoutAttributes *a = NS_ARG_AS(NSCollectionViewLayoutAttributes, handle);
        if (a == nil) return;
        [a setIndexPath:NS_ARG_AS(NSIndexPath, indexPath)];
    }
}

zend_long ns_nscollectionviewlayoutattributes_represented_element_category(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSCollectionViewLayoutAttributes *a = NS_ARG_AS(NSCollectionViewLayoutAttributes, handle);
        r = a != nil ? (zend_long) [a representedElementCategory] : 0;
    }
    return r;
}

void ns_nscollectionviewlayoutattributes_represented_element_kind(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSCollectionViewLayoutAttributes *a = NS_ARG_AS(NSCollectionViewLayoutAttributes, handle);
        ns_ret_string(return_value, a != nil ? [a representedElementKind] : nil);
    }
}

zend_long ns_nscollectionviewlayoutattributes_layout_attributes_for_item_with_index_path(zval *indexPath)
{
    zend_long h = 0;
    @autoreleasepool {
        h = ns_handle_for([NSCollectionViewLayoutAttributes layoutAttributesForItemWithIndexPath:NS_ARG_AS(NSIndexPath, indexPath)]);
    }
    return h;
}

zend_long ns_nscollectionviewlayoutattributes_layout_attributes_for_inter_item_gap_before_index_path(zval *indexPath)
{
    zend_long h = 0;
    @autoreleasepool {
        h = ns_handle_for([NSCollectionViewLayoutAttributes layoutAttributesForInterItemGapBeforeIndexPath:NS_ARG_AS(NSIndexPath, indexPath)]);
    }
    return h;
}

zend_long ns_nscollectionviewlayoutattributes_layout_attributes_for_supplementary_view_of_kind_with_index_path(zval *elementKind, zval *indexPath)
{
    zend_long h = 0;
    @autoreleasepool {
        h = ns_handle_for([NSCollectionViewLayoutAttributes layoutAttributesForSupplementaryViewOfKind:ns_arg_string(elementKind) withIndexPath:NS_ARG_AS(NSIndexPath, indexPath)]);
    }
    return h;
}

zend_long ns_nscollectionviewlayoutattributes_layout_attributes_for_decoration_view_of_kind_with_index_path(zval *decorationViewKind, zval *indexPath)
{
    zend_long h = 0;
    @autoreleasepool {
        h = ns_handle_for([NSCollectionViewLayoutAttributes layoutAttributesForDecorationViewOfKind:ns_arg_string(decorationViewKind) withIndexPath:NS_ARG_AS(NSIndexPath, indexPath)]);
    }
    return h;
}

/* ====================================================================== */
/* NSCollectionViewUpdateItem                                             */
/* ====================================================================== */

zend_long ns_nscollectionviewupdateitem_init(void)
{
    @autoreleasepool {
        return ns_handle_for([[NSCollectionViewUpdateItem alloc] init]);
    }
}

zend_long ns_nscollectionviewupdateitem_index_path_before_update(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSCollectionViewUpdateItem *item = NS_ARG_AS(NSCollectionViewUpdateItem, handle);
        h = ns_handle_for(item != nil ? [item indexPathBeforeUpdate] : nil);
    }
    return h;
}

zend_long ns_nscollectionviewupdateitem_index_path_after_update(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSCollectionViewUpdateItem *item = NS_ARG_AS(NSCollectionViewUpdateItem, handle);
        h = ns_handle_for(item != nil ? [item indexPathAfterUpdate] : nil);
    }
    return h;
}

zend_long ns_nscollectionviewupdateitem_update_action(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSCollectionViewUpdateItem *item = NS_ARG_AS(NSCollectionViewUpdateItem, handle);
        r = item != nil ? (zend_long) [item updateAction] : 0;
    }
    return r;
}

/* ====================================================================== */
/* NSCollectionViewLayoutInvalidationContext                              */
/* ====================================================================== */

zend_long ns_nscollectionviewlayoutinvalidationcontext_init(void)
{
    @autoreleasepool {
        return ns_handle_for([[NSCollectionViewLayoutInvalidationContext alloc] init]);
    }
}

zend_long ns_nscollectionviewlayoutinvalidationcontext_invalidate_everything(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSCollectionViewLayoutInvalidationContext *ctx = NS_ARG_AS(NSCollectionViewLayoutInvalidationContext, handle);
        r = (ctx != nil && [ctx invalidateEverything]) ? 1 : 0;
    }
    return r;
}

zend_long ns_nscollectionviewlayoutinvalidationcontext_invalidate_data_source_counts(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSCollectionViewLayoutInvalidationContext *ctx = NS_ARG_AS(NSCollectionViewLayoutInvalidationContext, handle);
        r = (ctx != nil && [ctx invalidateDataSourceCounts]) ? 1 : 0;
    }
    return r;
}

void ns_nscollectionviewlayoutinvalidationcontext_invalidate_items_at_index_paths(zval *handle, zval *indexPaths)
{
    @autoreleasepool {
        NSCollectionViewLayoutInvalidationContext *ctx = NS_ARG_AS(NSCollectionViewLayoutInvalidationContext, handle);
        if (ctx == nil) return;
        [ctx invalidateItemsAtIndexPaths:ns_arg_object_set(indexPaths)];
    }
}

void ns_nscollectionviewlayoutinvalidationcontext_invalidate_supplementary_elements_of_kind_at_index_paths(zval *handle, zval *elementKind, zval *indexPaths)
{
    @autoreleasepool {
        NSCollectionViewLayoutInvalidationContext *ctx = NS_ARG_AS(NSCollectionViewLayoutInvalidationContext, handle);
        if (ctx == nil) return;
        [ctx invalidateSupplementaryElementsOfKind:ns_arg_string(elementKind) atIndexPaths:ns_arg_object_set(indexPaths)];
    }
}

void ns_nscollectionviewlayoutinvalidationcontext_invalidate_decoration_elements_of_kind_at_index_paths(zval *handle, zval *elementKind, zval *indexPaths)
{
    @autoreleasepool {
        NSCollectionViewLayoutInvalidationContext *ctx = NS_ARG_AS(NSCollectionViewLayoutInvalidationContext, handle);
        if (ctx == nil) return;
        [ctx invalidateDecorationElementsOfKind:ns_arg_string(elementKind) atIndexPaths:ns_arg_object_set(indexPaths)];
    }
}

void ns_nscollectionviewlayoutinvalidationcontext_invalidated_item_index_paths(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSCollectionViewLayoutInvalidationContext *ctx = NS_ARG_AS(NSCollectionViewLayoutInvalidationContext, handle);
        ns_ret_object_set(return_value, ctx != nil ? [ctx invalidatedItemIndexPaths] : nil);
    }
}

zend_long ns_nscollectionviewlayoutinvalidationcontext_invalidated_supplementary_index_paths(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSCollectionViewLayoutInvalidationContext *ctx = NS_ARG_AS(NSCollectionViewLayoutInvalidationContext, handle);
        h = ns_handle_for(ctx != nil ? [ctx invalidatedSupplementaryIndexPaths] : nil);
    }
    return h;
}

zend_long ns_nscollectionviewlayoutinvalidationcontext_invalidated_decoration_index_paths(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSCollectionViewLayoutInvalidationContext *ctx = NS_ARG_AS(NSCollectionViewLayoutInvalidationContext, handle);
        h = ns_handle_for(ctx != nil ? [ctx invalidatedDecorationIndexPaths] : nil);
    }
    return h;
}

void ns_nscollectionviewlayoutinvalidationcontext_content_offset_adjustment(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSCollectionViewLayoutInvalidationContext *ctx = NS_ARG_AS(NSCollectionViewLayoutInvalidationContext, handle);
        ns_ret_point(return_value, ctx != nil ? [ctx contentOffsetAdjustment] : NSZeroPoint);
    }
}

void ns_nscollectionviewlayoutinvalidationcontext_set_content_offset_adjustment(zval *handle, zval *x, zval *y)
{
    @autoreleasepool {
        NSCollectionViewLayoutInvalidationContext *ctx = NS_ARG_AS(NSCollectionViewLayoutInvalidationContext, handle);
        if (ctx == nil) return;
        [ctx setContentOffsetAdjustment:ns_arg_point(x, y)];
    }
}

void ns_nscollectionviewlayoutinvalidationcontext_content_size_adjustment(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSCollectionViewLayoutInvalidationContext *ctx = NS_ARG_AS(NSCollectionViewLayoutInvalidationContext, handle);
        ns_ret_size(return_value, ctx != nil ? [ctx contentSizeAdjustment] : NSZeroSize);
    }
}

void ns_nscollectionviewlayoutinvalidationcontext_set_content_size_adjustment(zval *handle, zval *width, zval *height)
{
    @autoreleasepool {
        NSCollectionViewLayoutInvalidationContext *ctx = NS_ARG_AS(NSCollectionViewLayoutInvalidationContext, handle);
        if (ctx == nil) return;
        [ctx setContentSizeAdjustment:ns_arg_size(width, height)];
    }
}

/* ====================================================================== */
/* NSCollectionViewLayout                                                 */
/* ====================================================================== */

zend_long ns_nscollectionviewlayout_init(void)
{
    @autoreleasepool {
        return ns_handle_for([[NSCollectionViewLayout alloc] init]);
    }
}

zend_long ns_nscollectionviewlayout_collection_view(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSCollectionViewLayout *l = NS_ARG_AS(NSCollectionViewLayout, handle);
        h = ns_handle_for(l != nil ? [l collectionView] : nil);
    }
    return h;
}

void ns_nscollectionviewlayout_invalidate_layout(zval *handle)
{
    @autoreleasepool {
        NSCollectionViewLayout *l = NS_ARG_AS(NSCollectionViewLayout, handle);
        if (l == nil) return;
        [l invalidateLayout];
    }
}

void ns_nscollectionviewlayout_invalidate_layout_with_context(zval *handle, zval *context)
{
    @autoreleasepool {
        NSCollectionViewLayout *l = NS_ARG_AS(NSCollectionViewLayout, handle);
        if (l == nil) return;
        [l invalidateLayoutWithContext:NS_ARG_AS(NSCollectionViewLayoutInvalidationContext, context)];
    }
}

void ns_nscollectionviewlayout_register_nib_for_decoration_view_of_kind(zval *handle, zval *nib, zval *elementKind)
{
    @autoreleasepool {
        NSCollectionViewLayout *l = NS_ARG_AS(NSCollectionViewLayout, handle);
        if (l == nil) return;
        [l registerNib:NS_ARG_AS(NSNib, nib) forDecorationViewOfKind:ns_arg_string(elementKind)];
    }
}

void ns_nscollectionviewlayout_prepare_layout(zval *handle)
{
    @autoreleasepool {
        NSCollectionViewLayout *l = NS_ARG_AS(NSCollectionViewLayout, handle);
        if (l == nil) return;
        [l prepareLayout];
    }
}

void ns_nscollectionviewlayout_layout_attributes_for_elements_in_rect(zval *return_value, zval *handle, zval *x, zval *y, zval *width, zval *height)
{
    @autoreleasepool {
        NSCollectionViewLayout *l = NS_ARG_AS(NSCollectionViewLayout, handle);
        ns_ret_object_array(return_value, l != nil ? [l layoutAttributesForElementsInRect:ns_arg_rect(x, y, width, height)] : nil);
    }
}

zend_long ns_nscollectionviewlayout_layout_attributes_for_item_at_index_path(zval *handle, zval *indexPath)
{
    zend_long h = 0;
    @autoreleasepool {
        NSCollectionViewLayout *l = NS_ARG_AS(NSCollectionViewLayout, handle);
        h = ns_handle_for(l != nil ? [l layoutAttributesForItemAtIndexPath:NS_ARG_AS(NSIndexPath, indexPath)] : nil);
    }
    return h;
}

zend_long ns_nscollectionviewlayout_layout_attributes_for_supplementary_view_of_kind_at_index_path(zval *handle, zval *elementKind, zval *indexPath)
{
    zend_long h = 0;
    @autoreleasepool {
        NSCollectionViewLayout *l = NS_ARG_AS(NSCollectionViewLayout, handle);
        h = ns_handle_for(l != nil ? [l layoutAttributesForSupplementaryViewOfKind:ns_arg_string(elementKind) atIndexPath:NS_ARG_AS(NSIndexPath, indexPath)] : nil);
    }
    return h;
}

zend_long ns_nscollectionviewlayout_layout_attributes_for_decoration_view_of_kind_at_index_path(zval *handle, zval *elementKind, zval *indexPath)
{
    zend_long h = 0;
    @autoreleasepool {
        NSCollectionViewLayout *l = NS_ARG_AS(NSCollectionViewLayout, handle);
        h = ns_handle_for(l != nil ? [l layoutAttributesForDecorationViewOfKind:ns_arg_string(elementKind) atIndexPath:NS_ARG_AS(NSIndexPath, indexPath)] : nil);
    }
    return h;
}

zend_long ns_nscollectionviewlayout_layout_attributes_for_drop_target_at_point(zval *handle, zval *x, zval *y)
{
    zend_long h = 0;
    @autoreleasepool {
        NSCollectionViewLayout *l = NS_ARG_AS(NSCollectionViewLayout, handle);
        h = ns_handle_for(l != nil ? [l layoutAttributesForDropTargetAtPoint:ns_arg_point(x, y)] : nil);
    }
    return h;
}

zend_long ns_nscollectionviewlayout_layout_attributes_for_inter_item_gap_before_index_path(zval *handle, zval *indexPath)
{
    zend_long h = 0;
    @autoreleasepool {
        NSCollectionViewLayout *l = NS_ARG_AS(NSCollectionViewLayout, handle);
        h = ns_handle_for(l != nil ? [l layoutAttributesForInterItemGapBeforeIndexPath:NS_ARG_AS(NSIndexPath, indexPath)] : nil);
    }
    return h;
}

zend_long ns_nscollectionviewlayout_should_invalidate_layout_for_bounds_change(zval *handle, zval *x, zval *y, zval *width, zval *height)
{
    zend_long r = 0;
    @autoreleasepool {
        NSCollectionViewLayout *l = NS_ARG_AS(NSCollectionViewLayout, handle);
        r = (l != nil && [l shouldInvalidateLayoutForBoundsChange:ns_arg_rect(x, y, width, height)]) ? 1 : 0;
    }
    return r;
}

zend_long ns_nscollectionviewlayout_invalidation_context_for_bounds_change(zval *handle, zval *x, zval *y, zval *width, zval *height)
{
    zend_long h = 0;
    @autoreleasepool {
        NSCollectionViewLayout *l = NS_ARG_AS(NSCollectionViewLayout, handle);
        h = ns_handle_for(l != nil ? [l invalidationContextForBoundsChange:ns_arg_rect(x, y, width, height)] : nil);
    }
    return h;
}

zend_long ns_nscollectionviewlayout_should_invalidate_layout_for_preferred_layout_attributes_with_original_attributes(zval *handle, zval *preferredAttributes, zval *originalAttributes)
{
    zend_long r = 0;
    @autoreleasepool {
        NSCollectionViewLayout *l = NS_ARG_AS(NSCollectionViewLayout, handle);
        r = (l != nil && [l shouldInvalidateLayoutForPreferredLayoutAttributes:NS_ARG_AS(NSCollectionViewLayoutAttributes, preferredAttributes) withOriginalAttributes:NS_ARG_AS(NSCollectionViewLayoutAttributes, originalAttributes)]) ? 1 : 0;
    }
    return r;
}

zend_long ns_nscollectionviewlayout_invalidation_context_for_preferred_layout_attributes_with_original_attributes(zval *handle, zval *preferredAttributes, zval *originalAttributes)
{
    zend_long h = 0;
    @autoreleasepool {
        NSCollectionViewLayout *l = NS_ARG_AS(NSCollectionViewLayout, handle);
        h = ns_handle_for(l != nil ? [l invalidationContextForPreferredLayoutAttributes:NS_ARG_AS(NSCollectionViewLayoutAttributes, preferredAttributes) withOriginalAttributes:NS_ARG_AS(NSCollectionViewLayoutAttributes, originalAttributes)] : nil);
    }
    return h;
}

void ns_nscollectionviewlayout_target_content_offset_for_proposed_content_offset_with_scrolling_velocity(zval *return_value, zval *handle, zval *x, zval *y, zval *velocityX, zval *velocityY)
{
    @autoreleasepool {
        NSCollectionViewLayout *l = NS_ARG_AS(NSCollectionViewLayout, handle);
        ns_ret_point(return_value, l != nil ? [l targetContentOffsetForProposedContentOffset:ns_arg_point(x, y) withScrollingVelocity:ns_arg_point(velocityX, velocityY)] : NSZeroPoint);
    }
}

void ns_nscollectionviewlayout_target_content_offset_for_proposed_content_offset(zval *return_value, zval *handle, zval *x, zval *y)
{
    @autoreleasepool {
        NSCollectionViewLayout *l = NS_ARG_AS(NSCollectionViewLayout, handle);
        ns_ret_point(return_value, l != nil ? [l targetContentOffsetForProposedContentOffset:ns_arg_point(x, y)] : NSZeroPoint);
    }
}

void ns_nscollectionviewlayout_collection_view_content_size(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSCollectionViewLayout *l = NS_ARG_AS(NSCollectionViewLayout, handle);
        ns_ret_size(return_value, l != nil ? [l collectionViewContentSize] : NSZeroSize);
    }
}

void ns_nscollectionviewlayout_prepare_for_collection_view_updates(zval *handle, zval *updateItems)
{
    @autoreleasepool {
        NSCollectionViewLayout *l = NS_ARG_AS(NSCollectionViewLayout, handle);
        if (l == nil) return;
        [l prepareForCollectionViewUpdates:ns_arg_object_array(updateItems)];
    }
}

void ns_nscollectionviewlayout_finalize_collection_view_updates(zval *handle)
{
    @autoreleasepool {
        NSCollectionViewLayout *l = NS_ARG_AS(NSCollectionViewLayout, handle);
        if (l == nil) return;
        [l finalizeCollectionViewUpdates];
    }
}

void ns_nscollectionviewlayout_prepare_for_animated_bounds_change(zval *handle, zval *x, zval *y, zval *width, zval *height)
{
    @autoreleasepool {
        NSCollectionViewLayout *l = NS_ARG_AS(NSCollectionViewLayout, handle);
        if (l == nil) return;
        [l prepareForAnimatedBoundsChange:ns_arg_rect(x, y, width, height)];
    }
}

void ns_nscollectionviewlayout_finalize_animated_bounds_change(zval *handle)
{
    @autoreleasepool {
        NSCollectionViewLayout *l = NS_ARG_AS(NSCollectionViewLayout, handle);
        if (l == nil) return;
        [l finalizeAnimatedBoundsChange];
    }
}

void ns_nscollectionviewlayout_prepare_for_transition_to_layout(zval *handle, zval *newLayout)
{
    @autoreleasepool {
        NSCollectionViewLayout *l = NS_ARG_AS(NSCollectionViewLayout, handle);
        if (l == nil) return;
        [l prepareForTransitionToLayout:NS_ARG_AS(NSCollectionViewLayout, newLayout)];
    }
}

void ns_nscollectionviewlayout_prepare_for_transition_from_layout(zval *handle, zval *oldLayout)
{
    @autoreleasepool {
        NSCollectionViewLayout *l = NS_ARG_AS(NSCollectionViewLayout, handle);
        if (l == nil) return;
        [l prepareForTransitionFromLayout:NS_ARG_AS(NSCollectionViewLayout, oldLayout)];
    }
}

void ns_nscollectionviewlayout_finalize_layout_transition(zval *handle)
{
    @autoreleasepool {
        NSCollectionViewLayout *l = NS_ARG_AS(NSCollectionViewLayout, handle);
        if (l == nil) return;
        [l finalizeLayoutTransition];
    }
}

zend_long ns_nscollectionviewlayout_initial_layout_attributes_for_appearing_item_at_index_path(zval *handle, zval *itemIndexPath)
{
    zend_long h = 0;
    @autoreleasepool {
        NSCollectionViewLayout *l = NS_ARG_AS(NSCollectionViewLayout, handle);
        h = ns_handle_for(l != nil ? [l initialLayoutAttributesForAppearingItemAtIndexPath:NS_ARG_AS(NSIndexPath, itemIndexPath)] : nil);
    }
    return h;
}

zend_long ns_nscollectionviewlayout_final_layout_attributes_for_disappearing_item_at_index_path(zval *handle, zval *itemIndexPath)
{
    zend_long h = 0;
    @autoreleasepool {
        NSCollectionViewLayout *l = NS_ARG_AS(NSCollectionViewLayout, handle);
        h = ns_handle_for(l != nil ? [l finalLayoutAttributesForDisappearingItemAtIndexPath:NS_ARG_AS(NSIndexPath, itemIndexPath)] : nil);
    }
    return h;
}

zend_long ns_nscollectionviewlayout_initial_layout_attributes_for_appearing_supplementary_element_of_kind_at_index_path(zval *handle, zval *elementKind, zval *elementIndexPath)
{
    zend_long h = 0;
    @autoreleasepool {
        NSCollectionViewLayout *l = NS_ARG_AS(NSCollectionViewLayout, handle);
        h = ns_handle_for(l != nil ? [l initialLayoutAttributesForAppearingSupplementaryElementOfKind:ns_arg_string(elementKind) atIndexPath:NS_ARG_AS(NSIndexPath, elementIndexPath)] : nil);
    }
    return h;
}

zend_long ns_nscollectionviewlayout_final_layout_attributes_for_disappearing_supplementary_element_of_kind_at_index_path(zval *handle, zval *elementKind, zval *elementIndexPath)
{
    zend_long h = 0;
    @autoreleasepool {
        NSCollectionViewLayout *l = NS_ARG_AS(NSCollectionViewLayout, handle);
        h = ns_handle_for(l != nil ? [l finalLayoutAttributesForDisappearingSupplementaryElementOfKind:ns_arg_string(elementKind) atIndexPath:NS_ARG_AS(NSIndexPath, elementIndexPath)] : nil);
    }
    return h;
}

zend_long ns_nscollectionviewlayout_initial_layout_attributes_for_appearing_decoration_element_of_kind_at_index_path(zval *handle, zval *elementKind, zval *decorationIndexPath)
{
    zend_long h = 0;
    @autoreleasepool {
        NSCollectionViewLayout *l = NS_ARG_AS(NSCollectionViewLayout, handle);
        h = ns_handle_for(l != nil ? [l initialLayoutAttributesForAppearingDecorationElementOfKind:ns_arg_string(elementKind) atIndexPath:NS_ARG_AS(NSIndexPath, decorationIndexPath)] : nil);
    }
    return h;
}

zend_long ns_nscollectionviewlayout_final_layout_attributes_for_disappearing_decoration_element_of_kind_at_index_path(zval *handle, zval *elementKind, zval *decorationIndexPath)
{
    zend_long h = 0;
    @autoreleasepool {
        NSCollectionViewLayout *l = NS_ARG_AS(NSCollectionViewLayout, handle);
        h = ns_handle_for(l != nil ? [l finalLayoutAttributesForDisappearingDecorationElementOfKind:ns_arg_string(elementKind) atIndexPath:NS_ARG_AS(NSIndexPath, decorationIndexPath)] : nil);
    }
    return h;
}

void ns_nscollectionviewlayout_index_paths_to_delete_for_supplementary_view_of_kind(zval *return_value, zval *handle, zval *elementKind)
{
    @autoreleasepool {
        NSCollectionViewLayout *l = NS_ARG_AS(NSCollectionViewLayout, handle);
        ns_ret_object_set(return_value, l != nil ? [l indexPathsToDeleteForSupplementaryViewOfKind:ns_arg_string(elementKind)] : nil);
    }
}

void ns_nscollectionviewlayout_index_paths_to_delete_for_decoration_view_of_kind(zval *return_value, zval *handle, zval *elementKind)
{
    @autoreleasepool {
        NSCollectionViewLayout *l = NS_ARG_AS(NSCollectionViewLayout, handle);
        ns_ret_object_set(return_value, l != nil ? [l indexPathsToDeleteForDecorationViewOfKind:ns_arg_string(elementKind)] : nil);
    }
}

void ns_nscollectionviewlayout_index_paths_to_insert_for_supplementary_view_of_kind(zval *return_value, zval *handle, zval *elementKind)
{
    @autoreleasepool {
        NSCollectionViewLayout *l = NS_ARG_AS(NSCollectionViewLayout, handle);
        ns_ret_object_set(return_value, l != nil ? [l indexPathsToInsertForSupplementaryViewOfKind:ns_arg_string(elementKind)] : nil);
    }
}

void ns_nscollectionviewlayout_index_paths_to_insert_for_decoration_view_of_kind(zval *return_value, zval *handle, zval *elementKind)
{
    @autoreleasepool {
        NSCollectionViewLayout *l = NS_ARG_AS(NSCollectionViewLayout, handle);
        ns_ret_object_set(return_value, l != nil ? [l indexPathsToInsertForDecorationViewOfKind:ns_arg_string(elementKind)] : nil);
    }
}
