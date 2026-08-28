#include "ns-box.h"
#include "ns-value.h"

/* ====================================================================== */
/* NSBox                                                                  */
/* ====================================================================== */

zend_long ns_nsbox_init_with_frame(zval *x, zval *y, zval *width, zval *height)
{
    @autoreleasepool {
        return ns_handle_for([[NSBox alloc] initWithFrame:ns_arg_rect(x, y, width, height)]);
    }
}

zend_long ns_nsbox_box_type(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSBox *b = NS_ARG_AS(NSBox, handle);
        r = b != nil ? (zend_long) [b boxType] : 0;
    }
    return r;
}

void ns_nsbox_set_box_type(zval *handle, zval *boxType)
{
    @autoreleasepool {
        NSBox *b = NS_ARG_AS(NSBox, handle);
        if (b == nil) return;
        [b setBoxType:(NSBoxType) ns_arg_long(boxType)];
    }
}

zend_long ns_nsbox_title_position(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSBox *b = NS_ARG_AS(NSBox, handle);
        r = b != nil ? (zend_long) [b titlePosition] : 0;
    }
    return r;
}

void ns_nsbox_set_title_position(zval *handle, zval *titlePosition)
{
    @autoreleasepool {
        NSBox *b = NS_ARG_AS(NSBox, handle);
        if (b == nil) return;
        [b setTitlePosition:(NSTitlePosition) ns_arg_long(titlePosition)];
    }
}

void ns_nsbox_title(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSBox *b = NS_ARG_AS(NSBox, handle);
        ns_ret_string(return_value, b != nil ? [b title] : nil);
    }
}

void ns_nsbox_set_title(zval *handle, zval *title)
{
    @autoreleasepool {
        NSBox *b = NS_ARG_AS(NSBox, handle);
        if (b == nil) return;
        [b setTitle:ns_arg_string(title)];
    }
}

zend_long ns_nsbox_title_font(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSBox *b = NS_ARG_AS(NSBox, handle);
        h = ns_handle_for(b != nil ? [b titleFont] : nil);
    }
    return h;
}

void ns_nsbox_set_title_font(zval *handle, zval *titleFont)
{
    @autoreleasepool {
        NSBox *b = NS_ARG_AS(NSBox, handle);
        if (b == nil) return;
        [b setTitleFont:NS_ARG_AS(NSFont, titleFont)];
    }
}

void ns_nsbox_border_rect(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSBox *b = NS_ARG_AS(NSBox, handle);
        ns_ret_rect(return_value, b != nil ? [b borderRect] : NSZeroRect);
    }
}

void ns_nsbox_title_rect(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSBox *b = NS_ARG_AS(NSBox, handle);
        ns_ret_rect(return_value, b != nil ? [b titleRect] : NSZeroRect);
    }
}

zend_long ns_nsbox_title_cell(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSBox *b = NS_ARG_AS(NSBox, handle);
        h = ns_handle_for(b != nil ? [b titleCell] : nil);
    }
    return h;
}

void ns_nsbox_content_view_margins(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSBox *b = NS_ARG_AS(NSBox, handle);
        ns_ret_size(return_value, b != nil ? [b contentViewMargins] : NSZeroSize);
    }
}

void ns_nsbox_set_content_view_margins(zval *handle, zval *width, zval *height)
{
    @autoreleasepool {
        NSBox *b = NS_ARG_AS(NSBox, handle);
        if (b == nil) return;
        [b setContentViewMargins:ns_arg_size(width, height)];
    }
}

void ns_nsbox_size_to_fit(zval *handle)
{
    @autoreleasepool {
        NSBox *b = NS_ARG_AS(NSBox, handle);
        if (b == nil) return;
        [b sizeToFit];
    }
}

void ns_nsbox_set_frame_from_content_frame(zval *handle, zval *x, zval *y, zval *width, zval *height)
{
    @autoreleasepool {
        NSBox *b = NS_ARG_AS(NSBox, handle);
        if (b == nil) return;
        [b setFrameFromContentFrame:ns_arg_rect(x, y, width, height)];
    }
}

zend_long ns_nsbox_content_view(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSBox *b = NS_ARG_AS(NSBox, handle);
        h = ns_handle_for(b != nil ? [b contentView] : nil);
    }
    return h;
}

void ns_nsbox_set_content_view(zval *handle, zval *contentView)
{
    @autoreleasepool {
        NSBox *b = NS_ARG_AS(NSBox, handle);
        if (b == nil) return;
        [b setContentView:NS_ARG_AS(NSView, contentView)];
    }
}

zend_long ns_nsbox_is_transparent(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSBox *b = NS_ARG_AS(NSBox, handle);
        r = (b != nil && [b isTransparent]) ? 1 : 0;
    }
    return r;
}

void ns_nsbox_set_transparent(zval *handle, zval *transparent)
{
    @autoreleasepool {
        NSBox *b = NS_ARG_AS(NSBox, handle);
        if (b == nil) return;
        [b setTransparent:ns_arg_bool(transparent)];
    }
}

double ns_nsbox_border_width(zval *handle)
{
    double r = 0.0;
    @autoreleasepool {
        NSBox *b = NS_ARG_AS(NSBox, handle);
        r = b != nil ? (double) [b borderWidth] : 0.0;
    }
    return r;
}

void ns_nsbox_set_border_width(zval *handle, zval *borderWidth)
{
    @autoreleasepool {
        NSBox *b = NS_ARG_AS(NSBox, handle);
        if (b == nil) return;
        [b setBorderWidth:ns_arg_double(borderWidth)];
    }
}

double ns_nsbox_corner_radius(zval *handle)
{
    double r = 0.0;
    @autoreleasepool {
        NSBox *b = NS_ARG_AS(NSBox, handle);
        r = b != nil ? (double) [b cornerRadius] : 0.0;
    }
    return r;
}

void ns_nsbox_set_corner_radius(zval *handle, zval *cornerRadius)
{
    @autoreleasepool {
        NSBox *b = NS_ARG_AS(NSBox, handle);
        if (b == nil) return;
        [b setCornerRadius:ns_arg_double(cornerRadius)];
    }
}

zend_long ns_nsbox_border_color(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSBox *b = NS_ARG_AS(NSBox, handle);
        h = ns_handle_for(b != nil ? [b borderColor] : nil);
    }
    return h;
}

void ns_nsbox_set_border_color(zval *handle, zval *borderColor)
{
    @autoreleasepool {
        NSBox *b = NS_ARG_AS(NSBox, handle);
        if (b == nil) return;
        [b setBorderColor:NS_ARG_AS(NSColor, borderColor)];
    }
}

zend_long ns_nsbox_fill_color(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSBox *b = NS_ARG_AS(NSBox, handle);
        h = ns_handle_for(b != nil ? [b fillColor] : nil);
    }
    return h;
}

void ns_nsbox_set_fill_color(zval *handle, zval *fillColor)
{
    @autoreleasepool {
        NSBox *b = NS_ARG_AS(NSBox, handle);
        if (b == nil) return;
        [b setFillColor:NS_ARG_AS(NSColor, fillColor)];
    }
}
