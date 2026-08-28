#ifndef PHP_APPKIT_NS_OUTLINEVIEW_H
#define PHP_APPKIT_NS_OUTLINEVIEW_H

/*
 * Faithful 1:1 binding of AppKit NSOutlineView.h. Every member of
 * the single base interface is either bound or reserved. Nothing is
 * omitted. Adopted NSOutlineViewDelegate / NSOutlineViewDataSource
 * protocol blocks and NSAccessibilityOutline are not class members
 * (delegate / data-source selectors belong to Bridge). There are no
 * same-file categories. Notification names
 * (NSOutlineViewSelectionDidChangeNotification and siblings) and the
 * NSOutlineViewDisclosureButtonKey / NSOutlineViewShowHideButtonKey
 * constants are not class members. The NSOutlineViewDropOnItemIndex
 * enum value is not a class member. Inherited NSTableView / NSControl
 * / NSView / NSResponder members stay on those classes. This header
 * declares no initializer — construction is synthesized initWithFrame
 * (allocs NSOutlineView). The NSTableView insert/remove/move row
 * primitives are UNAVAILABLE_ATTRIBUTE here and are reserved.
 * NSOutlineView redeclares delegate / dataSource (narrower protocols)
 * and userInterfaceLayoutDirection — those bind here. Flattened
 * collisions: expandItem: stays expandItem and the children form
 * emits expandItemExpandChildren (same for collapseItem / reloadItem).
 * Nullable id items / parent / dataSource / delegate arguments cross
 * as int handles (0 = nil; nil item is the root). outlineTableColumn
 * and NSIndexSet indexes cross as handles. indentationPerLevel
 * (CGFloat) crosses as double. Enums (NSTableViewAnimationOptions,
 * NSUserInterfaceLayoutDirection) cross as int. NSRect
 * frameOfOutlineCellAtRow: follows the struct convention.
 */

#include "php.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ---- construction glue ---- */

/*@zep-construct NS\NSOutlineView initWithFrame(double x, double y, double width, double height) -> int */
zend_long ns_nsoutlineview_init_with_frame(zval *x, zval *y, zval *width, zval *height);

/* ---- Data source / delegate / outline column ---- */

/*@zep NS\NSOutlineView delegate(int handle) -> int */
zend_long ns_nsoutlineview_delegate(zval *handle);
/*@zep NS\NSOutlineView setDelegate(int handle, int delegate) -> void */
void ns_nsoutlineview_set_delegate(zval *handle, zval *delegate);

/*@zep NS\NSOutlineView dataSource(int handle) -> int */
zend_long ns_nsoutlineview_data_source(zval *handle);
/*@zep NS\NSOutlineView setDataSource(int handle, int dataSource) -> void */
void ns_nsoutlineview_set_data_source(zval *handle, zval *dataSource);

/*@zep NS\NSOutlineView outlineTableColumn(int handle) -> int */
zend_long ns_nsoutlineview_outline_table_column(zval *handle);
/*@zep NS\NSOutlineView setOutlineTableColumn(int handle, int outlineTableColumn) -> void */
void ns_nsoutlineview_set_outline_table_column(zval *handle, zval *outlineTableColumn);

/* ---- Hierarchy ---- */

/*@zep NS\NSOutlineView isExpandable(int handle, int item) -> bool */
zend_long ns_nsoutlineview_is_expandable(zval *handle, zval *item);
/*@zep NS\NSOutlineView numberOfChildrenOfItem(int handle, int item) -> int */
zend_long ns_nsoutlineview_number_of_children_of_item(zval *handle, zval *item);
/*@zep NS\NSOutlineView childOfItem(int handle, int index, int item) -> int */
zend_long ns_nsoutlineview_child_of_item(zval *handle, zval *index, zval *item);

/*@zep NS\NSOutlineView expandItemExpandChildren(int handle, int item, bool expandChildren) -> void */
void ns_nsoutlineview_expand_item_expand_children(zval *handle, zval *item, zval *expandChildren);
/*@zep NS\NSOutlineView expandItem(int handle, int item) -> void */
void ns_nsoutlineview_expand_item(zval *handle, zval *item);

/*@zep NS\NSOutlineView collapseItemCollapseChildren(int handle, int item, bool collapseChildren) -> void */
void ns_nsoutlineview_collapse_item_collapse_children(zval *handle, zval *item, zval *collapseChildren);
/*@zep NS\NSOutlineView collapseItem(int handle, int item) -> void */
void ns_nsoutlineview_collapse_item(zval *handle, zval *item);

/*@zep NS\NSOutlineView reloadItemReloadChildren(int handle, int item, bool reloadChildren) -> void */
void ns_nsoutlineview_reload_item_reload_children(zval *handle, zval *item, zval *reloadChildren);
/*@zep NS\NSOutlineView reloadItem(int handle, int item) -> void */
void ns_nsoutlineview_reload_item(zval *handle, zval *item);

/*@zep NS\NSOutlineView parentForItem(int handle, int item) -> int */
zend_long ns_nsoutlineview_parent_for_item(zval *handle, zval *item);
/*@zep NS\NSOutlineView childIndexForItem(int handle, int item) -> int */
zend_long ns_nsoutlineview_child_index_for_item(zval *handle, zval *item);

/* ---- Item / row translation ---- */

/*@zep NS\NSOutlineView itemAtRow(int handle, int row) -> int */
zend_long ns_nsoutlineview_item_at_row(zval *handle, zval *row);
/*@zep NS\NSOutlineView rowForItem(int handle, int item) -> int */
zend_long ns_nsoutlineview_row_for_item(zval *handle, zval *item);

/* ---- Indentation ---- */

/*@zep NS\NSOutlineView levelForItem(int handle, int item) -> int */
zend_long ns_nsoutlineview_level_for_item(zval *handle, zval *item);
/*@zep NS\NSOutlineView levelForRow(int handle, int row) -> int */
zend_long ns_nsoutlineview_level_for_row(zval *handle, zval *row);
/*@zep NS\NSOutlineView isItemExpanded(int handle, int item) -> bool */
zend_long ns_nsoutlineview_is_item_expanded(zval *handle, zval *item);

/*@zep NS\NSOutlineView indentationPerLevel(int handle) -> double */
double ns_nsoutlineview_indentation_per_level(zval *handle);
/*@zep NS\NSOutlineView setIndentationPerLevel(int handle, double indentationPerLevel) -> void */
void ns_nsoutlineview_set_indentation_per_level(zval *handle, zval *indentationPerLevel);

/*@zep NS\NSOutlineView indentationMarkerFollowsCell(int handle) -> bool */
zend_long ns_nsoutlineview_indentation_marker_follows_cell(zval *handle);
/*@zep NS\NSOutlineView setIndentationMarkerFollowsCell(int handle, bool indentationMarkerFollowsCell) -> void */
void ns_nsoutlineview_set_indentation_marker_follows_cell(zval *handle, zval *indentationMarkerFollowsCell);

/*@zep NS\NSOutlineView autoresizesOutlineColumn(int handle) -> bool */
zend_long ns_nsoutlineview_autoresizes_outline_column(zval *handle);
/*@zep NS\NSOutlineView setAutoresizesOutlineColumn(int handle, bool autoresizesOutlineColumn) -> void */
void ns_nsoutlineview_set_autoresizes_outline_column(zval *handle, zval *autoresizesOutlineColumn);

/*@zep NS\NSOutlineView frameOfOutlineCellAtRow(int handle, int row) -> array */
void ns_nsoutlineview_frame_of_outline_cell_at_row(zval *return_value, zval *handle, zval *row);

/* ---- Drag and drop ---- */

/*@zep NS\NSOutlineView setDropItemDropChildIndex(int handle, int item, int index) -> void */
void ns_nsoutlineview_set_drop_item_drop_child_index(zval *handle, zval *item, zval *index);
/*@zep NS\NSOutlineView shouldCollapseAutoExpandedItemsForDeposited(int handle, bool deposited) -> bool */
zend_long ns_nsoutlineview_should_collapse_auto_expanded_items_for_deposited(zval *handle, zval *deposited);

/* ---- Persistence ---- */

/*@zep NS\NSOutlineView autosaveExpandedItems(int handle) -> bool */
zend_long ns_nsoutlineview_autosave_expanded_items(zval *handle);
/*@zep NS\NSOutlineView setAutosaveExpandedItems(int handle, bool autosaveExpandedItems) -> void */
void ns_nsoutlineview_set_autosave_expanded_items(zval *handle, zval *autosaveExpandedItems);

/* ---- Animated insert / remove / move ---- */

/*@zep NS\NSOutlineView insertItemsAtIndexesInParentWithAnimation(int handle, int indexes, int parent, int animationOptions) -> void */
void ns_nsoutlineview_insert_items_at_indexes_in_parent_with_animation(zval *handle, zval *indexes, zval *parent, zval *animationOptions);
/*@zep NS\NSOutlineView removeItemsAtIndexesInParentWithAnimation(int handle, int indexes, int parent, int animationOptions) -> void */
void ns_nsoutlineview_remove_items_at_indexes_in_parent_with_animation(zval *handle, zval *indexes, zval *parent, zval *animationOptions);
/*@zep NS\NSOutlineView moveItemAtIndexInParentToIndexInParent(int handle, int fromIndex, int oldParent, int toIndex, int newParent) -> void */
void ns_nsoutlineview_move_item_at_index_in_parent_to_index_in_parent(zval *handle, zval *fromIndex, zval *oldParent, zval *toIndex, zval *newParent);

/*@reserved NS\NSOutlineView - (void)insertRowsAtIndexes:(NSIndexSet *)indexes withAnimation:(NSTableViewAnimationOptions)animationOptions UNAVAILABLE_ATTRIBUTE; */
/*@reserved NS\NSOutlineView - (void)removeRowsAtIndexes:(NSIndexSet *)indexes withAnimation:(NSTableViewAnimationOptions)animationOptions UNAVAILABLE_ATTRIBUTE; */
/*@reserved NS\NSOutlineView - (void)moveRowAtIndex:(NSInteger)oldIndex toIndex:(NSInteger)newIndex UNAVAILABLE_ATTRIBUTE; */

/* ---- Layout / references ---- */

/*@zep NS\NSOutlineView userInterfaceLayoutDirection(int handle) -> int */
zend_long ns_nsoutlineview_user_interface_layout_direction(zval *handle);
/*@zep NS\NSOutlineView setUserInterfaceLayoutDirection(int handle, int userInterfaceLayoutDirection) -> void */
void ns_nsoutlineview_set_user_interface_layout_direction(zval *handle, zval *userInterfaceLayoutDirection);

/*@zep NS\NSOutlineView stronglyReferencesItems(int handle) -> bool */
zend_long ns_nsoutlineview_strongly_references_items(zval *handle);
/*@zep NS\NSOutlineView setStronglyReferencesItems(int handle, bool stronglyReferencesItems) -> void */
void ns_nsoutlineview_set_strongly_references_items(zval *handle, zval *stronglyReferencesItems);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_OUTLINEVIEW_H */
