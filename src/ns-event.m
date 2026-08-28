#include "ns-event.h"
#include "ns-value.h"

/* ====================================================================== */
/* General event                                                          */
/* ====================================================================== */

zend_long ns_nsevent_type(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSEvent *e = NS_ARG_AS(NSEvent, handle);
        r = e != nil ? (zend_long) [e type] : 0;
    }
    return r;
}

zend_long ns_nsevent_modifier_flags(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSEvent *e = NS_ARG_AS(NSEvent, handle);
        r = e != nil ? (zend_long) [e modifierFlags] : 0;
    }
    return r;
}

double ns_nsevent_timestamp(zval *handle)
{
    double r = 0.0;
    @autoreleasepool {
        NSEvent *e = NS_ARG_AS(NSEvent, handle);
        r = e != nil ? (double) [e timestamp] : 0.0;
    }
    return r;
}

zend_long ns_nsevent_window(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSEvent *e = NS_ARG_AS(NSEvent, handle);
        h = ns_handle_for(e != nil ? [e window] : nil);
    }
    return h;
}

zend_long ns_nsevent_window_number(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSEvent *e = NS_ARG_AS(NSEvent, handle);
        r = e != nil ? (zend_long) [e windowNumber] : 0;
    }
    return r;
}

/* ====================================================================== */
/* Mouse                                                                  */
/* ====================================================================== */

zend_long ns_nsevent_click_count(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSEvent *e = NS_ARG_AS(NSEvent, handle);
        r = e != nil ? (zend_long) [e clickCount] : 0;
    }
    return r;
}

zend_long ns_nsevent_button_number(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSEvent *e = NS_ARG_AS(NSEvent, handle);
        r = e != nil ? (zend_long) [e buttonNumber] : 0;
    }
    return r;
}

zend_long ns_nsevent_event_number(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSEvent *e = NS_ARG_AS(NSEvent, handle);
        r = e != nil ? (zend_long) [e eventNumber] : 0;
    }
    return r;
}

double ns_nsevent_pressure(zval *handle)
{
    double r = 0.0;
    @autoreleasepool {
        NSEvent *e = NS_ARG_AS(NSEvent, handle);
        r = e != nil ? (double) [e pressure] : 0.0;
    }
    return r;
}

void ns_nsevent_location_in_window(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSEvent *e = NS_ARG_AS(NSEvent, handle);
        ns_ret_point(return_value, e != nil ? [e locationInWindow] : NSZeroPoint);
    }
}

/* ====================================================================== */
/* Deltas / scroll                                                        */
/* ====================================================================== */

double ns_nsevent_delta_x(zval *handle)
{
    double r = 0.0;
    @autoreleasepool {
        NSEvent *e = NS_ARG_AS(NSEvent, handle);
        r = e != nil ? (double) [e deltaX] : 0.0;
    }
    return r;
}

double ns_nsevent_delta_y(zval *handle)
{
    double r = 0.0;
    @autoreleasepool {
        NSEvent *e = NS_ARG_AS(NSEvent, handle);
        r = e != nil ? (double) [e deltaY] : 0.0;
    }
    return r;
}

double ns_nsevent_delta_z(zval *handle)
{
    double r = 0.0;
    @autoreleasepool {
        NSEvent *e = NS_ARG_AS(NSEvent, handle);
        r = e != nil ? (double) [e deltaZ] : 0.0;
    }
    return r;
}

zend_long ns_nsevent_has_precise_scrolling_deltas(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSEvent *e = NS_ARG_AS(NSEvent, handle);
        r = (e != nil && [e hasPreciseScrollingDeltas]) ? 1 : 0;
    }
    return r;
}

double ns_nsevent_scrolling_delta_x(zval *handle)
{
    double r = 0.0;
    @autoreleasepool {
        NSEvent *e = NS_ARG_AS(NSEvent, handle);
        r = e != nil ? (double) [e scrollingDeltaX] : 0.0;
    }
    return r;
}

double ns_nsevent_scrolling_delta_y(zval *handle)
{
    double r = 0.0;
    @autoreleasepool {
        NSEvent *e = NS_ARG_AS(NSEvent, handle);
        r = e != nil ? (double) [e scrollingDeltaY] : 0.0;
    }
    return r;
}

zend_long ns_nsevent_momentum_phase(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSEvent *e = NS_ARG_AS(NSEvent, handle);
        r = e != nil ? (zend_long) [e momentumPhase] : 0;
    }
    return r;
}

zend_long ns_nsevent_is_direction_inverted_from_device(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSEvent *e = NS_ARG_AS(NSEvent, handle);
        r = (e != nil && [e isDirectionInvertedFromDevice]) ? 1 : 0;
    }
    return r;
}

/* ====================================================================== */
/* Keyboard                                                               */
/* ====================================================================== */

void ns_nsevent_characters(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSEvent *e = NS_ARG_AS(NSEvent, handle);
        ns_ret_string(return_value, e != nil ? [e characters] : nil);
    }
}

void ns_nsevent_characters_ignoring_modifiers(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSEvent *e = NS_ARG_AS(NSEvent, handle);
        ns_ret_string(return_value, e != nil ? [e charactersIgnoringModifiers] : nil);
    }
}

void ns_nsevent_characters_by_applying_modifiers(zval *return_value, zval *handle, zval *modifiers)
{
    @autoreleasepool {
        NSEvent *e = NS_ARG_AS(NSEvent, handle);
        ns_ret_string(return_value, e != nil ? [e charactersByApplyingModifiers:(NSEventModifierFlags) ns_arg_long(modifiers)] : nil);
    }
}

zend_long ns_nsevent_is_a_repeat(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSEvent *e = NS_ARG_AS(NSEvent, handle);
        r = (e != nil && [e isARepeat]) ? 1 : 0;
    }
    return r;
}

zend_long ns_nsevent_key_code(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSEvent *e = NS_ARG_AS(NSEvent, handle);
        r = e != nil ? (zend_long) [e keyCode] : 0;
    }
    return r;
}

/* ====================================================================== */
/* Tracking / enter-exit                                                  */
/* ====================================================================== */

zend_long ns_nsevent_tracking_number(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSEvent *e = NS_ARG_AS(NSEvent, handle);
        r = e != nil ? (zend_long) [e trackingNumber] : 0;
    }
    return r;
}

zend_long ns_nsevent_user_data(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSEvent *e = NS_ARG_AS(NSEvent, handle);
        r = e != nil ? (zend_long) (uintptr_t) [e userData] : 0;
    }
    return r;
}

zend_long ns_nsevent_tracking_area(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSEvent *e = NS_ARG_AS(NSEvent, handle);
        h = ns_handle_for(e != nil ? [e trackingArea] : nil);
    }
    return h;
}

/* ====================================================================== */
/* Defined-event payload                                                  */
/* ====================================================================== */

zend_long ns_nsevent_subtype(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSEvent *e = NS_ARG_AS(NSEvent, handle);
        r = e != nil ? (zend_long) [e subtype] : 0;
    }
    return r;
}

zend_long ns_nsevent_data1(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSEvent *e = NS_ARG_AS(NSEvent, handle);
        r = e != nil ? (zend_long) [e data1] : 0;
    }
    return r;
}

zend_long ns_nsevent_data2(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSEvent *e = NS_ARG_AS(NSEvent, handle);
        r = e != nil ? (zend_long) [e data2] : 0;
    }
    return r;
}

/* ====================================================================== */
/* EventRef / CGEvent                                                     */
/* ====================================================================== */

zend_long ns_nsevent_event_with_event_ref(zval *eventRef)
{
    zend_long h = 0;
    @autoreleasepool {
        const void *ref = (const void *) (uintptr_t) ns_arg_long(eventRef);
        h = ns_handle_for([NSEvent eventWithEventRef:ref]);
    }
    return h;
}

zend_long ns_nsevent_event_with_cg_event(zval *cgEvent)
{
    zend_long h = 0;
    @autoreleasepool {
        CGEventRef cg = (CGEventRef) (uintptr_t) ns_arg_long(cgEvent);
        h = ns_handle_for([NSEvent eventWithCGEvent:cg]);
    }
    return h;
}

/* ====================================================================== */
/* Mouse coalescing (class)                                               */
/* ====================================================================== */

zend_long ns_nsevent_is_mouse_coalescing_enabled(void)
{
    zend_long r = 0;
    @autoreleasepool {
        r = [NSEvent isMouseCoalescingEnabled] ? 1 : 0;
    }
    return r;
}

void ns_nsevent_set_mouse_coalescing_enabled(zval *flag)
{
    @autoreleasepool {
        [NSEvent setMouseCoalescingEnabled:ns_arg_bool(flag)];
    }
}

/* ====================================================================== */
/* Magnify / tablet                                                       */
/* ====================================================================== */

double ns_nsevent_magnification(zval *handle)
{
    double r = 0.0;
    @autoreleasepool {
        NSEvent *e = NS_ARG_AS(NSEvent, handle);
        r = e != nil ? (double) [e magnification] : 0.0;
    }
    return r;
}

zend_long ns_nsevent_device_id(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSEvent *e = NS_ARG_AS(NSEvent, handle);
        r = e != nil ? (zend_long) [e deviceID] : 0;
    }
    return r;
}

double ns_nsevent_rotation(zval *handle)
{
    double r = 0.0;
    @autoreleasepool {
        NSEvent *e = NS_ARG_AS(NSEvent, handle);
        r = e != nil ? (double) [e rotation] : 0.0;
    }
    return r;
}

zend_long ns_nsevent_absolute_x(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSEvent *e = NS_ARG_AS(NSEvent, handle);
        r = e != nil ? (zend_long) [e absoluteX] : 0;
    }
    return r;
}

zend_long ns_nsevent_absolute_y(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSEvent *e = NS_ARG_AS(NSEvent, handle);
        r = e != nil ? (zend_long) [e absoluteY] : 0;
    }
    return r;
}

zend_long ns_nsevent_absolute_z(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSEvent *e = NS_ARG_AS(NSEvent, handle);
        r = e != nil ? (zend_long) [e absoluteZ] : 0;
    }
    return r;
}

zend_long ns_nsevent_button_mask(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSEvent *e = NS_ARG_AS(NSEvent, handle);
        r = e != nil ? (zend_long) [e buttonMask] : 0;
    }
    return r;
}

void ns_nsevent_tilt(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSEvent *e = NS_ARG_AS(NSEvent, handle);
        ns_ret_point(return_value, e != nil ? [e tilt] : NSZeroPoint);
    }
}

double ns_nsevent_tangential_pressure(zval *handle)
{
    double r = 0.0;
    @autoreleasepool {
        NSEvent *e = NS_ARG_AS(NSEvent, handle);
        r = e != nil ? (double) [e tangentialPressure] : 0.0;
    }
    return r;
}

zend_long ns_nsevent_vendor_defined(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSEvent *e = NS_ARG_AS(NSEvent, handle);
        h = ns_handle_for(e != nil ? [e vendorDefined] : nil);
    }
    return h;
}

zend_long ns_nsevent_vendor_id(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSEvent *e = NS_ARG_AS(NSEvent, handle);
        r = e != nil ? (zend_long) [e vendorID] : 0;
    }
    return r;
}

zend_long ns_nsevent_tablet_id(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSEvent *e = NS_ARG_AS(NSEvent, handle);
        r = e != nil ? (zend_long) [e tabletID] : 0;
    }
    return r;
}

zend_long ns_nsevent_pointing_device_id(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSEvent *e = NS_ARG_AS(NSEvent, handle);
        r = e != nil ? (zend_long) [e pointingDeviceID] : 0;
    }
    return r;
}

zend_long ns_nsevent_system_tablet_id(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSEvent *e = NS_ARG_AS(NSEvent, handle);
        r = e != nil ? (zend_long) [e systemTabletID] : 0;
    }
    return r;
}

zend_long ns_nsevent_vendor_pointing_device_type(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSEvent *e = NS_ARG_AS(NSEvent, handle);
        r = e != nil ? (zend_long) [e vendorPointingDeviceType] : 0;
    }
    return r;
}

zend_long ns_nsevent_pointing_device_serial_number(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSEvent *e = NS_ARG_AS(NSEvent, handle);
        r = e != nil ? (zend_long) [e pointingDeviceSerialNumber] : 0;
    }
    return r;
}

zend_long ns_nsevent_unique_id(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSEvent *e = NS_ARG_AS(NSEvent, handle);
        r = e != nil ? (zend_long) [e uniqueID] : 0;
    }
    return r;
}

zend_long ns_nsevent_capability_mask(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSEvent *e = NS_ARG_AS(NSEvent, handle);
        r = e != nil ? (zend_long) [e capabilityMask] : 0;
    }
    return r;
}

zend_long ns_nsevent_pointing_device_type(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSEvent *e = NS_ARG_AS(NSEvent, handle);
        r = e != nil ? (zend_long) [e pointingDeviceType] : 0;
    }
    return r;
}

zend_long ns_nsevent_is_entering_proximity(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSEvent *e = NS_ARG_AS(NSEvent, handle);
        r = (e != nil && [e isEnteringProximity]) ? 1 : 0;
    }
    return r;
}

/* ====================================================================== */
/* Touches                                                                */
/* ====================================================================== */

void ns_nsevent_touches_matching_phase_in_view(zval *return_value, zval *handle, zval *phase, zval *view)
{
    @autoreleasepool {
        NSEvent *e = NS_ARG_AS(NSEvent, handle);
        NSSet *set = e != nil ? [e touchesMatchingPhase:(NSTouchPhase) ns_arg_long(phase) inView:NS_ARG_AS(NSView, view)] : nil;
        array_init(return_value);
        for (id o in set) {
            add_next_index_long(return_value, ns_handle_for(o));
        }
    }
}

void ns_nsevent_all_touches(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSEvent *e = NS_ARG_AS(NSEvent, handle);
        NSSet *set = e != nil ? [e allTouches] : nil;
        array_init(return_value);
        for (id o in set) {
            add_next_index_long(return_value, ns_handle_for(o));
        }
    }
}

void ns_nsevent_touches_for_view(zval *return_value, zval *handle, zval *view)
{
    @autoreleasepool {
        NSEvent *e = NS_ARG_AS(NSEvent, handle);
        NSSet *set = e != nil ? [e touchesForView:NS_ARG_AS(NSView, view)] : nil;
        array_init(return_value);
        for (id o in set) {
            add_next_index_long(return_value, ns_handle_for(o));
        }
    }
}

void ns_nsevent_coalesced_touches_for_touch(zval *return_value, zval *handle, zval *touch)
{
    @autoreleasepool {
        NSEvent *e = NS_ARG_AS(NSEvent, handle);
        ns_ret_object_array(return_value, e != nil ? [e coalescedTouchesForTouch:NS_ARG_AS(NSTouch, touch)] : nil);
    }
}

/* ====================================================================== */
/* Gesture phase / pressure                                               */
/* ====================================================================== */

zend_long ns_nsevent_phase(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSEvent *e = NS_ARG_AS(NSEvent, handle);
        r = e != nil ? (zend_long) [e phase] : 0;
    }
    return r;
}

zend_long ns_nsevent_stage(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSEvent *e = NS_ARG_AS(NSEvent, handle);
        r = e != nil ? (zend_long) [e stage] : 0;
    }
    return r;
}

double ns_nsevent_stage_transition(zval *handle)
{
    double r = 0.0;
    @autoreleasepool {
        NSEvent *e = NS_ARG_AS(NSEvent, handle);
        r = e != nil ? (double) [e stageTransition] : 0.0;
    }
    return r;
}

zend_long ns_nsevent_associated_events_mask(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSEvent *e = NS_ARG_AS(NSEvent, handle);
        r = e != nil ? (zend_long) [e associatedEventsMask] : 0;
    }
    return r;
}

zend_long ns_nsevent_pressure_behavior(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSEvent *e = NS_ARG_AS(NSEvent, handle);
        r = e != nil ? (zend_long) [e pressureBehavior] : 0;
    }
    return r;
}

/* ====================================================================== */
/* Swipe tracking                                                         */
/* ====================================================================== */

zend_long ns_nsevent_is_swipe_tracking_from_scroll_events_enabled(void)
{
    zend_long r = 0;
    @autoreleasepool {
        r = [NSEvent isSwipeTrackingFromScrollEventsEnabled] ? 1 : 0;
    }
    return r;
}

/* ====================================================================== */
/* Periodic events                                                        */
/* ====================================================================== */

void ns_nsevent_start_periodic_events_after_delay_with_period(zval *delay, zval *period)
{
    @autoreleasepool {
        [NSEvent startPeriodicEventsAfterDelay:ns_arg_double(delay) withPeriod:ns_arg_double(period)];
    }
}

void ns_nsevent_stop_periodic_events(void)
{
    @autoreleasepool {
        [NSEvent stopPeriodicEvents];
    }
}

/* ====================================================================== */
/* Factories                                                              */
/* ====================================================================== */

zend_long ns_nsevent_mouse_event_with_type_location_modifier_flags_timestamp_window_number_context_event_number_click_count_pressure(zval *type, zval *x, zval *y, zval *flags, zval *timestamp, zval *windowNumber, zval *context, zval *eventNumber, zval *clickCount, zval *pressure)
{
    zend_long h = 0;
    @autoreleasepool {
        h = ns_handle_for([NSEvent mouseEventWithType:(NSEventType) ns_arg_long(type)
                                             location:ns_arg_point(x, y)
                                        modifierFlags:(NSEventModifierFlags) ns_arg_long(flags)
                                            timestamp:ns_arg_double(timestamp)
                                         windowNumber:ns_arg_long(windowNumber)
                                              context:NS_ARG_AS(NSGraphicsContext, context)
                                          eventNumber:ns_arg_long(eventNumber)
                                           clickCount:ns_arg_long(clickCount)
                                             pressure:(float) ns_arg_double(pressure)]);
    }
    return h;
}

zend_long ns_nsevent_key_event_with_type_location_modifier_flags_timestamp_window_number_context_characters_characters_ignoring_modifiers_is_a_repeat_key_code(zval *type, zval *x, zval *y, zval *flags, zval *timestamp, zval *windowNumber, zval *context, zval *characters, zval *charactersIgnoringModifiers, zval *flag, zval *code)
{
    zend_long h = 0;
    @autoreleasepool {
        h = ns_handle_for([NSEvent keyEventWithType:(NSEventType) ns_arg_long(type)
                                           location:ns_arg_point(x, y)
                                      modifierFlags:(NSEventModifierFlags) ns_arg_long(flags)
                                          timestamp:ns_arg_double(timestamp)
                                       windowNumber:ns_arg_long(windowNumber)
                                            context:NS_ARG_AS(NSGraphicsContext, context)
                                         characters:ns_arg_string(characters)
                       charactersIgnoringModifiers:ns_arg_string(charactersIgnoringModifiers)
                                          isARepeat:ns_arg_bool(flag)
                                            keyCode:(unsigned short) ns_arg_long(code)]);
    }
    return h;
}

zend_long ns_nsevent_enter_exit_event_with_type_location_modifier_flags_timestamp_window_number_context_event_number_tracking_number_user_data(zval *type, zval *x, zval *y, zval *flags, zval *timestamp, zval *windowNumber, zval *context, zval *eventNumber, zval *trackingNumber, zval *userData)
{
    zend_long h = 0;
    @autoreleasepool {
        h = ns_handle_for([NSEvent enterExitEventWithType:(NSEventType) ns_arg_long(type)
                                                 location:ns_arg_point(x, y)
                                            modifierFlags:(NSEventModifierFlags) ns_arg_long(flags)
                                                timestamp:ns_arg_double(timestamp)
                                             windowNumber:ns_arg_long(windowNumber)
                                                  context:NS_ARG_AS(NSGraphicsContext, context)
                                              eventNumber:ns_arg_long(eventNumber)
                                           trackingNumber:ns_arg_long(trackingNumber)
                                                 userData:(void *) (uintptr_t) ns_arg_long(userData)]);
    }
    return h;
}

zend_long ns_nsevent_other_event_with_type_location_modifier_flags_timestamp_window_number_context_subtype_data1_data2(zval *type, zval *x, zval *y, zval *flags, zval *timestamp, zval *windowNumber, zval *context, zval *subtype, zval *data1, zval *data2)
{
    zend_long h = 0;
    @autoreleasepool {
        h = ns_handle_for([NSEvent otherEventWithType:(NSEventType) ns_arg_long(type)
                                             location:ns_arg_point(x, y)
                                        modifierFlags:(NSEventModifierFlags) ns_arg_long(flags)
                                            timestamp:ns_arg_double(timestamp)
                                         windowNumber:ns_arg_long(windowNumber)
                                              context:NS_ARG_AS(NSGraphicsContext, context)
                                              subtype:(short) ns_arg_long(subtype)
                                                data1:ns_arg_long(data1)
                                                data2:ns_arg_long(data2)]);
    }
    return h;
}

/* ====================================================================== */
/* Class input state                                                      */
/* ====================================================================== */

void ns_nsevent_mouse_location(zval *return_value)
{
    @autoreleasepool {
        ns_ret_point(return_value, [NSEvent mouseLocation]);
    }
}

zend_long ns_nsevent_modifier_flags_class(void)
{
    zend_long r = 0;
    @autoreleasepool {
        r = (zend_long) [NSEvent modifierFlags];
    }
    return r;
}

zend_long ns_nsevent_pressed_mouse_buttons(void)
{
    zend_long r = 0;
    @autoreleasepool {
        r = (zend_long) [NSEvent pressedMouseButtons];
    }
    return r;
}

double ns_nsevent_double_click_interval(void)
{
    double r = 0.0;
    @autoreleasepool {
        r = (double) [NSEvent doubleClickInterval];
    }
    return r;
}

double ns_nsevent_key_repeat_delay(void)
{
    double r = 0.0;
    @autoreleasepool {
        r = (double) [NSEvent keyRepeatDelay];
    }
    return r;
}

double ns_nsevent_key_repeat_interval(void)
{
    double r = 0.0;
    @autoreleasepool {
        r = (double) [NSEvent keyRepeatInterval];
    }
    return r;
}

/* ====================================================================== */
/* Event monitors                                                         */
/* ====================================================================== */

void ns_nsevent_remove_monitor(zval *eventMonitor)
{
    @autoreleasepool {
        id monitor = ns_arg_object(eventMonitor);
        if (monitor == nil) return;
        [NSEvent removeMonitor:monitor];
    }
}
