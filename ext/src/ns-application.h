#ifndef PHP_APPKIT_NS_APPLICATION_H
#define PHP_APPKIT_NS_APPLICATION_H

#include "php.h"

/*
 * Faithful 1:1 binding of AppKit NSApplication.h. Every member of the
 * class (base interface + same-file categories) is either bound or
 * reserved. API_DEPRECATED members and the block enumerator are
 * reserved; NSModalSession crosses as int (pointer bits). Protocol
 * methods live on Bridge delegates, not here.
 */

#ifdef __cplusplus
extern "C" {
#endif


/* ---- NSApplication ---- */
/*@zep NS\NSApplication sharedApplication() -> int */
zend_long ns_nsapplication_shared_application(void);
/*@zep NS\NSApplication delegate(int handle) -> int */
zend_long ns_nsapplication_delegate(zval *handle);
/*@zep NS\NSApplication setDelegate(int handle, int delegate) -> void */
void ns_nsapplication_set_delegate(zval *handle, zval *delegate);
/*@zep NS\NSApplication hide(int handle, int sender) -> void */
void ns_nsapplication_hide(zval *handle, zval *sender);
/*@zep NS\NSApplication unhide(int handle, int sender) -> void */
void ns_nsapplication_unhide(zval *handle, zval *sender);
/*@zep NS\NSApplication unhideWithoutActivation(int handle) -> void */
void ns_nsapplication_unhide_without_activation(zval *handle);
/*@zep NS\NSApplication windowWithWindowNumber(int handle, int windowNum) -> int */
zend_long ns_nsapplication_window_with_window_number(zval *handle, zval *windowNum);
/*@zep NS\NSApplication mainWindow(int handle) -> int */
zend_long ns_nsapplication_main_window(zval *handle);
/*@zep NS\NSApplication keyWindow(int handle) -> int */
zend_long ns_nsapplication_key_window(zval *handle);
/*@zep NS\NSApplication isActive(int handle) -> bool */
zend_long ns_nsapplication_is_active(zval *handle);
/*@zep NS\NSApplication isHidden(int handle) -> bool */
zend_long ns_nsapplication_is_hidden(zval *handle);
/*@zep NS\NSApplication isRunning(int handle) -> bool */
zend_long ns_nsapplication_is_running(zval *handle);
/*@zep NS\NSApplication deactivate(int handle) -> void */
void ns_nsapplication_deactivate(zval *handle);
/*@reserved NS\NSApplication - (void)activateIgnoringOtherApps:(BOOL)ignoreOtherApps */
/*@zep NS\NSApplication activate(int handle) -> void */
void ns_nsapplication_activate(zval *handle);
/*@zep NS\NSApplication yieldActivationToApplication(int handle, int application) -> void */
void ns_nsapplication_yield_activation_to_application(zval *handle, zval *application);
/*@zep NS\NSApplication yieldActivationToApplicationWithBundleIdentifier(int handle, string bundleIdentifier) -> void */
void ns_nsapplication_yield_activation_to_application_with_bundle_identifier(zval *handle, zval *bundleIdentifier);
/*@zep NS\NSApplication hideOtherApplications(int handle, int sender) -> void */
void ns_nsapplication_hide_other_applications(zval *handle, zval *sender);
/*@zep NS\NSApplication unhideAllApplications(int handle, int sender) -> void */
void ns_nsapplication_unhide_all_applications(zval *handle, zval *sender);
/*@zep NS\NSApplication finishLaunching(int handle) -> void */
void ns_nsapplication_finish_launching(zval *handle);
/*@zep NS\NSApplication run(int handle) -> void */
void ns_nsapplication_run(zval *handle);
/*@zep NS\NSApplication runModalForWindow(int handle, int window) -> int */
zend_long ns_nsapplication_run_modal_for_window(zval *handle, zval *window);
/*@zep NS\NSApplication stop(int handle, int sender) -> void */
void ns_nsapplication_stop(zval *handle, zval *sender);
/*@zep NS\NSApplication stopModal(int handle) -> void */
void ns_nsapplication_stop_modal(zval *handle);
/*@zep NS\NSApplication stopModalWithCode(int handle, int returnCode) -> void */
void ns_nsapplication_stop_modal_with_code(zval *handle, zval *returnCode);
/*@zep NS\NSApplication abortModal(int handle) -> void */
void ns_nsapplication_abort_modal(zval *handle);
/*@zep NS\NSApplication modalWindow(int handle) -> int */
zend_long ns_nsapplication_modal_window(zval *handle);
/*@zep NS\NSApplication beginModalSessionForWindow(int handle, int window) -> int */
zend_long ns_nsapplication_begin_modal_session_for_window(zval *handle, zval *window);
/*@zep NS\NSApplication runModalSession(int handle, int session) -> int */
zend_long ns_nsapplication_run_modal_session(zval *handle, zval *session);
/*@zep NS\NSApplication endModalSession(int handle, int session) -> void */
void ns_nsapplication_end_modal_session(zval *handle, zval *session);
/*@zep NS\NSApplication terminate(int handle, int sender) -> void */
void ns_nsapplication_terminate(zval *handle, zval *sender);
/*@zep NS\NSApplication requestUserAttention(int handle, int requestType) -> int */
zend_long ns_nsapplication_request_user_attention(zval *handle, zval *requestType);
/*@zep NS\NSApplication cancelUserAttentionRequest(int handle, int request) -> void */
void ns_nsapplication_cancel_user_attention_request(zval *handle, zval *request);
/*@reserved NS\NSApplication - (void)enumerateWindowsWithOptions:(NSWindowListOptions)options usingBlock:(void (NS_NOESCAPE ^)(NSWindow *window, BOOL *stop))block */
/*@zep NS\NSApplication preventWindowOrdering(int handle) -> void */
void ns_nsapplication_prevent_window_ordering(zval *handle);
/*@zep NS\NSApplication windows(int handle) -> array */
void ns_nsapplication_windows(zval *return_value, zval *handle);
/*@zep NS\NSApplication setWindowsNeedUpdate(int handle, bool needUpdate) -> void */
void ns_nsapplication_set_windows_need_update(zval *handle, zval *needUpdate);
/*@zep NS\NSApplication updateWindows(int handle) -> void */
void ns_nsapplication_update_windows(zval *handle);
/*@zep NS\NSApplication mainMenu(int handle) -> int */
zend_long ns_nsapplication_main_menu(zval *handle);
/*@zep NS\NSApplication setMainMenu(int handle, int menu) -> void */
void ns_nsapplication_set_main_menu(zval *handle, zval *menu);
/*@zep NS\NSApplication helpMenu(int handle) -> int */
zend_long ns_nsapplication_help_menu(zval *handle);
/*@zep NS\NSApplication setHelpMenu(int handle, int menu) -> void */
void ns_nsapplication_set_help_menu(zval *handle, zval *menu);
/*@zep NS\NSApplication applicationIconImage(int handle) -> int */
zend_long ns_nsapplication_application_icon_image(zval *handle);
/*@zep NS\NSApplication setApplicationIconImage(int handle, int image) -> void */
void ns_nsapplication_set_application_icon_image(zval *handle, zval *image);
/*@zep NS\NSApplication activationPolicy(int handle) -> int */
zend_long ns_nsapplication_activation_policy(zval *handle);
/*@zep NS\NSApplication setActivationPolicy(int handle, int activationPolicy) -> bool */
zend_long ns_nsapplication_set_activation_policy(zval *handle, zval *activationPolicy);
/*@zep NS\NSApplication dockTile(int handle) -> int */
zend_long ns_nsapplication_dock_tile(zval *handle);
/*@zep NS\NSApplication reportException(int handle, int exception) -> void */
void ns_nsapplication_report_exception(zval *handle, zval *exception);
/*@zep NS\NSApplication detachDrawingThread(string selector, int target, int argument) -> void */
void ns_nsapplication_detach_drawing_thread(zval *selector, zval *target, zval *argument);
/*@zep NS\NSApplication replyToApplicationShouldTerminate(int handle, bool shouldTerminate) -> void */
void ns_nsapplication_reply_to_application_should_terminate(zval *handle, zval *shouldTerminate);
/*@zep NS\NSApplication replyToOpenOrPrint(int handle, int reply) -> void */
void ns_nsapplication_reply_to_open_or_print(zval *handle, zval *reply);
/*@zep NS\NSApplication orderFrontCharacterPalette(int handle, int sender) -> void */
void ns_nsapplication_order_front_character_palette(zval *handle, zval *sender);
/*@zep NS\NSApplication presentationOptions(int handle) -> int */
zend_long ns_nsapplication_presentation_options(zval *handle);
/*@zep NS\NSApplication setPresentationOptions(int handle, int options) -> void */
void ns_nsapplication_set_presentation_options(zval *handle, zval *options);
/*@zep NS\NSApplication currentSystemPresentationOptions(int handle) -> int */
zend_long ns_nsapplication_current_system_presentation_options(zval *handle);
/*@zep NS\NSApplication occlusionState(int handle) -> int */
zend_long ns_nsapplication_occlusion_state(zval *handle);
/*@zep NS\NSApplication isProtectedDataAvailable(int handle) -> bool */
zend_long ns_nsapplication_is_protected_data_available(zval *handle);

/* ---- NSAppearanceCustomization ---- */
/*@zep NS\NSApplication appearance(int handle) -> int */
zend_long ns_nsapplication_appearance(zval *handle);
/*@zep NS\NSApplication setAppearance(int handle, int appearance) -> void */
void ns_nsapplication_set_appearance(zval *handle, zval *appearance);
/*@zep NS\NSApplication effectiveAppearance(int handle) -> int */
zend_long ns_nsapplication_effective_appearance(zval *handle);

/* ---- NSEvent ---- */
/*@zep NS\NSApplication sendEvent(int handle, int event) -> void */
void ns_nsapplication_send_event(zval *handle, zval *event);
/*@zep NS\NSApplication postEventAtStart(int handle, int event, bool atStart) -> void */
void ns_nsapplication_post_event_at_start(zval *handle, zval *event, zval *atStart);
/*@zep NS\NSApplication currentEvent(int handle) -> int */
zend_long ns_nsapplication_current_event(zval *handle);
/*@zep NS\NSApplication nextEventMatchingMaskUntilDateInModeDequeue(int handle, int mask, int expiration, string mode, bool deqFlag) -> int */
zend_long ns_nsapplication_next_event_matching_mask_until_date_in_mode_dequeue(zval *handle, zval *mask, zval *expiration, zval *mode, zval *deqFlag);
/*@zep NS\NSApplication discardEventsMatchingMaskBeforeEvent(int handle, int mask, int lastEvent) -> void */
void ns_nsapplication_discard_events_matching_mask_before_event(zval *handle, zval *mask, zval *lastEvent);

/* ---- NSResponder (NSApplication category) ---- */
/*@zep NS\NSApplication sendActionToFrom(int handle, string action, int target, int sender) -> bool */
zend_long ns_nsapplication_send_action_to_from(zval *handle, zval *action, zval *target, zval *sender);
/*@zep NS\NSApplication targetForAction(int handle, string action) -> int */
zend_long ns_nsapplication_target_for_action(zval *handle, zval *action);
/*@zep NS\NSApplication targetForActionToFrom(int handle, string action, int target, int sender) -> int */
zend_long ns_nsapplication_target_for_action_to_from(zval *handle, zval *action, zval *target, zval *sender);
/*@zep NS\NSApplication tryToPerformWith(int handle, string action, int object) -> bool */
zend_long ns_nsapplication_try_to_perform_with(zval *handle, zval *action, zval *object);
/*@zep NS\NSApplication validRequestorForSendTypeReturnType(int handle, var sendType, var returnType) -> int */
zend_long ns_nsapplication_valid_requestor_for_send_type_return_type(zval *handle, zval *sendType, zval *returnType);

/* ---- NSWindowsMenu ---- */
/*@zep NS\NSApplication windowsMenu(int handle) -> int */
zend_long ns_nsapplication_windows_menu(zval *handle);
/*@zep NS\NSApplication setWindowsMenu(int handle, int menu) -> void */
void ns_nsapplication_set_windows_menu(zval *handle, zval *menu);
/*@zep NS\NSApplication arrangeInFront(int handle, int sender) -> void */
void ns_nsapplication_arrange_in_front(zval *handle, zval *sender);
/*@zep NS\NSApplication removeWindowsItem(int handle, int win) -> void */
void ns_nsapplication_remove_windows_item(zval *handle, zval *win);
/*@zep NS\NSApplication addWindowsItemTitleFilename(int handle, int win, string title, bool isFilename) -> void */
void ns_nsapplication_add_windows_item_title_filename(zval *handle, zval *win, zval *title, zval *isFilename);
/*@zep NS\NSApplication changeWindowsItemTitleFilename(int handle, int win, string title, bool isFilename) -> void */
void ns_nsapplication_change_windows_item_title_filename(zval *handle, zval *win, zval *title, zval *isFilename);
/*@zep NS\NSApplication updateWindowsItem(int handle, int win) -> void */
void ns_nsapplication_update_windows_item(zval *handle, zval *win);
/*@zep NS\NSApplication miniaturizeAll(int handle, int sender) -> void */
void ns_nsapplication_miniaturize_all(zval *handle, zval *sender);

/* ---- NSFullKeyboardAccess ---- */
/*@zep NS\NSApplication isFullKeyboardAccessEnabled(int handle) -> bool */
zend_long ns_nsapplication_is_full_keyboard_access_enabled(zval *handle);

/* ---- NSServicesMenu ---- */
/*@zep NS\NSApplication servicesMenu(int handle) -> int */
zend_long ns_nsapplication_services_menu(zval *handle);
/*@zep NS\NSApplication setServicesMenu(int handle, int menu) -> void */
void ns_nsapplication_set_services_menu(zval *handle, zval *menu);
/*@zep NS\NSApplication registerServicesMenuSendTypesReturnTypes(int handle, array sendTypes, array returnTypes) -> void */
void ns_nsapplication_register_services_menu_send_types_return_types(zval *handle, zval *sendTypes, zval *returnTypes);

/* ---- NSServicesHandling ---- */
/*@zep NS\NSApplication servicesProvider(int handle) -> int */
zend_long ns_nsapplication_services_provider(zval *handle);
/*@zep NS\NSApplication setServicesProvider(int handle, int provider) -> void */
void ns_nsapplication_set_services_provider(zval *handle, zval *provider);

/* ---- NSStandardAboutPanel ---- */
/*@zep NS\NSApplication orderFrontStandardAboutPanel(int handle, int sender) -> void */
void ns_nsapplication_order_front_standard_about_panel(zval *handle, zval *sender);
/*@zep NS\NSApplication orderFrontStandardAboutPanelWithOptions(int handle, var options) -> void */
void ns_nsapplication_order_front_standard_about_panel_with_options(zval *handle, zval *options);

/* ---- NSApplicationLayoutDirection ---- */
/*@zep NS\NSApplication userInterfaceLayoutDirection(int handle) -> int */
zend_long ns_nsapplication_user_interface_layout_direction(zval *handle);

/* ---- NSRestorableUserInterface ---- */
/*@zep NS\NSApplication disableRelaunchOnLogin(int handle) -> void */
void ns_nsapplication_disable_relaunch_on_login(zval *handle);
/*@zep NS\NSApplication enableRelaunchOnLogin(int handle) -> void */
void ns_nsapplication_enable_relaunch_on_login(zval *handle);

/* ---- NSRemoteNotifications ---- */
/*@zep NS\NSApplication registerForRemoteNotifications(int handle) -> void */
void ns_nsapplication_register_for_remote_notifications(zval *handle);
/*@zep NS\NSApplication unregisterForRemoteNotifications(int handle) -> void */
void ns_nsapplication_unregister_for_remote_notifications(zval *handle);
/*@zep NS\NSApplication isRegisteredForRemoteNotifications(int handle) -> bool */
zend_long ns_nsapplication_is_registered_for_remote_notifications(zval *handle);
/*@zep NS\NSApplication registerForRemoteNotificationTypes(int handle, int types) -> void */
void ns_nsapplication_register_for_remote_notification_types(zval *handle, zval *types);
/*@zep NS\NSApplication enabledRemoteNotificationTypes(int handle) -> int */
zend_long ns_nsapplication_enabled_remote_notification_types(zval *handle);

/* ---- NSDeprecated ---- */
/*@reserved NS\NSApplication - (NSInteger)runModalForWindow:(NSWindow *)window relativeToWindow:(NSWindow *)docWindow */
/*@reserved NS\NSApplication - (NSModalSession)beginModalSessionForWindow:(NSWindow *)window relativeToWindow:(NSWindow *)docWindow */
/*@reserved NS\NSApplication - (void)application:(NSApplication *)sender printFiles:(NSArray<NSString *> *)filenames */
/*@reserved NS\NSApplication - (void)beginSheet:(NSWindow *)sheet modalForWindow:(NSWindow *)docWindow modalDelegate:(id)modalDelegate didEndSelector:(SEL)didEndSelector contextInfo:(void *)contextInfo */
/*@reserved NS\NSApplication - (void)endSheet:(NSWindow *)sheet */
/*@reserved NS\NSApplication - (void)endSheet:(NSWindow *)sheet returnCode:(NSInteger)returnCode */
/*@reserved NS\NSApplication - (nullable NSWindow *)makeWindowsPerform:(SEL)selector inOrder:(BOOL)inOrder */
/*@reserved NS\NSApplication @property (nullable, readonly, strong) NSGraphicsContext *context */

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_APPLICATION_H */
