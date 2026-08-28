#include "ns-control.h"
#include "ns-value.h"

/* ====================================================================== */
/* NSControl                                                              */
/* ====================================================================== */

zend_long ns_nscontrol_init_with_frame(zval *x, zval *y, zval *width, zval *height)
{
    @autoreleasepool {
        return ns_handle_for([[NSControl alloc] initWithFrame:ns_arg_rect(x, y, width, height)]);
    }
}

zend_long ns_nscontrol_target(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSControl *c = NS_ARG_AS(NSControl, handle);
        h = ns_handle_for(c != nil ? [c target] : nil);
    }
    return h;
}

void ns_nscontrol_set_target(zval *handle, zval *target)
{
    @autoreleasepool {
        NSControl *c = NS_ARG_AS(NSControl, handle);
        if (c == nil) return;
        [c setTarget:ns_arg_object(target)];
    }
}

void ns_nscontrol_action(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSControl *c = NS_ARG_AS(NSControl, handle);
        ns_ret_sel(return_value, c != nil ? [c action] : NULL);
    }
}

void ns_nscontrol_set_action(zval *handle, zval *action)
{
    @autoreleasepool {
        NSControl *c = NS_ARG_AS(NSControl, handle);
        if (c == nil) return;
        [c setAction:ns_arg_sel(action)];
    }
}

zend_long ns_nscontrol_tag(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSControl *c = NS_ARG_AS(NSControl, handle);
        r = c != nil ? (zend_long) [c tag] : 0;
    }
    return r;
}

void ns_nscontrol_set_tag(zval *handle, zval *tag)
{
    @autoreleasepool {
        NSControl *c = NS_ARG_AS(NSControl, handle);
        if (c == nil) return;
        [c setTag:(NSInteger) ns_arg_long(tag)];
    }
}

zend_long ns_nscontrol_ignores_multi_click(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSControl *c = NS_ARG_AS(NSControl, handle);
        r = (c != nil && [c ignoresMultiClick]) ? 1 : 0;
    }
    return r;
}

void ns_nscontrol_set_ignores_multi_click(zval *handle, zval *ignoresMultiClick)
{
    @autoreleasepool {
        NSControl *c = NS_ARG_AS(NSControl, handle);
        if (c == nil) return;
        [c setIgnoresMultiClick:ns_arg_bool(ignoresMultiClick)];
    }
}

zend_long ns_nscontrol_is_continuous(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSControl *c = NS_ARG_AS(NSControl, handle);
        r = (c != nil && [c isContinuous]) ? 1 : 0;
    }
    return r;
}

void ns_nscontrol_set_continuous(zval *handle, zval *continuous)
{
    @autoreleasepool {
        NSControl *c = NS_ARG_AS(NSControl, handle);
        if (c == nil) return;
        [c setContinuous:ns_arg_bool(continuous)];
    }
}

zend_long ns_nscontrol_is_enabled(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSControl *c = NS_ARG_AS(NSControl, handle);
        r = (c != nil && [c isEnabled]) ? 1 : 0;
    }
    return r;
}

void ns_nscontrol_set_enabled(zval *handle, zval *enabled)
{
    @autoreleasepool {
        NSControl *c = NS_ARG_AS(NSControl, handle);
        if (c == nil) return;
        [c setEnabled:ns_arg_bool(enabled)];
    }
}

zend_long ns_nscontrol_refuses_first_responder(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSControl *c = NS_ARG_AS(NSControl, handle);
        r = (c != nil && [c refusesFirstResponder]) ? 1 : 0;
    }
    return r;
}

void ns_nscontrol_set_refuses_first_responder(zval *handle, zval *refusesFirstResponder)
{
    @autoreleasepool {
        NSControl *c = NS_ARG_AS(NSControl, handle);
        if (c == nil) return;
        [c setRefusesFirstResponder:ns_arg_bool(refusesFirstResponder)];
    }
}

zend_long ns_nscontrol_is_highlighted(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSControl *c = NS_ARG_AS(NSControl, handle);
        r = (c != nil && [c isHighlighted]) ? 1 : 0;
    }
    return r;
}

void ns_nscontrol_set_highlighted(zval *handle, zval *highlighted)
{
    @autoreleasepool {
        NSControl *c = NS_ARG_AS(NSControl, handle);
        if (c == nil) return;
        [c setHighlighted:ns_arg_bool(highlighted)];
    }
}

zend_long ns_nscontrol_control_size(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSControl *c = NS_ARG_AS(NSControl, handle);
        r = c != nil ? (zend_long) [c controlSize] : 0;
    }
    return r;
}

void ns_nscontrol_set_control_size(zval *handle, zval *controlSize)
{
    @autoreleasepool {
        NSControl *c = NS_ARG_AS(NSControl, handle);
        if (c == nil) return;
        [c setControlSize:(NSControlSize) ns_arg_long(controlSize)];
    }
}

zend_long ns_nscontrol_formatter(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSControl *c = NS_ARG_AS(NSControl, handle);
        h = ns_handle_for(c != nil ? [c formatter] : nil);
    }
    return h;
}

void ns_nscontrol_set_formatter(zval *handle, zval *formatter)
{
    @autoreleasepool {
        NSControl *c = NS_ARG_AS(NSControl, handle);
        if (c == nil) return;
        [c setFormatter:NS_ARG_AS(NSFormatter, formatter)];
    }
}

zend_long ns_nscontrol_object_value(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSControl *c = NS_ARG_AS(NSControl, handle);
        h = ns_handle_for(c != nil ? [c objectValue] : nil);
    }
    return h;
}

void ns_nscontrol_set_object_value(zval *handle, zval *objectValue)
{
    @autoreleasepool {
        NSControl *c = NS_ARG_AS(NSControl, handle);
        if (c == nil) return;
        [c setObjectValue:ns_arg_object(objectValue)];
    }
}

void ns_nscontrol_string_value(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSControl *c = NS_ARG_AS(NSControl, handle);
        ns_ret_string(return_value, c != nil ? [c stringValue] : nil);
    }
}

void ns_nscontrol_set_string_value(zval *handle, zval *stringValue)
{
    @autoreleasepool {
        NSControl *c = NS_ARG_AS(NSControl, handle);
        if (c == nil) return;
        [c setStringValue:ns_arg_string(stringValue)];
    }
}

zend_long ns_nscontrol_int_value(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSControl *c = NS_ARG_AS(NSControl, handle);
        r = c != nil ? (zend_long) [c intValue] : 0;
    }
    return r;
}

void ns_nscontrol_set_int_value(zval *handle, zval *intValue)
{
    @autoreleasepool {
        NSControl *c = NS_ARG_AS(NSControl, handle);
        if (c == nil) return;
        [c setIntValue:(int) ns_arg_long(intValue)];
    }
}

zend_long ns_nscontrol_integer_value(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSControl *c = NS_ARG_AS(NSControl, handle);
        r = c != nil ? (zend_long) [c integerValue] : 0;
    }
    return r;
}

void ns_nscontrol_set_integer_value(zval *handle, zval *integerValue)
{
    @autoreleasepool {
        NSControl *c = NS_ARG_AS(NSControl, handle);
        if (c == nil) return;
        [c setIntegerValue:(NSInteger) ns_arg_long(integerValue)];
    }
}

double ns_nscontrol_float_value(zval *handle)
{
    @autoreleasepool {
        NSControl *c = NS_ARG_AS(NSControl, handle);
        if (c == nil) { return 0; }
        return (double) [c floatValue];
    }
}

void ns_nscontrol_set_float_value(zval *handle, zval *floatValue)
{
    @autoreleasepool {
        NSControl *c = NS_ARG_AS(NSControl, handle);
        if (c == nil) return;
        [c setFloatValue:(float) ns_arg_double(floatValue)];
    }
}

double ns_nscontrol_double_value(zval *handle)
{
    @autoreleasepool {
        NSControl *c = NS_ARG_AS(NSControl, handle);
        if (c == nil) { return 0; }
        return [c doubleValue];
    }
}

void ns_nscontrol_set_double_value(zval *handle, zval *doubleValue)
{
    @autoreleasepool {
        NSControl *c = NS_ARG_AS(NSControl, handle);
        if (c == nil) return;
        [c setDoubleValue:ns_arg_double(doubleValue)];
    }
}

void ns_nscontrol_size_that_fits(zval *return_value, zval *handle, zval *width, zval *height)
{
    @autoreleasepool {
        NSControl *c = NS_ARG_AS(NSControl, handle);
        ns_ret_size(return_value, c != nil
            ? [c sizeThatFits:ns_arg_size(width, height)]
            : NSZeroSize);
    }
}

void ns_nscontrol_size_to_fit(zval *handle)
{
    @autoreleasepool {
        NSControl *c = NS_ARG_AS(NSControl, handle);
        if (c == nil) return;
        [c sizeToFit];
    }
}

zend_long ns_nscontrol_send_action_on(zval *handle, zval *mask)
{
    zend_long r = 0;
    @autoreleasepool {
        NSControl *c = NS_ARG_AS(NSControl, handle);
        r = c != nil ? (zend_long) [c sendActionOn:(NSEventMask) ns_arg_long(mask)] : 0;
    }
    return r;
}

zend_long ns_nscontrol_send_action_to(zval *handle, zval *action, zval *target)
{
    zend_long r = 0;
    @autoreleasepool {
        NSControl *c = NS_ARG_AS(NSControl, handle);
        r = (c != nil && [c sendAction:ns_arg_sel(action) to:ns_arg_object(target)]) ? 1 : 0;
    }
    return r;
}

void ns_nscontrol_take_int_value_from(zval *handle, zval *sender)
{
    @autoreleasepool {
        NSControl *c = NS_ARG_AS(NSControl, handle);
        if (c == nil) return;
        [c takeIntValueFrom:ns_arg_object(sender)];
    }
}

void ns_nscontrol_take_float_value_from(zval *handle, zval *sender)
{
    @autoreleasepool {
        NSControl *c = NS_ARG_AS(NSControl, handle);
        if (c == nil) return;
        [c takeFloatValueFrom:ns_arg_object(sender)];
    }
}

void ns_nscontrol_take_double_value_from(zval *handle, zval *sender)
{
    @autoreleasepool {
        NSControl *c = NS_ARG_AS(NSControl, handle);
        if (c == nil) return;
        [c takeDoubleValueFrom:ns_arg_object(sender)];
    }
}

void ns_nscontrol_take_string_value_from(zval *handle, zval *sender)
{
    @autoreleasepool {
        NSControl *c = NS_ARG_AS(NSControl, handle);
        if (c == nil) return;
        [c takeStringValueFrom:ns_arg_object(sender)];
    }
}

void ns_nscontrol_take_object_value_from(zval *handle, zval *sender)
{
    @autoreleasepool {
        NSControl *c = NS_ARG_AS(NSControl, handle);
        if (c == nil) return;
        [c takeObjectValueFrom:ns_arg_object(sender)];
    }
}

void ns_nscontrol_take_integer_value_from(zval *handle, zval *sender)
{
    @autoreleasepool {
        NSControl *c = NS_ARG_AS(NSControl, handle);
        if (c == nil) return;
        [c takeIntegerValueFrom:ns_arg_object(sender)];
    }
}

void ns_nscontrol_mouse_down(zval *handle, zval *event)
{
    @autoreleasepool {
        NSControl *c = NS_ARG_AS(NSControl, handle);
        NSEvent *e = NS_ARG_AS(NSEvent, event);
        if (c == nil || e == nil) return;
        [c mouseDown:e];
    }
}

void ns_nscontrol_perform_click(zval *handle, zval *sender)
{
    @autoreleasepool {
        NSControl *c = NS_ARG_AS(NSControl, handle);
        if (c == nil) return;
        [c performClick:ns_arg_object(sender)];
    }
}

zend_long ns_nscontrol_font(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSControl *c = NS_ARG_AS(NSControl, handle);
        h = ns_handle_for(c != nil ? [c font] : nil);
    }
    return h;
}

void ns_nscontrol_set_font(zval *handle, zval *font)
{
    @autoreleasepool {
        NSControl *c = NS_ARG_AS(NSControl, handle);
        if (c == nil) return;
        [c setFont:NS_ARG_AS(NSFont, font)];
    }
}

zend_long ns_nscontrol_uses_single_line_mode(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSControl *c = NS_ARG_AS(NSControl, handle);
        r = (c != nil && [c usesSingleLineMode]) ? 1 : 0;
    }
    return r;
}

void ns_nscontrol_set_uses_single_line_mode(zval *handle, zval *usesSingleLineMode)
{
    @autoreleasepool {
        NSControl *c = NS_ARG_AS(NSControl, handle);
        if (c == nil) return;
        [c setUsesSingleLineMode:ns_arg_bool(usesSingleLineMode)];
    }
}

zend_long ns_nscontrol_line_break_mode(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSControl *c = NS_ARG_AS(NSControl, handle);
        r = c != nil ? (zend_long) [c lineBreakMode] : 0;
    }
    return r;
}

void ns_nscontrol_set_line_break_mode(zval *handle, zval *lineBreakMode)
{
    @autoreleasepool {
        NSControl *c = NS_ARG_AS(NSControl, handle);
        if (c == nil) return;
        [c setLineBreakMode:(NSLineBreakMode) ns_arg_long(lineBreakMode)];
    }
}

zend_long ns_nscontrol_alignment(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSControl *c = NS_ARG_AS(NSControl, handle);
        r = c != nil ? (zend_long) [c alignment] : 0;
    }
    return r;
}

void ns_nscontrol_set_alignment(zval *handle, zval *alignment)
{
    @autoreleasepool {
        NSControl *c = NS_ARG_AS(NSControl, handle);
        if (c == nil) return;
        [c setAlignment:(NSTextAlignment) ns_arg_long(alignment)];
    }
}

zend_long ns_nscontrol_base_writing_direction(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSControl *c = NS_ARG_AS(NSControl, handle);
        r = c != nil ? (zend_long) [c baseWritingDirection] : 0;
    }
    return r;
}

void ns_nscontrol_set_base_writing_direction(zval *handle, zval *baseWritingDirection)
{
    @autoreleasepool {
        NSControl *c = NS_ARG_AS(NSControl, handle);
        if (c == nil) return;
        [c setBaseWritingDirection:(NSWritingDirection) ns_arg_long(baseWritingDirection)];
    }
}

zend_long ns_nscontrol_allows_expansion_tool_tips(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSControl *c = NS_ARG_AS(NSControl, handle);
        r = (c != nil && [c allowsExpansionToolTips]) ? 1 : 0;
    }
    return r;
}

void ns_nscontrol_set_allows_expansion_tool_tips(zval *handle, zval *allowsExpansionToolTips)
{
    @autoreleasepool {
        NSControl *c = NS_ARG_AS(NSControl, handle);
        if (c == nil) return;
        [c setAllowsExpansionToolTips:ns_arg_bool(allowsExpansionToolTips)];
    }
}

void ns_nscontrol_expansion_frame_with_frame(zval *return_value, zval *handle, zval *x, zval *y, zval *width, zval *height)
{
    @autoreleasepool {
        NSControl *c = NS_ARG_AS(NSControl, handle);
        ns_ret_rect(return_value, c != nil
            ? [c expansionFrameWithFrame:ns_arg_rect(x, y, width, height)]
            : NSZeroRect);
    }
}

void ns_nscontrol_draw_with_expansion_frame_in_view(zval *handle, zval *x, zval *y, zval *width, zval *height, zval *view)
{
    @autoreleasepool {
        NSControl *c = NS_ARG_AS(NSControl, handle);
        if (c == nil) return;
        [c drawWithExpansionFrame:ns_arg_rect(x, y, width, height) inView:NS_ARG_AS(NSView, view)];
    }
}

/* ====================================================================== */
/* NSControlEditableTextMethods                                           */
/* ====================================================================== */

zend_long ns_nscontrol_current_editor(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSControl *c = NS_ARG_AS(NSControl, handle);
        h = ns_handle_for(c != nil ? [c currentEditor] : nil);
    }
    return h;
}

zend_long ns_nscontrol_abort_editing(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSControl *c = NS_ARG_AS(NSControl, handle);
        r = (c != nil && [c abortEditing]) ? 1 : 0;
    }
    return r;
}

void ns_nscontrol_validate_editing(zval *handle)
{
    @autoreleasepool {
        NSControl *c = NS_ARG_AS(NSControl, handle);
        if (c == nil) return;
        [c validateEditing];
    }
}

void ns_nscontrol_edit_with_frame_editor_delegate_event(zval *handle, zval *x, zval *y, zval *width, zval *height, zval *textObj, zval *delegate, zval *event)
{
    @autoreleasepool {
        NSControl *c = NS_ARG_AS(NSControl, handle);
        if (c == nil) return;
        [c editWithFrame:ns_arg_rect(x, y, width, height)
                  editor:NS_ARG_AS(NSText, textObj)
                delegate:ns_arg_object(delegate)
                   event:NS_ARG_AS(NSEvent, event)];
    }
}

void ns_nscontrol_select_with_frame_editor_delegate_start_length(zval *handle, zval *x, zval *y, zval *width, zval *height, zval *textObj, zval *delegate, zval *start, zval *length)
{
    @autoreleasepool {
        NSControl *c = NS_ARG_AS(NSControl, handle);
        if (c == nil) return;
        [c selectWithFrame:ns_arg_rect(x, y, width, height)
                    editor:NS_ARG_AS(NSText, textObj)
                  delegate:ns_arg_object(delegate)
                     start:(NSInteger) ns_arg_long(start)
                    length:(NSInteger) ns_arg_long(length)];
    }
}

void ns_nscontrol_end_editing(zval *handle, zval *textObj)
{
    @autoreleasepool {
        NSControl *c = NS_ARG_AS(NSControl, handle);
        if (c == nil) return;
        [c endEditing:NS_ARG_AS(NSText, textObj)];
    }
}

/* ====================================================================== */
/* NSDeprecated (soft-deprecated members stay bound)                      */
/* ====================================================================== */

zend_long ns_nscontrol_cell(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSControl *c = NS_ARG_AS(NSControl, handle);
        h = ns_handle_for(c != nil ? [c cell] : nil);
    }
    return h;
}

void ns_nscontrol_set_cell(zval *handle, zval *cell)
{
    @autoreleasepool {
        NSControl *c = NS_ARG_AS(NSControl, handle);
        if (c == nil) return;
        [c setCell:NS_ARG_AS(NSCell, cell)];
    }
}

zend_long ns_nscontrol_selected_cell(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSControl *c = NS_ARG_AS(NSControl, handle);
        h = ns_handle_for(c != nil ? [c selectedCell] : nil);
    }
    return h;
}

zend_long ns_nscontrol_selected_tag(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSControl *c = NS_ARG_AS(NSControl, handle);
        r = c != nil ? (zend_long) [c selectedTag] : 0;
    }
    return r;
}

void ns_nscontrol_update_cell(zval *handle, zval *cell)
{
    @autoreleasepool {
        NSControl *c = NS_ARG_AS(NSControl, handle);
        if (c == nil) return;
        [c updateCell:NS_ARG_AS(NSCell, cell)];
    }
}

void ns_nscontrol_update_cell_inside(zval *handle, zval *cell)
{
    @autoreleasepool {
        NSControl *c = NS_ARG_AS(NSControl, handle);
        if (c == nil) return;
        [c updateCellInside:NS_ARG_AS(NSCell, cell)];
    }
}

void ns_nscontrol_draw_cell_inside(zval *handle, zval *cell)
{
    @autoreleasepool {
        NSControl *c = NS_ARG_AS(NSControl, handle);
        if (c == nil) return;
        [c drawCellInside:NS_ARG_AS(NSCell, cell)];
    }
}

void ns_nscontrol_draw_cell(zval *handle, zval *cell)
{
    @autoreleasepool {
        NSControl *c = NS_ARG_AS(NSControl, handle);
        if (c == nil) return;
        [c drawCell:NS_ARG_AS(NSCell, cell)];
    }
}

void ns_nscontrol_select_cell(zval *handle, zval *cell)
{
    @autoreleasepool {
        NSControl *c = NS_ARG_AS(NSControl, handle);
        if (c == nil) return;
        [c selectCell:NS_ARG_AS(NSCell, cell)];
    }
}
