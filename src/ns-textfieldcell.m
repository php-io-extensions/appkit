#include "ns-textfieldcell.h"
#include "ns-value.h"

/* ====================================================================== */
/* NSTextFieldCell                                                        */
/* ====================================================================== */

zend_long ns_nstextfieldcell_init_text_cell(zval *string_)
{
    @autoreleasepool {
        return ns_handle_for([[NSTextFieldCell alloc] initTextCell:ns_arg_string(string_)]);
    }
}

zend_long ns_nstextfieldcell_background_color(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSTextFieldCell *c = NS_ARG_AS(NSTextFieldCell, handle);
        h = ns_handle_for(c != nil ? [c backgroundColor] : nil);
    }
    return h;
}

void ns_nstextfieldcell_set_background_color(zval *handle, zval *backgroundColor)
{
    @autoreleasepool {
        NSTextFieldCell *c = NS_ARG_AS(NSTextFieldCell, handle);
        if (c == nil) return;
        [c setBackgroundColor:NS_ARG_AS(NSColor, backgroundColor)];
    }
}

zend_long ns_nstextfieldcell_draws_background(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSTextFieldCell *c = NS_ARG_AS(NSTextFieldCell, handle);
        r = (c != nil && [c drawsBackground]) ? 1 : 0;
    }
    return r;
}

void ns_nstextfieldcell_set_draws_background(zval *handle, zval *drawsBackground)
{
    @autoreleasepool {
        NSTextFieldCell *c = NS_ARG_AS(NSTextFieldCell, handle);
        if (c == nil) return;
        [c setDrawsBackground:ns_arg_bool(drawsBackground)];
    }
}

zend_long ns_nstextfieldcell_text_color(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSTextFieldCell *c = NS_ARG_AS(NSTextFieldCell, handle);
        h = ns_handle_for(c != nil ? [c textColor] : nil);
    }
    return h;
}

void ns_nstextfieldcell_set_text_color(zval *handle, zval *textColor)
{
    @autoreleasepool {
        NSTextFieldCell *c = NS_ARG_AS(NSTextFieldCell, handle);
        if (c == nil) return;
        [c setTextColor:NS_ARG_AS(NSColor, textColor)];
    }
}

zend_long ns_nstextfieldcell_set_up_field_editor_attributes(zval *handle, zval *textObj)
{
    zend_long h = 0;
    @autoreleasepool {
        NSTextFieldCell *c = NS_ARG_AS(NSTextFieldCell, handle);
        h = ns_handle_for(c != nil
            ? [c setUpFieldEditorAttributes:NS_ARG_AS(NSText, textObj)]
            : nil);
    }
    return h;
}

zend_long ns_nstextfieldcell_bezel_style(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSTextFieldCell *c = NS_ARG_AS(NSTextFieldCell, handle);
        r = c != nil ? (zend_long) [c bezelStyle] : 0;
    }
    return r;
}

void ns_nstextfieldcell_set_bezel_style(zval *handle, zval *bezelStyle)
{
    @autoreleasepool {
        NSTextFieldCell *c = NS_ARG_AS(NSTextFieldCell, handle);
        if (c == nil) return;
        [c setBezelStyle:(NSTextFieldBezelStyle) ns_arg_long(bezelStyle)];
    }
}

void ns_nstextfieldcell_placeholder_string(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSTextFieldCell *c = NS_ARG_AS(NSTextFieldCell, handle);
        ns_ret_string(return_value, c != nil ? [c placeholderString] : nil);
    }
}

void ns_nstextfieldcell_set_placeholder_string(zval *handle, zval *placeholderString)
{
    @autoreleasepool {
        NSTextFieldCell *c = NS_ARG_AS(NSTextFieldCell, handle);
        if (c == nil) return;
        [c setPlaceholderString:ns_arg_string(placeholderString)];
    }
}

void ns_nstextfieldcell_set_wants_notification_for_marked_text(zval *handle, zval *flag)
{
    @autoreleasepool {
        NSTextFieldCell *c = NS_ARG_AS(NSTextFieldCell, handle);
        if (c == nil) return;
        [c setWantsNotificationForMarkedText:ns_arg_bool(flag)];
    }
}

void ns_nstextfieldcell_allowed_input_source_locales(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSTextFieldCell *c = NS_ARG_AS(NSTextFieldCell, handle);
        if (c == nil) { ZVAL_NULL(return_value); return; }
        ns_ret_string_array(return_value, [c allowedInputSourceLocales]);
    }
}

void ns_nstextfieldcell_set_allowed_input_source_locales(zval *handle, zval *allowedInputSourceLocales)
{
    @autoreleasepool {
        NSTextFieldCell *c = NS_ARG_AS(NSTextFieldCell, handle);
        if (c == nil) return;
        [c setAllowedInputSourceLocales:ns_arg_string_array(allowedInputSourceLocales)];
    }
}
