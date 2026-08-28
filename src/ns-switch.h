#ifndef PHP_APPKIT_NS_SWITCH_H
#define PHP_APPKIT_NS_SWITCH_H

/*
 * Faithful 1:1 binding of AppKit NSSwitch.h. The class is an NSControl
 * subclass whose own header declares a single readwrite property
 * (`state`). Both the getter and setter are bound; nothing is reserved.
 * The adopted NSAccessibilitySwitch protocol is not a class member.
 * No same-file categories and no designated initializer — construction
 * is synthesized initWithFrame (allocs NSSwitch). Inherited NSControl /
 * NSView members stay on those classes. NSControlStateValue crosses as int.
 */

#include "php.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ---- NSSwitch ---- */

/*@zep-construct NS\NSSwitch initWithFrame(double x, double y, double width, double height) -> int */
zend_long ns_nsswitch_init_with_frame(zval *x, zval *y, zval *width, zval *height);

/*@zep NS\NSSwitch state(int handle) -> int */
zend_long ns_nsswitch_state(zval *handle);
/*@zep NS\NSSwitch setState(int handle, int state) -> void */
void ns_nsswitch_set_state(zval *handle, zval *state);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_SWITCH_H */
