#include "ns-text.h"
#include "ns-value.h"

/* ====================================================================== */
/* NSText                                                                 */
/* ====================================================================== */

zend_long ns_nstext_init_with_frame(zval *x, zval *y, zval *width, zval *height)
{
    @autoreleasepool {
        return ns_handle_for([[NSText alloc] initWithFrame:ns_arg_rect(x, y, width, height)]);
    }
}

void ns_nstext_string_(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSText *t = NS_ARG_AS(NSText, handle);
        ns_ret_string(return_value, t != nil ? [t string] : nil);
    }
}

void ns_nstext_set_string(zval *handle, zval *string_)
{
    @autoreleasepool {
        NSText *t = NS_ARG_AS(NSText, handle);
        if (t == nil) return;
        [t setString:ns_arg_string(string_)];
    }
}

void ns_nstext_replace_characters_in_range_with_string(zval *handle, zval *location, zval *length, zval *string_)
{
    @autoreleasepool {
        NSText *t = NS_ARG_AS(NSText, handle);
        if (t == nil) return;
        [t replaceCharactersInRange:ns_arg_range(location, length) withString:ns_arg_string(string_)];
    }
}

zend_long ns_nstext_write_rtfd_to_file_atomically(zval *handle, zval *path, zval *flag)
{
    zend_long r = 0;
    @autoreleasepool {
        NSText *t = NS_ARG_AS(NSText, handle);
        r = (t != nil && [t writeRTFDToFile:ns_arg_string(path) atomically:ns_arg_bool(flag)]) ? 1 : 0;
    }
    return r;
}

zend_long ns_nstext_read_rtfd_from_file(zval *handle, zval *path)
{
    zend_long r = 0;
    @autoreleasepool {
        NSText *t = NS_ARG_AS(NSText, handle);
        r = (t != nil && [t readRTFDFromFile:ns_arg_string(path)]) ? 1 : 0;
    }
    return r;
}

zend_long ns_nstext_delegate(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSText *t = NS_ARG_AS(NSText, handle);
        h = ns_handle_for(t != nil ? [t delegate] : nil);
    }
    return h;
}

void ns_nstext_set_delegate(zval *handle, zval *delegate)
{
    @autoreleasepool {
        NSText *t = NS_ARG_AS(NSText, handle);
        if (t == nil) return;
        [t setDelegate:ns_arg_object(delegate)];
    }
}

zend_long ns_nstext_is_editable(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSText *t = NS_ARG_AS(NSText, handle);
        r = (t != nil && [t isEditable]) ? 1 : 0;
    }
    return r;
}

void ns_nstext_set_editable(zval *handle, zval *editable)
{
    @autoreleasepool {
        NSText *t = NS_ARG_AS(NSText, handle);
        if (t == nil) return;
        [t setEditable:ns_arg_bool(editable)];
    }
}

zend_long ns_nstext_is_selectable(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSText *t = NS_ARG_AS(NSText, handle);
        r = (t != nil && [t isSelectable]) ? 1 : 0;
    }
    return r;
}

void ns_nstext_set_selectable(zval *handle, zval *selectable)
{
    @autoreleasepool {
        NSText *t = NS_ARG_AS(NSText, handle);
        if (t == nil) return;
        [t setSelectable:ns_arg_bool(selectable)];
    }
}

zend_long ns_nstext_is_rich_text(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSText *t = NS_ARG_AS(NSText, handle);
        r = (t != nil && [t isRichText]) ? 1 : 0;
    }
    return r;
}

void ns_nstext_set_rich_text(zval *handle, zval *richText)
{
    @autoreleasepool {
        NSText *t = NS_ARG_AS(NSText, handle);
        if (t == nil) return;
        [t setRichText:ns_arg_bool(richText)];
    }
}

zend_long ns_nstext_imports_graphics(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSText *t = NS_ARG_AS(NSText, handle);
        r = (t != nil && [t importsGraphics]) ? 1 : 0;
    }
    return r;
}

void ns_nstext_set_imports_graphics(zval *handle, zval *importsGraphics)
{
    @autoreleasepool {
        NSText *t = NS_ARG_AS(NSText, handle);
        if (t == nil) return;
        [t setImportsGraphics:ns_arg_bool(importsGraphics)];
    }
}

zend_long ns_nstext_is_field_editor(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSText *t = NS_ARG_AS(NSText, handle);
        r = (t != nil && [t isFieldEditor]) ? 1 : 0;
    }
    return r;
}

void ns_nstext_set_field_editor(zval *handle, zval *fieldEditor)
{
    @autoreleasepool {
        NSText *t = NS_ARG_AS(NSText, handle);
        if (t == nil) return;
        [t setFieldEditor:ns_arg_bool(fieldEditor)];
    }
}

zend_long ns_nstext_uses_font_panel(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSText *t = NS_ARG_AS(NSText, handle);
        r = (t != nil && [t usesFontPanel]) ? 1 : 0;
    }
    return r;
}

void ns_nstext_set_uses_font_panel(zval *handle, zval *usesFontPanel)
{
    @autoreleasepool {
        NSText *t = NS_ARG_AS(NSText, handle);
        if (t == nil) return;
        [t setUsesFontPanel:ns_arg_bool(usesFontPanel)];
    }
}

zend_long ns_nstext_draws_background(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSText *t = NS_ARG_AS(NSText, handle);
        r = (t != nil && [t drawsBackground]) ? 1 : 0;
    }
    return r;
}

void ns_nstext_set_draws_background(zval *handle, zval *drawsBackground)
{
    @autoreleasepool {
        NSText *t = NS_ARG_AS(NSText, handle);
        if (t == nil) return;
        [t setDrawsBackground:ns_arg_bool(drawsBackground)];
    }
}

zend_long ns_nstext_background_color(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSText *t = NS_ARG_AS(NSText, handle);
        h = ns_handle_for(t != nil ? [t backgroundColor] : nil);
    }
    return h;
}

void ns_nstext_set_background_color(zval *handle, zval *backgroundColor)
{
    @autoreleasepool {
        NSText *t = NS_ARG_AS(NSText, handle);
        if (t == nil) return;
        [t setBackgroundColor:NS_ARG_AS(NSColor, backgroundColor)];
    }
}

zend_long ns_nstext_is_ruler_visible(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSText *t = NS_ARG_AS(NSText, handle);
        r = (t != nil && [t isRulerVisible]) ? 1 : 0;
    }
    return r;
}

void ns_nstext_selected_range(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSText *t = NS_ARG_AS(NSText, handle);
        ns_ret_range(return_value, t != nil ? [t selectedRange] : NSMakeRange(0, 0));
    }
}

void ns_nstext_set_selected_range(zval *handle, zval *location, zval *length)
{
    @autoreleasepool {
        NSText *t = NS_ARG_AS(NSText, handle);
        if (t == nil) return;
        [t setSelectedRange:ns_arg_range(location, length)];
    }
}

void ns_nstext_scroll_range_to_visible(zval *handle, zval *location, zval *length)
{
    @autoreleasepool {
        NSText *t = NS_ARG_AS(NSText, handle);
        if (t == nil) return;
        [t scrollRangeToVisible:ns_arg_range(location, length)];
    }
}

zend_long ns_nstext_font(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSText *t = NS_ARG_AS(NSText, handle);
        h = ns_handle_for(t != nil ? [t font] : nil);
    }
    return h;
}

void ns_nstext_set_font(zval *handle, zval *font)
{
    @autoreleasepool {
        NSText *t = NS_ARG_AS(NSText, handle);
        if (t == nil) return;
        [t setFont:NS_ARG_AS(NSFont, font)];
    }
}

zend_long ns_nstext_text_color(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSText *t = NS_ARG_AS(NSText, handle);
        h = ns_handle_for(t != nil ? [t textColor] : nil);
    }
    return h;
}

void ns_nstext_set_text_color(zval *handle, zval *textColor)
{
    @autoreleasepool {
        NSText *t = NS_ARG_AS(NSText, handle);
        if (t == nil) return;
        [t setTextColor:NS_ARG_AS(NSColor, textColor)];
    }
}

zend_long ns_nstext_alignment(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSText *t = NS_ARG_AS(NSText, handle);
        r = t != nil ? (zend_long) [t alignment] : 0;
    }
    return r;
}

void ns_nstext_set_alignment(zval *handle, zval *alignment)
{
    @autoreleasepool {
        NSText *t = NS_ARG_AS(NSText, handle);
        if (t == nil) return;
        [t setAlignment:(NSTextAlignment) ns_arg_long(alignment)];
    }
}

zend_long ns_nstext_base_writing_direction(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSText *t = NS_ARG_AS(NSText, handle);
        r = t != nil ? (zend_long) [t baseWritingDirection] : 0;
    }
    return r;
}

void ns_nstext_set_base_writing_direction(zval *handle, zval *baseWritingDirection)
{
    @autoreleasepool {
        NSText *t = NS_ARG_AS(NSText, handle);
        if (t == nil) return;
        [t setBaseWritingDirection:(NSWritingDirection) ns_arg_long(baseWritingDirection)];
    }
}

void ns_nstext_set_text_color_range(zval *handle, zval *color, zval *location, zval *length)
{
    @autoreleasepool {
        NSText *t = NS_ARG_AS(NSText, handle);
        if (t == nil) return;
        [t setTextColor:NS_ARG_AS(NSColor, color) range:ns_arg_range(location, length)];
    }
}

void ns_nstext_set_font_range(zval *handle, zval *font, zval *location, zval *length)
{
    @autoreleasepool {
        NSText *t = NS_ARG_AS(NSText, handle);
        if (t == nil) return;
        [t setFont:NS_ARG_AS(NSFont, font) range:ns_arg_range(location, length)];
    }
}

void ns_nstext_max_size(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSText *t = NS_ARG_AS(NSText, handle);
        ns_ret_size(return_value, t != nil ? [t maxSize] : NSZeroSize);
    }
}

void ns_nstext_set_max_size(zval *handle, zval *width, zval *height)
{
    @autoreleasepool {
        NSText *t = NS_ARG_AS(NSText, handle);
        if (t == nil) return;
        [t setMaxSize:ns_arg_size(width, height)];
    }
}

void ns_nstext_min_size(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSText *t = NS_ARG_AS(NSText, handle);
        ns_ret_size(return_value, t != nil ? [t minSize] : NSZeroSize);
    }
}

void ns_nstext_set_min_size(zval *handle, zval *width, zval *height)
{
    @autoreleasepool {
        NSText *t = NS_ARG_AS(NSText, handle);
        if (t == nil) return;
        [t setMinSize:ns_arg_size(width, height)];
    }
}

zend_long ns_nstext_is_horizontally_resizable(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSText *t = NS_ARG_AS(NSText, handle);
        r = (t != nil && [t isHorizontallyResizable]) ? 1 : 0;
    }
    return r;
}

void ns_nstext_set_horizontally_resizable(zval *handle, zval *horizontallyResizable)
{
    @autoreleasepool {
        NSText *t = NS_ARG_AS(NSText, handle);
        if (t == nil) return;
        [t setHorizontallyResizable:ns_arg_bool(horizontallyResizable)];
    }
}

zend_long ns_nstext_is_vertically_resizable(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSText *t = NS_ARG_AS(NSText, handle);
        r = (t != nil && [t isVerticallyResizable]) ? 1 : 0;
    }
    return r;
}

void ns_nstext_set_vertically_resizable(zval *handle, zval *verticallyResizable)
{
    @autoreleasepool {
        NSText *t = NS_ARG_AS(NSText, handle);
        if (t == nil) return;
        [t setVerticallyResizable:ns_arg_bool(verticallyResizable)];
    }
}

void ns_nstext_size_to_fit(zval *handle)
{
    @autoreleasepool {
        NSText *t = NS_ARG_AS(NSText, handle);
        if (t == nil) return;
        [t sizeToFit];
    }
}

void ns_nstext_copy_(zval *handle, zval *sender)
{
    @autoreleasepool {
        NSText *t = NS_ARG_AS(NSText, handle);
        if (t == nil) return;
        [t copy:ns_arg_object(sender)];
    }
}

void ns_nstext_copy_font(zval *handle, zval *sender)
{
    @autoreleasepool {
        NSText *t = NS_ARG_AS(NSText, handle);
        if (t == nil) return;
        [t copyFont:ns_arg_object(sender)];
    }
}

void ns_nstext_copy_ruler(zval *handle, zval *sender)
{
    @autoreleasepool {
        NSText *t = NS_ARG_AS(NSText, handle);
        if (t == nil) return;
        [t copyRuler:ns_arg_object(sender)];
    }
}

void ns_nstext_cut(zval *handle, zval *sender)
{
    @autoreleasepool {
        NSText *t = NS_ARG_AS(NSText, handle);
        if (t == nil) return;
        [t cut:ns_arg_object(sender)];
    }
}

void ns_nstext_delete(zval *handle, zval *sender)
{
    @autoreleasepool {
        NSText *t = NS_ARG_AS(NSText, handle);
        if (t == nil) return;
        [t delete:ns_arg_object(sender)];
    }
}

void ns_nstext_paste(zval *handle, zval *sender)
{
    @autoreleasepool {
        NSText *t = NS_ARG_AS(NSText, handle);
        if (t == nil) return;
        [t paste:ns_arg_object(sender)];
    }
}

void ns_nstext_paste_font(zval *handle, zval *sender)
{
    @autoreleasepool {
        NSText *t = NS_ARG_AS(NSText, handle);
        if (t == nil) return;
        [t pasteFont:ns_arg_object(sender)];
    }
}

void ns_nstext_paste_ruler(zval *handle, zval *sender)
{
    @autoreleasepool {
        NSText *t = NS_ARG_AS(NSText, handle);
        if (t == nil) return;
        [t pasteRuler:ns_arg_object(sender)];
    }
}

void ns_nstext_select_all(zval *handle, zval *sender)
{
    @autoreleasepool {
        NSText *t = NS_ARG_AS(NSText, handle);
        if (t == nil) return;
        [t selectAll:ns_arg_object(sender)];
    }
}

void ns_nstext_change_font(zval *handle, zval *sender)
{
    @autoreleasepool {
        NSText *t = NS_ARG_AS(NSText, handle);
        if (t == nil) return;
        [t changeFont:ns_arg_object(sender)];
    }
}

void ns_nstext_align_left(zval *handle, zval *sender)
{
    @autoreleasepool {
        NSText *t = NS_ARG_AS(NSText, handle);
        if (t == nil) return;
        [t alignLeft:ns_arg_object(sender)];
    }
}

void ns_nstext_align_right(zval *handle, zval *sender)
{
    @autoreleasepool {
        NSText *t = NS_ARG_AS(NSText, handle);
        if (t == nil) return;
        [t alignRight:ns_arg_object(sender)];
    }
}

void ns_nstext_align_center(zval *handle, zval *sender)
{
    @autoreleasepool {
        NSText *t = NS_ARG_AS(NSText, handle);
        if (t == nil) return;
        [t alignCenter:ns_arg_object(sender)];
    }
}

void ns_nstext_subscript(zval *handle, zval *sender)
{
    @autoreleasepool {
        NSText *t = NS_ARG_AS(NSText, handle);
        if (t == nil) return;
        [t subscript:ns_arg_object(sender)];
    }
}

void ns_nstext_superscript(zval *handle, zval *sender)
{
    @autoreleasepool {
        NSText *t = NS_ARG_AS(NSText, handle);
        if (t == nil) return;
        [t superscript:ns_arg_object(sender)];
    }
}

void ns_nstext_underline(zval *handle, zval *sender)
{
    @autoreleasepool {
        NSText *t = NS_ARG_AS(NSText, handle);
        if (t == nil) return;
        [t underline:ns_arg_object(sender)];
    }
}

void ns_nstext_unscript(zval *handle, zval *sender)
{
    @autoreleasepool {
        NSText *t = NS_ARG_AS(NSText, handle);
        if (t == nil) return;
        [t unscript:ns_arg_object(sender)];
    }
}

void ns_nstext_show_guess_panel(zval *handle, zval *sender)
{
    @autoreleasepool {
        NSText *t = NS_ARG_AS(NSText, handle);
        if (t == nil) return;
        [t showGuessPanel:ns_arg_object(sender)];
    }
}

void ns_nstext_check_spelling(zval *handle, zval *sender)
{
    @autoreleasepool {
        NSText *t = NS_ARG_AS(NSText, handle);
        if (t == nil) return;
        [t checkSpelling:ns_arg_object(sender)];
    }
}

void ns_nstext_toggle_ruler(zval *handle, zval *sender)
{
    @autoreleasepool {
        NSText *t = NS_ARG_AS(NSText, handle);
        if (t == nil) return;
        [t toggleRuler:ns_arg_object(sender)];
    }
}
