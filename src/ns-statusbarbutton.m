#include "ns-statusbarbutton.h"
#include "ns-value.h"

/* ====================================================================== */
/* NSStatusBarButton                                                      */
/* ====================================================================== */

zend_long ns_nsstatusbarbutton_init_with_frame(zval *x, zval *y, zval *width, zval *height)
{
    @autoreleasepool {
        return ns_handle_for([[NSStatusBarButton alloc] initWithFrame:ns_arg_rect(x, y, width, height)]);
    }
}

zend_long ns_nsstatusbarbutton_appears_disabled(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSStatusBarButton *b = NS_ARG_AS(NSStatusBarButton, handle);
        r = (b != nil && [b appearsDisabled]) ? 1 : 0;
    }
    return r;
}

void ns_nsstatusbarbutton_set_appears_disabled(zval *handle, zval *appearsDisabled)
{
    @autoreleasepool {
        NSStatusBarButton *b = NS_ARG_AS(NSStatusBarButton, handle);
        if (b == nil) return;
        [b setAppearsDisabled:ns_arg_bool(appearsDisabled)];
    }
}
