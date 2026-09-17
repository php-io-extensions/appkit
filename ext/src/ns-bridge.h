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

/* ---- cross-extension pointer seam ---- */

/*
 * Raw pointer bits are the only inter-extension currency: pointerOf hands
 * out the __bridge void* of a registry object (0 for invalid); adopt wraps
 * a foreign pointer into this extension's own registry, retained. Every
 * sibling extension (ext-metal today) exposes the identical pair under
 * mtl_ naming so a CAMetalLayer minted there can be adopted here.
 */
/*@zep Bridge\Bridge pointerOf(int handle) -> int */
zend_long ns_bridge_pointer_of(zval *handle);
/*@zep Bridge\Bridge adopt(string className, int pointerBits) -> int */
zend_long ns_bridge_adopt(zval *className, zval *pointerBits);

/* ---- event pump ---- */

/*
 * Dequeue and send every pending event. timeout <= 0 returns the moment the
 * queue is empty; otherwise waits up to that many seconds for the first
 * event. Returns the number of events sent. Actions, notifications and
 * delegate calls run on this stack, so a PHP callable fires inside this call.
 */
/*@zep Bridge\Bridge pump(double timeout) -> int */
zend_long ns_bridge_pump(zval *timeout);

/* ---- input tap ---- */

/*
 * Record every NSEvent whose type bit is set in `mask` (NSEventMaskFromType)
 * while pump() dispatches. Implemented as an NSEvent local monitor that
 * copies the fields below into a C buffer and returns the event unchanged,
 * so AppKit still delivers it. mask 0 removes the monitor and empties the
 * buffer. Calling again replaces the mask. Buffer cap 4096 events; past the
 * cap the oldest are dropped.
 */
/*@zep Bridge\Bridge watchInput(int mask) -> void */
void ns_bridge_watch_input(zval *mask);

/*
 * Hand over and empty the buffer: a list, oldest first, of
 * ['type' => int, 'timestamp' => float, 'windowNumber' => int,
 *  'keyCode' => int, 'characters' => string, 'charactersIgnoringModifiers' => string,
 *  'isARepeat' => bool, 'modifierFlags' => int,
 *  'buttonNumber' => int, 'clickCount' => int,
 *  'locationInWindow' => ['x' => float, 'y' => float],
 *  'deltaX' => float, 'deltaY' => float,
 *  'scrollingDeltaX' => float, 'scrollingDeltaY' => float, 'hasPreciseScrollingDeltas' => bool,
 *  'isDirectionInvertedFromDevice' => bool]
 * keyCode is read for keyDown / keyUp / flagsChanged (flagsChanged carries
 * the modifier key: left/right shift, control, option, command, caps lock);
 * characters / charactersIgnoringModifiers / isARepeat only for keyDown /
 * keyUp — reading them on other types raises in AppKit. buttonNumber /
 * clickCount only for left/right/other mouse down / up / dragged;
 * locationInWindow for those + mouseMoved / scrollWheel / entered / exited;
 * deltaX / deltaY only for mouseMoved / *Dragged / scrollWheel; scrolling
 * fields and isDirectionInvertedFromDevice (true = natural scrolling: the
 * deltas are inverted from the physical motion) only for scrollWheel.
 * Unread fields are 0 / '' / false. modifierFlags is the full value,
 * device-dependent low bits included.
 */
/*@zep Bridge\Bridge drainInput() -> array */
void ns_bridge_drain_input(zval *return_value);

/*
 * While the tap is on, consume keyDown / keyUp events (after recording them)
 * in the listed windows (by windowNumber) when nothing there can take a key:
 * the window's first responder is the window itself or its content view.
 * Stops the "no responder" beep. Command-key events always pass through so
 * menu equivalents work; a focused text field still gets its typing. An
 * empty list consumes nothing. watchInput(0) clears the list.
 */
/*@zep Bridge\Bridge swallowKeysIn(var windowNumbers) -> void */
void ns_bridge_swallow_keys_in(zval *windowNumbers);

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
