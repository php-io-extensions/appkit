#ifndef PHP_APPKIT_NS_RESPONDER_H
#define PHP_APPKIT_NS_RESPONDER_H

/*
 * Faithful 1:1 binding of AppKit NSResponder.h. Every member of the
 * class (base interface + same-file categories) is either bound or
 * reserved. API_DEPRECATED members and NSCoder are reserved; nothing is
 * omitted. Protocol methods (NSStandardKeyBindingResponding) live on
 * Bridge delegates, not here. The empty NSStandardKeyBindingMethods
 * category only adopts that protocol. init is alloc+init construction
 * glue. NSError* arguments cross as handles; NSError** stays reserved.
 */

#include "php.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ---- NSResponder ---- */
/*@zep NS\NSResponder init() -> int */
zend_long ns_nsresponder_init(void);
/*@reserved NS\NSResponder - (nullable instancetype)initWithCoder:(NSCoder *)coder NS_DESIGNATED_INITIALIZER; */
/*@zep NS\NSResponder nextResponder(int handle) -> int */
zend_long ns_nsresponder_next_responder(zval *handle);
/*@zep NS\NSResponder setNextResponder(int handle, int nextResponder) -> void */
void ns_nsresponder_set_next_responder(zval *handle, zval *nextResponder);
/*@zep NS\NSResponder tryToPerformWith(int handle, string action, int object_) -> bool */
zend_long ns_nsresponder_try_to_perform_with(zval *handle, zval *action, zval *object_);
/*@zep NS\NSResponder performKeyEquivalent(int handle, int event) -> bool */
zend_long ns_nsresponder_perform_key_equivalent(zval *handle, zval *event);
/*@zep NS\NSResponder validRequestorForSendTypeReturnType(int handle, var sendType, var returnType) -> int */
zend_long ns_nsresponder_valid_requestor_for_send_type_return_type(zval *handle, zval *sendType, zval *returnType);
/*@zep NS\NSResponder mouseDown(int handle, int event) -> void */
void ns_nsresponder_mouse_down(zval *handle, zval *event);
/*@zep NS\NSResponder rightMouseDown(int handle, int event) -> void */
void ns_nsresponder_right_mouse_down(zval *handle, zval *event);
/*@zep NS\NSResponder otherMouseDown(int handle, int event) -> void */
void ns_nsresponder_other_mouse_down(zval *handle, zval *event);
/*@zep NS\NSResponder mouseUp(int handle, int event) -> void */
void ns_nsresponder_mouse_up(zval *handle, zval *event);
/*@zep NS\NSResponder rightMouseUp(int handle, int event) -> void */
void ns_nsresponder_right_mouse_up(zval *handle, zval *event);
/*@zep NS\NSResponder otherMouseUp(int handle, int event) -> void */
void ns_nsresponder_other_mouse_up(zval *handle, zval *event);
/*@zep NS\NSResponder mouseMoved(int handle, int event) -> void */
void ns_nsresponder_mouse_moved(zval *handle, zval *event);
/*@zep NS\NSResponder mouseDragged(int handle, int event) -> void */
void ns_nsresponder_mouse_dragged(zval *handle, zval *event);
/*@zep NS\NSResponder scrollWheel(int handle, int event) -> void */
void ns_nsresponder_scroll_wheel(zval *handle, zval *event);
/*@zep NS\NSResponder rightMouseDragged(int handle, int event) -> void */
void ns_nsresponder_right_mouse_dragged(zval *handle, zval *event);
/*@zep NS\NSResponder otherMouseDragged(int handle, int event) -> void */
void ns_nsresponder_other_mouse_dragged(zval *handle, zval *event);
/*@zep NS\NSResponder mouseEntered(int handle, int event) -> void */
void ns_nsresponder_mouse_entered(zval *handle, zval *event);
/*@zep NS\NSResponder mouseExited(int handle, int event) -> void */
void ns_nsresponder_mouse_exited(zval *handle, zval *event);
/*@zep NS\NSResponder keyDown(int handle, int event) -> void */
void ns_nsresponder_key_down(zval *handle, zval *event);
/*@zep NS\NSResponder keyUp(int handle, int event) -> void */
void ns_nsresponder_key_up(zval *handle, zval *event);
/*@zep NS\NSResponder flagsChanged(int handle, int event) -> void */
void ns_nsresponder_flags_changed(zval *handle, zval *event);
/*@zep NS\NSResponder tabletPoint(int handle, int event) -> void */
void ns_nsresponder_tablet_point(zval *handle, zval *event);
/*@zep NS\NSResponder tabletProximity(int handle, int event) -> void */
void ns_nsresponder_tablet_proximity(zval *handle, zval *event);
/*@zep NS\NSResponder cursorUpdate(int handle, int event) -> void */
void ns_nsresponder_cursor_update(zval *handle, zval *event);
/*@zep NS\NSResponder magnifyWithEvent(int handle, int event) -> void */
void ns_nsresponder_magnify_with_event(zval *handle, zval *event);
/*@zep NS\NSResponder rotateWithEvent(int handle, int event) -> void */
void ns_nsresponder_rotate_with_event(zval *handle, zval *event);
/*@zep NS\NSResponder swipeWithEvent(int handle, int event) -> void */
void ns_nsresponder_swipe_with_event(zval *handle, zval *event);
/*@zep NS\NSResponder beginGestureWithEvent(int handle, int event) -> void */
void ns_nsresponder_begin_gesture_with_event(zval *handle, zval *event);
/*@zep NS\NSResponder endGestureWithEvent(int handle, int event) -> void */
void ns_nsresponder_end_gesture_with_event(zval *handle, zval *event);
/*@zep NS\NSResponder smartMagnifyWithEvent(int handle, int event) -> void */
void ns_nsresponder_smart_magnify_with_event(zval *handle, zval *event);
/*@zep NS\NSResponder changeModeWithEvent(int handle, int event) -> void */
void ns_nsresponder_change_mode_with_event(zval *handle, zval *event);
/*@zep NS\NSResponder touchesBeganWithEvent(int handle, int event) -> void */
void ns_nsresponder_touches_began_with_event(zval *handle, zval *event);
/*@zep NS\NSResponder touchesMovedWithEvent(int handle, int event) -> void */
void ns_nsresponder_touches_moved_with_event(zval *handle, zval *event);
/*@zep NS\NSResponder touchesEndedWithEvent(int handle, int event) -> void */
void ns_nsresponder_touches_ended_with_event(zval *handle, zval *event);
/*@zep NS\NSResponder touchesCancelledWithEvent(int handle, int event) -> void */
void ns_nsresponder_touches_cancelled_with_event(zval *handle, zval *event);
/*@zep NS\NSResponder quickLookWithEvent(int handle, int event) -> void */
void ns_nsresponder_quick_look_with_event(zval *handle, zval *event);
/*@zep NS\NSResponder pressureChangeWithEvent(int handle, int event) -> void */
void ns_nsresponder_pressure_change_with_event(zval *handle, zval *event);
/*@zep NS\NSResponder contextMenuKeyDown(int handle, int event) -> void */
void ns_nsresponder_context_menu_key_down(zval *handle, zval *event);
/*@zep NS\NSResponder noResponderFor(int handle, string eventSelector) -> void */
void ns_nsresponder_no_responder_for(zval *handle, zval *eventSelector);
/*@zep NS\NSResponder acceptsFirstResponder(int handle) -> bool */
zend_long ns_nsresponder_accepts_first_responder(zval *handle);
/*@zep NS\NSResponder becomeFirstResponder(int handle) -> bool */
zend_long ns_nsresponder_become_first_responder(zval *handle);
/*@zep NS\NSResponder resignFirstResponder(int handle) -> bool */
zend_long ns_nsresponder_resign_first_responder(zval *handle);
/*@zep NS\NSResponder interpretKeyEvents(int handle, array eventArray) -> void */
void ns_nsresponder_interpret_key_events(zval *handle, zval *eventArray);
/*@zep NS\NSResponder flushBufferedKeyEvents(int handle) -> void */
void ns_nsresponder_flush_buffered_key_events(zval *handle);
/*@zep NS\NSResponder menu(int handle) -> int */
zend_long ns_nsresponder_menu(zval *handle);
/*@zep NS\NSResponder setMenu(int handle, int menu) -> void */
void ns_nsresponder_set_menu(zval *handle, zval *menu);
/*@zep NS\NSResponder showContextHelp(int handle, int sender) -> void */
void ns_nsresponder_show_context_help(zval *handle, zval *sender);
/*@zep NS\NSResponder helpRequested(int handle, int eventPtr) -> void */
void ns_nsresponder_help_requested(zval *handle, zval *eventPtr);
/*@zep NS\NSResponder shouldBeTreatedAsInkEvent(int handle, int event) -> bool */
zend_long ns_nsresponder_should_be_treated_as_ink_event(zval *handle, zval *event);
/*@zep NS\NSResponder wantsScrollEventsForSwipeTrackingOnAxis(int handle, int axis) -> bool */
zend_long ns_nsresponder_wants_scroll_events_for_swipe_tracking_on_axis(zval *handle, zval *axis);
/*@zep NS\NSResponder wantsForwardedScrollEventsForAxis(int handle, int axis) -> bool */
zend_long ns_nsresponder_wants_forwarded_scroll_events_for_axis(zval *handle, zval *axis);
/*@zep NS\NSResponder supplementalTargetForActionSender(int handle, string action, int sender) -> int */
zend_long ns_nsresponder_supplemental_target_for_action_sender(zval *handle, zval *action, zval *sender);

/* ---- NSUndoSupport ---- */
/*@zep NS\NSResponder undoManager(int handle) -> int */
zend_long ns_nsresponder_undo_manager(zval *handle);

/* ---- NSControlEditingSupport ---- */
/*@zep NS\NSResponder validateProposedFirstResponderForEvent(int handle, int responder, int event) -> bool */
zend_long ns_nsresponder_validate_proposed_first_responder_for_event(zval *handle, zval *responder, zval *event);

/* ---- NSErrorPresentation ---- */
/*@zep NS\NSResponder presentErrorModalForWindowDelegateDidPresentSelectorContextInfo(int handle, int error, int window, int delegate, var didPresentSelector, int contextInfo) -> void */
void ns_nsresponder_present_error_modal_for_window_delegate_did_present_selector_context_info(zval *handle, zval *error, zval *window, zval *delegate, zval *didPresentSelector, zval *contextInfo);
/*@zep NS\NSResponder presentError(int handle, int error) -> bool */
zend_long ns_nsresponder_present_error(zval *handle, zval *error);
/*@zep NS\NSResponder willPresentError(int handle, int error) -> int */
zend_long ns_nsresponder_will_present_error(zval *handle, zval *error);

/* ---- NSTextFinderSupport ---- */
/*@zep NS\NSResponder performTextFinderAction(int handle, int sender) -> void */
void ns_nsresponder_perform_text_finder_action(zval *handle, zval *sender);

/* ---- NSWindowTabbing ---- */
/*@zep NS\NSResponder newWindowForTab(int handle, int sender) -> void */
void ns_nsresponder_new_window_for_tab(zval *handle, zval *sender);

/* ---- NSWritingToolsSupport ---- */
/*@zep NS\NSResponder showWritingTools(int handle, int sender) -> void */
void ns_nsresponder_show_writing_tools(zval *handle, zval *sender);

/* ---- NSDeprecated ---- */
/*@reserved NS\NSResponder - (BOOL)performMnemonic:(NSString *)string API_DEPRECATED("This has always returned NO and had no effect on macOS", macos(10.0,10.8)); */

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_RESPONDER_H */
