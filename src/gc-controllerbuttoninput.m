#include "gc-controllerbuttoninput.h"
#include "ns-value.h"
#import <GameController/GameController.h>

/* ====================================================================== */
/* GCControllerButtonInput                                                */
/* ====================================================================== */

double ns_gccontrollerbuttoninput_value(zval *handle)
{
    double r = 0.0;
    @autoreleasepool {
        GCControllerButtonInput *o = NS_ARG_AS(GCControllerButtonInput, handle);
        r = o != nil ? (double) [o value] : 0.0;
    }
    return r;
}

zend_long ns_gccontrollerbuttoninput_is_pressed(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        GCControllerButtonInput *o = NS_ARG_AS(GCControllerButtonInput, handle);
        r = (o != nil && [o isPressed]) ? 1 : 0;
    }
    return r;
}

zend_long ns_gccontrollerbuttoninput_is_touched(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        GCControllerButtonInput *o = NS_ARG_AS(GCControllerButtonInput, handle);
        r = (o != nil && [o isTouched]) ? 1 : 0;
    }
    return r;
}
