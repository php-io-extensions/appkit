
extern zend_class_entry *appkit_ns_nsapplication_nsapplication_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSApplication_NSApplication);

PHP_METHOD(AppKit_NS_NSApplication_NSApplication, sharedApplication);
PHP_METHOD(AppKit_NS_NSApplication_NSApplication, delegate);
PHP_METHOD(AppKit_NS_NSApplication_NSApplication, setDelegate);
PHP_METHOD(AppKit_NS_NSApplication_NSApplication, hide);
PHP_METHOD(AppKit_NS_NSApplication_NSApplication, unhide);
PHP_METHOD(AppKit_NS_NSApplication_NSApplication, unhideWithoutActivation);
PHP_METHOD(AppKit_NS_NSApplication_NSApplication, windowWithWindowNumber);
PHP_METHOD(AppKit_NS_NSApplication_NSApplication, mainWindow);
PHP_METHOD(AppKit_NS_NSApplication_NSApplication, keyWindow);
PHP_METHOD(AppKit_NS_NSApplication_NSApplication, isActive);
PHP_METHOD(AppKit_NS_NSApplication_NSApplication, isHidden);
PHP_METHOD(AppKit_NS_NSApplication_NSApplication, isRunning);
PHP_METHOD(AppKit_NS_NSApplication_NSApplication, deactivate);
PHP_METHOD(AppKit_NS_NSApplication_NSApplication, activate);
PHP_METHOD(AppKit_NS_NSApplication_NSApplication, yieldActivationToApplication);
PHP_METHOD(AppKit_NS_NSApplication_NSApplication, yieldActivationToApplicationWithBundleIdentifier);
PHP_METHOD(AppKit_NS_NSApplication_NSApplication, hideOtherApplications);
PHP_METHOD(AppKit_NS_NSApplication_NSApplication, unhideAllApplications);
PHP_METHOD(AppKit_NS_NSApplication_NSApplication, finishLaunching);
PHP_METHOD(AppKit_NS_NSApplication_NSApplication, run);
PHP_METHOD(AppKit_NS_NSApplication_NSApplication, runModalForWindow);
PHP_METHOD(AppKit_NS_NSApplication_NSApplication, stop);
PHP_METHOD(AppKit_NS_NSApplication_NSApplication, stopModal);
PHP_METHOD(AppKit_NS_NSApplication_NSApplication, stopModalWithCode);
PHP_METHOD(AppKit_NS_NSApplication_NSApplication, abortModal);
PHP_METHOD(AppKit_NS_NSApplication_NSApplication, modalWindow);
PHP_METHOD(AppKit_NS_NSApplication_NSApplication, beginModalSessionForWindow);
PHP_METHOD(AppKit_NS_NSApplication_NSApplication, runModalSession);
PHP_METHOD(AppKit_NS_NSApplication_NSApplication, endModalSession);
PHP_METHOD(AppKit_NS_NSApplication_NSApplication, terminate);
PHP_METHOD(AppKit_NS_NSApplication_NSApplication, requestUserAttention);
PHP_METHOD(AppKit_NS_NSApplication_NSApplication, cancelUserAttentionRequest);
PHP_METHOD(AppKit_NS_NSApplication_NSApplication, preventWindowOrdering);
PHP_METHOD(AppKit_NS_NSApplication_NSApplication, windows);
PHP_METHOD(AppKit_NS_NSApplication_NSApplication, setWindowsNeedUpdate);
PHP_METHOD(AppKit_NS_NSApplication_NSApplication, updateWindows);
PHP_METHOD(AppKit_NS_NSApplication_NSApplication, mainMenu);
PHP_METHOD(AppKit_NS_NSApplication_NSApplication, setMainMenu);
PHP_METHOD(AppKit_NS_NSApplication_NSApplication, helpMenu);
PHP_METHOD(AppKit_NS_NSApplication_NSApplication, setHelpMenu);
PHP_METHOD(AppKit_NS_NSApplication_NSApplication, applicationIconImage);
PHP_METHOD(AppKit_NS_NSApplication_NSApplication, setApplicationIconImage);
PHP_METHOD(AppKit_NS_NSApplication_NSApplication, activationPolicy);
PHP_METHOD(AppKit_NS_NSApplication_NSApplication, setActivationPolicy);
PHP_METHOD(AppKit_NS_NSApplication_NSApplication, dockTile);
PHP_METHOD(AppKit_NS_NSApplication_NSApplication, reportException);
PHP_METHOD(AppKit_NS_NSApplication_NSApplication, detachDrawingThread);
PHP_METHOD(AppKit_NS_NSApplication_NSApplication, replyToApplicationShouldTerminate);
PHP_METHOD(AppKit_NS_NSApplication_NSApplication, replyToOpenOrPrint);
PHP_METHOD(AppKit_NS_NSApplication_NSApplication, orderFrontCharacterPalette);
PHP_METHOD(AppKit_NS_NSApplication_NSApplication, presentationOptions);
PHP_METHOD(AppKit_NS_NSApplication_NSApplication, setPresentationOptions);
PHP_METHOD(AppKit_NS_NSApplication_NSApplication, currentSystemPresentationOptions);
PHP_METHOD(AppKit_NS_NSApplication_NSApplication, occlusionState);
PHP_METHOD(AppKit_NS_NSApplication_NSApplication, isProtectedDataAvailable);
PHP_METHOD(AppKit_NS_NSApplication_NSApplication, appearance);
PHP_METHOD(AppKit_NS_NSApplication_NSApplication, setAppearance);
PHP_METHOD(AppKit_NS_NSApplication_NSApplication, effectiveAppearance);
PHP_METHOD(AppKit_NS_NSApplication_NSApplication, sendEvent);
PHP_METHOD(AppKit_NS_NSApplication_NSApplication, postEventAtStart);
PHP_METHOD(AppKit_NS_NSApplication_NSApplication, currentEvent);
PHP_METHOD(AppKit_NS_NSApplication_NSApplication, nextEventMatchingMaskUntilDateInModeDequeue);
PHP_METHOD(AppKit_NS_NSApplication_NSApplication, discardEventsMatchingMaskBeforeEvent);
PHP_METHOD(AppKit_NS_NSApplication_NSApplication, sendActionToFrom);
PHP_METHOD(AppKit_NS_NSApplication_NSApplication, targetForAction);
PHP_METHOD(AppKit_NS_NSApplication_NSApplication, targetForActionToFrom);
PHP_METHOD(AppKit_NS_NSApplication_NSApplication, tryToPerformWith);
PHP_METHOD(AppKit_NS_NSApplication_NSApplication, validRequestorForSendTypeReturnType);
PHP_METHOD(AppKit_NS_NSApplication_NSApplication, windowsMenu);
PHP_METHOD(AppKit_NS_NSApplication_NSApplication, setWindowsMenu);
PHP_METHOD(AppKit_NS_NSApplication_NSApplication, arrangeInFront);
PHP_METHOD(AppKit_NS_NSApplication_NSApplication, removeWindowsItem);
PHP_METHOD(AppKit_NS_NSApplication_NSApplication, addWindowsItemTitleFilename);
PHP_METHOD(AppKit_NS_NSApplication_NSApplication, changeWindowsItemTitleFilename);
PHP_METHOD(AppKit_NS_NSApplication_NSApplication, updateWindowsItem);
PHP_METHOD(AppKit_NS_NSApplication_NSApplication, miniaturizeAll);
PHP_METHOD(AppKit_NS_NSApplication_NSApplication, isFullKeyboardAccessEnabled);
PHP_METHOD(AppKit_NS_NSApplication_NSApplication, servicesMenu);
PHP_METHOD(AppKit_NS_NSApplication_NSApplication, setServicesMenu);
PHP_METHOD(AppKit_NS_NSApplication_NSApplication, registerServicesMenuSendTypesReturnTypes);
PHP_METHOD(AppKit_NS_NSApplication_NSApplication, servicesProvider);
PHP_METHOD(AppKit_NS_NSApplication_NSApplication, setServicesProvider);
PHP_METHOD(AppKit_NS_NSApplication_NSApplication, orderFrontStandardAboutPanel);
PHP_METHOD(AppKit_NS_NSApplication_NSApplication, orderFrontStandardAboutPanelWithOptions);
PHP_METHOD(AppKit_NS_NSApplication_NSApplication, userInterfaceLayoutDirection);
PHP_METHOD(AppKit_NS_NSApplication_NSApplication, disableRelaunchOnLogin);
PHP_METHOD(AppKit_NS_NSApplication_NSApplication, enableRelaunchOnLogin);
PHP_METHOD(AppKit_NS_NSApplication_NSApplication, registerForRemoteNotifications);
PHP_METHOD(AppKit_NS_NSApplication_NSApplication, unregisterForRemoteNotifications);
PHP_METHOD(AppKit_NS_NSApplication_NSApplication, isRegisteredForRemoteNotifications);
PHP_METHOD(AppKit_NS_NSApplication_NSApplication, registerForRemoteNotificationTypes);
PHP_METHOD(AppKit_NS_NSApplication_NSApplication, enabledRemoteNotificationTypes);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsapplication_nsapplication_sharedapplication, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsapplication_nsapplication_delegate, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsapplication_nsapplication_setdelegate, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, delegate, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsapplication_nsapplication_hide, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sender, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsapplication_nsapplication_unhide, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sender, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsapplication_nsapplication_unhidewithoutactivation, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsapplication_nsapplication_windowwithwindownumber, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, windowNum, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsapplication_nsapplication_mainwindow, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsapplication_nsapplication_keywindow, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsapplication_nsapplication_isactive, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsapplication_nsapplication_ishidden, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsapplication_nsapplication_isrunning, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsapplication_nsapplication_deactivate, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsapplication_nsapplication_activate, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsapplication_nsapplication_yieldactivationtoapplication, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, application, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsapplication_nsapplication_yieldactivationtoapplicationwithbundleidentifier, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, bundleIdentifier, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsapplication_nsapplication_hideotherapplications, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sender, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsapplication_nsapplication_unhideallapplications, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sender, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsapplication_nsapplication_finishlaunching, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsapplication_nsapplication_run, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsapplication_nsapplication_runmodalforwindow, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, window, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsapplication_nsapplication_stop, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sender, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsapplication_nsapplication_stopmodal, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsapplication_nsapplication_stopmodalwithcode, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, returnCode, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsapplication_nsapplication_abortmodal, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsapplication_nsapplication_modalwindow, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsapplication_nsapplication_beginmodalsessionforwindow, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, window, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsapplication_nsapplication_runmodalsession, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, session, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsapplication_nsapplication_endmodalsession, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, session, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsapplication_nsapplication_terminate, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sender, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsapplication_nsapplication_requestuserattention, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, requestType, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsapplication_nsapplication_canceluserattentionrequest, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, request, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsapplication_nsapplication_preventwindowordering, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsapplication_nsapplication_windows, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsapplication_nsapplication_setwindowsneedupdate, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, needUpdate, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsapplication_nsapplication_updatewindows, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsapplication_nsapplication_mainmenu, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsapplication_nsapplication_setmainmenu, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, menu, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsapplication_nsapplication_helpmenu, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsapplication_nsapplication_sethelpmenu, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, menu, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsapplication_nsapplication_applicationiconimage, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsapplication_nsapplication_setapplicationiconimage, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, image, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsapplication_nsapplication_activationpolicy, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsapplication_nsapplication_setactivationpolicy, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, activationPolicy, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsapplication_nsapplication_docktile, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsapplication_nsapplication_reportexception, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, exception, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsapplication_nsapplication_detachdrawingthread, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, selector, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, target, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, argument, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsapplication_nsapplication_replytoapplicationshouldterminate, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, shouldTerminate, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsapplication_nsapplication_replytoopenorprint, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, reply, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsapplication_nsapplication_orderfrontcharacterpalette, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sender, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsapplication_nsapplication_presentationoptions, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsapplication_nsapplication_setpresentationoptions, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, options, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsapplication_nsapplication_currentsystempresentationoptions, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsapplication_nsapplication_occlusionstate, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsapplication_nsapplication_isprotecteddataavailable, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsapplication_nsapplication_appearance, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsapplication_nsapplication_setappearance, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, appearance, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsapplication_nsapplication_effectiveappearance, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsapplication_nsapplication_sendevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsapplication_nsapplication_posteventatstart, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, atStart, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsapplication_nsapplication_currentevent, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsapplication_nsapplication_nexteventmatchingmaskuntildateinmodedequeue, 0, 5, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, mask, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, expiration, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, mode, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, deqFlag, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsapplication_nsapplication_discardeventsmatchingmaskbeforeevent, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, mask, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, lastEvent, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsapplication_nsapplication_sendactiontofrom, 0, 4, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, action, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, target, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sender, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsapplication_nsapplication_targetforaction, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, action, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsapplication_nsapplication_targetforactiontofrom, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, action, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, target, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sender, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsapplication_nsapplication_trytoperformwith, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, action, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, object_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsapplication_nsapplication_validrequestorforsendtypereturntype, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, sendType)
	ZEND_ARG_INFO(0, returnType)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsapplication_nsapplication_windowsmenu, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsapplication_nsapplication_setwindowsmenu, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, menu, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsapplication_nsapplication_arrangeinfront, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sender, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsapplication_nsapplication_removewindowsitem, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, win, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsapplication_nsapplication_addwindowsitemtitlefilename, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, win, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, title, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, isFilename, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsapplication_nsapplication_changewindowsitemtitlefilename, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, win, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, title, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, isFilename, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsapplication_nsapplication_updatewindowsitem, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, win, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsapplication_nsapplication_miniaturizeall, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sender, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsapplication_nsapplication_isfullkeyboardaccessenabled, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsapplication_nsapplication_servicesmenu, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsapplication_nsapplication_setservicesmenu, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, menu, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsapplication_nsapplication_registerservicesmenusendtypesreturntypes, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, sendTypes, 0)
	ZEND_ARG_ARRAY_INFO(0, returnTypes, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsapplication_nsapplication_servicesprovider, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsapplication_nsapplication_setservicesprovider, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, provider, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsapplication_nsapplication_orderfrontstandardaboutpanel, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sender, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsapplication_nsapplication_orderfrontstandardaboutpanelwithoptions, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, options, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsapplication_nsapplication_userinterfacelayoutdirection, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsapplication_nsapplication_disablerelaunchonlogin, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsapplication_nsapplication_enablerelaunchonlogin, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsapplication_nsapplication_registerforremotenotifications, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsapplication_nsapplication_unregisterforremotenotifications, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsapplication_nsapplication_isregisteredforremotenotifications, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsapplication_nsapplication_registerforremotenotificationtypes, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, types, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsapplication_nsapplication_enabledremotenotificationtypes, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nsapplication_nsapplication_method_entry) {
	PHP_ME(AppKit_NS_NSApplication_NSApplication, sharedApplication, arginfo_appkit_ns_nsapplication_nsapplication_sharedapplication, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSApplication_NSApplication, delegate, arginfo_appkit_ns_nsapplication_nsapplication_delegate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSApplication_NSApplication, setDelegate, arginfo_appkit_ns_nsapplication_nsapplication_setdelegate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSApplication_NSApplication, hide, arginfo_appkit_ns_nsapplication_nsapplication_hide, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSApplication_NSApplication, unhide, arginfo_appkit_ns_nsapplication_nsapplication_unhide, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSApplication_NSApplication, unhideWithoutActivation, arginfo_appkit_ns_nsapplication_nsapplication_unhidewithoutactivation, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSApplication_NSApplication, windowWithWindowNumber, arginfo_appkit_ns_nsapplication_nsapplication_windowwithwindownumber, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSApplication_NSApplication, mainWindow, arginfo_appkit_ns_nsapplication_nsapplication_mainwindow, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSApplication_NSApplication, keyWindow, arginfo_appkit_ns_nsapplication_nsapplication_keywindow, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSApplication_NSApplication, isActive, arginfo_appkit_ns_nsapplication_nsapplication_isactive, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSApplication_NSApplication, isHidden, arginfo_appkit_ns_nsapplication_nsapplication_ishidden, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSApplication_NSApplication, isRunning, arginfo_appkit_ns_nsapplication_nsapplication_isrunning, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSApplication_NSApplication, deactivate, arginfo_appkit_ns_nsapplication_nsapplication_deactivate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSApplication_NSApplication, activate, arginfo_appkit_ns_nsapplication_nsapplication_activate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSApplication_NSApplication, yieldActivationToApplication, arginfo_appkit_ns_nsapplication_nsapplication_yieldactivationtoapplication, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSApplication_NSApplication, yieldActivationToApplicationWithBundleIdentifier, arginfo_appkit_ns_nsapplication_nsapplication_yieldactivationtoapplicationwithbundleidentifier, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSApplication_NSApplication, hideOtherApplications, arginfo_appkit_ns_nsapplication_nsapplication_hideotherapplications, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSApplication_NSApplication, unhideAllApplications, arginfo_appkit_ns_nsapplication_nsapplication_unhideallapplications, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSApplication_NSApplication, finishLaunching, arginfo_appkit_ns_nsapplication_nsapplication_finishlaunching, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSApplication_NSApplication, run, arginfo_appkit_ns_nsapplication_nsapplication_run, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSApplication_NSApplication, runModalForWindow, arginfo_appkit_ns_nsapplication_nsapplication_runmodalforwindow, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSApplication_NSApplication, stop, arginfo_appkit_ns_nsapplication_nsapplication_stop, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSApplication_NSApplication, stopModal, arginfo_appkit_ns_nsapplication_nsapplication_stopmodal, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSApplication_NSApplication, stopModalWithCode, arginfo_appkit_ns_nsapplication_nsapplication_stopmodalwithcode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSApplication_NSApplication, abortModal, arginfo_appkit_ns_nsapplication_nsapplication_abortmodal, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSApplication_NSApplication, modalWindow, arginfo_appkit_ns_nsapplication_nsapplication_modalwindow, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSApplication_NSApplication, beginModalSessionForWindow, arginfo_appkit_ns_nsapplication_nsapplication_beginmodalsessionforwindow, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSApplication_NSApplication, runModalSession, arginfo_appkit_ns_nsapplication_nsapplication_runmodalsession, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSApplication_NSApplication, endModalSession, arginfo_appkit_ns_nsapplication_nsapplication_endmodalsession, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSApplication_NSApplication, terminate, arginfo_appkit_ns_nsapplication_nsapplication_terminate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSApplication_NSApplication, requestUserAttention, arginfo_appkit_ns_nsapplication_nsapplication_requestuserattention, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSApplication_NSApplication, cancelUserAttentionRequest, arginfo_appkit_ns_nsapplication_nsapplication_canceluserattentionrequest, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSApplication_NSApplication, preventWindowOrdering, arginfo_appkit_ns_nsapplication_nsapplication_preventwindowordering, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSApplication_NSApplication, windows, arginfo_appkit_ns_nsapplication_nsapplication_windows, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSApplication_NSApplication, setWindowsNeedUpdate, arginfo_appkit_ns_nsapplication_nsapplication_setwindowsneedupdate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSApplication_NSApplication, updateWindows, arginfo_appkit_ns_nsapplication_nsapplication_updatewindows, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSApplication_NSApplication, mainMenu, arginfo_appkit_ns_nsapplication_nsapplication_mainmenu, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSApplication_NSApplication, setMainMenu, arginfo_appkit_ns_nsapplication_nsapplication_setmainmenu, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSApplication_NSApplication, helpMenu, arginfo_appkit_ns_nsapplication_nsapplication_helpmenu, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSApplication_NSApplication, setHelpMenu, arginfo_appkit_ns_nsapplication_nsapplication_sethelpmenu, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSApplication_NSApplication, applicationIconImage, arginfo_appkit_ns_nsapplication_nsapplication_applicationiconimage, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSApplication_NSApplication, setApplicationIconImage, arginfo_appkit_ns_nsapplication_nsapplication_setapplicationiconimage, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSApplication_NSApplication, activationPolicy, arginfo_appkit_ns_nsapplication_nsapplication_activationpolicy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSApplication_NSApplication, setActivationPolicy, arginfo_appkit_ns_nsapplication_nsapplication_setactivationpolicy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSApplication_NSApplication, dockTile, arginfo_appkit_ns_nsapplication_nsapplication_docktile, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSApplication_NSApplication, reportException, arginfo_appkit_ns_nsapplication_nsapplication_reportexception, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSApplication_NSApplication, detachDrawingThread, arginfo_appkit_ns_nsapplication_nsapplication_detachdrawingthread, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSApplication_NSApplication, replyToApplicationShouldTerminate, arginfo_appkit_ns_nsapplication_nsapplication_replytoapplicationshouldterminate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSApplication_NSApplication, replyToOpenOrPrint, arginfo_appkit_ns_nsapplication_nsapplication_replytoopenorprint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSApplication_NSApplication, orderFrontCharacterPalette, arginfo_appkit_ns_nsapplication_nsapplication_orderfrontcharacterpalette, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSApplication_NSApplication, presentationOptions, arginfo_appkit_ns_nsapplication_nsapplication_presentationoptions, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSApplication_NSApplication, setPresentationOptions, arginfo_appkit_ns_nsapplication_nsapplication_setpresentationoptions, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSApplication_NSApplication, currentSystemPresentationOptions, arginfo_appkit_ns_nsapplication_nsapplication_currentsystempresentationoptions, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSApplication_NSApplication, occlusionState, arginfo_appkit_ns_nsapplication_nsapplication_occlusionstate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSApplication_NSApplication, isProtectedDataAvailable, arginfo_appkit_ns_nsapplication_nsapplication_isprotecteddataavailable, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSApplication_NSApplication, appearance, arginfo_appkit_ns_nsapplication_nsapplication_appearance, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSApplication_NSApplication, setAppearance, arginfo_appkit_ns_nsapplication_nsapplication_setappearance, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSApplication_NSApplication, effectiveAppearance, arginfo_appkit_ns_nsapplication_nsapplication_effectiveappearance, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSApplication_NSApplication, sendEvent, arginfo_appkit_ns_nsapplication_nsapplication_sendevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSApplication_NSApplication, postEventAtStart, arginfo_appkit_ns_nsapplication_nsapplication_posteventatstart, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSApplication_NSApplication, currentEvent, arginfo_appkit_ns_nsapplication_nsapplication_currentevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSApplication_NSApplication, nextEventMatchingMaskUntilDateInModeDequeue, arginfo_appkit_ns_nsapplication_nsapplication_nexteventmatchingmaskuntildateinmodedequeue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSApplication_NSApplication, discardEventsMatchingMaskBeforeEvent, arginfo_appkit_ns_nsapplication_nsapplication_discardeventsmatchingmaskbeforeevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSApplication_NSApplication, sendActionToFrom, arginfo_appkit_ns_nsapplication_nsapplication_sendactiontofrom, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSApplication_NSApplication, targetForAction, arginfo_appkit_ns_nsapplication_nsapplication_targetforaction, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSApplication_NSApplication, targetForActionToFrom, arginfo_appkit_ns_nsapplication_nsapplication_targetforactiontofrom, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSApplication_NSApplication, tryToPerformWith, arginfo_appkit_ns_nsapplication_nsapplication_trytoperformwith, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSApplication_NSApplication, validRequestorForSendTypeReturnType, arginfo_appkit_ns_nsapplication_nsapplication_validrequestorforsendtypereturntype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSApplication_NSApplication, windowsMenu, arginfo_appkit_ns_nsapplication_nsapplication_windowsmenu, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSApplication_NSApplication, setWindowsMenu, arginfo_appkit_ns_nsapplication_nsapplication_setwindowsmenu, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSApplication_NSApplication, arrangeInFront, arginfo_appkit_ns_nsapplication_nsapplication_arrangeinfront, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSApplication_NSApplication, removeWindowsItem, arginfo_appkit_ns_nsapplication_nsapplication_removewindowsitem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSApplication_NSApplication, addWindowsItemTitleFilename, arginfo_appkit_ns_nsapplication_nsapplication_addwindowsitemtitlefilename, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSApplication_NSApplication, changeWindowsItemTitleFilename, arginfo_appkit_ns_nsapplication_nsapplication_changewindowsitemtitlefilename, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSApplication_NSApplication, updateWindowsItem, arginfo_appkit_ns_nsapplication_nsapplication_updatewindowsitem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSApplication_NSApplication, miniaturizeAll, arginfo_appkit_ns_nsapplication_nsapplication_miniaturizeall, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSApplication_NSApplication, isFullKeyboardAccessEnabled, arginfo_appkit_ns_nsapplication_nsapplication_isfullkeyboardaccessenabled, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSApplication_NSApplication, servicesMenu, arginfo_appkit_ns_nsapplication_nsapplication_servicesmenu, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSApplication_NSApplication, setServicesMenu, arginfo_appkit_ns_nsapplication_nsapplication_setservicesmenu, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSApplication_NSApplication, registerServicesMenuSendTypesReturnTypes, arginfo_appkit_ns_nsapplication_nsapplication_registerservicesmenusendtypesreturntypes, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSApplication_NSApplication, servicesProvider, arginfo_appkit_ns_nsapplication_nsapplication_servicesprovider, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSApplication_NSApplication, setServicesProvider, arginfo_appkit_ns_nsapplication_nsapplication_setservicesprovider, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSApplication_NSApplication, orderFrontStandardAboutPanel, arginfo_appkit_ns_nsapplication_nsapplication_orderfrontstandardaboutpanel, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSApplication_NSApplication, orderFrontStandardAboutPanelWithOptions, arginfo_appkit_ns_nsapplication_nsapplication_orderfrontstandardaboutpanelwithoptions, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSApplication_NSApplication, userInterfaceLayoutDirection, arginfo_appkit_ns_nsapplication_nsapplication_userinterfacelayoutdirection, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSApplication_NSApplication, disableRelaunchOnLogin, arginfo_appkit_ns_nsapplication_nsapplication_disablerelaunchonlogin, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSApplication_NSApplication, enableRelaunchOnLogin, arginfo_appkit_ns_nsapplication_nsapplication_enablerelaunchonlogin, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSApplication_NSApplication, registerForRemoteNotifications, arginfo_appkit_ns_nsapplication_nsapplication_registerforremotenotifications, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSApplication_NSApplication, unregisterForRemoteNotifications, arginfo_appkit_ns_nsapplication_nsapplication_unregisterforremotenotifications, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSApplication_NSApplication, isRegisteredForRemoteNotifications, arginfo_appkit_ns_nsapplication_nsapplication_isregisteredforremotenotifications, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSApplication_NSApplication, registerForRemoteNotificationTypes, arginfo_appkit_ns_nsapplication_nsapplication_registerforremotenotificationtypes, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSApplication_NSApplication, enabledRemoteNotificationTypes, arginfo_appkit_ns_nsapplication_nsapplication_enabledremotenotificationtypes, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
