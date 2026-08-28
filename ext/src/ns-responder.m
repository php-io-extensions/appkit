#include "ns-responder.h"
#include "ns-value.h"


/* ---- NSResponder ---- */
zend_long ns_nsresponder_init(void)
{
    @autoreleasepool {
        return ns_handle_for([[NSResponder alloc] init]);
    }
}

zend_long ns_nsresponder_next_responder(zval *handle)
{
    @autoreleasepool {
        NSResponder *r = NS_ARG_AS(NSResponder, handle);
        if (r == nil) { return 0; }
        return ns_handle_for([r nextResponder]);
    }
}

void ns_nsresponder_set_next_responder(zval *handle, zval *nextResponder)
{
    @autoreleasepool {
        NSResponder *r = NS_ARG_AS(NSResponder, handle);
        if (r == nil) { return; }
        [r setNextResponder:NS_ARG_AS(NSResponder, nextResponder)];
    }
}

zend_long ns_nsresponder_try_to_perform_with(zval *handle, zval *action, zval *object_)
{
    @autoreleasepool {
        NSResponder *r = NS_ARG_AS(NSResponder, handle);
        if (r == nil) { return 0; }
        return [r tryToPerform:ns_arg_sel(action) with:ns_arg_object(object_)] ? 1 : 0;
    }
}

zend_long ns_nsresponder_perform_key_equivalent(zval *handle, zval *event)
{
    @autoreleasepool {
        NSResponder *r = NS_ARG_AS(NSResponder, handle);
        if (r == nil) { return 0; }
        return [r performKeyEquivalent:NS_ARG_AS(NSEvent, event)] ? 1 : 0;
    }
}

zend_long ns_nsresponder_valid_requestor_for_send_type_return_type(zval *handle, zval *sendType, zval *returnType)
{
    @autoreleasepool {
        NSResponder *r = NS_ARG_AS(NSResponder, handle);
        if (r == nil) { return 0; }
        return ns_handle_for([r validRequestorForSendType:ns_arg_string(sendType) returnType:ns_arg_string(returnType)]);
    }
}

void ns_nsresponder_mouse_down(zval *handle, zval *event)
{
    @autoreleasepool {
        NSResponder *r = NS_ARG_AS(NSResponder, handle);
        if (r == nil) { return; }
        [r mouseDown:NS_ARG_AS(NSEvent, event)];
    }
}

void ns_nsresponder_right_mouse_down(zval *handle, zval *event)
{
    @autoreleasepool {
        NSResponder *r = NS_ARG_AS(NSResponder, handle);
        if (r == nil) { return; }
        [r rightMouseDown:NS_ARG_AS(NSEvent, event)];
    }
}

void ns_nsresponder_other_mouse_down(zval *handle, zval *event)
{
    @autoreleasepool {
        NSResponder *r = NS_ARG_AS(NSResponder, handle);
        if (r == nil) { return; }
        [r otherMouseDown:NS_ARG_AS(NSEvent, event)];
    }
}

void ns_nsresponder_mouse_up(zval *handle, zval *event)
{
    @autoreleasepool {
        NSResponder *r = NS_ARG_AS(NSResponder, handle);
        if (r == nil) { return; }
        [r mouseUp:NS_ARG_AS(NSEvent, event)];
    }
}

void ns_nsresponder_right_mouse_up(zval *handle, zval *event)
{
    @autoreleasepool {
        NSResponder *r = NS_ARG_AS(NSResponder, handle);
        if (r == nil) { return; }
        [r rightMouseUp:NS_ARG_AS(NSEvent, event)];
    }
}

void ns_nsresponder_other_mouse_up(zval *handle, zval *event)
{
    @autoreleasepool {
        NSResponder *r = NS_ARG_AS(NSResponder, handle);
        if (r == nil) { return; }
        [r otherMouseUp:NS_ARG_AS(NSEvent, event)];
    }
}

void ns_nsresponder_mouse_moved(zval *handle, zval *event)
{
    @autoreleasepool {
        NSResponder *r = NS_ARG_AS(NSResponder, handle);
        if (r == nil) { return; }
        [r mouseMoved:NS_ARG_AS(NSEvent, event)];
    }
}

void ns_nsresponder_mouse_dragged(zval *handle, zval *event)
{
    @autoreleasepool {
        NSResponder *r = NS_ARG_AS(NSResponder, handle);
        if (r == nil) { return; }
        [r mouseDragged:NS_ARG_AS(NSEvent, event)];
    }
}

void ns_nsresponder_scroll_wheel(zval *handle, zval *event)
{
    @autoreleasepool {
        NSResponder *r = NS_ARG_AS(NSResponder, handle);
        if (r == nil) { return; }
        [r scrollWheel:NS_ARG_AS(NSEvent, event)];
    }
}

void ns_nsresponder_right_mouse_dragged(zval *handle, zval *event)
{
    @autoreleasepool {
        NSResponder *r = NS_ARG_AS(NSResponder, handle);
        if (r == nil) { return; }
        [r rightMouseDragged:NS_ARG_AS(NSEvent, event)];
    }
}

void ns_nsresponder_other_mouse_dragged(zval *handle, zval *event)
{
    @autoreleasepool {
        NSResponder *r = NS_ARG_AS(NSResponder, handle);
        if (r == nil) { return; }
        [r otherMouseDragged:NS_ARG_AS(NSEvent, event)];
    }
}

void ns_nsresponder_mouse_entered(zval *handle, zval *event)
{
    @autoreleasepool {
        NSResponder *r = NS_ARG_AS(NSResponder, handle);
        if (r == nil) { return; }
        [r mouseEntered:NS_ARG_AS(NSEvent, event)];
    }
}

void ns_nsresponder_mouse_exited(zval *handle, zval *event)
{
    @autoreleasepool {
        NSResponder *r = NS_ARG_AS(NSResponder, handle);
        if (r == nil) { return; }
        [r mouseExited:NS_ARG_AS(NSEvent, event)];
    }
}

void ns_nsresponder_key_down(zval *handle, zval *event)
{
    @autoreleasepool {
        NSResponder *r = NS_ARG_AS(NSResponder, handle);
        if (r == nil) { return; }
        [r keyDown:NS_ARG_AS(NSEvent, event)];
    }
}

void ns_nsresponder_key_up(zval *handle, zval *event)
{
    @autoreleasepool {
        NSResponder *r = NS_ARG_AS(NSResponder, handle);
        if (r == nil) { return; }
        [r keyUp:NS_ARG_AS(NSEvent, event)];
    }
}

void ns_nsresponder_flags_changed(zval *handle, zval *event)
{
    @autoreleasepool {
        NSResponder *r = NS_ARG_AS(NSResponder, handle);
        if (r == nil) { return; }
        [r flagsChanged:NS_ARG_AS(NSEvent, event)];
    }
}

void ns_nsresponder_tablet_point(zval *handle, zval *event)
{
    @autoreleasepool {
        NSResponder *r = NS_ARG_AS(NSResponder, handle);
        if (r == nil) { return; }
        [r tabletPoint:NS_ARG_AS(NSEvent, event)];
    }
}

void ns_nsresponder_tablet_proximity(zval *handle, zval *event)
{
    @autoreleasepool {
        NSResponder *r = NS_ARG_AS(NSResponder, handle);
        if (r == nil) { return; }
        [r tabletProximity:NS_ARG_AS(NSEvent, event)];
    }
}

void ns_nsresponder_cursor_update(zval *handle, zval *event)
{
    @autoreleasepool {
        NSResponder *r = NS_ARG_AS(NSResponder, handle);
        if (r == nil) { return; }
        [r cursorUpdate:NS_ARG_AS(NSEvent, event)];
    }
}

void ns_nsresponder_magnify_with_event(zval *handle, zval *event)
{
    @autoreleasepool {
        NSResponder *r = NS_ARG_AS(NSResponder, handle);
        if (r == nil) { return; }
        [r magnifyWithEvent:NS_ARG_AS(NSEvent, event)];
    }
}

void ns_nsresponder_rotate_with_event(zval *handle, zval *event)
{
    @autoreleasepool {
        NSResponder *r = NS_ARG_AS(NSResponder, handle);
        if (r == nil) { return; }
        [r rotateWithEvent:NS_ARG_AS(NSEvent, event)];
    }
}

void ns_nsresponder_swipe_with_event(zval *handle, zval *event)
{
    @autoreleasepool {
        NSResponder *r = NS_ARG_AS(NSResponder, handle);
        if (r == nil) { return; }
        [r swipeWithEvent:NS_ARG_AS(NSEvent, event)];
    }
}

void ns_nsresponder_begin_gesture_with_event(zval *handle, zval *event)
{
    @autoreleasepool {
        NSResponder *r = NS_ARG_AS(NSResponder, handle);
        if (r == nil) { return; }
        [r beginGestureWithEvent:NS_ARG_AS(NSEvent, event)];
    }
}

void ns_nsresponder_end_gesture_with_event(zval *handle, zval *event)
{
    @autoreleasepool {
        NSResponder *r = NS_ARG_AS(NSResponder, handle);
        if (r == nil) { return; }
        [r endGestureWithEvent:NS_ARG_AS(NSEvent, event)];
    }
}

void ns_nsresponder_smart_magnify_with_event(zval *handle, zval *event)
{
    @autoreleasepool {
        NSResponder *r = NS_ARG_AS(NSResponder, handle);
        if (r == nil) { return; }
        [r smartMagnifyWithEvent:NS_ARG_AS(NSEvent, event)];
    }
}

void ns_nsresponder_change_mode_with_event(zval *handle, zval *event)
{
    @autoreleasepool {
        NSResponder *r = NS_ARG_AS(NSResponder, handle);
        if (r == nil) { return; }
        [r changeModeWithEvent:NS_ARG_AS(NSEvent, event)];
    }
}

void ns_nsresponder_touches_began_with_event(zval *handle, zval *event)
{
    @autoreleasepool {
        NSResponder *r = NS_ARG_AS(NSResponder, handle);
        if (r == nil) { return; }
        [r touchesBeganWithEvent:NS_ARG_AS(NSEvent, event)];
    }
}

void ns_nsresponder_touches_moved_with_event(zval *handle, zval *event)
{
    @autoreleasepool {
        NSResponder *r = NS_ARG_AS(NSResponder, handle);
        if (r == nil) { return; }
        [r touchesMovedWithEvent:NS_ARG_AS(NSEvent, event)];
    }
}

void ns_nsresponder_touches_ended_with_event(zval *handle, zval *event)
{
    @autoreleasepool {
        NSResponder *r = NS_ARG_AS(NSResponder, handle);
        if (r == nil) { return; }
        [r touchesEndedWithEvent:NS_ARG_AS(NSEvent, event)];
    }
}

void ns_nsresponder_touches_cancelled_with_event(zval *handle, zval *event)
{
    @autoreleasepool {
        NSResponder *r = NS_ARG_AS(NSResponder, handle);
        if (r == nil) { return; }
        [r touchesCancelledWithEvent:NS_ARG_AS(NSEvent, event)];
    }
}

void ns_nsresponder_quick_look_with_event(zval *handle, zval *event)
{
    @autoreleasepool {
        NSResponder *r = NS_ARG_AS(NSResponder, handle);
        if (r == nil) { return; }
        [r quickLookWithEvent:NS_ARG_AS(NSEvent, event)];
    }
}

void ns_nsresponder_pressure_change_with_event(zval *handle, zval *event)
{
    @autoreleasepool {
        NSResponder *r = NS_ARG_AS(NSResponder, handle);
        if (r == nil) { return; }
        [r pressureChangeWithEvent:NS_ARG_AS(NSEvent, event)];
    }
}

void ns_nsresponder_context_menu_key_down(zval *handle, zval *event)
{
    @autoreleasepool {
        NSResponder *r = NS_ARG_AS(NSResponder, handle);
        if (r == nil) { return; }
        [r contextMenuKeyDown:NS_ARG_AS(NSEvent, event)];
    }
}

void ns_nsresponder_no_responder_for(zval *handle, zval *eventSelector)
{
    @autoreleasepool {
        NSResponder *r = NS_ARG_AS(NSResponder, handle);
        if (r == nil) { return; }
        [r noResponderFor:ns_arg_sel(eventSelector)];
    }
}

zend_long ns_nsresponder_accepts_first_responder(zval *handle)
{
    @autoreleasepool {
        NSResponder *r = NS_ARG_AS(NSResponder, handle);
        if (r == nil) { return 0; }
        return [r acceptsFirstResponder] ? 1 : 0;
    }
}

zend_long ns_nsresponder_become_first_responder(zval *handle)
{
    @autoreleasepool {
        NSResponder *r = NS_ARG_AS(NSResponder, handle);
        if (r == nil) { return 0; }
        return [r becomeFirstResponder] ? 1 : 0;
    }
}

zend_long ns_nsresponder_resign_first_responder(zval *handle)
{
    @autoreleasepool {
        NSResponder *r = NS_ARG_AS(NSResponder, handle);
        if (r == nil) { return 0; }
        return [r resignFirstResponder] ? 1 : 0;
    }
}

void ns_nsresponder_interpret_key_events(zval *handle, zval *eventArray)
{
    @autoreleasepool {
        NSResponder *r = NS_ARG_AS(NSResponder, handle);
        if (r == nil) { return; }
        [r interpretKeyEvents:ns_arg_object_array(eventArray)];
    }
}

void ns_nsresponder_flush_buffered_key_events(zval *handle)
{
    @autoreleasepool {
        NSResponder *r = NS_ARG_AS(NSResponder, handle);
        if (r == nil) { return; }
        [r flushBufferedKeyEvents];
    }
}

zend_long ns_nsresponder_menu(zval *handle)
{
    @autoreleasepool {
        NSResponder *r = NS_ARG_AS(NSResponder, handle);
        if (r == nil) { return 0; }
        return ns_handle_for([r menu]);
    }
}

void ns_nsresponder_set_menu(zval *handle, zval *menu)
{
    @autoreleasepool {
        NSResponder *r = NS_ARG_AS(NSResponder, handle);
        if (r == nil) { return; }
        [r setMenu:NS_ARG_AS(NSMenu, menu)];
    }
}

void ns_nsresponder_show_context_help(zval *handle, zval *sender)
{
    @autoreleasepool {
        NSResponder *r = NS_ARG_AS(NSResponder, handle);
        if (r == nil) { return; }
        [r showContextHelp:ns_arg_object(sender)];
    }
}

void ns_nsresponder_help_requested(zval *handle, zval *eventPtr)
{
    @autoreleasepool {
        NSResponder *r = NS_ARG_AS(NSResponder, handle);
        if (r == nil) { return; }
        [r helpRequested:NS_ARG_AS(NSEvent, eventPtr)];
    }
}

zend_long ns_nsresponder_should_be_treated_as_ink_event(zval *handle, zval *event)
{
    @autoreleasepool {
        NSResponder *r = NS_ARG_AS(NSResponder, handle);
        if (r == nil) { return 0; }
        return [r shouldBeTreatedAsInkEvent:NS_ARG_AS(NSEvent, event)] ? 1 : 0;
    }
}

zend_long ns_nsresponder_wants_scroll_events_for_swipe_tracking_on_axis(zval *handle, zval *axis)
{
    @autoreleasepool {
        NSResponder *r = NS_ARG_AS(NSResponder, handle);
        if (r == nil) { return 0; }
        return [r wantsScrollEventsForSwipeTrackingOnAxis:(NSEventGestureAxis) ns_arg_long(axis)] ? 1 : 0;
    }
}

zend_long ns_nsresponder_wants_forwarded_scroll_events_for_axis(zval *handle, zval *axis)
{
    @autoreleasepool {
        NSResponder *r = NS_ARG_AS(NSResponder, handle);
        if (r == nil) { return 0; }
        return [r wantsForwardedScrollEventsForAxis:(NSEventGestureAxis) ns_arg_long(axis)] ? 1 : 0;
    }
}

zend_long ns_nsresponder_supplemental_target_for_action_sender(zval *handle, zval *action, zval *sender)
{
    @autoreleasepool {
        NSResponder *r = NS_ARG_AS(NSResponder, handle);
        if (r == nil) { return 0; }
        return ns_handle_for([r supplementalTargetForAction:ns_arg_sel(action) sender:ns_arg_object(sender)]);
    }
}


/* ---- NSUndoSupport ---- */
zend_long ns_nsresponder_undo_manager(zval *handle)
{
    @autoreleasepool {
        NSResponder *r = NS_ARG_AS(NSResponder, handle);
        if (r == nil) { return 0; }
        return ns_handle_for([r undoManager]);
    }
}


/* ---- NSControlEditingSupport ---- */
zend_long ns_nsresponder_validate_proposed_first_responder_for_event(zval *handle, zval *responder, zval *event)
{
    @autoreleasepool {
        NSResponder *r = NS_ARG_AS(NSResponder, handle);
        if (r == nil) { return 0; }
        return [r validateProposedFirstResponder:NS_ARG_AS(NSResponder, responder) forEvent:NS_ARG_AS(NSEvent, event)] ? 1 : 0;
    }
}


/* ---- NSErrorPresentation ---- */
void ns_nsresponder_present_error_modal_for_window_delegate_did_present_selector_context_info(zval *handle, zval *error, zval *window, zval *delegate, zval *didPresentSelector, zval *contextInfo)
{
    @autoreleasepool {
        NSResponder *r = NS_ARG_AS(NSResponder, handle);
        if (r == nil) { return; }
        [r presentError:NS_ARG_AS(NSError, error) modalForWindow:NS_ARG_AS(NSWindow, window) delegate:ns_arg_object(delegate) didPresentSelector:ns_arg_sel(didPresentSelector) contextInfo:(void *)(uintptr_t) ns_arg_long(contextInfo)];
    }
}

zend_long ns_nsresponder_present_error(zval *handle, zval *error)
{
    @autoreleasepool {
        NSResponder *r = NS_ARG_AS(NSResponder, handle);
        if (r == nil) { return 0; }
        return [r presentError:NS_ARG_AS(NSError, error)] ? 1 : 0;
    }
}

zend_long ns_nsresponder_will_present_error(zval *handle, zval *error)
{
    @autoreleasepool {
        NSResponder *r = NS_ARG_AS(NSResponder, handle);
        if (r == nil) { return 0; }
        return ns_handle_for([r willPresentError:NS_ARG_AS(NSError, error)]);
    }
}


/* ---- NSTextFinderSupport ---- */
void ns_nsresponder_perform_text_finder_action(zval *handle, zval *sender)
{
    @autoreleasepool {
        NSResponder *r = NS_ARG_AS(NSResponder, handle);
        if (r == nil) { return; }
        [r performTextFinderAction:ns_arg_object(sender)];
    }
}


/* ---- NSWindowTabbing ---- */
void ns_nsresponder_new_window_for_tab(zval *handle, zval *sender)
{
    @autoreleasepool {
        NSResponder *r = NS_ARG_AS(NSResponder, handle);
        if (r == nil) { return; }
        [r newWindowForTab:ns_arg_object(sender)];
    }
}


/* ---- NSWritingToolsSupport ---- */
void ns_nsresponder_show_writing_tools(zval *handle, zval *sender)
{
    @autoreleasepool {
        NSResponder *r = NS_ARG_AS(NSResponder, handle);
        if (r == nil) { return; }
        [r showWritingTools:ns_arg_object(sender)];
    }
}


/* ---- NSDeprecated ---- */