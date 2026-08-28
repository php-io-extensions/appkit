#ifndef PHP_APPKIT_NS_STEPPER_H
#define PHP_APPKIT_NS_STEPPER_H

/*
 * Faithful 1:1 binding of AppKit NSStepper.h. Every member of the
 * class (the single base interface; no same-file categories) is
 * either bound or reserved. Nothing is reserved — the header has
 * no blocks, NSCoder, NSAttributedString, NSData, Class, or
 * API_DEPRECATED members. The adopted NSAccessibilityStepper
 * protocol is not a class member. Inherited NSControl / NSView
 * members stay on those classes. No designated initializer is
 * declared here — construction is synthesized initWithFrame
 * (allocs NSStepper). minValue / maxValue / increment are
 * doubles; valueWraps / autorepeat are BOOL without getter=isX
 * and emit as valueWraps / autorepeat (not isValueWraps).
 */

#include "php.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ---- NSStepper ---- */

/*@zep-construct NS\NSStepper initWithFrame(double x, double y, double width, double height) -> int */
zend_long ns_nsstepper_init_with_frame(zval *x, zval *y, zval *width, zval *height);

/*@zep NS\NSStepper minValue(int handle) -> double */
double ns_nsstepper_min_value(zval *handle);
/*@zep NS\NSStepper setMinValue(int handle, double minValue) -> void */
void ns_nsstepper_set_min_value(zval *handle, zval *minValue);

/*@zep NS\NSStepper maxValue(int handle) -> double */
double ns_nsstepper_max_value(zval *handle);
/*@zep NS\NSStepper setMaxValue(int handle, double maxValue) -> void */
void ns_nsstepper_set_max_value(zval *handle, zval *maxValue);

/*@zep NS\NSStepper increment(int handle) -> double */
double ns_nsstepper_increment(zval *handle);
/*@zep NS\NSStepper setIncrement(int handle, double increment) -> void */
void ns_nsstepper_set_increment(zval *handle, zval *increment);

/*@zep NS\NSStepper valueWraps(int handle) -> bool */
zend_long ns_nsstepper_value_wraps(zval *handle);
/*@zep NS\NSStepper setValueWraps(int handle, bool valueWraps) -> void */
void ns_nsstepper_set_value_wraps(zval *handle, zval *valueWraps);

/*@zep NS\NSStepper autorepeat(int handle) -> bool */
zend_long ns_nsstepper_autorepeat(zval *handle);
/*@zep NS\NSStepper setAutorepeat(int handle, bool autorepeat) -> void */
void ns_nsstepper_set_autorepeat(zval *handle, zval *autorepeat);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_STEPPER_H */
