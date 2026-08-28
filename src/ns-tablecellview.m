#include "ns-tablecellview.h"
#include "ns-value.h"

/* ====================================================================== */
/* NSTableCellView                                                        */
/* ====================================================================== */

zend_long ns_nstablecellview_init_with_frame(zval *x, zval *y, zval *width, zval *height)
{
    @autoreleasepool {
        return ns_handle_for([[NSTableCellView alloc] initWithFrame:ns_arg_rect(x, y, width, height)]);
    }
}

zend_long ns_nstablecellview_object_value(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSTableCellView *v = NS_ARG_AS(NSTableCellView, handle);
        h = ns_handle_for(v != nil ? [v objectValue] : nil);
    }
    return h;
}

void ns_nstablecellview_set_object_value(zval *handle, zval *objectValue)
{
    @autoreleasepool {
        NSTableCellView *v = NS_ARG_AS(NSTableCellView, handle);
        if (v == nil) return;
        [v setObjectValue:ns_arg_object(objectValue)];
    }
}

zend_long ns_nstablecellview_text_field(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSTableCellView *v = NS_ARG_AS(NSTableCellView, handle);
        h = ns_handle_for(v != nil ? [v textField] : nil);
    }
    return h;
}

void ns_nstablecellview_set_text_field(zval *handle, zval *textField)
{
    @autoreleasepool {
        NSTableCellView *v = NS_ARG_AS(NSTableCellView, handle);
        if (v == nil) return;
        [v setTextField:NS_ARG_AS(NSTextField, textField)];
    }
}

zend_long ns_nstablecellview_image_view(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSTableCellView *v = NS_ARG_AS(NSTableCellView, handle);
        h = ns_handle_for(v != nil ? [v imageView] : nil);
    }
    return h;
}

void ns_nstablecellview_set_image_view(zval *handle, zval *imageView)
{
    @autoreleasepool {
        NSTableCellView *v = NS_ARG_AS(NSTableCellView, handle);
        if (v == nil) return;
        [v setImageView:NS_ARG_AS(NSImageView, imageView)];
    }
}

zend_long ns_nstablecellview_background_style(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSTableCellView *v = NS_ARG_AS(NSTableCellView, handle);
        r = v != nil ? (zend_long) [v backgroundStyle] : 0;
    }
    return r;
}

void ns_nstablecellview_set_background_style(zval *handle, zval *backgroundStyle)
{
    @autoreleasepool {
        NSTableCellView *v = NS_ARG_AS(NSTableCellView, handle);
        if (v == nil) return;
        [v setBackgroundStyle:(NSBackgroundStyle) ns_arg_long(backgroundStyle)];
    }
}

zend_long ns_nstablecellview_row_size_style(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSTableCellView *v = NS_ARG_AS(NSTableCellView, handle);
        r = v != nil ? (zend_long) [v rowSizeStyle] : 0;
    }
    return r;
}

void ns_nstablecellview_set_row_size_style(zval *handle, zval *rowSizeStyle)
{
    @autoreleasepool {
        NSTableCellView *v = NS_ARG_AS(NSTableCellView, handle);
        if (v == nil) return;
        [v setRowSizeStyle:(NSTableViewRowSizeStyle) ns_arg_long(rowSizeStyle)];
    }
}

void ns_nstablecellview_dragging_image_components(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSTableCellView *v = NS_ARG_AS(NSTableCellView, handle);
        ns_ret_object_array(return_value, v != nil ? [v draggingImageComponents] : nil);
    }
}
