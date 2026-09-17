#ifndef PHP_APPKIT_GC_CONTROLLERAXISINPUT_H
#define PHP_APPKIT_GC_CONTROLLERAXISINPUT_H

/*
 * GameController GCControllerAxisInput.h — every member of the single
 * base interface is bound or reserved. The handler typedef is not a
 * member. Inherited GCControllerElement members stay on that class
 * (unbound). Access-only: axes come from a direction pad. value (float,
 * -1..1) crosses as double.
 */

#include "php.h"

#ifdef __cplusplus
extern "C" {
#endif

/*@reserved GC\GCControllerAxisInput @property (nonatomic, copy, nullable) GCControllerAxisValueChangedHandler valueChangedHandler — getter (block) */
/*@reserved GC\GCControllerAxisInput @property (nonatomic, copy, nullable) GCControllerAxisValueChangedHandler valueChangedHandler — setter (block) */
/*@zep GC\GCControllerAxisInput value(int handle) -> double */
double ns_gccontrolleraxisinput_value(zval *handle);
/*@reserved GC\GCControllerAxisInput - (void)setValue:(float)value — snapshot write, not bound in this slice */

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_GC_CONTROLLERAXISINPUT_H */
