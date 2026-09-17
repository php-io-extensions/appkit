#ifndef PHP_APPKIT_GC_EXTENDEDGAMEPAD_H
#define PHP_APPKIT_GC_EXTENDEDGAMEPAD_H

/*
 * GameController GCExtendedGamepad.h — every member of the single base
 * interface is bound or reserved. The GCExtendedGamepadValueChangedHandler
 * typedef is not a member. Inherited GCPhysicalInputProfile members stay on
 * that class (unbound). Access-only: profiles come from
 * GCController::extendedGamepad. Elements cross as int handles; the
 * nullable leftThumbstickButton / rightThumbstickButton / buttonOptions /
 * buttonHome are 0 when absent.
 */

#include "php.h"

#ifdef __cplusplus
extern "C" {
#endif

/*@zep GC\GCExtendedGamepad controller(int handle) -> int */
zend_long ns_gcextendedgamepad_controller(zval *handle);
/*@reserved GC\GCExtendedGamepad @property (nonatomic, copy, nullable) GCExtendedGamepadValueChangedHandler valueChangedHandler — getter (block) */
/*@reserved GC\GCExtendedGamepad @property (nonatomic, copy, nullable) GCExtendedGamepadValueChangedHandler valueChangedHandler — setter (block) */
/*@reserved GC\GCExtendedGamepad - (GCExtendedGamepadSnapshot *)saveSnapshot API_DEPRECATED — deprecated */
/*@zep GC\GCExtendedGamepad dpad(int handle) -> int */
zend_long ns_gcextendedgamepad_dpad(zval *handle);
/*@zep GC\GCExtendedGamepad buttonA(int handle) -> int */
zend_long ns_gcextendedgamepad_button_a(zval *handle);
/*@zep GC\GCExtendedGamepad buttonB(int handle) -> int */
zend_long ns_gcextendedgamepad_button_b(zval *handle);
/*@zep GC\GCExtendedGamepad buttonX(int handle) -> int */
zend_long ns_gcextendedgamepad_button_x(zval *handle);
/*@zep GC\GCExtendedGamepad buttonY(int handle) -> int */
zend_long ns_gcextendedgamepad_button_y(zval *handle);
/*@zep GC\GCExtendedGamepad buttonMenu(int handle) -> int */
zend_long ns_gcextendedgamepad_button_menu(zval *handle);
/*@zep GC\GCExtendedGamepad buttonOptions(int handle) -> int */
zend_long ns_gcextendedgamepad_button_options(zval *handle);
/*@zep GC\GCExtendedGamepad buttonHome(int handle) -> int */
zend_long ns_gcextendedgamepad_button_home(zval *handle);
/*@zep GC\GCExtendedGamepad leftThumbstick(int handle) -> int */
zend_long ns_gcextendedgamepad_left_thumbstick(zval *handle);
/*@zep GC\GCExtendedGamepad rightThumbstick(int handle) -> int */
zend_long ns_gcextendedgamepad_right_thumbstick(zval *handle);
/*@zep GC\GCExtendedGamepad leftShoulder(int handle) -> int */
zend_long ns_gcextendedgamepad_left_shoulder(zval *handle);
/*@zep GC\GCExtendedGamepad rightShoulder(int handle) -> int */
zend_long ns_gcextendedgamepad_right_shoulder(zval *handle);
/*@zep GC\GCExtendedGamepad leftTrigger(int handle) -> int */
zend_long ns_gcextendedgamepad_left_trigger(zval *handle);
/*@zep GC\GCExtendedGamepad rightTrigger(int handle) -> int */
zend_long ns_gcextendedgamepad_right_trigger(zval *handle);
/*@zep GC\GCExtendedGamepad leftThumbstickButton(int handle) -> int */
zend_long ns_gcextendedgamepad_left_thumbstick_button(zval *handle);
/*@zep GC\GCExtendedGamepad rightThumbstickButton(int handle) -> int */
zend_long ns_gcextendedgamepad_right_thumbstick_button(zval *handle);
/*@reserved GC\GCExtendedGamepad - (void)setStateFromExtendedGamepad:(GCExtendedGamepad *)extendedGamepad — snapshot write, not bound in this slice */

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_GC_EXTENDEDGAMEPAD_H */
