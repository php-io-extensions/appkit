#ifndef PHP_APPKIT_NS_GRIDVIEW_H
#define PHP_APPKIT_NS_GRIDVIEW_H

/*
 * Faithful 1:1 binding of AppKit NSGridView.h. That header
 * declares four classes. Every member of NSGridView and of the
 * same-file companions NSGridRow, NSGridColumn, and NSGridCell
 * is either bound or reserved. Nothing is omitted. There are
 * no same-file categories. Adopted NSCoding on the three
 * companions is not a class member (no initWithCoder: is
 * declared on those interfaces). The NSGridCellPlacement /
 * NSGridRowAlignment typedefs and APPKIT_EXTERN
 * NSGridViewSizeForContent are not class members. Inherited
 * NSView / NSObject / NSResponder members stay on those
 * classes. NSGridView declares initWithFrame: (alloc+init
 * glue) and initWithCoder: (reserved, NSCoder), plus the
 * two class factories gridViewWithNumberOfColumns:rows: and
 * gridViewWithViews:. The companions declare no initializer
 * — construction is synthesized init (allocs NSGridRow /
 * NSGridColumn / NSGridCell). gridViewWithViews: takes
 * NSArray<NSArray<NSView *> *> and marshals as an array of
 * arrays of handles. NSArray<NSView *> row/column view lists
 * and NSArray<NSLayoutConstraint *> customPlacementConstraints
 * cross as arrays of handles. NSRange merge methods follow
 * the location/length convention. Class property
 * emptyContentView is a no-handle factory returning an
 * NSView handle (the placeholder for a nil contentView).
 * contentView / cellForView: / gridView / row / column are
 * nullable or weak and cross as int handles (0 = nil).
 * NSGridCellPlacement / NSGridRowAlignment cross as int.
 * CGFloat spacing / height / width / padding cross as
 * double. getter=isHidden on row and column emits isHidden.
 */

#include "php.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ---- NSGridView construction ---- */

/*@zep NS\NSGridView initWithFrame(double x, double y, double width, double height) -> int */
zend_long ns_nsgridview_init_with_frame(zval *x, zval *y, zval *width, zval *height);
/*@reserved NS\NSGridView - (nullable instancetype)initWithCoder:(NSCoder *)coder NS_DESIGNATED_INITIALIZER; */

/*@zep NS\NSGridView gridViewWithNumberOfColumnsRows(int columnCount, int rowCount) -> int */
zend_long ns_nsgridview_grid_view_with_number_of_columns_rows(zval *columnCount, zval *rowCount);
/*@zep NS\NSGridView gridViewWithViews(array rows) -> int */
zend_long ns_nsgridview_grid_view_with_views(zval *rows);

/* ---- NSGridView dimensions / lookup ---- */

/*@zep NS\NSGridView numberOfRows(int handle) -> int */
zend_long ns_nsgridview_number_of_rows(zval *handle);
/*@zep NS\NSGridView numberOfColumns(int handle) -> int */
zend_long ns_nsgridview_number_of_columns(zval *handle);

/*@zep NS\NSGridView rowAtIndex(int handle, int index) -> int */
zend_long ns_nsgridview_row_at_index(zval *handle, zval *index);
/*@zep NS\NSGridView indexOfRow(int handle, int row) -> int */
zend_long ns_nsgridview_index_of_row(zval *handle, zval *row);
/*@zep NS\NSGridView columnAtIndex(int handle, int index) -> int */
zend_long ns_nsgridview_column_at_index(zval *handle, zval *index);
/*@zep NS\NSGridView indexOfColumn(int handle, int column) -> int */
zend_long ns_nsgridview_index_of_column(zval *handle, zval *column);
/*@zep NS\NSGridView cellAtColumnIndexRowIndex(int handle, int columnIndex, int rowIndex) -> int */
zend_long ns_nsgridview_cell_at_column_index_row_index(zval *handle, zval *columnIndex, zval *rowIndex);
/*@zep NS\NSGridView cellForView(int handle, int view) -> int */
zend_long ns_nsgridview_cell_for_view(zval *handle, zval *view);

/* ---- NSGridView row / column mutation ---- */

/*@zep NS\NSGridView addRowWithViews(int handle, array views) -> int */
zend_long ns_nsgridview_add_row_with_views(zval *handle, zval *views);
/*@zep NS\NSGridView insertRowAtIndexWithViews(int handle, int index, array views) -> int */
zend_long ns_nsgridview_insert_row_at_index_with_views(zval *handle, zval *index, zval *views);
/*@zep NS\NSGridView moveRowAtIndexToIndex(int handle, int fromIndex, int toIndex) -> void */
void ns_nsgridview_move_row_at_index_to_index(zval *handle, zval *fromIndex, zval *toIndex);
/*@zep NS\NSGridView removeRowAtIndex(int handle, int index) -> void */
void ns_nsgridview_remove_row_at_index(zval *handle, zval *index);

/*@zep NS\NSGridView addColumnWithViews(int handle, array views) -> int */
zend_long ns_nsgridview_add_column_with_views(zval *handle, zval *views);
/*@zep NS\NSGridView insertColumnAtIndexWithViews(int handle, int index, array views) -> int */
zend_long ns_nsgridview_insert_column_at_index_with_views(zval *handle, zval *index, zval *views);
/*@zep NS\NSGridView moveColumnAtIndexToIndex(int handle, int fromIndex, int toIndex) -> void */
void ns_nsgridview_move_column_at_index_to_index(zval *handle, zval *fromIndex, zval *toIndex);
/*@zep NS\NSGridView removeColumnAtIndex(int handle, int index) -> void */
void ns_nsgridview_remove_column_at_index(zval *handle, zval *index);

/* ---- NSGridView layout ---- */

/*@zep NS\NSGridView xPlacement(int handle) -> int */
zend_long ns_nsgridview_x_placement(zval *handle);
/*@zep NS\NSGridView setXPlacement(int handle, int xPlacement) -> void */
void ns_nsgridview_set_x_placement(zval *handle, zval *xPlacement);

/*@zep NS\NSGridView yPlacement(int handle) -> int */
zend_long ns_nsgridview_y_placement(zval *handle);
/*@zep NS\NSGridView setYPlacement(int handle, int yPlacement) -> void */
void ns_nsgridview_set_y_placement(zval *handle, zval *yPlacement);

/*@zep NS\NSGridView rowAlignment(int handle) -> int */
zend_long ns_nsgridview_row_alignment(zval *handle);
/*@zep NS\NSGridView setRowAlignment(int handle, int rowAlignment) -> void */
void ns_nsgridview_set_row_alignment(zval *handle, zval *rowAlignment);

/*@zep NS\NSGridView rowSpacing(int handle) -> double */
double ns_nsgridview_row_spacing(zval *handle);
/*@zep NS\NSGridView setRowSpacing(int handle, double rowSpacing) -> void */
void ns_nsgridview_set_row_spacing(zval *handle, zval *rowSpacing);

/*@zep NS\NSGridView columnSpacing(int handle) -> double */
double ns_nsgridview_column_spacing(zval *handle);
/*@zep NS\NSGridView setColumnSpacing(int handle, double columnSpacing) -> void */
void ns_nsgridview_set_column_spacing(zval *handle, zval *columnSpacing);

/*@zep NS\NSGridView mergeCellsInHorizontalRangeVerticalRange(int handle, int hLocation, int hLength, int vLocation, int vLength) -> void */
void ns_nsgridview_merge_cells_in_horizontal_range_vertical_range(zval *handle, zval *hLocation, zval *hLength, zval *vLocation, zval *vLength);

/* ---- NSGridRow ---- */

/*@zep-construct NS\NSGridRow init() -> int */
zend_long ns_nsgridrow_init(void);

/*@zep NS\NSGridRow gridView(int handle) -> int */
zend_long ns_nsgridrow_grid_view(zval *handle);
/*@zep NS\NSGridRow numberOfCells(int handle) -> int */
zend_long ns_nsgridrow_number_of_cells(zval *handle);
/*@zep NS\NSGridRow cellAtIndex(int handle, int index) -> int */
zend_long ns_nsgridrow_cell_at_index(zval *handle, zval *index);

/*@zep NS\NSGridRow yPlacement(int handle) -> int */
zend_long ns_nsgridrow_y_placement(zval *handle);
/*@zep NS\NSGridRow setYPlacement(int handle, int yPlacement) -> void */
void ns_nsgridrow_set_y_placement(zval *handle, zval *yPlacement);

/*@zep NS\NSGridRow rowAlignment(int handle) -> int */
zend_long ns_nsgridrow_row_alignment(zval *handle);
/*@zep NS\NSGridRow setRowAlignment(int handle, int rowAlignment) -> void */
void ns_nsgridrow_set_row_alignment(zval *handle, zval *rowAlignment);

/*@zep NS\NSGridRow height(int handle) -> double */
double ns_nsgridrow_height(zval *handle);
/*@zep NS\NSGridRow setHeight(int handle, double height) -> void */
void ns_nsgridrow_set_height(zval *handle, zval *height);

/*@zep NS\NSGridRow topPadding(int handle) -> double */
double ns_nsgridrow_top_padding(zval *handle);
/*@zep NS\NSGridRow setTopPadding(int handle, double topPadding) -> void */
void ns_nsgridrow_set_top_padding(zval *handle, zval *topPadding);

/*@zep NS\NSGridRow bottomPadding(int handle) -> double */
double ns_nsgridrow_bottom_padding(zval *handle);
/*@zep NS\NSGridRow setBottomPadding(int handle, double bottomPadding) -> void */
void ns_nsgridrow_set_bottom_padding(zval *handle, zval *bottomPadding);

/*@zep NS\NSGridRow isHidden(int handle) -> bool */
zend_long ns_nsgridrow_is_hidden(zval *handle);
/*@zep NS\NSGridRow setHidden(int handle, bool hidden) -> void */
void ns_nsgridrow_set_hidden(zval *handle, zval *hidden);

/*@zep NS\NSGridRow mergeCellsInRange(int handle, int location, int length) -> void */
void ns_nsgridrow_merge_cells_in_range(zval *handle, zval *location, zval *length);

/* ---- NSGridColumn ---- */

/*@zep-construct NS\NSGridColumn init() -> int */
zend_long ns_nsgridcolumn_init(void);

/*@zep NS\NSGridColumn gridView(int handle) -> int */
zend_long ns_nsgridcolumn_grid_view(zval *handle);
/*@zep NS\NSGridColumn numberOfCells(int handle) -> int */
zend_long ns_nsgridcolumn_number_of_cells(zval *handle);
/*@zep NS\NSGridColumn cellAtIndex(int handle, int index) -> int */
zend_long ns_nsgridcolumn_cell_at_index(zval *handle, zval *index);

/*@zep NS\NSGridColumn xPlacement(int handle) -> int */
zend_long ns_nsgridcolumn_x_placement(zval *handle);
/*@zep NS\NSGridColumn setXPlacement(int handle, int xPlacement) -> void */
void ns_nsgridcolumn_set_x_placement(zval *handle, zval *xPlacement);

/*@zep NS\NSGridColumn width(int handle) -> double */
double ns_nsgridcolumn_width(zval *handle);
/*@zep NS\NSGridColumn setWidth(int handle, double width) -> void */
void ns_nsgridcolumn_set_width(zval *handle, zval *width);

/*@zep NS\NSGridColumn leadingPadding(int handle) -> double */
double ns_nsgridcolumn_leading_padding(zval *handle);
/*@zep NS\NSGridColumn setLeadingPadding(int handle, double leadingPadding) -> void */
void ns_nsgridcolumn_set_leading_padding(zval *handle, zval *leadingPadding);

/*@zep NS\NSGridColumn trailingPadding(int handle) -> double */
double ns_nsgridcolumn_trailing_padding(zval *handle);
/*@zep NS\NSGridColumn setTrailingPadding(int handle, double trailingPadding) -> void */
void ns_nsgridcolumn_set_trailing_padding(zval *handle, zval *trailingPadding);

/*@zep NS\NSGridColumn isHidden(int handle) -> bool */
zend_long ns_nsgridcolumn_is_hidden(zval *handle);
/*@zep NS\NSGridColumn setHidden(int handle, bool hidden) -> void */
void ns_nsgridcolumn_set_hidden(zval *handle, zval *hidden);

/*@zep NS\NSGridColumn mergeCellsInRange(int handle, int location, int length) -> void */
void ns_nsgridcolumn_merge_cells_in_range(zval *handle, zval *location, zval *length);

/* ---- NSGridCell ---- */

/*@zep-construct NS\NSGridCell init() -> int */
zend_long ns_nsgridcell_init(void);

/*@zep NS\NSGridCell contentView(int handle) -> int */
zend_long ns_nsgridcell_content_view(zval *handle);
/*@zep NS\NSGridCell setContentView(int handle, int contentView) -> void */
void ns_nsgridcell_set_content_view(zval *handle, zval *contentView);

/*@zep NS\NSGridCell emptyContentView() -> int */
zend_long ns_nsgridcell_empty_content_view(void);

/*@zep NS\NSGridCell row(int handle) -> int */
zend_long ns_nsgridcell_row(zval *handle);
/*@zep NS\NSGridCell column(int handle) -> int */
zend_long ns_nsgridcell_column(zval *handle);

/*@zep NS\NSGridCell xPlacement(int handle) -> int */
zend_long ns_nsgridcell_x_placement(zval *handle);
/*@zep NS\NSGridCell setXPlacement(int handle, int xPlacement) -> void */
void ns_nsgridcell_set_x_placement(zval *handle, zval *xPlacement);

/*@zep NS\NSGridCell yPlacement(int handle) -> int */
zend_long ns_nsgridcell_y_placement(zval *handle);
/*@zep NS\NSGridCell setYPlacement(int handle, int yPlacement) -> void */
void ns_nsgridcell_set_y_placement(zval *handle, zval *yPlacement);

/*@zep NS\NSGridCell rowAlignment(int handle) -> int */
zend_long ns_nsgridcell_row_alignment(zval *handle);
/*@zep NS\NSGridCell setRowAlignment(int handle, int rowAlignment) -> void */
void ns_nsgridcell_set_row_alignment(zval *handle, zval *rowAlignment);

/*@zep NS\NSGridCell customPlacementConstraints(int handle) -> array */
void ns_nsgridcell_custom_placement_constraints(zval *return_value, zval *handle);
/*@zep NS\NSGridCell setCustomPlacementConstraints(int handle, array constraints) -> void */
void ns_nsgridcell_set_custom_placement_constraints(zval *handle, zval *constraints);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_GRIDVIEW_H */
