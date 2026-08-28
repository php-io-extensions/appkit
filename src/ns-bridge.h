#ifndef PHP_APPKIT_NS_BRIDGE_H
#define PHP_APPKIT_NS_BRIDGE_H

/*
 * The only glue in the extension. Everything here exists because PHP cannot
 * be an Objective-C object: it cannot hold a strong reference, be a
 * target/action receiver, observe a notification, or conform to a delegate
 * protocol. Nothing here decides anything about how AppKit is used.
 */

#include "php.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ---- handles ---- */

/*@zep Bridge\Bridge retain(int handle) -> bool */
zend_long ns_bridge_retain(zval *handle);
/*@zep Bridge\Bridge release(int handle) -> void */
void ns_bridge_release(zval *handle);
/*@zep Bridge\Bridge isValid(int handle) -> bool */
zend_long ns_bridge_is_valid(zval *handle);
/*@zep Bridge\Bridge className(int handle) -> var */
void ns_bridge_class_name(zval *return_value, zval *handle);
/*@zep Bridge\Bridge isKindOfClass(int handle, string className) -> bool */
zend_long ns_bridge_is_kind_of_class(zval *handle, zval *className);

/* ---- event pump ---- */

/*
 * Dequeue and send every pending event. timeout <= 0 returns the moment the
 * queue is empty; otherwise waits up to that many seconds for the first
 * event. Returns the number of events sent. Actions, notifications and
 * delegate calls run on this stack, so a PHP callable fires inside this call.
 */
/*@zep Bridge\Bridge pump(double timeout) -> int */
zend_long ns_bridge_pump(zval *timeout);

/* ---- target/action ---- */

/*
 * Make the bridge the control's target and action, routing to a PHP callable
 * that receives (int sender). This is setTarget:/setAction: with a PHP
 * receiver; use NSControl::setTarget/setAction for a native receiver.
 */
/*@zep Bridge\Bridge setAction(int handle, var callable) -> bool */
zend_long ns_bridge_set_action(zval *handle, zval *callable);
/*@zep Bridge\Bridge removeAction(int handle) -> void */
void ns_bridge_remove_action(zval *handle);

/* ---- notifications ---- */

/*
 * NSNotificationCenter addObserver for `name` posted by `object` (0 = any).
 * The callable receives (int object, string name). Returns an observation
 * token, 0 on failure.
 */
/*@zep Bridge\Bridge observeNotification(int object, string name, var callable) -> int */
zend_long ns_bridge_observe(zval *object, zval *name, zval *callable);
/*@zep Bridge\Bridge removeObserver(int token) -> void */
void ns_bridge_unobserve(zval *token);

/* ---- delegates ---- */

/*
 * An object that conforms to the named protocol and forwards any selector a
 * PHP callable was registered for. Returns a handle; hand it to the native
 * setDelegate: of your choice. Arguments are marshalled by type encoding
 * (objects as handles, structs as arrays); the callable's return value is
 * marshalled back for BOOL/integer/double/object/struct returns.
 */
/*@zep Bridge\Bridge delegateNew(string protocolName) -> int */
zend_long ns_bridge_delegate_new(zval *protocolName);
/*@zep Bridge\Bridge delegateOn(int delegate, string selector, var callable) -> bool */
zend_long ns_bridge_delegate_on(zval *delegate, zval *selector, zval *callable);
/*@zep Bridge\Bridge delegateOff(int delegate, string selector) -> void */
void ns_bridge_delegate_off(zval *delegate, zval *selector);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_BRIDGE_H */
