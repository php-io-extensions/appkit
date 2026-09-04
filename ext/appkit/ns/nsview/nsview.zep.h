
extern zend_class_entry *appkit_ns_nsview_nsview_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSView_NSView);

PHP_METHOD(AppKit_NS_NSView_NSView, initWithFrame);
PHP_METHOD(AppKit_NS_NSView_NSView, window);
PHP_METHOD(AppKit_NS_NSView_NSView, superview);
PHP_METHOD(AppKit_NS_NSView_NSView, subviews);
PHP_METHOD(AppKit_NS_NSView_NSView, setSubviews);
PHP_METHOD(AppKit_NS_NSView_NSView, isDescendantOf);
PHP_METHOD(AppKit_NS_NSView_NSView, ancestorSharedWithView);
PHP_METHOD(AppKit_NS_NSView_NSView, opaqueAncestor);
PHP_METHOD(AppKit_NS_NSView_NSView, isHidden);
PHP_METHOD(AppKit_NS_NSView_NSView, setHidden);
PHP_METHOD(AppKit_NS_NSView_NSView, isHiddenOrHasHiddenAncestor);
PHP_METHOD(AppKit_NS_NSView_NSView, getRectsBeingDrawnCount);
PHP_METHOD(AppKit_NS_NSView_NSView, needsToDrawRect);
PHP_METHOD(AppKit_NS_NSView_NSView, wantsDefaultClipping);
PHP_METHOD(AppKit_NS_NSView_NSView, viewDidHide);
PHP_METHOD(AppKit_NS_NSView_NSView, viewDidUnhide);
PHP_METHOD(AppKit_NS_NSView_NSView, addSubview);
PHP_METHOD(AppKit_NS_NSView_NSView, addSubviewPositionedRelativeTo);
PHP_METHOD(AppKit_NS_NSView_NSView, viewWillMoveToWindow);
PHP_METHOD(AppKit_NS_NSView_NSView, viewDidMoveToWindow);
PHP_METHOD(AppKit_NS_NSView_NSView, viewWillMoveToSuperview);
PHP_METHOD(AppKit_NS_NSView_NSView, viewDidMoveToSuperview);
PHP_METHOD(AppKit_NS_NSView_NSView, didAddSubview);
PHP_METHOD(AppKit_NS_NSView_NSView, willRemoveSubview);
PHP_METHOD(AppKit_NS_NSView_NSView, removeFromSuperview);
PHP_METHOD(AppKit_NS_NSView_NSView, replaceSubviewWith);
PHP_METHOD(AppKit_NS_NSView_NSView, removeFromSuperviewWithoutNeedingDisplay);
PHP_METHOD(AppKit_NS_NSView_NSView, viewDidChangeBackingProperties);
PHP_METHOD(AppKit_NS_NSView_NSView, postsFrameChangedNotifications);
PHP_METHOD(AppKit_NS_NSView_NSView, setPostsFrameChangedNotifications);
PHP_METHOD(AppKit_NS_NSView_NSView, resizeSubviewsWithOldSize);
PHP_METHOD(AppKit_NS_NSView_NSView, resizeWithOldSuperviewSize);
PHP_METHOD(AppKit_NS_NSView_NSView, autoresizesSubviews);
PHP_METHOD(AppKit_NS_NSView_NSView, setAutoresizesSubviews);
PHP_METHOD(AppKit_NS_NSView_NSView, autoresizingMask);
PHP_METHOD(AppKit_NS_NSView_NSView, setAutoresizingMask);
PHP_METHOD(AppKit_NS_NSView_NSView, setFrameOrigin);
PHP_METHOD(AppKit_NS_NSView_NSView, setFrameSize);
PHP_METHOD(AppKit_NS_NSView_NSView, frame);
PHP_METHOD(AppKit_NS_NSView_NSView, setFrame);
PHP_METHOD(AppKit_NS_NSView_NSView, frameRotation);
PHP_METHOD(AppKit_NS_NSView_NSView, setFrameRotation);
PHP_METHOD(AppKit_NS_NSView_NSView, frameCenterRotation);
PHP_METHOD(AppKit_NS_NSView_NSView, setFrameCenterRotation);
PHP_METHOD(AppKit_NS_NSView_NSView, setBoundsOrigin);
PHP_METHOD(AppKit_NS_NSView_NSView, setBoundsSize);
PHP_METHOD(AppKit_NS_NSView_NSView, boundsRotation);
PHP_METHOD(AppKit_NS_NSView_NSView, setBoundsRotation);
PHP_METHOD(AppKit_NS_NSView_NSView, translateOriginToPoint);
PHP_METHOD(AppKit_NS_NSView_NSView, scaleUnitSquareToSize);
PHP_METHOD(AppKit_NS_NSView_NSView, rotateByAngle);
PHP_METHOD(AppKit_NS_NSView_NSView, bounds);
PHP_METHOD(AppKit_NS_NSView_NSView, setBounds);
PHP_METHOD(AppKit_NS_NSView_NSView, isFlipped);
PHP_METHOD(AppKit_NS_NSView_NSView, isRotatedFromBase);
PHP_METHOD(AppKit_NS_NSView_NSView, isRotatedOrScaledFromBase);
PHP_METHOD(AppKit_NS_NSView_NSView, isOpaque);
PHP_METHOD(AppKit_NS_NSView_NSView, convertPointFromView);
PHP_METHOD(AppKit_NS_NSView_NSView, convertPointToView);
PHP_METHOD(AppKit_NS_NSView_NSView, convertSizeFromView);
PHP_METHOD(AppKit_NS_NSView_NSView, convertSizeToView);
PHP_METHOD(AppKit_NS_NSView_NSView, convertRectFromView);
PHP_METHOD(AppKit_NS_NSView_NSView, convertRectToView);
PHP_METHOD(AppKit_NS_NSView_NSView, backingAlignedRectOptions);
PHP_METHOD(AppKit_NS_NSView_NSView, centerScanRect);
PHP_METHOD(AppKit_NS_NSView_NSView, convertPointToBacking);
PHP_METHOD(AppKit_NS_NSView_NSView, convertPointFromBacking);
PHP_METHOD(AppKit_NS_NSView_NSView, convertSizeToBacking);
PHP_METHOD(AppKit_NS_NSView_NSView, convertSizeFromBacking);
PHP_METHOD(AppKit_NS_NSView_NSView, convertRectToBacking);
PHP_METHOD(AppKit_NS_NSView_NSView, convertRectFromBacking);
PHP_METHOD(AppKit_NS_NSView_NSView, convertPointToLayer);
PHP_METHOD(AppKit_NS_NSView_NSView, convertPointFromLayer);
PHP_METHOD(AppKit_NS_NSView_NSView, convertSizeToLayer);
PHP_METHOD(AppKit_NS_NSView_NSView, convertSizeFromLayer);
PHP_METHOD(AppKit_NS_NSView_NSView, convertRectToLayer);
PHP_METHOD(AppKit_NS_NSView_NSView, convertRectFromLayer);
PHP_METHOD(AppKit_NS_NSView_NSView, canDrawConcurrently);
PHP_METHOD(AppKit_NS_NSView_NSView, setCanDrawConcurrently);
PHP_METHOD(AppKit_NS_NSView_NSView, setNeedsDisplayInRect);
PHP_METHOD(AppKit_NS_NSView_NSView, needsDisplay);
PHP_METHOD(AppKit_NS_NSView_NSView, setNeedsDisplay);
PHP_METHOD(AppKit_NS_NSView_NSView, focusView);
PHP_METHOD(AppKit_NS_NSView_NSView, visibleRect);
PHP_METHOD(AppKit_NS_NSView_NSView, display);
PHP_METHOD(AppKit_NS_NSView_NSView, displayIfNeeded);
PHP_METHOD(AppKit_NS_NSView_NSView, displayIfNeededIgnoringOpacity);
PHP_METHOD(AppKit_NS_NSView_NSView, displayRect);
PHP_METHOD(AppKit_NS_NSView_NSView, displayIfNeededInRect);
PHP_METHOD(AppKit_NS_NSView_NSView, displayRectIgnoringOpacity);
PHP_METHOD(AppKit_NS_NSView_NSView, displayIfNeededInRectIgnoringOpacity);
PHP_METHOD(AppKit_NS_NSView_NSView, drawRect);
PHP_METHOD(AppKit_NS_NSView_NSView, displayRectIgnoringOpacityInContext);
PHP_METHOD(AppKit_NS_NSView_NSView, bitmapImageRepForCachingDisplayInRect);
PHP_METHOD(AppKit_NS_NSView_NSView, cacheDisplayInRectToBitmapImageRep);
PHP_METHOD(AppKit_NS_NSView_NSView, viewWillDraw);
PHP_METHOD(AppKit_NS_NSView_NSView, scrollPoint);
PHP_METHOD(AppKit_NS_NSView_NSView, scrollRectToVisible);
PHP_METHOD(AppKit_NS_NSView_NSView, autoscroll);
PHP_METHOD(AppKit_NS_NSView_NSView, adjustScroll);
PHP_METHOD(AppKit_NS_NSView_NSView, translateRectsNeedingDisplayInRectBy);
PHP_METHOD(AppKit_NS_NSView_NSView, hitTest);
PHP_METHOD(AppKit_NS_NSView_NSView, mouseInRect);
PHP_METHOD(AppKit_NS_NSView_NSView, viewWithTag);
PHP_METHOD(AppKit_NS_NSView_NSView, tag);
PHP_METHOD(AppKit_NS_NSView_NSView, performKeyEquivalent);
PHP_METHOD(AppKit_NS_NSView_NSView, acceptsFirstMouse);
PHP_METHOD(AppKit_NS_NSView_NSView, shouldDelayWindowOrderingForEvent);
PHP_METHOD(AppKit_NS_NSView_NSView, needsPanelToBecomeKey);
PHP_METHOD(AppKit_NS_NSView_NSView, mouseDownCanMoveWindow);
PHP_METHOD(AppKit_NS_NSView_NSView, wantsRestingTouches);
PHP_METHOD(AppKit_NS_NSView_NSView, setWantsRestingTouches);
PHP_METHOD(AppKit_NS_NSView_NSView, makeBackingLayer);
PHP_METHOD(AppKit_NS_NSView_NSView, layerContentsRedrawPolicy);
PHP_METHOD(AppKit_NS_NSView_NSView, setLayerContentsRedrawPolicy);
PHP_METHOD(AppKit_NS_NSView_NSView, layerContentsPlacement);
PHP_METHOD(AppKit_NS_NSView_NSView, setLayerContentsPlacement);
PHP_METHOD(AppKit_NS_NSView_NSView, wantsLayer);
PHP_METHOD(AppKit_NS_NSView_NSView, setWantsLayer);
PHP_METHOD(AppKit_NS_NSView_NSView, layer);
PHP_METHOD(AppKit_NS_NSView_NSView, setLayer);
PHP_METHOD(AppKit_NS_NSView_NSView, wantsUpdateLayer);
PHP_METHOD(AppKit_NS_NSView_NSView, updateLayer);
PHP_METHOD(AppKit_NS_NSView_NSView, canDrawSubviewsIntoLayer);
PHP_METHOD(AppKit_NS_NSView_NSView, setCanDrawSubviewsIntoLayer);
PHP_METHOD(AppKit_NS_NSView_NSView, layoutSubtreeIfNeeded);
PHP_METHOD(AppKit_NS_NSView_NSView, layout);
PHP_METHOD(AppKit_NS_NSView_NSView, needsLayout);
PHP_METHOD(AppKit_NS_NSView_NSView, setNeedsLayout);
PHP_METHOD(AppKit_NS_NSView_NSView, alphaValue);
PHP_METHOD(AppKit_NS_NSView_NSView, setAlphaValue);
PHP_METHOD(AppKit_NS_NSView_NSView, layerUsesCoreImageFilters);
PHP_METHOD(AppKit_NS_NSView_NSView, setLayerUsesCoreImageFilters);
PHP_METHOD(AppKit_NS_NSView_NSView, backgroundFilters);
PHP_METHOD(AppKit_NS_NSView_NSView, setBackgroundFilters);
PHP_METHOD(AppKit_NS_NSView_NSView, compositingFilter);
PHP_METHOD(AppKit_NS_NSView_NSView, setCompositingFilter);
PHP_METHOD(AppKit_NS_NSView_NSView, contentFilters);
PHP_METHOD(AppKit_NS_NSView_NSView, setContentFilters);
PHP_METHOD(AppKit_NS_NSView_NSView, shadow);
PHP_METHOD(AppKit_NS_NSView_NSView, setShadow);
PHP_METHOD(AppKit_NS_NSView_NSView, clipsToBounds);
PHP_METHOD(AppKit_NS_NSView_NSView, setClipsToBounds);
PHP_METHOD(AppKit_NS_NSView_NSView, postsBoundsChangedNotifications);
PHP_METHOD(AppKit_NS_NSView_NSView, setPostsBoundsChangedNotifications);
PHP_METHOD(AppKit_NS_NSView_NSView, enclosingScrollView);
PHP_METHOD(AppKit_NS_NSView_NSView, menuForEvent);
PHP_METHOD(AppKit_NS_NSView_NSView, defaultMenu);
PHP_METHOD(AppKit_NS_NSView_NSView, willOpenMenuWithEvent);
PHP_METHOD(AppKit_NS_NSView_NSView, didCloseMenuWithEvent);
PHP_METHOD(AppKit_NS_NSView_NSView, toolTip);
PHP_METHOD(AppKit_NS_NSView_NSView, setToolTip);
PHP_METHOD(AppKit_NS_NSView_NSView, addToolTipRectOwnerUserData);
PHP_METHOD(AppKit_NS_NSView_NSView, removeToolTip);
PHP_METHOD(AppKit_NS_NSView_NSView, removeAllToolTips);
PHP_METHOD(AppKit_NS_NSView_NSView, viewWillStartLiveResize);
PHP_METHOD(AppKit_NS_NSView_NSView, viewDidEndLiveResize);
PHP_METHOD(AppKit_NS_NSView_NSView, inLiveResize);
PHP_METHOD(AppKit_NS_NSView_NSView, preservesContentDuringLiveResize);
PHP_METHOD(AppKit_NS_NSView_NSView, rectPreservedDuringLiveResize);
PHP_METHOD(AppKit_NS_NSView_NSView, getRectsExposedDuringLiveResizeCount);
PHP_METHOD(AppKit_NS_NSView_NSView, inputContext);
PHP_METHOD(AppKit_NS_NSView_NSView, rectForSmartMagnificationAtPointInRect);
PHP_METHOD(AppKit_NS_NSView_NSView, userInterfaceLayoutDirection);
PHP_METHOD(AppKit_NS_NSView_NSView, setUserInterfaceLayoutDirection);
PHP_METHOD(AppKit_NS_NSView_NSView, prepareForReuse);
PHP_METHOD(AppKit_NS_NSView_NSView, isCompatibleWithResponsiveScrolling);
PHP_METHOD(AppKit_NS_NSView_NSView, prepareContentInRect);
PHP_METHOD(AppKit_NS_NSView_NSView, preparedContentRect);
PHP_METHOD(AppKit_NS_NSView_NSView, setPreparedContentRect);
PHP_METHOD(AppKit_NS_NSView_NSView, allowsVibrancy);
PHP_METHOD(AppKit_NS_NSView_NSView, viewDidChangeEffectiveAppearance);
PHP_METHOD(AppKit_NS_NSView_NSView, nextKeyView);
PHP_METHOD(AppKit_NS_NSView_NSView, setNextKeyView);
PHP_METHOD(AppKit_NS_NSView_NSView, previousKeyView);
PHP_METHOD(AppKit_NS_NSView_NSView, nextValidKeyView);
PHP_METHOD(AppKit_NS_NSView_NSView, previousValidKeyView);
PHP_METHOD(AppKit_NS_NSView_NSView, canBecomeKeyView);
PHP_METHOD(AppKit_NS_NSView_NSView, setKeyboardFocusRingNeedsDisplayInRect);
PHP_METHOD(AppKit_NS_NSView_NSView, focusRingType);
PHP_METHOD(AppKit_NS_NSView_NSView, setFocusRingType);
PHP_METHOD(AppKit_NS_NSView_NSView, defaultFocusRingType);
PHP_METHOD(AppKit_NS_NSView_NSView, drawFocusRingMask);
PHP_METHOD(AppKit_NS_NSView_NSView, focusRingMaskBounds);
PHP_METHOD(AppKit_NS_NSView_NSView, noteFocusRingMaskChanged);
PHP_METHOD(AppKit_NS_NSView_NSView, writeEPSInsideRectToPasteboard);
PHP_METHOD(AppKit_NS_NSView_NSView, writePDFInsideRectToPasteboard);
PHP_METHOD(AppKit_NS_NSView_NSView, print_);
PHP_METHOD(AppKit_NS_NSView_NSView, knowsPageRange);
PHP_METHOD(AppKit_NS_NSView_NSView, heightAdjustLimit);
PHP_METHOD(AppKit_NS_NSView_NSView, widthAdjustLimit);
PHP_METHOD(AppKit_NS_NSView_NSView, adjustPageWidthNewLeftRightLimit);
PHP_METHOD(AppKit_NS_NSView_NSView, adjustPageHeightNewTopBottomLimit);
PHP_METHOD(AppKit_NS_NSView_NSView, rectForPage);
PHP_METHOD(AppKit_NS_NSView_NSView, locationOfPrintRect);
PHP_METHOD(AppKit_NS_NSView_NSView, drawPageBorderWithSize);
PHP_METHOD(AppKit_NS_NSView_NSView, printJobTitle);
PHP_METHOD(AppKit_NS_NSView_NSView, beginDocument);
PHP_METHOD(AppKit_NS_NSView_NSView, endDocument);
PHP_METHOD(AppKit_NS_NSView_NSView, beginPageInRectAtPlacement);
PHP_METHOD(AppKit_NS_NSView_NSView, endPage);
PHP_METHOD(AppKit_NS_NSView_NSView, beginDraggingSessionWithItemsEventSource);
PHP_METHOD(AppKit_NS_NSView_NSView, registeredDraggedTypes);
PHP_METHOD(AppKit_NS_NSView_NSView, registerForDraggedTypes);
PHP_METHOD(AppKit_NS_NSView_NSView, unregisterDraggedTypes);
PHP_METHOD(AppKit_NS_NSView_NSView, enterFullScreenModeWithOptions);
PHP_METHOD(AppKit_NS_NSView_NSView, exitFullScreenModeWithOptions);
PHP_METHOD(AppKit_NS_NSView_NSView, isInFullScreenMode);
PHP_METHOD(AppKit_NS_NSView_NSView, isDrawingFindIndicator);
PHP_METHOD(AppKit_NS_NSView_NSView, gestureRecognizers);
PHP_METHOD(AppKit_NS_NSView_NSView, setGestureRecognizers);
PHP_METHOD(AppKit_NS_NSView_NSView, addGestureRecognizer);
PHP_METHOD(AppKit_NS_NSView_NSView, removeGestureRecognizer);
PHP_METHOD(AppKit_NS_NSView_NSView, allowedTouchTypes);
PHP_METHOD(AppKit_NS_NSView_NSView, setAllowedTouchTypes);
PHP_METHOD(AppKit_NS_NSView_NSView, safeAreaInsets);
PHP_METHOD(AppKit_NS_NSView_NSView, additionalSafeAreaInsets);
PHP_METHOD(AppKit_NS_NSView_NSView, setAdditionalSafeAreaInsets);
PHP_METHOD(AppKit_NS_NSView_NSView, safeAreaLayoutGuide);
PHP_METHOD(AppKit_NS_NSView_NSView, safeAreaRect);
PHP_METHOD(AppKit_NS_NSView_NSView, layoutMarginsGuide);
PHP_METHOD(AppKit_NS_NSView_NSView, addTrackingArea);
PHP_METHOD(AppKit_NS_NSView_NSView, removeTrackingArea);
PHP_METHOD(AppKit_NS_NSView_NSView, trackingAreas);
PHP_METHOD(AppKit_NS_NSView_NSView, updateTrackingAreas);
PHP_METHOD(AppKit_NS_NSView_NSView, addCursorRectCursor);
PHP_METHOD(AppKit_NS_NSView_NSView, removeCursorRectCursor);
PHP_METHOD(AppKit_NS_NSView_NSView, discardCursorRects);
PHP_METHOD(AppKit_NS_NSView_NSView, resetCursorRects);
PHP_METHOD(AppKit_NS_NSView_NSView, addTrackingRectOwnerUserDataAssumeInside);
PHP_METHOD(AppKit_NS_NSView_NSView, removeTrackingRect);
PHP_METHOD(AppKit_NS_NSView_NSView, displayLinkWithTargetSelector);
PHP_METHOD(AppKit_NS_NSView_NSView, writingToolsCoordinator);
PHP_METHOD(AppKit_NS_NSView_NSView, setWritingToolsCoordinator);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_initwithframe, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_window, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_superview, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_subviews, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_setsubviews, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, subviews, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_isdescendantof, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, view, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_ancestorsharedwithview, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, view, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_opaqueancestor, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_ishidden, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_sethidden, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, hidden, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_ishiddenorhashiddenancestor, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_getrectsbeingdrawncount, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_needstodrawrect, 0, 5, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_wantsdefaultclipping, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_viewdidhide, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_viewdidunhide, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_addsubview, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, view, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_addsubviewpositionedrelativeto, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, view, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, place, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, otherView, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_viewwillmovetowindow, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, newWindow, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_viewdidmovetowindow, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_viewwillmovetosuperview, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, newSuperview, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_viewdidmovetosuperview, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_didaddsubview, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, subview, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_willremovesubview, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, subview, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_removefromsuperview, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_replacesubviewwith, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, oldView, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, newView, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_removefromsuperviewwithoutneedingdisplay, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_viewdidchangebackingproperties, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_postsframechangednotifications, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_setpostsframechangednotifications, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, postsFrameChangedNotifications, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_resizesubviewswitholdsize, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_resizewitholdsuperviewsize, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_autoresizessubviews, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_setautoresizessubviews, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, autoresizesSubviews, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_autoresizingmask, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_setautoresizingmask, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, autoresizingMask, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_setframeorigin, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_setframesize, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_frame, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_setframe, 0, 5, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_framerotation, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_setframerotation, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, frameRotation, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_framecenterrotation, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_setframecenterrotation, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, frameCenterRotation, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_setboundsorigin, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_setboundssize, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_boundsrotation, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_setboundsrotation, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, boundsRotation, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_translateorigintopoint, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_scaleunitsquaretosize, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_rotatebyangle, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, angle, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_bounds, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_setbounds, 0, 5, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_isflipped, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_isrotatedfrombase, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_isrotatedorscaledfrombase, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_isopaque, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_convertpointfromview, 0, 4, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, view, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_convertpointtoview, 0, 4, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, view, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_convertsizefromview, 0, 4, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, view, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_convertsizetoview, 0, 4, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, view, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_convertrectfromview, 0, 6, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, view, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_convertrecttoview, 0, 6, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, view, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_backingalignedrectoptions, 0, 6, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, options, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_centerscanrect, 0, 5, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_convertpointtobacking, 0, 3, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_convertpointfrombacking, 0, 3, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_convertsizetobacking, 0, 3, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_convertsizefrombacking, 0, 3, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_convertrecttobacking, 0, 5, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_convertrectfrombacking, 0, 5, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_convertpointtolayer, 0, 3, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_convertpointfromlayer, 0, 3, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_convertsizetolayer, 0, 3, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_convertsizefromlayer, 0, 3, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_convertrecttolayer, 0, 5, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_convertrectfromlayer, 0, 5, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_candrawconcurrently, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_setcandrawconcurrently, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, canDrawConcurrently, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_setneedsdisplayinrect, 0, 5, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_needsdisplay, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_setneedsdisplay, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, needsDisplay, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_focusview, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_visiblerect, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_display, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_displayifneeded, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_displayifneededignoringopacity, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_displayrect, 0, 5, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_displayifneededinrect, 0, 5, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_displayrectignoringopacity, 0, 5, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_displayifneededinrectignoringopacity, 0, 5, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_drawrect, 0, 5, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_displayrectignoringopacityincontext, 0, 6, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, context, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_bitmapimagerepforcachingdisplayinrect, 0, 5, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_cachedisplayinrecttobitmapimagerep, 0, 6, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, bitmapImageRep, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_viewwilldraw, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_scrollpoint, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_scrollrecttovisible, 0, 5, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_autoscroll, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_adjustscroll, 0, 5, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_translaterectsneedingdisplayinrectby, 0, 7, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, clipRectX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, clipRectY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, clipRectWidth, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, clipRectHeight, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, deltaWidth, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, deltaHeight, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_hittest, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_mouseinrect, 0, 7, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pointX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, pointY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rectX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rectY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rectWidth, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rectHeight, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_viewwithtag, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, tag, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_tag, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_performkeyequivalent, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_acceptsfirstmouse, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_shoulddelaywindoworderingforevent, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_needspaneltobecomekey, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_mousedowncanmovewindow, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_wantsrestingtouches, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_setwantsrestingtouches, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, wantsRestingTouches, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_makebackinglayer, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_layercontentsredrawpolicy, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_setlayercontentsredrawpolicy, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, layerContentsRedrawPolicy, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_layercontentsplacement, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_setlayercontentsplacement, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, layerContentsPlacement, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_wantslayer, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_setwantslayer, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, wantsLayer, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_layer, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_setlayer, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, layer, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_wantsupdatelayer, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_updatelayer, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_candrawsubviewsintolayer, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_setcandrawsubviewsintolayer, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, canDrawSubviewsIntoLayer, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_layoutsubtreeifneeded, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_layout, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_needslayout, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_setneedslayout, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, needsLayout, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_alphavalue, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_setalphavalue, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, alphaValue, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_layerusescoreimagefilters, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_setlayerusescoreimagefilters, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, layerUsesCoreImageFilters, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_backgroundfilters, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_setbackgroundfilters, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, backgroundFilters, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_compositingfilter, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_setcompositingfilter, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, compositingFilter, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_contentfilters, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_setcontentfilters, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, contentFilters, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_shadow, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_setshadow, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, shadow, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_clipstobounds, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_setclipstobounds, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, clipsToBounds, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_postsboundschangednotifications, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_setpostsboundschangednotifications, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, postsBoundsChangedNotifications, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_enclosingscrollview, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_menuforevent, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_defaultmenu, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_willopenmenuwithevent, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, menu, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_didclosemenuwithevent, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, menu, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_appkit_ns_nsview_nsview_tooltip, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_settooltip, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, toolTip)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_addtooltiprectowneruserdata, 0, 7, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, owner, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, data, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_removetooltip, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, tag, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_removealltooltips, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_viewwillstartliveresize, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_viewdidendliveresize, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_inliveresize, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_preservescontentduringliveresize, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_rectpreservedduringliveresize, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_getrectsexposedduringliveresizecount, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_inputcontext, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_rectforsmartmagnificationatpointinrect, 0, 7, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, locationX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, locationY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, visibleRectX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, visibleRectY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, visibleRectWidth, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, visibleRectHeight, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_userinterfacelayoutdirection, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_setuserinterfacelayoutdirection, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, userInterfaceLayoutDirection, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_prepareforreuse, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_iscompatiblewithresponsivescrolling, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_preparecontentinrect, 0, 5, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_preparedcontentrect, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_setpreparedcontentrect, 0, 5, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_allowsvibrancy, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_viewdidchangeeffectiveappearance, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_nextkeyview, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_setnextkeyview, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, nextKeyView, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_previouskeyview, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_nextvalidkeyview, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_previousvalidkeyview, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_canbecomekeyview, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_setkeyboardfocusringneedsdisplayinrect, 0, 5, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_focusringtype, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_setfocusringtype, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, focusRingType, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_defaultfocusringtype, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_drawfocusringmask, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_focusringmaskbounds, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_notefocusringmaskchanged, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_writeepsinsiderecttopasteboard, 0, 6, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, pasteboard, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_writepdfinsiderecttopasteboard, 0, 6, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, pasteboard, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_print_, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sender, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_knowspagerange, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_heightadjustlimit, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_widthadjustlimit, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_adjustpagewidthnewleftrightlimit, 0, 4, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, oldLeft, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, oldRight, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rightLimit, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_adjustpageheightnewtopbottomlimit, 0, 4, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, oldTop, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, oldBottom, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, bottomLimit, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_rectforpage, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, page, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_locationofprintrect, 0, 5, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_drawpageborderwithsize, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_printjobtitle, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_begindocument, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_enddocument, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_beginpageinrectatplacement, 0, 7, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rectX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rectY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rectWidth, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rectHeight, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, locationX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, locationY, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_endpage, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_begindraggingsessionwithitemseventsource, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, items, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, source, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_registereddraggedtypes, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_registerfordraggedtypes, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, newTypes, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_unregisterdraggedtypes, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_enterfullscreenmodewithoptions, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, screen, IS_LONG, 0)
	ZEND_ARG_INFO(0, options)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_exitfullscreenmodewithoptions, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, options)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_isinfullscreenmode, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_isdrawingfindindicator, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_gesturerecognizers, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_setgesturerecognizers, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, gestureRecognizers, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_addgesturerecognizer, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, gestureRecognizer, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_removegesturerecognizer, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, gestureRecognizer, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_allowedtouchtypes, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_setallowedtouchtypes, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, allowedTouchTypes, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_safeareainsets, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_additionalsafeareainsets, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_setadditionalsafeareainsets, 0, 5, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, top, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, left, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, bottom, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, right, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_safearealayoutguide, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_safearearect, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_layoutmarginsguide, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_addtrackingarea, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, trackingArea, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_removetrackingarea, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, trackingArea, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_trackingareas, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_updatetrackingareas, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_addcursorrectcursor, 0, 6, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, object_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_removecursorrectcursor, 0, 6, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, object_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_discardcursorrects, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_resetcursorrects, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_addtrackingrectowneruserdataassumeinside, 0, 8, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, owner, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, data, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, flag, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_removetrackingrect, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, tag, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_displaylinkwithtargetselector, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, target, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selector, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_writingtoolscoordinator, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsview_nsview_setwritingtoolscoordinator, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, writingToolsCoordinator, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nsview_nsview_method_entry) {
	PHP_ME(AppKit_NS_NSView_NSView, initWithFrame, arginfo_appkit_ns_nsview_nsview_initwithframe, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, window, arginfo_appkit_ns_nsview_nsview_window, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, superview, arginfo_appkit_ns_nsview_nsview_superview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, subviews, arginfo_appkit_ns_nsview_nsview_subviews, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, setSubviews, arginfo_appkit_ns_nsview_nsview_setsubviews, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, isDescendantOf, arginfo_appkit_ns_nsview_nsview_isdescendantof, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, ancestorSharedWithView, arginfo_appkit_ns_nsview_nsview_ancestorsharedwithview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, opaqueAncestor, arginfo_appkit_ns_nsview_nsview_opaqueancestor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, isHidden, arginfo_appkit_ns_nsview_nsview_ishidden, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, setHidden, arginfo_appkit_ns_nsview_nsview_sethidden, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, isHiddenOrHasHiddenAncestor, arginfo_appkit_ns_nsview_nsview_ishiddenorhashiddenancestor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, getRectsBeingDrawnCount, arginfo_appkit_ns_nsview_nsview_getrectsbeingdrawncount, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, needsToDrawRect, arginfo_appkit_ns_nsview_nsview_needstodrawrect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, wantsDefaultClipping, arginfo_appkit_ns_nsview_nsview_wantsdefaultclipping, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, viewDidHide, arginfo_appkit_ns_nsview_nsview_viewdidhide, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, viewDidUnhide, arginfo_appkit_ns_nsview_nsview_viewdidunhide, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, addSubview, arginfo_appkit_ns_nsview_nsview_addsubview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, addSubviewPositionedRelativeTo, arginfo_appkit_ns_nsview_nsview_addsubviewpositionedrelativeto, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, viewWillMoveToWindow, arginfo_appkit_ns_nsview_nsview_viewwillmovetowindow, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, viewDidMoveToWindow, arginfo_appkit_ns_nsview_nsview_viewdidmovetowindow, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, viewWillMoveToSuperview, arginfo_appkit_ns_nsview_nsview_viewwillmovetosuperview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, viewDidMoveToSuperview, arginfo_appkit_ns_nsview_nsview_viewdidmovetosuperview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, didAddSubview, arginfo_appkit_ns_nsview_nsview_didaddsubview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, willRemoveSubview, arginfo_appkit_ns_nsview_nsview_willremovesubview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, removeFromSuperview, arginfo_appkit_ns_nsview_nsview_removefromsuperview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, replaceSubviewWith, arginfo_appkit_ns_nsview_nsview_replacesubviewwith, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, removeFromSuperviewWithoutNeedingDisplay, arginfo_appkit_ns_nsview_nsview_removefromsuperviewwithoutneedingdisplay, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, viewDidChangeBackingProperties, arginfo_appkit_ns_nsview_nsview_viewdidchangebackingproperties, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, postsFrameChangedNotifications, arginfo_appkit_ns_nsview_nsview_postsframechangednotifications, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, setPostsFrameChangedNotifications, arginfo_appkit_ns_nsview_nsview_setpostsframechangednotifications, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, resizeSubviewsWithOldSize, arginfo_appkit_ns_nsview_nsview_resizesubviewswitholdsize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, resizeWithOldSuperviewSize, arginfo_appkit_ns_nsview_nsview_resizewitholdsuperviewsize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, autoresizesSubviews, arginfo_appkit_ns_nsview_nsview_autoresizessubviews, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, setAutoresizesSubviews, arginfo_appkit_ns_nsview_nsview_setautoresizessubviews, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, autoresizingMask, arginfo_appkit_ns_nsview_nsview_autoresizingmask, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, setAutoresizingMask, arginfo_appkit_ns_nsview_nsview_setautoresizingmask, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, setFrameOrigin, arginfo_appkit_ns_nsview_nsview_setframeorigin, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, setFrameSize, arginfo_appkit_ns_nsview_nsview_setframesize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, frame, arginfo_appkit_ns_nsview_nsview_frame, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, setFrame, arginfo_appkit_ns_nsview_nsview_setframe, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, frameRotation, arginfo_appkit_ns_nsview_nsview_framerotation, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, setFrameRotation, arginfo_appkit_ns_nsview_nsview_setframerotation, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, frameCenterRotation, arginfo_appkit_ns_nsview_nsview_framecenterrotation, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, setFrameCenterRotation, arginfo_appkit_ns_nsview_nsview_setframecenterrotation, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, setBoundsOrigin, arginfo_appkit_ns_nsview_nsview_setboundsorigin, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, setBoundsSize, arginfo_appkit_ns_nsview_nsview_setboundssize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, boundsRotation, arginfo_appkit_ns_nsview_nsview_boundsrotation, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, setBoundsRotation, arginfo_appkit_ns_nsview_nsview_setboundsrotation, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, translateOriginToPoint, arginfo_appkit_ns_nsview_nsview_translateorigintopoint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, scaleUnitSquareToSize, arginfo_appkit_ns_nsview_nsview_scaleunitsquaretosize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, rotateByAngle, arginfo_appkit_ns_nsview_nsview_rotatebyangle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, bounds, arginfo_appkit_ns_nsview_nsview_bounds, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, setBounds, arginfo_appkit_ns_nsview_nsview_setbounds, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, isFlipped, arginfo_appkit_ns_nsview_nsview_isflipped, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, isRotatedFromBase, arginfo_appkit_ns_nsview_nsview_isrotatedfrombase, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, isRotatedOrScaledFromBase, arginfo_appkit_ns_nsview_nsview_isrotatedorscaledfrombase, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, isOpaque, arginfo_appkit_ns_nsview_nsview_isopaque, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, convertPointFromView, arginfo_appkit_ns_nsview_nsview_convertpointfromview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, convertPointToView, arginfo_appkit_ns_nsview_nsview_convertpointtoview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, convertSizeFromView, arginfo_appkit_ns_nsview_nsview_convertsizefromview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, convertSizeToView, arginfo_appkit_ns_nsview_nsview_convertsizetoview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, convertRectFromView, arginfo_appkit_ns_nsview_nsview_convertrectfromview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, convertRectToView, arginfo_appkit_ns_nsview_nsview_convertrecttoview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, backingAlignedRectOptions, arginfo_appkit_ns_nsview_nsview_backingalignedrectoptions, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, centerScanRect, arginfo_appkit_ns_nsview_nsview_centerscanrect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, convertPointToBacking, arginfo_appkit_ns_nsview_nsview_convertpointtobacking, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, convertPointFromBacking, arginfo_appkit_ns_nsview_nsview_convertpointfrombacking, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, convertSizeToBacking, arginfo_appkit_ns_nsview_nsview_convertsizetobacking, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, convertSizeFromBacking, arginfo_appkit_ns_nsview_nsview_convertsizefrombacking, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, convertRectToBacking, arginfo_appkit_ns_nsview_nsview_convertrecttobacking, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, convertRectFromBacking, arginfo_appkit_ns_nsview_nsview_convertrectfrombacking, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, convertPointToLayer, arginfo_appkit_ns_nsview_nsview_convertpointtolayer, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, convertPointFromLayer, arginfo_appkit_ns_nsview_nsview_convertpointfromlayer, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, convertSizeToLayer, arginfo_appkit_ns_nsview_nsview_convertsizetolayer, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, convertSizeFromLayer, arginfo_appkit_ns_nsview_nsview_convertsizefromlayer, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, convertRectToLayer, arginfo_appkit_ns_nsview_nsview_convertrecttolayer, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, convertRectFromLayer, arginfo_appkit_ns_nsview_nsview_convertrectfromlayer, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, canDrawConcurrently, arginfo_appkit_ns_nsview_nsview_candrawconcurrently, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, setCanDrawConcurrently, arginfo_appkit_ns_nsview_nsview_setcandrawconcurrently, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, setNeedsDisplayInRect, arginfo_appkit_ns_nsview_nsview_setneedsdisplayinrect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, needsDisplay, arginfo_appkit_ns_nsview_nsview_needsdisplay, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, setNeedsDisplay, arginfo_appkit_ns_nsview_nsview_setneedsdisplay, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, focusView, arginfo_appkit_ns_nsview_nsview_focusview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, visibleRect, arginfo_appkit_ns_nsview_nsview_visiblerect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, display, arginfo_appkit_ns_nsview_nsview_display, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, displayIfNeeded, arginfo_appkit_ns_nsview_nsview_displayifneeded, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, displayIfNeededIgnoringOpacity, arginfo_appkit_ns_nsview_nsview_displayifneededignoringopacity, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, displayRect, arginfo_appkit_ns_nsview_nsview_displayrect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, displayIfNeededInRect, arginfo_appkit_ns_nsview_nsview_displayifneededinrect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, displayRectIgnoringOpacity, arginfo_appkit_ns_nsview_nsview_displayrectignoringopacity, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, displayIfNeededInRectIgnoringOpacity, arginfo_appkit_ns_nsview_nsview_displayifneededinrectignoringopacity, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, drawRect, arginfo_appkit_ns_nsview_nsview_drawrect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, displayRectIgnoringOpacityInContext, arginfo_appkit_ns_nsview_nsview_displayrectignoringopacityincontext, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, bitmapImageRepForCachingDisplayInRect, arginfo_appkit_ns_nsview_nsview_bitmapimagerepforcachingdisplayinrect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, cacheDisplayInRectToBitmapImageRep, arginfo_appkit_ns_nsview_nsview_cachedisplayinrecttobitmapimagerep, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, viewWillDraw, arginfo_appkit_ns_nsview_nsview_viewwilldraw, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, scrollPoint, arginfo_appkit_ns_nsview_nsview_scrollpoint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, scrollRectToVisible, arginfo_appkit_ns_nsview_nsview_scrollrecttovisible, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, autoscroll, arginfo_appkit_ns_nsview_nsview_autoscroll, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, adjustScroll, arginfo_appkit_ns_nsview_nsview_adjustscroll, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, translateRectsNeedingDisplayInRectBy, arginfo_appkit_ns_nsview_nsview_translaterectsneedingdisplayinrectby, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, hitTest, arginfo_appkit_ns_nsview_nsview_hittest, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, mouseInRect, arginfo_appkit_ns_nsview_nsview_mouseinrect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, viewWithTag, arginfo_appkit_ns_nsview_nsview_viewwithtag, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, tag, arginfo_appkit_ns_nsview_nsview_tag, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, performKeyEquivalent, arginfo_appkit_ns_nsview_nsview_performkeyequivalent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, acceptsFirstMouse, arginfo_appkit_ns_nsview_nsview_acceptsfirstmouse, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, shouldDelayWindowOrderingForEvent, arginfo_appkit_ns_nsview_nsview_shoulddelaywindoworderingforevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, needsPanelToBecomeKey, arginfo_appkit_ns_nsview_nsview_needspaneltobecomekey, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, mouseDownCanMoveWindow, arginfo_appkit_ns_nsview_nsview_mousedowncanmovewindow, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, wantsRestingTouches, arginfo_appkit_ns_nsview_nsview_wantsrestingtouches, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, setWantsRestingTouches, arginfo_appkit_ns_nsview_nsview_setwantsrestingtouches, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, makeBackingLayer, arginfo_appkit_ns_nsview_nsview_makebackinglayer, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, layerContentsRedrawPolicy, arginfo_appkit_ns_nsview_nsview_layercontentsredrawpolicy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, setLayerContentsRedrawPolicy, arginfo_appkit_ns_nsview_nsview_setlayercontentsredrawpolicy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, layerContentsPlacement, arginfo_appkit_ns_nsview_nsview_layercontentsplacement, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, setLayerContentsPlacement, arginfo_appkit_ns_nsview_nsview_setlayercontentsplacement, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, wantsLayer, arginfo_appkit_ns_nsview_nsview_wantslayer, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, setWantsLayer, arginfo_appkit_ns_nsview_nsview_setwantslayer, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, layer, arginfo_appkit_ns_nsview_nsview_layer, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, setLayer, arginfo_appkit_ns_nsview_nsview_setlayer, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, wantsUpdateLayer, arginfo_appkit_ns_nsview_nsview_wantsupdatelayer, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, updateLayer, arginfo_appkit_ns_nsview_nsview_updatelayer, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, canDrawSubviewsIntoLayer, arginfo_appkit_ns_nsview_nsview_candrawsubviewsintolayer, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, setCanDrawSubviewsIntoLayer, arginfo_appkit_ns_nsview_nsview_setcandrawsubviewsintolayer, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, layoutSubtreeIfNeeded, arginfo_appkit_ns_nsview_nsview_layoutsubtreeifneeded, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, layout, arginfo_appkit_ns_nsview_nsview_layout, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, needsLayout, arginfo_appkit_ns_nsview_nsview_needslayout, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, setNeedsLayout, arginfo_appkit_ns_nsview_nsview_setneedslayout, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, alphaValue, arginfo_appkit_ns_nsview_nsview_alphavalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, setAlphaValue, arginfo_appkit_ns_nsview_nsview_setalphavalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, layerUsesCoreImageFilters, arginfo_appkit_ns_nsview_nsview_layerusescoreimagefilters, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, setLayerUsesCoreImageFilters, arginfo_appkit_ns_nsview_nsview_setlayerusescoreimagefilters, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, backgroundFilters, arginfo_appkit_ns_nsview_nsview_backgroundfilters, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, setBackgroundFilters, arginfo_appkit_ns_nsview_nsview_setbackgroundfilters, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, compositingFilter, arginfo_appkit_ns_nsview_nsview_compositingfilter, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, setCompositingFilter, arginfo_appkit_ns_nsview_nsview_setcompositingfilter, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, contentFilters, arginfo_appkit_ns_nsview_nsview_contentfilters, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, setContentFilters, arginfo_appkit_ns_nsview_nsview_setcontentfilters, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, shadow, arginfo_appkit_ns_nsview_nsview_shadow, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, setShadow, arginfo_appkit_ns_nsview_nsview_setshadow, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, clipsToBounds, arginfo_appkit_ns_nsview_nsview_clipstobounds, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, setClipsToBounds, arginfo_appkit_ns_nsview_nsview_setclipstobounds, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, postsBoundsChangedNotifications, arginfo_appkit_ns_nsview_nsview_postsboundschangednotifications, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, setPostsBoundsChangedNotifications, arginfo_appkit_ns_nsview_nsview_setpostsboundschangednotifications, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, enclosingScrollView, arginfo_appkit_ns_nsview_nsview_enclosingscrollview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, menuForEvent, arginfo_appkit_ns_nsview_nsview_menuforevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, defaultMenu, arginfo_appkit_ns_nsview_nsview_defaultmenu, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, willOpenMenuWithEvent, arginfo_appkit_ns_nsview_nsview_willopenmenuwithevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, didCloseMenuWithEvent, arginfo_appkit_ns_nsview_nsview_didclosemenuwithevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, toolTip, arginfo_appkit_ns_nsview_nsview_tooltip, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, setToolTip, arginfo_appkit_ns_nsview_nsview_settooltip, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, addToolTipRectOwnerUserData, arginfo_appkit_ns_nsview_nsview_addtooltiprectowneruserdata, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, removeToolTip, arginfo_appkit_ns_nsview_nsview_removetooltip, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, removeAllToolTips, arginfo_appkit_ns_nsview_nsview_removealltooltips, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, viewWillStartLiveResize, arginfo_appkit_ns_nsview_nsview_viewwillstartliveresize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, viewDidEndLiveResize, arginfo_appkit_ns_nsview_nsview_viewdidendliveresize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, inLiveResize, arginfo_appkit_ns_nsview_nsview_inliveresize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, preservesContentDuringLiveResize, arginfo_appkit_ns_nsview_nsview_preservescontentduringliveresize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, rectPreservedDuringLiveResize, arginfo_appkit_ns_nsview_nsview_rectpreservedduringliveresize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, getRectsExposedDuringLiveResizeCount, arginfo_appkit_ns_nsview_nsview_getrectsexposedduringliveresizecount, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, inputContext, arginfo_appkit_ns_nsview_nsview_inputcontext, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, rectForSmartMagnificationAtPointInRect, arginfo_appkit_ns_nsview_nsview_rectforsmartmagnificationatpointinrect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, userInterfaceLayoutDirection, arginfo_appkit_ns_nsview_nsview_userinterfacelayoutdirection, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, setUserInterfaceLayoutDirection, arginfo_appkit_ns_nsview_nsview_setuserinterfacelayoutdirection, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, prepareForReuse, arginfo_appkit_ns_nsview_nsview_prepareforreuse, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, isCompatibleWithResponsiveScrolling, arginfo_appkit_ns_nsview_nsview_iscompatiblewithresponsivescrolling, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, prepareContentInRect, arginfo_appkit_ns_nsview_nsview_preparecontentinrect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, preparedContentRect, arginfo_appkit_ns_nsview_nsview_preparedcontentrect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, setPreparedContentRect, arginfo_appkit_ns_nsview_nsview_setpreparedcontentrect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, allowsVibrancy, arginfo_appkit_ns_nsview_nsview_allowsvibrancy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, viewDidChangeEffectiveAppearance, arginfo_appkit_ns_nsview_nsview_viewdidchangeeffectiveappearance, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, nextKeyView, arginfo_appkit_ns_nsview_nsview_nextkeyview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, setNextKeyView, arginfo_appkit_ns_nsview_nsview_setnextkeyview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, previousKeyView, arginfo_appkit_ns_nsview_nsview_previouskeyview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, nextValidKeyView, arginfo_appkit_ns_nsview_nsview_nextvalidkeyview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, previousValidKeyView, arginfo_appkit_ns_nsview_nsview_previousvalidkeyview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, canBecomeKeyView, arginfo_appkit_ns_nsview_nsview_canbecomekeyview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, setKeyboardFocusRingNeedsDisplayInRect, arginfo_appkit_ns_nsview_nsview_setkeyboardfocusringneedsdisplayinrect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, focusRingType, arginfo_appkit_ns_nsview_nsview_focusringtype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, setFocusRingType, arginfo_appkit_ns_nsview_nsview_setfocusringtype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, defaultFocusRingType, arginfo_appkit_ns_nsview_nsview_defaultfocusringtype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, drawFocusRingMask, arginfo_appkit_ns_nsview_nsview_drawfocusringmask, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, focusRingMaskBounds, arginfo_appkit_ns_nsview_nsview_focusringmaskbounds, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, noteFocusRingMaskChanged, arginfo_appkit_ns_nsview_nsview_notefocusringmaskchanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, writeEPSInsideRectToPasteboard, arginfo_appkit_ns_nsview_nsview_writeepsinsiderecttopasteboard, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, writePDFInsideRectToPasteboard, arginfo_appkit_ns_nsview_nsview_writepdfinsiderecttopasteboard, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, print_, arginfo_appkit_ns_nsview_nsview_print_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, knowsPageRange, arginfo_appkit_ns_nsview_nsview_knowspagerange, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, heightAdjustLimit, arginfo_appkit_ns_nsview_nsview_heightadjustlimit, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, widthAdjustLimit, arginfo_appkit_ns_nsview_nsview_widthadjustlimit, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, adjustPageWidthNewLeftRightLimit, arginfo_appkit_ns_nsview_nsview_adjustpagewidthnewleftrightlimit, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, adjustPageHeightNewTopBottomLimit, arginfo_appkit_ns_nsview_nsview_adjustpageheightnewtopbottomlimit, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, rectForPage, arginfo_appkit_ns_nsview_nsview_rectforpage, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, locationOfPrintRect, arginfo_appkit_ns_nsview_nsview_locationofprintrect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, drawPageBorderWithSize, arginfo_appkit_ns_nsview_nsview_drawpageborderwithsize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, printJobTitle, arginfo_appkit_ns_nsview_nsview_printjobtitle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, beginDocument, arginfo_appkit_ns_nsview_nsview_begindocument, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, endDocument, arginfo_appkit_ns_nsview_nsview_enddocument, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, beginPageInRectAtPlacement, arginfo_appkit_ns_nsview_nsview_beginpageinrectatplacement, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, endPage, arginfo_appkit_ns_nsview_nsview_endpage, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, beginDraggingSessionWithItemsEventSource, arginfo_appkit_ns_nsview_nsview_begindraggingsessionwithitemseventsource, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, registeredDraggedTypes, arginfo_appkit_ns_nsview_nsview_registereddraggedtypes, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, registerForDraggedTypes, arginfo_appkit_ns_nsview_nsview_registerfordraggedtypes, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, unregisterDraggedTypes, arginfo_appkit_ns_nsview_nsview_unregisterdraggedtypes, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, enterFullScreenModeWithOptions, arginfo_appkit_ns_nsview_nsview_enterfullscreenmodewithoptions, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, exitFullScreenModeWithOptions, arginfo_appkit_ns_nsview_nsview_exitfullscreenmodewithoptions, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, isInFullScreenMode, arginfo_appkit_ns_nsview_nsview_isinfullscreenmode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, isDrawingFindIndicator, arginfo_appkit_ns_nsview_nsview_isdrawingfindindicator, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, gestureRecognizers, arginfo_appkit_ns_nsview_nsview_gesturerecognizers, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, setGestureRecognizers, arginfo_appkit_ns_nsview_nsview_setgesturerecognizers, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, addGestureRecognizer, arginfo_appkit_ns_nsview_nsview_addgesturerecognizer, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, removeGestureRecognizer, arginfo_appkit_ns_nsview_nsview_removegesturerecognizer, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, allowedTouchTypes, arginfo_appkit_ns_nsview_nsview_allowedtouchtypes, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, setAllowedTouchTypes, arginfo_appkit_ns_nsview_nsview_setallowedtouchtypes, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, safeAreaInsets, arginfo_appkit_ns_nsview_nsview_safeareainsets, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, additionalSafeAreaInsets, arginfo_appkit_ns_nsview_nsview_additionalsafeareainsets, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, setAdditionalSafeAreaInsets, arginfo_appkit_ns_nsview_nsview_setadditionalsafeareainsets, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, safeAreaLayoutGuide, arginfo_appkit_ns_nsview_nsview_safearealayoutguide, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, safeAreaRect, arginfo_appkit_ns_nsview_nsview_safearearect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, layoutMarginsGuide, arginfo_appkit_ns_nsview_nsview_layoutmarginsguide, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, addTrackingArea, arginfo_appkit_ns_nsview_nsview_addtrackingarea, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, removeTrackingArea, arginfo_appkit_ns_nsview_nsview_removetrackingarea, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, trackingAreas, arginfo_appkit_ns_nsview_nsview_trackingareas, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, updateTrackingAreas, arginfo_appkit_ns_nsview_nsview_updatetrackingareas, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, addCursorRectCursor, arginfo_appkit_ns_nsview_nsview_addcursorrectcursor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, removeCursorRectCursor, arginfo_appkit_ns_nsview_nsview_removecursorrectcursor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, discardCursorRects, arginfo_appkit_ns_nsview_nsview_discardcursorrects, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, resetCursorRects, arginfo_appkit_ns_nsview_nsview_resetcursorrects, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, addTrackingRectOwnerUserDataAssumeInside, arginfo_appkit_ns_nsview_nsview_addtrackingrectowneruserdataassumeinside, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, removeTrackingRect, arginfo_appkit_ns_nsview_nsview_removetrackingrect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, displayLinkWithTargetSelector, arginfo_appkit_ns_nsview_nsview_displaylinkwithtargetselector, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, writingToolsCoordinator, arginfo_appkit_ns_nsview_nsview_writingtoolscoordinator, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSView_NSView, setWritingToolsCoordinator, arginfo_appkit_ns_nsview_nsview_setwritingtoolscoordinator, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
