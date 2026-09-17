#include "gc-extendedgamepad.h"
#include "ns-value.h"
#import <GameController/GameController.h>

/* ====================================================================== */
/* GCExtendedGamepad                                                      */
/* ====================================================================== */

zend_long ns_gcextendedgamepad_controller(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        GCExtendedGamepad *o = NS_ARG_AS(GCExtendedGamepad, handle);
        r = o != nil ? ns_handle_for([o controller]) : 0;
    }
    return r;
}

zend_long ns_gcextendedgamepad_dpad(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        GCExtendedGamepad *o = NS_ARG_AS(GCExtendedGamepad, handle);
        r = o != nil ? ns_handle_for([o dpad]) : 0;
    }
    return r;
}

zend_long ns_gcextendedgamepad_button_a(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        GCExtendedGamepad *o = NS_ARG_AS(GCExtendedGamepad, handle);
        r = o != nil ? ns_handle_for([o buttonA]) : 0;
    }
    return r;
}

zend_long ns_gcextendedgamepad_button_b(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        GCExtendedGamepad *o = NS_ARG_AS(GCExtendedGamepad, handle);
        r = o != nil ? ns_handle_for([o buttonB]) : 0;
    }
    return r;
}

zend_long ns_gcextendedgamepad_button_x(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        GCExtendedGamepad *o = NS_ARG_AS(GCExtendedGamepad, handle);
        r = o != nil ? ns_handle_for([o buttonX]) : 0;
    }
    return r;
}

zend_long ns_gcextendedgamepad_button_y(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        GCExtendedGamepad *o = NS_ARG_AS(GCExtendedGamepad, handle);
        r = o != nil ? ns_handle_for([o buttonY]) : 0;
    }
    return r;
}

zend_long ns_gcextendedgamepad_button_menu(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        GCExtendedGamepad *o = NS_ARG_AS(GCExtendedGamepad, handle);
        r = o != nil ? ns_handle_for([o buttonMenu]) : 0;
    }
    return r;
}

zend_long ns_gcextendedgamepad_button_options(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        GCExtendedGamepad *o = NS_ARG_AS(GCExtendedGamepad, handle);
        r = o != nil ? ns_handle_for([o buttonOptions]) : 0;
    }
    return r;
}

zend_long ns_gcextendedgamepad_button_home(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        GCExtendedGamepad *o = NS_ARG_AS(GCExtendedGamepad, handle);
        r = o != nil ? ns_handle_for([o buttonHome]) : 0;
    }
    return r;
}

zend_long ns_gcextendedgamepad_left_thumbstick(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        GCExtendedGamepad *o = NS_ARG_AS(GCExtendedGamepad, handle);
        r = o != nil ? ns_handle_for([o leftThumbstick]) : 0;
    }
    return r;
}

zend_long ns_gcextendedgamepad_right_thumbstick(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        GCExtendedGamepad *o = NS_ARG_AS(GCExtendedGamepad, handle);
        r = o != nil ? ns_handle_for([o rightThumbstick]) : 0;
    }
    return r;
}

zend_long ns_gcextendedgamepad_left_shoulder(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        GCExtendedGamepad *o = NS_ARG_AS(GCExtendedGamepad, handle);
        r = o != nil ? ns_handle_for([o leftShoulder]) : 0;
    }
    return r;
}

zend_long ns_gcextendedgamepad_right_shoulder(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        GCExtendedGamepad *o = NS_ARG_AS(GCExtendedGamepad, handle);
        r = o != nil ? ns_handle_for([o rightShoulder]) : 0;
    }
    return r;
}

zend_long ns_gcextendedgamepad_left_trigger(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        GCExtendedGamepad *o = NS_ARG_AS(GCExtendedGamepad, handle);
        r = o != nil ? ns_handle_for([o leftTrigger]) : 0;
    }
    return r;
}

zend_long ns_gcextendedgamepad_right_trigger(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        GCExtendedGamepad *o = NS_ARG_AS(GCExtendedGamepad, handle);
        r = o != nil ? ns_handle_for([o rightTrigger]) : 0;
    }
    return r;
}

zend_long ns_gcextendedgamepad_left_thumbstick_button(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        GCExtendedGamepad *o = NS_ARG_AS(GCExtendedGamepad, handle);
        r = o != nil ? ns_handle_for([o leftThumbstickButton]) : 0;
    }
    return r;
}

zend_long ns_gcextendedgamepad_right_thumbstick_button(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        GCExtendedGamepad *o = NS_ARG_AS(GCExtendedGamepad, handle);
        r = o != nil ? ns_handle_for([o rightThumbstickButton]) : 0;
    }
    return r;
}
