#include "gc-microgamepad.h"
#include "ns-value.h"
#import <GameController/GameController.h>

/* ====================================================================== */
/* GCMicroGamepad                                                         */
/* ====================================================================== */

zend_long ns_gcmicrogamepad_dpad(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        GCMicroGamepad *o = NS_ARG_AS(GCMicroGamepad, handle);
        r = o != nil ? ns_handle_for([o dpad]) : 0;
    }
    return r;
}

zend_long ns_gcmicrogamepad_button_a(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        GCMicroGamepad *o = NS_ARG_AS(GCMicroGamepad, handle);
        r = o != nil ? ns_handle_for([o buttonA]) : 0;
    }
    return r;
}

zend_long ns_gcmicrogamepad_button_x(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        GCMicroGamepad *o = NS_ARG_AS(GCMicroGamepad, handle);
        r = o != nil ? ns_handle_for([o buttonX]) : 0;
    }
    return r;
}

zend_long ns_gcmicrogamepad_button_menu(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        GCMicroGamepad *o = NS_ARG_AS(GCMicroGamepad, handle);
        r = o != nil ? ns_handle_for([o buttonMenu]) : 0;
    }
    return r;
}
