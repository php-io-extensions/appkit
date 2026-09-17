#ifndef PHP_APPKIT_GC_CONTROLLERBUTTONINPUT_H
#define PHP_APPKIT_GC_CONTROLLERBUTTONINPUT_H

/*
 * GameController GCControllerButtonInput.h — every member of the single
 * base interface is bound or reserved. The handler typedefs are not
 * members. Inherited GCControllerElement members stay on that class
 * (unbound). Access-only: buttons come from a gamepad profile or a
 * direction pad. value (float) crosses as double. getter=isPressed /
 * isTouched emit under those names.
 */

#include "php.h"

#ifdef __cplusplus
extern "C" {
#endif

/*@reserved GC\GCControllerButtonInput @property (nonatomic, copy, nullable) GCControllerButtonValueChangedHandler valueChangedHandler — getter (block) */
/*@reserved GC\GCControllerButtonInput @property (nonatomic, copy, nullable) GCControllerButtonValueChangedHandler valueChangedHandler — setter (block) */
/*@reserved GC\GCControllerButtonInput @property (nonatomic, copy, nullable) GCControllerButtonValueChangedHandler pressedChangedHandler — getter (block) */
/*@reserved GC\GCControllerButtonInput @property (nonatomic, copy, nullable) GCControllerButtonValueChangedHandler pressedChangedHandler — setter (block) */
/*@reserved GC\GCControllerButtonInput @property (nonatomic, copy, nullable) GCControllerButtonTouchedChangedHandler touchedChangedHandler — getter (block) */
/*@reserved GC\GCControllerButtonInput @property (nonatomic, copy, nullable) GCControllerButtonTouchedChangedHandler touchedChangedHandler — setter (block) */
/*@zep GC\GCControllerButtonInput value(int handle) -> double */
double ns_gccontrollerbuttoninput_value(zval *handle);
/*@zep GC\GCControllerButtonInput isPressed(int handle) -> bool */
zend_long ns_gccontrollerbuttoninput_is_pressed(zval *handle);
/*@zep GC\GCControllerButtonInput isTouched(int handle) -> bool */
zend_long ns_gccontrollerbuttoninput_is_touched(zval *handle);
/*@reserved GC\GCControllerButtonInput - (void)setValue:(float)value — snapshot write, not bound in this slice */

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_GC_CONTROLLERBUTTONINPUT_H */
