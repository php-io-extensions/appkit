#include "ns-gridview.h"
#include "ns-value.h"

/* ====================================================================== */
/* NSGridView                                                             */
/* ====================================================================== */

zend_long ns_nsgridview_init_with_frame(zval *x, zval *y, zval *width, zval *height)
{
    @autoreleasepool {
        return ns_handle_for([[NSGridView alloc] initWithFrame:ns_arg_rect(x, y, width, height)]);
    }
}

zend_long ns_nsgridview_grid_view_with_number_of_columns_rows(zval *columnCount, zval *rowCount)
{
    zend_long h = 0;
    @autoreleasepool {
        h = ns_handle_for([NSGridView gridViewWithNumberOfColumns:(NSInteger) ns_arg_long(columnCount)
                                                            rows:(NSInteger) ns_arg_long(rowCount)]);
    }
    return h;
}

zend_long ns_nsgridview_grid_view_with_views(zval *rows)
{
    zend_long h = 0;
    @autoreleasepool {
        h = ns_handle_for([NSGridView gridViewWithViews:ns_arg_object_array_array(rows)]);
    }
    return h;
}

zend_long ns_nsgridview_number_of_rows(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSGridView *v = NS_ARG_AS(NSGridView, handle);
        r = v != nil ? (zend_long) [v numberOfRows] : 0;
    }
    return r;
}

zend_long ns_nsgridview_number_of_columns(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSGridView *v = NS_ARG_AS(NSGridView, handle);
        r = v != nil ? (zend_long) [v numberOfColumns] : 0;
    }
    return r;
}

zend_long ns_nsgridview_row_at_index(zval *handle, zval *index)
{
    zend_long h = 0;
    @autoreleasepool {
        NSGridView *v = NS_ARG_AS(NSGridView, handle);
        h = ns_handle_for(v != nil ? [v rowAtIndex:(NSInteger) ns_arg_long(index)] : nil);
    }
    return h;
}

zend_long ns_nsgridview_index_of_row(zval *handle, zval *row)
{
    zend_long r = 0;
    @autoreleasepool {
        NSGridView *v = NS_ARG_AS(NSGridView, handle);
        r = v != nil ? (zend_long) [v indexOfRow:NS_ARG_AS(NSGridRow, row)] : 0;
    }
    return r;
}

zend_long ns_nsgridview_column_at_index(zval *handle, zval *index)
{
    zend_long h = 0;
    @autoreleasepool {
        NSGridView *v = NS_ARG_AS(NSGridView, handle);
        h = ns_handle_for(v != nil ? [v columnAtIndex:(NSInteger) ns_arg_long(index)] : nil);
    }
    return h;
}

zend_long ns_nsgridview_index_of_column(zval *handle, zval *column)
{
    zend_long r = 0;
    @autoreleasepool {
        NSGridView *v = NS_ARG_AS(NSGridView, handle);
        r = v != nil ? (zend_long) [v indexOfColumn:NS_ARG_AS(NSGridColumn, column)] : 0;
    }
    return r;
}

zend_long ns_nsgridview_cell_at_column_index_row_index(zval *handle, zval *columnIndex, zval *rowIndex)
{
    zend_long h = 0;
    @autoreleasepool {
        NSGridView *v = NS_ARG_AS(NSGridView, handle);
        h = ns_handle_for(v != nil ? [v cellAtColumnIndex:(NSInteger) ns_arg_long(columnIndex)
                                                rowIndex:(NSInteger) ns_arg_long(rowIndex)] : nil);
    }
    return h;
}

zend_long ns_nsgridview_cell_for_view(zval *handle, zval *view)
{
    zend_long h = 0;
    @autoreleasepool {
        NSGridView *v = NS_ARG_AS(NSGridView, handle);
        h = ns_handle_for(v != nil ? [v cellForView:NS_ARG_AS(NSView, view)] : nil);
    }
    return h;
}

zend_long ns_nsgridview_add_row_with_views(zval *handle, zval *views)
{
    zend_long h = 0;
    @autoreleasepool {
        NSGridView *v = NS_ARG_AS(NSGridView, handle);
        h = ns_handle_for(v != nil ? [v addRowWithViews:ns_arg_object_array(views)] : nil);
    }
    return h;
}

zend_long ns_nsgridview_insert_row_at_index_with_views(zval *handle, zval *index, zval *views)
{
    zend_long h = 0;
    @autoreleasepool {
        NSGridView *v = NS_ARG_AS(NSGridView, handle);
        h = ns_handle_for(v != nil ? [v insertRowAtIndex:(NSInteger) ns_arg_long(index)
                                              withViews:ns_arg_object_array(views)] : nil);
    }
    return h;
}

void ns_nsgridview_move_row_at_index_to_index(zval *handle, zval *fromIndex, zval *toIndex)
{
    @autoreleasepool {
        NSGridView *v = NS_ARG_AS(NSGridView, handle);
        if (v == nil) return;
        [v moveRowAtIndex:(NSInteger) ns_arg_long(fromIndex) toIndex:(NSInteger) ns_arg_long(toIndex)];
    }
}

void ns_nsgridview_remove_row_at_index(zval *handle, zval *index)
{
    @autoreleasepool {
        NSGridView *v = NS_ARG_AS(NSGridView, handle);
        if (v == nil) return;
        [v removeRowAtIndex:(NSInteger) ns_arg_long(index)];
    }
}

zend_long ns_nsgridview_add_column_with_views(zval *handle, zval *views)
{
    zend_long h = 0;
    @autoreleasepool {
        NSGridView *v = NS_ARG_AS(NSGridView, handle);
        h = ns_handle_for(v != nil ? [v addColumnWithViews:ns_arg_object_array(views)] : nil);
    }
    return h;
}

zend_long ns_nsgridview_insert_column_at_index_with_views(zval *handle, zval *index, zval *views)
{
    zend_long h = 0;
    @autoreleasepool {
        NSGridView *v = NS_ARG_AS(NSGridView, handle);
        h = ns_handle_for(v != nil ? [v insertColumnAtIndex:(NSInteger) ns_arg_long(index)
                                                 withViews:ns_arg_object_array(views)] : nil);
    }
    return h;
}

void ns_nsgridview_move_column_at_index_to_index(zval *handle, zval *fromIndex, zval *toIndex)
{
    @autoreleasepool {
        NSGridView *v = NS_ARG_AS(NSGridView, handle);
        if (v == nil) return;
        [v moveColumnAtIndex:(NSInteger) ns_arg_long(fromIndex) toIndex:(NSInteger) ns_arg_long(toIndex)];
    }
}

void ns_nsgridview_remove_column_at_index(zval *handle, zval *index)
{
    @autoreleasepool {
        NSGridView *v = NS_ARG_AS(NSGridView, handle);
        if (v == nil) return;
        [v removeColumnAtIndex:(NSInteger) ns_arg_long(index)];
    }
}

zend_long ns_nsgridview_x_placement(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSGridView *v = NS_ARG_AS(NSGridView, handle);
        r = v != nil ? (zend_long) [v xPlacement] : 0;
    }
    return r;
}

void ns_nsgridview_set_x_placement(zval *handle, zval *xPlacement)
{
    @autoreleasepool {
        NSGridView *v = NS_ARG_AS(NSGridView, handle);
        if (v == nil) return;
        [v setXPlacement:(NSGridCellPlacement) ns_arg_long(xPlacement)];
    }
}

zend_long ns_nsgridview_y_placement(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSGridView *v = NS_ARG_AS(NSGridView, handle);
        r = v != nil ? (zend_long) [v yPlacement] : 0;
    }
    return r;
}

void ns_nsgridview_set_y_placement(zval *handle, zval *yPlacement)
{
    @autoreleasepool {
        NSGridView *v = NS_ARG_AS(NSGridView, handle);
        if (v == nil) return;
        [v setYPlacement:(NSGridCellPlacement) ns_arg_long(yPlacement)];
    }
}

zend_long ns_nsgridview_row_alignment(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSGridView *v = NS_ARG_AS(NSGridView, handle);
        r = v != nil ? (zend_long) [v rowAlignment] : 0;
    }
    return r;
}

void ns_nsgridview_set_row_alignment(zval *handle, zval *rowAlignment)
{
    @autoreleasepool {
        NSGridView *v = NS_ARG_AS(NSGridView, handle);
        if (v == nil) return;
        [v setRowAlignment:(NSGridRowAlignment) ns_arg_long(rowAlignment)];
    }
}

double ns_nsgridview_row_spacing(zval *handle)
{
    double r = 0.0;
    @autoreleasepool {
        NSGridView *v = NS_ARG_AS(NSGridView, handle);
        r = v != nil ? (double) [v rowSpacing] : 0.0;
    }
    return r;
}

void ns_nsgridview_set_row_spacing(zval *handle, zval *rowSpacing)
{
    @autoreleasepool {
        NSGridView *v = NS_ARG_AS(NSGridView, handle);
        if (v == nil) return;
        [v setRowSpacing:ns_arg_double(rowSpacing)];
    }
}

double ns_nsgridview_column_spacing(zval *handle)
{
    double r = 0.0;
    @autoreleasepool {
        NSGridView *v = NS_ARG_AS(NSGridView, handle);
        r = v != nil ? (double) [v columnSpacing] : 0.0;
    }
    return r;
}

void ns_nsgridview_set_column_spacing(zval *handle, zval *columnSpacing)
{
    @autoreleasepool {
        NSGridView *v = NS_ARG_AS(NSGridView, handle);
        if (v == nil) return;
        [v setColumnSpacing:ns_arg_double(columnSpacing)];
    }
}

void ns_nsgridview_merge_cells_in_horizontal_range_vertical_range(zval *handle, zval *hLocation, zval *hLength, zval *vLocation, zval *vLength)
{
    @autoreleasepool {
        NSGridView *v = NS_ARG_AS(NSGridView, handle);
        if (v == nil) return;
        [v mergeCellsInHorizontalRange:ns_arg_range(hLocation, hLength)
                        verticalRange:ns_arg_range(vLocation, vLength)];
    }
}

/* ====================================================================== */
/* NSGridRow                                                              */
/* ====================================================================== */

zend_long ns_nsgridrow_init(void)
{
    @autoreleasepool {
        return ns_handle_for([[NSGridRow alloc] init]);
    }
}

zend_long ns_nsgridrow_grid_view(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSGridRow *row = NS_ARG_AS(NSGridRow, handle);
        h = ns_handle_for(row != nil ? [row gridView] : nil);
    }
    return h;
}

zend_long ns_nsgridrow_number_of_cells(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSGridRow *row = NS_ARG_AS(NSGridRow, handle);
        r = row != nil ? (zend_long) [row numberOfCells] : 0;
    }
    return r;
}

zend_long ns_nsgridrow_cell_at_index(zval *handle, zval *index)
{
    zend_long h = 0;
    @autoreleasepool {
        NSGridRow *row = NS_ARG_AS(NSGridRow, handle);
        h = ns_handle_for(row != nil ? [row cellAtIndex:(NSInteger) ns_arg_long(index)] : nil);
    }
    return h;
}

zend_long ns_nsgridrow_y_placement(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSGridRow *row = NS_ARG_AS(NSGridRow, handle);
        r = row != nil ? (zend_long) [row yPlacement] : 0;
    }
    return r;
}

void ns_nsgridrow_set_y_placement(zval *handle, zval *yPlacement)
{
    @autoreleasepool {
        NSGridRow *row = NS_ARG_AS(NSGridRow, handle);
        if (row == nil) return;
        [row setYPlacement:(NSGridCellPlacement) ns_arg_long(yPlacement)];
    }
}

zend_long ns_nsgridrow_row_alignment(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSGridRow *row = NS_ARG_AS(NSGridRow, handle);
        r = row != nil ? (zend_long) [row rowAlignment] : 0;
    }
    return r;
}

void ns_nsgridrow_set_row_alignment(zval *handle, zval *rowAlignment)
{
    @autoreleasepool {
        NSGridRow *row = NS_ARG_AS(NSGridRow, handle);
        if (row == nil) return;
        [row setRowAlignment:(NSGridRowAlignment) ns_arg_long(rowAlignment)];
    }
}

double ns_nsgridrow_height(zval *handle)
{
    double r = 0.0;
    @autoreleasepool {
        NSGridRow *row = NS_ARG_AS(NSGridRow, handle);
        r = row != nil ? (double) [row height] : 0.0;
    }
    return r;
}

void ns_nsgridrow_set_height(zval *handle, zval *height)
{
    @autoreleasepool {
        NSGridRow *row = NS_ARG_AS(NSGridRow, handle);
        if (row == nil) return;
        [row setHeight:ns_arg_double(height)];
    }
}

double ns_nsgridrow_top_padding(zval *handle)
{
    double r = 0.0;
    @autoreleasepool {
        NSGridRow *row = NS_ARG_AS(NSGridRow, handle);
        r = row != nil ? (double) [row topPadding] : 0.0;
    }
    return r;
}

void ns_nsgridrow_set_top_padding(zval *handle, zval *topPadding)
{
    @autoreleasepool {
        NSGridRow *row = NS_ARG_AS(NSGridRow, handle);
        if (row == nil) return;
        [row setTopPadding:ns_arg_double(topPadding)];
    }
}

double ns_nsgridrow_bottom_padding(zval *handle)
{
    double r = 0.0;
    @autoreleasepool {
        NSGridRow *row = NS_ARG_AS(NSGridRow, handle);
        r = row != nil ? (double) [row bottomPadding] : 0.0;
    }
    return r;
}

void ns_nsgridrow_set_bottom_padding(zval *handle, zval *bottomPadding)
{
    @autoreleasepool {
        NSGridRow *row = NS_ARG_AS(NSGridRow, handle);
        if (row == nil) return;
        [row setBottomPadding:ns_arg_double(bottomPadding)];
    }
}

zend_long ns_nsgridrow_is_hidden(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSGridRow *row = NS_ARG_AS(NSGridRow, handle);
        r = (row != nil && [row isHidden]) ? 1 : 0;
    }
    return r;
}

void ns_nsgridrow_set_hidden(zval *handle, zval *hidden)
{
    @autoreleasepool {
        NSGridRow *row = NS_ARG_AS(NSGridRow, handle);
        if (row == nil) return;
        [row setHidden:ns_arg_bool(hidden)];
    }
}

void ns_nsgridrow_merge_cells_in_range(zval *handle, zval *location, zval *length)
{
    @autoreleasepool {
        NSGridRow *row = NS_ARG_AS(NSGridRow, handle);
        if (row == nil) return;
        [row mergeCellsInRange:ns_arg_range(location, length)];
    }
}

/* ====================================================================== */
/* NSGridColumn                                                           */
/* ====================================================================== */

zend_long ns_nsgridcolumn_init(void)
{
    @autoreleasepool {
        return ns_handle_for([[NSGridColumn alloc] init]);
    }
}

zend_long ns_nsgridcolumn_grid_view(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSGridColumn *column = NS_ARG_AS(NSGridColumn, handle);
        h = ns_handle_for(column != nil ? [column gridView] : nil);
    }
    return h;
}

zend_long ns_nsgridcolumn_number_of_cells(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSGridColumn *column = NS_ARG_AS(NSGridColumn, handle);
        r = column != nil ? (zend_long) [column numberOfCells] : 0;
    }
    return r;
}

zend_long ns_nsgridcolumn_cell_at_index(zval *handle, zval *index)
{
    zend_long h = 0;
    @autoreleasepool {
        NSGridColumn *column = NS_ARG_AS(NSGridColumn, handle);
        h = ns_handle_for(column != nil ? [column cellAtIndex:(NSInteger) ns_arg_long(index)] : nil);
    }
    return h;
}

zend_long ns_nsgridcolumn_x_placement(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSGridColumn *column = NS_ARG_AS(NSGridColumn, handle);
        r = column != nil ? (zend_long) [column xPlacement] : 0;
    }
    return r;
}

void ns_nsgridcolumn_set_x_placement(zval *handle, zval *xPlacement)
{
    @autoreleasepool {
        NSGridColumn *column = NS_ARG_AS(NSGridColumn, handle);
        if (column == nil) return;
        [column setXPlacement:(NSGridCellPlacement) ns_arg_long(xPlacement)];
    }
}

double ns_nsgridcolumn_width(zval *handle)
{
    double r = 0.0;
    @autoreleasepool {
        NSGridColumn *column = NS_ARG_AS(NSGridColumn, handle);
        r = column != nil ? (double) [column width] : 0.0;
    }
    return r;
}

void ns_nsgridcolumn_set_width(zval *handle, zval *width)
{
    @autoreleasepool {
        NSGridColumn *column = NS_ARG_AS(NSGridColumn, handle);
        if (column == nil) return;
        [column setWidth:ns_arg_double(width)];
    }
}

double ns_nsgridcolumn_leading_padding(zval *handle)
{
    double r = 0.0;
    @autoreleasepool {
        NSGridColumn *column = NS_ARG_AS(NSGridColumn, handle);
        r = column != nil ? (double) [column leadingPadding] : 0.0;
    }
    return r;
}

void ns_nsgridcolumn_set_leading_padding(zval *handle, zval *leadingPadding)
{
    @autoreleasepool {
        NSGridColumn *column = NS_ARG_AS(NSGridColumn, handle);
        if (column == nil) return;
        [column setLeadingPadding:ns_arg_double(leadingPadding)];
    }
}

double ns_nsgridcolumn_trailing_padding(zval *handle)
{
    double r = 0.0;
    @autoreleasepool {
        NSGridColumn *column = NS_ARG_AS(NSGridColumn, handle);
        r = column != nil ? (double) [column trailingPadding] : 0.0;
    }
    return r;
}

void ns_nsgridcolumn_set_trailing_padding(zval *handle, zval *trailingPadding)
{
    @autoreleasepool {
        NSGridColumn *column = NS_ARG_AS(NSGridColumn, handle);
        if (column == nil) return;
        [column setTrailingPadding:ns_arg_double(trailingPadding)];
    }
}

zend_long ns_nsgridcolumn_is_hidden(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSGridColumn *column = NS_ARG_AS(NSGridColumn, handle);
        r = (column != nil && [column isHidden]) ? 1 : 0;
    }
    return r;
}

void ns_nsgridcolumn_set_hidden(zval *handle, zval *hidden)
{
    @autoreleasepool {
        NSGridColumn *column = NS_ARG_AS(NSGridColumn, handle);
        if (column == nil) return;
        [column setHidden:ns_arg_bool(hidden)];
    }
}

void ns_nsgridcolumn_merge_cells_in_range(zval *handle, zval *location, zval *length)
{
    @autoreleasepool {
        NSGridColumn *column = NS_ARG_AS(NSGridColumn, handle);
        if (column == nil) return;
        [column mergeCellsInRange:ns_arg_range(location, length)];
    }
}

/* ====================================================================== */
/* NSGridCell                                                             */
/* ====================================================================== */

zend_long ns_nsgridcell_init(void)
{
    @autoreleasepool {
        return ns_handle_for([[NSGridCell alloc] init]);
    }
}

zend_long ns_nsgridcell_content_view(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSGridCell *cell = NS_ARG_AS(NSGridCell, handle);
        h = ns_handle_for(cell != nil ? [cell contentView] : nil);
    }
    return h;
}

void ns_nsgridcell_set_content_view(zval *handle, zval *contentView)
{
    @autoreleasepool {
        NSGridCell *cell = NS_ARG_AS(NSGridCell, handle);
        if (cell == nil) return;
        [cell setContentView:NS_ARG_AS(NSView, contentView)];
    }
}

zend_long ns_nsgridcell_empty_content_view(void)
{
    @autoreleasepool {
        return ns_handle_for([NSGridCell emptyContentView]);
    }
}

zend_long ns_nsgridcell_row(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSGridCell *cell = NS_ARG_AS(NSGridCell, handle);
        h = ns_handle_for(cell != nil ? [cell row] : nil);
    }
    return h;
}

zend_long ns_nsgridcell_column(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSGridCell *cell = NS_ARG_AS(NSGridCell, handle);
        h = ns_handle_for(cell != nil ? [cell column] : nil);
    }
    return h;
}

zend_long ns_nsgridcell_x_placement(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSGridCell *cell = NS_ARG_AS(NSGridCell, handle);
        r = cell != nil ? (zend_long) [cell xPlacement] : 0;
    }
    return r;
}

void ns_nsgridcell_set_x_placement(zval *handle, zval *xPlacement)
{
    @autoreleasepool {
        NSGridCell *cell = NS_ARG_AS(NSGridCell, handle);
        if (cell == nil) return;
        [cell setXPlacement:(NSGridCellPlacement) ns_arg_long(xPlacement)];
    }
}

zend_long ns_nsgridcell_y_placement(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSGridCell *cell = NS_ARG_AS(NSGridCell, handle);
        r = cell != nil ? (zend_long) [cell yPlacement] : 0;
    }
    return r;
}

void ns_nsgridcell_set_y_placement(zval *handle, zval *yPlacement)
{
    @autoreleasepool {
        NSGridCell *cell = NS_ARG_AS(NSGridCell, handle);
        if (cell == nil) return;
        [cell setYPlacement:(NSGridCellPlacement) ns_arg_long(yPlacement)];
    }
}

zend_long ns_nsgridcell_row_alignment(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSGridCell *cell = NS_ARG_AS(NSGridCell, handle);
        r = cell != nil ? (zend_long) [cell rowAlignment] : 0;
    }
    return r;
}

void ns_nsgridcell_set_row_alignment(zval *handle, zval *rowAlignment)
{
    @autoreleasepool {
        NSGridCell *cell = NS_ARG_AS(NSGridCell, handle);
        if (cell == nil) return;
        [cell setRowAlignment:(NSGridRowAlignment) ns_arg_long(rowAlignment)];
    }
}

void ns_nsgridcell_custom_placement_constraints(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSGridCell *cell = NS_ARG_AS(NSGridCell, handle);
        ns_ret_object_array(return_value, cell != nil ? [cell customPlacementConstraints] : nil);
    }
}

void ns_nsgridcell_set_custom_placement_constraints(zval *handle, zval *constraints)
{
    @autoreleasepool {
        NSGridCell *cell = NS_ARG_AS(NSGridCell, handle);
        if (cell == nil) return;
        [cell setCustomPlacementConstraints:ns_arg_object_array(constraints)];
    }
}
