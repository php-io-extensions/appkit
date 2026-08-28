#include "ns-statusbar.h"
#include "ns-value.h"

/* ====================================================================== */
/* NSStatusBar                                                            */
/* ====================================================================== */

zend_long ns_nsstatusbar_system_status_bar(void)
{
    zend_long h = 0;
    @autoreleasepool {
        h = ns_handle_for([NSStatusBar systemStatusBar]);
    }
    return h;
}

zend_long ns_nsstatusbar_status_item_with_length(zval *handle, zval *length)
{
    zend_long h = 0;
    @autoreleasepool {
        NSStatusBar *bar = NS_ARG_AS(NSStatusBar, handle);
        h = ns_handle_for(bar != nil ? [bar statusItemWithLength:ns_arg_double(length)] : nil);
    }
    return h;
}

void ns_nsstatusbar_remove_status_item(zval *handle, zval *item)
{
    @autoreleasepool {
        NSStatusBar *bar = NS_ARG_AS(NSStatusBar, handle);
        if (bar == nil) return;
        [bar removeStatusItem:NS_ARG_AS(NSStatusItem, item)];
    }
}

zend_long ns_nsstatusbar_is_vertical(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSStatusBar *bar = NS_ARG_AS(NSStatusBar, handle);
        r = (bar != nil && [bar isVertical]) ? 1 : 0;
    }
    return r;
}

double ns_nsstatusbar_thickness(zval *handle)
{
    double r = 0.0;
    @autoreleasepool {
        NSStatusBar *bar = NS_ARG_AS(NSStatusBar, handle);
        r = bar != nil ? [bar thickness] : 0.0;
    }
    return r;
}
