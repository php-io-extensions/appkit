#ifndef PHP_APPKIT_NS_TABLEVIEW_H
#define PHP_APPKIT_NS_TABLEVIEW_H

/*
 * Faithful 1:1 binding of AppKit NSTableView.h. Every member of
 * the class (base interface + same-file NSDeprecated category) is
 * either bound or reserved. Nothing is omitted. Adopted
 * NSTableViewDelegate / NSTableViewDataSource protocol blocks and
 * the NSObject(NSTableViewDataSourceDeprecated) category are not
 * class members (delegate / data-source selectors belong to
 * Bridge). NSTableViewDiffableDataSource lives in its own header
 * and is not bound here. Notification names
 * (NSTableViewSelectionDidChangeNotification and siblings) and
 * the NSTableViewRowViewKey constant are not class members. The
 * NSTableViewDropOperation / ColumnAutoresizingStyle /
 * GridLineStyle / RowSizeStyle / Style / SelectionHighlightStyle /
 * DraggingDestinationFeedbackStyle / TableRowActionEdge /
 * AnimationOptions typedefs are not class members. Companion
 * types with their own headers (NSTableColumn, NSTableCellView,
 * NSTableRowView, NSTableHeaderView, NSTableHeaderCell,
 * NSTableViewRowAction) are not bound here. Inherited NSControl /
 * NSView / NSResponder members stay on those classes.
 * initWithFrame is alloc+init construction glue. Reserved:
 * initWithCoder: (NSCoder), dragImageForRowsWithIndexes:tableColumns:
 * event:offset: (NSPointPointer inout),
 * enumerateAvailableRowViewsUsingBlock: (block), and the entire
 * NSDeprecated category (API_DEPRECATED). Nullable dataSource /
 * delegate / headerView / cornerView / highlightedTableColumn /
 * sender / owner / nib / event / image arguments cross as int
 * handles (0 = nil). Nullable SEL doubleAction and nullable
 * NSString autosaveName cross as var. NSUserInterfaceItemIdentifier
 * crosses as string. NSIndexSet / NSDictionary (registered nibs)
 * / NSColor / NSImage / NSView / NSTableColumn / NSTableRowView /
 * NSNib / NSEvent cross as handles. NSArray<NSTableColumn*> /
 * NSArray<NSSortDescriptor*> cross as arrays of handles. NSRect /
 * NSPoint / NSSize / NSRange follow the struct convention. Enums
 * and NSDragOperation cross as int. CGFloat rowHeight crosses as
 * double.
 */

#include "php.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ---- Construction ---- */

/*@zep NS\NSTableView initWithFrame(double x, double y, double width, double height) -> int */
zend_long ns_nstableview_init_with_frame(zval *x, zval *y, zval *width, zval *height);
/*@reserved NS\NSTableView - (nullable instancetype)initWithCoder:(NSCoder *)coder NS_DESIGNATED_INITIALIZER; */

/* ---- Data source / delegate / chrome ---- */

/*@zep NS\NSTableView dataSource(int handle) -> int */
zend_long ns_nstableview_data_source(zval *handle);
/*@zep NS\NSTableView setDataSource(int handle, int dataSource) -> void */
void ns_nstableview_set_data_source(zval *handle, zval *dataSource);

/*@zep NS\NSTableView delegate(int handle) -> int */
zend_long ns_nstableview_delegate(zval *handle);
/*@zep NS\NSTableView setDelegate(int handle, int delegate) -> void */
void ns_nstableview_set_delegate(zval *handle, zval *delegate);

/*@zep NS\NSTableView headerView(int handle) -> int */
zend_long ns_nstableview_header_view(zval *handle);
/*@zep NS\NSTableView setHeaderView(int handle, int headerView) -> void */
void ns_nstableview_set_header_view(zval *handle, zval *headerView);

/*@zep NS\NSTableView cornerView(int handle) -> int */
zend_long ns_nstableview_corner_view(zval *handle);
/*@zep NS\NSTableView setCornerView(int handle, int cornerView) -> void */
void ns_nstableview_set_corner_view(zval *handle, zval *cornerView);

/* ---- Column / grid / background configuration ---- */

/*@zep NS\NSTableView allowsColumnReordering(int handle) -> bool */
zend_long ns_nstableview_allows_column_reordering(zval *handle);
/*@zep NS\NSTableView setAllowsColumnReordering(int handle, bool allowsColumnReordering) -> void */
void ns_nstableview_set_allows_column_reordering(zval *handle, zval *allowsColumnReordering);

/*@zep NS\NSTableView allowsColumnResizing(int handle) -> bool */
zend_long ns_nstableview_allows_column_resizing(zval *handle);
/*@zep NS\NSTableView setAllowsColumnResizing(int handle, bool allowsColumnResizing) -> void */
void ns_nstableview_set_allows_column_resizing(zval *handle, zval *allowsColumnResizing);

/*@zep NS\NSTableView columnAutoresizingStyle(int handle) -> int */
zend_long ns_nstableview_column_autoresizing_style(zval *handle);
/*@zep NS\NSTableView setColumnAutoresizingStyle(int handle, int columnAutoresizingStyle) -> void */
void ns_nstableview_set_column_autoresizing_style(zval *handle, zval *columnAutoresizingStyle);

/*@zep NS\NSTableView gridStyleMask(int handle) -> int */
zend_long ns_nstableview_grid_style_mask(zval *handle);
/*@zep NS\NSTableView setGridStyleMask(int handle, int gridStyleMask) -> void */
void ns_nstableview_set_grid_style_mask(zval *handle, zval *gridStyleMask);

/*@zep NS\NSTableView intercellSpacing(int handle) -> array */
void ns_nstableview_intercell_spacing(zval *return_value, zval *handle);
/*@zep NS\NSTableView setIntercellSpacing(int handle, double width, double height) -> void */
void ns_nstableview_set_intercell_spacing(zval *handle, zval *width, zval *height);

/*@zep NS\NSTableView usesAlternatingRowBackgroundColors(int handle) -> bool */
zend_long ns_nstableview_uses_alternating_row_background_colors(zval *handle);
/*@zep NS\NSTableView setUsesAlternatingRowBackgroundColors(int handle, bool usesAlternatingRowBackgroundColors) -> void */
void ns_nstableview_set_uses_alternating_row_background_colors(zval *handle, zval *usesAlternatingRowBackgroundColors);

/*@zep NS\NSTableView backgroundColor(int handle) -> int */
zend_long ns_nstableview_background_color(zval *handle);
/*@zep NS\NSTableView setBackgroundColor(int handle, int backgroundColor) -> void */
void ns_nstableview_set_background_color(zval *handle, zval *backgroundColor);

/*@zep NS\NSTableView gridColor(int handle) -> int */
zend_long ns_nstableview_grid_color(zval *handle);
/*@zep NS\NSTableView setGridColor(int handle, int gridColor) -> void */
void ns_nstableview_set_grid_color(zval *handle, zval *gridColor);

/*@zep NS\NSTableView rowSizeStyle(int handle) -> int */
zend_long ns_nstableview_row_size_style(zval *handle);
/*@zep NS\NSTableView setRowSizeStyle(int handle, int rowSizeStyle) -> void */
void ns_nstableview_set_row_size_style(zval *handle, zval *rowSizeStyle);

/*@zep NS\NSTableView effectiveRowSizeStyle(int handle) -> int */
zend_long ns_nstableview_effective_row_size_style(zval *handle);

/*@zep NS\NSTableView rowHeight(int handle) -> double */
double ns_nstableview_row_height(zval *handle);
/*@zep NS\NSTableView setRowHeight(int handle, double rowHeight) -> void */
void ns_nstableview_set_row_height(zval *handle, zval *rowHeight);

/*@zep NS\NSTableView noteHeightOfRowsWithIndexesChanged(int handle, int indexSet) -> void */
void ns_nstableview_note_height_of_rows_with_indexes_changed(zval *handle, zval *indexSet);

/* ---- Columns ---- */

/*@zep NS\NSTableView tableColumns(int handle) -> array */
void ns_nstableview_table_columns(zval *return_value, zval *handle);
/*@zep NS\NSTableView numberOfColumns(int handle) -> int */
zend_long ns_nstableview_number_of_columns(zval *handle);
/*@zep NS\NSTableView numberOfRows(int handle) -> int */
zend_long ns_nstableview_number_of_rows(zval *handle);

/*@zep NS\NSTableView addTableColumn(int handle, int tableColumn) -> void */
void ns_nstableview_add_table_column(zval *handle, zval *tableColumn);
/*@zep NS\NSTableView removeTableColumn(int handle, int tableColumn) -> void */
void ns_nstableview_remove_table_column(zval *handle, zval *tableColumn);
/*@zep NS\NSTableView moveColumnToColumn(int handle, int oldIndex, int newIndex) -> void */
void ns_nstableview_move_column_to_column(zval *handle, zval *oldIndex, zval *newIndex);

/*@zep NS\NSTableView columnWithIdentifier(int handle, string identifier) -> int */
zend_long ns_nstableview_column_with_identifier(zval *handle, zval *identifier);
/*@zep NS\NSTableView tableColumnWithIdentifier(int handle, string identifier) -> int */
zend_long ns_nstableview_table_column_with_identifier(zval *handle, zval *identifier);

/* ---- Layout / reload ---- */

/*@zep NS\NSTableView tile(int handle) -> void */
void ns_nstableview_tile(zval *handle);
/*@zep NS\NSTableView sizeToFit(int handle) -> void */
void ns_nstableview_size_to_fit(zval *handle);
/*@zep NS\NSTableView sizeLastColumnToFit(int handle) -> void */
void ns_nstableview_size_last_column_to_fit(zval *handle);

/*@zep NS\NSTableView scrollRowToVisible(int handle, int row) -> void */
void ns_nstableview_scroll_row_to_visible(zval *handle, zval *row);
/*@zep NS\NSTableView scrollColumnToVisible(int handle, int column) -> void */
void ns_nstableview_scroll_column_to_visible(zval *handle, zval *column);

/*@zep NS\NSTableView reloadData(int handle) -> void */
void ns_nstableview_reload_data(zval *handle);
/*@zep NS\NSTableView noteNumberOfRowsChanged(int handle) -> void */
void ns_nstableview_note_number_of_rows_changed(zval *handle);
/*@zep NS\NSTableView reloadDataForRowIndexesColumnIndexes(int handle, int rowIndexes, int columnIndexes) -> void */
void ns_nstableview_reload_data_for_row_indexes_column_indexes(zval *handle, zval *rowIndexes, zval *columnIndexes);

/* ---- Editing / click / sort / indicator ---- */

/*@zep NS\NSTableView editedColumn(int handle) -> int */
zend_long ns_nstableview_edited_column(zval *handle);
/*@zep NS\NSTableView editedRow(int handle) -> int */
zend_long ns_nstableview_edited_row(zval *handle);
/*@zep NS\NSTableView clickedColumn(int handle) -> int */
zend_long ns_nstableview_clicked_column(zval *handle);
/*@zep NS\NSTableView clickedRow(int handle) -> int */
zend_long ns_nstableview_clicked_row(zval *handle);

/*@zep NS\NSTableView doubleAction(int handle) -> var */
void ns_nstableview_double_action(zval *return_value, zval *handle);
/*@zep NS\NSTableView setDoubleAction(int handle, var doubleAction) -> void */
void ns_nstableview_set_double_action(zval *handle, zval *doubleAction);

/*@zep NS\NSTableView sortDescriptors(int handle) -> array */
void ns_nstableview_sort_descriptors(zval *return_value, zval *handle);
/*@zep NS\NSTableView setSortDescriptors(int handle, array sortDescriptors) -> void */
void ns_nstableview_set_sort_descriptors(zval *handle, zval *sortDescriptors);

/*@zep NS\NSTableView setIndicatorImageInTableColumn(int handle, int image, int tableColumn) -> void */
void ns_nstableview_set_indicator_image_in_table_column(zval *handle, zval *image, zval *tableColumn);
/*@zep NS\NSTableView indicatorImageInTableColumn(int handle, int tableColumn) -> int */
zend_long ns_nstableview_indicator_image_in_table_column(zval *handle, zval *tableColumn);

/*@zep NS\NSTableView highlightedTableColumn(int handle) -> int */
zend_long ns_nstableview_highlighted_table_column(zval *handle);
/*@zep NS\NSTableView setHighlightedTableColumn(int handle, int tableColumn) -> void */
void ns_nstableview_set_highlighted_table_column(zval *handle, zval *tableColumn);

/* ---- Drag and drop ---- */

/*@zep NS\NSTableView verticalMotionCanBeginDrag(int handle) -> bool */
zend_long ns_nstableview_vertical_motion_can_begin_drag(zval *handle);
/*@zep NS\NSTableView setVerticalMotionCanBeginDrag(int handle, bool verticalMotionCanBeginDrag) -> void */
void ns_nstableview_set_vertical_motion_can_begin_drag(zval *handle, zval *verticalMotionCanBeginDrag);

/*@zep NS\NSTableView canDragRowsWithIndexesAtPoint(int handle, int rowIndexes, double x, double y) -> bool */
zend_long ns_nstableview_can_drag_rows_with_indexes_at_point(zval *handle, zval *rowIndexes, zval *x, zval *y);
/*@reserved NS\NSTableView - (NSImage *)dragImageForRowsWithIndexes:(NSIndexSet *)dragRows tableColumns:(NSArray<NSTableColumn *> *)tableColumns event:(NSEvent *)dragEvent offset:(NSPointPointer)dragImageOffset — NSPointPointer inout */
/*@zep NS\NSTableView setDraggingSourceOperationMaskForLocal(int handle, int mask, bool isLocal) -> void */
void ns_nstableview_set_dragging_source_operation_mask_for_local(zval *handle, zval *mask, zval *isLocal);
/*@zep NS\NSTableView setDropRowDropOperation(int handle, int row, int dropOperation) -> void */
void ns_nstableview_set_drop_row_drop_operation(zval *handle, zval *row, zval *dropOperation);

/* ---- Selection ---- */

/*@zep NS\NSTableView allowsMultipleSelection(int handle) -> bool */
zend_long ns_nstableview_allows_multiple_selection(zval *handle);
/*@zep NS\NSTableView setAllowsMultipleSelection(int handle, bool allowsMultipleSelection) -> void */
void ns_nstableview_set_allows_multiple_selection(zval *handle, zval *allowsMultipleSelection);

/*@zep NS\NSTableView allowsEmptySelection(int handle) -> bool */
zend_long ns_nstableview_allows_empty_selection(zval *handle);
/*@zep NS\NSTableView setAllowsEmptySelection(int handle, bool allowsEmptySelection) -> void */
void ns_nstableview_set_allows_empty_selection(zval *handle, zval *allowsEmptySelection);

/*@zep NS\NSTableView allowsColumnSelection(int handle) -> bool */
zend_long ns_nstableview_allows_column_selection(zval *handle);
/*@zep NS\NSTableView setAllowsColumnSelection(int handle, bool allowsColumnSelection) -> void */
void ns_nstableview_set_allows_column_selection(zval *handle, zval *allowsColumnSelection);

/*@zep NS\NSTableView selectAll(int handle, int sender) -> void */
void ns_nstableview_select_all(zval *handle, zval *sender);
/*@zep NS\NSTableView deselectAll(int handle, int sender) -> void */
void ns_nstableview_deselect_all(zval *handle, zval *sender);

/*@zep NS\NSTableView selectColumnIndexesByExtendingSelection(int handle, int indexes, bool extend) -> void */
void ns_nstableview_select_column_indexes_by_extending_selection(zval *handle, zval *indexes, zval *extend);
/*@zep NS\NSTableView selectRowIndexesByExtendingSelection(int handle, int indexes, bool extend) -> void */
void ns_nstableview_select_row_indexes_by_extending_selection(zval *handle, zval *indexes, zval *extend);

/*@zep NS\NSTableView selectedColumnIndexes(int handle) -> int */
zend_long ns_nstableview_selected_column_indexes(zval *handle);
/*@zep NS\NSTableView selectedRowIndexes(int handle) -> int */
zend_long ns_nstableview_selected_row_indexes(zval *handle);

/*@zep NS\NSTableView deselectColumn(int handle, int column) -> void */
void ns_nstableview_deselect_column(zval *handle, zval *column);
/*@zep NS\NSTableView deselectRow(int handle, int row) -> void */
void ns_nstableview_deselect_row(zval *handle, zval *row);
/*@zep NS\NSTableView selectedColumn(int handle) -> int */
zend_long ns_nstableview_selected_column(zval *handle);
/*@zep NS\NSTableView selectedRow(int handle) -> int */
zend_long ns_nstableview_selected_row(zval *handle);
/*@zep NS\NSTableView isColumnSelected(int handle, int column) -> bool */
zend_long ns_nstableview_is_column_selected(zval *handle, zval *column);
/*@zep NS\NSTableView isRowSelected(int handle, int row) -> bool */
zend_long ns_nstableview_is_row_selected(zval *handle, zval *row);
/*@zep NS\NSTableView numberOfSelectedColumns(int handle) -> int */
zend_long ns_nstableview_number_of_selected_columns(zval *handle);
/*@zep NS\NSTableView numberOfSelectedRows(int handle) -> int */
zend_long ns_nstableview_number_of_selected_rows(zval *handle);

/* ---- Style / highlight ---- */

/*@zep NS\NSTableView allowsTypeSelect(int handle) -> bool */
zend_long ns_nstableview_allows_type_select(zval *handle);
/*@zep NS\NSTableView setAllowsTypeSelect(int handle, bool allowsTypeSelect) -> void */
void ns_nstableview_set_allows_type_select(zval *handle, zval *allowsTypeSelect);

/*@zep NS\NSTableView style(int handle) -> int */
zend_long ns_nstableview_style(zval *handle);
/*@zep NS\NSTableView setStyle(int handle, int style) -> void */
void ns_nstableview_set_style(zval *handle, zval *style);

/*@zep NS\NSTableView effectiveStyle(int handle) -> int */
zend_long ns_nstableview_effective_style(zval *handle);

/*@zep NS\NSTableView selectionHighlightStyle(int handle) -> int */
zend_long ns_nstableview_selection_highlight_style(zval *handle);
/*@zep NS\NSTableView setSelectionHighlightStyle(int handle, int selectionHighlightStyle) -> void */
void ns_nstableview_set_selection_highlight_style(zval *handle, zval *selectionHighlightStyle);

/*@zep NS\NSTableView draggingDestinationFeedbackStyle(int handle) -> int */
zend_long ns_nstableview_dragging_destination_feedback_style(zval *handle);
/*@zep NS\NSTableView setDraggingDestinationFeedbackStyle(int handle, int draggingDestinationFeedbackStyle) -> void */
void ns_nstableview_set_dragging_destination_feedback_style(zval *handle, zval *draggingDestinationFeedbackStyle);

/* ---- Geometry ---- */

/*@zep NS\NSTableView rectOfColumn(int handle, int column) -> array */
void ns_nstableview_rect_of_column(zval *return_value, zval *handle, zval *column);
/*@zep NS\NSTableView rectOfRow(int handle, int row) -> array */
void ns_nstableview_rect_of_row(zval *return_value, zval *handle, zval *row);
/*@zep NS\NSTableView columnIndexesInRect(int handle, double x, double y, double width, double height) -> int */
zend_long ns_nstableview_column_indexes_in_rect(zval *handle, zval *x, zval *y, zval *width, zval *height);
/*@zep NS\NSTableView rowsInRect(int handle, double x, double y, double width, double height) -> array */
void ns_nstableview_rows_in_rect(zval *return_value, zval *handle, zval *x, zval *y, zval *width, zval *height);
/*@zep NS\NSTableView columnAtPoint(int handle, double x, double y) -> int */
zend_long ns_nstableview_column_at_point(zval *handle, zval *x, zval *y);
/*@zep NS\NSTableView rowAtPoint(int handle, double x, double y) -> int */
zend_long ns_nstableview_row_at_point(zval *handle, zval *x, zval *y);
/*@zep NS\NSTableView frameOfCellAtColumnRow(int handle, int column, int row) -> array */
void ns_nstableview_frame_of_cell_at_column_row(zval *return_value, zval *handle, zval *column, zval *row);

/* ---- Persistence ---- */

/*@zep NS\NSTableView autosaveName(int handle) -> var */
void ns_nstableview_autosave_name(zval *return_value, zval *handle);
/*@zep NS\NSTableView setAutosaveName(int handle, var autosaveName) -> void */
void ns_nstableview_set_autosave_name(zval *handle, zval *autosaveName);

/*@zep NS\NSTableView autosaveTableColumns(int handle) -> bool */
zend_long ns_nstableview_autosave_table_columns(zval *handle);
/*@zep NS\NSTableView setAutosaveTableColumns(int handle, bool autosaveTableColumns) -> void */
void ns_nstableview_set_autosave_table_columns(zval *handle, zval *autosaveTableColumns);

/* ---- Editing / drawing ---- */

/*@zep NS\NSTableView editColumnRowWithEventSelect(int handle, int column, int row, int event, bool select) -> void */
void ns_nstableview_edit_column_row_with_event_select(zval *handle, zval *column, zval *row, zval *event, zval *select);
/*@zep NS\NSTableView drawRowClipRect(int handle, int row, double x, double y, double width, double height) -> void */
void ns_nstableview_draw_row_clip_rect(zval *handle, zval *row, zval *x, zval *y, zval *width, zval *height);
/*@zep NS\NSTableView highlightSelectionInClipRect(int handle, double x, double y, double width, double height) -> void */
void ns_nstableview_highlight_selection_in_clip_rect(zval *handle, zval *x, zval *y, zval *width, zval *height);
/*@zep NS\NSTableView drawGridInClipRect(int handle, double x, double y, double width, double height) -> void */
void ns_nstableview_draw_grid_in_clip_rect(zval *handle, zval *x, zval *y, zval *width, zval *height);
/*@zep NS\NSTableView drawBackgroundInClipRect(int handle, double x, double y, double width, double height) -> void */
void ns_nstableview_draw_background_in_clip_rect(zval *handle, zval *x, zval *y, zval *width, zval *height);

/* ---- View-based table ---- */

/*@zep NS\NSTableView viewAtColumnRowMakeIfNecessary(int handle, int column, int row, bool makeIfNecessary) -> int */
zend_long ns_nstableview_view_at_column_row_make_if_necessary(zval *handle, zval *column, zval *row, zval *makeIfNecessary);
/*@zep NS\NSTableView rowViewAtRowMakeIfNecessary(int handle, int row, bool makeIfNecessary) -> int */
zend_long ns_nstableview_row_view_at_row_make_if_necessary(zval *handle, zval *row, zval *makeIfNecessary);
/*@zep NS\NSTableView rowForView(int handle, int view) -> int */
zend_long ns_nstableview_row_for_view(zval *handle, zval *view);
/*@zep NS\NSTableView columnForView(int handle, int view) -> int */
zend_long ns_nstableview_column_for_view(zval *handle, zval *view);
/*@zep NS\NSTableView makeViewWithIdentifierOwner(int handle, string identifier, int owner) -> int */
zend_long ns_nstableview_make_view_with_identifier_owner(zval *handle, zval *identifier, zval *owner);
/*@reserved NS\NSTableView - (void)enumerateAvailableRowViewsUsingBlock:(void (NS_NOESCAPE ^)(__kindof NSTableRowView *rowView, NSInteger row))handler — block */

/*@zep NS\NSTableView floatsGroupRows(int handle) -> bool */
zend_long ns_nstableview_floats_group_rows(zval *handle);
/*@zep NS\NSTableView setFloatsGroupRows(int handle, bool floatsGroupRows) -> void */
void ns_nstableview_set_floats_group_rows(zval *handle, zval *floatsGroupRows);

/*@zep NS\NSTableView rowActionsVisible(int handle) -> bool */
zend_long ns_nstableview_row_actions_visible(zval *handle);
/*@zep NS\NSTableView setRowActionsVisible(int handle, bool rowActionsVisible) -> void */
void ns_nstableview_set_row_actions_visible(zval *handle, zval *rowActionsVisible);

/* ---- Insert / remove / hide rows ---- */

/*@zep NS\NSTableView beginUpdates(int handle) -> void */
void ns_nstableview_begin_updates(zval *handle);
/*@zep NS\NSTableView endUpdates(int handle) -> void */
void ns_nstableview_end_updates(zval *handle);
/*@zep NS\NSTableView insertRowsAtIndexesWithAnimation(int handle, int indexes, int animationOptions) -> void */
void ns_nstableview_insert_rows_at_indexes_with_animation(zval *handle, zval *indexes, zval *animationOptions);
/*@zep NS\NSTableView removeRowsAtIndexesWithAnimation(int handle, int indexes, int animationOptions) -> void */
void ns_nstableview_remove_rows_at_indexes_with_animation(zval *handle, zval *indexes, zval *animationOptions);
/*@zep NS\NSTableView moveRowAtIndexToIndex(int handle, int oldIndex, int newIndex) -> void */
void ns_nstableview_move_row_at_index_to_index(zval *handle, zval *oldIndex, zval *newIndex);
/*@zep NS\NSTableView hideRowsAtIndexesWithAnimation(int handle, int indexes, int rowAnimation) -> void */
void ns_nstableview_hide_rows_at_indexes_with_animation(zval *handle, zval *indexes, zval *rowAnimation);
/*@zep NS\NSTableView unhideRowsAtIndexesWithAnimation(int handle, int indexes, int rowAnimation) -> void */
void ns_nstableview_unhide_rows_at_indexes_with_animation(zval *handle, zval *indexes, zval *rowAnimation);

/*@zep NS\NSTableView hiddenRowIndexes(int handle) -> int */
zend_long ns_nstableview_hidden_row_indexes(zval *handle);

/*@zep NS\NSTableView registerNibForIdentifier(int handle, int nib, string identifier) -> void */
void ns_nstableview_register_nib_for_identifier(zval *handle, zval *nib, zval *identifier);
/*@zep NS\NSTableView registeredNibsByIdentifier(int handle) -> int */
zend_long ns_nstableview_registered_nibs_by_identifier(zval *handle);

/*@zep NS\NSTableView didAddRowViewForRow(int handle, int rowView, int row) -> void */
void ns_nstableview_did_add_row_view_for_row(zval *handle, zval *rowView, zval *row);
/*@zep NS\NSTableView didRemoveRowViewForRow(int handle, int rowView, int row) -> void */
void ns_nstableview_did_remove_row_view_for_row(zval *handle, zval *rowView, zval *row);

/*@zep NS\NSTableView usesStaticContents(int handle) -> bool */
zend_long ns_nstableview_uses_static_contents(zval *handle);
/*@zep NS\NSTableView setUsesStaticContents(int handle, bool usesStaticContents) -> void */
void ns_nstableview_set_uses_static_contents(zval *handle, zval *usesStaticContents);

/*@zep NS\NSTableView userInterfaceLayoutDirection(int handle) -> int */
zend_long ns_nstableview_user_interface_layout_direction(zval *handle);
/*@zep NS\NSTableView setUserInterfaceLayoutDirection(int handle, int userInterfaceLayoutDirection) -> void */
void ns_nstableview_set_user_interface_layout_direction(zval *handle, zval *userInterfaceLayoutDirection);

/*@zep NS\NSTableView usesAutomaticRowHeights(int handle) -> bool */
zend_long ns_nstableview_uses_automatic_row_heights(zval *handle);
/*@zep NS\NSTableView setUsesAutomaticRowHeights(int handle, bool usesAutomaticRowHeights) -> void */
void ns_nstableview_set_uses_automatic_row_heights(zval *handle, zval *usesAutomaticRowHeights);

/* ---- NSDeprecated ---- */

/*@reserved NS\NSTableView - (void)setDrawsGrid:(BOOL)flag API_DEPRECATED */
/*@reserved NS\NSTableView - (BOOL)drawsGrid API_DEPRECATED */
/*@reserved NS\NSTableView - (void)selectColumn:(NSInteger)column byExtendingSelection:(BOOL)extend API_DEPRECATED */
/*@reserved NS\NSTableView - (void)selectRow:(NSInteger)row byExtendingSelection:(BOOL)extend API_DEPRECATED */
/*@reserved NS\NSTableView - (NSEnumerator *)selectedColumnEnumerator API_DEPRECATED */
/*@reserved NS\NSTableView - (NSEnumerator *)selectedRowEnumerator API_DEPRECATED */
/*@reserved NS\NSTableView - (nullable NSImage *)dragImageForRows:(NSArray *)dragRows event:(NSEvent *)dragEvent dragImageOffset:(NSPointPointer)dragImageOffset API_DEPRECATED */
/*@reserved NS\NSTableView - (void)setAutoresizesAllColumnsToFit:(BOOL)flag API_DEPRECATED */
/*@reserved NS\NSTableView - (BOOL)autoresizesAllColumnsToFit API_DEPRECATED */
/*@reserved NS\NSTableView - (NSRange)columnsInRect:(NSRect)rect API_DEPRECATED */
/*@reserved NS\NSTableView - (nullable NSCell *)preparedCellAtColumn:(NSInteger)column row:(NSInteger)row API_DEPRECATED */
/*@reserved NS\NSTableView - (BOOL)textShouldBeginEditing:(NSText *)textObject API_DEPRECATED */
/*@reserved NS\NSTableView - (BOOL)textShouldEndEditing:(NSText *)textObject API_DEPRECATED */
/*@reserved NS\NSTableView - (void)textDidBeginEditing:(NSNotification *)notification API_DEPRECATED */
/*@reserved NS\NSTableView - (void)textDidEndEditing:(NSNotification *)notification API_DEPRECATED */
/*@reserved NS\NSTableView - (void)textDidChange:(NSNotification *)notification API_DEPRECATED */
/*@reserved NS\NSTableView - (BOOL)shouldFocusCell:(NSCell *)cell atColumn:(NSInteger)column row:(NSInteger)row API_DEPRECATED */
/*@reserved NS\NSTableView - (NSInteger)focusedColumn API_DEPRECATED */
/*@reserved NS\NSTableView - (void)setFocusedColumn:(NSInteger)focusedColumn API_DEPRECATED */
/*@reserved NS\NSTableView - (void)performClickOnCellAtColumn:(NSInteger)column row:(NSInteger)row API_DEPRECATED */

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_TABLEVIEW_H */
