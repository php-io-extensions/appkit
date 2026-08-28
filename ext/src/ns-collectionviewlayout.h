#ifndef PHP_APPKIT_NS_COLLECTIONVIEWLAYOUT_H
#define PHP_APPKIT_NS_COLLECTIONVIEWLAYOUT_H

/*
 * Faithful 1:1 binding of AppKit NSCollectionViewLayout.h. That
 * header declares four classes. Every member of
 * NSCollectionViewLayoutAttributes, NSCollectionViewUpdateItem,
 * NSCollectionViewLayoutInvalidationContext, and
 * NSCollectionViewLayout (base interface + same-file
 * NSSubclassingHooks and NSUpdateSupportHooks categories) is
 * either bound or reserved. Nothing is omitted. Adopted NSCopying
 * (Attributes) and NSCoding (Layout) are not class members —
 * those protocols are not redeclared here. The
 * NSCollectionElementCategory / NSCollectionUpdateAction typedefs,
 * the NSCollectionViewDecorationElementKind string typedef, and
 * NSCollectionElementKindInterItemGapIndicator are not class
 * members. FlowLayout / GridLayout / CompositionalLayout /
 * TransitionLayout live in their own headers. Compositional and
 * transition layouts stay deferred (block-heavy). Inherited
 * NSObject members stay on that class.
 *
 * None of the four classes declare an initializer —
 * construction is synthesized init (allocs the concrete class)
 * except Attributes, which is constructed by its four class
 * factories. Reserved on Layout: registerClass:forDecorationViewOfKind:
 * (Class) and the class properties layoutAttributesClass /
 * invalidationContextClass (Class). registerNib:forDecorationViewOfKind:
 * stays bound. NSIndexPath / NSNib / NSCollectionView /
 * NSCollectionViewLayout / NSCollectionViewLayoutAttributes /
 * NSCollectionViewLayoutInvalidationContext /
 * NSCollectionViewUpdateItem / NSDictionary cross as handles
 * (0 = nil). NSSet of NSIndexPath marshals as an array of
 * handles. NSArray of attributes / update items is handles.
 * NSDictionary of kind-to-index-path-set
 * (invalidatedSupplementaryIndexPaths /
 * invalidatedDecorationIndexPaths) crosses as a handle.
 * NSCollectionViewSupplementaryElementKind /
 * NSCollectionViewDecorationElementKind cross as string.
 * representedElementKind is nullable NSString and crosses as
 * var. NSRect / NSPoint / NSSize follow the struct convention.
 * NSCollectionElementCategory / NSCollectionUpdateAction /
 * NSInteger zIndex cross as int. CGFloat alpha crosses as
 * double. getter=isHidden emits isHidden.
 */

#include "php.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ---- NSCollectionViewLayoutAttributes ---- */

/*@zep NS\NSCollectionViewLayoutAttributes frame(int handle) -> array */
void ns_nscollectionviewlayoutattributes_frame(zval *return_value, zval *handle);
/*@zep NS\NSCollectionViewLayoutAttributes setFrame(int handle, double x, double y, double width, double height) -> void */
void ns_nscollectionviewlayoutattributes_set_frame(zval *handle, zval *x, zval *y, zval *width, zval *height);

/*@zep NS\NSCollectionViewLayoutAttributes size(int handle) -> array */
void ns_nscollectionviewlayoutattributes_size(zval *return_value, zval *handle);
/*@zep NS\NSCollectionViewLayoutAttributes setSize(int handle, double width, double height) -> void */
void ns_nscollectionviewlayoutattributes_set_size(zval *handle, zval *width, zval *height);

/*@zep NS\NSCollectionViewLayoutAttributes alpha(int handle) -> double */
double ns_nscollectionviewlayoutattributes_alpha(zval *handle);
/*@zep NS\NSCollectionViewLayoutAttributes setAlpha(int handle, double alpha) -> void */
void ns_nscollectionviewlayoutattributes_set_alpha(zval *handle, zval *alpha);

/*@zep NS\NSCollectionViewLayoutAttributes zIndex(int handle) -> int */
zend_long ns_nscollectionviewlayoutattributes_z_index(zval *handle);
/*@zep NS\NSCollectionViewLayoutAttributes setZIndex(int handle, int zIndex) -> void */
void ns_nscollectionviewlayoutattributes_set_z_index(zval *handle, zval *zIndex);

/*@zep NS\NSCollectionViewLayoutAttributes isHidden(int handle) -> bool */
zend_long ns_nscollectionviewlayoutattributes_is_hidden(zval *handle);
/*@zep NS\NSCollectionViewLayoutAttributes setHidden(int handle, bool hidden) -> void */
void ns_nscollectionviewlayoutattributes_set_hidden(zval *handle, zval *hidden);

/*@zep NS\NSCollectionViewLayoutAttributes indexPath(int handle) -> int */
zend_long ns_nscollectionviewlayoutattributes_index_path(zval *handle);
/*@zep NS\NSCollectionViewLayoutAttributes setIndexPath(int handle, int indexPath) -> void */
void ns_nscollectionviewlayoutattributes_set_index_path(zval *handle, zval *indexPath);

/*@zep NS\NSCollectionViewLayoutAttributes representedElementCategory(int handle) -> int */
zend_long ns_nscollectionviewlayoutattributes_represented_element_category(zval *handle);
/*@zep NS\NSCollectionViewLayoutAttributes representedElementKind(int handle) -> var */
void ns_nscollectionviewlayoutattributes_represented_element_kind(zval *return_value, zval *handle);

/*@zep NS\NSCollectionViewLayoutAttributes layoutAttributesForItemWithIndexPath(int indexPath) -> int */
zend_long ns_nscollectionviewlayoutattributes_layout_attributes_for_item_with_index_path(zval *indexPath);
/*@zep NS\NSCollectionViewLayoutAttributes layoutAttributesForInterItemGapBeforeIndexPath(int indexPath) -> int */
zend_long ns_nscollectionviewlayoutattributes_layout_attributes_for_inter_item_gap_before_index_path(zval *indexPath);
/*@zep NS\NSCollectionViewLayoutAttributes layoutAttributesForSupplementaryViewOfKindWithIndexPath(string elementKind, int indexPath) -> int */
zend_long ns_nscollectionviewlayoutattributes_layout_attributes_for_supplementary_view_of_kind_with_index_path(zval *elementKind, zval *indexPath);
/*@zep NS\NSCollectionViewLayoutAttributes layoutAttributesForDecorationViewOfKindWithIndexPath(string decorationViewKind, int indexPath) -> int */
zend_long ns_nscollectionviewlayoutattributes_layout_attributes_for_decoration_view_of_kind_with_index_path(zval *decorationViewKind, zval *indexPath);

/* ---- NSCollectionViewUpdateItem ---- */

/*@zep-construct NS\NSCollectionViewUpdateItem init() -> int */
zend_long ns_nscollectionviewupdateitem_init(void);

/*@zep NS\NSCollectionViewUpdateItem indexPathBeforeUpdate(int handle) -> int */
zend_long ns_nscollectionviewupdateitem_index_path_before_update(zval *handle);
/*@zep NS\NSCollectionViewUpdateItem indexPathAfterUpdate(int handle) -> int */
zend_long ns_nscollectionviewupdateitem_index_path_after_update(zval *handle);
/*@zep NS\NSCollectionViewUpdateItem updateAction(int handle) -> int */
zend_long ns_nscollectionviewupdateitem_update_action(zval *handle);

/* ---- NSCollectionViewLayoutInvalidationContext ---- */

/*@zep-construct NS\NSCollectionViewLayoutInvalidationContext init() -> int */
zend_long ns_nscollectionviewlayoutinvalidationcontext_init(void);

/*@zep NS\NSCollectionViewLayoutInvalidationContext invalidateEverything(int handle) -> bool */
zend_long ns_nscollectionviewlayoutinvalidationcontext_invalidate_everything(zval *handle);
/*@zep NS\NSCollectionViewLayoutInvalidationContext invalidateDataSourceCounts(int handle) -> bool */
zend_long ns_nscollectionviewlayoutinvalidationcontext_invalidate_data_source_counts(zval *handle);

/*@zep NS\NSCollectionViewLayoutInvalidationContext invalidateItemsAtIndexPaths(int handle, array indexPaths) -> void */
void ns_nscollectionviewlayoutinvalidationcontext_invalidate_items_at_index_paths(zval *handle, zval *indexPaths);
/*@zep NS\NSCollectionViewLayoutInvalidationContext invalidateSupplementaryElementsOfKindAtIndexPaths(int handle, string elementKind, array indexPaths) -> void */
void ns_nscollectionviewlayoutinvalidationcontext_invalidate_supplementary_elements_of_kind_at_index_paths(zval *handle, zval *elementKind, zval *indexPaths);
/*@zep NS\NSCollectionViewLayoutInvalidationContext invalidateDecorationElementsOfKindAtIndexPaths(int handle, string elementKind, array indexPaths) -> void */
void ns_nscollectionviewlayoutinvalidationcontext_invalidate_decoration_elements_of_kind_at_index_paths(zval *handle, zval *elementKind, zval *indexPaths);

/*@zep NS\NSCollectionViewLayoutInvalidationContext invalidatedItemIndexPaths(int handle) -> array */
void ns_nscollectionviewlayoutinvalidationcontext_invalidated_item_index_paths(zval *return_value, zval *handle);
/*@zep NS\NSCollectionViewLayoutInvalidationContext invalidatedSupplementaryIndexPaths(int handle) -> int */
zend_long ns_nscollectionviewlayoutinvalidationcontext_invalidated_supplementary_index_paths(zval *handle);
/*@zep NS\NSCollectionViewLayoutInvalidationContext invalidatedDecorationIndexPaths(int handle) -> int */
zend_long ns_nscollectionviewlayoutinvalidationcontext_invalidated_decoration_index_paths(zval *handle);

/*@zep NS\NSCollectionViewLayoutInvalidationContext contentOffsetAdjustment(int handle) -> array */
void ns_nscollectionviewlayoutinvalidationcontext_content_offset_adjustment(zval *return_value, zval *handle);
/*@zep NS\NSCollectionViewLayoutInvalidationContext setContentOffsetAdjustment(int handle, double x, double y) -> void */
void ns_nscollectionviewlayoutinvalidationcontext_set_content_offset_adjustment(zval *handle, zval *x, zval *y);

/*@zep NS\NSCollectionViewLayoutInvalidationContext contentSizeAdjustment(int handle) -> array */
void ns_nscollectionviewlayoutinvalidationcontext_content_size_adjustment(zval *return_value, zval *handle);
/*@zep NS\NSCollectionViewLayoutInvalidationContext setContentSizeAdjustment(int handle, double width, double height) -> void */
void ns_nscollectionviewlayoutinvalidationcontext_set_content_size_adjustment(zval *handle, zval *width, zval *height);

/* ---- NSCollectionViewLayout ---- */

/*@zep-construct NS\NSCollectionViewLayout init() -> int */
zend_long ns_nscollectionviewlayout_init(void);

/*@zep NS\NSCollectionViewLayout collectionView(int handle) -> int */
zend_long ns_nscollectionviewlayout_collection_view(zval *handle);

/*@zep NS\NSCollectionViewLayout invalidateLayout(int handle) -> void */
void ns_nscollectionviewlayout_invalidate_layout(zval *handle);
/*@zep NS\NSCollectionViewLayout invalidateLayoutWithContext(int handle, int context) -> void */
void ns_nscollectionviewlayout_invalidate_layout_with_context(zval *handle, zval *context);

/*@reserved NS\NSCollectionViewLayout - (void)registerClass:(nullable Class)viewClass forDecorationViewOfKind:(NSCollectionViewDecorationElementKind)elementKind; */
/*@zep NS\NSCollectionViewLayout registerNibForDecorationViewOfKind(int handle, int nib, string elementKind) -> void */
void ns_nscollectionviewlayout_register_nib_for_decoration_view_of_kind(zval *handle, zval *nib, zval *elementKind);

/* ---- NSCollectionViewLayout (NSSubclassingHooks) ---- */

/*@reserved NS\NSCollectionViewLayout @property (class, readonly) Class layoutAttributesClass */
/*@reserved NS\NSCollectionViewLayout @property (class, readonly) Class invalidationContextClass */

/*@zep NS\NSCollectionViewLayout prepareLayout(int handle) -> void */
void ns_nscollectionviewlayout_prepare_layout(zval *handle);

/*@zep NS\NSCollectionViewLayout layoutAttributesForElementsInRect(int handle, double x, double y, double width, double height) -> array */
void ns_nscollectionviewlayout_layout_attributes_for_elements_in_rect(zval *return_value, zval *handle, zval *x, zval *y, zval *width, zval *height);
/*@zep NS\NSCollectionViewLayout layoutAttributesForItemAtIndexPath(int handle, int indexPath) -> int */
zend_long ns_nscollectionviewlayout_layout_attributes_for_item_at_index_path(zval *handle, zval *indexPath);
/*@zep NS\NSCollectionViewLayout layoutAttributesForSupplementaryViewOfKindAtIndexPath(int handle, string elementKind, int indexPath) -> int */
zend_long ns_nscollectionviewlayout_layout_attributes_for_supplementary_view_of_kind_at_index_path(zval *handle, zval *elementKind, zval *indexPath);
/*@zep NS\NSCollectionViewLayout layoutAttributesForDecorationViewOfKindAtIndexPath(int handle, string elementKind, int indexPath) -> int */
zend_long ns_nscollectionviewlayout_layout_attributes_for_decoration_view_of_kind_at_index_path(zval *handle, zval *elementKind, zval *indexPath);

/*@zep NS\NSCollectionViewLayout layoutAttributesForDropTargetAtPoint(int handle, double x, double y) -> int */
zend_long ns_nscollectionviewlayout_layout_attributes_for_drop_target_at_point(zval *handle, zval *x, zval *y);
/*@zep NS\NSCollectionViewLayout layoutAttributesForInterItemGapBeforeIndexPath(int handle, int indexPath) -> int */
zend_long ns_nscollectionviewlayout_layout_attributes_for_inter_item_gap_before_index_path(zval *handle, zval *indexPath);

/*@zep NS\NSCollectionViewLayout shouldInvalidateLayoutForBoundsChange(int handle, double x, double y, double width, double height) -> bool */
zend_long ns_nscollectionviewlayout_should_invalidate_layout_for_bounds_change(zval *handle, zval *x, zval *y, zval *width, zval *height);
/*@zep NS\NSCollectionViewLayout invalidationContextForBoundsChange(int handle, double x, double y, double width, double height) -> int */
zend_long ns_nscollectionviewlayout_invalidation_context_for_bounds_change(zval *handle, zval *x, zval *y, zval *width, zval *height);

/*@zep NS\NSCollectionViewLayout shouldInvalidateLayoutForPreferredLayoutAttributesWithOriginalAttributes(int handle, int preferredAttributes, int originalAttributes) -> bool */
zend_long ns_nscollectionviewlayout_should_invalidate_layout_for_preferred_layout_attributes_with_original_attributes(zval *handle, zval *preferredAttributes, zval *originalAttributes);
/*@zep NS\NSCollectionViewLayout invalidationContextForPreferredLayoutAttributesWithOriginalAttributes(int handle, int preferredAttributes, int originalAttributes) -> int */
zend_long ns_nscollectionviewlayout_invalidation_context_for_preferred_layout_attributes_with_original_attributes(zval *handle, zval *preferredAttributes, zval *originalAttributes);

/*@zep NS\NSCollectionViewLayout targetContentOffsetForProposedContentOffsetWithScrollingVelocity(int handle, double x, double y, double velocityX, double velocityY) -> array */
void ns_nscollectionviewlayout_target_content_offset_for_proposed_content_offset_with_scrolling_velocity(zval *return_value, zval *handle, zval *x, zval *y, zval *velocityX, zval *velocityY);
/*@zep NS\NSCollectionViewLayout targetContentOffsetForProposedContentOffset(int handle, double x, double y) -> array */
void ns_nscollectionviewlayout_target_content_offset_for_proposed_content_offset(zval *return_value, zval *handle, zval *x, zval *y);

/*@zep NS\NSCollectionViewLayout collectionViewContentSize(int handle) -> array */
void ns_nscollectionviewlayout_collection_view_content_size(zval *return_value, zval *handle);

/* ---- NSCollectionViewLayout (NSUpdateSupportHooks) ---- */

/*@zep NS\NSCollectionViewLayout prepareForCollectionViewUpdates(int handle, array updateItems) -> void */
void ns_nscollectionviewlayout_prepare_for_collection_view_updates(zval *handle, zval *updateItems);
/*@zep NS\NSCollectionViewLayout finalizeCollectionViewUpdates(int handle) -> void */
void ns_nscollectionviewlayout_finalize_collection_view_updates(zval *handle);

/*@zep NS\NSCollectionViewLayout prepareForAnimatedBoundsChange(int handle, double x, double y, double width, double height) -> void */
void ns_nscollectionviewlayout_prepare_for_animated_bounds_change(zval *handle, zval *x, zval *y, zval *width, zval *height);
/*@zep NS\NSCollectionViewLayout finalizeAnimatedBoundsChange(int handle) -> void */
void ns_nscollectionviewlayout_finalize_animated_bounds_change(zval *handle);

/*@zep NS\NSCollectionViewLayout prepareForTransitionToLayout(int handle, int newLayout) -> void */
void ns_nscollectionviewlayout_prepare_for_transition_to_layout(zval *handle, zval *newLayout);
/*@zep NS\NSCollectionViewLayout prepareForTransitionFromLayout(int handle, int oldLayout) -> void */
void ns_nscollectionviewlayout_prepare_for_transition_from_layout(zval *handle, zval *oldLayout);
/*@zep NS\NSCollectionViewLayout finalizeLayoutTransition(int handle) -> void */
void ns_nscollectionviewlayout_finalize_layout_transition(zval *handle);

/*@zep NS\NSCollectionViewLayout initialLayoutAttributesForAppearingItemAtIndexPath(int handle, int itemIndexPath) -> int */
zend_long ns_nscollectionviewlayout_initial_layout_attributes_for_appearing_item_at_index_path(zval *handle, zval *itemIndexPath);
/*@zep NS\NSCollectionViewLayout finalLayoutAttributesForDisappearingItemAtIndexPath(int handle, int itemIndexPath) -> int */
zend_long ns_nscollectionviewlayout_final_layout_attributes_for_disappearing_item_at_index_path(zval *handle, zval *itemIndexPath);
/*@zep NS\NSCollectionViewLayout initialLayoutAttributesForAppearingSupplementaryElementOfKindAtIndexPath(int handle, string elementKind, int elementIndexPath) -> int */
zend_long ns_nscollectionviewlayout_initial_layout_attributes_for_appearing_supplementary_element_of_kind_at_index_path(zval *handle, zval *elementKind, zval *elementIndexPath);
/*@zep NS\NSCollectionViewLayout finalLayoutAttributesForDisappearingSupplementaryElementOfKindAtIndexPath(int handle, string elementKind, int elementIndexPath) -> int */
zend_long ns_nscollectionviewlayout_final_layout_attributes_for_disappearing_supplementary_element_of_kind_at_index_path(zval *handle, zval *elementKind, zval *elementIndexPath);
/*@zep NS\NSCollectionViewLayout initialLayoutAttributesForAppearingDecorationElementOfKindAtIndexPath(int handle, string elementKind, int decorationIndexPath) -> int */
zend_long ns_nscollectionviewlayout_initial_layout_attributes_for_appearing_decoration_element_of_kind_at_index_path(zval *handle, zval *elementKind, zval *decorationIndexPath);
/*@zep NS\NSCollectionViewLayout finalLayoutAttributesForDisappearingDecorationElementOfKindAtIndexPath(int handle, string elementKind, int decorationIndexPath) -> int */
zend_long ns_nscollectionviewlayout_final_layout_attributes_for_disappearing_decoration_element_of_kind_at_index_path(zval *handle, zval *elementKind, zval *decorationIndexPath);

/*@zep NS\NSCollectionViewLayout indexPathsToDeleteForSupplementaryViewOfKind(int handle, string elementKind) -> array */
void ns_nscollectionviewlayout_index_paths_to_delete_for_supplementary_view_of_kind(zval *return_value, zval *handle, zval *elementKind);
/*@zep NS\NSCollectionViewLayout indexPathsToDeleteForDecorationViewOfKind(int handle, string elementKind) -> array */
void ns_nscollectionviewlayout_index_paths_to_delete_for_decoration_view_of_kind(zval *return_value, zval *handle, zval *elementKind);
/*@zep NS\NSCollectionViewLayout indexPathsToInsertForSupplementaryViewOfKind(int handle, string elementKind) -> array */
void ns_nscollectionviewlayout_index_paths_to_insert_for_supplementary_view_of_kind(zval *return_value, zval *handle, zval *elementKind);
/*@zep NS\NSCollectionViewLayout indexPathsToInsertForDecorationViewOfKind(int handle, string elementKind) -> array */
void ns_nscollectionviewlayout_index_paths_to_insert_for_decoration_view_of_kind(zval *return_value, zval *handle, zval *elementKind);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_COLLECTIONVIEWLAYOUT_H */
