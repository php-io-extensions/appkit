#ifndef PHP_APPKIT_GC_MICROGAMEPAD_H
#define PHP_APPKIT_GC_MICROGAMEPAD_H

/*
 * GameController GCMicroGamepad.h — every member of the single base
 * interface is bound or reserved. The GCInputMicroGamepad* names and the
 * GCMicroGamepadValueChangedHandler typedef are not members. Inherited
 * GCPhysicalInputProfile members stay on that class (unbound).
 * Access-only: profiles come from GCController::microGamepad. Elements
 * cross as int handles.
 */

#include "php.h"

#ifdef __cplusplus
extern "C" {
#endif

/*@reserved GC\GCMicroGamepad @property (nonatomic, readonly, weak) GCController *controller — not bound in this slice */
/*@reserved GC\GCMicroGamepad @property (nonatomic, copy, nullable) GCMicroGamepadValueChangedHandler valueChangedHandler — getter (block) */
/*@reserved GC\GCMicroGamepad @property (nonatomic, copy, nullable) GCMicroGamepadValueChangedHandler valueChangedHandler — setter (block) */
/*@reserved GC\GCMicroGamepad - (GCMicroGamepadSnapshot *)saveSnapshot API_DEPRECATED — deprecated */
/*@zep GC\GCMicroGamepad dpad(int handle) -> int */
zend_long ns_gcmicrogamepad_dpad(zval *handle);
/*@zep GC\GCMicroGamepad buttonA(int handle) -> int */
zend_long ns_gcmicrogamepad_button_a(zval *handle);
/*@zep GC\GCMicroGamepad buttonX(int handle) -> int */
zend_long ns_gcmicrogamepad_button_x(zval *handle);
/*@zep GC\GCMicroGamepad buttonMenu(int handle) -> int */
zend_long ns_gcmicrogamepad_button_menu(zval *handle);
/*@reserved GC\GCMicroGamepad @property (nonatomic) BOOL reportsAbsoluteDpadValues — getter, not bound in this slice */
/*@reserved GC\GCMicroGamepad @property (nonatomic) BOOL reportsAbsoluteDpadValues — setter, not bound in this slice */
/*@reserved GC\GCMicroGamepad @property (nonatomic) BOOL allowsRotation — getter, not bound in this slice */
/*@reserved GC\GCMicroGamepad @property (nonatomic) BOOL allowsRotation — setter, not bound in this slice */
/*@reserved GC\GCMicroGamepad - (void)setStateFromMicroGamepad:(GCMicroGamepad *)microGamepad — snapshot write, not bound in this slice */

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_GC_MICROGAMEPAD_H */
