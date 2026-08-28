#include "ns-switch.h"
#include "ns-value.h"

/* ====================================================================== */
/* NSSwitch                                                               */
/* ====================================================================== */

zend_long ns_nsswitch_init_with_frame(zval *x, zval *y, zval *width, zval *height)
{
    @autoreleasepool {
        return ns_handle_for([[NSSwitch alloc] initWithFrame:ns_arg_rect(x, y, width, height)]);
    }
}

zend_long ns_nsswitch_state(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSSwitch *s = NS_ARG_AS(NSSwitch, handle);
        r = s != nil ? (zend_long) [s state] : 0;
    }
    return r;
}

void ns_nsswitch_set_state(zval *handle, zval *state)
{
    @autoreleasepool {
        NSSwitch *s = NS_ARG_AS(NSSwitch, handle);
        if (s == nil) return;
        [s setState:(NSControlStateValue) ns_arg_long(state)];
    }
}
