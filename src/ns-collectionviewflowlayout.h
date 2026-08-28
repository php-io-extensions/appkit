#ifndef PHP_APPKIT_NS_COLLECTIONVIEWFLOWLAYOUT_H
#define PHP_APPKIT_NS_COLLECTIONVIEWFLOWLAYOUT_H

/*
 * Faithful 1:1 binding of AppKit NSCollectionViewFlowLayout.h. That
 * header declares two classes. Every member of
 * NSCollectionViewFlowLayoutInvalidationContext and
 * NSCollectionViewFlowLayout is either bound or reserved.
 * Nothing is omitted. Protocol NSCollectionViewDelegateFlowLayout
 * is not a class member (delegate methods belong to Bridge). The
 * NSCollectionViewScrollDirection typedef and the
 * NSCollectionElementKindSectionHeader /
 * NSCollectionElementKindSectionFooter APPKIT_EXTERN names are
 * not class members. There are no same-file categories. Inherited
 * NSCollectionViewLayout / NSObject members stay on those
 * classes. Neither class declares an initializer — construction
 * is synthesized init (allocs the concrete class). Nothing is
 * reserved. NSSize item / estimated / header / footer sizes and
 * NSEdgeInsets sectionInset follow the struct convention.
 * CGFloat spacings cross as double. NSCollectionViewScrollDirection
 * and NSUInteger section indexes cross as int. BOOL
 * sectionHeadersPinToVisibleBounds /
 * sectionFootersPinToVisibleBounds /
 * invalidateFlowLayoutDelegateMetrics /
 * invalidateFlowLayoutAttributes have no getter=is prefix.
 */

#include "php.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ---- NSCollectionViewFlowLayoutInvalidationContext ---- */

/*@zep-construct NS\NSCollectionViewFlowLayoutInvalidationContext init() -> int */
zend_long ns_nscollectionviewflowlayoutinvalidationcontext_init(void);

/*@zep NS\NSCollectionViewFlowLayoutInvalidationContext invalidateFlowLayoutDelegateMetrics(int handle) -> bool */
zend_long ns_nscollectionviewflowlayoutinvalidationcontext_invalidate_flow_layout_delegate_metrics(zval *handle);
/*@zep NS\NSCollectionViewFlowLayoutInvalidationContext setInvalidateFlowLayoutDelegateMetrics(int handle, bool invalidateFlowLayoutDelegateMetrics) -> void */
void ns_nscollectionviewflowlayoutinvalidationcontext_set_invalidate_flow_layout_delegate_metrics(zval *handle, zval *invalidateFlowLayoutDelegateMetrics);

/*@zep NS\NSCollectionViewFlowLayoutInvalidationContext invalidateFlowLayoutAttributes(int handle) -> bool */
zend_long ns_nscollectionviewflowlayoutinvalidationcontext_invalidate_flow_layout_attributes(zval *handle);
/*@zep NS\NSCollectionViewFlowLayoutInvalidationContext setInvalidateFlowLayoutAttributes(int handle, bool invalidateFlowLayoutAttributes) -> void */
void ns_nscollectionviewflowlayoutinvalidationcontext_set_invalidate_flow_layout_attributes(zval *handle, zval *invalidateFlowLayoutAttributes);

/* ---- NSCollectionViewFlowLayout ---- */

/*@zep-construct NS\NSCollectionViewFlowLayout init() -> int */
zend_long ns_nscollectionviewflowlayout_init(void);

/*@zep NS\NSCollectionViewFlowLayout minimumLineSpacing(int handle) -> double */
double ns_nscollectionviewflowlayout_minimum_line_spacing(zval *handle);
/*@zep NS\NSCollectionViewFlowLayout setMinimumLineSpacing(int handle, double minimumLineSpacing) -> void */
void ns_nscollectionviewflowlayout_set_minimum_line_spacing(zval *handle, zval *minimumLineSpacing);

/*@zep NS\NSCollectionViewFlowLayout minimumInteritemSpacing(int handle) -> double */
double ns_nscollectionviewflowlayout_minimum_interitem_spacing(zval *handle);
/*@zep NS\NSCollectionViewFlowLayout setMinimumInteritemSpacing(int handle, double minimumInteritemSpacing) -> void */
void ns_nscollectionviewflowlayout_set_minimum_interitem_spacing(zval *handle, zval *minimumInteritemSpacing);

/*@zep NS\NSCollectionViewFlowLayout itemSize(int handle) -> array */
void ns_nscollectionviewflowlayout_item_size(zval *return_value, zval *handle);
/*@zep NS\NSCollectionViewFlowLayout setItemSize(int handle, double width, double height) -> void */
void ns_nscollectionviewflowlayout_set_item_size(zval *handle, zval *width, zval *height);

/*@zep NS\NSCollectionViewFlowLayout estimatedItemSize(int handle) -> array */
void ns_nscollectionviewflowlayout_estimated_item_size(zval *return_value, zval *handle);
/*@zep NS\NSCollectionViewFlowLayout setEstimatedItemSize(int handle, double width, double height) -> void */
void ns_nscollectionviewflowlayout_set_estimated_item_size(zval *handle, zval *width, zval *height);

/*@zep NS\NSCollectionViewFlowLayout scrollDirection(int handle) -> int */
zend_long ns_nscollectionviewflowlayout_scroll_direction(zval *handle);
/*@zep NS\NSCollectionViewFlowLayout setScrollDirection(int handle, int scrollDirection) -> void */
void ns_nscollectionviewflowlayout_set_scroll_direction(zval *handle, zval *scrollDirection);

/*@zep NS\NSCollectionViewFlowLayout headerReferenceSize(int handle) -> array */
void ns_nscollectionviewflowlayout_header_reference_size(zval *return_value, zval *handle);
/*@zep NS\NSCollectionViewFlowLayout setHeaderReferenceSize(int handle, double width, double height) -> void */
void ns_nscollectionviewflowlayout_set_header_reference_size(zval *handle, zval *width, zval *height);

/*@zep NS\NSCollectionViewFlowLayout footerReferenceSize(int handle) -> array */
void ns_nscollectionviewflowlayout_footer_reference_size(zval *return_value, zval *handle);
/*@zep NS\NSCollectionViewFlowLayout setFooterReferenceSize(int handle, double width, double height) -> void */
void ns_nscollectionviewflowlayout_set_footer_reference_size(zval *handle, zval *width, zval *height);

/*@zep NS\NSCollectionViewFlowLayout sectionInset(int handle) -> array */
void ns_nscollectionviewflowlayout_section_inset(zval *return_value, zval *handle);
/*@zep NS\NSCollectionViewFlowLayout setSectionInset(int handle, double top, double left, double bottom, double right) -> void */
void ns_nscollectionviewflowlayout_set_section_inset(zval *handle, zval *top, zval *left, zval *bottom, zval *right);

/*@zep NS\NSCollectionViewFlowLayout sectionHeadersPinToVisibleBounds(int handle) -> bool */
zend_long ns_nscollectionviewflowlayout_section_headers_pin_to_visible_bounds(zval *handle);
/*@zep NS\NSCollectionViewFlowLayout setSectionHeadersPinToVisibleBounds(int handle, bool sectionHeadersPinToVisibleBounds) -> void */
void ns_nscollectionviewflowlayout_set_section_headers_pin_to_visible_bounds(zval *handle, zval *sectionHeadersPinToVisibleBounds);

/*@zep NS\NSCollectionViewFlowLayout sectionFootersPinToVisibleBounds(int handle) -> bool */
zend_long ns_nscollectionviewflowlayout_section_footers_pin_to_visible_bounds(zval *handle);
/*@zep NS\NSCollectionViewFlowLayout setSectionFootersPinToVisibleBounds(int handle, bool sectionFootersPinToVisibleBounds) -> void */
void ns_nscollectionviewflowlayout_set_section_footers_pin_to_visible_bounds(zval *handle, zval *sectionFootersPinToVisibleBounds);

/*@zep NS\NSCollectionViewFlowLayout sectionAtIndexIsCollapsed(int handle, int sectionIndex) -> bool */
zend_long ns_nscollectionviewflowlayout_section_at_index_is_collapsed(zval *handle, zval *sectionIndex);
/*@zep NS\NSCollectionViewFlowLayout collapseSectionAtIndex(int handle, int sectionIndex) -> void */
void ns_nscollectionviewflowlayout_collapse_section_at_index(zval *handle, zval *sectionIndex);
/*@zep NS\NSCollectionViewFlowLayout expandSectionAtIndex(int handle, int sectionIndex) -> void */
void ns_nscollectionviewflowlayout_expand_section_at_index(zval *handle, zval *sectionIndex);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_COLLECTIONVIEWFLOWLAYOUT_H */
