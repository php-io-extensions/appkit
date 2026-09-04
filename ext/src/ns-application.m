#include "ns-application.h"
#include "ns-value.h"


/* ---- NSApplication ---- */
zend_long ns_nsapplication_shared_application(void)
{
    @autoreleasepool {
        return ns_handle_for([NSApplication sharedApplication]);
    }
}

zend_long ns_nsapplication_delegate(zval *handle)
{
    @autoreleasepool {
        NSApplication *app = NS_ARG_AS(NSApplication, handle);
        if (app == nil) { return 0; }
        return ns_handle_for([app delegate]);
    }
}

void ns_nsapplication_set_delegate(zval *handle, zval *delegate)
{
    @autoreleasepool {
        NSApplication *app = NS_ARG_AS(NSApplication, handle);
        if (app == nil) { return; }
        [app setDelegate:ns_arg_object(delegate)];
    }
}

void ns_nsapplication_hide(zval *handle, zval *sender)
{
    @autoreleasepool {
        NSApplication *app = NS_ARG_AS(NSApplication, handle);
        if (app == nil) { return; }
        [app hide:ns_arg_object(sender)];
    }
}

void ns_nsapplication_unhide(zval *handle, zval *sender)
{
    @autoreleasepool {
        NSApplication *app = NS_ARG_AS(NSApplication, handle);
        if (app == nil) { return; }
        [app unhide:ns_arg_object(sender)];
    }
}

void ns_nsapplication_unhide_without_activation(zval *handle)
{
    @autoreleasepool {
        NSApplication *app = NS_ARG_AS(NSApplication, handle);
        if (app == nil) { return; }
        [app unhideWithoutActivation];
    }
}

zend_long ns_nsapplication_window_with_window_number(zval *handle, zval *windowNum)
{
    @autoreleasepool {
        NSApplication *app = NS_ARG_AS(NSApplication, handle);
        if (app == nil) { return 0; }
        return ns_handle_for([app windowWithWindowNumber:ns_arg_long(windowNum)]);
    }
}

zend_long ns_nsapplication_main_window(zval *handle)
{
    @autoreleasepool {
        NSApplication *app = NS_ARG_AS(NSApplication, handle);
        if (app == nil) { return 0; }
        return ns_handle_for([app mainWindow]);
    }
}

zend_long ns_nsapplication_key_window(zval *handle)
{
    @autoreleasepool {
        NSApplication *app = NS_ARG_AS(NSApplication, handle);
        if (app == nil) { return 0; }
        return ns_handle_for([app keyWindow]);
    }
}

zend_long ns_nsapplication_is_active(zval *handle)
{
    @autoreleasepool {
        NSApplication *app = NS_ARG_AS(NSApplication, handle);
        if (app == nil) { return 0; }
        return [app isActive] ? 1 : 0;
    }
}

zend_long ns_nsapplication_is_hidden(zval *handle)
{
    @autoreleasepool {
        NSApplication *app = NS_ARG_AS(NSApplication, handle);
        if (app == nil) { return 0; }
        return [app isHidden] ? 1 : 0;
    }
}

zend_long ns_nsapplication_is_running(zval *handle)
{
    @autoreleasepool {
        NSApplication *app = NS_ARG_AS(NSApplication, handle);
        if (app == nil) { return 0; }
        return [app isRunning] ? 1 : 0;
    }
}

void ns_nsapplication_deactivate(zval *handle)
{
    @autoreleasepool {
        NSApplication *app = NS_ARG_AS(NSApplication, handle);
        if (app == nil) { return; }
        [app deactivate];
    }
}

void ns_nsapplication_activate(zval *handle)
{
    @autoreleasepool {
        NSApplication *app = NS_ARG_AS(NSApplication, handle);
        if (app == nil) { return; }
        [app activate];
    }
}

void ns_nsapplication_yield_activation_to_application(zval *handle, zval *application)
{
    @autoreleasepool {
        NSApplication *app = NS_ARG_AS(NSApplication, handle);
        if (app == nil) { return; }
        NSRunningApplication *other = NS_ARG_AS(NSRunningApplication, application);
        if (other == nil) return;
        [app yieldActivationToApplication:other];
    }
}

void ns_nsapplication_yield_activation_to_application_with_bundle_identifier(zval *handle, zval *bundleIdentifier)
{
    @autoreleasepool {
        NSApplication *app = NS_ARG_AS(NSApplication, handle);
        if (app == nil) { return; }
        NSString *bundle = ns_arg_string(bundleIdentifier);
        if (bundle == nil) return;
        [app yieldActivationToApplicationWithBundleIdentifier:bundle];
    }
}

void ns_nsapplication_hide_other_applications(zval *handle, zval *sender)
{
    @autoreleasepool {
        NSApplication *app = NS_ARG_AS(NSApplication, handle);
        if (app == nil) { return; }
        [app hideOtherApplications:ns_arg_object(sender)];
    }
}

void ns_nsapplication_unhide_all_applications(zval *handle, zval *sender)
{
    @autoreleasepool {
        NSApplication *app = NS_ARG_AS(NSApplication, handle);
        if (app == nil) { return; }
        [app unhideAllApplications:ns_arg_object(sender)];
    }
}

void ns_nsapplication_finish_launching(zval *handle)
{
    @autoreleasepool {
        NSApplication *app = NS_ARG_AS(NSApplication, handle);
        if (app == nil) { return; }
        [app finishLaunching];
    }
}

void ns_nsapplication_run(zval *handle)
{
    @autoreleasepool {
        NSApplication *app = NS_ARG_AS(NSApplication, handle);
        if (app == nil) { return; }
        [app run];
    }
}

zend_long ns_nsapplication_run_modal_for_window(zval *handle, zval *window)
{
    @autoreleasepool {
        NSApplication *app = NS_ARG_AS(NSApplication, handle);
        if (app == nil) { return 0; }
        NSWindow *win = NS_ARG_AS(NSWindow, window);
        if (win == nil) return 0;
        return (zend_long) [app runModalForWindow:win];
    }
}

void ns_nsapplication_stop(zval *handle, zval *sender)
{
    @autoreleasepool {
        NSApplication *app = NS_ARG_AS(NSApplication, handle);
        if (app == nil) { return; }
        [app stop:ns_arg_object(sender)];
    }
}

void ns_nsapplication_stop_modal(zval *handle)
{
    @autoreleasepool {
        NSApplication *app = NS_ARG_AS(NSApplication, handle);
        if (app == nil) { return; }
        [app stopModal];
    }
}

void ns_nsapplication_stop_modal_with_code(zval *handle, zval *returnCode)
{
    @autoreleasepool {
        NSApplication *app = NS_ARG_AS(NSApplication, handle);
        if (app == nil) { return; }
        [app stopModalWithCode:(NSModalResponse) ns_arg_long(returnCode)];
    }
}

void ns_nsapplication_abort_modal(zval *handle)
{
    @autoreleasepool {
        NSApplication *app = NS_ARG_AS(NSApplication, handle);
        if (app == nil) { return; }
        [app abortModal];
    }
}

zend_long ns_nsapplication_modal_window(zval *handle)
{
    @autoreleasepool {
        NSApplication *app = NS_ARG_AS(NSApplication, handle);
        if (app == nil) { return 0; }
        return ns_handle_for([app modalWindow]);
    }
}

zend_long ns_nsapplication_begin_modal_session_for_window(zval *handle, zval *window)
{
    @autoreleasepool {
        NSApplication *app = NS_ARG_AS(NSApplication, handle);
        if (app == nil) { return 0; }
        NSWindow *win = NS_ARG_AS(NSWindow, window);
        if (win == nil) return 0;
        return (zend_long) (uintptr_t) [app beginModalSessionForWindow:win];
    }
}

zend_long ns_nsapplication_run_modal_session(zval *handle, zval *session)
{
    @autoreleasepool {
        NSApplication *app = NS_ARG_AS(NSApplication, handle);
        if (app == nil) { return 0; }
        NSModalSession sess = (NSModalSession) (uintptr_t) ns_arg_long(session);
        if (sess == NULL) return 0;
        return (zend_long) [app runModalSession:sess];
    }
}

void ns_nsapplication_end_modal_session(zval *handle, zval *session)
{
    @autoreleasepool {
        NSApplication *app = NS_ARG_AS(NSApplication, handle);
        if (app == nil) { return; }
        NSModalSession sess = (NSModalSession) (uintptr_t) ns_arg_long(session);
        if (sess == NULL) return;
        [app endModalSession:sess];
    }
}

void ns_nsapplication_terminate(zval *handle, zval *sender)
{
    @autoreleasepool {
        NSApplication *app = NS_ARG_AS(NSApplication, handle);
        if (app == nil) { return; }
        [app terminate:ns_arg_object(sender)];
    }
}

zend_long ns_nsapplication_request_user_attention(zval *handle, zval *requestType)
{
    @autoreleasepool {
        NSApplication *app = NS_ARG_AS(NSApplication, handle);
        if (app == nil) { return 0; }
        return [app requestUserAttention:(NSRequestUserAttentionType) ns_arg_long(requestType)];
    }
}

void ns_nsapplication_cancel_user_attention_request(zval *handle, zval *request)
{
    @autoreleasepool {
        NSApplication *app = NS_ARG_AS(NSApplication, handle);
        if (app == nil) { return; }
        [app cancelUserAttentionRequest:ns_arg_long(request)];
    }
}

void ns_nsapplication_prevent_window_ordering(zval *handle)
{
    @autoreleasepool {
        NSApplication *app = NS_ARG_AS(NSApplication, handle);
        if (app == nil) { return; }
        [app preventWindowOrdering];
    }
}

void ns_nsapplication_windows(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSApplication *app = NS_ARG_AS(NSApplication, handle);
        if (app == nil) { ZVAL_NULL(return_value); return; }
        ns_ret_object_array(return_value, [app windows]);
    }
}

void ns_nsapplication_set_windows_need_update(zval *handle, zval *needUpdate)
{
    @autoreleasepool {
        NSApplication *app = NS_ARG_AS(NSApplication, handle);
        if (app == nil) { return; }
        [app setWindowsNeedUpdate:ns_arg_bool(needUpdate)];
    }
}

void ns_nsapplication_update_windows(zval *handle)
{
    @autoreleasepool {
        NSApplication *app = NS_ARG_AS(NSApplication, handle);
        if (app == nil) { return; }
        [app updateWindows];
    }
}

zend_long ns_nsapplication_main_menu(zval *handle)
{
    @autoreleasepool {
        NSApplication *app = NS_ARG_AS(NSApplication, handle);
        if (app == nil) { return 0; }
        return ns_handle_for([app mainMenu]);
    }
}

void ns_nsapplication_set_main_menu(zval *handle, zval *menu)
{
    @autoreleasepool {
        NSApplication *app = NS_ARG_AS(NSApplication, handle);
        if (app == nil) { return; }
        [app setMainMenu:NS_ARG_AS(NSMenu, menu)];
    }
}

zend_long ns_nsapplication_help_menu(zval *handle)
{
    @autoreleasepool {
        NSApplication *app = NS_ARG_AS(NSApplication, handle);
        if (app == nil) { return 0; }
        return ns_handle_for([app helpMenu]);
    }
}

void ns_nsapplication_set_help_menu(zval *handle, zval *menu)
{
    @autoreleasepool {
        NSApplication *app = NS_ARG_AS(NSApplication, handle);
        if (app == nil) { return; }
        [app setHelpMenu:NS_ARG_AS(NSMenu, menu)];
    }
}

zend_long ns_nsapplication_application_icon_image(zval *handle)
{
    @autoreleasepool {
        NSApplication *app = NS_ARG_AS(NSApplication, handle);
        if (app == nil) { return 0; }
        return ns_handle_for([app applicationIconImage]);
    }
}

void ns_nsapplication_set_application_icon_image(zval *handle, zval *image)
{
    @autoreleasepool {
        NSApplication *app = NS_ARG_AS(NSApplication, handle);
        if (app == nil) { return; }
        [app setApplicationIconImage:NS_ARG_AS(NSImage, image)];
    }
}

zend_long ns_nsapplication_activation_policy(zval *handle)
{
    @autoreleasepool {
        NSApplication *app = NS_ARG_AS(NSApplication, handle);
        if (app == nil) { return 0; }
        return (zend_long) [app activationPolicy];
    }
}

zend_long ns_nsapplication_set_activation_policy(zval *handle, zval *activationPolicy)
{
    @autoreleasepool {
        NSApplication *app = NS_ARG_AS(NSApplication, handle);
        if (app == nil) { return 0; }
        return [app setActivationPolicy:(NSApplicationActivationPolicy) ns_arg_long(activationPolicy)] ? 1 : 0;
    }
}

zend_long ns_nsapplication_dock_tile(zval *handle)
{
    @autoreleasepool {
        NSApplication *app = NS_ARG_AS(NSApplication, handle);
        if (app == nil) { return 0; }
        return ns_handle_for([app dockTile]);
    }
}

void ns_nsapplication_report_exception(zval *handle, zval *exception)
{
    @autoreleasepool {
        NSApplication *app = NS_ARG_AS(NSApplication, handle);
        if (app == nil) { return; }
        NSException *ex = NS_ARG_AS(NSException, exception);
        if (ex == nil) return;
        [app reportException:ex];
    }
}

void ns_nsapplication_detach_drawing_thread(zval *selector, zval *target, zval *argument)
{
    @autoreleasepool {
        [NSApplication detachDrawingThread:ns_arg_sel(selector) toTarget:ns_arg_object(target) withObject:ns_arg_object(argument)];
    }
}

void ns_nsapplication_reply_to_application_should_terminate(zval *handle, zval *shouldTerminate)
{
    @autoreleasepool {
        NSApplication *app = NS_ARG_AS(NSApplication, handle);
        if (app == nil) { return; }
        [app replyToApplicationShouldTerminate:ns_arg_bool(shouldTerminate)];
    }
}

void ns_nsapplication_reply_to_open_or_print(zval *handle, zval *reply)
{
    @autoreleasepool {
        NSApplication *app = NS_ARG_AS(NSApplication, handle);
        if (app == nil) { return; }
        [app replyToOpenOrPrint:(NSApplicationDelegateReply) ns_arg_long(reply)];
    }
}

void ns_nsapplication_order_front_character_palette(zval *handle, zval *sender)
{
    @autoreleasepool {
        NSApplication *app = NS_ARG_AS(NSApplication, handle);
        if (app == nil) { return; }
        [app orderFrontCharacterPalette:ns_arg_object(sender)];
    }
}

zend_long ns_nsapplication_presentation_options(zval *handle)
{
    @autoreleasepool {
        NSApplication *app = NS_ARG_AS(NSApplication, handle);
        if (app == nil) { return 0; }
        return (zend_long) [app presentationOptions];
    }
}

void ns_nsapplication_set_presentation_options(zval *handle, zval *options)
{
    @autoreleasepool {
        NSApplication *app = NS_ARG_AS(NSApplication, handle);
        if (app == nil) { return; }
        [app setPresentationOptions:(NSApplicationPresentationOptions) ns_arg_long(options)];
    }
}

zend_long ns_nsapplication_current_system_presentation_options(zval *handle)
{
    @autoreleasepool {
        NSApplication *app = NS_ARG_AS(NSApplication, handle);
        if (app == nil) { return 0; }
        return (zend_long) [app currentSystemPresentationOptions];
    }
}

zend_long ns_nsapplication_occlusion_state(zval *handle)
{
    @autoreleasepool {
        NSApplication *app = NS_ARG_AS(NSApplication, handle);
        if (app == nil) { return 0; }
        return (zend_long) [app occlusionState];
    }
}

zend_long ns_nsapplication_is_protected_data_available(zval *handle)
{
    @autoreleasepool {
        NSApplication *app = NS_ARG_AS(NSApplication, handle);
        if (app == nil) { return 0; }
        return [app isProtectedDataAvailable] ? 1 : 0;
    }
}


/* ---- NSAppearanceCustomization ---- */
zend_long ns_nsapplication_appearance(zval *handle)
{
    @autoreleasepool {
        NSApplication *app = NS_ARG_AS(NSApplication, handle);
        if (app == nil) { return 0; }
        return ns_handle_for([app appearance]);
    }
}

void ns_nsapplication_set_appearance(zval *handle, zval *appearance)
{
    @autoreleasepool {
        NSApplication *app = NS_ARG_AS(NSApplication, handle);
        if (app == nil) { return; }
        [app setAppearance:NS_ARG_AS(NSAppearance, appearance)];
    }
}

zend_long ns_nsapplication_effective_appearance(zval *handle)
{
    @autoreleasepool {
        NSApplication *app = NS_ARG_AS(NSApplication, handle);
        if (app == nil) { return 0; }
        return ns_handle_for([app effectiveAppearance]);
    }
}


/* ---- NSEvent ---- */
void ns_nsapplication_send_event(zval *handle, zval *event)
{
    @autoreleasepool {
        NSApplication *app = NS_ARG_AS(NSApplication, handle);
        if (app == nil) { return; }
        NSEvent *ev = NS_ARG_AS(NSEvent, event);
        if (ev == nil) return;
        [app sendEvent:ev];
    }
}

void ns_nsapplication_post_event_at_start(zval *handle, zval *event, zval *atStart)
{
    @autoreleasepool {
        NSApplication *app = NS_ARG_AS(NSApplication, handle);
        if (app == nil) { return; }
        NSEvent *ev = NS_ARG_AS(NSEvent, event);
        if (ev == nil) return;
        [app postEvent:ev atStart:ns_arg_bool(atStart)];
    }
}

zend_long ns_nsapplication_current_event(zval *handle)
{
    @autoreleasepool {
        NSApplication *app = NS_ARG_AS(NSApplication, handle);
        if (app == nil) { return 0; }
        return ns_handle_for([app currentEvent]);
    }
}

zend_long ns_nsapplication_next_event_matching_mask_until_date_in_mode_dequeue(zval *handle, zval *mask, zval *expiration, zval *mode, zval *deqFlag)
{
    @autoreleasepool {
        NSApplication *app = NS_ARG_AS(NSApplication, handle);
        if (app == nil) { return 0; }
        return ns_handle_for([app nextEventMatchingMask:(NSEventMask) ns_arg_long(mask) untilDate:ns_arg_object(expiration) inMode:ns_arg_string(mode) dequeue:ns_arg_bool(deqFlag)]);
    }
}

void ns_nsapplication_discard_events_matching_mask_before_event(zval *handle, zval *mask, zval *lastEvent)
{
    @autoreleasepool {
        NSApplication *app = NS_ARG_AS(NSApplication, handle);
        if (app == nil) { return; }
        [app discardEventsMatchingMask:(NSEventMask) ns_arg_long(mask) beforeEvent:NS_ARG_AS(NSEvent, lastEvent)];
    }
}


/* ---- NSResponder (NSApplication category) ---- */
zend_long ns_nsapplication_send_action_to_from(zval *handle, zval *action, zval *target, zval *sender)
{
    @autoreleasepool {
        NSApplication *app = NS_ARG_AS(NSApplication, handle);
        if (app == nil) { return 0; }
        return [app sendAction:ns_arg_sel(action) to:ns_arg_object(target) from:ns_arg_object(sender)] ? 1 : 0;
    }
}

zend_long ns_nsapplication_target_for_action(zval *handle, zval *action)
{
    @autoreleasepool {
        NSApplication *app = NS_ARG_AS(NSApplication, handle);
        if (app == nil) { return 0; }
        return ns_handle_for([app targetForAction:ns_arg_sel(action)]);
    }
}

zend_long ns_nsapplication_target_for_action_to_from(zval *handle, zval *action, zval *target, zval *sender)
{
    @autoreleasepool {
        NSApplication *app = NS_ARG_AS(NSApplication, handle);
        if (app == nil) { return 0; }
        return ns_handle_for([app targetForAction:ns_arg_sel(action) to:ns_arg_object(target) from:ns_arg_object(sender)]);
    }
}

zend_long ns_nsapplication_try_to_perform_with(zval *handle, zval *action, zval *object)
{
    @autoreleasepool {
        NSApplication *app = NS_ARG_AS(NSApplication, handle);
        if (app == nil) { return 0; }
        return [app tryToPerform:ns_arg_sel(action) with:ns_arg_object(object)] ? 1 : 0;
    }
}

zend_long ns_nsapplication_valid_requestor_for_send_type_return_type(zval *handle, zval *sendType, zval *returnType)
{
    @autoreleasepool {
        NSApplication *app = NS_ARG_AS(NSApplication, handle);
        if (app == nil) { return 0; }
        return ns_handle_for([app validRequestorForSendType:ns_arg_string(sendType) returnType:ns_arg_string(returnType)]);
    }
}


/* ---- NSWindowsMenu ---- */
zend_long ns_nsapplication_windows_menu(zval *handle)
{
    @autoreleasepool {
        NSApplication *app = NS_ARG_AS(NSApplication, handle);
        if (app == nil) { return 0; }
        return ns_handle_for([app windowsMenu]);
    }
}

void ns_nsapplication_set_windows_menu(zval *handle, zval *menu)
{
    @autoreleasepool {
        NSApplication *app = NS_ARG_AS(NSApplication, handle);
        if (app == nil) { return; }
        [app setWindowsMenu:NS_ARG_AS(NSMenu, menu)];
    }
}

void ns_nsapplication_arrange_in_front(zval *handle, zval *sender)
{
    @autoreleasepool {
        NSApplication *app = NS_ARG_AS(NSApplication, handle);
        if (app == nil) { return; }
        [app arrangeInFront:ns_arg_object(sender)];
    }
}

void ns_nsapplication_remove_windows_item(zval *handle, zval *win)
{
    @autoreleasepool {
        NSApplication *app = NS_ARG_AS(NSApplication, handle);
        if (app == nil) { return; }
        NSWindow *window = NS_ARG_AS(NSWindow, win);
        if (window == nil) return;
        [app removeWindowsItem:window];
    }
}

void ns_nsapplication_add_windows_item_title_filename(zval *handle, zval *win, zval *title, zval *isFilename)
{
    @autoreleasepool {
        NSApplication *app = NS_ARG_AS(NSApplication, handle);
        if (app == nil) { return; }
        NSWindow *window = NS_ARG_AS(NSWindow, win);
        NSString *titleStr = ns_arg_string(title);
        if (window == nil || titleStr == nil) return;
        [app addWindowsItem:window title:titleStr filename:ns_arg_bool(isFilename)];
    }
}

void ns_nsapplication_change_windows_item_title_filename(zval *handle, zval *win, zval *title, zval *isFilename)
{
    @autoreleasepool {
        NSApplication *app = NS_ARG_AS(NSApplication, handle);
        if (app == nil) { return; }
        NSWindow *window = NS_ARG_AS(NSWindow, win);
        NSString *titleStr = ns_arg_string(title);
        if (window == nil || titleStr == nil) return;
        [app changeWindowsItem:window title:titleStr filename:ns_arg_bool(isFilename)];
    }
}

void ns_nsapplication_update_windows_item(zval *handle, zval *win)
{
    @autoreleasepool {
        NSApplication *app = NS_ARG_AS(NSApplication, handle);
        if (app == nil) { return; }
        NSWindow *window = NS_ARG_AS(NSWindow, win);
        if (window == nil) return;
        [app updateWindowsItem:window];
    }
}

void ns_nsapplication_miniaturize_all(zval *handle, zval *sender)
{
    @autoreleasepool {
        NSApplication *app = NS_ARG_AS(NSApplication, handle);
        if (app == nil) { return; }
        [app miniaturizeAll:ns_arg_object(sender)];
    }
}


/* ---- NSFullKeyboardAccess ---- */
zend_long ns_nsapplication_is_full_keyboard_access_enabled(zval *handle)
{
    @autoreleasepool {
        NSApplication *app = NS_ARG_AS(NSApplication, handle);
        if (app == nil) { return 0; }
        return [app isFullKeyboardAccessEnabled] ? 1 : 0;
    }
}


/* ---- NSServicesMenu ---- */
zend_long ns_nsapplication_services_menu(zval *handle)
{
    @autoreleasepool {
        NSApplication *app = NS_ARG_AS(NSApplication, handle);
        if (app == nil) { return 0; }
        return ns_handle_for([app servicesMenu]);
    }
}

void ns_nsapplication_set_services_menu(zval *handle, zval *menu)
{
    @autoreleasepool {
        NSApplication *app = NS_ARG_AS(NSApplication, handle);
        if (app == nil) { return; }
        [app setServicesMenu:NS_ARG_AS(NSMenu, menu)];
    }
}

void ns_nsapplication_register_services_menu_send_types_return_types(zval *handle, zval *sendTypes, zval *returnTypes)
{
    @autoreleasepool {
        NSApplication *app = NS_ARG_AS(NSApplication, handle);
        if (app == nil) { return; }
        [app registerServicesMenuSendTypes:ns_arg_string_array(sendTypes) returnTypes:ns_arg_string_array(returnTypes)];
    }
}


/* ---- NSServicesHandling ---- */
zend_long ns_nsapplication_services_provider(zval *handle)
{
    @autoreleasepool {
        NSApplication *app = NS_ARG_AS(NSApplication, handle);
        if (app == nil) { return 0; }
        return ns_handle_for([app servicesProvider]);
    }
}

void ns_nsapplication_set_services_provider(zval *handle, zval *provider)
{
    @autoreleasepool {
        NSApplication *app = NS_ARG_AS(NSApplication, handle);
        if (app == nil) { return; }
        [app setServicesProvider:ns_arg_object(provider)];
    }
}


/* ---- NSStandardAboutPanel ---- */
void ns_nsapplication_order_front_standard_about_panel(zval *handle, zval *sender)
{
    @autoreleasepool {
        NSApplication *app = NS_ARG_AS(NSApplication, handle);
        if (app == nil) { return; }
        [app orderFrontStandardAboutPanel:ns_arg_object(sender)];
    }
}

void ns_nsapplication_order_front_standard_about_panel_with_options(zval *handle, zval *options)
{
    @autoreleasepool {
        NSApplication *app = NS_ARG_AS(NSApplication, handle);
        if (app == nil) { return; }
        [app orderFrontStandardAboutPanelWithOptions:ns_arg_dictionary(options)];
    }
}


/* ---- NSApplicationLayoutDirection ---- */
zend_long ns_nsapplication_user_interface_layout_direction(zval *handle)
{
    @autoreleasepool {
        NSApplication *app = NS_ARG_AS(NSApplication, handle);
        if (app == nil) { return 0; }
        return (zend_long) [app userInterfaceLayoutDirection];
    }
}


/* ---- NSRestorableUserInterface ---- */
void ns_nsapplication_disable_relaunch_on_login(zval *handle)
{
    @autoreleasepool {
        NSApplication *app = NS_ARG_AS(NSApplication, handle);
        if (app == nil) { return; }
        [app disableRelaunchOnLogin];
    }
}

void ns_nsapplication_enable_relaunch_on_login(zval *handle)
{
    @autoreleasepool {
        NSApplication *app = NS_ARG_AS(NSApplication, handle);
        if (app == nil) { return; }
        [app enableRelaunchOnLogin];
    }
}


/* ---- NSRemoteNotifications ---- */
void ns_nsapplication_register_for_remote_notifications(zval *handle)
{
    @autoreleasepool {
        NSApplication *app = NS_ARG_AS(NSApplication, handle);
        if (app == nil) { return; }
        [app registerForRemoteNotifications];
    }
}

void ns_nsapplication_unregister_for_remote_notifications(zval *handle)
{
    @autoreleasepool {
        NSApplication *app = NS_ARG_AS(NSApplication, handle);
        if (app == nil) { return; }
        [app unregisterForRemoteNotifications];
    }
}

zend_long ns_nsapplication_is_registered_for_remote_notifications(zval *handle)
{
    @autoreleasepool {
        NSApplication *app = NS_ARG_AS(NSApplication, handle);
        if (app == nil) { return 0; }
        return [app isRegisteredForRemoteNotifications] ? 1 : 0;
    }
}

void ns_nsapplication_register_for_remote_notification_types(zval *handle, zval *types)
{
    @autoreleasepool {
        NSApplication *app = NS_ARG_AS(NSApplication, handle);
        if (app == nil) { return; }
        [app registerForRemoteNotificationTypes:(NSRemoteNotificationType) ns_arg_long(types)];
    }
}

zend_long ns_nsapplication_enabled_remote_notification_types(zval *handle)
{
    @autoreleasepool {
        NSApplication *app = NS_ARG_AS(NSApplication, handle);
        if (app == nil) { return 0; }
        return (zend_long) [app enabledRemoteNotificationTypes];
    }
}


/* ---- NSDeprecated ---- */