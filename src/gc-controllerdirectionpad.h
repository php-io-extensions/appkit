#ifndef PHP_APPKIT_GC_CONTROLLERDIRECTIONPAD_H
#define PHP_APPKIT_GC_CONTROLLERDIRECTIONPAD_H

/*
 * GameController GCControllerDirectionPad.h — every member of the single
 * base interface is bound or reserved. The handler typedef is not a
 * member. Inherited GCControllerElement members stay on that class
 * (unbound). Access-only: direction pads and thumbsticks come from a
 * gamepad profile. Axes and buttons cross as int handles.
 */

#include "php.h"

#ifdef __cplusplus
extern "C" {
#endif

/*@reserved GC\GCControllerDirectionPad @property (nonatomic, copy, nullable) GCControllerDirectionPadValueChangedHandler valueChangedHandler — getter (block) */
/*@reserved GC\GCControllerDirectionPad @property (nonatomic, copy, nullable) GCControllerDirectionPadValueChangedHandler valueChangedHandler — setter (block) */
/*@zep GC\GCControllerDirectionPad xAxis(int handle) -> int */
zend_long ns_gccontrollerdirectionpad_x_axis(zval *handle);
/*@zep GC\GCControllerDirectionPad yAxis(int handle) -> int */
zend_long ns_gccontrollerdirectionpad_y_axis(zval *handle);
/*@zep GC\GCControllerDirectionPad up(int handle) -> int */
zend_long ns_gccontrollerdirectionpad_up(zval *handle);
/*@zep GC\GCControllerDirectionPad down(int handle) -> int */
zend_long ns_gccontrollerdirectionpad_down(zval *handle);
/*@zep GC\GCControllerDirectionPad left(int handle) -> int */
zend_long ns_gccontrollerdirectionpad_left(zval *handle);
/*@zep GC\GCControllerDirectionPad right(int handle) -> int */
zend_long ns_gccontrollerdirectionpad_right(zval *handle);
/*@reserved GC\GCControllerDirectionPad - (void)setValueForXAxis:(float)xAxis yAxis:(float)yAxis — snapshot write, not bound in this slice */

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_GC_CONTROLLERDIRECTIONPAD_H */
