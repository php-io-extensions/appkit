#include "ns-pathcontrolitem.h"
#include "ns-value.h"

/* ====================================================================== */
/* NSPathControlItem                                                      */
/* ====================================================================== */

zend_long ns_nspathcontrolitem_init(void)
{
    @autoreleasepool {
        return ns_handle_for([[NSPathControlItem alloc] init]);
    }
}

void ns_nspathcontrolitem_title(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSPathControlItem *item = NS_ARG_AS(NSPathControlItem, handle);
        ns_ret_string(return_value, item != nil ? [item title] : nil);
    }
}

void ns_nspathcontrolitem_set_title(zval *handle, zval *title)
{
    @autoreleasepool {
        NSPathControlItem *item = NS_ARG_AS(NSPathControlItem, handle);
        if (item == nil) return;
        [item setTitle:ns_arg_string(title)];
    }
}

zend_long ns_nspathcontrolitem_image(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSPathControlItem *item = NS_ARG_AS(NSPathControlItem, handle);
        h = ns_handle_for(item != nil ? [item image] : nil);
    }
    return h;
}

void ns_nspathcontrolitem_set_image(zval *handle, zval *image)
{
    @autoreleasepool {
        NSPathControlItem *item = NS_ARG_AS(NSPathControlItem, handle);
        if (item == nil) return;
        [item setImage:NS_ARG_AS(NSImage, image)];
    }
}

zend_long ns_nspathcontrolitem_url(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSPathControlItem *item = NS_ARG_AS(NSPathControlItem, handle);
        h = ns_handle_for(item != nil ? [item URL] : nil);
    }
    return h;
}
