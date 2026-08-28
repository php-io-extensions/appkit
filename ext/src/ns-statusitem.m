#include "ns-statusitem.h"
#include "ns-value.h"

/* ====================================================================== */
/* NSStatusItem                                                           */
/* ====================================================================== */

zend_long ns_nsstatusitem_init(void)
{
    @autoreleasepool {
        return ns_handle_for([[NSStatusItem alloc] init]);
    }
}

zend_long ns_nsstatusitem_status_bar(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSStatusItem *item = NS_ARG_AS(NSStatusItem, handle);
        h = ns_handle_for(item != nil ? [item statusBar] : nil);
    }
    return h;
}

double ns_nsstatusitem_length(zval *handle)
{
    double r = 0.0;
    @autoreleasepool {
        NSStatusItem *item = NS_ARG_AS(NSStatusItem, handle);
        r = item != nil ? [item length] : 0.0;
    }
    return r;
}

void ns_nsstatusitem_set_length(zval *handle, zval *length)
{
    @autoreleasepool {
        NSStatusItem *item = NS_ARG_AS(NSStatusItem, handle);
        if (item == nil) return;
        [item setLength:ns_arg_double(length)];
    }
}

zend_long ns_nsstatusitem_menu(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSStatusItem *item = NS_ARG_AS(NSStatusItem, handle);
        h = ns_handle_for(item != nil ? [item menu] : nil);
    }
    return h;
}

void ns_nsstatusitem_set_menu(zval *handle, zval *menu)
{
    @autoreleasepool {
        NSStatusItem *item = NS_ARG_AS(NSStatusItem, handle);
        if (item == nil) return;
        [item setMenu:NS_ARG_AS(NSMenu, menu)];
    }
}

zend_long ns_nsstatusitem_button(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSStatusItem *item = NS_ARG_AS(NSStatusItem, handle);
        h = ns_handle_for(item != nil ? [item button] : nil);
    }
    return h;
}

zend_long ns_nsstatusitem_behavior(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSStatusItem *item = NS_ARG_AS(NSStatusItem, handle);
        r = item != nil ? (zend_long) [item behavior] : 0;
    }
    return r;
}

void ns_nsstatusitem_set_behavior(zval *handle, zval *behavior)
{
    @autoreleasepool {
        NSStatusItem *item = NS_ARG_AS(NSStatusItem, handle);
        if (item == nil) return;
        [item setBehavior:(NSStatusItemBehavior) ns_arg_long(behavior)];
    }
}

zend_long ns_nsstatusitem_is_visible(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSStatusItem *item = NS_ARG_AS(NSStatusItem, handle);
        r = (item != nil && [item isVisible]) ? 1 : 0;
    }
    return r;
}

void ns_nsstatusitem_set_visible(zval *handle, zval *visible)
{
    @autoreleasepool {
        NSStatusItem *item = NS_ARG_AS(NSStatusItem, handle);
        if (item == nil) return;
        [item setVisible:ns_arg_bool(visible)];
    }
}

void ns_nsstatusitem_autosave_name(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSStatusItem *item = NS_ARG_AS(NSStatusItem, handle);
        ns_ret_string(return_value, item != nil ? [item autosaveName] : nil);
    }
}

void ns_nsstatusitem_set_autosave_name(zval *handle, zval *autosaveName)
{
    @autoreleasepool {
        NSStatusItem *item = NS_ARG_AS(NSStatusItem, handle);
        if (item == nil) return;
        [item setAutosaveName:ns_arg_string(autosaveName)];
    }
}
