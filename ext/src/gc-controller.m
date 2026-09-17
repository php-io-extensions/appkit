#include "gc-controller.h"
#include "ns-value.h"
#import <GameController/GameController.h>

/* ====================================================================== */
/* GCController                                                           */
/* ====================================================================== */

void ns_gccontroller_controllers(zval *return_value)
{
    @autoreleasepool {
        ns_ret_object_array(return_value, [GCController controllers]);
    }
}

zend_long ns_gccontroller_current(void)
{
    zend_long r = 0;
    @autoreleasepool {
        r = ns_handle_for([GCController current]);
    }
    return r;
}

zend_long ns_gccontroller_should_monitor_background_events(void)
{
    zend_long r = 0;
    @autoreleasepool {
        r = [GCController shouldMonitorBackgroundEvents] ? 1 : 0;
    }
    return r;
}

void ns_gccontroller_set_should_monitor_background_events(zval *value)
{
    @autoreleasepool {
        [GCController setShouldMonitorBackgroundEvents:ns_arg_bool(value)];
    }
}

zend_long ns_gccontroller_is_attached_to_device(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        GCController *c = NS_ARG_AS(GCController, handle);
        r = (c != nil && [c isAttachedToDevice]) ? 1 : 0;
    }
    return r;
}

zend_long ns_gccontroller_player_index(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        GCController *c = NS_ARG_AS(GCController, handle);
        r = c != nil ? (zend_long) [c playerIndex] : 0;
    }
    return r;
}

void ns_gccontroller_set_player_index(zval *handle, zval *playerIndex)
{
    @autoreleasepool {
        GCController *c = NS_ARG_AS(GCController, handle);
        if (c == nil) return;
        [c setPlayerIndex:(GCControllerPlayerIndex) ns_arg_long(playerIndex)];
    }
}

zend_long ns_gccontroller_micro_gamepad(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        GCController *c = NS_ARG_AS(GCController, handle);
        r = c != nil ? ns_handle_for([c microGamepad]) : 0;
    }
    return r;
}

zend_long ns_gccontroller_extended_gamepad(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        GCController *c = NS_ARG_AS(GCController, handle);
        r = c != nil ? ns_handle_for([c extendedGamepad]) : 0;
    }
    return r;
}

zend_long ns_gccontroller_is_snapshot(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        GCController *c = NS_ARG_AS(GCController, handle);
        r = (c != nil && [c isSnapshot]) ? 1 : 0;
    }
    return r;
}

/* ---- GCDevice (adopted protocol) ---- */

void ns_gccontroller_vendor_name(zval *return_value, zval *handle)
{
    @autoreleasepool {
        GCController *c = NS_ARG_AS(GCController, handle);
        ns_ret_string(return_value, c != nil ? [c vendorName] : nil);
    }
}

void ns_gccontroller_product_category(zval *return_value, zval *handle)
{
    @autoreleasepool {
        GCController *c = NS_ARG_AS(GCController, handle);
        NSString *s = c != nil ? [c productCategory] : nil;
        ns_ret_string(return_value, s != nil ? s : @"");
    }
}
