#ifndef PHP_APPKIT_NS_COLLECTIONVIEW_H
#define PHP_APPKIT_NS_COLLECTIONVIEW_H

/*
 * Faithful 1:1 binding of AppKit NSCollectionView.h. That header
 * declares two classes. Every member of NSCollectionView (base
 * interface + same-file NSDeprecated category) and of the
 * same-file companion NSCollectionViewItem is either bound or
 * reserved. Nothing is omitted. Adopted
 * NSCollectionViewDataSource / NSCollectionViewDelegate /
 * NSCollectionViewPrefetching / NSDraggingSource /
 * NSDraggingDestination protocol blocks and
 * NSCollectionViewElement / NSCollectionViewSectionHeaderView
 * are not class members (delegate / data-source selectors
 * belong to Bridge). Same-file categories on other classes
 * (NSIndexPath(NSCollectionViewAdditions),
 * NSSet(NSCollectionViewAdditions)) bind on those classes,
 * not here. NSCollectionViewLayout / FlowLayout / GridLayout
 * live in their own headers and bind there.
 * Compositional and transition layouts stay deferred
 * (block-heavy). The NSCollectionViewDropOperation /
 * ItemHighlightState / ScrollPosition typedefs and the
 * NSCollectionViewSupplementaryElementKind string typedef are
 * not class members. Inherited NSView / NSViewController /
 * NSResponder members stay on those classes. Neither class
 * declares an initializer — construction is synthesized
 * initWithFrame (allocs NSCollectionView) and
 * initWithNibNameBundle (allocs NSCollectionViewItem).
 * Reserved: registerClass:forItemWithIdentifier: and
 * registerClass:forSupplementaryViewOfKind:withIdentifier:
 * (Class), performBatchUpdates:completionHandler: (block),
 * draggingImageForItemsAtIndexPaths:withEvent:offset: and
 * draggingImageForItemsAtIndexes:withEvent:offset:
 * (NSPointPointer inout), and the entire NSDeprecated
 * category (API_DEPRECATED), including itemPrototype /
 * maxNumberOfRows / maxNumberOfColumns / minItemSize /
 * maxItemSize (each reserved as getter+setter) and
 * newItemForRepresentedObject:. Soft-deprecated
 * selectionIndexes / itemAtIndex: / frameForItemAtIndex:
 * stay bound. Nullable dataSource / prefetchDataSource /
 * delegate / backgroundView / collectionViewLayout / sender /
 * nib / item / event arguments cross as int handles
 * (0 = nil). NSUserInterfaceItemIdentifier and
 * NSCollectionViewSupplementaryElementKind cross as string.
 * NSIndexSet (selectionIndexes, section edits) crosses as a
 * handle. NSSet of NSIndexPath (selectionIndexPaths and the
 * item-path methods) marshals as an array of handles.
 * NSArray content / backgroundColors / visibleItems /
 * visibleSupplementaryViews / draggingImageComponents
 * cross as arrays of handles. backgroundColors is
 * null_resettable — the setter takes var so null resets.
 * NSIndexPath / NSColor / NSView / NSNib /
 * NSCollectionViewLayout / NSCollectionViewLayoutAttributes /
 * NSCollectionViewItem / NSImageView / NSTextField cross as
 * handles. NSRect / NSPoint follow the struct convention.
 * Enums (NSCollectionViewScrollPosition, highlight state,
 * NSDragOperation) cross as int. getter=isFirstResponder /
 * isSelectable / isSelected emit those names.
 */

#include "php.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ---- NSCollectionViewItem ---- */

/*@zep-construct NS\NSCollectionViewItem initWithNibNameBundle(var nibName, int bundle) -> int */
zend_long ns_nscollectionviewitem_init_with_nib_name_bundle(zval *nibName, zval *bundle);

/*@zep NS\NSCollectionViewItem collectionView(int handle) -> int */
zend_long ns_nscollectionviewitem_collection_view(zval *handle);

/*@zep NS\NSCollectionViewItem isSelected(int handle) -> bool */
zend_long ns_nscollectionviewitem_is_selected(zval *handle);
/*@zep NS\NSCollectionViewItem setSelected(int handle, bool selected) -> void */
void ns_nscollectionviewitem_set_selected(zval *handle, zval *selected);

/*@zep NS\NSCollectionViewItem highlightState(int handle) -> int */
zend_long ns_nscollectionviewitem_highlight_state(zval *handle);
/*@zep NS\NSCollectionViewItem setHighlightState(int handle, int highlightState) -> void */
void ns_nscollectionviewitem_set_highlight_state(zval *handle, zval *highlightState);

/*@zep NS\NSCollectionViewItem imageView(int handle) -> int */
zend_long ns_nscollectionviewitem_image_view(zval *handle);
/*@zep NS\NSCollectionViewItem setImageView(int handle, int imageView) -> void */
void ns_nscollectionviewitem_set_image_view(zval *handle, zval *imageView);

/*@zep NS\NSCollectionViewItem textField(int handle) -> int */
zend_long ns_nscollectionviewitem_text_field(zval *handle);
/*@zep NS\NSCollectionViewItem setTextField(int handle, int textField) -> void */
void ns_nscollectionviewitem_set_text_field(zval *handle, zval *textField);

/*@zep NS\NSCollectionViewItem draggingImageComponents(int handle) -> array */
void ns_nscollectionviewitem_dragging_image_components(zval *return_value, zval *handle);

/* ---- NSCollectionView construction glue ---- */

/*@zep-construct NS\NSCollectionView initWithFrame(double x, double y, double width, double height) -> int */
zend_long ns_nscollectionview_init_with_frame(zval *x, zval *y, zval *width, zval *height);

/* ---- Data source / model objects ---- */

/*@zep NS\NSCollectionView dataSource(int handle) -> int */
zend_long ns_nscollectionview_data_source(zval *handle);
/*@zep NS\NSCollectionView setDataSource(int handle, int dataSource) -> void */
void ns_nscollectionview_set_data_source(zval *handle, zval *dataSource);

/*@zep NS\NSCollectionView prefetchDataSource(int handle) -> int */
zend_long ns_nscollectionview_prefetch_data_source(zval *handle);
/*@zep NS\NSCollectionView setPrefetchDataSource(int handle, int prefetchDataSource) -> void */
void ns_nscollectionview_set_prefetch_data_source(zval *handle, zval *prefetchDataSource);

/*@zep NS\NSCollectionView content(int handle) -> array */
void ns_nscollectionview_content(zval *return_value, zval *handle);
/*@zep NS\NSCollectionView setContent(int handle, array content) -> void */
void ns_nscollectionview_set_content(zval *handle, zval *content);

/*@zep NS\NSCollectionView reloadData(int handle) -> void */
void ns_nscollectionview_reload_data(zval *handle);

/* ---- Delegate ---- */

/*@zep NS\NSCollectionView delegate(int handle) -> int */
zend_long ns_nscollectionview_delegate(zval *handle);
/*@zep NS\NSCollectionView setDelegate(int handle, int delegate) -> void */
void ns_nscollectionview_set_delegate(zval *handle, zval *delegate);

/* ---- Decoration ---- */

/*@zep NS\NSCollectionView backgroundView(int handle) -> int */
zend_long ns_nscollectionview_background_view(zval *handle);
/*@zep NS\NSCollectionView setBackgroundView(int handle, int backgroundView) -> void */
void ns_nscollectionview_set_background_view(zval *handle, zval *backgroundView);

/*@zep NS\NSCollectionView backgroundViewScrollsWithContent(int handle) -> bool */
zend_long ns_nscollectionview_background_view_scrolls_with_content(zval *handle);
/*@zep NS\NSCollectionView setBackgroundViewScrollsWithContent(int handle, bool backgroundViewScrollsWithContent) -> void */
void ns_nscollectionview_set_background_view_scrolls_with_content(zval *handle, zval *backgroundViewScrollsWithContent);

/* ---- Layout ---- */

/*@zep NS\NSCollectionView collectionViewLayout(int handle) -> int */
zend_long ns_nscollectionview_collection_view_layout(zval *handle);
/*@zep NS\NSCollectionView setCollectionViewLayout(int handle, int collectionViewLayout) -> void */
void ns_nscollectionview_set_collection_view_layout(zval *handle, zval *collectionViewLayout);

/*@zep NS\NSCollectionView layoutAttributesForItemAtIndexPath(int handle, int indexPath) -> int */
zend_long ns_nscollectionview_layout_attributes_for_item_at_index_path(zval *handle, zval *indexPath);
/*@zep NS\NSCollectionView layoutAttributesForSupplementaryElementOfKindAtIndexPath(int handle, string kind, int indexPath) -> int */
zend_long ns_nscollectionview_layout_attributes_for_supplementary_element_of_kind_at_index_path(zval *handle, zval *kind, zval *indexPath);

/*@zep NS\NSCollectionView frameForItemAtIndex(int handle, int index) -> array */
void ns_nscollectionview_frame_for_item_at_index(zval *return_value, zval *handle, zval *index);
/*@zep NS\NSCollectionView frameForItemAtIndexWithNumberOfItems(int handle, int index, int numberOfItems) -> array */
void ns_nscollectionview_frame_for_item_at_index_with_number_of_items(zval *return_value, zval *handle, zval *index, zval *numberOfItems);

/*@zep NS\NSCollectionView backgroundColors(int handle) -> array */
void ns_nscollectionview_background_colors(zval *return_value, zval *handle);
/*@zep NS\NSCollectionView setBackgroundColors(int handle, var backgroundColors) -> void */
void ns_nscollectionview_set_background_colors(zval *handle, zval *backgroundColors);

/* ---- Section and item counts ---- */

/*@zep NS\NSCollectionView numberOfSections(int handle) -> int */
zend_long ns_nscollectionview_number_of_sections(zval *handle);
/*@zep NS\NSCollectionView numberOfItemsInSection(int handle, int section) -> int */
zend_long ns_nscollectionview_number_of_items_in_section(zval *handle, zval *section);

/* ---- Selection ---- */

/*@zep NS\NSCollectionView isFirstResponder(int handle) -> bool */
zend_long ns_nscollectionview_is_first_responder(zval *handle);

/*@zep NS\NSCollectionView isSelectable(int handle) -> bool */
zend_long ns_nscollectionview_is_selectable(zval *handle);
/*@zep NS\NSCollectionView setSelectable(int handle, bool selectable) -> void */
void ns_nscollectionview_set_selectable(zval *handle, zval *selectable);

/*@zep NS\NSCollectionView allowsEmptySelection(int handle) -> bool */
zend_long ns_nscollectionview_allows_empty_selection(zval *handle);
/*@zep NS\NSCollectionView setAllowsEmptySelection(int handle, bool allowsEmptySelection) -> void */
void ns_nscollectionview_set_allows_empty_selection(zval *handle, zval *allowsEmptySelection);

/*@zep NS\NSCollectionView allowsMultipleSelection(int handle) -> bool */
zend_long ns_nscollectionview_allows_multiple_selection(zval *handle);
/*@zep NS\NSCollectionView setAllowsMultipleSelection(int handle, bool allowsMultipleSelection) -> void */
void ns_nscollectionview_set_allows_multiple_selection(zval *handle, zval *allowsMultipleSelection);

/*@zep NS\NSCollectionView selectionIndexes(int handle) -> int */
zend_long ns_nscollectionview_selection_indexes(zval *handle);
/*@zep NS\NSCollectionView setSelectionIndexes(int handle, int selectionIndexes) -> void */
void ns_nscollectionview_set_selection_indexes(zval *handle, zval *selectionIndexes);

/*@zep NS\NSCollectionView selectionIndexPaths(int handle) -> array */
void ns_nscollectionview_selection_index_paths(zval *return_value, zval *handle);
/*@zep NS\NSCollectionView setSelectionIndexPaths(int handle, array selectionIndexPaths) -> void */
void ns_nscollectionview_set_selection_index_paths(zval *handle, zval *selectionIndexPaths);

/*@zep NS\NSCollectionView selectItemsAtIndexPathsScrollPosition(int handle, array indexPaths, int scrollPosition) -> void */
void ns_nscollectionview_select_items_at_index_paths_scroll_position(zval *handle, zval *indexPaths, zval *scrollPosition);
/*@zep NS\NSCollectionView deselectItemsAtIndexPaths(int handle, array indexPaths) -> void */
void ns_nscollectionview_deselect_items_at_index_paths(zval *handle, zval *indexPaths);

/*@zep NS\NSCollectionView selectAll(int handle, int sender) -> void */
void ns_nscollectionview_select_all(zval *handle, zval *sender);
/*@zep NS\NSCollectionView deselectAll(int handle, int sender) -> void */
void ns_nscollectionview_deselect_all(zval *handle, zval *sender);

/* ---- Registration / dequeue ---- */

/*@reserved NS\NSCollectionView - (void)registerClass:(nullable Class)itemClass forItemWithIdentifier:(NSUserInterfaceItemIdentifier)identifier; */
/*@zep NS\NSCollectionView registerNibForItemWithIdentifier(int handle, int nib, string identifier) -> void */
void ns_nscollectionview_register_nib_for_item_with_identifier(zval *handle, zval *nib, zval *identifier);

/*@reserved NS\NSCollectionView - (void)registerClass:(nullable Class)viewClass forSupplementaryViewOfKind:(NSCollectionViewSupplementaryElementKind)kind withIdentifier:(NSUserInterfaceItemIdentifier)identifier; */
/*@zep NS\NSCollectionView registerNibForSupplementaryViewOfKindWithIdentifier(int handle, int nib, string kind, string identifier) -> void */
void ns_nscollectionview_register_nib_for_supplementary_view_of_kind_with_identifier(zval *handle, zval *nib, zval *kind, zval *identifier);

/*@zep NS\NSCollectionView makeItemWithIdentifierForIndexPath(int handle, string identifier, int indexPath) -> int */
zend_long ns_nscollectionview_make_item_with_identifier_for_index_path(zval *handle, zval *identifier, zval *indexPath);
/*@zep NS\NSCollectionView makeSupplementaryViewOfKindWithIdentifierForIndexPath(int handle, string elementKind, string identifier, int indexPath) -> int */
zend_long ns_nscollectionview_make_supplementary_view_of_kind_with_identifier_for_index_path(zval *handle, zval *elementKind, zval *identifier, zval *indexPath);

/* ---- Finding items ---- */

/*@zep NS\NSCollectionView itemAtIndex(int handle, int index) -> int */
zend_long ns_nscollectionview_item_at_index(zval *handle, zval *index);
/*@zep NS\NSCollectionView itemAtIndexPath(int handle, int indexPath) -> int */
zend_long ns_nscollectionview_item_at_index_path(zval *handle, zval *indexPath);

/*@zep NS\NSCollectionView visibleItems(int handle) -> array */
void ns_nscollectionview_visible_items(zval *return_value, zval *handle);
/*@zep NS\NSCollectionView indexPathsForVisibleItems(int handle) -> array */
void ns_nscollectionview_index_paths_for_visible_items(zval *return_value, zval *handle);

/*@zep NS\NSCollectionView indexPathForItem(int handle, int item) -> int */
zend_long ns_nscollectionview_index_path_for_item(zval *handle, zval *item);
/*@zep NS\NSCollectionView indexPathForItemAtPoint(int handle, double x, double y) -> int */
zend_long ns_nscollectionview_index_path_for_item_at_point(zval *handle, zval *x, zval *y);

/* ---- Finding supplementary views ---- */

/*@zep NS\NSCollectionView supplementaryViewForElementKindAtIndexPath(int handle, string elementKind, int indexPath) -> int */
zend_long ns_nscollectionview_supplementary_view_for_element_kind_at_index_path(zval *handle, zval *elementKind, zval *indexPath);
/*@zep NS\NSCollectionView visibleSupplementaryViewsOfKind(int handle, string elementKind) -> array */
void ns_nscollectionview_visible_supplementary_views_of_kind(zval *return_value, zval *handle, zval *elementKind);
/*@zep NS\NSCollectionView indexPathsForVisibleSupplementaryElementsOfKind(int handle, string elementKind) -> array */
void ns_nscollectionview_index_paths_for_visible_supplementary_elements_of_kind(zval *return_value, zval *handle, zval *elementKind);

/* ---- Modifying items and sections ---- */

/*@zep NS\NSCollectionView insertSections(int handle, int sections) -> void */
void ns_nscollectionview_insert_sections(zval *handle, zval *sections);
/*@zep NS\NSCollectionView deleteSections(int handle, int sections) -> void */
void ns_nscollectionview_delete_sections(zval *handle, zval *sections);
/*@zep NS\NSCollectionView reloadSections(int handle, int sections) -> void */
void ns_nscollectionview_reload_sections(zval *handle, zval *sections);
/*@zep NS\NSCollectionView moveSectionToSection(int handle, int section, int newSection) -> void */
void ns_nscollectionview_move_section_to_section(zval *handle, zval *section, zval *newSection);

/*@zep NS\NSCollectionView insertItemsAtIndexPaths(int handle, array indexPaths) -> void */
void ns_nscollectionview_insert_items_at_index_paths(zval *handle, zval *indexPaths);
/*@zep NS\NSCollectionView deleteItemsAtIndexPaths(int handle, array indexPaths) -> void */
void ns_nscollectionview_delete_items_at_index_paths(zval *handle, zval *indexPaths);
/*@zep NS\NSCollectionView reloadItemsAtIndexPaths(int handle, array indexPaths) -> void */
void ns_nscollectionview_reload_items_at_index_paths(zval *handle, zval *indexPaths);
/*@zep NS\NSCollectionView moveItemAtIndexPathToIndexPath(int handle, int indexPath, int newIndexPath) -> void */
void ns_nscollectionview_move_item_at_index_path_to_index_path(zval *handle, zval *indexPath, zval *newIndexPath);

/*@reserved NS\NSCollectionView - (void)performBatchUpdates:(void (NS_NOESCAPE ^_Nullable)(void))updates completionHandler:(void (^_Nullable)(BOOL finished))completionHandler — block */

/* ---- Section collapse / scrolling ---- */

/*@zep NS\NSCollectionView toggleSectionCollapse(int handle, int sender) -> void */
void ns_nscollectionview_toggle_section_collapse(zval *handle, zval *sender);

/*@zep NS\NSCollectionView scrollToItemsAtIndexPathsScrollPosition(int handle, array indexPaths, int scrollPosition) -> void */
void ns_nscollectionview_scroll_to_items_at_index_paths_scroll_position(zval *handle, zval *indexPaths, zval *scrollPosition);

/* ---- Drag and drop ---- */

/*@zep NS\NSCollectionView setDraggingSourceOperationMaskForLocal(int handle, int dragOperationMask, bool localDestination) -> void */
void ns_nscollectionview_set_dragging_source_operation_mask_for_local(zval *handle, zval *dragOperationMask, zval *localDestination);

/*@reserved NS\NSCollectionView - (NSImage *)draggingImageForItemsAtIndexPaths:(NSSet<NSIndexPath *> *)indexPaths withEvent:(NSEvent *)event offset:(NSPointPointer)dragImageOffset — NSPointPointer inout */
/*@reserved NS\NSCollectionView - (NSImage *)draggingImageForItemsAtIndexes:(NSIndexSet *)indexes withEvent:(NSEvent *)event offset:(NSPointPointer)dragImageOffset — NSPointPointer inout */

/* ---- NSDeprecated ---- */

/*@reserved NS\NSCollectionView - (NSCollectionViewItem *)newItemForRepresentedObject:(id)object API_DEPRECATED */
/*@reserved NS\NSCollectionView @property (nullable, strong) NSCollectionViewItem *itemPrototype API_DEPRECATED — getter */
/*@reserved NS\NSCollectionView @property (nullable, strong) NSCollectionViewItem *itemPrototype API_DEPRECATED — setter */
/*@reserved NS\NSCollectionView @property NSUInteger maxNumberOfRows API_DEPRECATED — getter */
/*@reserved NS\NSCollectionView @property NSUInteger maxNumberOfRows API_DEPRECATED — setter */
/*@reserved NS\NSCollectionView @property NSUInteger maxNumberOfColumns API_DEPRECATED — getter */
/*@reserved NS\NSCollectionView @property NSUInteger maxNumberOfColumns API_DEPRECATED — setter */
/*@reserved NS\NSCollectionView @property NSSize minItemSize API_DEPRECATED — getter */
/*@reserved NS\NSCollectionView @property NSSize minItemSize API_DEPRECATED — setter */
/*@reserved NS\NSCollectionView @property NSSize maxItemSize API_DEPRECATED — getter */
/*@reserved NS\NSCollectionView @property NSSize maxItemSize API_DEPRECATED — setter */

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_COLLECTIONVIEW_H */
