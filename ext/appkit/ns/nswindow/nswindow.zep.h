
extern zend_class_entry *appkit_ns_nswindow_nswindow_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSWindow_NSWindow);

PHP_METHOD(AppKit_NS_NSWindow_NSWindow, frameRectForContentRectStyleMask);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, contentRectForFrameRectStyleMask);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, minFrameWidthWithTitleStyleMask);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, defaultDepthLimit);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, frameRectForContentRect);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, contentRectForFrameRect);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, initWithContentRectStyleMaskBackingDefer);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, initWithContentRectStyleMaskBackingDeferScreen);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, title);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, setTitle);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, subtitle);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, setSubtitle);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, titleVisibility);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, setTitleVisibility);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, titlebarAppearsTransparent);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, setTitlebarAppearsTransparent);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, toolbarStyle);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, setToolbarStyle);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, contentLayoutRect);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, contentLayoutGuide);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, titlebarAccessoryViewControllers);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, setTitlebarAccessoryViewControllers);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, addTitlebarAccessoryViewController);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, insertTitlebarAccessoryViewControllerAtIndex);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, removeTitlebarAccessoryViewControllerAtIndex);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, representedURL);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, setRepresentedURL);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, representedFilename);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, setRepresentedFilename);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, setTitleWithRepresentedFilename);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, isExcludedFromWindowsMenu);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, setExcludedFromWindowsMenu);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, contentView);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, setContentView);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, delegate);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, setDelegate);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, windowNumber);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, styleMask);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, setStyleMask);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, fieldEditorForObject);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, endEditingFor);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, constrainFrameRectToScreen);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, setFrameDisplay);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, setContentSize);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, setFrameOrigin);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, setFrameTopLeftPoint);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, cascadeTopLeftFromPoint);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, cascadingReferenceFrame);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, frame);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, animationResizeTime);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, setFrameDisplayAnimate);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, inLiveResize);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, resizeIncrements);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, setResizeIncrements);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, aspectRatio);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, setAspectRatio);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, contentResizeIncrements);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, setContentResizeIncrements);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, contentAspectRatio);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, setContentAspectRatio);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, viewsNeedDisplay);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, setViewsNeedDisplay);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, displayIfNeeded);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, display);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, preservesContentDuringLiveResize);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, setPreservesContentDuringLiveResize);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, update);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, makeFirstResponder);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, firstResponder);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, resizeFlags);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, close);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, isReleasedWhenClosed);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, setReleasedWhenClosed);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, miniaturize);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, deminiaturize);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, isZoomed);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, zoom);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, isMiniaturized);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, tryToPerformWith);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, validRequestorForSendTypeReturnType);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, backgroundColor);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, setBackgroundColor);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, setContentBorderThicknessForEdge);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, contentBorderThicknessForEdge);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, setAutorecalculatesContentBorderThicknessForEdge);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, autorecalculatesContentBorderThicknessForEdge);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, isMovable);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, setMovable);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, isMovableByWindowBackground);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, setMovableByWindowBackground);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, hidesOnDeactivate);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, setHidesOnDeactivate);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, canHide);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, setCanHide);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, center);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, makeKeyAndOrderFront);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, orderFront);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, orderBack);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, orderOut);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, orderWindowRelativeTo);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, orderFrontRegardless);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, miniwindowImage);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, setMiniwindowImage);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, miniwindowTitle);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, setMiniwindowTitle);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, dockTile);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, isDocumentEdited);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, setDocumentEdited);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, isVisible);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, isKeyWindow);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, isMainWindow);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, canBecomeKeyWindow);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, canBecomeMainWindow);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, makeKeyWindow);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, makeMainWindow);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, becomeKeyWindow);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, resignKeyWindow);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, becomeMainWindow);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, resignMainWindow);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, worksWhenModal);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, preventsApplicationTerminationWhenModal);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, setPreventsApplicationTerminationWhenModal);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, convertRectToScreen);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, convertRectFromScreen);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, convertPointToScreen);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, convertPointFromScreen);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, convertRectToBacking);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, convertRectFromBacking);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, convertPointToBacking);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, convertPointFromBacking);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, backingAlignedRectOptions);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, backingScaleFactor);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, performClose);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, performMiniaturize);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, performZoom);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, print_);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, allowsToolTipsWhenApplicationIsInactive);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, setAllowsToolTipsWhenApplicationIsInactive);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, backingType);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, setBackingType);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, level);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, setLevel);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, depthLimit);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, setDepthLimit);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, setDynamicDepthLimit);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, hasDynamicDepthLimit);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, screen);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, deepestScreen);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, hasShadow);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, setHasShadow);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, invalidateShadow);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, alphaValue);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, setAlphaValue);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, isOpaque);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, setOpaque);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, sharingType);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, setSharingType);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, allowsConcurrentViewDrawing);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, setAllowsConcurrentViewDrawing);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, displaysWhenScreenProfileChanges);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, setDisplaysWhenScreenProfileChanges);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, canBecomeVisibleWithoutLogin);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, setCanBecomeVisibleWithoutLogin);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, collectionBehavior);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, setCollectionBehavior);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, animationBehavior);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, setAnimationBehavior);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, isOnActiveSpace);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, toggleFullScreen);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, stringWithSavedFrame);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, setFrameFromString);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, saveFrameUsingName);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, setFrameUsingNameForce);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, setFrameUsingName);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, setFrameAutosaveName);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, frameAutosaveName);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, removeFrameUsingName);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, minSize);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, setMinSize);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, maxSize);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, setMaxSize);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, contentMinSize);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, setContentMinSize);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, contentMaxSize);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, setContentMaxSize);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, minFullScreenContentSize);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, setMinFullScreenContentSize);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, maxFullScreenContentSize);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, setMaxFullScreenContentSize);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, deviceDescription);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, windowController);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, setWindowController);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, endSheet);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, endSheetReturnCode);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, sheets);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, attachedSheet);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, isSheet);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, sheetParent);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, standardWindowButtonForStyleMask);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, standardWindowButton);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, addChildWindowOrdered);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, removeChildWindow);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, childWindows);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, parentWindow);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, setParentWindow);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, appearanceSource);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, setAppearanceSource);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, colorSpace);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, setColorSpace);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, canRepresentDisplayGamut);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, windowNumbersWithOptions);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, windowNumberAtPointBelowWindowWithWindowNumber);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, occlusionState);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, titlebarSeparatorStyle);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, setTitlebarSeparatorStyle);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, contentViewController);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, setContentViewController);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, windowWithContentViewController);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, performWindowDragWithEvent);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, initialFirstResponder);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, setInitialFirstResponder);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, selectNextKeyView);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, selectPreviousKeyView);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, selectKeyViewFollowingView);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, selectKeyViewPrecedingView);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, keyViewSelectionDirection);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, defaultButtonCell);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, setDefaultButtonCell);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, disableKeyEquivalentForDefaultButtonCell);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, enableKeyEquivalentForDefaultButtonCell);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, autorecalculatesKeyViewLoop);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, setAutorecalculatesKeyViewLoop);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, recalculateKeyViewLoop);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, toolbar);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, setToolbar);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, toggleToolbarShown);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, runToolbarCustomizationPalette);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, allowsAutomaticWindowTabbing);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, setAllowsAutomaticWindowTabbing);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, userTabbingPreference);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, tabbingMode);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, setTabbingMode);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, tabbingIdentifier);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, setTabbingIdentifier);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, selectNextTab);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, selectPreviousTab);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, moveTabToNewWindow);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, mergeAllWindows);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, toggleTabBar);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, toggleTabOverview);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, tabbedWindows);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, addTabbedWindowOrdered);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, tab);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, tabGroup);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, hasActiveWindowSharingSession);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, windowTitlebarLayoutDirection);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, nextEventMatchingMask);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, nextEventMatchingMaskUntilDateInModeDequeue);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, discardEventsMatchingMaskBeforeEvent);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, postEventAtStart);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, sendEvent);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, currentEvent);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, acceptsMouseMovedEvents);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, setAcceptsMouseMovedEvents);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, ignoresMouseEvents);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, setIgnoresMouseEvents);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, mouseLocationOutsideOfEventStream);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, disableCursorRects);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, enableCursorRects);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, discardCursorRects);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, areCursorRectsEnabled);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, invalidateCursorRectsForView);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, resetCursorRects);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, beginDraggingSessionWithItemsEventSource);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, registerForDraggedTypes);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, unregisterDraggedTypes);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, displayLinkWithTargetSelector);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_framerectforcontentrectstylemask, 0, 5, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, style, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_contentrectforframerectstylemask, 0, 5, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, style, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_minframewidthwithtitlestylemask, 0, 2, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, title, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, style, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_defaultdepthlimit, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_framerectforcontentrect, 0, 5, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_contentrectforframerect, 0, 5, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_initwithcontentrectstylemaskbackingdefer, 0, 7, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, style, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, backingStoreType, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, flag, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_initwithcontentrectstylemaskbackingdeferscreen, 0, 8, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, style, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, backingStoreType, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, flag, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, screen, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_title, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_settitle, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, title, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_subtitle, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_setsubtitle, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, subtitle, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_titlevisibility, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_settitlevisibility, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, titleVisibility, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_titlebarappearstransparent, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_settitlebarappearstransparent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, titlebarAppearsTransparent, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_toolbarstyle, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_settoolbarstyle, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, toolbarStyle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_contentlayoutrect, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_contentlayoutguide, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_titlebaraccessoryviewcontrollers, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_settitlebaraccessoryviewcontrollers, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, titlebarAccessoryViewControllers, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_addtitlebaraccessoryviewcontroller, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, childViewController, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_inserttitlebaraccessoryviewcontrolleratindex, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, childViewController, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_removetitlebaraccessoryviewcontrolleratindex, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_representedurl, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_setrepresentedurl, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, representedURL, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_representedfilename, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_setrepresentedfilename, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, representedFilename, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_settitlewithrepresentedfilename, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, filename, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_isexcludedfromwindowsmenu, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_setexcludedfromwindowsmenu, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, excludedFromWindowsMenu, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_contentview, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_setcontentview, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, contentView, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_delegate, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_setdelegate, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, delegate, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_windownumber, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_stylemask, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_setstylemask, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, styleMask, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_fieldeditorforobject, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, createFlag, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, object_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_endeditingfor, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, object_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_constrainframerecttoscreen, 0, 6, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, screen, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_setframedisplay, 0, 6, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, flag, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_setcontentsize, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_setframeorigin, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_setframetopleftpoint, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_cascadetopleftfrompoint, 0, 3, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_cascadingreferenceframe, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_frame, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_animationresizetime, 0, 5, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_setframedisplayanimate, 0, 7, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, displayFlag, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, animateFlag, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_inliveresize, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_resizeincrements, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_setresizeincrements, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_aspectratio, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_setaspectratio, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_contentresizeincrements, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_setcontentresizeincrements, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_contentaspectratio, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_setcontentaspectratio, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_viewsneeddisplay, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_setviewsneeddisplay, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, viewsNeedDisplay, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_displayifneeded, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_display, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_preservescontentduringliveresize, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_setpreservescontentduringliveresize, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, preservesContentDuringLiveResize, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_update, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_makefirstresponder, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, responder, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_firstresponder, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_resizeflags, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_close, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_isreleasedwhenclosed, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_setreleasedwhenclosed, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, releasedWhenClosed, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_miniaturize, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sender, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_deminiaturize, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sender, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_iszoomed, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_zoom, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sender, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_isminiaturized, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_trytoperformwith, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, action, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, object_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_validrequestorforsendtypereturntype, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, sendType)
	ZEND_ARG_INFO(0, returnType)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_backgroundcolor, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_setbackgroundcolor, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, backgroundColor, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_setcontentborderthicknessforedge, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, thickness, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, edge, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_contentborderthicknessforedge, 0, 2, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, edge, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_setautorecalculatescontentborderthicknessforedge, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, flag, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, edge, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_autorecalculatescontentborderthicknessforedge, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, edge, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_ismovable, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_setmovable, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, movable, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_ismovablebywindowbackground, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_setmovablebywindowbackground, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, movableByWindowBackground, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_hidesondeactivate, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_sethidesondeactivate, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, hidesOnDeactivate, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_canhide, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_setcanhide, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, canHide, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_center, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_makekeyandorderfront, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sender, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_orderfront, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sender, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_orderback, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sender, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_orderout, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sender, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_orderwindowrelativeto, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, place, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, otherWin, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_orderfrontregardless, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_miniwindowimage, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_setminiwindowimage, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, miniwindowImage, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_miniwindowtitle, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_setminiwindowtitle, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, miniwindowTitle)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_docktile, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_isdocumentedited, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_setdocumentedited, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, documentEdited, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_isvisible, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_iskeywindow, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_ismainwindow, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_canbecomekeywindow, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_canbecomemainwindow, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_makekeywindow, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_makemainwindow, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_becomekeywindow, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_resignkeywindow, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_becomemainwindow, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_resignmainwindow, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_workswhenmodal, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_preventsapplicationterminationwhenmodal, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_setpreventsapplicationterminationwhenmodal, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, preventsApplicationTerminationWhenModal, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_convertrecttoscreen, 0, 5, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_convertrectfromscreen, 0, 5, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_convertpointtoscreen, 0, 3, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_convertpointfromscreen, 0, 3, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_convertrecttobacking, 0, 5, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_convertrectfrombacking, 0, 5, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_convertpointtobacking, 0, 3, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_convertpointfrombacking, 0, 3, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_backingalignedrectoptions, 0, 6, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, options, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_backingscalefactor, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_performclose, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sender, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_performminiaturize, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sender, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_performzoom, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sender, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_print_, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sender, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_allowstooltipswhenapplicationisinactive, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_setallowstooltipswhenapplicationisinactive, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, allowsToolTipsWhenApplicationIsInactive, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_backingtype, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_setbackingtype, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, backingType, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_level, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_setlevel, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, level, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_depthlimit, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_setdepthlimit, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, depthLimit, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_setdynamicdepthlimit, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, flag, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_hasdynamicdepthlimit, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_screen, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_deepestscreen, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_hasshadow, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_sethasshadow, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, hasShadow, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_invalidateshadow, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_alphavalue, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_setalphavalue, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, alphaValue, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_isopaque, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_setopaque, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, opaque, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_sharingtype, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_setsharingtype, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sharingType, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_allowsconcurrentviewdrawing, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_setallowsconcurrentviewdrawing, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, allowsConcurrentViewDrawing, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_displayswhenscreenprofilechanges, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_setdisplayswhenscreenprofilechanges, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, displaysWhenScreenProfileChanges, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_canbecomevisiblewithoutlogin, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_setcanbecomevisiblewithoutlogin, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, canBecomeVisibleWithoutLogin, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_collectionbehavior, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_setcollectionbehavior, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, collectionBehavior, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_animationbehavior, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_setanimationbehavior, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, animationBehavior, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_isonactivespace, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_togglefullscreen, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sender, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_stringwithsavedframe, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_setframefromstring, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, string_, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_saveframeusingname, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_setframeusingnameforce, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, force, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_setframeusingname, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_setframeautosavename, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_frameautosavename, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_removeframeusingname, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_minsize, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_setminsize, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_maxsize, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_setmaxsize, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_contentminsize, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_setcontentminsize, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_contentmaxsize, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_setcontentmaxsize, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_minfullscreencontentsize, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_setminfullscreencontentsize, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_maxfullscreencontentsize, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_setmaxfullscreencontentsize, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_devicedescription, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_windowcontroller, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_setwindowcontroller, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, windowController, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_endsheet, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sheetWindow, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_endsheetreturncode, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sheetWindow, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, returnCode, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_sheets, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_attachedsheet, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_issheet, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_sheetparent, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_standardwindowbuttonforstylemask, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, b, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, styleMask, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_standardwindowbutton, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, b, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_addchildwindowordered, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, childWin, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, place, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_removechildwindow, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, childWin, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_childwindows, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_parentwindow, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_setparentwindow, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parentWindow, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_appearancesource, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_setappearancesource, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, appearanceSource, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_colorspace, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_setcolorspace, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, colorSpace, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_canrepresentdisplaygamut, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, displayGamut, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_windownumberswithoptions, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, options, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_windownumberatpointbelowwindowwithwindownumber, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, windowNumber, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_occlusionstate, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_titlebarseparatorstyle, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_settitlebarseparatorstyle, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, titlebarSeparatorStyle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_contentviewcontroller, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_setcontentviewcontroller, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, contentViewController, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_windowwithcontentviewcontroller, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, contentViewController, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_performwindowdragwithevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_initialfirstresponder, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_setinitialfirstresponder, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, initialFirstResponder, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_selectnextkeyview, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sender, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_selectpreviouskeyview, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sender, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_selectkeyviewfollowingview, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, view, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_selectkeyviewprecedingview, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, view, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_keyviewselectiondirection, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_defaultbuttoncell, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_setdefaultbuttoncell, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, defaultButtonCell, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_disablekeyequivalentfordefaultbuttoncell, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_enablekeyequivalentfordefaultbuttoncell, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_autorecalculateskeyviewloop, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_setautorecalculateskeyviewloop, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, autorecalculatesKeyViewLoop, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_recalculatekeyviewloop, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_toolbar, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_settoolbar, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, toolbar, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_toggletoolbarshown, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sender, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_runtoolbarcustomizationpalette, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sender, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_allowsautomaticwindowtabbing, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_setallowsautomaticwindowtabbing, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, allowsAutomaticWindowTabbing, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_usertabbingpreference, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_tabbingmode, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_settabbingmode, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, tabbingMode, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_tabbingidentifier, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_settabbingidentifier, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, tabbingIdentifier, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_selectnexttab, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sender, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_selectprevioustab, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sender, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_movetabtonewwindow, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sender, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_mergeallwindows, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sender, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_toggletabbar, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sender, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_toggletaboverview, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sender, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_tabbedwindows, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_addtabbedwindowordered, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, window, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, ordered, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_tab, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_tabgroup, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_hasactivewindowsharingsession, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_windowtitlebarlayoutdirection, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_nexteventmatchingmask, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, mask, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_nexteventmatchingmaskuntildateinmodedequeue, 0, 5, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, mask, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, expiration, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, mode, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, deqFlag, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_discardeventsmatchingmaskbeforeevent, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, mask, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, lastEvent, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_posteventatstart, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, flag, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_sendevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_currentevent, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_acceptsmousemovedevents, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_setacceptsmousemovedevents, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, acceptsMouseMovedEvents, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_ignoresmouseevents, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_setignoresmouseevents, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, ignoresMouseEvents, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_mouselocationoutsideofeventstream, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_disablecursorrects, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_enablecursorrects, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_discardcursorrects, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_arecursorrectsenabled, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_invalidatecursorrectsforview, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, view, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_resetcursorrects, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_begindraggingsessionwithitemseventsource, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, items, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, source, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_registerfordraggedtypes, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, newTypes, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_unregisterdraggedtypes, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_displaylinkwithtargetselector, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, target, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selector, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nswindow_nswindow_method_entry) {
	PHP_ME(AppKit_NS_NSWindow_NSWindow, frameRectForContentRectStyleMask, arginfo_appkit_ns_nswindow_nswindow_framerectforcontentrectstylemask, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, contentRectForFrameRectStyleMask, arginfo_appkit_ns_nswindow_nswindow_contentrectforframerectstylemask, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, minFrameWidthWithTitleStyleMask, arginfo_appkit_ns_nswindow_nswindow_minframewidthwithtitlestylemask, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, defaultDepthLimit, arginfo_appkit_ns_nswindow_nswindow_defaultdepthlimit, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, frameRectForContentRect, arginfo_appkit_ns_nswindow_nswindow_framerectforcontentrect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, contentRectForFrameRect, arginfo_appkit_ns_nswindow_nswindow_contentrectforframerect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, initWithContentRectStyleMaskBackingDefer, arginfo_appkit_ns_nswindow_nswindow_initwithcontentrectstylemaskbackingdefer, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, initWithContentRectStyleMaskBackingDeferScreen, arginfo_appkit_ns_nswindow_nswindow_initwithcontentrectstylemaskbackingdeferscreen, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, title, arginfo_appkit_ns_nswindow_nswindow_title, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, setTitle, arginfo_appkit_ns_nswindow_nswindow_settitle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, subtitle, arginfo_appkit_ns_nswindow_nswindow_subtitle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, setSubtitle, arginfo_appkit_ns_nswindow_nswindow_setsubtitle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, titleVisibility, arginfo_appkit_ns_nswindow_nswindow_titlevisibility, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, setTitleVisibility, arginfo_appkit_ns_nswindow_nswindow_settitlevisibility, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, titlebarAppearsTransparent, arginfo_appkit_ns_nswindow_nswindow_titlebarappearstransparent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, setTitlebarAppearsTransparent, arginfo_appkit_ns_nswindow_nswindow_settitlebarappearstransparent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, toolbarStyle, arginfo_appkit_ns_nswindow_nswindow_toolbarstyle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, setToolbarStyle, arginfo_appkit_ns_nswindow_nswindow_settoolbarstyle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, contentLayoutRect, arginfo_appkit_ns_nswindow_nswindow_contentlayoutrect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, contentLayoutGuide, arginfo_appkit_ns_nswindow_nswindow_contentlayoutguide, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, titlebarAccessoryViewControllers, arginfo_appkit_ns_nswindow_nswindow_titlebaraccessoryviewcontrollers, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, setTitlebarAccessoryViewControllers, arginfo_appkit_ns_nswindow_nswindow_settitlebaraccessoryviewcontrollers, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, addTitlebarAccessoryViewController, arginfo_appkit_ns_nswindow_nswindow_addtitlebaraccessoryviewcontroller, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, insertTitlebarAccessoryViewControllerAtIndex, arginfo_appkit_ns_nswindow_nswindow_inserttitlebaraccessoryviewcontrolleratindex, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, removeTitlebarAccessoryViewControllerAtIndex, arginfo_appkit_ns_nswindow_nswindow_removetitlebaraccessoryviewcontrolleratindex, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, representedURL, arginfo_appkit_ns_nswindow_nswindow_representedurl, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, setRepresentedURL, arginfo_appkit_ns_nswindow_nswindow_setrepresentedurl, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, representedFilename, arginfo_appkit_ns_nswindow_nswindow_representedfilename, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, setRepresentedFilename, arginfo_appkit_ns_nswindow_nswindow_setrepresentedfilename, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, setTitleWithRepresentedFilename, arginfo_appkit_ns_nswindow_nswindow_settitlewithrepresentedfilename, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, isExcludedFromWindowsMenu, arginfo_appkit_ns_nswindow_nswindow_isexcludedfromwindowsmenu, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, setExcludedFromWindowsMenu, arginfo_appkit_ns_nswindow_nswindow_setexcludedfromwindowsmenu, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, contentView, arginfo_appkit_ns_nswindow_nswindow_contentview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, setContentView, arginfo_appkit_ns_nswindow_nswindow_setcontentview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, delegate, arginfo_appkit_ns_nswindow_nswindow_delegate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, setDelegate, arginfo_appkit_ns_nswindow_nswindow_setdelegate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, windowNumber, arginfo_appkit_ns_nswindow_nswindow_windownumber, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, styleMask, arginfo_appkit_ns_nswindow_nswindow_stylemask, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, setStyleMask, arginfo_appkit_ns_nswindow_nswindow_setstylemask, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, fieldEditorForObject, arginfo_appkit_ns_nswindow_nswindow_fieldeditorforobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, endEditingFor, arginfo_appkit_ns_nswindow_nswindow_endeditingfor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, constrainFrameRectToScreen, arginfo_appkit_ns_nswindow_nswindow_constrainframerecttoscreen, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, setFrameDisplay, arginfo_appkit_ns_nswindow_nswindow_setframedisplay, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, setContentSize, arginfo_appkit_ns_nswindow_nswindow_setcontentsize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, setFrameOrigin, arginfo_appkit_ns_nswindow_nswindow_setframeorigin, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, setFrameTopLeftPoint, arginfo_appkit_ns_nswindow_nswindow_setframetopleftpoint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, cascadeTopLeftFromPoint, arginfo_appkit_ns_nswindow_nswindow_cascadetopleftfrompoint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, cascadingReferenceFrame, arginfo_appkit_ns_nswindow_nswindow_cascadingreferenceframe, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, frame, arginfo_appkit_ns_nswindow_nswindow_frame, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, animationResizeTime, arginfo_appkit_ns_nswindow_nswindow_animationresizetime, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, setFrameDisplayAnimate, arginfo_appkit_ns_nswindow_nswindow_setframedisplayanimate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, inLiveResize, arginfo_appkit_ns_nswindow_nswindow_inliveresize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, resizeIncrements, arginfo_appkit_ns_nswindow_nswindow_resizeincrements, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, setResizeIncrements, arginfo_appkit_ns_nswindow_nswindow_setresizeincrements, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, aspectRatio, arginfo_appkit_ns_nswindow_nswindow_aspectratio, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, setAspectRatio, arginfo_appkit_ns_nswindow_nswindow_setaspectratio, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, contentResizeIncrements, arginfo_appkit_ns_nswindow_nswindow_contentresizeincrements, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, setContentResizeIncrements, arginfo_appkit_ns_nswindow_nswindow_setcontentresizeincrements, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, contentAspectRatio, arginfo_appkit_ns_nswindow_nswindow_contentaspectratio, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, setContentAspectRatio, arginfo_appkit_ns_nswindow_nswindow_setcontentaspectratio, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, viewsNeedDisplay, arginfo_appkit_ns_nswindow_nswindow_viewsneeddisplay, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, setViewsNeedDisplay, arginfo_appkit_ns_nswindow_nswindow_setviewsneeddisplay, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, displayIfNeeded, arginfo_appkit_ns_nswindow_nswindow_displayifneeded, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, display, arginfo_appkit_ns_nswindow_nswindow_display, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, preservesContentDuringLiveResize, arginfo_appkit_ns_nswindow_nswindow_preservescontentduringliveresize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, setPreservesContentDuringLiveResize, arginfo_appkit_ns_nswindow_nswindow_setpreservescontentduringliveresize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, update, arginfo_appkit_ns_nswindow_nswindow_update, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, makeFirstResponder, arginfo_appkit_ns_nswindow_nswindow_makefirstresponder, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, firstResponder, arginfo_appkit_ns_nswindow_nswindow_firstresponder, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, resizeFlags, arginfo_appkit_ns_nswindow_nswindow_resizeflags, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, close, arginfo_appkit_ns_nswindow_nswindow_close, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, isReleasedWhenClosed, arginfo_appkit_ns_nswindow_nswindow_isreleasedwhenclosed, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, setReleasedWhenClosed, arginfo_appkit_ns_nswindow_nswindow_setreleasedwhenclosed, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, miniaturize, arginfo_appkit_ns_nswindow_nswindow_miniaturize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, deminiaturize, arginfo_appkit_ns_nswindow_nswindow_deminiaturize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, isZoomed, arginfo_appkit_ns_nswindow_nswindow_iszoomed, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, zoom, arginfo_appkit_ns_nswindow_nswindow_zoom, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, isMiniaturized, arginfo_appkit_ns_nswindow_nswindow_isminiaturized, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, tryToPerformWith, arginfo_appkit_ns_nswindow_nswindow_trytoperformwith, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, validRequestorForSendTypeReturnType, arginfo_appkit_ns_nswindow_nswindow_validrequestorforsendtypereturntype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, backgroundColor, arginfo_appkit_ns_nswindow_nswindow_backgroundcolor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, setBackgroundColor, arginfo_appkit_ns_nswindow_nswindow_setbackgroundcolor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, setContentBorderThicknessForEdge, arginfo_appkit_ns_nswindow_nswindow_setcontentborderthicknessforedge, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, contentBorderThicknessForEdge, arginfo_appkit_ns_nswindow_nswindow_contentborderthicknessforedge, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, setAutorecalculatesContentBorderThicknessForEdge, arginfo_appkit_ns_nswindow_nswindow_setautorecalculatescontentborderthicknessforedge, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, autorecalculatesContentBorderThicknessForEdge, arginfo_appkit_ns_nswindow_nswindow_autorecalculatescontentborderthicknessforedge, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, isMovable, arginfo_appkit_ns_nswindow_nswindow_ismovable, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, setMovable, arginfo_appkit_ns_nswindow_nswindow_setmovable, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, isMovableByWindowBackground, arginfo_appkit_ns_nswindow_nswindow_ismovablebywindowbackground, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, setMovableByWindowBackground, arginfo_appkit_ns_nswindow_nswindow_setmovablebywindowbackground, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, hidesOnDeactivate, arginfo_appkit_ns_nswindow_nswindow_hidesondeactivate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, setHidesOnDeactivate, arginfo_appkit_ns_nswindow_nswindow_sethidesondeactivate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, canHide, arginfo_appkit_ns_nswindow_nswindow_canhide, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, setCanHide, arginfo_appkit_ns_nswindow_nswindow_setcanhide, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, center, arginfo_appkit_ns_nswindow_nswindow_center, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, makeKeyAndOrderFront, arginfo_appkit_ns_nswindow_nswindow_makekeyandorderfront, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, orderFront, arginfo_appkit_ns_nswindow_nswindow_orderfront, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, orderBack, arginfo_appkit_ns_nswindow_nswindow_orderback, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, orderOut, arginfo_appkit_ns_nswindow_nswindow_orderout, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, orderWindowRelativeTo, arginfo_appkit_ns_nswindow_nswindow_orderwindowrelativeto, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, orderFrontRegardless, arginfo_appkit_ns_nswindow_nswindow_orderfrontregardless, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, miniwindowImage, arginfo_appkit_ns_nswindow_nswindow_miniwindowimage, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, setMiniwindowImage, arginfo_appkit_ns_nswindow_nswindow_setminiwindowimage, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, miniwindowTitle, arginfo_appkit_ns_nswindow_nswindow_miniwindowtitle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, setMiniwindowTitle, arginfo_appkit_ns_nswindow_nswindow_setminiwindowtitle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, dockTile, arginfo_appkit_ns_nswindow_nswindow_docktile, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, isDocumentEdited, arginfo_appkit_ns_nswindow_nswindow_isdocumentedited, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, setDocumentEdited, arginfo_appkit_ns_nswindow_nswindow_setdocumentedited, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, isVisible, arginfo_appkit_ns_nswindow_nswindow_isvisible, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, isKeyWindow, arginfo_appkit_ns_nswindow_nswindow_iskeywindow, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, isMainWindow, arginfo_appkit_ns_nswindow_nswindow_ismainwindow, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, canBecomeKeyWindow, arginfo_appkit_ns_nswindow_nswindow_canbecomekeywindow, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, canBecomeMainWindow, arginfo_appkit_ns_nswindow_nswindow_canbecomemainwindow, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, makeKeyWindow, arginfo_appkit_ns_nswindow_nswindow_makekeywindow, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, makeMainWindow, arginfo_appkit_ns_nswindow_nswindow_makemainwindow, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, becomeKeyWindow, arginfo_appkit_ns_nswindow_nswindow_becomekeywindow, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, resignKeyWindow, arginfo_appkit_ns_nswindow_nswindow_resignkeywindow, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, becomeMainWindow, arginfo_appkit_ns_nswindow_nswindow_becomemainwindow, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, resignMainWindow, arginfo_appkit_ns_nswindow_nswindow_resignmainwindow, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, worksWhenModal, arginfo_appkit_ns_nswindow_nswindow_workswhenmodal, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, preventsApplicationTerminationWhenModal, arginfo_appkit_ns_nswindow_nswindow_preventsapplicationterminationwhenmodal, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, setPreventsApplicationTerminationWhenModal, arginfo_appkit_ns_nswindow_nswindow_setpreventsapplicationterminationwhenmodal, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, convertRectToScreen, arginfo_appkit_ns_nswindow_nswindow_convertrecttoscreen, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, convertRectFromScreen, arginfo_appkit_ns_nswindow_nswindow_convertrectfromscreen, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, convertPointToScreen, arginfo_appkit_ns_nswindow_nswindow_convertpointtoscreen, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, convertPointFromScreen, arginfo_appkit_ns_nswindow_nswindow_convertpointfromscreen, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, convertRectToBacking, arginfo_appkit_ns_nswindow_nswindow_convertrecttobacking, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, convertRectFromBacking, arginfo_appkit_ns_nswindow_nswindow_convertrectfrombacking, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, convertPointToBacking, arginfo_appkit_ns_nswindow_nswindow_convertpointtobacking, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, convertPointFromBacking, arginfo_appkit_ns_nswindow_nswindow_convertpointfrombacking, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, backingAlignedRectOptions, arginfo_appkit_ns_nswindow_nswindow_backingalignedrectoptions, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, backingScaleFactor, arginfo_appkit_ns_nswindow_nswindow_backingscalefactor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, performClose, arginfo_appkit_ns_nswindow_nswindow_performclose, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, performMiniaturize, arginfo_appkit_ns_nswindow_nswindow_performminiaturize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, performZoom, arginfo_appkit_ns_nswindow_nswindow_performzoom, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, print_, arginfo_appkit_ns_nswindow_nswindow_print_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, allowsToolTipsWhenApplicationIsInactive, arginfo_appkit_ns_nswindow_nswindow_allowstooltipswhenapplicationisinactive, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, setAllowsToolTipsWhenApplicationIsInactive, arginfo_appkit_ns_nswindow_nswindow_setallowstooltipswhenapplicationisinactive, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, backingType, arginfo_appkit_ns_nswindow_nswindow_backingtype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, setBackingType, arginfo_appkit_ns_nswindow_nswindow_setbackingtype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, level, arginfo_appkit_ns_nswindow_nswindow_level, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, setLevel, arginfo_appkit_ns_nswindow_nswindow_setlevel, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, depthLimit, arginfo_appkit_ns_nswindow_nswindow_depthlimit, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, setDepthLimit, arginfo_appkit_ns_nswindow_nswindow_setdepthlimit, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, setDynamicDepthLimit, arginfo_appkit_ns_nswindow_nswindow_setdynamicdepthlimit, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, hasDynamicDepthLimit, arginfo_appkit_ns_nswindow_nswindow_hasdynamicdepthlimit, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, screen, arginfo_appkit_ns_nswindow_nswindow_screen, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, deepestScreen, arginfo_appkit_ns_nswindow_nswindow_deepestscreen, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, hasShadow, arginfo_appkit_ns_nswindow_nswindow_hasshadow, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, setHasShadow, arginfo_appkit_ns_nswindow_nswindow_sethasshadow, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, invalidateShadow, arginfo_appkit_ns_nswindow_nswindow_invalidateshadow, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, alphaValue, arginfo_appkit_ns_nswindow_nswindow_alphavalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, setAlphaValue, arginfo_appkit_ns_nswindow_nswindow_setalphavalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, isOpaque, arginfo_appkit_ns_nswindow_nswindow_isopaque, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, setOpaque, arginfo_appkit_ns_nswindow_nswindow_setopaque, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, sharingType, arginfo_appkit_ns_nswindow_nswindow_sharingtype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, setSharingType, arginfo_appkit_ns_nswindow_nswindow_setsharingtype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, allowsConcurrentViewDrawing, arginfo_appkit_ns_nswindow_nswindow_allowsconcurrentviewdrawing, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, setAllowsConcurrentViewDrawing, arginfo_appkit_ns_nswindow_nswindow_setallowsconcurrentviewdrawing, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, displaysWhenScreenProfileChanges, arginfo_appkit_ns_nswindow_nswindow_displayswhenscreenprofilechanges, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, setDisplaysWhenScreenProfileChanges, arginfo_appkit_ns_nswindow_nswindow_setdisplayswhenscreenprofilechanges, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, canBecomeVisibleWithoutLogin, arginfo_appkit_ns_nswindow_nswindow_canbecomevisiblewithoutlogin, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, setCanBecomeVisibleWithoutLogin, arginfo_appkit_ns_nswindow_nswindow_setcanbecomevisiblewithoutlogin, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, collectionBehavior, arginfo_appkit_ns_nswindow_nswindow_collectionbehavior, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, setCollectionBehavior, arginfo_appkit_ns_nswindow_nswindow_setcollectionbehavior, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, animationBehavior, arginfo_appkit_ns_nswindow_nswindow_animationbehavior, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, setAnimationBehavior, arginfo_appkit_ns_nswindow_nswindow_setanimationbehavior, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, isOnActiveSpace, arginfo_appkit_ns_nswindow_nswindow_isonactivespace, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, toggleFullScreen, arginfo_appkit_ns_nswindow_nswindow_togglefullscreen, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, stringWithSavedFrame, arginfo_appkit_ns_nswindow_nswindow_stringwithsavedframe, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, setFrameFromString, arginfo_appkit_ns_nswindow_nswindow_setframefromstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, saveFrameUsingName, arginfo_appkit_ns_nswindow_nswindow_saveframeusingname, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, setFrameUsingNameForce, arginfo_appkit_ns_nswindow_nswindow_setframeusingnameforce, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, setFrameUsingName, arginfo_appkit_ns_nswindow_nswindow_setframeusingname, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, setFrameAutosaveName, arginfo_appkit_ns_nswindow_nswindow_setframeautosavename, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, frameAutosaveName, arginfo_appkit_ns_nswindow_nswindow_frameautosavename, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, removeFrameUsingName, arginfo_appkit_ns_nswindow_nswindow_removeframeusingname, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, minSize, arginfo_appkit_ns_nswindow_nswindow_minsize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, setMinSize, arginfo_appkit_ns_nswindow_nswindow_setminsize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, maxSize, arginfo_appkit_ns_nswindow_nswindow_maxsize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, setMaxSize, arginfo_appkit_ns_nswindow_nswindow_setmaxsize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, contentMinSize, arginfo_appkit_ns_nswindow_nswindow_contentminsize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, setContentMinSize, arginfo_appkit_ns_nswindow_nswindow_setcontentminsize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, contentMaxSize, arginfo_appkit_ns_nswindow_nswindow_contentmaxsize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, setContentMaxSize, arginfo_appkit_ns_nswindow_nswindow_setcontentmaxsize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, minFullScreenContentSize, arginfo_appkit_ns_nswindow_nswindow_minfullscreencontentsize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, setMinFullScreenContentSize, arginfo_appkit_ns_nswindow_nswindow_setminfullscreencontentsize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, maxFullScreenContentSize, arginfo_appkit_ns_nswindow_nswindow_maxfullscreencontentsize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, setMaxFullScreenContentSize, arginfo_appkit_ns_nswindow_nswindow_setmaxfullscreencontentsize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, deviceDescription, arginfo_appkit_ns_nswindow_nswindow_devicedescription, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, windowController, arginfo_appkit_ns_nswindow_nswindow_windowcontroller, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, setWindowController, arginfo_appkit_ns_nswindow_nswindow_setwindowcontroller, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, endSheet, arginfo_appkit_ns_nswindow_nswindow_endsheet, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, endSheetReturnCode, arginfo_appkit_ns_nswindow_nswindow_endsheetreturncode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, sheets, arginfo_appkit_ns_nswindow_nswindow_sheets, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, attachedSheet, arginfo_appkit_ns_nswindow_nswindow_attachedsheet, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, isSheet, arginfo_appkit_ns_nswindow_nswindow_issheet, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, sheetParent, arginfo_appkit_ns_nswindow_nswindow_sheetparent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, standardWindowButtonForStyleMask, arginfo_appkit_ns_nswindow_nswindow_standardwindowbuttonforstylemask, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, standardWindowButton, arginfo_appkit_ns_nswindow_nswindow_standardwindowbutton, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, addChildWindowOrdered, arginfo_appkit_ns_nswindow_nswindow_addchildwindowordered, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, removeChildWindow, arginfo_appkit_ns_nswindow_nswindow_removechildwindow, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, childWindows, arginfo_appkit_ns_nswindow_nswindow_childwindows, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, parentWindow, arginfo_appkit_ns_nswindow_nswindow_parentwindow, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, setParentWindow, arginfo_appkit_ns_nswindow_nswindow_setparentwindow, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, appearanceSource, arginfo_appkit_ns_nswindow_nswindow_appearancesource, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, setAppearanceSource, arginfo_appkit_ns_nswindow_nswindow_setappearancesource, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, colorSpace, arginfo_appkit_ns_nswindow_nswindow_colorspace, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, setColorSpace, arginfo_appkit_ns_nswindow_nswindow_setcolorspace, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, canRepresentDisplayGamut, arginfo_appkit_ns_nswindow_nswindow_canrepresentdisplaygamut, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, windowNumbersWithOptions, arginfo_appkit_ns_nswindow_nswindow_windownumberswithoptions, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, windowNumberAtPointBelowWindowWithWindowNumber, arginfo_appkit_ns_nswindow_nswindow_windownumberatpointbelowwindowwithwindownumber, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, occlusionState, arginfo_appkit_ns_nswindow_nswindow_occlusionstate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, titlebarSeparatorStyle, arginfo_appkit_ns_nswindow_nswindow_titlebarseparatorstyle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, setTitlebarSeparatorStyle, arginfo_appkit_ns_nswindow_nswindow_settitlebarseparatorstyle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, contentViewController, arginfo_appkit_ns_nswindow_nswindow_contentviewcontroller, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, setContentViewController, arginfo_appkit_ns_nswindow_nswindow_setcontentviewcontroller, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, windowWithContentViewController, arginfo_appkit_ns_nswindow_nswindow_windowwithcontentviewcontroller, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, performWindowDragWithEvent, arginfo_appkit_ns_nswindow_nswindow_performwindowdragwithevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, initialFirstResponder, arginfo_appkit_ns_nswindow_nswindow_initialfirstresponder, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, setInitialFirstResponder, arginfo_appkit_ns_nswindow_nswindow_setinitialfirstresponder, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, selectNextKeyView, arginfo_appkit_ns_nswindow_nswindow_selectnextkeyview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, selectPreviousKeyView, arginfo_appkit_ns_nswindow_nswindow_selectpreviouskeyview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, selectKeyViewFollowingView, arginfo_appkit_ns_nswindow_nswindow_selectkeyviewfollowingview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, selectKeyViewPrecedingView, arginfo_appkit_ns_nswindow_nswindow_selectkeyviewprecedingview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, keyViewSelectionDirection, arginfo_appkit_ns_nswindow_nswindow_keyviewselectiondirection, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, defaultButtonCell, arginfo_appkit_ns_nswindow_nswindow_defaultbuttoncell, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, setDefaultButtonCell, arginfo_appkit_ns_nswindow_nswindow_setdefaultbuttoncell, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, disableKeyEquivalentForDefaultButtonCell, arginfo_appkit_ns_nswindow_nswindow_disablekeyequivalentfordefaultbuttoncell, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, enableKeyEquivalentForDefaultButtonCell, arginfo_appkit_ns_nswindow_nswindow_enablekeyequivalentfordefaultbuttoncell, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, autorecalculatesKeyViewLoop, arginfo_appkit_ns_nswindow_nswindow_autorecalculateskeyviewloop, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, setAutorecalculatesKeyViewLoop, arginfo_appkit_ns_nswindow_nswindow_setautorecalculateskeyviewloop, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, recalculateKeyViewLoop, arginfo_appkit_ns_nswindow_nswindow_recalculatekeyviewloop, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, toolbar, arginfo_appkit_ns_nswindow_nswindow_toolbar, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, setToolbar, arginfo_appkit_ns_nswindow_nswindow_settoolbar, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, toggleToolbarShown, arginfo_appkit_ns_nswindow_nswindow_toggletoolbarshown, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, runToolbarCustomizationPalette, arginfo_appkit_ns_nswindow_nswindow_runtoolbarcustomizationpalette, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, allowsAutomaticWindowTabbing, arginfo_appkit_ns_nswindow_nswindow_allowsautomaticwindowtabbing, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, setAllowsAutomaticWindowTabbing, arginfo_appkit_ns_nswindow_nswindow_setallowsautomaticwindowtabbing, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, userTabbingPreference, arginfo_appkit_ns_nswindow_nswindow_usertabbingpreference, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, tabbingMode, arginfo_appkit_ns_nswindow_nswindow_tabbingmode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, setTabbingMode, arginfo_appkit_ns_nswindow_nswindow_settabbingmode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, tabbingIdentifier, arginfo_appkit_ns_nswindow_nswindow_tabbingidentifier, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, setTabbingIdentifier, arginfo_appkit_ns_nswindow_nswindow_settabbingidentifier, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, selectNextTab, arginfo_appkit_ns_nswindow_nswindow_selectnexttab, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, selectPreviousTab, arginfo_appkit_ns_nswindow_nswindow_selectprevioustab, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, moveTabToNewWindow, arginfo_appkit_ns_nswindow_nswindow_movetabtonewwindow, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, mergeAllWindows, arginfo_appkit_ns_nswindow_nswindow_mergeallwindows, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, toggleTabBar, arginfo_appkit_ns_nswindow_nswindow_toggletabbar, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, toggleTabOverview, arginfo_appkit_ns_nswindow_nswindow_toggletaboverview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, tabbedWindows, arginfo_appkit_ns_nswindow_nswindow_tabbedwindows, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, addTabbedWindowOrdered, arginfo_appkit_ns_nswindow_nswindow_addtabbedwindowordered, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, tab, arginfo_appkit_ns_nswindow_nswindow_tab, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, tabGroup, arginfo_appkit_ns_nswindow_nswindow_tabgroup, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, hasActiveWindowSharingSession, arginfo_appkit_ns_nswindow_nswindow_hasactivewindowsharingsession, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, windowTitlebarLayoutDirection, arginfo_appkit_ns_nswindow_nswindow_windowtitlebarlayoutdirection, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, nextEventMatchingMask, arginfo_appkit_ns_nswindow_nswindow_nexteventmatchingmask, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, nextEventMatchingMaskUntilDateInModeDequeue, arginfo_appkit_ns_nswindow_nswindow_nexteventmatchingmaskuntildateinmodedequeue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, discardEventsMatchingMaskBeforeEvent, arginfo_appkit_ns_nswindow_nswindow_discardeventsmatchingmaskbeforeevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, postEventAtStart, arginfo_appkit_ns_nswindow_nswindow_posteventatstart, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, sendEvent, arginfo_appkit_ns_nswindow_nswindow_sendevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, currentEvent, arginfo_appkit_ns_nswindow_nswindow_currentevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, acceptsMouseMovedEvents, arginfo_appkit_ns_nswindow_nswindow_acceptsmousemovedevents, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, setAcceptsMouseMovedEvents, arginfo_appkit_ns_nswindow_nswindow_setacceptsmousemovedevents, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, ignoresMouseEvents, arginfo_appkit_ns_nswindow_nswindow_ignoresmouseevents, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, setIgnoresMouseEvents, arginfo_appkit_ns_nswindow_nswindow_setignoresmouseevents, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, mouseLocationOutsideOfEventStream, arginfo_appkit_ns_nswindow_nswindow_mouselocationoutsideofeventstream, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, disableCursorRects, arginfo_appkit_ns_nswindow_nswindow_disablecursorrects, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, enableCursorRects, arginfo_appkit_ns_nswindow_nswindow_enablecursorrects, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, discardCursorRects, arginfo_appkit_ns_nswindow_nswindow_discardcursorrects, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, areCursorRectsEnabled, arginfo_appkit_ns_nswindow_nswindow_arecursorrectsenabled, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, invalidateCursorRectsForView, arginfo_appkit_ns_nswindow_nswindow_invalidatecursorrectsforview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, resetCursorRects, arginfo_appkit_ns_nswindow_nswindow_resetcursorrects, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, beginDraggingSessionWithItemsEventSource, arginfo_appkit_ns_nswindow_nswindow_begindraggingsessionwithitemseventsource, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, registerForDraggedTypes, arginfo_appkit_ns_nswindow_nswindow_registerfordraggedtypes, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, unregisterDraggedTypes, arginfo_appkit_ns_nswindow_nswindow_unregisterdraggedtypes, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, displayLinkWithTargetSelector, arginfo_appkit_ns_nswindow_nswindow_displaylinkwithtargetselector, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
