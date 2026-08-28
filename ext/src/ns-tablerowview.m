#include "ns-tablerowview.h"
#include "ns-value.h"

/* ====================================================================== */
/* NSTableRowView                                                         */
/* ====================================================================== */

zend_long ns_nstablerowview_init_with_frame(zval *x, zval *y, zval *width, zval *height)
{
    @autoreleasepool {
        return ns_handle_for([[NSTableRowView alloc] initWithFrame:ns_arg_rect(x, y, width, height)]);
    }
}

zend_long ns_nstablerowview_selection_highlight_style(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSTableRowView *v = NS_ARG_AS(NSTableRowView, handle);
        r = v != nil ? (zend_long) [v selectionHighlightStyle] : 0;
    }
    return r;
}

void ns_nstablerowview_set_selection_highlight_style(zval *handle, zval *selectionHighlightStyle)
{
    @autoreleasepool {
        NSTableRowView *v = NS_ARG_AS(NSTableRowView, handle);
        if (v == nil) return;
        [v setSelectionHighlightStyle:(NSTableViewSelectionHighlightStyle) ns_arg_long(selectionHighlightStyle)];
    }
}

zend_long ns_nstablerowview_is_emphasized(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSTableRowView *v = NS_ARG_AS(NSTableRowView, handle);
        r = (v != nil && [v isEmphasized]) ? 1 : 0;
    }
    return r;
}

void ns_nstablerowview_set_emphasized(zval *handle, zval *emphasized)
{
    @autoreleasepool {
        NSTableRowView *v = NS_ARG_AS(NSTableRowView, handle);
        if (v == nil) return;
        [v setEmphasized:ns_arg_bool(emphasized)];
    }
}

zend_long ns_nstablerowview_is_group_row_style(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSTableRowView *v = NS_ARG_AS(NSTableRowView, handle);
        r = (v != nil && [v isGroupRowStyle]) ? 1 : 0;
    }
    return r;
}

void ns_nstablerowview_set_group_row_style(zval *handle, zval *groupRowStyle)
{
    @autoreleasepool {
        NSTableRowView *v = NS_ARG_AS(NSTableRowView, handle);
        if (v == nil) return;
        [v setGroupRowStyle:ns_arg_bool(groupRowStyle)];
    }
}

zend_long ns_nstablerowview_is_selected(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSTableRowView *v = NS_ARG_AS(NSTableRowView, handle);
        r = (v != nil && [v isSelected]) ? 1 : 0;
    }
    return r;
}

void ns_nstablerowview_set_selected(zval *handle, zval *selected)
{
    @autoreleasepool {
        NSTableRowView *v = NS_ARG_AS(NSTableRowView, handle);
        if (v == nil) return;
        [v setSelected:ns_arg_bool(selected)];
    }
}

zend_long ns_nstablerowview_is_previous_row_selected(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSTableRowView *v = NS_ARG_AS(NSTableRowView, handle);
        r = (v != nil && [v isPreviousRowSelected]) ? 1 : 0;
    }
    return r;
}

void ns_nstablerowview_set_previous_row_selected(zval *handle, zval *previousRowSelected)
{
    @autoreleasepool {
        NSTableRowView *v = NS_ARG_AS(NSTableRowView, handle);
        if (v == nil) return;
        [v setPreviousRowSelected:ns_arg_bool(previousRowSelected)];
    }
}

zend_long ns_nstablerowview_is_next_row_selected(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSTableRowView *v = NS_ARG_AS(NSTableRowView, handle);
        r = (v != nil && [v isNextRowSelected]) ? 1 : 0;
    }
    return r;
}

void ns_nstablerowview_set_next_row_selected(zval *handle, zval *nextRowSelected)
{
    @autoreleasepool {
        NSTableRowView *v = NS_ARG_AS(NSTableRowView, handle);
        if (v == nil) return;
        [v setNextRowSelected:ns_arg_bool(nextRowSelected)];
    }
}

zend_long ns_nstablerowview_is_floating(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSTableRowView *v = NS_ARG_AS(NSTableRowView, handle);
        r = (v != nil && [v isFloating]) ? 1 : 0;
    }
    return r;
}

void ns_nstablerowview_set_floating(zval *handle, zval *floating)
{
    @autoreleasepool {
        NSTableRowView *v = NS_ARG_AS(NSTableRowView, handle);
        if (v == nil) return;
        [v setFloating:ns_arg_bool(floating)];
    }
}

zend_long ns_nstablerowview_is_target_for_drop_operation(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSTableRowView *v = NS_ARG_AS(NSTableRowView, handle);
        r = (v != nil && [v isTargetForDropOperation]) ? 1 : 0;
    }
    return r;
}

void ns_nstablerowview_set_target_for_drop_operation(zval *handle, zval *targetForDropOperation)
{
    @autoreleasepool {
        NSTableRowView *v = NS_ARG_AS(NSTableRowView, handle);
        if (v == nil) return;
        [v setTargetForDropOperation:ns_arg_bool(targetForDropOperation)];
    }
}

zend_long ns_nstablerowview_dragging_destination_feedback_style(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSTableRowView *v = NS_ARG_AS(NSTableRowView, handle);
        r = v != nil ? (zend_long) [v draggingDestinationFeedbackStyle] : 0;
    }
    return r;
}

void ns_nstablerowview_set_dragging_destination_feedback_style(zval *handle, zval *draggingDestinationFeedbackStyle)
{
    @autoreleasepool {
        NSTableRowView *v = NS_ARG_AS(NSTableRowView, handle);
        if (v == nil) return;
        [v setDraggingDestinationFeedbackStyle:(NSTableViewDraggingDestinationFeedbackStyle) ns_arg_long(draggingDestinationFeedbackStyle)];
    }
}

double ns_nstablerowview_indentation_for_drop_operation(zval *handle)
{
    double r = 0.0;
    @autoreleasepool {
        NSTableRowView *v = NS_ARG_AS(NSTableRowView, handle);
        r = v != nil ? (double) [v indentationForDropOperation] : 0.0;
    }
    return r;
}

void ns_nstablerowview_set_indentation_for_drop_operation(zval *handle, zval *indentationForDropOperation)
{
    @autoreleasepool {
        NSTableRowView *v = NS_ARG_AS(NSTableRowView, handle);
        if (v == nil) return;
        [v setIndentationForDropOperation:(CGFloat) ns_arg_double(indentationForDropOperation)];
    }
}

zend_long ns_nstablerowview_interior_background_style(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSTableRowView *v = NS_ARG_AS(NSTableRowView, handle);
        r = v != nil ? (zend_long) [v interiorBackgroundStyle] : 0;
    }
    return r;
}

zend_long ns_nstablerowview_background_color(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSTableRowView *v = NS_ARG_AS(NSTableRowView, handle);
        h = ns_handle_for(v != nil ? [v backgroundColor] : nil);
    }
    return h;
}

void ns_nstablerowview_set_background_color(zval *handle, zval *backgroundColor)
{
    @autoreleasepool {
        NSTableRowView *v = NS_ARG_AS(NSTableRowView, handle);
        if (v == nil) return;
        [v setBackgroundColor:NS_ARG_AS(NSColor, backgroundColor)];
    }
}

void ns_nstablerowview_draw_background_in_rect(zval *handle, zval *x, zval *y, zval *width, zval *height)
{
    @autoreleasepool {
        NSTableRowView *v = NS_ARG_AS(NSTableRowView, handle);
        if (v == nil) return;
        [v drawBackgroundInRect:ns_arg_rect(x, y, width, height)];
    }
}

void ns_nstablerowview_draw_selection_in_rect(zval *handle, zval *x, zval *y, zval *width, zval *height)
{
    @autoreleasepool {
        NSTableRowView *v = NS_ARG_AS(NSTableRowView, handle);
        if (v == nil) return;
        [v drawSelectionInRect:ns_arg_rect(x, y, width, height)];
    }
}

void ns_nstablerowview_draw_separator_in_rect(zval *handle, zval *x, zval *y, zval *width, zval *height)
{
    @autoreleasepool {
        NSTableRowView *v = NS_ARG_AS(NSTableRowView, handle);
        if (v == nil) return;
        [v drawSeparatorInRect:ns_arg_rect(x, y, width, height)];
    }
}

void ns_nstablerowview_draw_dragging_destination_feedback_in_rect(zval *handle, zval *x, zval *y, zval *width, zval *height)
{
    @autoreleasepool {
        NSTableRowView *v = NS_ARG_AS(NSTableRowView, handle);
        if (v == nil) return;
        [v drawDraggingDestinationFeedbackInRect:ns_arg_rect(x, y, width, height)];
    }
}

zend_long ns_nstablerowview_view_at_column(zval *handle, zval *column)
{
    zend_long h = 0;
    @autoreleasepool {
        NSTableRowView *v = NS_ARG_AS(NSTableRowView, handle);
        h = ns_handle_for(v != nil ? [v viewAtColumn:(NSInteger) ns_arg_long(column)] : nil);
    }
    return h;
}

zend_long ns_nstablerowview_number_of_columns(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSTableRowView *v = NS_ARG_AS(NSTableRowView, handle);
        r = v != nil ? (zend_long) [v numberOfColumns] : 0;
    }
    return r;
}
