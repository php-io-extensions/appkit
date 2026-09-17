#include "gc-controllerdirectionpad.h"
#include "ns-value.h"
#import <GameController/GameController.h>

/* ====================================================================== */
/* GCControllerDirectionPad                                               */
/* ====================================================================== */

zend_long ns_gccontrollerdirectionpad_x_axis(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        GCControllerDirectionPad *o = NS_ARG_AS(GCControllerDirectionPad, handle);
        r = o != nil ? ns_handle_for([o xAxis]) : 0;
    }
    return r;
}

zend_long ns_gccontrollerdirectionpad_y_axis(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        GCControllerDirectionPad *o = NS_ARG_AS(GCControllerDirectionPad, handle);
        r = o != nil ? ns_handle_for([o yAxis]) : 0;
    }
    return r;
}

zend_long ns_gccontrollerdirectionpad_up(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        GCControllerDirectionPad *o = NS_ARG_AS(GCControllerDirectionPad, handle);
        r = o != nil ? ns_handle_for([o up]) : 0;
    }
    return r;
}

zend_long ns_gccontrollerdirectionpad_down(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        GCControllerDirectionPad *o = NS_ARG_AS(GCControllerDirectionPad, handle);
        r = o != nil ? ns_handle_for([o down]) : 0;
    }
    return r;
}

zend_long ns_gccontrollerdirectionpad_left(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        GCControllerDirectionPad *o = NS_ARG_AS(GCControllerDirectionPad, handle);
        r = o != nil ? ns_handle_for([o left]) : 0;
    }
    return r;
}

zend_long ns_gccontrollerdirectionpad_right(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        GCControllerDirectionPad *o = NS_ARG_AS(GCControllerDirectionPad, handle);
        r = o != nil ? ns_handle_for([o right]) : 0;
    }
    return r;
}
