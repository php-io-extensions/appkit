#ifndef PHP_APPKIT_NS_EVENT_H
#define PHP_APPKIT_NS_EVENT_H

/*
 * Faithful 1:1 binding of AppKit NSEvent.h. Every member of the
 * single base interface is either bound or reserved. Nothing is
 * omitted. There are no same-file categories on NSEvent. Adopted
 * NSCopying / NSCoding are not class members (this header does
 * not redeclare encodeWithCoder: / initWithCoder: / copy). The
 * NSEventType / NSEventMask / NSEventModifierFlags /
 * NSPointingDeviceType / NSEventButtonMask / NSEventPhase /
 * NSEventGestureAxis / NSEventSwipeTrackingOptions /
 * NSEventSubtype / NSPressureBehavior typedefs, the deprecated
 * NS*Mask / NS*EventType aliases, NSEventMaskFromType, and the
 * function-key Unicode enum are not class members. This header
 * declares no initializer — construction is the class factory
 * methods (not alloc+init). Inherited NSObject members stay on
 * that class.
 *
 * Reserved: the context property (API_DEPRECATED); eventRef
 * (const void * / NS_RETURNS_INNER_POINTER, no EventRef
 * registry); the CGEvent getter (CGEventRef, no CFType
 * registry); trackSwipeEventWithOptions:dampenAmountThresholdMin:
 * max:usingHandler: (block); addGlobalMonitorForEventsMatchingMask:
 * handler: and addLocalMonitorForEventsMatchingMask:handler:
 * (blocks). eventWithEventRef: / eventWithCGEvent: take the
 * matching opaque pointer as int pointer bits (0 = NULL), not a
 * registry handle. userData (void * / NS_RETURNS_INNER_POINTER)
 * crosses as int pointer bits, valid while the event handle
 * lives. Flattened collision: instance modifierFlags stays
 * modifierFlags; the class property emits as modifierFlagsClass
 * (live device state, independent of any event).
 *
 * Nullable characters / charactersIgnoringModifiers /
 * charactersByApplyingModifiers: cross as var. Window /
 * graphics-context / tracking-area / vendorDefined / touch /
 * view / event-monitor objects cross as int handles (0 = nil).
 * NSPoint (locationInWindow, tilt, mouseLocation) is {x, y}.
 * NSTimeInterval / CGFloat / float cross as double. NSEventType /
 * NSEventModifierFlags / NSEventSubtype / NSEventPhase /
 * NSEventMask / NSEventButtonMask / NSPointingDeviceType /
 * NSPressureBehavior / NSTouchPhase / unsigned short keyCode /
 * unsigned long long uniqueID / NSInteger / NSUInteger cross as
 * int. NSSet of NSTouch (touchesMatchingPhase:inView: /
 * allTouches / touchesForView:) and NSArray of NSTouch
 * (coalescedTouchesForTouch:) marshal as arrays of handles.
 * getter=isARepeat / isDirectionInvertedFromDevice /
 * isEnteringProximity / isMouseCoalescingEnabled /
 * isSwipeTrackingFromScrollEventsEnabled emit under those names.
 */

#include "php.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ---- General event ---- */

/*@zep NS\NSEvent type(int handle) -> int */
zend_long ns_nsevent_type(zval *handle);
/*@zep NS\NSEvent modifierFlags(int handle) -> int */
zend_long ns_nsevent_modifier_flags(zval *handle);
/*@zep NS\NSEvent timestamp(int handle) -> double */
double ns_nsevent_timestamp(zval *handle);
/*@zep NS\NSEvent window(int handle) -> int */
zend_long ns_nsevent_window(zval *handle);
/*@zep NS\NSEvent windowNumber(int handle) -> int */
zend_long ns_nsevent_window_number(zval *handle);
/*@reserved NS\NSEvent @property (nullable, readonly, strong) NSGraphicsContext *context API_DEPRECATED — getter */

/* ---- Mouse ---- */

/*@zep NS\NSEvent clickCount(int handle) -> int */
zend_long ns_nsevent_click_count(zval *handle);
/*@zep NS\NSEvent buttonNumber(int handle) -> int */
zend_long ns_nsevent_button_number(zval *handle);
/*@zep NS\NSEvent eventNumber(int handle) -> int */
zend_long ns_nsevent_event_number(zval *handle);
/*@zep NS\NSEvent pressure(int handle) -> double */
double ns_nsevent_pressure(zval *handle);
/*@zep NS\NSEvent locationInWindow(int handle) -> array */
void ns_nsevent_location_in_window(zval *return_value, zval *handle);

/* ---- Deltas / scroll ---- */

/*@zep NS\NSEvent deltaX(int handle) -> double */
double ns_nsevent_delta_x(zval *handle);
/*@zep NS\NSEvent deltaY(int handle) -> double */
double ns_nsevent_delta_y(zval *handle);
/*@zep NS\NSEvent deltaZ(int handle) -> double */
double ns_nsevent_delta_z(zval *handle);
/*@zep NS\NSEvent hasPreciseScrollingDeltas(int handle) -> bool */
zend_long ns_nsevent_has_precise_scrolling_deltas(zval *handle);
/*@zep NS\NSEvent scrollingDeltaX(int handle) -> double */
double ns_nsevent_scrolling_delta_x(zval *handle);
/*@zep NS\NSEvent scrollingDeltaY(int handle) -> double */
double ns_nsevent_scrolling_delta_y(zval *handle);
/*@zep NS\NSEvent momentumPhase(int handle) -> int */
zend_long ns_nsevent_momentum_phase(zval *handle);
/*@zep NS\NSEvent isDirectionInvertedFromDevice(int handle) -> bool */
zend_long ns_nsevent_is_direction_inverted_from_device(zval *handle);

/* ---- Keyboard ---- */

/*@zep NS\NSEvent characters(int handle) -> var */
void ns_nsevent_characters(zval *return_value, zval *handle);
/*@zep NS\NSEvent charactersIgnoringModifiers(int handle) -> var */
void ns_nsevent_characters_ignoring_modifiers(zval *return_value, zval *handle);
/*@zep NS\NSEvent charactersByApplyingModifiers(int handle, int modifiers) -> var */
void ns_nsevent_characters_by_applying_modifiers(zval *return_value, zval *handle, zval *modifiers);
/*@zep NS\NSEvent isARepeat(int handle) -> bool */
zend_long ns_nsevent_is_a_repeat(zval *handle);
/*@zep NS\NSEvent keyCode(int handle) -> int */
zend_long ns_nsevent_key_code(zval *handle);

/* ---- Tracking / enter-exit ---- */

/*@zep NS\NSEvent trackingNumber(int handle) -> int */
zend_long ns_nsevent_tracking_number(zval *handle);
/*@zep NS\NSEvent userData(int handle) -> int */
zend_long ns_nsevent_user_data(zval *handle);
/*@zep NS\NSEvent trackingArea(int handle) -> int */
zend_long ns_nsevent_tracking_area(zval *handle);

/* ---- Defined-event payload ---- */

/*@zep NS\NSEvent subtype(int handle) -> int */
zend_long ns_nsevent_subtype(zval *handle);
/*@zep NS\NSEvent data1(int handle) -> int */
zend_long ns_nsevent_data1(zval *handle);
/*@zep NS\NSEvent data2(int handle) -> int */
zend_long ns_nsevent_data2(zval *handle);

/* ---- EventRef / CGEvent ---- */

/*@reserved NS\NSEvent @property (nullable, readonly) const void *eventRef NS_RETURNS_INNER_POINTER — EventRef inner pointer */
/*@zep NS\NSEvent eventWithEventRef(int eventRef) -> int */
zend_long ns_nsevent_event_with_event_ref(zval *eventRef);
/*@reserved NS\NSEvent @property (nullable, readonly) CGEventRef CGEvent — CGEventRef, no CFType registry */
/*@zep NS\NSEvent eventWithCGEvent(int cgEvent) -> int */
zend_long ns_nsevent_event_with_cg_event(zval *cgEvent);

/* ---- Mouse coalescing (class) ---- */

/*@zep NS\NSEvent isMouseCoalescingEnabled() -> bool */
zend_long ns_nsevent_is_mouse_coalescing_enabled(void);
/*@zep NS\NSEvent setMouseCoalescingEnabled(bool flag) -> void */
void ns_nsevent_set_mouse_coalescing_enabled(zval *flag);

/* ---- Magnify / tablet ---- */

/*@zep NS\NSEvent magnification(int handle) -> double */
double ns_nsevent_magnification(zval *handle);
/*@zep NS\NSEvent deviceID(int handle) -> int */
zend_long ns_nsevent_device_id(zval *handle);
/*@zep NS\NSEvent rotation(int handle) -> double */
double ns_nsevent_rotation(zval *handle);
/*@zep NS\NSEvent absoluteX(int handle) -> int */
zend_long ns_nsevent_absolute_x(zval *handle);
/*@zep NS\NSEvent absoluteY(int handle) -> int */
zend_long ns_nsevent_absolute_y(zval *handle);
/*@zep NS\NSEvent absoluteZ(int handle) -> int */
zend_long ns_nsevent_absolute_z(zval *handle);
/*@zep NS\NSEvent buttonMask(int handle) -> int */
zend_long ns_nsevent_button_mask(zval *handle);
/*@zep NS\NSEvent tilt(int handle) -> array */
void ns_nsevent_tilt(zval *return_value, zval *handle);
/*@zep NS\NSEvent tangentialPressure(int handle) -> double */
double ns_nsevent_tangential_pressure(zval *handle);
/*@zep NS\NSEvent vendorDefined(int handle) -> int */
zend_long ns_nsevent_vendor_defined(zval *handle);
/*@zep NS\NSEvent vendorID(int handle) -> int */
zend_long ns_nsevent_vendor_id(zval *handle);
/*@zep NS\NSEvent tabletID(int handle) -> int */
zend_long ns_nsevent_tablet_id(zval *handle);
/*@zep NS\NSEvent pointingDeviceID(int handle) -> int */
zend_long ns_nsevent_pointing_device_id(zval *handle);
/*@zep NS\NSEvent systemTabletID(int handle) -> int */
zend_long ns_nsevent_system_tablet_id(zval *handle);
/*@zep NS\NSEvent vendorPointingDeviceType(int handle) -> int */
zend_long ns_nsevent_vendor_pointing_device_type(zval *handle);
/*@zep NS\NSEvent pointingDeviceSerialNumber(int handle) -> int */
zend_long ns_nsevent_pointing_device_serial_number(zval *handle);
/*@zep NS\NSEvent uniqueID(int handle) -> int */
zend_long ns_nsevent_unique_id(zval *handle);
/*@zep NS\NSEvent capabilityMask(int handle) -> int */
zend_long ns_nsevent_capability_mask(zval *handle);
/*@zep NS\NSEvent pointingDeviceType(int handle) -> int */
zend_long ns_nsevent_pointing_device_type(zval *handle);
/*@zep NS\NSEvent isEnteringProximity(int handle) -> bool */
zend_long ns_nsevent_is_entering_proximity(zval *handle);

/* ---- Touches ---- */

/*@zep NS\NSEvent touchesMatchingPhaseInView(int handle, int phase, int view) -> array */
void ns_nsevent_touches_matching_phase_in_view(zval *return_value, zval *handle, zval *phase, zval *view);
/*@zep NS\NSEvent allTouches(int handle) -> array */
void ns_nsevent_all_touches(zval *return_value, zval *handle);
/*@zep NS\NSEvent touchesForView(int handle, int view) -> array */
void ns_nsevent_touches_for_view(zval *return_value, zval *handle, zval *view);
/*@zep NS\NSEvent coalescedTouchesForTouch(int handle, int touch) -> array */
void ns_nsevent_coalesced_touches_for_touch(zval *return_value, zval *handle, zval *touch);

/* ---- Gesture phase / pressure ---- */

/*@zep NS\NSEvent phase(int handle) -> int */
zend_long ns_nsevent_phase(zval *handle);
/*@zep NS\NSEvent stage(int handle) -> int */
zend_long ns_nsevent_stage(zval *handle);
/*@zep NS\NSEvent stageTransition(int handle) -> double */
double ns_nsevent_stage_transition(zval *handle);
/*@zep NS\NSEvent associatedEventsMask(int handle) -> int */
zend_long ns_nsevent_associated_events_mask(zval *handle);
/*@zep NS\NSEvent pressureBehavior(int handle) -> int */
zend_long ns_nsevent_pressure_behavior(zval *handle);

/* ---- Swipe tracking ---- */

/*@zep NS\NSEvent isSwipeTrackingFromScrollEventsEnabled() -> bool */
zend_long ns_nsevent_is_swipe_tracking_from_scroll_events_enabled(void);
/*@reserved NS\NSEvent - (void)trackSwipeEventWithOptions:(NSEventSwipeTrackingOptions)options dampenAmountThresholdMin:(CGFloat)minDampenThreshold max:(CGFloat)maxDampenThreshold usingHandler:(void (^)(CGFloat gestureAmount, NSEventPhase phase, BOOL isComplete, BOOL *stop))trackingHandler — block */

/* ---- Periodic events ---- */

/*@zep NS\NSEvent startPeriodicEventsAfterDelayWithPeriod(double delay, double period) -> void */
void ns_nsevent_start_periodic_events_after_delay_with_period(zval *delay, zval *period);
/*@zep NS\NSEvent stopPeriodicEvents() -> void */
void ns_nsevent_stop_periodic_events(void);

/* ---- Factories ---- */

/*@zep NS\NSEvent mouseEventWithTypeLocationModifierFlagsTimestampWindowNumberContextEventNumberClickCountPressure(int type, double x, double y, int flags, double timestamp, int windowNumber, int context, int eventNumber, int clickCount, double pressure) -> int */
zend_long ns_nsevent_mouse_event_with_type_location_modifier_flags_timestamp_window_number_context_event_number_click_count_pressure(zval *type, zval *x, zval *y, zval *flags, zval *timestamp, zval *windowNumber, zval *context, zval *eventNumber, zval *clickCount, zval *pressure);
/*@zep NS\NSEvent keyEventWithTypeLocationModifierFlagsTimestampWindowNumberContextCharactersCharactersIgnoringModifiersIsARepeatKeyCode(int type, double x, double y, int flags, double timestamp, int windowNumber, int context, string characters, string charactersIgnoringModifiers, bool flag, int code) -> int */
zend_long ns_nsevent_key_event_with_type_location_modifier_flags_timestamp_window_number_context_characters_characters_ignoring_modifiers_is_a_repeat_key_code(zval *type, zval *x, zval *y, zval *flags, zval *timestamp, zval *windowNumber, zval *context, zval *characters, zval *charactersIgnoringModifiers, zval *flag, zval *code);
/*@zep NS\NSEvent enterExitEventWithTypeLocationModifierFlagsTimestampWindowNumberContextEventNumberTrackingNumberUserData(int type, double x, double y, int flags, double timestamp, int windowNumber, int context, int eventNumber, int trackingNumber, int userData) -> int */
zend_long ns_nsevent_enter_exit_event_with_type_location_modifier_flags_timestamp_window_number_context_event_number_tracking_number_user_data(zval *type, zval *x, zval *y, zval *flags, zval *timestamp, zval *windowNumber, zval *context, zval *eventNumber, zval *trackingNumber, zval *userData);
/*@zep NS\NSEvent otherEventWithTypeLocationModifierFlagsTimestampWindowNumberContextSubtypeData1Data2(int type, double x, double y, int flags, double timestamp, int windowNumber, int context, int subtype, int data1, int data2) -> int */
zend_long ns_nsevent_other_event_with_type_location_modifier_flags_timestamp_window_number_context_subtype_data1_data2(zval *type, zval *x, zval *y, zval *flags, zval *timestamp, zval *windowNumber, zval *context, zval *subtype, zval *data1, zval *data2);

/* ---- Class input state ---- */

/*@zep NS\NSEvent mouseLocation() -> array */
void ns_nsevent_mouse_location(zval *return_value);
/*@zep NS\NSEvent modifierFlagsClass() -> int */
zend_long ns_nsevent_modifier_flags_class(void);
/*@zep NS\NSEvent pressedMouseButtons() -> int */
zend_long ns_nsevent_pressed_mouse_buttons(void);
/*@zep NS\NSEvent doubleClickInterval() -> double */
double ns_nsevent_double_click_interval(void);
/*@zep NS\NSEvent keyRepeatDelay() -> double */
double ns_nsevent_key_repeat_delay(void);
/*@zep NS\NSEvent keyRepeatInterval() -> double */
double ns_nsevent_key_repeat_interval(void);

/* ---- Event monitors ---- */

/*@reserved NS\NSEvent + (nullable id)addGlobalMonitorForEventsMatchingMask:(NSEventMask)mask handler:(void (^)(NSEvent *event))block — block */
/*@reserved NS\NSEvent + (nullable id)addLocalMonitorForEventsMatchingMask:(NSEventMask)mask handler:(NSEvent * _Nullable (^)(NSEvent *event))block — block */
/*@zep NS\NSEvent removeMonitor(int eventMonitor) -> void */
void ns_nsevent_remove_monitor(zval *eventMonitor);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_EVENT_H */
