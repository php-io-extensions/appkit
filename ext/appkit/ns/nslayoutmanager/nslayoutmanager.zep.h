
extern zend_class_entry *appkit_ns_nslayoutmanager_nslayoutmanager_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSLayoutManager_NSLayoutManager);

PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, init);
PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, textStorage);
PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, setTextStorage);
PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, replaceTextStorage);
PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, textContainers);
PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, addTextContainer);
PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, insertTextContainerAtIndex);
PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, removeTextContainerAtIndex);
PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, textContainerChangedGeometry);
PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, textContainerChangedTextView);
PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, delegate);
PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, setDelegate);
PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, showsInvisibleCharacters);
PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, setShowsInvisibleCharacters);
PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, showsControlCharacters);
PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, setShowsControlCharacters);
PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, usesDefaultHyphenation);
PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, setUsesDefaultHyphenation);
PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, usesFontLeading);
PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, setUsesFontLeading);
PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, allowsNonContiguousLayout);
PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, setAllowsNonContiguousLayout);
PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, hasNonContiguousLayout);
PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, limitsLayoutForSuspiciousContents);
PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, setLimitsLayoutForSuspiciousContents);
PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, backgroundLayoutEnabled);
PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, setBackgroundLayoutEnabled);
PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, defaultAttachmentScaling);
PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, setDefaultAttachmentScaling);
PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, typesetter);
PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, setTypesetter);
PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, typesetterBehavior);
PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, setTypesetterBehavior);
PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, invalidateGlyphsForCharacterRangeChangeInLengthActualCharacterRange);
PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, invalidateLayoutForCharacterRangeActualCharacterRange);
PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, invalidateDisplayForCharacterRange);
PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, invalidateDisplayForGlyphRange);
PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, processEditingForTextStorageEditedRangeChangeInLengthInvalidatedRange);
PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, ensureGlyphsForCharacterRange);
PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, ensureGlyphsForGlyphRange);
PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, ensureLayoutForCharacterRange);
PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, ensureLayoutForGlyphRange);
PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, ensureLayoutForTextContainer);
PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, ensureLayoutForBoundingRectInTextContainer);
PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, numberOfGlyphs);
PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, CGGlyphAtIndexIsValidIndex);
PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, CGGlyphAtIndex);
PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, isValidGlyphIndex);
PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, propertyForGlyphAtIndex);
PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, characterIndexForGlyphAtIndex);
PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, glyphIndexForCharacterAtIndex);
PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, setTextContainerForGlyphRange);
PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, setLineFragmentRectForGlyphRangeUsedRect);
PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, setExtraLineFragmentRectUsedRectTextContainer);
PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, setLocationForStartOfGlyphRange);
PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, setNotShownAttributeForGlyphAtIndex);
PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, setDrawsOutsideLineFragmentForGlyphAtIndex);
PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, setAttachmentSizeForGlyphRange);
PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, getFirstUnlaidCharacterIndexGlyphIndex);
PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, firstUnlaidCharacterIndex);
PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, firstUnlaidGlyphIndex);
PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, textContainerForGlyphAtIndexEffectiveRange);
PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, textContainerForGlyphAtIndexEffectiveRangeWithoutAdditionalLayout);
PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, usedRectForTextContainer);
PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, lineFragmentRectForGlyphAtIndexEffectiveRange);
PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, lineFragmentRectForGlyphAtIndexEffectiveRangeWithoutAdditionalLayout);
PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, lineFragmentUsedRectForGlyphAtIndexEffectiveRange);
PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, lineFragmentUsedRectForGlyphAtIndexEffectiveRangeWithoutAdditionalLayout);
PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, extraLineFragmentRect);
PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, extraLineFragmentUsedRect);
PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, extraLineFragmentTextContainer);
PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, locationForGlyphAtIndex);
PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, notShownAttributeForGlyphAtIndex);
PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, drawsOutsideLineFragmentForGlyphAtIndex);
PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, attachmentSizeForGlyphAtIndex);
PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, truncatedGlyphRangeInLineFragmentForGlyphAtIndex);
PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, glyphRangeForCharacterRangeActualCharacterRange);
PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, characterRangeForGlyphRangeActualGlyphRange);
PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, glyphRangeForTextContainer);
PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, rangeOfNominallySpacedGlyphsContainingIndex);
PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, boundingRectForGlyphRangeInTextContainer);
PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, glyphRangeForBoundingRectInTextContainer);
PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, glyphRangeForBoundingRectWithoutAdditionalLayoutInTextContainer);
PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, glyphIndexForPointInTextContainerFractionOfDistanceThroughGlyph);
PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, glyphIndexForPointInTextContainer);
PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, fractionOfDistanceThroughGlyphForPointInTextContainer);
PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, characterIndexForPointInTextContainerFractionOfDistanceBetweenInsertionPoints);
PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, drawBackgroundForGlyphRangeAtPoint);
PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, drawGlyphsForGlyphRangeAtPoint);
PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, drawUnderlineForGlyphRangeUnderlineTypeBaselineOffsetLineFragmentRectLineFragmentGlyphRangeContainerOrigin);
PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, underlineGlyphRangeUnderlineTypeLineFragmentRectLineFragmentGlyphRangeContainerOrigin);
PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, drawStrikethroughForGlyphRangeStrikethroughTypeBaselineOffsetLineFragmentRectLineFragmentGlyphRangeContainerOrigin);
PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, strikethroughGlyphRangeStrikethroughTypeLineFragmentRectLineFragmentGlyphRangeContainerOrigin);
PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, showAttachmentCellInRectCharacterIndex);
PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, setLayoutRectForTextBlockGlyphRange);
PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, setBoundsRectForTextBlockGlyphRange);
PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, layoutRectForTextBlockGlyphRange);
PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, boundsRectForTextBlockGlyphRange);
PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, layoutRectForTextBlockAtIndexEffectiveRange);
PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, boundsRectForTextBlockAtIndexEffectiveRange);
PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, temporaryAttributesAtCharacterIndexEffectiveRange);
PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, setTemporaryAttributesForCharacterRange);
PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, addTemporaryAttributesForCharacterRange);
PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, removeTemporaryAttributeForCharacterRange);
PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, temporaryAttributeAtCharacterIndexEffectiveRange);
PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, temporaryAttributeAtCharacterIndexLongestEffectiveRangeInRange);
PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, temporaryAttributesAtCharacterIndexLongestEffectiveRangeInRange);
PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, addTemporaryAttributeValueForCharacterRange);
PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, defaultLineHeightForFont);
PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, defaultBaselineOffsetForFont);
PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, rulerMarkersForTextViewParagraphStyleRuler);
PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, rulerAccessoryViewForTextViewParagraphStyleRulerEnabled);
PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, layoutManagerOwnsFirstResponderInWindow);
PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, firstTextView);
PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, textViewForBeginningOfSelection);
PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, glyphAtIndexIsValidIndex);
PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, glyphAtIndex);
PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, rectArrayForCharacterRangeWithinSelectedCharacterRangeInTextContainerRectCount);
PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, rectArrayForGlyphRangeWithinSelectedGlyphRangeInTextContainerRectCount);
PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, glyphGenerator);
PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, setGlyphGenerator);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_init, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_textstorage, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_settextstorage, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, textStorage, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_replacetextstorage, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, newTextStorage, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_textcontainers, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_addtextcontainer, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, container, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_inserttextcontaineratindex, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, container, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_removetextcontaineratindex, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_textcontainerchangedgeometry, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, container, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_textcontainerchangedtextview, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, container, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_delegate, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_setdelegate, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, delegate, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_showsinvisiblecharacters, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_setshowsinvisiblecharacters, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, showsInvisibleCharacters, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_showscontrolcharacters, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_setshowscontrolcharacters, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, showsControlCharacters, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_usesdefaulthyphenation, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_setusesdefaulthyphenation, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, usesDefaultHyphenation, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_usesfontleading, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_setusesfontleading, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, usesFontLeading, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_allowsnoncontiguouslayout, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_setallowsnoncontiguouslayout, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, allowsNonContiguousLayout, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_hasnoncontiguouslayout, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_limitslayoutforsuspiciouscontents, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_setlimitslayoutforsuspiciouscontents, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, limitsLayoutForSuspiciousContents, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_backgroundlayoutenabled, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_setbackgroundlayoutenabled, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, backgroundLayoutEnabled, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_defaultattachmentscaling, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_setdefaultattachmentscaling, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, defaultAttachmentScaling, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_typesetter, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_settypesetter, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, typesetter, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_typesetterbehavior, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_settypesetterbehavior, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, typesetterBehavior, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_invalidateglyphsforcharacterrangechangeinlengthactualcharacterrange, 0, 4, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, location, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, length, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, delta, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_invalidatelayoutforcharacterrangeactualcharacterrange, 0, 3, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, location, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, length, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_invalidatedisplayforcharacterrange, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, location, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, length, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_invalidatedisplayforglyphrange, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, location, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, length, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_processeditingfortextstorageeditedrangechangeinlengthinvalidatedrange, 0, 8, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, textStorage, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, editMask, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, location, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, length, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, delta, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, invalidatedLocation, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, invalidatedLength, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_ensureglyphsforcharacterrange, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, location, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, length, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_ensureglyphsforglyphrange, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, location, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, length, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_ensurelayoutforcharacterrange, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, location, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, length, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_ensurelayoutforglyphrange, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, location, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, length, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_ensurelayoutfortextcontainer, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, container, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_ensurelayoutforboundingrectintextcontainer, 0, 6, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, container, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_numberofglyphs, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_cgglyphatindexisvalidindex, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, glyphIndex, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_cgglyphatindex, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, glyphIndex, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_isvalidglyphindex, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, glyphIndex, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_propertyforglyphatindex, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, glyphIndex, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_characterindexforglyphatindex, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, glyphIndex, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_glyphindexforcharacteratindex, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, charIndex, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_settextcontainerforglyphrange, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, container, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, location, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, length, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_setlinefragmentrectforglyphrangeusedrect, 0, 11, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, location, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, length, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, usedX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, usedY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, usedWidth, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, usedHeight, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_setextralinefragmentrectusedrecttextcontainer, 0, 10, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, usedX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, usedY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, usedWidth, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, usedHeight, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, container, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_setlocationforstartofglyphrange, 0, 5, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, location, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, length, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_setnotshownattributeforglyphatindex, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, flag, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, glyphIndex, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_setdrawsoutsidelinefragmentforglyphatindex, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, flag, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, glyphIndex, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_setattachmentsizeforglyphrange, 0, 5, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, location, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, length, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_getfirstunlaidcharacterindexglyphindex, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_firstunlaidcharacterindex, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_firstunlaidglyphindex, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_textcontainerforglyphatindexeffectiverange, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, glyphIndex, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_textcontainerforglyphatindexeffectiverangewithoutadditionallayout, 0, 3, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, glyphIndex, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, flag, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_usedrectfortextcontainer, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, container, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_linefragmentrectforglyphatindexeffectiverange, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, glyphIndex, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_linefragmentrectforglyphatindexeffectiverangewithoutadditionallayout, 0, 3, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, glyphIndex, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, flag, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_linefragmentusedrectforglyphatindexeffectiverange, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, glyphIndex, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_linefragmentusedrectforglyphatindexeffectiverangewithoutadditionallayout, 0, 3, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, glyphIndex, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, flag, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_extralinefragmentrect, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_extralinefragmentusedrect, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_extralinefragmenttextcontainer, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_locationforglyphatindex, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, glyphIndex, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_notshownattributeforglyphatindex, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, glyphIndex, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_drawsoutsidelinefragmentforglyphatindex, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, glyphIndex, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_attachmentsizeforglyphatindex, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, glyphIndex, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_truncatedglyphrangeinlinefragmentforglyphatindex, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, glyphIndex, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_glyphrangeforcharacterrangeactualcharacterrange, 0, 3, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, location, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, length, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_characterrangeforglyphrangeactualglyphrange, 0, 3, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, location, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, length, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_glyphrangefortextcontainer, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, container, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_rangeofnominallyspacedglyphscontainingindex, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, glyphIndex, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_boundingrectforglyphrangeintextcontainer, 0, 4, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, location, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, length, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, container, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_glyphrangeforboundingrectintextcontainer, 0, 6, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, container, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_glyphrangeforboundingrectwithoutadditionallayoutintextcontainer, 0, 6, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, container, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_glyphindexforpointintextcontainerfractionofdistancethroughglyph, 0, 4, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, container, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_glyphindexforpointintextcontainer, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, container, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_fractionofdistancethroughglyphforpointintextcontainer, 0, 4, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, container, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_characterindexforpointintextcontainerfractionofdistancebetweeninsertionpoints, 0, 4, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, container, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_drawbackgroundforglyphrangeatpoint, 0, 5, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, location, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, length, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_drawglyphsforglyphrangeatpoint, 0, 5, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, location, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, length, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_drawunderlineforglyphrangeunderlinetypebaselineoffsetlinefragmentrectlinefragmentglyphrangecontainerorigin, 0, 13, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, location, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, length, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, underlineVal, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, baselineOffset, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, lineLocation, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, lineLength, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, originX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, originY, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_underlineglyphrangeunderlinetypelinefragmentrectlinefragmentglyphrangecontainerorigin, 0, 12, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, location, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, length, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, underlineVal, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, lineLocation, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, lineLength, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, originX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, originY, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_drawstrikethroughforglyphrangestrikethroughtypebaselineoffsetlinefragmentrectlinefragmentglyphrangecontainerorigin, 0, 13, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, location, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, length, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, strikethroughVal, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, baselineOffset, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, lineLocation, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, lineLength, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, originX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, originY, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_strikethroughglyphrangestrikethroughtypelinefragmentrectlinefragmentglyphrangecontainerorigin, 0, 12, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, location, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, length, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, strikethroughVal, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, lineLocation, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, lineLength, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, originX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, originY, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_showattachmentcellinrectcharacterindex, 0, 7, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, attachmentIndex, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_setlayoutrectfortextblockglyphrange, 0, 8, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, block, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, location, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, length, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_setboundsrectfortextblockglyphrange, 0, 8, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, block, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, location, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, length, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_layoutrectfortextblockglyphrange, 0, 4, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, block, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, location, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, length, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_boundsrectfortextblockglyphrange, 0, 4, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, block, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, location, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, length, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_layoutrectfortextblockatindexeffectiverange, 0, 3, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, block, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, glyphIndex, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_boundsrectfortextblockatindexeffectiverange, 0, 3, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, block, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, glyphIndex, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_temporaryattributesatcharacterindexeffectiverange, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, charIndex, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_settemporaryattributesforcharacterrange, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, attrs)
	ZEND_ARG_TYPE_INFO(0, location, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, length, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_addtemporaryattributesforcharacterrange, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, attrs)
	ZEND_ARG_TYPE_INFO(0, location, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, length, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_removetemporaryattributeforcharacterrange, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, attrName, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, location, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, length, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_temporaryattributeatcharacterindexeffectiverange, 0, 3, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, attrName, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, location, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_temporaryattributeatcharacterindexlongesteffectiverangeinrange, 0, 5, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, attrName, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, location, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rangeLimitLocation, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rangeLimitLength, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_temporaryattributesatcharacterindexlongesteffectiverangeinrange, 0, 4, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, location, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rangeLimitLocation, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rangeLimitLength, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_addtemporaryattributevalueforcharacterrange, 0, 5, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, attrName, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, location, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, length, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_defaultlineheightforfont, 0, 2, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, theFont, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_defaultbaselineoffsetforfont, 0, 2, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, theFont, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_rulermarkersfortextviewparagraphstyleruler, 0, 4, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, view, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, style, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, ruler, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_ruleraccessoryviewfortextviewparagraphstylerulerenabled, 0, 5, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, view, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, style, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, ruler, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, isEnabled, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_layoutmanagerownsfirstresponderinwindow, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, window, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_firsttextview, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_textviewforbeginningofselection, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_glyphatindexisvalidindex, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, glyphIndex, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_glyphatindex, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, glyphIndex, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_rectarrayforcharacterrangewithinselectedcharacterrangeintextcontainerrectcount, 0, 6, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, location, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, length, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selLocation, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selLength, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, container, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_rectarrayforglyphrangewithinselectedglyphrangeintextcontainerrectcount, 0, 6, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, location, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, length, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selLocation, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selLength, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, container, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_glyphgenerator, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_setglyphgenerator, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, glyphGenerator, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nslayoutmanager_nslayoutmanager_method_entry) {
	PHP_ME(AppKit_NS_NSLayoutManager_NSLayoutManager, init, arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_init, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutManager_NSLayoutManager, textStorage, arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_textstorage, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutManager_NSLayoutManager, setTextStorage, arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_settextstorage, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutManager_NSLayoutManager, replaceTextStorage, arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_replacetextstorage, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutManager_NSLayoutManager, textContainers, arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_textcontainers, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutManager_NSLayoutManager, addTextContainer, arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_addtextcontainer, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutManager_NSLayoutManager, insertTextContainerAtIndex, arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_inserttextcontaineratindex, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutManager_NSLayoutManager, removeTextContainerAtIndex, arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_removetextcontaineratindex, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutManager_NSLayoutManager, textContainerChangedGeometry, arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_textcontainerchangedgeometry, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutManager_NSLayoutManager, textContainerChangedTextView, arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_textcontainerchangedtextview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutManager_NSLayoutManager, delegate, arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_delegate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutManager_NSLayoutManager, setDelegate, arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_setdelegate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutManager_NSLayoutManager, showsInvisibleCharacters, arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_showsinvisiblecharacters, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutManager_NSLayoutManager, setShowsInvisibleCharacters, arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_setshowsinvisiblecharacters, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutManager_NSLayoutManager, showsControlCharacters, arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_showscontrolcharacters, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutManager_NSLayoutManager, setShowsControlCharacters, arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_setshowscontrolcharacters, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutManager_NSLayoutManager, usesDefaultHyphenation, arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_usesdefaulthyphenation, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutManager_NSLayoutManager, setUsesDefaultHyphenation, arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_setusesdefaulthyphenation, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutManager_NSLayoutManager, usesFontLeading, arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_usesfontleading, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutManager_NSLayoutManager, setUsesFontLeading, arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_setusesfontleading, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutManager_NSLayoutManager, allowsNonContiguousLayout, arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_allowsnoncontiguouslayout, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutManager_NSLayoutManager, setAllowsNonContiguousLayout, arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_setallowsnoncontiguouslayout, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutManager_NSLayoutManager, hasNonContiguousLayout, arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_hasnoncontiguouslayout, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutManager_NSLayoutManager, limitsLayoutForSuspiciousContents, arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_limitslayoutforsuspiciouscontents, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutManager_NSLayoutManager, setLimitsLayoutForSuspiciousContents, arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_setlimitslayoutforsuspiciouscontents, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutManager_NSLayoutManager, backgroundLayoutEnabled, arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_backgroundlayoutenabled, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutManager_NSLayoutManager, setBackgroundLayoutEnabled, arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_setbackgroundlayoutenabled, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutManager_NSLayoutManager, defaultAttachmentScaling, arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_defaultattachmentscaling, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutManager_NSLayoutManager, setDefaultAttachmentScaling, arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_setdefaultattachmentscaling, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutManager_NSLayoutManager, typesetter, arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_typesetter, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutManager_NSLayoutManager, setTypesetter, arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_settypesetter, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutManager_NSLayoutManager, typesetterBehavior, arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_typesetterbehavior, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutManager_NSLayoutManager, setTypesetterBehavior, arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_settypesetterbehavior, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutManager_NSLayoutManager, invalidateGlyphsForCharacterRangeChangeInLengthActualCharacterRange, arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_invalidateglyphsforcharacterrangechangeinlengthactualcharacterrange, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutManager_NSLayoutManager, invalidateLayoutForCharacterRangeActualCharacterRange, arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_invalidatelayoutforcharacterrangeactualcharacterrange, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutManager_NSLayoutManager, invalidateDisplayForCharacterRange, arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_invalidatedisplayforcharacterrange, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutManager_NSLayoutManager, invalidateDisplayForGlyphRange, arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_invalidatedisplayforglyphrange, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutManager_NSLayoutManager, processEditingForTextStorageEditedRangeChangeInLengthInvalidatedRange, arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_processeditingfortextstorageeditedrangechangeinlengthinvalidatedrange, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutManager_NSLayoutManager, ensureGlyphsForCharacterRange, arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_ensureglyphsforcharacterrange, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutManager_NSLayoutManager, ensureGlyphsForGlyphRange, arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_ensureglyphsforglyphrange, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutManager_NSLayoutManager, ensureLayoutForCharacterRange, arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_ensurelayoutforcharacterrange, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutManager_NSLayoutManager, ensureLayoutForGlyphRange, arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_ensurelayoutforglyphrange, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutManager_NSLayoutManager, ensureLayoutForTextContainer, arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_ensurelayoutfortextcontainer, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutManager_NSLayoutManager, ensureLayoutForBoundingRectInTextContainer, arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_ensurelayoutforboundingrectintextcontainer, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutManager_NSLayoutManager, numberOfGlyphs, arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_numberofglyphs, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutManager_NSLayoutManager, CGGlyphAtIndexIsValidIndex, arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_cgglyphatindexisvalidindex, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutManager_NSLayoutManager, CGGlyphAtIndex, arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_cgglyphatindex, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutManager_NSLayoutManager, isValidGlyphIndex, arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_isvalidglyphindex, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutManager_NSLayoutManager, propertyForGlyphAtIndex, arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_propertyforglyphatindex, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutManager_NSLayoutManager, characterIndexForGlyphAtIndex, arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_characterindexforglyphatindex, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutManager_NSLayoutManager, glyphIndexForCharacterAtIndex, arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_glyphindexforcharacteratindex, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutManager_NSLayoutManager, setTextContainerForGlyphRange, arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_settextcontainerforglyphrange, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutManager_NSLayoutManager, setLineFragmentRectForGlyphRangeUsedRect, arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_setlinefragmentrectforglyphrangeusedrect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutManager_NSLayoutManager, setExtraLineFragmentRectUsedRectTextContainer, arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_setextralinefragmentrectusedrecttextcontainer, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutManager_NSLayoutManager, setLocationForStartOfGlyphRange, arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_setlocationforstartofglyphrange, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutManager_NSLayoutManager, setNotShownAttributeForGlyphAtIndex, arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_setnotshownattributeforglyphatindex, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutManager_NSLayoutManager, setDrawsOutsideLineFragmentForGlyphAtIndex, arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_setdrawsoutsidelinefragmentforglyphatindex, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutManager_NSLayoutManager, setAttachmentSizeForGlyphRange, arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_setattachmentsizeforglyphrange, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutManager_NSLayoutManager, getFirstUnlaidCharacterIndexGlyphIndex, arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_getfirstunlaidcharacterindexglyphindex, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutManager_NSLayoutManager, firstUnlaidCharacterIndex, arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_firstunlaidcharacterindex, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutManager_NSLayoutManager, firstUnlaidGlyphIndex, arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_firstunlaidglyphindex, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutManager_NSLayoutManager, textContainerForGlyphAtIndexEffectiveRange, arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_textcontainerforglyphatindexeffectiverange, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutManager_NSLayoutManager, textContainerForGlyphAtIndexEffectiveRangeWithoutAdditionalLayout, arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_textcontainerforglyphatindexeffectiverangewithoutadditionallayout, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutManager_NSLayoutManager, usedRectForTextContainer, arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_usedrectfortextcontainer, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutManager_NSLayoutManager, lineFragmentRectForGlyphAtIndexEffectiveRange, arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_linefragmentrectforglyphatindexeffectiverange, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutManager_NSLayoutManager, lineFragmentRectForGlyphAtIndexEffectiveRangeWithoutAdditionalLayout, arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_linefragmentrectforglyphatindexeffectiverangewithoutadditionallayout, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutManager_NSLayoutManager, lineFragmentUsedRectForGlyphAtIndexEffectiveRange, arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_linefragmentusedrectforglyphatindexeffectiverange, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutManager_NSLayoutManager, lineFragmentUsedRectForGlyphAtIndexEffectiveRangeWithoutAdditionalLayout, arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_linefragmentusedrectforglyphatindexeffectiverangewithoutadditionallayout, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutManager_NSLayoutManager, extraLineFragmentRect, arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_extralinefragmentrect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutManager_NSLayoutManager, extraLineFragmentUsedRect, arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_extralinefragmentusedrect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutManager_NSLayoutManager, extraLineFragmentTextContainer, arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_extralinefragmenttextcontainer, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutManager_NSLayoutManager, locationForGlyphAtIndex, arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_locationforglyphatindex, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutManager_NSLayoutManager, notShownAttributeForGlyphAtIndex, arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_notshownattributeforglyphatindex, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutManager_NSLayoutManager, drawsOutsideLineFragmentForGlyphAtIndex, arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_drawsoutsidelinefragmentforglyphatindex, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutManager_NSLayoutManager, attachmentSizeForGlyphAtIndex, arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_attachmentsizeforglyphatindex, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutManager_NSLayoutManager, truncatedGlyphRangeInLineFragmentForGlyphAtIndex, arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_truncatedglyphrangeinlinefragmentforglyphatindex, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutManager_NSLayoutManager, glyphRangeForCharacterRangeActualCharacterRange, arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_glyphrangeforcharacterrangeactualcharacterrange, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutManager_NSLayoutManager, characterRangeForGlyphRangeActualGlyphRange, arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_characterrangeforglyphrangeactualglyphrange, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutManager_NSLayoutManager, glyphRangeForTextContainer, arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_glyphrangefortextcontainer, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutManager_NSLayoutManager, rangeOfNominallySpacedGlyphsContainingIndex, arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_rangeofnominallyspacedglyphscontainingindex, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutManager_NSLayoutManager, boundingRectForGlyphRangeInTextContainer, arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_boundingrectforglyphrangeintextcontainer, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutManager_NSLayoutManager, glyphRangeForBoundingRectInTextContainer, arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_glyphrangeforboundingrectintextcontainer, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutManager_NSLayoutManager, glyphRangeForBoundingRectWithoutAdditionalLayoutInTextContainer, arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_glyphrangeforboundingrectwithoutadditionallayoutintextcontainer, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutManager_NSLayoutManager, glyphIndexForPointInTextContainerFractionOfDistanceThroughGlyph, arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_glyphindexforpointintextcontainerfractionofdistancethroughglyph, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutManager_NSLayoutManager, glyphIndexForPointInTextContainer, arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_glyphindexforpointintextcontainer, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutManager_NSLayoutManager, fractionOfDistanceThroughGlyphForPointInTextContainer, arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_fractionofdistancethroughglyphforpointintextcontainer, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutManager_NSLayoutManager, characterIndexForPointInTextContainerFractionOfDistanceBetweenInsertionPoints, arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_characterindexforpointintextcontainerfractionofdistancebetweeninsertionpoints, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutManager_NSLayoutManager, drawBackgroundForGlyphRangeAtPoint, arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_drawbackgroundforglyphrangeatpoint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutManager_NSLayoutManager, drawGlyphsForGlyphRangeAtPoint, arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_drawglyphsforglyphrangeatpoint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutManager_NSLayoutManager, drawUnderlineForGlyphRangeUnderlineTypeBaselineOffsetLineFragmentRectLineFragmentGlyphRangeContainerOrigin, arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_drawunderlineforglyphrangeunderlinetypebaselineoffsetlinefragmentrectlinefragmentglyphrangecontainerorigin, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutManager_NSLayoutManager, underlineGlyphRangeUnderlineTypeLineFragmentRectLineFragmentGlyphRangeContainerOrigin, arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_underlineglyphrangeunderlinetypelinefragmentrectlinefragmentglyphrangecontainerorigin, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutManager_NSLayoutManager, drawStrikethroughForGlyphRangeStrikethroughTypeBaselineOffsetLineFragmentRectLineFragmentGlyphRangeContainerOrigin, arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_drawstrikethroughforglyphrangestrikethroughtypebaselineoffsetlinefragmentrectlinefragmentglyphrangecontainerorigin, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutManager_NSLayoutManager, strikethroughGlyphRangeStrikethroughTypeLineFragmentRectLineFragmentGlyphRangeContainerOrigin, arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_strikethroughglyphrangestrikethroughtypelinefragmentrectlinefragmentglyphrangecontainerorigin, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutManager_NSLayoutManager, showAttachmentCellInRectCharacterIndex, arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_showattachmentcellinrectcharacterindex, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutManager_NSLayoutManager, setLayoutRectForTextBlockGlyphRange, arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_setlayoutrectfortextblockglyphrange, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutManager_NSLayoutManager, setBoundsRectForTextBlockGlyphRange, arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_setboundsrectfortextblockglyphrange, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutManager_NSLayoutManager, layoutRectForTextBlockGlyphRange, arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_layoutrectfortextblockglyphrange, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutManager_NSLayoutManager, boundsRectForTextBlockGlyphRange, arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_boundsrectfortextblockglyphrange, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutManager_NSLayoutManager, layoutRectForTextBlockAtIndexEffectiveRange, arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_layoutrectfortextblockatindexeffectiverange, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutManager_NSLayoutManager, boundsRectForTextBlockAtIndexEffectiveRange, arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_boundsrectfortextblockatindexeffectiverange, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutManager_NSLayoutManager, temporaryAttributesAtCharacterIndexEffectiveRange, arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_temporaryattributesatcharacterindexeffectiverange, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutManager_NSLayoutManager, setTemporaryAttributesForCharacterRange, arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_settemporaryattributesforcharacterrange, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutManager_NSLayoutManager, addTemporaryAttributesForCharacterRange, arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_addtemporaryattributesforcharacterrange, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutManager_NSLayoutManager, removeTemporaryAttributeForCharacterRange, arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_removetemporaryattributeforcharacterrange, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutManager_NSLayoutManager, temporaryAttributeAtCharacterIndexEffectiveRange, arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_temporaryattributeatcharacterindexeffectiverange, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutManager_NSLayoutManager, temporaryAttributeAtCharacterIndexLongestEffectiveRangeInRange, arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_temporaryattributeatcharacterindexlongesteffectiverangeinrange, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutManager_NSLayoutManager, temporaryAttributesAtCharacterIndexLongestEffectiveRangeInRange, arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_temporaryattributesatcharacterindexlongesteffectiverangeinrange, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutManager_NSLayoutManager, addTemporaryAttributeValueForCharacterRange, arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_addtemporaryattributevalueforcharacterrange, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutManager_NSLayoutManager, defaultLineHeightForFont, arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_defaultlineheightforfont, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutManager_NSLayoutManager, defaultBaselineOffsetForFont, arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_defaultbaselineoffsetforfont, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutManager_NSLayoutManager, rulerMarkersForTextViewParagraphStyleRuler, arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_rulermarkersfortextviewparagraphstyleruler, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutManager_NSLayoutManager, rulerAccessoryViewForTextViewParagraphStyleRulerEnabled, arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_ruleraccessoryviewfortextviewparagraphstylerulerenabled, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutManager_NSLayoutManager, layoutManagerOwnsFirstResponderInWindow, arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_layoutmanagerownsfirstresponderinwindow, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutManager_NSLayoutManager, firstTextView, arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_firsttextview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutManager_NSLayoutManager, textViewForBeginningOfSelection, arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_textviewforbeginningofselection, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutManager_NSLayoutManager, glyphAtIndexIsValidIndex, arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_glyphatindexisvalidindex, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutManager_NSLayoutManager, glyphAtIndex, arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_glyphatindex, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutManager_NSLayoutManager, rectArrayForCharacterRangeWithinSelectedCharacterRangeInTextContainerRectCount, arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_rectarrayforcharacterrangewithinselectedcharacterrangeintextcontainerrectcount, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutManager_NSLayoutManager, rectArrayForGlyphRangeWithinSelectedGlyphRangeInTextContainerRectCount, arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_rectarrayforglyphrangewithinselectedglyphrangeintextcontainerrectcount, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutManager_NSLayoutManager, glyphGenerator, arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_glyphgenerator, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutManager_NSLayoutManager, setGlyphGenerator, arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_setglyphgenerator, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
