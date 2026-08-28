#include "ns-textfield.h"
#include "ns-value.h"

/* ====================================================================== */
/* NSTextField                                                            */
/* ====================================================================== */

void ns_nstextfield_placeholder_string(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSTextField *f = NS_ARG_AS(NSTextField, handle);
        ns_ret_string(return_value, f != nil ? [f placeholderString] : nil);
    }
}

void ns_nstextfield_set_placeholder_string(zval *handle, zval *placeholderString)
{
    @autoreleasepool {
        NSTextField *f = NS_ARG_AS(NSTextField, handle);
        if (f == nil) return;
        [f setPlaceholderString:ns_arg_string(placeholderString)];
    }
}

zend_long ns_nstextfield_background_color(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSTextField *f = NS_ARG_AS(NSTextField, handle);
        h = ns_handle_for(f != nil ? [f backgroundColor] : nil);
    }
    return h;
}

void ns_nstextfield_set_background_color(zval *handle, zval *backgroundColor)
{
    @autoreleasepool {
        NSTextField *f = NS_ARG_AS(NSTextField, handle);
        if (f == nil) return;
        [f setBackgroundColor:NS_ARG_AS(NSColor, backgroundColor)];
    }
}

zend_long ns_nstextfield_draws_background(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSTextField *f = NS_ARG_AS(NSTextField, handle);
        r = (f != nil && [f drawsBackground]) ? 1 : 0;
    }
    return r;
}

void ns_nstextfield_set_draws_background(zval *handle, zval *drawsBackground)
{
    @autoreleasepool {
        NSTextField *f = NS_ARG_AS(NSTextField, handle);
        if (f == nil) return;
        [f setDrawsBackground:ns_arg_bool(drawsBackground)];
    }
}

zend_long ns_nstextfield_text_color(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSTextField *f = NS_ARG_AS(NSTextField, handle);
        h = ns_handle_for(f != nil ? [f textColor] : nil);
    }
    return h;
}

void ns_nstextfield_set_text_color(zval *handle, zval *textColor)
{
    @autoreleasepool {
        NSTextField *f = NS_ARG_AS(NSTextField, handle);
        if (f == nil) return;
        [f setTextColor:NS_ARG_AS(NSColor, textColor)];
    }
}

zend_long ns_nstextfield_is_bordered(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSTextField *f = NS_ARG_AS(NSTextField, handle);
        r = (f != nil && [f isBordered]) ? 1 : 0;
    }
    return r;
}

void ns_nstextfield_set_bordered(zval *handle, zval *bordered)
{
    @autoreleasepool {
        NSTextField *f = NS_ARG_AS(NSTextField, handle);
        if (f == nil) return;
        [f setBordered:ns_arg_bool(bordered)];
    }
}

zend_long ns_nstextfield_is_bezeled(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSTextField *f = NS_ARG_AS(NSTextField, handle);
        r = (f != nil && [f isBezeled]) ? 1 : 0;
    }
    return r;
}

void ns_nstextfield_set_bezeled(zval *handle, zval *bezeled)
{
    @autoreleasepool {
        NSTextField *f = NS_ARG_AS(NSTextField, handle);
        if (f == nil) return;
        [f setBezeled:ns_arg_bool(bezeled)];
    }
}

zend_long ns_nstextfield_is_editable(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSTextField *f = NS_ARG_AS(NSTextField, handle);
        r = (f != nil && [f isEditable]) ? 1 : 0;
    }
    return r;
}

void ns_nstextfield_set_editable(zval *handle, zval *editable)
{
    @autoreleasepool {
        NSTextField *f = NS_ARG_AS(NSTextField, handle);
        if (f == nil) return;
        [f setEditable:ns_arg_bool(editable)];
    }
}

zend_long ns_nstextfield_is_selectable(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSTextField *f = NS_ARG_AS(NSTextField, handle);
        r = (f != nil && [f isSelectable]) ? 1 : 0;
    }
    return r;
}

void ns_nstextfield_set_selectable(zval *handle, zval *selectable)
{
    @autoreleasepool {
        NSTextField *f = NS_ARG_AS(NSTextField, handle);
        if (f == nil) return;
        [f setSelectable:ns_arg_bool(selectable)];
    }
}

void ns_nstextfield_select_text(zval *handle, zval *sender)
{
    @autoreleasepool {
        NSTextField *f = NS_ARG_AS(NSTextField, handle);
        if (f == nil) return;
        [f selectText:ns_arg_object(sender)];
    }
}

zend_long ns_nstextfield_delegate(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSTextField *f = NS_ARG_AS(NSTextField, handle);
        h = ns_handle_for(f != nil ? [f delegate] : nil);
    }
    return h;
}

void ns_nstextfield_set_delegate(zval *handle, zval *delegate)
{
    @autoreleasepool {
        NSTextField *f = NS_ARG_AS(NSTextField, handle);
        if (f == nil) return;
        [f setDelegate:ns_arg_object(delegate)];
    }
}

zend_long ns_nstextfield_text_should_begin_editing(zval *handle, zval *textObject)
{
    zend_long r = 0;
    @autoreleasepool {
        NSTextField *f = NS_ARG_AS(NSTextField, handle);
        r = (f != nil && [f textShouldBeginEditing:NS_ARG_AS(NSText, textObject)]) ? 1 : 0;
    }
    return r;
}

zend_long ns_nstextfield_text_should_end_editing(zval *handle, zval *textObject)
{
    zend_long r = 0;
    @autoreleasepool {
        NSTextField *f = NS_ARG_AS(NSTextField, handle);
        r = (f != nil && [f textShouldEndEditing:NS_ARG_AS(NSText, textObject)]) ? 1 : 0;
    }
    return r;
}

void ns_nstextfield_text_did_begin_editing(zval *handle, zval *notification)
{
    @autoreleasepool {
        NSTextField *f = NS_ARG_AS(NSTextField, handle);
        if (f == nil) return;
        [f textDidBeginEditing:NS_ARG_AS(NSNotification, notification)];
    }
}

void ns_nstextfield_text_did_end_editing(zval *handle, zval *notification)
{
    @autoreleasepool {
        NSTextField *f = NS_ARG_AS(NSTextField, handle);
        if (f == nil) return;
        [f textDidEndEditing:NS_ARG_AS(NSNotification, notification)];
    }
}

void ns_nstextfield_text_did_change(zval *handle, zval *notification)
{
    @autoreleasepool {
        NSTextField *f = NS_ARG_AS(NSTextField, handle);
        if (f == nil) return;
        [f textDidChange:NS_ARG_AS(NSNotification, notification)];
    }
}

zend_long ns_nstextfield_accepts_first_responder(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSTextField *f = NS_ARG_AS(NSTextField, handle);
        r = (f != nil && [f acceptsFirstResponder]) ? 1 : 0;
    }
    return r;
}

zend_long ns_nstextfield_bezel_style(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSTextField *f = NS_ARG_AS(NSTextField, handle);
        r = f != nil ? (zend_long) [f bezelStyle] : 0;
    }
    return r;
}

void ns_nstextfield_set_bezel_style(zval *handle, zval *bezelStyle)
{
    @autoreleasepool {
        NSTextField *f = NS_ARG_AS(NSTextField, handle);
        if (f == nil) return;
        [f setBezelStyle:(NSTextFieldBezelStyle) ns_arg_long(bezelStyle)];
    }
}

double ns_nstextfield_preferred_max_layout_width(zval *handle)
{
    double r = 0.0;
    @autoreleasepool {
        NSTextField *f = NS_ARG_AS(NSTextField, handle);
        r = f != nil ? (double) [f preferredMaxLayoutWidth] : 0.0;
    }
    return r;
}

void ns_nstextfield_set_preferred_max_layout_width(zval *handle, zval *preferredMaxLayoutWidth)
{
    @autoreleasepool {
        NSTextField *f = NS_ARG_AS(NSTextField, handle);
        if (f == nil) return;
        [f setPreferredMaxLayoutWidth:(CGFloat) ns_arg_double(preferredMaxLayoutWidth)];
    }
}

zend_long ns_nstextfield_maximum_number_of_lines(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSTextField *f = NS_ARG_AS(NSTextField, handle);
        r = f != nil ? (zend_long) [f maximumNumberOfLines] : 0;
    }
    return r;
}

void ns_nstextfield_set_maximum_number_of_lines(zval *handle, zval *maximumNumberOfLines)
{
    @autoreleasepool {
        NSTextField *f = NS_ARG_AS(NSTextField, handle);
        if (f == nil) return;
        [f setMaximumNumberOfLines:(NSInteger) ns_arg_long(maximumNumberOfLines)];
    }
}

zend_long ns_nstextfield_allows_default_tightening_for_truncation(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSTextField *f = NS_ARG_AS(NSTextField, handle);
        r = (f != nil && [f allowsDefaultTighteningForTruncation]) ? 1 : 0;
    }
    return r;
}

void ns_nstextfield_set_allows_default_tightening_for_truncation(zval *handle, zval *allowsDefaultTighteningForTruncation)
{
    @autoreleasepool {
        NSTextField *f = NS_ARG_AS(NSTextField, handle);
        if (f == nil) return;
        [f setAllowsDefaultTighteningForTruncation:ns_arg_bool(allowsDefaultTighteningForTruncation)];
    }
}

zend_long ns_nstextfield_line_break_strategy(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSTextField *f = NS_ARG_AS(NSTextField, handle);
        r = f != nil ? (zend_long) [f lineBreakStrategy] : 0;
    }
    return r;
}

void ns_nstextfield_set_line_break_strategy(zval *handle, zval *lineBreakStrategy)
{
    @autoreleasepool {
        NSTextField *f = NS_ARG_AS(NSTextField, handle);
        if (f == nil) return;
        [f setLineBreakStrategy:(NSLineBreakStrategy) ns_arg_long(lineBreakStrategy)];
    }
}

zend_long ns_nstextfield_allows_writing_tools(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSTextField *f = NS_ARG_AS(NSTextField, handle);
        r = (f != nil && [f allowsWritingTools]) ? 1 : 0;
    }
    return r;
}

void ns_nstextfield_set_allows_writing_tools(zval *handle, zval *allowsWritingTools)
{
    @autoreleasepool {
        NSTextField *f = NS_ARG_AS(NSTextField, handle);
        if (f == nil) return;
        [f setAllowsWritingTools:ns_arg_bool(allowsWritingTools)];
    }
}

zend_long ns_nstextfield_allows_writing_tools_affordance(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSTextField *f = NS_ARG_AS(NSTextField, handle);
        r = (f != nil && [f allowsWritingToolsAffordance]) ? 1 : 0;
    }
    return r;
}

void ns_nstextfield_set_allows_writing_tools_affordance(zval *handle, zval *allowsWritingToolsAffordance)
{
    @autoreleasepool {
        NSTextField *f = NS_ARG_AS(NSTextField, handle);
        if (f == nil) return;
        [f setAllowsWritingToolsAffordance:ns_arg_bool(allowsWritingToolsAffordance)];
    }
}

/* ====================================================================== */
/* NSTouchBar                                                             */
/* ====================================================================== */

zend_long ns_nstextfield_is_automatic_text_completion_enabled(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSTextField *f = NS_ARG_AS(NSTextField, handle);
        r = (f != nil && [f isAutomaticTextCompletionEnabled]) ? 1 : 0;
    }
    return r;
}

void ns_nstextfield_set_automatic_text_completion_enabled(zval *handle, zval *automaticTextCompletionEnabled)
{
    @autoreleasepool {
        NSTextField *f = NS_ARG_AS(NSTextField, handle);
        if (f == nil) return;
        [f setAutomaticTextCompletionEnabled:ns_arg_bool(automaticTextCompletionEnabled)];
    }
}

zend_long ns_nstextfield_allows_character_picker_touch_bar_item(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSTextField *f = NS_ARG_AS(NSTextField, handle);
        r = (f != nil && [f allowsCharacterPickerTouchBarItem]) ? 1 : 0;
    }
    return r;
}

void ns_nstextfield_set_allows_character_picker_touch_bar_item(zval *handle, zval *allowsCharacterPickerTouchBarItem)
{
    @autoreleasepool {
        NSTextField *f = NS_ARG_AS(NSTextField, handle);
        if (f == nil) return;
        [f setAllowsCharacterPickerTouchBarItem:ns_arg_bool(allowsCharacterPickerTouchBarItem)];
    }
}

/* ====================================================================== */
/* NSTextFieldConvenience                                                 */
/* ====================================================================== */

zend_long ns_nstextfield_label_with_string(zval *stringValue)
{
    zend_long h = 0;
    @autoreleasepool {
        NSTextField *f = [NSTextField labelWithString:ns_arg_string(stringValue)];
        h = ns_handle_for(f);
    }
    return h;
}

zend_long ns_nstextfield_wrapping_label_with_string(zval *stringValue)
{
    zend_long h = 0;
    @autoreleasepool {
        NSTextField *f = [NSTextField wrappingLabelWithString:ns_arg_string(stringValue)];
        h = ns_handle_for(f);
    }
    return h;
}

zend_long ns_nstextfield_text_field_with_string(zval *stringValue)
{
    zend_long h = 0;
    @autoreleasepool {
        NSTextField *f = [NSTextField textFieldWithString:ns_arg_string(stringValue)];
        h = ns_handle_for(f);
    }
    return h;
}

/* ====================================================================== */
/* NSTextFieldAttributedStringMethods                                     */
/* ====================================================================== */

zend_long ns_nstextfield_allows_editing_text_attributes(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSTextField *f = NS_ARG_AS(NSTextField, handle);
        r = (f != nil && [f allowsEditingTextAttributes]) ? 1 : 0;
    }
    return r;
}

void ns_nstextfield_set_allows_editing_text_attributes(zval *handle, zval *allowsEditingTextAttributes)
{
    @autoreleasepool {
        NSTextField *f = NS_ARG_AS(NSTextField, handle);
        if (f == nil) return;
        [f setAllowsEditingTextAttributes:ns_arg_bool(allowsEditingTextAttributes)];
    }
}

zend_long ns_nstextfield_imports_graphics(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSTextField *f = NS_ARG_AS(NSTextField, handle);
        r = (f != nil && [f importsGraphics]) ? 1 : 0;
    }
    return r;
}

void ns_nstextfield_set_imports_graphics(zval *handle, zval *importsGraphics)
{
    @autoreleasepool {
        NSTextField *f = NS_ARG_AS(NSTextField, handle);
        if (f == nil) return;
        [f setImportsGraphics:ns_arg_bool(importsGraphics)];
    }
}
