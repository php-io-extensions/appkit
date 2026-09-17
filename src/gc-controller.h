#ifndef PHP_APPKIT_GC_CONTROLLER_H
#define PHP_APPKIT_GC_CONTROLLER_H

/*
 * GameController GCController.h — base interface plus the same-file
 * Snapshot and Discovery categories. Every member is bound or reserved.
 * vendorName / productCategory are declared by the adopted GCDevice
 * protocol (GCDevice.h), not by the class; they bind here under the
 * adopts marker, and the protocol's other members are reserved here.
 * The notification names, GCControllerPlayerIndex, and the
 * GCControllerLiveInput / battery / light / haptics / motion /
 * physical-input-profile types are not class members.
 *
 * GameController is a sister framework like QuartzCore and AVFoundation:
 * its own file prefix (gc-), its own namespace segment (GC\).
 *
 * Construction: controllers come from the system (controllers, current);
 * snapshots (controllerWith*Gamepad, capture) are reserved.
 * Controllers and profiles cross as int handles (0 = nil).
 * extendedGamepad / microGamepad are nullable -> 0. vendorName is
 * nullable -> var (string|null). playerIndex (GCControllerPlayerIndex)
 * crosses as int. getter=isAttachedToDevice / isSnapshot emit under
 * those names. current and shouldMonitorBackgroundEvents are class
 * properties (no handle).
 */

#include "php.h"

#ifdef __cplusplus
extern "C" {
#endif

/*@audit adopts GC\GCController GCDevice vendorName and productCategory are declared by the adopted protocol */

/* ---- Controllers ---- */

/*@zep GC\GCController controllers() -> array */
void ns_gccontroller_controllers(zval *return_value);
/*@zep GC\GCController current() -> int */
zend_long ns_gccontroller_current(void);
/*@reserved GC\GCController @property (nonatomic, copy, nullable) void (^controllerPausedHandler)(GCController *controller) API_DEPRECATED — getter (block) */
/*@reserved GC\GCController @property (nonatomic, copy, nullable) void (^controllerPausedHandler)(GCController *controller) API_DEPRECATED — setter (block) */
/*@zep GC\GCController shouldMonitorBackgroundEvents() -> bool */
zend_long ns_gccontroller_should_monitor_background_events(void);
/*@zep GC\GCController setShouldMonitorBackgroundEvents(bool value) -> void */
void ns_gccontroller_set_should_monitor_background_events(zval *value);
/*@zep GC\GCController isAttachedToDevice(int handle) -> bool */
zend_long ns_gccontroller_is_attached_to_device(zval *handle);
/*@zep GC\GCController playerIndex(int handle) -> int */
zend_long ns_gccontroller_player_index(zval *handle);
/*@zep GC\GCController setPlayerIndex(int handle, int playerIndex) -> void */
void ns_gccontroller_set_player_index(zval *handle, zval *playerIndex);
/*@reserved GC\GCController @property (nonatomic, strong, readonly) GCControllerLiveInput *input — not bound in this slice */
/*@reserved GC\GCController @property (nonatomic, copy, readonly, nullable) GCDeviceBattery *battery — not bound in this slice */
/*@reserved GC\GCController @property (nonatomic, strong, readonly) GCPhysicalInputProfile *physicalInputProfile — not bound in this slice */
/*@reserved GC\GCController @property (nonatomic, strong, readonly, nullable) GCGamepad *gamepad API_DEPRECATED_WITH_REPLACEMENT — deprecated */
/*@zep GC\GCController microGamepad(int handle) -> int */
zend_long ns_gccontroller_micro_gamepad(zval *handle);
/*@zep GC\GCController extendedGamepad(int handle) -> int */
zend_long ns_gccontroller_extended_gamepad(zval *handle);
/*@reserved GC\GCController @property (nonatomic, strong, readonly, nullable) GCMotion *motion — not bound in this slice */
/*@reserved GC\GCController @property (nonatomic, retain, readonly, nullable) GCDeviceLight *light — not bound in this slice */
/*@reserved GC\GCController @property (nonatomic, retain, readonly, nullable) GCDeviceHaptics *haptics — not bound in this slice */
/*@reserved GC\GCController + (BOOL)supportsHIDDevice:(IOHIDDeviceRef)device — IOHIDDeviceRef, no CFType registry */

/* ---- Snapshot ---- */

/*@zep GC\GCController isSnapshot(int handle) -> bool */
zend_long ns_gccontroller_is_snapshot(zval *handle);
/*@reserved GC\GCController - (GCController *)capture — not bound in this slice */
/*@reserved GC\GCController + (GCController *)controllerWithMicroGamepad — not bound in this slice */
/*@reserved GC\GCController + (GCController *)controllerWithExtendedGamepad — not bound in this slice */

/* ---- Discovery ---- */

/*@reserved GC\GCController + (void)startWirelessControllerDiscoveryWithCompletionHandler:(nullable void (^)(void))completionHandler — block */
/*@reserved GC\GCController + (void)stopWirelessControllerDiscovery — not bound in this slice */

/* ---- GCDevice (adopted protocol) ---- */

/*@reserved GC\GCController @property (nonatomic, strong) dispatch_queue_t handlerQueue — getter (dispatch_queue_t) */
/*@reserved GC\GCController @property (nonatomic, strong) dispatch_queue_t handlerQueue — setter (dispatch_queue_t) */
/*@zep GC\GCController vendorName(int handle) -> var */
void ns_gccontroller_vendor_name(zval *return_value, zval *handle);
/*@zep GC\GCController productCategory(int handle) -> string */
void ns_gccontroller_product_category(zval *return_value, zval *handle);
/*@reserved GC\GCController @property (nonatomic, strong, readonly) GCPhysicalInputProfile *physicalInputProfile API_DEPRECATED — protocol copy, deprecated there */

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_GC_CONTROLLER_H */
