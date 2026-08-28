#include "ns-pathcontrol.h"
#include "ns-value.h"

/* ====================================================================== */
/* NSPathControl                                                          */
/* ====================================================================== */

zend_long ns_nspathcontrol_init_with_frame(zval *x, zval *y, zval *width, zval *height)
{
    @autoreleasepool {
        return ns_handle_for([[NSPathControl alloc] initWithFrame:ns_arg_rect(x, y, width, height)]);
    }
}

zend_long ns_nspathcontrol_is_editable(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSPathControl *c = NS_ARG_AS(NSPathControl, handle);
        r = (c != nil && [c isEditable]) ? 1 : 0;
    }
    return r;
}

void ns_nspathcontrol_set_editable(zval *handle, zval *editable)
{
    @autoreleasepool {
        NSPathControl *c = NS_ARG_AS(NSPathControl, handle);
        if (c == nil) return;
        [c setEditable:ns_arg_bool(editable)];
    }
}

void ns_nspathcontrol_allowed_types(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSPathControl *c = NS_ARG_AS(NSPathControl, handle);
        NSArray<NSString *> *types = c != nil ? [c allowedTypes] : nil;
        if (types == nil) { ZVAL_NULL(return_value); return; }
        ns_ret_string_array(return_value, types);
    }
}

void ns_nspathcontrol_set_allowed_types(zval *handle, zval *allowedTypes)
{
    @autoreleasepool {
        NSPathControl *c = NS_ARG_AS(NSPathControl, handle);
        if (c == nil) return;
        zval *z = ns_deref(allowedTypes);
        NSArray<NSString *> *types = (z != NULL && Z_TYPE_P(z) == IS_ARRAY) ? ns_arg_string_array(allowedTypes) : nil;
        [c setAllowedTypes:types];
    }
}

void ns_nspathcontrol_placeholder_string(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSPathControl *c = NS_ARG_AS(NSPathControl, handle);
        ns_ret_string(return_value, c != nil ? [c placeholderString] : nil);
    }
}

void ns_nspathcontrol_set_placeholder_string(zval *handle, zval *placeholderString)
{
    @autoreleasepool {
        NSPathControl *c = NS_ARG_AS(NSPathControl, handle);
        if (c == nil) return;
        [c setPlaceholderString:ns_arg_string(placeholderString)];
    }
}

zend_long ns_nspathcontrol_url(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSPathControl *c = NS_ARG_AS(NSPathControl, handle);
        h = ns_handle_for(c != nil ? [c URL] : nil);
    }
    return h;
}

void ns_nspathcontrol_set_url(zval *handle, zval *URL)
{
    @autoreleasepool {
        NSPathControl *c = NS_ARG_AS(NSPathControl, handle);
        if (c == nil) return;
        [c setURL:NS_ARG_AS(NSURL, URL)];
    }
}

void ns_nspathcontrol_double_action(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSPathControl *c = NS_ARG_AS(NSPathControl, handle);
        ns_ret_sel(return_value, c != nil ? [c doubleAction] : NULL);
    }
}

void ns_nspathcontrol_set_double_action(zval *handle, zval *doubleAction)
{
    @autoreleasepool {
        NSPathControl *c = NS_ARG_AS(NSPathControl, handle);
        if (c == nil) return;
        [c setDoubleAction:ns_arg_sel(doubleAction)];
    }
}

zend_long ns_nspathcontrol_path_style(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSPathControl *c = NS_ARG_AS(NSPathControl, handle);
        r = c != nil ? (zend_long) [c pathStyle] : 0;
    }
    return r;
}

void ns_nspathcontrol_set_path_style(zval *handle, zval *pathStyle)
{
    @autoreleasepool {
        NSPathControl *c = NS_ARG_AS(NSPathControl, handle);
        if (c == nil) return;
        [c setPathStyle:(NSPathStyle) ns_arg_long(pathStyle)];
    }
}

zend_long ns_nspathcontrol_clicked_path_item(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSPathControl *c = NS_ARG_AS(NSPathControl, handle);
        h = ns_handle_for(c != nil ? [c clickedPathItem] : nil);
    }
    return h;
}

void ns_nspathcontrol_path_items(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSPathControl *c = NS_ARG_AS(NSPathControl, handle);
        ns_ret_object_array(return_value, c != nil ? [c pathItems] : nil);
    }
}

void ns_nspathcontrol_set_path_items(zval *handle, zval *pathItems)
{
    @autoreleasepool {
        NSPathControl *c = NS_ARG_AS(NSPathControl, handle);
        if (c == nil) return;
        [c setPathItems:ns_arg_object_array(pathItems)];
    }
}

zend_long ns_nspathcontrol_background_color(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSPathControl *c = NS_ARG_AS(NSPathControl, handle);
        h = ns_handle_for(c != nil ? [c backgroundColor] : nil);
    }
    return h;
}

void ns_nspathcontrol_set_background_color(zval *handle, zval *backgroundColor)
{
    @autoreleasepool {
        NSPathControl *c = NS_ARG_AS(NSPathControl, handle);
        if (c == nil) return;
        [c setBackgroundColor:NS_ARG_AS(NSColor, backgroundColor)];
    }
}

zend_long ns_nspathcontrol_delegate(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSPathControl *c = NS_ARG_AS(NSPathControl, handle);
        h = ns_handle_for(c != nil ? [c delegate] : nil);
    }
    return h;
}

void ns_nspathcontrol_set_delegate(zval *handle, zval *delegate)
{
    @autoreleasepool {
        NSPathControl *c = NS_ARG_AS(NSPathControl, handle);
        if (c == nil) return;
        [c setDelegate:ns_arg_object(delegate)];
    }
}

void ns_nspathcontrol_set_dragging_source_operation_mask_for_local(zval *handle, zval *mask, zval *isLocal)
{
    @autoreleasepool {
        NSPathControl *c = NS_ARG_AS(NSPathControl, handle);
        if (c == nil) return;
        [c setDraggingSourceOperationMask:(NSDragOperation) ns_arg_long(mask) forLocal:ns_arg_bool(isLocal)];
    }
}

zend_long ns_nspathcontrol_menu(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSPathControl *c = NS_ARG_AS(NSPathControl, handle);
        h = ns_handle_for(c != nil ? [c menu] : nil);
    }
    return h;
}

void ns_nspathcontrol_set_menu(zval *handle, zval *menu)
{
    @autoreleasepool {
        NSPathControl *c = NS_ARG_AS(NSPathControl, handle);
        if (c == nil) return;
        [c setMenu:NS_ARG_AS(NSMenu, menu)];
    }
}
