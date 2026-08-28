#include "ns-tableview.h"
#include "ns-value.h"

/* ====================================================================== */
/* Construction                                                           */
/* ====================================================================== */

zend_long ns_nstableview_init_with_frame(zval *x, zval *y, zval *width, zval *height)
{
    @autoreleasepool {
        return ns_handle_for([[NSTableView alloc] initWithFrame:ns_arg_rect(x, y, width, height)]);
    }
}

/* ====================================================================== */
/* Data source / delegate / chrome                                        */
/* ====================================================================== */

zend_long ns_nstableview_data_source(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSTableView *tv = NS_ARG_AS(NSTableView, handle);
        h = ns_handle_for(tv != nil ? [tv dataSource] : nil);
    }
    return h;
}

void ns_nstableview_set_data_source(zval *handle, zval *dataSource)
{
    @autoreleasepool {
        NSTableView *tv = NS_ARG_AS(NSTableView, handle);
        if (tv == nil) return;
        [tv setDataSource:ns_arg_object(dataSource)];
    }
}

zend_long ns_nstableview_delegate(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSTableView *tv = NS_ARG_AS(NSTableView, handle);
        h = ns_handle_for(tv != nil ? [tv delegate] : nil);
    }
    return h;
}

void ns_nstableview_set_delegate(zval *handle, zval *delegate)
{
    @autoreleasepool {
        NSTableView *tv = NS_ARG_AS(NSTableView, handle);
        if (tv == nil) return;
        [tv setDelegate:ns_arg_object(delegate)];
    }
}

zend_long ns_nstableview_header_view(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSTableView *tv = NS_ARG_AS(NSTableView, handle);
        h = ns_handle_for(tv != nil ? [tv headerView] : nil);
    }
    return h;
}

void ns_nstableview_set_header_view(zval *handle, zval *headerView)
{
    @autoreleasepool {
        NSTableView *tv = NS_ARG_AS(NSTableView, handle);
        if (tv == nil) return;
        [tv setHeaderView:NS_ARG_AS(NSTableHeaderView, headerView)];
    }
}

zend_long ns_nstableview_corner_view(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSTableView *tv = NS_ARG_AS(NSTableView, handle);
        h = ns_handle_for(tv != nil ? [tv cornerView] : nil);
    }
    return h;
}

void ns_nstableview_set_corner_view(zval *handle, zval *cornerView)
{
    @autoreleasepool {
        NSTableView *tv = NS_ARG_AS(NSTableView, handle);
        if (tv == nil) return;
        [tv setCornerView:NS_ARG_AS(NSView, cornerView)];
    }
}

/* ====================================================================== */
/* Column / grid / background configuration                               */
/* ====================================================================== */

zend_long ns_nstableview_allows_column_reordering(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSTableView *tv = NS_ARG_AS(NSTableView, handle);
        r = (tv != nil && [tv allowsColumnReordering]) ? 1 : 0;
    }
    return r;
}

void ns_nstableview_set_allows_column_reordering(zval *handle, zval *allowsColumnReordering)
{
    @autoreleasepool {
        NSTableView *tv = NS_ARG_AS(NSTableView, handle);
        if (tv == nil) return;
        [tv setAllowsColumnReordering:ns_arg_bool(allowsColumnReordering)];
    }
}

zend_long ns_nstableview_allows_column_resizing(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSTableView *tv = NS_ARG_AS(NSTableView, handle);
        r = (tv != nil && [tv allowsColumnResizing]) ? 1 : 0;
    }
    return r;
}

void ns_nstableview_set_allows_column_resizing(zval *handle, zval *allowsColumnResizing)
{
    @autoreleasepool {
        NSTableView *tv = NS_ARG_AS(NSTableView, handle);
        if (tv == nil) return;
        [tv setAllowsColumnResizing:ns_arg_bool(allowsColumnResizing)];
    }
}

zend_long ns_nstableview_column_autoresizing_style(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSTableView *tv = NS_ARG_AS(NSTableView, handle);
        r = tv != nil ? (zend_long) [tv columnAutoresizingStyle] : 0;
    }
    return r;
}

void ns_nstableview_set_column_autoresizing_style(zval *handle, zval *columnAutoresizingStyle)
{
    @autoreleasepool {
        NSTableView *tv = NS_ARG_AS(NSTableView, handle);
        if (tv == nil) return;
        [tv setColumnAutoresizingStyle:(NSTableViewColumnAutoresizingStyle) ns_arg_long(columnAutoresizingStyle)];
    }
}

zend_long ns_nstableview_grid_style_mask(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSTableView *tv = NS_ARG_AS(NSTableView, handle);
        r = tv != nil ? (zend_long) [tv gridStyleMask] : 0;
    }
    return r;
}

void ns_nstableview_set_grid_style_mask(zval *handle, zval *gridStyleMask)
{
    @autoreleasepool {
        NSTableView *tv = NS_ARG_AS(NSTableView, handle);
        if (tv == nil) return;
        [tv setGridStyleMask:(NSTableViewGridLineStyle) ns_arg_long(gridStyleMask)];
    }
}

void ns_nstableview_intercell_spacing(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSTableView *tv = NS_ARG_AS(NSTableView, handle);
        ns_ret_size(return_value, tv != nil ? [tv intercellSpacing] : NSZeroSize);
    }
}

void ns_nstableview_set_intercell_spacing(zval *handle, zval *width, zval *height)
{
    @autoreleasepool {
        NSTableView *tv = NS_ARG_AS(NSTableView, handle);
        if (tv == nil) return;
        [tv setIntercellSpacing:ns_arg_size(width, height)];
    }
}

zend_long ns_nstableview_uses_alternating_row_background_colors(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSTableView *tv = NS_ARG_AS(NSTableView, handle);
        r = (tv != nil && [tv usesAlternatingRowBackgroundColors]) ? 1 : 0;
    }
    return r;
}

void ns_nstableview_set_uses_alternating_row_background_colors(zval *handle, zval *usesAlternatingRowBackgroundColors)
{
    @autoreleasepool {
        NSTableView *tv = NS_ARG_AS(NSTableView, handle);
        if (tv == nil) return;
        [tv setUsesAlternatingRowBackgroundColors:ns_arg_bool(usesAlternatingRowBackgroundColors)];
    }
}

zend_long ns_nstableview_background_color(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSTableView *tv = NS_ARG_AS(NSTableView, handle);
        h = ns_handle_for(tv != nil ? [tv backgroundColor] : nil);
    }
    return h;
}

void ns_nstableview_set_background_color(zval *handle, zval *backgroundColor)
{
    @autoreleasepool {
        NSTableView *tv = NS_ARG_AS(NSTableView, handle);
        if (tv == nil) return;
        [tv setBackgroundColor:NS_ARG_AS(NSColor, backgroundColor)];
    }
}

zend_long ns_nstableview_grid_color(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSTableView *tv = NS_ARG_AS(NSTableView, handle);
        h = ns_handle_for(tv != nil ? [tv gridColor] : nil);
    }
    return h;
}

void ns_nstableview_set_grid_color(zval *handle, zval *gridColor)
{
    @autoreleasepool {
        NSTableView *tv = NS_ARG_AS(NSTableView, handle);
        if (tv == nil) return;
        [tv setGridColor:NS_ARG_AS(NSColor, gridColor)];
    }
}

zend_long ns_nstableview_row_size_style(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSTableView *tv = NS_ARG_AS(NSTableView, handle);
        r = tv != nil ? (zend_long) [tv rowSizeStyle] : 0;
    }
    return r;
}

void ns_nstableview_set_row_size_style(zval *handle, zval *rowSizeStyle)
{
    @autoreleasepool {
        NSTableView *tv = NS_ARG_AS(NSTableView, handle);
        if (tv == nil) return;
        [tv setRowSizeStyle:(NSTableViewRowSizeStyle) ns_arg_long(rowSizeStyle)];
    }
}

zend_long ns_nstableview_effective_row_size_style(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSTableView *tv = NS_ARG_AS(NSTableView, handle);
        r = tv != nil ? (zend_long) [tv effectiveRowSizeStyle] : 0;
    }
    return r;
}

double ns_nstableview_row_height(zval *handle)
{
    double r = 0.0;
    @autoreleasepool {
        NSTableView *tv = NS_ARG_AS(NSTableView, handle);
        r = tv != nil ? (double) [tv rowHeight] : 0.0;
    }
    return r;
}

void ns_nstableview_set_row_height(zval *handle, zval *rowHeight)
{
    @autoreleasepool {
        NSTableView *tv = NS_ARG_AS(NSTableView, handle);
        if (tv == nil) return;
        [tv setRowHeight:(CGFloat) ns_arg_double(rowHeight)];
    }
}

void ns_nstableview_note_height_of_rows_with_indexes_changed(zval *handle, zval *indexSet)
{
    @autoreleasepool {
        NSTableView *tv = NS_ARG_AS(NSTableView, handle);
        if (tv == nil) return;
        [tv noteHeightOfRowsWithIndexesChanged:NS_ARG_AS(NSIndexSet, indexSet)];
    }
}

/* ====================================================================== */
/* Columns                                                                */
/* ====================================================================== */

void ns_nstableview_table_columns(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSTableView *tv = NS_ARG_AS(NSTableView, handle);
        ns_ret_object_array(return_value, tv != nil ? [tv tableColumns] : nil);
    }
}

zend_long ns_nstableview_number_of_columns(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSTableView *tv = NS_ARG_AS(NSTableView, handle);
        r = tv != nil ? (zend_long) [tv numberOfColumns] : 0;
    }
    return r;
}

zend_long ns_nstableview_number_of_rows(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSTableView *tv = NS_ARG_AS(NSTableView, handle);
        r = tv != nil ? (zend_long) [tv numberOfRows] : 0;
    }
    return r;
}

void ns_nstableview_add_table_column(zval *handle, zval *tableColumn)
{
    @autoreleasepool {
        NSTableView *tv = NS_ARG_AS(NSTableView, handle);
        if (tv == nil) return;
        [tv addTableColumn:NS_ARG_AS(NSTableColumn, tableColumn)];
    }
}

void ns_nstableview_remove_table_column(zval *handle, zval *tableColumn)
{
    @autoreleasepool {
        NSTableView *tv = NS_ARG_AS(NSTableView, handle);
        if (tv == nil) return;
        [tv removeTableColumn:NS_ARG_AS(NSTableColumn, tableColumn)];
    }
}

void ns_nstableview_move_column_to_column(zval *handle, zval *oldIndex, zval *newIndex)
{
    @autoreleasepool {
        NSTableView *tv = NS_ARG_AS(NSTableView, handle);
        if (tv == nil) return;
        [tv moveColumn:(NSInteger) ns_arg_long(oldIndex) toColumn:(NSInteger) ns_arg_long(newIndex)];
    }
}

zend_long ns_nstableview_column_with_identifier(zval *handle, zval *identifier)
{
    zend_long r = -1;
    @autoreleasepool {
        NSTableView *tv = NS_ARG_AS(NSTableView, handle);
        r = tv != nil ? (zend_long) [tv columnWithIdentifier:ns_arg_string(identifier)] : -1;
    }
    return r;
}

zend_long ns_nstableview_table_column_with_identifier(zval *handle, zval *identifier)
{
    zend_long h = 0;
    @autoreleasepool {
        NSTableView *tv = NS_ARG_AS(NSTableView, handle);
        h = ns_handle_for(tv != nil ? [tv tableColumnWithIdentifier:ns_arg_string(identifier)] : nil);
    }
    return h;
}

/* ====================================================================== */
/* Layout / reload                                                        */
/* ====================================================================== */

void ns_nstableview_tile(zval *handle)
{
    @autoreleasepool {
        NSTableView *tv = NS_ARG_AS(NSTableView, handle);
        if (tv == nil) return;
        [tv tile];
    }
}

void ns_nstableview_size_to_fit(zval *handle)
{
    @autoreleasepool {
        NSTableView *tv = NS_ARG_AS(NSTableView, handle);
        if (tv == nil) return;
        [tv sizeToFit];
    }
}

void ns_nstableview_size_last_column_to_fit(zval *handle)
{
    @autoreleasepool {
        NSTableView *tv = NS_ARG_AS(NSTableView, handle);
        if (tv == nil) return;
        [tv sizeLastColumnToFit];
    }
}

void ns_nstableview_scroll_row_to_visible(zval *handle, zval *row)
{
    @autoreleasepool {
        NSTableView *tv = NS_ARG_AS(NSTableView, handle);
        if (tv == nil) return;
        [tv scrollRowToVisible:(NSInteger) ns_arg_long(row)];
    }
}

void ns_nstableview_scroll_column_to_visible(zval *handle, zval *column)
{
    @autoreleasepool {
        NSTableView *tv = NS_ARG_AS(NSTableView, handle);
        if (tv == nil) return;
        [tv scrollColumnToVisible:(NSInteger) ns_arg_long(column)];
    }
}

void ns_nstableview_reload_data(zval *handle)
{
    @autoreleasepool {
        NSTableView *tv = NS_ARG_AS(NSTableView, handle);
        if (tv == nil) return;
        [tv reloadData];
    }
}

void ns_nstableview_note_number_of_rows_changed(zval *handle)
{
    @autoreleasepool {
        NSTableView *tv = NS_ARG_AS(NSTableView, handle);
        if (tv == nil) return;
        [tv noteNumberOfRowsChanged];
    }
}

void ns_nstableview_reload_data_for_row_indexes_column_indexes(zval *handle, zval *rowIndexes, zval *columnIndexes)
{
    @autoreleasepool {
        NSTableView *tv = NS_ARG_AS(NSTableView, handle);
        if (tv == nil) return;
        [tv reloadDataForRowIndexes:NS_ARG_AS(NSIndexSet, rowIndexes) columnIndexes:NS_ARG_AS(NSIndexSet, columnIndexes)];
    }
}

/* ====================================================================== */
/* Editing / click / sort / indicator                                     */
/* ====================================================================== */

zend_long ns_nstableview_edited_column(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSTableView *tv = NS_ARG_AS(NSTableView, handle);
        r = tv != nil ? (zend_long) [tv editedColumn] : 0;
    }
    return r;
}

zend_long ns_nstableview_edited_row(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSTableView *tv = NS_ARG_AS(NSTableView, handle);
        r = tv != nil ? (zend_long) [tv editedRow] : 0;
    }
    return r;
}

zend_long ns_nstableview_clicked_column(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSTableView *tv = NS_ARG_AS(NSTableView, handle);
        r = tv != nil ? (zend_long) [tv clickedColumn] : 0;
    }
    return r;
}

zend_long ns_nstableview_clicked_row(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSTableView *tv = NS_ARG_AS(NSTableView, handle);
        r = tv != nil ? (zend_long) [tv clickedRow] : 0;
    }
    return r;
}

void ns_nstableview_double_action(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSTableView *tv = NS_ARG_AS(NSTableView, handle);
        ns_ret_sel(return_value, tv != nil ? [tv doubleAction] : NULL);
    }
}

void ns_nstableview_set_double_action(zval *handle, zval *doubleAction)
{
    @autoreleasepool {
        NSTableView *tv = NS_ARG_AS(NSTableView, handle);
        if (tv == nil) return;
        [tv setDoubleAction:ns_arg_sel(doubleAction)];
    }
}

void ns_nstableview_sort_descriptors(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSTableView *tv = NS_ARG_AS(NSTableView, handle);
        ns_ret_object_array(return_value, tv != nil ? [tv sortDescriptors] : nil);
    }
}

void ns_nstableview_set_sort_descriptors(zval *handle, zval *sortDescriptors)
{
    @autoreleasepool {
        NSTableView *tv = NS_ARG_AS(NSTableView, handle);
        if (tv == nil) return;
        [tv setSortDescriptors:ns_arg_object_array(sortDescriptors)];
    }
}

void ns_nstableview_set_indicator_image_in_table_column(zval *handle, zval *image, zval *tableColumn)
{
    @autoreleasepool {
        NSTableView *tv = NS_ARG_AS(NSTableView, handle);
        if (tv == nil) return;
        [tv setIndicatorImage:NS_ARG_AS(NSImage, image) inTableColumn:NS_ARG_AS(NSTableColumn, tableColumn)];
    }
}

zend_long ns_nstableview_indicator_image_in_table_column(zval *handle, zval *tableColumn)
{
    zend_long h = 0;
    @autoreleasepool {
        NSTableView *tv = NS_ARG_AS(NSTableView, handle);
        h = ns_handle_for(tv != nil ? [tv indicatorImageInTableColumn:NS_ARG_AS(NSTableColumn, tableColumn)] : nil);
    }
    return h;
}

zend_long ns_nstableview_highlighted_table_column(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSTableView *tv = NS_ARG_AS(NSTableView, handle);
        h = ns_handle_for(tv != nil ? [tv highlightedTableColumn] : nil);
    }
    return h;
}

void ns_nstableview_set_highlighted_table_column(zval *handle, zval *tableColumn)
{
    @autoreleasepool {
        NSTableView *tv = NS_ARG_AS(NSTableView, handle);
        if (tv == nil) return;
        [tv setHighlightedTableColumn:NS_ARG_AS(NSTableColumn, tableColumn)];
    }
}

/* ====================================================================== */
/* Drag and drop                                                          */
/* ====================================================================== */

zend_long ns_nstableview_vertical_motion_can_begin_drag(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSTableView *tv = NS_ARG_AS(NSTableView, handle);
        r = (tv != nil && [tv verticalMotionCanBeginDrag]) ? 1 : 0;
    }
    return r;
}

void ns_nstableview_set_vertical_motion_can_begin_drag(zval *handle, zval *verticalMotionCanBeginDrag)
{
    @autoreleasepool {
        NSTableView *tv = NS_ARG_AS(NSTableView, handle);
        if (tv == nil) return;
        [tv setVerticalMotionCanBeginDrag:ns_arg_bool(verticalMotionCanBeginDrag)];
    }
}

zend_long ns_nstableview_can_drag_rows_with_indexes_at_point(zval *handle, zval *rowIndexes, zval *x, zval *y)
{
    zend_long r = 0;
    @autoreleasepool {
        NSTableView *tv = NS_ARG_AS(NSTableView, handle);
        r = (tv != nil && [tv canDragRowsWithIndexes:NS_ARG_AS(NSIndexSet, rowIndexes) atPoint:ns_arg_point(x, y)]) ? 1 : 0;
    }
    return r;
}

void ns_nstableview_set_dragging_source_operation_mask_for_local(zval *handle, zval *mask, zval *isLocal)
{
    @autoreleasepool {
        NSTableView *tv = NS_ARG_AS(NSTableView, handle);
        if (tv == nil) return;
        [tv setDraggingSourceOperationMask:(NSDragOperation) ns_arg_long(mask) forLocal:ns_arg_bool(isLocal)];
    }
}

void ns_nstableview_set_drop_row_drop_operation(zval *handle, zval *row, zval *dropOperation)
{
    @autoreleasepool {
        NSTableView *tv = NS_ARG_AS(NSTableView, handle);
        if (tv == nil) return;
        [tv setDropRow:(NSInteger) ns_arg_long(row) dropOperation:(NSTableViewDropOperation) ns_arg_long(dropOperation)];
    }
}

/* ====================================================================== */
/* Selection                                                              */
/* ====================================================================== */

zend_long ns_nstableview_allows_multiple_selection(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSTableView *tv = NS_ARG_AS(NSTableView, handle);
        r = (tv != nil && [tv allowsMultipleSelection]) ? 1 : 0;
    }
    return r;
}

void ns_nstableview_set_allows_multiple_selection(zval *handle, zval *allowsMultipleSelection)
{
    @autoreleasepool {
        NSTableView *tv = NS_ARG_AS(NSTableView, handle);
        if (tv == nil) return;
        [tv setAllowsMultipleSelection:ns_arg_bool(allowsMultipleSelection)];
    }
}

zend_long ns_nstableview_allows_empty_selection(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSTableView *tv = NS_ARG_AS(NSTableView, handle);
        r = (tv != nil && [tv allowsEmptySelection]) ? 1 : 0;
    }
    return r;
}

void ns_nstableview_set_allows_empty_selection(zval *handle, zval *allowsEmptySelection)
{
    @autoreleasepool {
        NSTableView *tv = NS_ARG_AS(NSTableView, handle);
        if (tv == nil) return;
        [tv setAllowsEmptySelection:ns_arg_bool(allowsEmptySelection)];
    }
}

zend_long ns_nstableview_allows_column_selection(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSTableView *tv = NS_ARG_AS(NSTableView, handle);
        r = (tv != nil && [tv allowsColumnSelection]) ? 1 : 0;
    }
    return r;
}

void ns_nstableview_set_allows_column_selection(zval *handle, zval *allowsColumnSelection)
{
    @autoreleasepool {
        NSTableView *tv = NS_ARG_AS(NSTableView, handle);
        if (tv == nil) return;
        [tv setAllowsColumnSelection:ns_arg_bool(allowsColumnSelection)];
    }
}

void ns_nstableview_select_all(zval *handle, zval *sender)
{
    @autoreleasepool {
        NSTableView *tv = NS_ARG_AS(NSTableView, handle);
        if (tv == nil) return;
        [tv selectAll:ns_arg_object(sender)];
    }
}

void ns_nstableview_deselect_all(zval *handle, zval *sender)
{
    @autoreleasepool {
        NSTableView *tv = NS_ARG_AS(NSTableView, handle);
        if (tv == nil) return;
        [tv deselectAll:ns_arg_object(sender)];
    }
}

void ns_nstableview_select_column_indexes_by_extending_selection(zval *handle, zval *indexes, zval *extend)
{
    @autoreleasepool {
        NSTableView *tv = NS_ARG_AS(NSTableView, handle);
        if (tv == nil) return;
        [tv selectColumnIndexes:NS_ARG_AS(NSIndexSet, indexes) byExtendingSelection:ns_arg_bool(extend)];
    }
}

void ns_nstableview_select_row_indexes_by_extending_selection(zval *handle, zval *indexes, zval *extend)
{
    @autoreleasepool {
        NSTableView *tv = NS_ARG_AS(NSTableView, handle);
        if (tv == nil) return;
        [tv selectRowIndexes:NS_ARG_AS(NSIndexSet, indexes) byExtendingSelection:ns_arg_bool(extend)];
    }
}

zend_long ns_nstableview_selected_column_indexes(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSTableView *tv = NS_ARG_AS(NSTableView, handle);
        h = ns_handle_for(tv != nil ? [tv selectedColumnIndexes] : nil);
    }
    return h;
}

zend_long ns_nstableview_selected_row_indexes(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSTableView *tv = NS_ARG_AS(NSTableView, handle);
        h = ns_handle_for(tv != nil ? [tv selectedRowIndexes] : nil);
    }
    return h;
}

void ns_nstableview_deselect_column(zval *handle, zval *column)
{
    @autoreleasepool {
        NSTableView *tv = NS_ARG_AS(NSTableView, handle);
        if (tv == nil) return;
        [tv deselectColumn:(NSInteger) ns_arg_long(column)];
    }
}

void ns_nstableview_deselect_row(zval *handle, zval *row)
{
    @autoreleasepool {
        NSTableView *tv = NS_ARG_AS(NSTableView, handle);
        if (tv == nil) return;
        [tv deselectRow:(NSInteger) ns_arg_long(row)];
    }
}

zend_long ns_nstableview_selected_column(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSTableView *tv = NS_ARG_AS(NSTableView, handle);
        r = tv != nil ? (zend_long) [tv selectedColumn] : 0;
    }
    return r;
}

zend_long ns_nstableview_selected_row(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSTableView *tv = NS_ARG_AS(NSTableView, handle);
        r = tv != nil ? (zend_long) [tv selectedRow] : 0;
    }
    return r;
}

zend_long ns_nstableview_is_column_selected(zval *handle, zval *column)
{
    zend_long r = 0;
    @autoreleasepool {
        NSTableView *tv = NS_ARG_AS(NSTableView, handle);
        r = (tv != nil && [tv isColumnSelected:(NSInteger) ns_arg_long(column)]) ? 1 : 0;
    }
    return r;
}

zend_long ns_nstableview_is_row_selected(zval *handle, zval *row)
{
    zend_long r = 0;
    @autoreleasepool {
        NSTableView *tv = NS_ARG_AS(NSTableView, handle);
        r = (tv != nil && [tv isRowSelected:(NSInteger) ns_arg_long(row)]) ? 1 : 0;
    }
    return r;
}

zend_long ns_nstableview_number_of_selected_columns(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSTableView *tv = NS_ARG_AS(NSTableView, handle);
        r = tv != nil ? (zend_long) [tv numberOfSelectedColumns] : 0;
    }
    return r;
}

zend_long ns_nstableview_number_of_selected_rows(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSTableView *tv = NS_ARG_AS(NSTableView, handle);
        r = tv != nil ? (zend_long) [tv numberOfSelectedRows] : 0;
    }
    return r;
}

/* ====================================================================== */
/* Style / highlight                                                      */
/* ====================================================================== */

zend_long ns_nstableview_allows_type_select(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSTableView *tv = NS_ARG_AS(NSTableView, handle);
        r = (tv != nil && [tv allowsTypeSelect]) ? 1 : 0;
    }
    return r;
}

void ns_nstableview_set_allows_type_select(zval *handle, zval *allowsTypeSelect)
{
    @autoreleasepool {
        NSTableView *tv = NS_ARG_AS(NSTableView, handle);
        if (tv == nil) return;
        [tv setAllowsTypeSelect:ns_arg_bool(allowsTypeSelect)];
    }
}

zend_long ns_nstableview_style(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSTableView *tv = NS_ARG_AS(NSTableView, handle);
        r = tv != nil ? (zend_long) [tv style] : 0;
    }
    return r;
}

void ns_nstableview_set_style(zval *handle, zval *style)
{
    @autoreleasepool {
        NSTableView *tv = NS_ARG_AS(NSTableView, handle);
        if (tv == nil) return;
        [tv setStyle:(NSTableViewStyle) ns_arg_long(style)];
    }
}

zend_long ns_nstableview_effective_style(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSTableView *tv = NS_ARG_AS(NSTableView, handle);
        r = tv != nil ? (zend_long) [tv effectiveStyle] : 0;
    }
    return r;
}

zend_long ns_nstableview_selection_highlight_style(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSTableView *tv = NS_ARG_AS(NSTableView, handle);
        r = tv != nil ? (zend_long) [tv selectionHighlightStyle] : 0;
    }
    return r;
}

void ns_nstableview_set_selection_highlight_style(zval *handle, zval *selectionHighlightStyle)
{
    @autoreleasepool {
        NSTableView *tv = NS_ARG_AS(NSTableView, handle);
        if (tv == nil) return;
        [tv setSelectionHighlightStyle:(NSTableViewSelectionHighlightStyle) ns_arg_long(selectionHighlightStyle)];
    }
}

zend_long ns_nstableview_dragging_destination_feedback_style(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSTableView *tv = NS_ARG_AS(NSTableView, handle);
        r = tv != nil ? (zend_long) [tv draggingDestinationFeedbackStyle] : 0;
    }
    return r;
}

void ns_nstableview_set_dragging_destination_feedback_style(zval *handle, zval *draggingDestinationFeedbackStyle)
{
    @autoreleasepool {
        NSTableView *tv = NS_ARG_AS(NSTableView, handle);
        if (tv == nil) return;
        [tv setDraggingDestinationFeedbackStyle:(NSTableViewDraggingDestinationFeedbackStyle) ns_arg_long(draggingDestinationFeedbackStyle)];
    }
}

/* ====================================================================== */
/* Geometry                                                               */
/* ====================================================================== */

void ns_nstableview_rect_of_column(zval *return_value, zval *handle, zval *column)
{
    @autoreleasepool {
        NSTableView *tv = NS_ARG_AS(NSTableView, handle);
        ns_ret_rect(return_value, tv != nil ? [tv rectOfColumn:(NSInteger) ns_arg_long(column)] : NSZeroRect);
    }
}

void ns_nstableview_rect_of_row(zval *return_value, zval *handle, zval *row)
{
    @autoreleasepool {
        NSTableView *tv = NS_ARG_AS(NSTableView, handle);
        ns_ret_rect(return_value, tv != nil ? [tv rectOfRow:(NSInteger) ns_arg_long(row)] : NSZeroRect);
    }
}

zend_long ns_nstableview_column_indexes_in_rect(zval *handle, zval *x, zval *y, zval *width, zval *height)
{
    zend_long h = 0;
    @autoreleasepool {
        NSTableView *tv = NS_ARG_AS(NSTableView, handle);
        h = ns_handle_for(tv != nil ? [tv columnIndexesInRect:ns_arg_rect(x, y, width, height)] : nil);
    }
    return h;
}

void ns_nstableview_rows_in_rect(zval *return_value, zval *handle, zval *x, zval *y, zval *width, zval *height)
{
    @autoreleasepool {
        NSTableView *tv = NS_ARG_AS(NSTableView, handle);
        ns_ret_range(return_value, tv != nil ? [tv rowsInRect:ns_arg_rect(x, y, width, height)] : NSMakeRange(0, 0));
    }
}

zend_long ns_nstableview_column_at_point(zval *handle, zval *x, zval *y)
{
    zend_long r = -1;
    @autoreleasepool {
        NSTableView *tv = NS_ARG_AS(NSTableView, handle);
        r = tv != nil ? (zend_long) [tv columnAtPoint:ns_arg_point(x, y)] : -1;
    }
    return r;
}

zend_long ns_nstableview_row_at_point(zval *handle, zval *x, zval *y)
{
    zend_long r = -1;
    @autoreleasepool {
        NSTableView *tv = NS_ARG_AS(NSTableView, handle);
        r = tv != nil ? (zend_long) [tv rowAtPoint:ns_arg_point(x, y)] : -1;
    }
    return r;
}

void ns_nstableview_frame_of_cell_at_column_row(zval *return_value, zval *handle, zval *column, zval *row)
{
    @autoreleasepool {
        NSTableView *tv = NS_ARG_AS(NSTableView, handle);
        ns_ret_rect(return_value, tv != nil ? [tv frameOfCellAtColumn:(NSInteger) ns_arg_long(column) row:(NSInteger) ns_arg_long(row)] : NSZeroRect);
    }
}

/* ====================================================================== */
/* Persistence                                                            */
/* ====================================================================== */

void ns_nstableview_autosave_name(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSTableView *tv = NS_ARG_AS(NSTableView, handle);
        ns_ret_string(return_value, tv != nil ? [tv autosaveName] : nil);
    }
}

void ns_nstableview_set_autosave_name(zval *handle, zval *autosaveName)
{
    @autoreleasepool {
        NSTableView *tv = NS_ARG_AS(NSTableView, handle);
        if (tv == nil) return;
        [tv setAutosaveName:ns_arg_string(autosaveName)];
    }
}

zend_long ns_nstableview_autosave_table_columns(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSTableView *tv = NS_ARG_AS(NSTableView, handle);
        r = (tv != nil && [tv autosaveTableColumns]) ? 1 : 0;
    }
    return r;
}

void ns_nstableview_set_autosave_table_columns(zval *handle, zval *autosaveTableColumns)
{
    @autoreleasepool {
        NSTableView *tv = NS_ARG_AS(NSTableView, handle);
        if (tv == nil) return;
        [tv setAutosaveTableColumns:ns_arg_bool(autosaveTableColumns)];
    }
}

/* ====================================================================== */
/* Editing / drawing                                                      */
/* ====================================================================== */

void ns_nstableview_edit_column_row_with_event_select(zval *handle, zval *column, zval *row, zval *event, zval *select)
{
    @autoreleasepool {
        NSTableView *tv = NS_ARG_AS(NSTableView, handle);
        if (tv == nil) return;
        [tv editColumn:(NSInteger) ns_arg_long(column) row:(NSInteger) ns_arg_long(row) withEvent:NS_ARG_AS(NSEvent, event) select:ns_arg_bool(select)];
    }
}

void ns_nstableview_draw_row_clip_rect(zval *handle, zval *row, zval *x, zval *y, zval *width, zval *height)
{
    @autoreleasepool {
        NSTableView *tv = NS_ARG_AS(NSTableView, handle);
        if (tv == nil) return;
        [tv drawRow:(NSInteger) ns_arg_long(row) clipRect:ns_arg_rect(x, y, width, height)];
    }
}

void ns_nstableview_highlight_selection_in_clip_rect(zval *handle, zval *x, zval *y, zval *width, zval *height)
{
    @autoreleasepool {
        NSTableView *tv = NS_ARG_AS(NSTableView, handle);
        if (tv == nil) return;
        [tv highlightSelectionInClipRect:ns_arg_rect(x, y, width, height)];
    }
}

void ns_nstableview_draw_grid_in_clip_rect(zval *handle, zval *x, zval *y, zval *width, zval *height)
{
    @autoreleasepool {
        NSTableView *tv = NS_ARG_AS(NSTableView, handle);
        if (tv == nil) return;
        [tv drawGridInClipRect:ns_arg_rect(x, y, width, height)];
    }
}

void ns_nstableview_draw_background_in_clip_rect(zval *handle, zval *x, zval *y, zval *width, zval *height)
{
    @autoreleasepool {
        NSTableView *tv = NS_ARG_AS(NSTableView, handle);
        if (tv == nil) return;
        [tv drawBackgroundInClipRect:ns_arg_rect(x, y, width, height)];
    }
}

/* ====================================================================== */
/* View-based table                                                       */
/* ====================================================================== */

zend_long ns_nstableview_view_at_column_row_make_if_necessary(zval *handle, zval *column, zval *row, zval *makeIfNecessary)
{
    zend_long h = 0;
    @autoreleasepool {
        NSTableView *tv = NS_ARG_AS(NSTableView, handle);
        h = ns_handle_for(tv != nil ? [tv viewAtColumn:(NSInteger) ns_arg_long(column) row:(NSInteger) ns_arg_long(row) makeIfNecessary:ns_arg_bool(makeIfNecessary)] : nil);
    }
    return h;
}

zend_long ns_nstableview_row_view_at_row_make_if_necessary(zval *handle, zval *row, zval *makeIfNecessary)
{
    zend_long h = 0;
    @autoreleasepool {
        NSTableView *tv = NS_ARG_AS(NSTableView, handle);
        h = ns_handle_for(tv != nil ? [tv rowViewAtRow:(NSInteger) ns_arg_long(row) makeIfNecessary:ns_arg_bool(makeIfNecessary)] : nil);
    }
    return h;
}

zend_long ns_nstableview_row_for_view(zval *handle, zval *view)
{
    zend_long r = -1;
    @autoreleasepool {
        NSTableView *tv = NS_ARG_AS(NSTableView, handle);
        r = tv != nil ? (zend_long) [tv rowForView:NS_ARG_AS(NSView, view)] : -1;
    }
    return r;
}

zend_long ns_nstableview_column_for_view(zval *handle, zval *view)
{
    zend_long r = -1;
    @autoreleasepool {
        NSTableView *tv = NS_ARG_AS(NSTableView, handle);
        r = tv != nil ? (zend_long) [tv columnForView:NS_ARG_AS(NSView, view)] : -1;
    }
    return r;
}

zend_long ns_nstableview_make_view_with_identifier_owner(zval *handle, zval *identifier, zval *owner)
{
    zend_long h = 0;
    @autoreleasepool {
        NSTableView *tv = NS_ARG_AS(NSTableView, handle);
        h = ns_handle_for(tv != nil ? [tv makeViewWithIdentifier:ns_arg_string(identifier) owner:ns_arg_object(owner)] : nil);
    }
    return h;
}

zend_long ns_nstableview_floats_group_rows(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSTableView *tv = NS_ARG_AS(NSTableView, handle);
        r = (tv != nil && [tv floatsGroupRows]) ? 1 : 0;
    }
    return r;
}

void ns_nstableview_set_floats_group_rows(zval *handle, zval *floatsGroupRows)
{
    @autoreleasepool {
        NSTableView *tv = NS_ARG_AS(NSTableView, handle);
        if (tv == nil) return;
        [tv setFloatsGroupRows:ns_arg_bool(floatsGroupRows)];
    }
}

zend_long ns_nstableview_row_actions_visible(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSTableView *tv = NS_ARG_AS(NSTableView, handle);
        r = (tv != nil && [tv rowActionsVisible]) ? 1 : 0;
    }
    return r;
}

void ns_nstableview_set_row_actions_visible(zval *handle, zval *rowActionsVisible)
{
    @autoreleasepool {
        NSTableView *tv = NS_ARG_AS(NSTableView, handle);
        if (tv == nil) return;
        [tv setRowActionsVisible:ns_arg_bool(rowActionsVisible)];
    }
}

/* ====================================================================== */
/* Insert / remove / hide rows                                            */
/* ====================================================================== */

void ns_nstableview_begin_updates(zval *handle)
{
    @autoreleasepool {
        NSTableView *tv = NS_ARG_AS(NSTableView, handle);
        if (tv == nil) return;
        [tv beginUpdates];
    }
}

void ns_nstableview_end_updates(zval *handle)
{
    @autoreleasepool {
        NSTableView *tv = NS_ARG_AS(NSTableView, handle);
        if (tv == nil) return;
        [tv endUpdates];
    }
}

void ns_nstableview_insert_rows_at_indexes_with_animation(zval *handle, zval *indexes, zval *animationOptions)
{
    @autoreleasepool {
        NSTableView *tv = NS_ARG_AS(NSTableView, handle);
        if (tv == nil) return;
        [tv insertRowsAtIndexes:NS_ARG_AS(NSIndexSet, indexes) withAnimation:(NSTableViewAnimationOptions) ns_arg_long(animationOptions)];
    }
}

void ns_nstableview_remove_rows_at_indexes_with_animation(zval *handle, zval *indexes, zval *animationOptions)
{
    @autoreleasepool {
        NSTableView *tv = NS_ARG_AS(NSTableView, handle);
        if (tv == nil) return;
        [tv removeRowsAtIndexes:NS_ARG_AS(NSIndexSet, indexes) withAnimation:(NSTableViewAnimationOptions) ns_arg_long(animationOptions)];
    }
}

void ns_nstableview_move_row_at_index_to_index(zval *handle, zval *oldIndex, zval *newIndex)
{
    @autoreleasepool {
        NSTableView *tv = NS_ARG_AS(NSTableView, handle);
        if (tv == nil) return;
        [tv moveRowAtIndex:(NSInteger) ns_arg_long(oldIndex) toIndex:(NSInteger) ns_arg_long(newIndex)];
    }
}

void ns_nstableview_hide_rows_at_indexes_with_animation(zval *handle, zval *indexes, zval *rowAnimation)
{
    @autoreleasepool {
        NSTableView *tv = NS_ARG_AS(NSTableView, handle);
        if (tv == nil) return;
        [tv hideRowsAtIndexes:NS_ARG_AS(NSIndexSet, indexes) withAnimation:(NSTableViewAnimationOptions) ns_arg_long(rowAnimation)];
    }
}

void ns_nstableview_unhide_rows_at_indexes_with_animation(zval *handle, zval *indexes, zval *rowAnimation)
{
    @autoreleasepool {
        NSTableView *tv = NS_ARG_AS(NSTableView, handle);
        if (tv == nil) return;
        [tv unhideRowsAtIndexes:NS_ARG_AS(NSIndexSet, indexes) withAnimation:(NSTableViewAnimationOptions) ns_arg_long(rowAnimation)];
    }
}

zend_long ns_nstableview_hidden_row_indexes(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSTableView *tv = NS_ARG_AS(NSTableView, handle);
        h = ns_handle_for(tv != nil ? [tv hiddenRowIndexes] : nil);
    }
    return h;
}

void ns_nstableview_register_nib_for_identifier(zval *handle, zval *nib, zval *identifier)
{
    @autoreleasepool {
        NSTableView *tv = NS_ARG_AS(NSTableView, handle);
        if (tv == nil) return;
        [tv registerNib:NS_ARG_AS(NSNib, nib) forIdentifier:ns_arg_string(identifier)];
    }
}

zend_long ns_nstableview_registered_nibs_by_identifier(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSTableView *tv = NS_ARG_AS(NSTableView, handle);
        h = ns_handle_for(tv != nil ? [tv registeredNibsByIdentifier] : nil);
    }
    return h;
}

void ns_nstableview_did_add_row_view_for_row(zval *handle, zval *rowView, zval *row)
{
    @autoreleasepool {
        NSTableView *tv = NS_ARG_AS(NSTableView, handle);
        if (tv == nil) return;
        [tv didAddRowView:NS_ARG_AS(NSTableRowView, rowView) forRow:(NSInteger) ns_arg_long(row)];
    }
}

void ns_nstableview_did_remove_row_view_for_row(zval *handle, zval *rowView, zval *row)
{
    @autoreleasepool {
        NSTableView *tv = NS_ARG_AS(NSTableView, handle);
        if (tv == nil) return;
        [tv didRemoveRowView:NS_ARG_AS(NSTableRowView, rowView) forRow:(NSInteger) ns_arg_long(row)];
    }
}

zend_long ns_nstableview_uses_static_contents(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSTableView *tv = NS_ARG_AS(NSTableView, handle);
        r = (tv != nil && [tv usesStaticContents]) ? 1 : 0;
    }
    return r;
}

void ns_nstableview_set_uses_static_contents(zval *handle, zval *usesStaticContents)
{
    @autoreleasepool {
        NSTableView *tv = NS_ARG_AS(NSTableView, handle);
        if (tv == nil) return;
        [tv setUsesStaticContents:ns_arg_bool(usesStaticContents)];
    }
}

zend_long ns_nstableview_user_interface_layout_direction(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSTableView *tv = NS_ARG_AS(NSTableView, handle);
        r = tv != nil ? (zend_long) [tv userInterfaceLayoutDirection] : 0;
    }
    return r;
}

void ns_nstableview_set_user_interface_layout_direction(zval *handle, zval *userInterfaceLayoutDirection)
{
    @autoreleasepool {
        NSTableView *tv = NS_ARG_AS(NSTableView, handle);
        if (tv == nil) return;
        [tv setUserInterfaceLayoutDirection:(NSUserInterfaceLayoutDirection) ns_arg_long(userInterfaceLayoutDirection)];
    }
}

zend_long ns_nstableview_uses_automatic_row_heights(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSTableView *tv = NS_ARG_AS(NSTableView, handle);
        r = (tv != nil && [tv usesAutomaticRowHeights]) ? 1 : 0;
    }
    return r;
}

void ns_nstableview_set_uses_automatic_row_heights(zval *handle, zval *usesAutomaticRowHeights)
{
    @autoreleasepool {
        NSTableView *tv = NS_ARG_AS(NSTableView, handle);
        if (tv == nil) return;
        [tv setUsesAutomaticRowHeights:ns_arg_bool(usesAutomaticRowHeights)];
    }
}
