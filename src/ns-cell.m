#include "ns-cell.h"
#include "ns-value.h"

/* ====================================================================== */
/* NSCell                                                                 */
/* ====================================================================== */

zend_long ns_nscell_init(void)
{
    @autoreleasepool {
        return ns_handle_for([[NSCell alloc] init]);
    }
}

zend_long ns_nscell_init_text_cell(zval *string_)
{
    @autoreleasepool {
        return ns_handle_for([[NSCell alloc] initTextCell:ns_arg_string(string_)]);
    }
}

zend_long ns_nscell_init_image_cell(zval *image)
{
    @autoreleasepool {
        return ns_handle_for([[NSCell alloc] initImageCell:NS_ARG_AS(NSImage, image)]);
    }
}

zend_long ns_nscell_prefers_tracking_until_mouse_up(void)
{
    zend_long r = 0;
    @autoreleasepool {
        r = [NSCell prefersTrackingUntilMouseUp] ? 1 : 0;
    }
    return r;
}

zend_long ns_nscell_control_view(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSCell *c = NS_ARG_AS(NSCell, handle);
        h = ns_handle_for(c != nil ? [c controlView] : nil);
    }
    return h;
}

void ns_nscell_set_control_view(zval *handle, zval *controlView)
{
    @autoreleasepool {
        NSCell *c = NS_ARG_AS(NSCell, handle);
        if (c == nil) return;
        [c setControlView:NS_ARG_AS(NSView, controlView)];
    }
}

zend_long ns_nscell_type(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSCell *c = NS_ARG_AS(NSCell, handle);
        r = c != nil ? (zend_long) [c type] : 0;
    }
    return r;
}

void ns_nscell_set_type(zval *handle, zval *type)
{
    @autoreleasepool {
        NSCell *c = NS_ARG_AS(NSCell, handle);
        if (c == nil) return;
        [c setType:(NSCellType) ns_arg_long(type)];
    }
}

zend_long ns_nscell_state(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSCell *c = NS_ARG_AS(NSCell, handle);
        r = c != nil ? (zend_long) [c state] : 0;
    }
    return r;
}

void ns_nscell_set_state(zval *handle, zval *state)
{
    @autoreleasepool {
        NSCell *c = NS_ARG_AS(NSCell, handle);
        if (c == nil) return;
        [c setState:(NSControlStateValue) ns_arg_long(state)];
    }
}

zend_long ns_nscell_target(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSCell *c = NS_ARG_AS(NSCell, handle);
        h = ns_handle_for(c != nil ? [c target] : nil);
    }
    return h;
}

void ns_nscell_set_target(zval *handle, zval *target)
{
    @autoreleasepool {
        NSCell *c = NS_ARG_AS(NSCell, handle);
        if (c == nil) return;
        [c setTarget:ns_arg_object(target)];
    }
}

void ns_nscell_action(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSCell *c = NS_ARG_AS(NSCell, handle);
        ns_ret_sel(return_value, c != nil ? [c action] : NULL);
    }
}

void ns_nscell_set_action(zval *handle, zval *action)
{
    @autoreleasepool {
        NSCell *c = NS_ARG_AS(NSCell, handle);
        if (c == nil) return;
        [c setAction:ns_arg_sel(action)];
    }
}

zend_long ns_nscell_tag(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSCell *c = NS_ARG_AS(NSCell, handle);
        r = c != nil ? (zend_long) [c tag] : 0;
    }
    return r;
}

void ns_nscell_set_tag(zval *handle, zval *tag)
{
    @autoreleasepool {
        NSCell *c = NS_ARG_AS(NSCell, handle);
        if (c == nil) return;
        [c setTag:(NSInteger) ns_arg_long(tag)];
    }
}

void ns_nscell_title(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSCell *c = NS_ARG_AS(NSCell, handle);
        ns_ret_string(return_value, c != nil ? [c title] : nil);
    }
}

void ns_nscell_set_title(zval *handle, zval *title)
{
    @autoreleasepool {
        NSCell *c = NS_ARG_AS(NSCell, handle);
        if (c == nil) return;
        [c setTitle:ns_arg_string(title)];
    }
}

zend_long ns_nscell_is_opaque(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSCell *c = NS_ARG_AS(NSCell, handle);
        r = (c != nil && [c isOpaque]) ? 1 : 0;
    }
    return r;
}

zend_long ns_nscell_is_enabled(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSCell *c = NS_ARG_AS(NSCell, handle);
        r = (c != nil && [c isEnabled]) ? 1 : 0;
    }
    return r;
}

void ns_nscell_set_enabled(zval *handle, zval *enabled)
{
    @autoreleasepool {
        NSCell *c = NS_ARG_AS(NSCell, handle);
        if (c == nil) return;
        [c setEnabled:ns_arg_bool(enabled)];
    }
}

zend_long ns_nscell_send_action_on(zval *handle, zval *mask)
{
    zend_long r = 0;
    @autoreleasepool {
        NSCell *c = NS_ARG_AS(NSCell, handle);
        r = c != nil ? (zend_long) [c sendActionOn:(NSEventMask) ns_arg_long(mask)] : 0;
    }
    return r;
}

zend_long ns_nscell_is_continuous(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSCell *c = NS_ARG_AS(NSCell, handle);
        r = (c != nil && [c isContinuous]) ? 1 : 0;
    }
    return r;
}

void ns_nscell_set_continuous(zval *handle, zval *continuous)
{
    @autoreleasepool {
        NSCell *c = NS_ARG_AS(NSCell, handle);
        if (c == nil) return;
        [c setContinuous:ns_arg_bool(continuous)];
    }
}

zend_long ns_nscell_is_editable(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSCell *c = NS_ARG_AS(NSCell, handle);
        r = (c != nil && [c isEditable]) ? 1 : 0;
    }
    return r;
}

void ns_nscell_set_editable(zval *handle, zval *editable)
{
    @autoreleasepool {
        NSCell *c = NS_ARG_AS(NSCell, handle);
        if (c == nil) return;
        [c setEditable:ns_arg_bool(editable)];
    }
}

zend_long ns_nscell_is_selectable(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSCell *c = NS_ARG_AS(NSCell, handle);
        r = (c != nil && [c isSelectable]) ? 1 : 0;
    }
    return r;
}

void ns_nscell_set_selectable(zval *handle, zval *selectable)
{
    @autoreleasepool {
        NSCell *c = NS_ARG_AS(NSCell, handle);
        if (c == nil) return;
        [c setSelectable:ns_arg_bool(selectable)];
    }
}

zend_long ns_nscell_is_bordered(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSCell *c = NS_ARG_AS(NSCell, handle);
        r = (c != nil && [c isBordered]) ? 1 : 0;
    }
    return r;
}

void ns_nscell_set_bordered(zval *handle, zval *bordered)
{
    @autoreleasepool {
        NSCell *c = NS_ARG_AS(NSCell, handle);
        if (c == nil) return;
        [c setBordered:ns_arg_bool(bordered)];
    }
}

zend_long ns_nscell_is_bezeled(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSCell *c = NS_ARG_AS(NSCell, handle);
        r = (c != nil && [c isBezeled]) ? 1 : 0;
    }
    return r;
}

void ns_nscell_set_bezeled(zval *handle, zval *bezeled)
{
    @autoreleasepool {
        NSCell *c = NS_ARG_AS(NSCell, handle);
        if (c == nil) return;
        [c setBezeled:ns_arg_bool(bezeled)];
    }
}

zend_long ns_nscell_is_scrollable(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSCell *c = NS_ARG_AS(NSCell, handle);
        r = (c != nil && [c isScrollable]) ? 1 : 0;
    }
    return r;
}

void ns_nscell_set_scrollable(zval *handle, zval *scrollable)
{
    @autoreleasepool {
        NSCell *c = NS_ARG_AS(NSCell, handle);
        if (c == nil) return;
        [c setScrollable:ns_arg_bool(scrollable)];
    }
}

zend_long ns_nscell_is_highlighted(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSCell *c = NS_ARG_AS(NSCell, handle);
        r = (c != nil && [c isHighlighted]) ? 1 : 0;
    }
    return r;
}

void ns_nscell_set_highlighted(zval *handle, zval *highlighted)
{
    @autoreleasepool {
        NSCell *c = NS_ARG_AS(NSCell, handle);
        if (c == nil) return;
        [c setHighlighted:ns_arg_bool(highlighted)];
    }
}

zend_long ns_nscell_alignment(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSCell *c = NS_ARG_AS(NSCell, handle);
        r = c != nil ? (zend_long) [c alignment] : 0;
    }
    return r;
}

void ns_nscell_set_alignment(zval *handle, zval *alignment)
{
    @autoreleasepool {
        NSCell *c = NS_ARG_AS(NSCell, handle);
        if (c == nil) return;
        [c setAlignment:(NSTextAlignment) ns_arg_long(alignment)];
    }
}

zend_long ns_nscell_wraps(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSCell *c = NS_ARG_AS(NSCell, handle);
        r = (c != nil && [c wraps]) ? 1 : 0;
    }
    return r;
}

void ns_nscell_set_wraps(zval *handle, zval *wraps)
{
    @autoreleasepool {
        NSCell *c = NS_ARG_AS(NSCell, handle);
        if (c == nil) return;
        [c setWraps:ns_arg_bool(wraps)];
    }
}

zend_long ns_nscell_font(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSCell *c = NS_ARG_AS(NSCell, handle);
        h = ns_handle_for(c != nil ? [c font] : nil);
    }
    return h;
}

void ns_nscell_set_font(zval *handle, zval *font)
{
    @autoreleasepool {
        NSCell *c = NS_ARG_AS(NSCell, handle);
        if (c == nil) return;
        [c setFont:NS_ARG_AS(NSFont, font)];
    }
}

void ns_nscell_key_equivalent(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSCell *c = NS_ARG_AS(NSCell, handle);
        ns_ret_string(return_value, c != nil ? [c keyEquivalent] : nil);
    }
}

zend_long ns_nscell_formatter(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSCell *c = NS_ARG_AS(NSCell, handle);
        h = ns_handle_for(c != nil ? [c formatter] : nil);
    }
    return h;
}

void ns_nscell_set_formatter(zval *handle, zval *formatter)
{
    @autoreleasepool {
        NSCell *c = NS_ARG_AS(NSCell, handle);
        if (c == nil) return;
        [c setFormatter:NS_ARG_AS(NSFormatter, formatter)];
    }
}

zend_long ns_nscell_object_value(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSCell *c = NS_ARG_AS(NSCell, handle);
        h = ns_handle_for(c != nil ? [c objectValue] : nil);
    }
    return h;
}

void ns_nscell_set_object_value(zval *handle, zval *objectValue)
{
    @autoreleasepool {
        NSCell *c = NS_ARG_AS(NSCell, handle);
        if (c == nil) return;
        [c setObjectValue:ns_arg_object(objectValue)];
    }
}

zend_long ns_nscell_has_valid_object_value(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSCell *c = NS_ARG_AS(NSCell, handle);
        r = (c != nil && [c hasValidObjectValue]) ? 1 : 0;
    }
    return r;
}

void ns_nscell_string_value(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSCell *c = NS_ARG_AS(NSCell, handle);
        ns_ret_string(return_value, c != nil ? [c stringValue] : nil);
    }
}

void ns_nscell_set_string_value(zval *handle, zval *stringValue)
{
    @autoreleasepool {
        NSCell *c = NS_ARG_AS(NSCell, handle);
        if (c == nil) return;
        [c setStringValue:ns_arg_string(stringValue)];
    }
}

zend_long ns_nscell_compare(zval *handle, zval *otherCell)
{
    zend_long r = 0;
    @autoreleasepool {
        NSCell *c = NS_ARG_AS(NSCell, handle);
        r = c != nil ? (zend_long) [c compare:ns_arg_object(otherCell)] : 0;
    }
    return r;
}

zend_long ns_nscell_int_value(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSCell *c = NS_ARG_AS(NSCell, handle);
        r = c != nil ? (zend_long) [c intValue] : 0;
    }
    return r;
}

void ns_nscell_set_int_value(zval *handle, zval *intValue)
{
    @autoreleasepool {
        NSCell *c = NS_ARG_AS(NSCell, handle);
        if (c == nil) return;
        [c setIntValue:(int) ns_arg_long(intValue)];
    }
}

double ns_nscell_float_value(zval *handle)
{
    @autoreleasepool {
        NSCell *c = NS_ARG_AS(NSCell, handle);
        if (c == nil) { return 0; }
        return (double) [c floatValue];
    }
}

void ns_nscell_set_float_value(zval *handle, zval *floatValue)
{
    @autoreleasepool {
        NSCell *c = NS_ARG_AS(NSCell, handle);
        if (c == nil) return;
        [c setFloatValue:(float) ns_arg_double(floatValue)];
    }
}

double ns_nscell_double_value(zval *handle)
{
    @autoreleasepool {
        NSCell *c = NS_ARG_AS(NSCell, handle);
        if (c == nil) { return 0; }
        return [c doubleValue];
    }
}

void ns_nscell_set_double_value(zval *handle, zval *doubleValue)
{
    @autoreleasepool {
        NSCell *c = NS_ARG_AS(NSCell, handle);
        if (c == nil) return;
        [c setDoubleValue:ns_arg_double(doubleValue)];
    }
}

zend_long ns_nscell_integer_value(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSCell *c = NS_ARG_AS(NSCell, handle);
        r = c != nil ? (zend_long) [c integerValue] : 0;
    }
    return r;
}

void ns_nscell_set_integer_value(zval *handle, zval *integerValue)
{
    @autoreleasepool {
        NSCell *c = NS_ARG_AS(NSCell, handle);
        if (c == nil) return;
        [c setIntegerValue:(NSInteger) ns_arg_long(integerValue)];
    }
}

void ns_nscell_take_int_value_from(zval *handle, zval *sender)
{
    @autoreleasepool {
        NSCell *c = NS_ARG_AS(NSCell, handle);
        if (c == nil) return;
        [c takeIntValueFrom:ns_arg_object(sender)];
    }
}

void ns_nscell_take_float_value_from(zval *handle, zval *sender)
{
    @autoreleasepool {
        NSCell *c = NS_ARG_AS(NSCell, handle);
        if (c == nil) return;
        [c takeFloatValueFrom:ns_arg_object(sender)];
    }
}

void ns_nscell_take_double_value_from(zval *handle, zval *sender)
{
    @autoreleasepool {
        NSCell *c = NS_ARG_AS(NSCell, handle);
        if (c == nil) return;
        [c takeDoubleValueFrom:ns_arg_object(sender)];
    }
}

void ns_nscell_take_string_value_from(zval *handle, zval *sender)
{
    @autoreleasepool {
        NSCell *c = NS_ARG_AS(NSCell, handle);
        if (c == nil) return;
        [c takeStringValueFrom:ns_arg_object(sender)];
    }
}

void ns_nscell_take_object_value_from(zval *handle, zval *sender)
{
    @autoreleasepool {
        NSCell *c = NS_ARG_AS(NSCell, handle);
        if (c == nil) return;
        [c takeObjectValueFrom:ns_arg_object(sender)];
    }
}

void ns_nscell_take_integer_value_from(zval *handle, zval *sender)
{
    @autoreleasepool {
        NSCell *c = NS_ARG_AS(NSCell, handle);
        if (c == nil) return;
        [c takeIntegerValueFrom:ns_arg_object(sender)];
    }
}

zend_long ns_nscell_image(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSCell *c = NS_ARG_AS(NSCell, handle);
        h = ns_handle_for(c != nil ? [c image] : nil);
    }
    return h;
}

void ns_nscell_set_image(zval *handle, zval *image)
{
    @autoreleasepool {
        NSCell *c = NS_ARG_AS(NSCell, handle);
        if (c == nil) return;
        [c setImage:NS_ARG_AS(NSImage, image)];
    }
}

zend_long ns_nscell_control_size(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSCell *c = NS_ARG_AS(NSCell, handle);
        r = c != nil ? (zend_long) [c controlSize] : 0;
    }
    return r;
}

void ns_nscell_set_control_size(zval *handle, zval *controlSize)
{
    @autoreleasepool {
        NSCell *c = NS_ARG_AS(NSCell, handle);
        if (c == nil) return;
        [c setControlSize:(NSControlSize) ns_arg_long(controlSize)];
    }
}

zend_long ns_nscell_represented_object(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSCell *c = NS_ARG_AS(NSCell, handle);
        h = ns_handle_for(c != nil ? [c representedObject] : nil);
    }
    return h;
}

void ns_nscell_set_represented_object(zval *handle, zval *representedObject)
{
    @autoreleasepool {
        NSCell *c = NS_ARG_AS(NSCell, handle);
        if (c == nil) return;
        [c setRepresentedObject:ns_arg_object(representedObject)];
    }
}

zend_long ns_nscell_cell_attribute(zval *handle, zval *parameter)
{
    zend_long r = 0;
    @autoreleasepool {
        NSCell *c = NS_ARG_AS(NSCell, handle);
        r = c != nil ? (zend_long) [c cellAttribute:(NSCellAttribute) ns_arg_long(parameter)] : 0;
    }
    return r;
}

void ns_nscell_set_cell_attribute_to(zval *handle, zval *parameter, zval *value)
{
    @autoreleasepool {
        NSCell *c = NS_ARG_AS(NSCell, handle);
        if (c == nil) return;
        [c setCellAttribute:(NSCellAttribute) ns_arg_long(parameter) to:(NSInteger) ns_arg_long(value)];
    }
}

void ns_nscell_image_rect_for_bounds(zval *return_value, zval *handle, zval *x, zval *y, zval *width, zval *height)
{
    @autoreleasepool {
        NSCell *c = NS_ARG_AS(NSCell, handle);
        ns_ret_rect(return_value, c != nil
            ? [c imageRectForBounds:ns_arg_rect(x, y, width, height)]
            : NSZeroRect);
    }
}

void ns_nscell_title_rect_for_bounds(zval *return_value, zval *handle, zval *x, zval *y, zval *width, zval *height)
{
    @autoreleasepool {
        NSCell *c = NS_ARG_AS(NSCell, handle);
        ns_ret_rect(return_value, c != nil
            ? [c titleRectForBounds:ns_arg_rect(x, y, width, height)]
            : NSZeroRect);
    }
}

void ns_nscell_drawing_rect_for_bounds(zval *return_value, zval *handle, zval *x, zval *y, zval *width, zval *height)
{
    @autoreleasepool {
        NSCell *c = NS_ARG_AS(NSCell, handle);
        ns_ret_rect(return_value, c != nil
            ? [c drawingRectForBounds:ns_arg_rect(x, y, width, height)]
            : NSZeroRect);
    }
}

void ns_nscell_cell_size(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSCell *c = NS_ARG_AS(NSCell, handle);
        ns_ret_size(return_value, c != nil ? [c cellSize] : NSZeroSize);
    }
}

void ns_nscell_cell_size_for_bounds(zval *return_value, zval *handle, zval *x, zval *y, zval *width, zval *height)
{
    @autoreleasepool {
        NSCell *c = NS_ARG_AS(NSCell, handle);
        ns_ret_size(return_value, c != nil
            ? [c cellSizeForBounds:ns_arg_rect(x, y, width, height)]
            : NSZeroSize);
    }
}

zend_long ns_nscell_highlight_color_with_frame_in_view(zval *handle, zval *x, zval *y, zval *width, zval *height, zval *controlView)
{
    zend_long h = 0;
    @autoreleasepool {
        NSCell *c = NS_ARG_AS(NSCell, handle);
        h = ns_handle_for(c != nil
            ? [c highlightColorWithFrame:ns_arg_rect(x, y, width, height) inView:NS_ARG_AS(NSView, controlView)]
            : nil);
    }
    return h;
}

void ns_nscell_calc_draw_info(zval *handle, zval *x, zval *y, zval *width, zval *height)
{
    @autoreleasepool {
        NSCell *c = NS_ARG_AS(NSCell, handle);
        if (c == nil) return;
        [c calcDrawInfo:ns_arg_rect(x, y, width, height)];
    }
}

zend_long ns_nscell_set_up_field_editor_attributes(zval *handle, zval *textObj)
{
    zend_long h = 0;
    @autoreleasepool {
        NSCell *c = NS_ARG_AS(NSCell, handle);
        h = ns_handle_for(c != nil
            ? [c setUpFieldEditorAttributes:NS_ARG_AS(NSText, textObj)]
            : nil);
    }
    return h;
}

void ns_nscell_draw_interior_with_frame_in_view(zval *handle, zval *x, zval *y, zval *width, zval *height, zval *controlView)
{
    @autoreleasepool {
        NSCell *c = NS_ARG_AS(NSCell, handle);
        if (c == nil) return;
        [c drawInteriorWithFrame:ns_arg_rect(x, y, width, height) inView:NS_ARG_AS(NSView, controlView)];
    }
}

void ns_nscell_draw_with_frame_in_view(zval *handle, zval *x, zval *y, zval *width, zval *height, zval *controlView)
{
    @autoreleasepool {
        NSCell *c = NS_ARG_AS(NSCell, handle);
        if (c == nil) return;
        [c drawWithFrame:ns_arg_rect(x, y, width, height) inView:NS_ARG_AS(NSView, controlView)];
    }
}

void ns_nscell_highlight_with_frame_in_view(zval *handle, zval *flag, zval *x, zval *y, zval *width, zval *height, zval *controlView)
{
    @autoreleasepool {
        NSCell *c = NS_ARG_AS(NSCell, handle);
        if (c == nil) return;
        [c highlight:ns_arg_bool(flag) withFrame:ns_arg_rect(x, y, width, height) inView:NS_ARG_AS(NSView, controlView)];
    }
}

zend_long ns_nscell_mouse_down_flags(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSCell *c = NS_ARG_AS(NSCell, handle);
        r = c != nil ? (zend_long) [c mouseDownFlags] : 0;
    }
    return r;
}

void ns_nscell_get_periodic_delay_interval(zval *return_value, zval *handle)
{
    @autoreleasepool {
        float delay = 0.0f, interval = 0.0f;
        NSCell *c = NS_ARG_AS(NSCell, handle);
        if (c != nil) {
            [c getPeriodicDelay:&delay interval:&interval];
        }
        array_init_size(return_value, 2);
        add_assoc_double(return_value, "delay", (double) delay);
        add_assoc_double(return_value, "interval", (double) interval);
    }
}

zend_long ns_nscell_start_tracking_at_in_view(zval *handle, zval *startX, zval *startY, zval *controlView)
{
    zend_long r = 0;
    @autoreleasepool {
        NSCell *c = NS_ARG_AS(NSCell, handle);
        r = (c != nil && [c startTrackingAt:ns_arg_point(startX, startY) inView:NS_ARG_AS(NSView, controlView)]) ? 1 : 0;
    }
    return r;
}

zend_long ns_nscell_continue_tracking_at_in_view(zval *handle, zval *lastX, zval *lastY, zval *currentX, zval *currentY, zval *controlView)
{
    zend_long r = 0;
    @autoreleasepool {
        NSCell *c = NS_ARG_AS(NSCell, handle);
        r = (c != nil && [c continueTracking:ns_arg_point(lastX, lastY) at:ns_arg_point(currentX, currentY) inView:NS_ARG_AS(NSView, controlView)]) ? 1 : 0;
    }
    return r;
}

void ns_nscell_stop_tracking_at_in_view_mouse_is_up(zval *handle, zval *lastX, zval *lastY, zval *stopX, zval *stopY, zval *controlView, zval *flag)
{
    @autoreleasepool {
        NSCell *c = NS_ARG_AS(NSCell, handle);
        if (c == nil) return;
        [c stopTracking:ns_arg_point(lastX, lastY) at:ns_arg_point(stopX, stopY) inView:NS_ARG_AS(NSView, controlView) mouseIsUp:ns_arg_bool(flag)];
    }
}

zend_long ns_nscell_track_mouse_in_rect_of_view_until_mouse_up(zval *handle, zval *event, zval *x, zval *y, zval *width, zval *height, zval *controlView, zval *flag)
{
    zend_long r = 0;
    @autoreleasepool {
        NSCell *c = NS_ARG_AS(NSCell, handle);
        r = (c != nil && [c trackMouse:NS_ARG_AS(NSEvent, event) inRect:ns_arg_rect(x, y, width, height) ofView:NS_ARG_AS(NSView, controlView) untilMouseUp:ns_arg_bool(flag)]) ? 1 : 0;
    }
    return r;
}

void ns_nscell_edit_with_frame_in_view_editor_delegate_event(zval *handle, zval *x, zval *y, zval *width, zval *height, zval *controlView, zval *textObj, zval *delegate, zval *event)
{
    @autoreleasepool {
        NSCell *c = NS_ARG_AS(NSCell, handle);
        if (c == nil) return;
        [c editWithFrame:ns_arg_rect(x, y, width, height)
                  inView:NS_ARG_AS(NSView, controlView)
                  editor:NS_ARG_AS(NSText, textObj)
                delegate:ns_arg_object(delegate)
                   event:NS_ARG_AS(NSEvent, event)];
    }
}

void ns_nscell_select_with_frame_in_view_editor_delegate_start_length(zval *handle, zval *x, zval *y, zval *width, zval *height, zval *controlView, zval *textObj, zval *delegate, zval *start, zval *length)
{
    @autoreleasepool {
        NSCell *c = NS_ARG_AS(NSCell, handle);
        if (c == nil) return;
        [c selectWithFrame:ns_arg_rect(x, y, width, height)
                    inView:NS_ARG_AS(NSView, controlView)
                    editor:NS_ARG_AS(NSText, textObj)
                  delegate:ns_arg_object(delegate)
                     start:(NSInteger) ns_arg_long(start)
                    length:(NSInteger) ns_arg_long(length)];
    }
}

void ns_nscell_end_editing(zval *handle, zval *textObj)
{
    @autoreleasepool {
        NSCell *c = NS_ARG_AS(NSCell, handle);
        if (c == nil) return;
        [c endEditing:NS_ARG_AS(NSText, textObj)];
    }
}

void ns_nscell_reset_cursor_rect_in_view(zval *handle, zval *x, zval *y, zval *width, zval *height, zval *controlView)
{
    @autoreleasepool {
        NSCell *c = NS_ARG_AS(NSCell, handle);
        if (c == nil) return;
        [c resetCursorRect:ns_arg_rect(x, y, width, height) inView:NS_ARG_AS(NSView, controlView)];
    }
}

zend_long ns_nscell_menu(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSCell *c = NS_ARG_AS(NSCell, handle);
        h = ns_handle_for(c != nil ? [c menu] : nil);
    }
    return h;
}

void ns_nscell_set_menu(zval *handle, zval *menu)
{
    @autoreleasepool {
        NSCell *c = NS_ARG_AS(NSCell, handle);
        if (c == nil) return;
        [c setMenu:NS_ARG_AS(NSMenu, menu)];
    }
}

zend_long ns_nscell_menu_for_event_in_rect_of_view(zval *handle, zval *event, zval *x, zval *y, zval *width, zval *height, zval *view)
{
    zend_long h = 0;
    @autoreleasepool {
        NSCell *c = NS_ARG_AS(NSCell, handle);
        h = ns_handle_for(c != nil
            ? [c menuForEvent:NS_ARG_AS(NSEvent, event) inRect:ns_arg_rect(x, y, width, height) ofView:NS_ARG_AS(NSView, view)]
            : nil);
    }
    return h;
}

zend_long ns_nscell_default_menu(void)
{
    @autoreleasepool {
        return ns_handle_for([NSCell defaultMenu]);
    }
}

zend_long ns_nscell_sends_action_on_end_editing(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSCell *c = NS_ARG_AS(NSCell, handle);
        r = (c != nil && [c sendsActionOnEndEditing]) ? 1 : 0;
    }
    return r;
}

void ns_nscell_set_sends_action_on_end_editing(zval *handle, zval *sendsActionOnEndEditing)
{
    @autoreleasepool {
        NSCell *c = NS_ARG_AS(NSCell, handle);
        if (c == nil) return;
        [c setSendsActionOnEndEditing:ns_arg_bool(sendsActionOnEndEditing)];
    }
}

zend_long ns_nscell_base_writing_direction(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSCell *c = NS_ARG_AS(NSCell, handle);
        r = c != nil ? (zend_long) [c baseWritingDirection] : 0;
    }
    return r;
}

void ns_nscell_set_base_writing_direction(zval *handle, zval *baseWritingDirection)
{
    @autoreleasepool {
        NSCell *c = NS_ARG_AS(NSCell, handle);
        if (c == nil) return;
        [c setBaseWritingDirection:(NSWritingDirection) ns_arg_long(baseWritingDirection)];
    }
}

zend_long ns_nscell_line_break_mode(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSCell *c = NS_ARG_AS(NSCell, handle);
        r = c != nil ? (zend_long) [c lineBreakMode] : 0;
    }
    return r;
}

void ns_nscell_set_line_break_mode(zval *handle, zval *lineBreakMode)
{
    @autoreleasepool {
        NSCell *c = NS_ARG_AS(NSCell, handle);
        if (c == nil) return;
        [c setLineBreakMode:(NSLineBreakMode) ns_arg_long(lineBreakMode)];
    }
}

zend_long ns_nscell_allows_undo(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSCell *c = NS_ARG_AS(NSCell, handle);
        r = (c != nil && [c allowsUndo]) ? 1 : 0;
    }
    return r;
}

void ns_nscell_set_allows_undo(zval *handle, zval *allowsUndo)
{
    @autoreleasepool {
        NSCell *c = NS_ARG_AS(NSCell, handle);
        if (c == nil) return;
        [c setAllowsUndo:ns_arg_bool(allowsUndo)];
    }
}

zend_long ns_nscell_truncates_last_visible_line(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSCell *c = NS_ARG_AS(NSCell, handle);
        r = (c != nil && [c truncatesLastVisibleLine]) ? 1 : 0;
    }
    return r;
}

void ns_nscell_set_truncates_last_visible_line(zval *handle, zval *truncatesLastVisibleLine)
{
    @autoreleasepool {
        NSCell *c = NS_ARG_AS(NSCell, handle);
        if (c == nil) return;
        [c setTruncatesLastVisibleLine:ns_arg_bool(truncatesLastVisibleLine)];
    }
}

zend_long ns_nscell_user_interface_layout_direction(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSCell *c = NS_ARG_AS(NSCell, handle);
        r = c != nil ? (zend_long) [c userInterfaceLayoutDirection] : 0;
    }
    return r;
}

void ns_nscell_set_user_interface_layout_direction(zval *handle, zval *userInterfaceLayoutDirection)
{
    @autoreleasepool {
        NSCell *c = NS_ARG_AS(NSCell, handle);
        if (c == nil) return;
        [c setUserInterfaceLayoutDirection:(NSUserInterfaceLayoutDirection) ns_arg_long(userInterfaceLayoutDirection)];
    }
}

zend_long ns_nscell_field_editor_for_view(zval *handle, zval *controlView)
{
    zend_long h = 0;
    @autoreleasepool {
        NSCell *c = NS_ARG_AS(NSCell, handle);
        h = ns_handle_for(c != nil ? [c fieldEditorForView:NS_ARG_AS(NSView, controlView)] : nil);
    }
    return h;
}

zend_long ns_nscell_uses_single_line_mode(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSCell *c = NS_ARG_AS(NSCell, handle);
        r = (c != nil && [c usesSingleLineMode]) ? 1 : 0;
    }
    return r;
}

void ns_nscell_set_uses_single_line_mode(zval *handle, zval *usesSingleLineMode)
{
    @autoreleasepool {
        NSCell *c = NS_ARG_AS(NSCell, handle);
        if (c == nil) return;
        [c setUsesSingleLineMode:ns_arg_bool(usesSingleLineMode)];
    }
}

void ns_nscell_dragging_image_components_with_frame_in_view(zval *return_value, zval *handle, zval *x, zval *y, zval *width, zval *height, zval *view)
{
    @autoreleasepool {
        NSCell *c = NS_ARG_AS(NSCell, handle);
        ns_ret_object_array(return_value, c != nil
            ? [c draggingImageComponentsWithFrame:ns_arg_rect(x, y, width, height) inView:NS_ARG_AS(NSView, view)]
            : nil);
    }
}

/* ====================================================================== */
/* NSKeyboardUI                                                           */
/* ====================================================================== */

zend_long ns_nscell_refuses_first_responder(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSCell *c = NS_ARG_AS(NSCell, handle);
        r = (c != nil && [c refusesFirstResponder]) ? 1 : 0;
    }
    return r;
}

void ns_nscell_set_refuses_first_responder(zval *handle, zval *refusesFirstResponder)
{
    @autoreleasepool {
        NSCell *c = NS_ARG_AS(NSCell, handle);
        if (c == nil) return;
        [c setRefusesFirstResponder:ns_arg_bool(refusesFirstResponder)];
    }
}

zend_long ns_nscell_accepts_first_responder(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSCell *c = NS_ARG_AS(NSCell, handle);
        r = (c != nil && [c acceptsFirstResponder]) ? 1 : 0;
    }
    return r;
}

zend_long ns_nscell_shows_first_responder(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSCell *c = NS_ARG_AS(NSCell, handle);
        r = (c != nil && [c showsFirstResponder]) ? 1 : 0;
    }
    return r;
}

void ns_nscell_set_shows_first_responder(zval *handle, zval *showsFirstResponder)
{
    @autoreleasepool {
        NSCell *c = NS_ARG_AS(NSCell, handle);
        if (c == nil) return;
        [c setShowsFirstResponder:ns_arg_bool(showsFirstResponder)];
    }
}

void ns_nscell_perform_click(zval *handle, zval *sender)
{
    @autoreleasepool {
        NSCell *c = NS_ARG_AS(NSCell, handle);
        if (c == nil) return;
        [c performClick:ns_arg_object(sender)];
    }
}

zend_long ns_nscell_focus_ring_type(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSCell *c = NS_ARG_AS(NSCell, handle);
        r = c != nil ? (zend_long) [c focusRingType] : 0;
    }
    return r;
}

void ns_nscell_set_focus_ring_type(zval *handle, zval *focusRingType)
{
    @autoreleasepool {
        NSCell *c = NS_ARG_AS(NSCell, handle);
        if (c == nil) return;
        [c setFocusRingType:(NSFocusRingType) ns_arg_long(focusRingType)];
    }
}

zend_long ns_nscell_default_focus_ring_type(void)
{
    @autoreleasepool {
        return (zend_long) [NSCell defaultFocusRingType];
    }
}

void ns_nscell_draw_focus_ring_mask_with_frame_in_view(zval *handle, zval *x, zval *y, zval *width, zval *height, zval *controlView)
{
    @autoreleasepool {
        NSCell *c = NS_ARG_AS(NSCell, handle);
        if (c == nil) return;
        [c drawFocusRingMaskWithFrame:ns_arg_rect(x, y, width, height) inView:NS_ARG_AS(NSView, controlView)];
    }
}

void ns_nscell_focus_ring_mask_bounds_for_frame_in_view(zval *return_value, zval *handle, zval *x, zval *y, zval *width, zval *height, zval *controlView)
{
    @autoreleasepool {
        NSCell *c = NS_ARG_AS(NSCell, handle);
        ns_ret_rect(return_value, c != nil
            ? [c focusRingMaskBoundsForFrame:ns_arg_rect(x, y, width, height) inView:NS_ARG_AS(NSView, controlView)]
            : NSZeroRect);
    }
}

zend_long ns_nscell_wants_notification_for_marked_text(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSCell *c = NS_ARG_AS(NSCell, handle);
        r = (c != nil && [c wantsNotificationForMarkedText]) ? 1 : 0;
    }
    return r;
}

/* ====================================================================== */
/* NSCellAttributedStringMethods                                          */
/* ====================================================================== */

zend_long ns_nscell_allows_editing_text_attributes(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSCell *c = NS_ARG_AS(NSCell, handle);
        r = (c != nil && [c allowsEditingTextAttributes]) ? 1 : 0;
    }
    return r;
}

void ns_nscell_set_allows_editing_text_attributes(zval *handle, zval *allowsEditingTextAttributes)
{
    @autoreleasepool {
        NSCell *c = NS_ARG_AS(NSCell, handle);
        if (c == nil) return;
        [c setAllowsEditingTextAttributes:ns_arg_bool(allowsEditingTextAttributes)];
    }
}

zend_long ns_nscell_imports_graphics(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSCell *c = NS_ARG_AS(NSCell, handle);
        r = (c != nil && [c importsGraphics]) ? 1 : 0;
    }
    return r;
}

void ns_nscell_set_imports_graphics(zval *handle, zval *importsGraphics)
{
    @autoreleasepool {
        NSCell *c = NS_ARG_AS(NSCell, handle);
        if (c == nil) return;
        [c setImportsGraphics:ns_arg_bool(importsGraphics)];
    }
}

/* ====================================================================== */
/* NSCellMixedState                                                       */
/* ====================================================================== */

zend_long ns_nscell_allows_mixed_state(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSCell *c = NS_ARG_AS(NSCell, handle);
        r = (c != nil && [c allowsMixedState]) ? 1 : 0;
    }
    return r;
}

void ns_nscell_set_allows_mixed_state(zval *handle, zval *allowsMixedState)
{
    @autoreleasepool {
        NSCell *c = NS_ARG_AS(NSCell, handle);
        if (c == nil) return;
        [c setAllowsMixedState:ns_arg_bool(allowsMixedState)];
    }
}

zend_long ns_nscell_next_state(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSCell *c = NS_ARG_AS(NSCell, handle);
        r = c != nil ? (zend_long) [c nextState] : 0;
    }
    return r;
}

void ns_nscell_set_next_state(zval *handle)
{
    @autoreleasepool {
        NSCell *c = NS_ARG_AS(NSCell, handle);
        if (c == nil) return;
        [c setNextState];
    }
}

/* ====================================================================== */
/* NSCellHitTest                                                          */
/* ====================================================================== */

zend_long ns_nscell_hit_test_for_event_in_rect_of_view(zval *handle, zval *event, zval *x, zval *y, zval *width, zval *height, zval *controlView)
{
    zend_long r = 0;
    @autoreleasepool {
        NSCell *c = NS_ARG_AS(NSCell, handle);
        r = c != nil
            ? (zend_long) [c hitTestForEvent:NS_ARG_AS(NSEvent, event) inRect:ns_arg_rect(x, y, width, height) ofView:NS_ARG_AS(NSView, controlView)]
            : 0;
    }
    return r;
}

/* ====================================================================== */
/* NSCellExpansion                                                        */
/* ====================================================================== */

void ns_nscell_expansion_frame_with_frame_in_view(zval *return_value, zval *handle, zval *x, zval *y, zval *width, zval *height, zval *view)
{
    @autoreleasepool {
        NSCell *c = NS_ARG_AS(NSCell, handle);
        ns_ret_rect(return_value, c != nil
            ? [c expansionFrameWithFrame:ns_arg_rect(x, y, width, height) inView:NS_ARG_AS(NSView, view)]
            : NSZeroRect);
    }
}

void ns_nscell_draw_with_expansion_frame_in_view(zval *handle, zval *x, zval *y, zval *width, zval *height, zval *view)
{
    @autoreleasepool {
        NSCell *c = NS_ARG_AS(NSCell, handle);
        if (c == nil) return;
        [c drawWithExpansionFrame:ns_arg_rect(x, y, width, height) inView:NS_ARG_AS(NSView, view)];
    }
}

/* ====================================================================== */
/* NSCellBackgroundStyle                                                  */
/* ====================================================================== */

zend_long ns_nscell_background_style(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSCell *c = NS_ARG_AS(NSCell, handle);
        r = c != nil ? (zend_long) [c backgroundStyle] : 0;
    }
    return r;
}

void ns_nscell_set_background_style(zval *handle, zval *backgroundStyle)
{
    @autoreleasepool {
        NSCell *c = NS_ARG_AS(NSCell, handle);
        if (c == nil) return;
        [c setBackgroundStyle:(NSBackgroundStyle) ns_arg_long(backgroundStyle)];
    }
}

zend_long ns_nscell_interior_background_style(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSCell *c = NS_ARG_AS(NSCell, handle);
        r = c != nil ? (zend_long) [c interiorBackgroundStyle] : 0;
    }
    return r;
}
