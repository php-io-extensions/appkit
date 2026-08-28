#include "ns-pathcell.h"
#include "ns-value.h"

/* ====================================================================== */
/* NSPathCell                                                             */
/* ====================================================================== */

zend_long ns_nspathcell_init_text_cell(zval *string_)
{
    @autoreleasepool {
        return ns_handle_for([[NSPathCell alloc] initTextCell:ns_arg_string(string_)]);
    }
}

zend_long ns_nspathcell_init_image_cell(zval *image)
{
    @autoreleasepool {
        return ns_handle_for([[NSPathCell alloc] initImageCell:NS_ARG_AS(NSImage, image)]);
    }
}

zend_long ns_nspathcell_path_style(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSPathCell *c = NS_ARG_AS(NSPathCell, handle);
        r = c != nil ? (zend_long) [c pathStyle] : 0;
    }
    return r;
}

void ns_nspathcell_set_path_style(zval *handle, zval *pathStyle)
{
    @autoreleasepool {
        NSPathCell *c = NS_ARG_AS(NSPathCell, handle);
        if (c == nil) return;
        [c setPathStyle:(NSPathStyle) ns_arg_long(pathStyle)];
    }
}

zend_long ns_nspathcell_url(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSPathCell *c = NS_ARG_AS(NSPathCell, handle);
        h = ns_handle_for(c != nil ? [c URL] : nil);
    }
    return h;
}

void ns_nspathcell_set_url(zval *handle, zval *URL)
{
    @autoreleasepool {
        NSPathCell *c = NS_ARG_AS(NSPathCell, handle);
        if (c == nil) return;
        [c setURL:NS_ARG_AS(NSURL, URL)];
    }
}

void ns_nspathcell_set_object_value(zval *handle, zval *obj)
{
    @autoreleasepool {
        NSPathCell *c = NS_ARG_AS(NSPathCell, handle);
        if (c == nil) return;
        [c setObjectValue:ns_arg_object(obj)];
    }
}

void ns_nspathcell_allowed_types(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSPathCell *c = NS_ARG_AS(NSPathCell, handle);
        NSArray<NSString *> *types = c != nil ? [c allowedTypes] : nil;
        if (types == nil) { ZVAL_NULL(return_value); return; }
        ns_ret_string_array(return_value, types);
    }
}

void ns_nspathcell_set_allowed_types(zval *handle, zval *allowedTypes)
{
    @autoreleasepool {
        NSPathCell *c = NS_ARG_AS(NSPathCell, handle);
        if (c == nil) return;
        zval *z = ns_deref(allowedTypes);
        NSArray<NSString *> *types = (z != NULL && Z_TYPE_P(z) == IS_ARRAY) ? ns_arg_string_array(allowedTypes) : nil;
        [c setAllowedTypes:types];
    }
}

zend_long ns_nspathcell_delegate(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSPathCell *c = NS_ARG_AS(NSPathCell, handle);
        h = ns_handle_for(c != nil ? [c delegate] : nil);
    }
    return h;
}

void ns_nspathcell_set_delegate(zval *handle, zval *delegate)
{
    @autoreleasepool {
        NSPathCell *c = NS_ARG_AS(NSPathCell, handle);
        if (c == nil) return;
        [c setDelegate:ns_arg_object(delegate)];
    }
}

void ns_nspathcell_path_component_cells(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSPathCell *c = NS_ARG_AS(NSPathCell, handle);
        ns_ret_object_array(return_value, c != nil ? [c pathComponentCells] : nil);
    }
}

void ns_nspathcell_set_path_component_cells(zval *handle, zval *pathComponentCells)
{
    @autoreleasepool {
        NSPathCell *c = NS_ARG_AS(NSPathCell, handle);
        if (c == nil) return;
        [c setPathComponentCells:ns_arg_object_array(pathComponentCells)];
    }
}

void ns_nspathcell_rect_of_path_component_cell_with_frame_in_view(zval *return_value, zval *handle, zval *cell, zval *x, zval *y, zval *width, zval *height, zval *view)
{
    @autoreleasepool {
        NSPathCell *c = NS_ARG_AS(NSPathCell, handle);
        ns_ret_rect(return_value, c != nil ? [c rectOfPathComponentCell:NS_ARG_AS(NSPathComponentCell, cell) withFrame:ns_arg_rect(x, y, width, height) inView:NS_ARG_AS(NSView, view)] : NSZeroRect);
    }
}

zend_long ns_nspathcell_path_component_cell_at_point_with_frame_in_view(zval *handle, zval *locationX, zval *locationY, zval *x, zval *y, zval *width, zval *height, zval *view)
{
    zend_long h = 0;
    @autoreleasepool {
        NSPathCell *c = NS_ARG_AS(NSPathCell, handle);
        h = ns_handle_for(c != nil ? [c pathComponentCellAtPoint:ns_arg_point(locationX, locationY) withFrame:ns_arg_rect(x, y, width, height) inView:NS_ARG_AS(NSView, view)] : nil);
    }
    return h;
}

zend_long ns_nspathcell_clicked_path_component_cell(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSPathCell *c = NS_ARG_AS(NSPathCell, handle);
        h = ns_handle_for(c != nil ? [c clickedPathComponentCell] : nil);
    }
    return h;
}

void ns_nspathcell_mouse_entered_with_frame_in_view(zval *handle, zval *event, zval *x, zval *y, zval *width, zval *height, zval *view)
{
    @autoreleasepool {
        NSPathCell *c = NS_ARG_AS(NSPathCell, handle);
        if (c == nil) return;
        [c mouseEntered:NS_ARG_AS(NSEvent, event) withFrame:ns_arg_rect(x, y, width, height) inView:NS_ARG_AS(NSView, view)];
    }
}

void ns_nspathcell_mouse_exited_with_frame_in_view(zval *handle, zval *event, zval *x, zval *y, zval *width, zval *height, zval *view)
{
    @autoreleasepool {
        NSPathCell *c = NS_ARG_AS(NSPathCell, handle);
        if (c == nil) return;
        [c mouseExited:NS_ARG_AS(NSEvent, event) withFrame:ns_arg_rect(x, y, width, height) inView:NS_ARG_AS(NSView, view)];
    }
}

void ns_nspathcell_double_action(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSPathCell *c = NS_ARG_AS(NSPathCell, handle);
        ns_ret_sel(return_value, c != nil ? [c doubleAction] : NULL);
    }
}

void ns_nspathcell_set_double_action(zval *handle, zval *doubleAction)
{
    @autoreleasepool {
        NSPathCell *c = NS_ARG_AS(NSPathCell, handle);
        if (c == nil) return;
        [c setDoubleAction:ns_arg_sel(doubleAction)];
    }
}

zend_long ns_nspathcell_background_color(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSPathCell *c = NS_ARG_AS(NSPathCell, handle);
        h = ns_handle_for(c != nil ? [c backgroundColor] : nil);
    }
    return h;
}

void ns_nspathcell_set_background_color(zval *handle, zval *backgroundColor)
{
    @autoreleasepool {
        NSPathCell *c = NS_ARG_AS(NSPathCell, handle);
        if (c == nil) return;
        [c setBackgroundColor:NS_ARG_AS(NSColor, backgroundColor)];
    }
}

void ns_nspathcell_placeholder_string(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSPathCell *c = NS_ARG_AS(NSPathCell, handle);
        ns_ret_string(return_value, c != nil ? [c placeholderString] : nil);
    }
}

void ns_nspathcell_set_placeholder_string(zval *handle, zval *placeholderString)
{
    @autoreleasepool {
        NSPathCell *c = NS_ARG_AS(NSPathCell, handle);
        if (c == nil) return;
        [c setPlaceholderString:ns_arg_string(placeholderString)];
    }
}
