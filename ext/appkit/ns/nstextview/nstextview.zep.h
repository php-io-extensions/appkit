
extern zend_class_entry *appkit_ns_nstextview_nstextview_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSTextView_NSTextView);

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, initWithFrameTextContainer);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, initWithFrame);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, initUsingTextLayoutManager);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, textViewUsingTextLayoutManager);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, textContainer);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, setTextContainer);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, replaceTextContainer);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, textContainerInset);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, setTextContainerInset);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, textContainerOrigin);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, invalidateTextContainerOrigin);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, layoutManager);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, textStorage);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, textLayoutManager);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, textContentStorage);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, setConstrainedFrameSize);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, setAlignmentRange);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, setBaseWritingDirectionRange);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, turnOffKerning);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, tightenKerning);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, loosenKerning);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, useStandardKerning);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, turnOffLigatures);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, useStandardLigatures);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, useAllLigatures);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, raiseBaseline);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, lowerBaseline);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, outline);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, performFindPanelAction);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, alignJustified);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, changeColor);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, changeAttributes);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, changeDocumentBackgroundColor);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, orderFrontSpacingPanel);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, orderFrontLinkPanel);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, orderFrontListPanel);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, orderFrontTablePanel);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, rulerViewDidMoveMarker);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, rulerViewDidRemoveMarker);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, rulerViewDidAddMarker);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, rulerViewShouldMoveMarker);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, rulerViewShouldAddMarker);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, rulerViewWillMoveMarkerToLocation);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, rulerViewShouldRemoveMarker);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, rulerViewWillAddMarkerAtLocation);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, rulerViewHandleMouseDown);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, setNeedsDisplayInRectAvoidAdditionalLayout);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, shouldDrawInsertionPoint);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, drawInsertionPointInRectColorTurnedOn);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, drawViewBackgroundInRect);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, updateRuler);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, updateFontPanel);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, updateDragTypeRegistration);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, selectionRangeForProposedRangeGranularity);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, clickedOnLinkAtIndex);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, startSpeaking);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, stopSpeaking);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, setLayoutOrientation);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, changeLayoutOrientation);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, characterIndexForInsertionAtPoint);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, stronglyReferencesTextStorage);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, usesAdaptiveColorMappingForDarkAppearance);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, setUsesAdaptiveColorMappingForDarkAppearance);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, complete);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, rangeForUserCompletion);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, completionsForPartialWordRangeIndexOfSelectedItem);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, insertCompletionForPartialWordRangeMovementIsFinal);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, writablePasteboardTypes);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, writeSelectionToPasteboardType);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, writeSelectionToPasteboardTypes);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, readablePasteboardTypes);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, preferredPasteboardTypeFromArrayRestrictedToTypesFromArray);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, readSelectionFromPasteboardType);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, readSelectionFromPasteboard);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, registerForServices);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, validRequestorForSendTypeReturnType);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, pasteAsPlainText);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, pasteAsRichText);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, dragSelectionWithEventOffsetSlideBack);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, dragImageForSelectionWithEventOrigin);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, acceptableDragTypes);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, dragOperationForDraggingInfoType);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, cleanUpAfterDragOperation);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, selectedRanges);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, setSelectedRanges);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, setSelectedRangesAffinityStillSelecting);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, setSelectedRangeAffinityStillSelecting);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, selectionAffinity);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, selectionGranularity);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, setSelectionGranularity);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, selectedTextAttributes);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, setSelectedTextAttributes);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, insertionPointColor);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, setInsertionPointColor);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, updateInsertionPointStateAndRestartTimer);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, markedTextAttributes);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, setMarkedTextAttributes);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, linkTextAttributes);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, setLinkTextAttributes);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, displaysLinkToolTips);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, setDisplaysLinkToolTips);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, acceptsGlyphInfo);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, setAcceptsGlyphInfo);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, usesRuler);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, setUsesRuler);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, usesInspectorBar);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, setUsesInspectorBar);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, isContinuousSpellCheckingEnabled);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, setContinuousSpellCheckingEnabled);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, toggleContinuousSpellChecking);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, spellCheckerDocumentTag);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, isGrammarCheckingEnabled);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, setGrammarCheckingEnabled);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, toggleGrammarChecking);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, setSpellingStateRange);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, typingAttributes);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, setTypingAttributes);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, shouldChangeTextInRangesReplacementStrings);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, rangesForUserTextChange);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, rangesForUserCharacterAttributeChange);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, rangesForUserParagraphAttributeChange);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, shouldChangeTextInRangeReplacementString);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, didChangeText);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, rangeForUserTextChange);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, rangeForUserCharacterAttributeChange);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, rangeForUserParagraphAttributeChange);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, allowsDocumentBackgroundColorChange);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, setAllowsDocumentBackgroundColorChange);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, defaultParagraphStyle);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, setDefaultParagraphStyle);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, allowsUndo);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, setAllowsUndo);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, breakUndoCoalescing);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, isCoalescingUndo);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, allowsImageEditing);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, setAllowsImageEditing);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, showFindIndicatorForRange);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, usesRolloverButtonForSelection);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, setUsesRolloverButtonForSelection);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, delegate);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, setDelegate);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, isEditable);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, setEditable);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, isSelectable);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, setSelectable);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, isRichText);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, setRichText);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, importsGraphics);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, setImportsGraphics);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, drawsBackground);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, setDrawsBackground);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, backgroundColor);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, setBackgroundColor);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, isFieldEditor);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, setFieldEditor);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, usesFontPanel);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, setUsesFontPanel);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, isRulerVisible);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, setRulerVisible);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, setSelectedRange);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, allowedInputSourceLocales);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, setAllowedInputSourceLocales);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, isWritingToolsActive);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, writingToolsBehavior);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, setWritingToolsBehavior);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, allowedWritingToolsResultOptions);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, setAllowedWritingToolsResultOptions);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, smartInsertDeleteEnabled);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, setSmartInsertDeleteEnabled);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, smartDeleteRangeForProposedRange);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, toggleSmartInsertDelete);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, smartInsertForStringReplacingRangeBeforeStringAfterString);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, smartInsertBeforeStringForStringReplacingRange);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, smartInsertAfterStringForStringReplacingRange);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, isAutomaticQuoteSubstitutionEnabled);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, setAutomaticQuoteSubstitutionEnabled);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, toggleAutomaticQuoteSubstitution);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, isAutomaticLinkDetectionEnabled);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, setAutomaticLinkDetectionEnabled);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, toggleAutomaticLinkDetection);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, isAutomaticDataDetectionEnabled);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, setAutomaticDataDetectionEnabled);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, toggleAutomaticDataDetection);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, isAutomaticDashSubstitutionEnabled);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, setAutomaticDashSubstitutionEnabled);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, toggleAutomaticDashSubstitution);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, isAutomaticTextReplacementEnabled);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, setAutomaticTextReplacementEnabled);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, toggleAutomaticTextReplacement);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, isAutomaticSpellingCorrectionEnabled);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, setAutomaticSpellingCorrectionEnabled);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, toggleAutomaticSpellingCorrection);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, enabledTextCheckingTypes);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, setEnabledTextCheckingTypes);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, checkTextInRangeTypesOptions);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, handleTextCheckingResultsForRangeTypesOptionsOrthographyWordCount);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, orderFrontSubstitutionsPanel);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, checkTextInSelection);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, checkTextInDocument);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, usesFindPanel);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, setUsesFindPanel);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, usesFindBar);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, setUsesFindBar);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, isIncrementalSearchingEnabled);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, setIncrementalSearchingEnabled);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, inlinePredictionType);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, setInlinePredictionType);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, mathExpressionCompletionType);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, setMathExpressionCompletionType);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, toggleQuickLookPreviewPanel);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, quickLookPreviewableItemsInRanges);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, updateQuickLookPreviewPanel);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, orderFrontSharingServicePicker);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, isAutomaticTextCompletionEnabled);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, setAutomaticTextCompletionEnabled);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, toggleAutomaticTextCompletion);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, allowsCharacterPickerTouchBarItem);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, setAllowsCharacterPickerTouchBarItem);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, updateTouchBarItemIdentifiers);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, updateTextTouchBarItems);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, updateCandidates);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, candidateListTouchBarItem);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, scrollableTextView);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, fieldEditor);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, scrollableDocumentContentTextView);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, scrollablePlainDocumentContentTextView);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, textHighlightAttributes);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, setTextHighlightAttributes);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, drawTextHighlightBackgroundForTextRangeOrigin);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, highlight);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_initwithframetextcontainer, 0, 5, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, container, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_initwithframe, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_initusingtextlayoutmanager, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, usingTextLayoutManager, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_textviewusingtextlayoutmanager, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, usingTextLayoutManager, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_textcontainer, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_settextcontainer, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, textContainer, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_replacetextcontainer, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, newContainer, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_textcontainerinset, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_settextcontainerinset, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_textcontainerorigin, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_invalidatetextcontainerorigin, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_layoutmanager, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_textstorage, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_textlayoutmanager, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_textcontentstorage, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_setconstrainedframesize, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_setalignmentrange, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, alignment, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, location, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, length, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_setbasewritingdirectionrange, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, writingDirection, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, location, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, length, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_turnoffkerning, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sender, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_tightenkerning, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sender, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_loosenkerning, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sender, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_usestandardkerning, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sender, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_turnoffligatures, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sender, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_usestandardligatures, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sender, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_useallligatures, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sender, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_raisebaseline, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sender, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_lowerbaseline, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sender, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_outline, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sender, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_performfindpanelaction, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sender, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_alignjustified, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sender, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_changecolor, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sender, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_changeattributes, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sender, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_changedocumentbackgroundcolor, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sender, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_orderfrontspacingpanel, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sender, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_orderfrontlinkpanel, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sender, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_orderfrontlistpanel, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sender, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_orderfronttablepanel, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sender, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_rulerviewdidmovemarker, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, ruler, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, marker, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_rulerviewdidremovemarker, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, ruler, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, marker, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_rulerviewdidaddmarker, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, ruler, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, marker, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_rulerviewshouldmovemarker, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, ruler, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, marker, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_rulerviewshouldaddmarker, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, ruler, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, marker, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_rulerviewwillmovemarkertolocation, 0, 4, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, ruler, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, marker, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, location, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_rulerviewshouldremovemarker, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, ruler, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, marker, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_rulerviewwilladdmarkeratlocation, 0, 4, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, ruler, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, marker, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, location, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_rulerviewhandlemousedown, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, ruler, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_setneedsdisplayinrectavoidadditionallayout, 0, 6, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, flag, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_shoulddrawinsertionpoint, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_drawinsertionpointinrectcolorturnedon, 0, 7, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, color, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, flag, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_drawviewbackgroundinrect, 0, 5, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_updateruler, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_updatefontpanel, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_updatedragtyperegistration, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_selectionrangeforproposedrangegranularity, 0, 4, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, location, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, length, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, granularity, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_clickedonlinkatindex, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, link, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, charIndex, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_startspeaking, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sender, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_stopspeaking, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sender, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_setlayoutorientation, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, orientation, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_changelayoutorientation, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sender, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_characterindexforinsertionatpoint, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_stronglyreferencestextstorage, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_usesadaptivecolormappingfordarkappearance, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_setusesadaptivecolormappingfordarkappearance, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, usesAdaptiveColorMappingForDarkAppearance, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_complete, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sender, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_rangeforusercompletion, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_completionsforpartialwordrangeindexofselecteditem, 0, 3, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, location, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, length, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_insertcompletionforpartialwordrangemovementisfinal, 0, 6, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, word, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, location, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, length, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, movement, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, flag, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_writablepasteboardtypes, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_writeselectiontopasteboardtype, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pboard, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, type, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_writeselectiontopasteboardtypes, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pboard, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, types, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_readablepasteboardtypes, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_preferredpasteboardtypefromarrayrestrictedtotypesfromarray, 0, 0, 3)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, availableTypes, 0)
	ZEND_ARG_ARRAY_INFO(0, allowedTypes, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_readselectionfrompasteboardtype, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pboard, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, type, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_readselectionfrompasteboard, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pboard, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_registerforservices, 0, 0, IS_VOID, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_validrequestorforsendtypereturntype, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, sendType)
	ZEND_ARG_INFO(0, returnType)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_pasteasplaintext, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sender, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_pasteasrichtext, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sender, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_dragselectionwitheventoffsetslideback, 0, 5, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, slideBack, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_dragimageforselectionwitheventorigin, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_acceptabledragtypes, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_dragoperationfordragginginfotype, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, dragInfo, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, type, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_cleanupafterdragoperation, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_selectedranges, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_setselectedranges, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, selectedRanges, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_setselectedrangesaffinitystillselecting, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, ranges, 0)
	ZEND_ARG_TYPE_INFO(0, affinity, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, stillSelectingFlag, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_setselectedrangeaffinitystillselecting, 0, 5, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, location, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, length, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, affinity, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, stillSelectingFlag, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_selectionaffinity, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_selectiongranularity, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_setselectiongranularity, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selectionGranularity, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_selectedtextattributes, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_setselectedtextattributes, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, selectedTextAttributes)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_insertionpointcolor, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_setinsertionpointcolor, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, insertionPointColor, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_updateinsertionpointstateandrestarttimer, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, restartFlag, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_markedtextattributes, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_setmarkedtextattributes, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, markedTextAttributes)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_linktextattributes, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_setlinktextattributes, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, linkTextAttributes)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_displayslinktooltips, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_setdisplayslinktooltips, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, displaysLinkToolTips, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_acceptsglyphinfo, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_setacceptsglyphinfo, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, acceptsGlyphInfo, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_usesruler, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_setusesruler, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, usesRuler, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_usesinspectorbar, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_setusesinspectorbar, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, usesInspectorBar, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_iscontinuousspellcheckingenabled, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_setcontinuousspellcheckingenabled, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, continuousSpellCheckingEnabled, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_togglecontinuousspellchecking, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sender, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_spellcheckerdocumenttag, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_isgrammarcheckingenabled, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_setgrammarcheckingenabled, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, grammarCheckingEnabled, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_togglegrammarchecking, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sender, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_setspellingstaterange, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, location, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, length, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_typingattributes, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_settypingattributes, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, typingAttributes)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_shouldchangetextinrangesreplacementstrings, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, affectedRanges, 0)
	ZEND_ARG_ARRAY_INFO(0, replacementStrings, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_rangesforusertextchange, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_rangesforusercharacterattributechange, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_rangesforuserparagraphattributechange, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_shouldchangetextinrangereplacementstring, 0, 4, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, location, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, length, IS_LONG, 0)
	ZEND_ARG_INFO(0, replacementString)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_didchangetext, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_rangeforusertextchange, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_rangeforusercharacterattributechange, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_rangeforuserparagraphattributechange, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_allowsdocumentbackgroundcolorchange, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_setallowsdocumentbackgroundcolorchange, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, allowsDocumentBackgroundColorChange, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_defaultparagraphstyle, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_setdefaultparagraphstyle, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, defaultParagraphStyle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_allowsundo, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_setallowsundo, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, allowsUndo, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_breakundocoalescing, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_iscoalescingundo, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_allowsimageediting, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_setallowsimageediting, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, allowsImageEditing, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_showfindindicatorforrange, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, location, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, length, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_usesrolloverbuttonforselection, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_setusesrolloverbuttonforselection, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, usesRolloverButtonForSelection, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_delegate, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_setdelegate, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, delegate, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_iseditable, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_seteditable, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, editable, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_isselectable, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_setselectable, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selectable, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_isrichtext, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_setrichtext, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, richText, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_importsgraphics, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_setimportsgraphics, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, importsGraphics, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_drawsbackground, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_setdrawsbackground, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, drawsBackground, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_backgroundcolor, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_setbackgroundcolor, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, backgroundColor, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_isfieldeditor, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_setfieldeditor, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, fieldEditor, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_usesfontpanel, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_setusesfontpanel, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, usesFontPanel, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_isrulervisible, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_setrulervisible, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rulerVisible, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_setselectedrange, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, location, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, length, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_allowedinputsourcelocales, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_setallowedinputsourcelocales, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, allowedInputSourceLocales, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_iswritingtoolsactive, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_writingtoolsbehavior, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_setwritingtoolsbehavior, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, writingToolsBehavior, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_allowedwritingtoolsresultoptions, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_setallowedwritingtoolsresultoptions, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, allowedWritingToolsResultOptions, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_smartinsertdeleteenabled, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_setsmartinsertdeleteenabled, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, smartInsertDeleteEnabled, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_smartdeleterangeforproposedrange, 0, 3, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, location, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, length, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_togglesmartinsertdelete, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sender, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_smartinsertforstringreplacingrangebeforestringafterstring, 0, 4, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pasteString, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, location, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, length, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_smartinsertbeforestringforstringreplacingrange, 0, 0, 4)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pasteString, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, location, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, length, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_smartinsertafterstringforstringreplacingrange, 0, 0, 4)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pasteString, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, location, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, length, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_isautomaticquotesubstitutionenabled, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_setautomaticquotesubstitutionenabled, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, automaticQuoteSubstitutionEnabled, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_toggleautomaticquotesubstitution, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sender, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_isautomaticlinkdetectionenabled, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_setautomaticlinkdetectionenabled, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, automaticLinkDetectionEnabled, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_toggleautomaticlinkdetection, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sender, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_isautomaticdatadetectionenabled, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_setautomaticdatadetectionenabled, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, automaticDataDetectionEnabled, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_toggleautomaticdatadetection, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sender, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_isautomaticdashsubstitutionenabled, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_setautomaticdashsubstitutionenabled, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, automaticDashSubstitutionEnabled, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_toggleautomaticdashsubstitution, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sender, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_isautomatictextreplacementenabled, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_setautomatictextreplacementenabled, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, automaticTextReplacementEnabled, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_toggleautomatictextreplacement, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sender, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_isautomaticspellingcorrectionenabled, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_setautomaticspellingcorrectionenabled, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, automaticSpellingCorrectionEnabled, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_toggleautomaticspellingcorrection, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sender, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_enabledtextcheckingtypes, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_setenabledtextcheckingtypes, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, enabledTextCheckingTypes, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_checktextinrangetypesoptions, 0, 5, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, location, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, length, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, checkingTypes, IS_LONG, 0)
	ZEND_ARG_INFO(0, options)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_handletextcheckingresultsforrangetypesoptionsorthographywordcount, 0, 8, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, results, 0)
	ZEND_ARG_TYPE_INFO(0, location, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, length, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, checkingTypes, IS_LONG, 0)
	ZEND_ARG_INFO(0, options)
	ZEND_ARG_TYPE_INFO(0, orthography, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, wordCount, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_orderfrontsubstitutionspanel, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sender, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_checktextinselection, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sender, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_checktextindocument, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sender, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_usesfindpanel, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_setusesfindpanel, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, usesFindPanel, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_usesfindbar, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_setusesfindbar, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, usesFindBar, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_isincrementalsearchingenabled, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_setincrementalsearchingenabled, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, incrementalSearchingEnabled, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_inlinepredictiontype, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_setinlinepredictiontype, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, inlinePredictionType, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_mathexpressioncompletiontype, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_setmathexpressioncompletiontype, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, mathExpressionCompletionType, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_togglequicklookpreviewpanel, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sender, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_quicklookpreviewableitemsinranges, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, ranges, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_updatequicklookpreviewpanel, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_orderfrontsharingservicepicker, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sender, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_isautomatictextcompletionenabled, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_setautomatictextcompletionenabled, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, automaticTextCompletionEnabled, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_toggleautomatictextcompletion, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sender, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_allowscharacterpickertouchbaritem, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_setallowscharacterpickertouchbaritem, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, allowsCharacterPickerTouchBarItem, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_updatetouchbaritemidentifiers, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_updatetexttouchbaritems, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_updatecandidates, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_candidatelisttouchbaritem, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_scrollabletextview, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_fieldeditor, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_scrollabledocumentcontenttextview, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_scrollableplaindocumentcontenttextview, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_texthighlightattributes, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_settexthighlightattributes, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, textHighlightAttributes)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_drawtexthighlightbackgroundfortextrangeorigin, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, textRange, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_highlight, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sender, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nstextview_nstextview_method_entry) {
	PHP_ME(AppKit_NS_NSTextView_NSTextView, initWithFrameTextContainer, arginfo_appkit_ns_nstextview_nstextview_initwithframetextcontainer, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, initWithFrame, arginfo_appkit_ns_nstextview_nstextview_initwithframe, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, initUsingTextLayoutManager, arginfo_appkit_ns_nstextview_nstextview_initusingtextlayoutmanager, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, textViewUsingTextLayoutManager, arginfo_appkit_ns_nstextview_nstextview_textviewusingtextlayoutmanager, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, textContainer, arginfo_appkit_ns_nstextview_nstextview_textcontainer, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, setTextContainer, arginfo_appkit_ns_nstextview_nstextview_settextcontainer, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, replaceTextContainer, arginfo_appkit_ns_nstextview_nstextview_replacetextcontainer, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, textContainerInset, arginfo_appkit_ns_nstextview_nstextview_textcontainerinset, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, setTextContainerInset, arginfo_appkit_ns_nstextview_nstextview_settextcontainerinset, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, textContainerOrigin, arginfo_appkit_ns_nstextview_nstextview_textcontainerorigin, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, invalidateTextContainerOrigin, arginfo_appkit_ns_nstextview_nstextview_invalidatetextcontainerorigin, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, layoutManager, arginfo_appkit_ns_nstextview_nstextview_layoutmanager, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, textStorage, arginfo_appkit_ns_nstextview_nstextview_textstorage, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, textLayoutManager, arginfo_appkit_ns_nstextview_nstextview_textlayoutmanager, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, textContentStorage, arginfo_appkit_ns_nstextview_nstextview_textcontentstorage, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, setConstrainedFrameSize, arginfo_appkit_ns_nstextview_nstextview_setconstrainedframesize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, setAlignmentRange, arginfo_appkit_ns_nstextview_nstextview_setalignmentrange, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, setBaseWritingDirectionRange, arginfo_appkit_ns_nstextview_nstextview_setbasewritingdirectionrange, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, turnOffKerning, arginfo_appkit_ns_nstextview_nstextview_turnoffkerning, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, tightenKerning, arginfo_appkit_ns_nstextview_nstextview_tightenkerning, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, loosenKerning, arginfo_appkit_ns_nstextview_nstextview_loosenkerning, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, useStandardKerning, arginfo_appkit_ns_nstextview_nstextview_usestandardkerning, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, turnOffLigatures, arginfo_appkit_ns_nstextview_nstextview_turnoffligatures, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, useStandardLigatures, arginfo_appkit_ns_nstextview_nstextview_usestandardligatures, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, useAllLigatures, arginfo_appkit_ns_nstextview_nstextview_useallligatures, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, raiseBaseline, arginfo_appkit_ns_nstextview_nstextview_raisebaseline, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, lowerBaseline, arginfo_appkit_ns_nstextview_nstextview_lowerbaseline, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, outline, arginfo_appkit_ns_nstextview_nstextview_outline, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, performFindPanelAction, arginfo_appkit_ns_nstextview_nstextview_performfindpanelaction, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, alignJustified, arginfo_appkit_ns_nstextview_nstextview_alignjustified, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, changeColor, arginfo_appkit_ns_nstextview_nstextview_changecolor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, changeAttributes, arginfo_appkit_ns_nstextview_nstextview_changeattributes, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, changeDocumentBackgroundColor, arginfo_appkit_ns_nstextview_nstextview_changedocumentbackgroundcolor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, orderFrontSpacingPanel, arginfo_appkit_ns_nstextview_nstextview_orderfrontspacingpanel, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, orderFrontLinkPanel, arginfo_appkit_ns_nstextview_nstextview_orderfrontlinkpanel, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, orderFrontListPanel, arginfo_appkit_ns_nstextview_nstextview_orderfrontlistpanel, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, orderFrontTablePanel, arginfo_appkit_ns_nstextview_nstextview_orderfronttablepanel, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, rulerViewDidMoveMarker, arginfo_appkit_ns_nstextview_nstextview_rulerviewdidmovemarker, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, rulerViewDidRemoveMarker, arginfo_appkit_ns_nstextview_nstextview_rulerviewdidremovemarker, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, rulerViewDidAddMarker, arginfo_appkit_ns_nstextview_nstextview_rulerviewdidaddmarker, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, rulerViewShouldMoveMarker, arginfo_appkit_ns_nstextview_nstextview_rulerviewshouldmovemarker, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, rulerViewShouldAddMarker, arginfo_appkit_ns_nstextview_nstextview_rulerviewshouldaddmarker, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, rulerViewWillMoveMarkerToLocation, arginfo_appkit_ns_nstextview_nstextview_rulerviewwillmovemarkertolocation, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, rulerViewShouldRemoveMarker, arginfo_appkit_ns_nstextview_nstextview_rulerviewshouldremovemarker, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, rulerViewWillAddMarkerAtLocation, arginfo_appkit_ns_nstextview_nstextview_rulerviewwilladdmarkeratlocation, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, rulerViewHandleMouseDown, arginfo_appkit_ns_nstextview_nstextview_rulerviewhandlemousedown, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, setNeedsDisplayInRectAvoidAdditionalLayout, arginfo_appkit_ns_nstextview_nstextview_setneedsdisplayinrectavoidadditionallayout, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, shouldDrawInsertionPoint, arginfo_appkit_ns_nstextview_nstextview_shoulddrawinsertionpoint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, drawInsertionPointInRectColorTurnedOn, arginfo_appkit_ns_nstextview_nstextview_drawinsertionpointinrectcolorturnedon, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, drawViewBackgroundInRect, arginfo_appkit_ns_nstextview_nstextview_drawviewbackgroundinrect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, updateRuler, arginfo_appkit_ns_nstextview_nstextview_updateruler, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, updateFontPanel, arginfo_appkit_ns_nstextview_nstextview_updatefontpanel, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, updateDragTypeRegistration, arginfo_appkit_ns_nstextview_nstextview_updatedragtyperegistration, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, selectionRangeForProposedRangeGranularity, arginfo_appkit_ns_nstextview_nstextview_selectionrangeforproposedrangegranularity, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, clickedOnLinkAtIndex, arginfo_appkit_ns_nstextview_nstextview_clickedonlinkatindex, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, startSpeaking, arginfo_appkit_ns_nstextview_nstextview_startspeaking, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, stopSpeaking, arginfo_appkit_ns_nstextview_nstextview_stopspeaking, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, setLayoutOrientation, arginfo_appkit_ns_nstextview_nstextview_setlayoutorientation, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, changeLayoutOrientation, arginfo_appkit_ns_nstextview_nstextview_changelayoutorientation, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, characterIndexForInsertionAtPoint, arginfo_appkit_ns_nstextview_nstextview_characterindexforinsertionatpoint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, stronglyReferencesTextStorage, arginfo_appkit_ns_nstextview_nstextview_stronglyreferencestextstorage, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, usesAdaptiveColorMappingForDarkAppearance, arginfo_appkit_ns_nstextview_nstextview_usesadaptivecolormappingfordarkappearance, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, setUsesAdaptiveColorMappingForDarkAppearance, arginfo_appkit_ns_nstextview_nstextview_setusesadaptivecolormappingfordarkappearance, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, complete, arginfo_appkit_ns_nstextview_nstextview_complete, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, rangeForUserCompletion, arginfo_appkit_ns_nstextview_nstextview_rangeforusercompletion, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, completionsForPartialWordRangeIndexOfSelectedItem, arginfo_appkit_ns_nstextview_nstextview_completionsforpartialwordrangeindexofselecteditem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, insertCompletionForPartialWordRangeMovementIsFinal, arginfo_appkit_ns_nstextview_nstextview_insertcompletionforpartialwordrangemovementisfinal, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, writablePasteboardTypes, arginfo_appkit_ns_nstextview_nstextview_writablepasteboardtypes, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, writeSelectionToPasteboardType, arginfo_appkit_ns_nstextview_nstextview_writeselectiontopasteboardtype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, writeSelectionToPasteboardTypes, arginfo_appkit_ns_nstextview_nstextview_writeselectiontopasteboardtypes, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, readablePasteboardTypes, arginfo_appkit_ns_nstextview_nstextview_readablepasteboardtypes, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, preferredPasteboardTypeFromArrayRestrictedToTypesFromArray, arginfo_appkit_ns_nstextview_nstextview_preferredpasteboardtypefromarrayrestrictedtotypesfromarray, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, readSelectionFromPasteboardType, arginfo_appkit_ns_nstextview_nstextview_readselectionfrompasteboardtype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, readSelectionFromPasteboard, arginfo_appkit_ns_nstextview_nstextview_readselectionfrompasteboard, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, registerForServices, arginfo_appkit_ns_nstextview_nstextview_registerforservices, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, validRequestorForSendTypeReturnType, arginfo_appkit_ns_nstextview_nstextview_validrequestorforsendtypereturntype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, pasteAsPlainText, arginfo_appkit_ns_nstextview_nstextview_pasteasplaintext, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, pasteAsRichText, arginfo_appkit_ns_nstextview_nstextview_pasteasrichtext, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, dragSelectionWithEventOffsetSlideBack, arginfo_appkit_ns_nstextview_nstextview_dragselectionwitheventoffsetslideback, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, dragImageForSelectionWithEventOrigin, arginfo_appkit_ns_nstextview_nstextview_dragimageforselectionwitheventorigin, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, acceptableDragTypes, arginfo_appkit_ns_nstextview_nstextview_acceptabledragtypes, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, dragOperationForDraggingInfoType, arginfo_appkit_ns_nstextview_nstextview_dragoperationfordragginginfotype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, cleanUpAfterDragOperation, arginfo_appkit_ns_nstextview_nstextview_cleanupafterdragoperation, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, selectedRanges, arginfo_appkit_ns_nstextview_nstextview_selectedranges, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, setSelectedRanges, arginfo_appkit_ns_nstextview_nstextview_setselectedranges, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, setSelectedRangesAffinityStillSelecting, arginfo_appkit_ns_nstextview_nstextview_setselectedrangesaffinitystillselecting, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, setSelectedRangeAffinityStillSelecting, arginfo_appkit_ns_nstextview_nstextview_setselectedrangeaffinitystillselecting, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, selectionAffinity, arginfo_appkit_ns_nstextview_nstextview_selectionaffinity, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, selectionGranularity, arginfo_appkit_ns_nstextview_nstextview_selectiongranularity, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, setSelectionGranularity, arginfo_appkit_ns_nstextview_nstextview_setselectiongranularity, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, selectedTextAttributes, arginfo_appkit_ns_nstextview_nstextview_selectedtextattributes, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, setSelectedTextAttributes, arginfo_appkit_ns_nstextview_nstextview_setselectedtextattributes, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, insertionPointColor, arginfo_appkit_ns_nstextview_nstextview_insertionpointcolor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, setInsertionPointColor, arginfo_appkit_ns_nstextview_nstextview_setinsertionpointcolor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, updateInsertionPointStateAndRestartTimer, arginfo_appkit_ns_nstextview_nstextview_updateinsertionpointstateandrestarttimer, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, markedTextAttributes, arginfo_appkit_ns_nstextview_nstextview_markedtextattributes, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, setMarkedTextAttributes, arginfo_appkit_ns_nstextview_nstextview_setmarkedtextattributes, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, linkTextAttributes, arginfo_appkit_ns_nstextview_nstextview_linktextattributes, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, setLinkTextAttributes, arginfo_appkit_ns_nstextview_nstextview_setlinktextattributes, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, displaysLinkToolTips, arginfo_appkit_ns_nstextview_nstextview_displayslinktooltips, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, setDisplaysLinkToolTips, arginfo_appkit_ns_nstextview_nstextview_setdisplayslinktooltips, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, acceptsGlyphInfo, arginfo_appkit_ns_nstextview_nstextview_acceptsglyphinfo, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, setAcceptsGlyphInfo, arginfo_appkit_ns_nstextview_nstextview_setacceptsglyphinfo, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, usesRuler, arginfo_appkit_ns_nstextview_nstextview_usesruler, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, setUsesRuler, arginfo_appkit_ns_nstextview_nstextview_setusesruler, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, usesInspectorBar, arginfo_appkit_ns_nstextview_nstextview_usesinspectorbar, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, setUsesInspectorBar, arginfo_appkit_ns_nstextview_nstextview_setusesinspectorbar, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, isContinuousSpellCheckingEnabled, arginfo_appkit_ns_nstextview_nstextview_iscontinuousspellcheckingenabled, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, setContinuousSpellCheckingEnabled, arginfo_appkit_ns_nstextview_nstextview_setcontinuousspellcheckingenabled, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, toggleContinuousSpellChecking, arginfo_appkit_ns_nstextview_nstextview_togglecontinuousspellchecking, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, spellCheckerDocumentTag, arginfo_appkit_ns_nstextview_nstextview_spellcheckerdocumenttag, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, isGrammarCheckingEnabled, arginfo_appkit_ns_nstextview_nstextview_isgrammarcheckingenabled, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, setGrammarCheckingEnabled, arginfo_appkit_ns_nstextview_nstextview_setgrammarcheckingenabled, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, toggleGrammarChecking, arginfo_appkit_ns_nstextview_nstextview_togglegrammarchecking, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, setSpellingStateRange, arginfo_appkit_ns_nstextview_nstextview_setspellingstaterange, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, typingAttributes, arginfo_appkit_ns_nstextview_nstextview_typingattributes, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, setTypingAttributes, arginfo_appkit_ns_nstextview_nstextview_settypingattributes, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, shouldChangeTextInRangesReplacementStrings, arginfo_appkit_ns_nstextview_nstextview_shouldchangetextinrangesreplacementstrings, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, rangesForUserTextChange, arginfo_appkit_ns_nstextview_nstextview_rangesforusertextchange, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, rangesForUserCharacterAttributeChange, arginfo_appkit_ns_nstextview_nstextview_rangesforusercharacterattributechange, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, rangesForUserParagraphAttributeChange, arginfo_appkit_ns_nstextview_nstextview_rangesforuserparagraphattributechange, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, shouldChangeTextInRangeReplacementString, arginfo_appkit_ns_nstextview_nstextview_shouldchangetextinrangereplacementstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, didChangeText, arginfo_appkit_ns_nstextview_nstextview_didchangetext, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, rangeForUserTextChange, arginfo_appkit_ns_nstextview_nstextview_rangeforusertextchange, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, rangeForUserCharacterAttributeChange, arginfo_appkit_ns_nstextview_nstextview_rangeforusercharacterattributechange, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, rangeForUserParagraphAttributeChange, arginfo_appkit_ns_nstextview_nstextview_rangeforuserparagraphattributechange, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, allowsDocumentBackgroundColorChange, arginfo_appkit_ns_nstextview_nstextview_allowsdocumentbackgroundcolorchange, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, setAllowsDocumentBackgroundColorChange, arginfo_appkit_ns_nstextview_nstextview_setallowsdocumentbackgroundcolorchange, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, defaultParagraphStyle, arginfo_appkit_ns_nstextview_nstextview_defaultparagraphstyle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, setDefaultParagraphStyle, arginfo_appkit_ns_nstextview_nstextview_setdefaultparagraphstyle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, allowsUndo, arginfo_appkit_ns_nstextview_nstextview_allowsundo, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, setAllowsUndo, arginfo_appkit_ns_nstextview_nstextview_setallowsundo, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, breakUndoCoalescing, arginfo_appkit_ns_nstextview_nstextview_breakundocoalescing, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, isCoalescingUndo, arginfo_appkit_ns_nstextview_nstextview_iscoalescingundo, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, allowsImageEditing, arginfo_appkit_ns_nstextview_nstextview_allowsimageediting, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, setAllowsImageEditing, arginfo_appkit_ns_nstextview_nstextview_setallowsimageediting, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, showFindIndicatorForRange, arginfo_appkit_ns_nstextview_nstextview_showfindindicatorforrange, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, usesRolloverButtonForSelection, arginfo_appkit_ns_nstextview_nstextview_usesrolloverbuttonforselection, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, setUsesRolloverButtonForSelection, arginfo_appkit_ns_nstextview_nstextview_setusesrolloverbuttonforselection, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, delegate, arginfo_appkit_ns_nstextview_nstextview_delegate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, setDelegate, arginfo_appkit_ns_nstextview_nstextview_setdelegate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, isEditable, arginfo_appkit_ns_nstextview_nstextview_iseditable, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, setEditable, arginfo_appkit_ns_nstextview_nstextview_seteditable, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, isSelectable, arginfo_appkit_ns_nstextview_nstextview_isselectable, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, setSelectable, arginfo_appkit_ns_nstextview_nstextview_setselectable, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, isRichText, arginfo_appkit_ns_nstextview_nstextview_isrichtext, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, setRichText, arginfo_appkit_ns_nstextview_nstextview_setrichtext, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, importsGraphics, arginfo_appkit_ns_nstextview_nstextview_importsgraphics, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, setImportsGraphics, arginfo_appkit_ns_nstextview_nstextview_setimportsgraphics, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, drawsBackground, arginfo_appkit_ns_nstextview_nstextview_drawsbackground, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, setDrawsBackground, arginfo_appkit_ns_nstextview_nstextview_setdrawsbackground, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, backgroundColor, arginfo_appkit_ns_nstextview_nstextview_backgroundcolor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, setBackgroundColor, arginfo_appkit_ns_nstextview_nstextview_setbackgroundcolor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, isFieldEditor, arginfo_appkit_ns_nstextview_nstextview_isfieldeditor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, setFieldEditor, arginfo_appkit_ns_nstextview_nstextview_setfieldeditor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, usesFontPanel, arginfo_appkit_ns_nstextview_nstextview_usesfontpanel, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, setUsesFontPanel, arginfo_appkit_ns_nstextview_nstextview_setusesfontpanel, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, isRulerVisible, arginfo_appkit_ns_nstextview_nstextview_isrulervisible, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, setRulerVisible, arginfo_appkit_ns_nstextview_nstextview_setrulervisible, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, setSelectedRange, arginfo_appkit_ns_nstextview_nstextview_setselectedrange, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, allowedInputSourceLocales, arginfo_appkit_ns_nstextview_nstextview_allowedinputsourcelocales, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, setAllowedInputSourceLocales, arginfo_appkit_ns_nstextview_nstextview_setallowedinputsourcelocales, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, isWritingToolsActive, arginfo_appkit_ns_nstextview_nstextview_iswritingtoolsactive, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, writingToolsBehavior, arginfo_appkit_ns_nstextview_nstextview_writingtoolsbehavior, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, setWritingToolsBehavior, arginfo_appkit_ns_nstextview_nstextview_setwritingtoolsbehavior, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, allowedWritingToolsResultOptions, arginfo_appkit_ns_nstextview_nstextview_allowedwritingtoolsresultoptions, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, setAllowedWritingToolsResultOptions, arginfo_appkit_ns_nstextview_nstextview_setallowedwritingtoolsresultoptions, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, smartInsertDeleteEnabled, arginfo_appkit_ns_nstextview_nstextview_smartinsertdeleteenabled, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, setSmartInsertDeleteEnabled, arginfo_appkit_ns_nstextview_nstextview_setsmartinsertdeleteenabled, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, smartDeleteRangeForProposedRange, arginfo_appkit_ns_nstextview_nstextview_smartdeleterangeforproposedrange, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, toggleSmartInsertDelete, arginfo_appkit_ns_nstextview_nstextview_togglesmartinsertdelete, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, smartInsertForStringReplacingRangeBeforeStringAfterString, arginfo_appkit_ns_nstextview_nstextview_smartinsertforstringreplacingrangebeforestringafterstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, smartInsertBeforeStringForStringReplacingRange, arginfo_appkit_ns_nstextview_nstextview_smartinsertbeforestringforstringreplacingrange, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, smartInsertAfterStringForStringReplacingRange, arginfo_appkit_ns_nstextview_nstextview_smartinsertafterstringforstringreplacingrange, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, isAutomaticQuoteSubstitutionEnabled, arginfo_appkit_ns_nstextview_nstextview_isautomaticquotesubstitutionenabled, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, setAutomaticQuoteSubstitutionEnabled, arginfo_appkit_ns_nstextview_nstextview_setautomaticquotesubstitutionenabled, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, toggleAutomaticQuoteSubstitution, arginfo_appkit_ns_nstextview_nstextview_toggleautomaticquotesubstitution, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, isAutomaticLinkDetectionEnabled, arginfo_appkit_ns_nstextview_nstextview_isautomaticlinkdetectionenabled, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, setAutomaticLinkDetectionEnabled, arginfo_appkit_ns_nstextview_nstextview_setautomaticlinkdetectionenabled, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, toggleAutomaticLinkDetection, arginfo_appkit_ns_nstextview_nstextview_toggleautomaticlinkdetection, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, isAutomaticDataDetectionEnabled, arginfo_appkit_ns_nstextview_nstextview_isautomaticdatadetectionenabled, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, setAutomaticDataDetectionEnabled, arginfo_appkit_ns_nstextview_nstextview_setautomaticdatadetectionenabled, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, toggleAutomaticDataDetection, arginfo_appkit_ns_nstextview_nstextview_toggleautomaticdatadetection, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, isAutomaticDashSubstitutionEnabled, arginfo_appkit_ns_nstextview_nstextview_isautomaticdashsubstitutionenabled, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, setAutomaticDashSubstitutionEnabled, arginfo_appkit_ns_nstextview_nstextview_setautomaticdashsubstitutionenabled, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, toggleAutomaticDashSubstitution, arginfo_appkit_ns_nstextview_nstextview_toggleautomaticdashsubstitution, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, isAutomaticTextReplacementEnabled, arginfo_appkit_ns_nstextview_nstextview_isautomatictextreplacementenabled, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, setAutomaticTextReplacementEnabled, arginfo_appkit_ns_nstextview_nstextview_setautomatictextreplacementenabled, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, toggleAutomaticTextReplacement, arginfo_appkit_ns_nstextview_nstextview_toggleautomatictextreplacement, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, isAutomaticSpellingCorrectionEnabled, arginfo_appkit_ns_nstextview_nstextview_isautomaticspellingcorrectionenabled, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, setAutomaticSpellingCorrectionEnabled, arginfo_appkit_ns_nstextview_nstextview_setautomaticspellingcorrectionenabled, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, toggleAutomaticSpellingCorrection, arginfo_appkit_ns_nstextview_nstextview_toggleautomaticspellingcorrection, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, enabledTextCheckingTypes, arginfo_appkit_ns_nstextview_nstextview_enabledtextcheckingtypes, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, setEnabledTextCheckingTypes, arginfo_appkit_ns_nstextview_nstextview_setenabledtextcheckingtypes, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, checkTextInRangeTypesOptions, arginfo_appkit_ns_nstextview_nstextview_checktextinrangetypesoptions, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, handleTextCheckingResultsForRangeTypesOptionsOrthographyWordCount, arginfo_appkit_ns_nstextview_nstextview_handletextcheckingresultsforrangetypesoptionsorthographywordcount, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, orderFrontSubstitutionsPanel, arginfo_appkit_ns_nstextview_nstextview_orderfrontsubstitutionspanel, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, checkTextInSelection, arginfo_appkit_ns_nstextview_nstextview_checktextinselection, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, checkTextInDocument, arginfo_appkit_ns_nstextview_nstextview_checktextindocument, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, usesFindPanel, arginfo_appkit_ns_nstextview_nstextview_usesfindpanel, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, setUsesFindPanel, arginfo_appkit_ns_nstextview_nstextview_setusesfindpanel, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, usesFindBar, arginfo_appkit_ns_nstextview_nstextview_usesfindbar, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, setUsesFindBar, arginfo_appkit_ns_nstextview_nstextview_setusesfindbar, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, isIncrementalSearchingEnabled, arginfo_appkit_ns_nstextview_nstextview_isincrementalsearchingenabled, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, setIncrementalSearchingEnabled, arginfo_appkit_ns_nstextview_nstextview_setincrementalsearchingenabled, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, inlinePredictionType, arginfo_appkit_ns_nstextview_nstextview_inlinepredictiontype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, setInlinePredictionType, arginfo_appkit_ns_nstextview_nstextview_setinlinepredictiontype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, mathExpressionCompletionType, arginfo_appkit_ns_nstextview_nstextview_mathexpressioncompletiontype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, setMathExpressionCompletionType, arginfo_appkit_ns_nstextview_nstextview_setmathexpressioncompletiontype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, toggleQuickLookPreviewPanel, arginfo_appkit_ns_nstextview_nstextview_togglequicklookpreviewpanel, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, quickLookPreviewableItemsInRanges, arginfo_appkit_ns_nstextview_nstextview_quicklookpreviewableitemsinranges, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, updateQuickLookPreviewPanel, arginfo_appkit_ns_nstextview_nstextview_updatequicklookpreviewpanel, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, orderFrontSharingServicePicker, arginfo_appkit_ns_nstextview_nstextview_orderfrontsharingservicepicker, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, isAutomaticTextCompletionEnabled, arginfo_appkit_ns_nstextview_nstextview_isautomatictextcompletionenabled, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, setAutomaticTextCompletionEnabled, arginfo_appkit_ns_nstextview_nstextview_setautomatictextcompletionenabled, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, toggleAutomaticTextCompletion, arginfo_appkit_ns_nstextview_nstextview_toggleautomatictextcompletion, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, allowsCharacterPickerTouchBarItem, arginfo_appkit_ns_nstextview_nstextview_allowscharacterpickertouchbaritem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, setAllowsCharacterPickerTouchBarItem, arginfo_appkit_ns_nstextview_nstextview_setallowscharacterpickertouchbaritem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, updateTouchBarItemIdentifiers, arginfo_appkit_ns_nstextview_nstextview_updatetouchbaritemidentifiers, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, updateTextTouchBarItems, arginfo_appkit_ns_nstextview_nstextview_updatetexttouchbaritems, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, updateCandidates, arginfo_appkit_ns_nstextview_nstextview_updatecandidates, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, candidateListTouchBarItem, arginfo_appkit_ns_nstextview_nstextview_candidatelisttouchbaritem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, scrollableTextView, arginfo_appkit_ns_nstextview_nstextview_scrollabletextview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, fieldEditor, arginfo_appkit_ns_nstextview_nstextview_fieldeditor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, scrollableDocumentContentTextView, arginfo_appkit_ns_nstextview_nstextview_scrollabledocumentcontenttextview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, scrollablePlainDocumentContentTextView, arginfo_appkit_ns_nstextview_nstextview_scrollableplaindocumentcontenttextview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, textHighlightAttributes, arginfo_appkit_ns_nstextview_nstextview_texthighlightattributes, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, setTextHighlightAttributes, arginfo_appkit_ns_nstextview_nstextview_settexthighlightattributes, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, drawTextHighlightBackgroundForTextRangeOrigin, arginfo_appkit_ns_nstextview_nstextview_drawtexthighlightbackgroundfortextrangeorigin, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, highlight, arginfo_appkit_ns_nstextview_nstextview_highlight, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
