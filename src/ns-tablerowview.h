#ifndef PHP_APPKIT_NS_TABLEROWVIEW_H
#define PHP_APPKIT_NS_TABLEROWVIEW_H

/*
 * Faithful 1:1 binding of AppKit NSTableRowView.h. Every member of
 * the single base interface is either bound or reserved. Nothing is
 * reserved — the header has no blocks, NSCoder, NSAttributedString,
 * NSData, Class, or API_DEPRECATED members. There are no same-file
 * categories. The adopted NSAccessibilityRow protocol is not a
 * class member. Inherited NSView / NSResponder members stay on
 * those classes. This header declares no initializer —
 * construction is synthesized initWithFrame (allocs
 * NSTableRowView). Selection / group / floating / drop-target
 * flags use the isX getters. Enums
 * (NSTableViewSelectionHighlightStyle,
 * NSTableViewDraggingDestinationFeedbackStyle, NSBackgroundStyle)
 * cross as int. indentationForDropOperation is CGFloat (double).
 * backgroundColor is an NSColor handle. The four draw*InRect:
 * overrides take NSRect component doubles. viewAtColumn: returns
 * a nullable id handle. numberOfColumns is NSInteger (int).
 */

#include "php.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ---- construction glue ---- */

/*@zep-construct NS\NSTableRowView initWithFrame(double x, double y, double width, double height) -> int */
zend_long ns_nstablerowview_init_with_frame(zval *x, zval *y, zval *width, zval *height);

/* ---- Selection / style ---- */

/*@zep NS\NSTableRowView selectionHighlightStyle(int handle) -> int */
zend_long ns_nstablerowview_selection_highlight_style(zval *handle);
/*@zep NS\NSTableRowView setSelectionHighlightStyle(int handle, int selectionHighlightStyle) -> void */
void ns_nstablerowview_set_selection_highlight_style(zval *handle, zval *selectionHighlightStyle);

/*@zep NS\NSTableRowView isEmphasized(int handle) -> bool */
zend_long ns_nstablerowview_is_emphasized(zval *handle);
/*@zep NS\NSTableRowView setEmphasized(int handle, bool emphasized) -> void */
void ns_nstablerowview_set_emphasized(zval *handle, zval *emphasized);

/*@zep NS\NSTableRowView isGroupRowStyle(int handle) -> bool */
zend_long ns_nstablerowview_is_group_row_style(zval *handle);
/*@zep NS\NSTableRowView setGroupRowStyle(int handle, bool groupRowStyle) -> void */
void ns_nstablerowview_set_group_row_style(zval *handle, zval *groupRowStyle);

/*@zep NS\NSTableRowView isSelected(int handle) -> bool */
zend_long ns_nstablerowview_is_selected(zval *handle);
/*@zep NS\NSTableRowView setSelected(int handle, bool selected) -> void */
void ns_nstablerowview_set_selected(zval *handle, zval *selected);

/*@zep NS\NSTableRowView isPreviousRowSelected(int handle) -> bool */
zend_long ns_nstablerowview_is_previous_row_selected(zval *handle);
/*@zep NS\NSTableRowView setPreviousRowSelected(int handle, bool previousRowSelected) -> void */
void ns_nstablerowview_set_previous_row_selected(zval *handle, zval *previousRowSelected);

/*@zep NS\NSTableRowView isNextRowSelected(int handle) -> bool */
zend_long ns_nstablerowview_is_next_row_selected(zval *handle);
/*@zep NS\NSTableRowView setNextRowSelected(int handle, bool nextRowSelected) -> void */
void ns_nstablerowview_set_next_row_selected(zval *handle, zval *nextRowSelected);

/*@zep NS\NSTableRowView isFloating(int handle) -> bool */
zend_long ns_nstablerowview_is_floating(zval *handle);
/*@zep NS\NSTableRowView setFloating(int handle, bool floating) -> void */
void ns_nstablerowview_set_floating(zval *handle, zval *floating);

/*@zep NS\NSTableRowView isTargetForDropOperation(int handle) -> bool */
zend_long ns_nstablerowview_is_target_for_drop_operation(zval *handle);
/*@zep NS\NSTableRowView setTargetForDropOperation(int handle, bool targetForDropOperation) -> void */
void ns_nstablerowview_set_target_for_drop_operation(zval *handle, zval *targetForDropOperation);

/*@zep NS\NSTableRowView draggingDestinationFeedbackStyle(int handle) -> int */
zend_long ns_nstablerowview_dragging_destination_feedback_style(zval *handle);
/*@zep NS\NSTableRowView setDraggingDestinationFeedbackStyle(int handle, int draggingDestinationFeedbackStyle) -> void */
void ns_nstablerowview_set_dragging_destination_feedback_style(zval *handle, zval *draggingDestinationFeedbackStyle);

/*@zep NS\NSTableRowView indentationForDropOperation(int handle) -> double */
double ns_nstablerowview_indentation_for_drop_operation(zval *handle);
/*@zep NS\NSTableRowView setIndentationForDropOperation(int handle, double indentationForDropOperation) -> void */
void ns_nstablerowview_set_indentation_for_drop_operation(zval *handle, zval *indentationForDropOperation);

/*@zep NS\NSTableRowView interiorBackgroundStyle(int handle) -> int */
zend_long ns_nstablerowview_interior_background_style(zval *handle);

/*@zep NS\NSTableRowView backgroundColor(int handle) -> int */
zend_long ns_nstablerowview_background_color(zval *handle);
/*@zep NS\NSTableRowView setBackgroundColor(int handle, int backgroundColor) -> void */
void ns_nstablerowview_set_background_color(zval *handle, zval *backgroundColor);

/* ---- Drawing overrides ---- */

/*@zep NS\NSTableRowView drawBackgroundInRect(int handle, double x, double y, double width, double height) -> void */
void ns_nstablerowview_draw_background_in_rect(zval *handle, zval *x, zval *y, zval *width, zval *height);

/*@zep NS\NSTableRowView drawSelectionInRect(int handle, double x, double y, double width, double height) -> void */
void ns_nstablerowview_draw_selection_in_rect(zval *handle, zval *x, zval *y, zval *width, zval *height);

/*@zep NS\NSTableRowView drawSeparatorInRect(int handle, double x, double y, double width, double height) -> void */
void ns_nstablerowview_draw_separator_in_rect(zval *handle, zval *x, zval *y, zval *width, zval *height);

/*@zep NS\NSTableRowView drawDraggingDestinationFeedbackInRect(int handle, double x, double y, double width, double height) -> void */
void ns_nstablerowview_draw_dragging_destination_feedback_in_rect(zval *handle, zval *x, zval *y, zval *width, zval *height);

/* ---- Cell view access ---- */

/*@zep NS\NSTableRowView viewAtColumn(int handle, int column) -> int */
zend_long ns_nstablerowview_view_at_column(zval *handle, zval *column);

/*@zep NS\NSTableRowView numberOfColumns(int handle) -> int */
zend_long ns_nstablerowview_number_of_columns(zval *handle);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_TABLEROWVIEW_H */
