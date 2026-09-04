#ifndef PHP_APPKIT_NS_LAYOUTMANAGER_H
#define PHP_APPKIT_NS_LAYOUTMANAGER_H

/*
 * Faithful 1:1 binding of AppKit NSLayoutManager.h. Every member of
 * the class (base interface + NSTextViewSupport +
 * NSLayoutManagerDeprecated + NSGlyphGeneration) is either bound or
 * reserved. Nothing is omitted. The NSLayoutManagerDelegate protocol
 * and the same-file NSTextLayoutOrientationProvider protocol are not
 * class members. Enums, glyph-attribute constants, and
 * NSGlyphInscription are not class members. Inherited NSObject
 * members stay on that class. Live construction is init (alloc+init
 * glue).
 *
 * NSCoder, blocks, C glyph/rect/position buffers, CGAffineTransform,
 * CGContextRef, and API_DEPRECATED members (including the deprecated
 * usesScreenFonts / hyphenationFactor properties) are reserved.
 * Comment-only soft-deprecated glyphAtIndex: / rectArrayFor… stay
 * bound. NSRectArray returns marshal as a list of rect assoc arrays
 * via ns_ret_rect (rectCount is the list length). Scalar /
 * NSRangePointer / BOOL* / CGFloat* out-params fold into an assoc
 * array. NSDictionary attribute bags and id values cross as handles;
 * NSArray of objects as handles. NSRange / NSRect / NSPoint / NSSize
 * follow the struct convention. Nullable objects cross as int
 * handles (0 = nil). CGGlyph / NSGlyph / NSUInteger / enums cross as
 * int; CGFloat as double. Flattened collisions keep unique names
 * (CGGlyphAtIndex / CGGlyphAtIndexIsValidIndex, the
 * withoutAdditionalLayout variants, the two temporary-attribute
 * pairs, glyphIndexForPointInTextContainer vs the fraction form,
 * layout/bounds rect forTextBlock glyphRange vs atIndex).
 */

#include "php.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ---- Initialization ---- */

/*@zep NS\NSLayoutManager init() -> int */
zend_long ns_nslayoutmanager_init(void);
/*@reserved NS\NSLayoutManager - (nullable instancetype)initWithCoder:(NSCoder *)coder NS_DESIGNATED_INITIALIZER; */

/* ---- Text storage ---- */

/*@zep NS\NSLayoutManager textStorage(int handle) -> int */
zend_long ns_nslayoutmanager_text_storage(zval *handle);
/*@zep NS\NSLayoutManager setTextStorage(int handle, int textStorage) -> void */
void ns_nslayoutmanager_set_text_storage(zval *handle, zval *textStorage);

/*@zep NS\NSLayoutManager replaceTextStorage(int handle, int newTextStorage) -> void */
void ns_nslayoutmanager_replace_text_storage(zval *handle, zval *newTextStorage);

/* ---- Text containers ---- */

/*@zep NS\NSLayoutManager textContainers(int handle) -> array */
void ns_nslayoutmanager_text_containers(zval *return_value, zval *handle);

/*@zep NS\NSLayoutManager addTextContainer(int handle, int container) -> void */
void ns_nslayoutmanager_add_text_container(zval *handle, zval *container);

/*@zep NS\NSLayoutManager insertTextContainerAtIndex(int handle, int container, int index) -> void */
void ns_nslayoutmanager_insert_text_container_at_index(zval *handle, zval *container, zval *index);

/*@zep NS\NSLayoutManager removeTextContainerAtIndex(int handle, int index) -> void */
void ns_nslayoutmanager_remove_text_container_at_index(zval *handle, zval *index);

/*@zep NS\NSLayoutManager textContainerChangedGeometry(int handle, int container) -> void */
void ns_nslayoutmanager_text_container_changed_geometry(zval *handle, zval *container);

/*@zep NS\NSLayoutManager textContainerChangedTextView(int handle, int container) -> void */
void ns_nslayoutmanager_text_container_changed_text_view(zval *handle, zval *container);

/* ---- Delegate ---- */

/*@zep NS\NSLayoutManager delegate(int handle) -> int */
zend_long ns_nslayoutmanager_delegate(zval *handle);
/*@zep NS\NSLayoutManager setDelegate(int handle, int delegate) -> void */
void ns_nslayoutmanager_set_delegate(zval *handle, zval *delegate);

/* ---- Global layout manager options ---- */

/*@zep NS\NSLayoutManager showsInvisibleCharacters(int handle) -> bool */
zend_long ns_nslayoutmanager_shows_invisible_characters(zval *handle);
/*@zep NS\NSLayoutManager setShowsInvisibleCharacters(int handle, bool showsInvisibleCharacters) -> void */
void ns_nslayoutmanager_set_shows_invisible_characters(zval *handle, zval *showsInvisibleCharacters);

/*@zep NS\NSLayoutManager showsControlCharacters(int handle) -> bool */
zend_long ns_nslayoutmanager_shows_control_characters(zval *handle);
/*@zep NS\NSLayoutManager setShowsControlCharacters(int handle, bool showsControlCharacters) -> void */
void ns_nslayoutmanager_set_shows_control_characters(zval *handle, zval *showsControlCharacters);

/*@zep NS\NSLayoutManager usesDefaultHyphenation(int handle) -> bool */
zend_long ns_nslayoutmanager_uses_default_hyphenation(zval *handle);
/*@zep NS\NSLayoutManager setUsesDefaultHyphenation(int handle, bool usesDefaultHyphenation) -> void */
void ns_nslayoutmanager_set_uses_default_hyphenation(zval *handle, zval *usesDefaultHyphenation);

/*@zep NS\NSLayoutManager usesFontLeading(int handle) -> bool */
zend_long ns_nslayoutmanager_uses_font_leading(zval *handle);
/*@zep NS\NSLayoutManager setUsesFontLeading(int handle, bool usesFontLeading) -> void */
void ns_nslayoutmanager_set_uses_font_leading(zval *handle, zval *usesFontLeading);

/*@zep NS\NSLayoutManager allowsNonContiguousLayout(int handle) -> bool */
zend_long ns_nslayoutmanager_allows_non_contiguous_layout(zval *handle);
/*@zep NS\NSLayoutManager setAllowsNonContiguousLayout(int handle, bool allowsNonContiguousLayout) -> void */
void ns_nslayoutmanager_set_allows_non_contiguous_layout(zval *handle, zval *allowsNonContiguousLayout);

/*@zep NS\NSLayoutManager hasNonContiguousLayout(int handle) -> bool */
zend_long ns_nslayoutmanager_has_non_contiguous_layout(zval *handle);

/*@zep NS\NSLayoutManager limitsLayoutForSuspiciousContents(int handle) -> bool */
zend_long ns_nslayoutmanager_limits_layout_for_suspicious_contents(zval *handle);
/*@zep NS\NSLayoutManager setLimitsLayoutForSuspiciousContents(int handle, bool limitsLayoutForSuspiciousContents) -> void */
void ns_nslayoutmanager_set_limits_layout_for_suspicious_contents(zval *handle, zval *limitsLayoutForSuspiciousContents);

/*@zep NS\NSLayoutManager backgroundLayoutEnabled(int handle) -> bool */
zend_long ns_nslayoutmanager_background_layout_enabled(zval *handle);
/*@zep NS\NSLayoutManager setBackgroundLayoutEnabled(int handle, bool backgroundLayoutEnabled) -> void */
void ns_nslayoutmanager_set_background_layout_enabled(zval *handle, zval *backgroundLayoutEnabled);

/*@zep NS\NSLayoutManager defaultAttachmentScaling(int handle) -> int */
zend_long ns_nslayoutmanager_default_attachment_scaling(zval *handle);
/*@zep NS\NSLayoutManager setDefaultAttachmentScaling(int handle, int defaultAttachmentScaling) -> void */
void ns_nslayoutmanager_set_default_attachment_scaling(zval *handle, zval *defaultAttachmentScaling);

/* ---- Typesetter ---- */

/*@zep NS\NSLayoutManager typesetter(int handle) -> int */
zend_long ns_nslayoutmanager_typesetter(zval *handle);
/*@zep NS\NSLayoutManager setTypesetter(int handle, int typesetter) -> void */
void ns_nslayoutmanager_set_typesetter(zval *handle, zval *typesetter);

/*@zep NS\NSLayoutManager typesetterBehavior(int handle) -> int */
zend_long ns_nslayoutmanager_typesetter_behavior(zval *handle);
/*@zep NS\NSLayoutManager setTypesetterBehavior(int handle, int typesetterBehavior) -> void */
void ns_nslayoutmanager_set_typesetter_behavior(zval *handle, zval *typesetterBehavior);

/* ---- Invalidation ---- */

/*@zep NS\NSLayoutManager invalidateGlyphsForCharacterRangeChangeInLengthActualCharacterRange(int handle, int location, int length, int delta) -> array */
void ns_nslayoutmanager_invalidate_glyphs_for_character_range_change_in_length_actual_character_range(zval *return_value, zval *handle, zval *location, zval *length, zval *delta);

/*@zep NS\NSLayoutManager invalidateLayoutForCharacterRangeActualCharacterRange(int handle, int location, int length) -> array */
void ns_nslayoutmanager_invalidate_layout_for_character_range_actual_character_range(zval *return_value, zval *handle, zval *location, zval *length);

/*@zep NS\NSLayoutManager invalidateDisplayForCharacterRange(int handle, int location, int length) -> void */
void ns_nslayoutmanager_invalidate_display_for_character_range(zval *handle, zval *location, zval *length);

/*@zep NS\NSLayoutManager invalidateDisplayForGlyphRange(int handle, int location, int length) -> void */
void ns_nslayoutmanager_invalidate_display_for_glyph_range(zval *handle, zval *location, zval *length);

/*@zep NS\NSLayoutManager processEditingForTextStorageEditedRangeChangeInLengthInvalidatedRange(int handle, int textStorage, int editMask, int location, int length, int delta, int invalidatedLocation, int invalidatedLength) -> void */
void ns_nslayoutmanager_process_editing_for_text_storage_edited_range_change_in_length_invalidated_range(zval *handle, zval *textStorage, zval *editMask, zval *location, zval *length, zval *delta, zval *invalidatedLocation, zval *invalidatedLength);

/* ---- Causing glyph generation and layout ---- */

/*@zep NS\NSLayoutManager ensureGlyphsForCharacterRange(int handle, int location, int length) -> void */
void ns_nslayoutmanager_ensure_glyphs_for_character_range(zval *handle, zval *location, zval *length);

/*@zep NS\NSLayoutManager ensureGlyphsForGlyphRange(int handle, int location, int length) -> void */
void ns_nslayoutmanager_ensure_glyphs_for_glyph_range(zval *handle, zval *location, zval *length);

/*@zep NS\NSLayoutManager ensureLayoutForCharacterRange(int handle, int location, int length) -> void */
void ns_nslayoutmanager_ensure_layout_for_character_range(zval *handle, zval *location, zval *length);

/*@zep NS\NSLayoutManager ensureLayoutForGlyphRange(int handle, int location, int length) -> void */
void ns_nslayoutmanager_ensure_layout_for_glyph_range(zval *handle, zval *location, zval *length);

/*@zep NS\NSLayoutManager ensureLayoutForTextContainer(int handle, int container) -> void */
void ns_nslayoutmanager_ensure_layout_for_text_container(zval *handle, zval *container);

/*@zep NS\NSLayoutManager ensureLayoutForBoundingRectInTextContainer(int handle, double x, double y, double width, double height, int container) -> void */
void ns_nslayoutmanager_ensure_layout_for_bounding_rect_in_text_container(zval *handle, zval *x, zval *y, zval *width, zval *height, zval *container);

/* ---- Set glyphs and glyph properties ---- */

/*@reserved NS\NSLayoutManager - (void)setGlyphs:(const CGGlyph *)glyphs properties:(const NSGlyphProperty *)props characterIndexes:(const NSUInteger *)charIndexes font:(NSFont *)aFont forGlyphRange:(NSRange)glyphRange — C glyph/property/index buffers */

/* ---- Get glyphs and glyph properties ---- */

/*@zep NS\NSLayoutManager numberOfGlyphs(int handle) -> int */
zend_long ns_nslayoutmanager_number_of_glyphs(zval *handle);

/*@zep NS\NSLayoutManager CGGlyphAtIndexIsValidIndex(int handle, int glyphIndex) -> array */
void ns_nslayoutmanager_cg_glyph_at_index_is_valid_index(zval *return_value, zval *handle, zval *glyphIndex);

/*@zep NS\NSLayoutManager CGGlyphAtIndex(int handle, int glyphIndex) -> int */
zend_long ns_nslayoutmanager_cg_glyph_at_index(zval *handle, zval *glyphIndex);

/*@zep NS\NSLayoutManager isValidGlyphIndex(int handle, int glyphIndex) -> bool */
zend_long ns_nslayoutmanager_is_valid_glyph_index(zval *handle, zval *glyphIndex);

/*@zep NS\NSLayoutManager propertyForGlyphAtIndex(int handle, int glyphIndex) -> int */
zend_long ns_nslayoutmanager_property_for_glyph_at_index(zval *handle, zval *glyphIndex);

/*@zep NS\NSLayoutManager characterIndexForGlyphAtIndex(int handle, int glyphIndex) -> int */
zend_long ns_nslayoutmanager_character_index_for_glyph_at_index(zval *handle, zval *glyphIndex);

/*@zep NS\NSLayoutManager glyphIndexForCharacterAtIndex(int handle, int charIndex) -> int */
zend_long ns_nslayoutmanager_glyph_index_for_character_at_index(zval *handle, zval *charIndex);

/*@reserved NS\NSLayoutManager - (NSUInteger)getGlyphsInRange:(NSRange)glyphRange glyphs:(nullable CGGlyph *)glyphBuffer properties:(nullable NSGlyphProperty *)props characterIndexes:(nullable NSUInteger *)charIndexBuffer bidiLevels:(nullable unsigned char *)bidiLevelBuffer — C out-buffers */

/* ---- Set layout information ---- */

/*@zep NS\NSLayoutManager setTextContainerForGlyphRange(int handle, int container, int location, int length) -> void */
void ns_nslayoutmanager_set_text_container_for_glyph_range(zval *handle, zval *container, zval *location, zval *length);

/*@zep NS\NSLayoutManager setLineFragmentRectForGlyphRangeUsedRect(int handle, double x, double y, double width, double height, int location, int length, double usedX, double usedY, double usedWidth, double usedHeight) -> void */
void ns_nslayoutmanager_set_line_fragment_rect_for_glyph_range_used_rect(zval *handle, zval *x, zval *y, zval *width, zval *height, zval *location, zval *length, zval *usedX, zval *usedY, zval *usedWidth, zval *usedHeight);

/*@zep NS\NSLayoutManager setExtraLineFragmentRectUsedRectTextContainer(int handle, double x, double y, double width, double height, double usedX, double usedY, double usedWidth, double usedHeight, int container) -> void */
void ns_nslayoutmanager_set_extra_line_fragment_rect_used_rect_text_container(zval *handle, zval *x, zval *y, zval *width, zval *height, zval *usedX, zval *usedY, zval *usedWidth, zval *usedHeight, zval *container);

/*@zep NS\NSLayoutManager setLocationForStartOfGlyphRange(int handle, double x, double y, int location, int length) -> void */
void ns_nslayoutmanager_set_location_for_start_of_glyph_range(zval *handle, zval *x, zval *y, zval *location, zval *length);

/*@zep NS\NSLayoutManager setNotShownAttributeForGlyphAtIndex(int handle, bool flag, int glyphIndex) -> void */
void ns_nslayoutmanager_set_not_shown_attribute_for_glyph_at_index(zval *handle, zval *flag, zval *glyphIndex);

/*@zep NS\NSLayoutManager setDrawsOutsideLineFragmentForGlyphAtIndex(int handle, bool flag, int glyphIndex) -> void */
void ns_nslayoutmanager_set_draws_outside_line_fragment_for_glyph_at_index(zval *handle, zval *flag, zval *glyphIndex);

/*@zep NS\NSLayoutManager setAttachmentSizeForGlyphRange(int handle, double width, double height, int location, int length) -> void */
void ns_nslayoutmanager_set_attachment_size_for_glyph_range(zval *handle, zval *width, zval *height, zval *location, zval *length);

/* ---- Get layout information ---- */

/*@zep NS\NSLayoutManager getFirstUnlaidCharacterIndexGlyphIndex(int handle) -> array */
void ns_nslayoutmanager_get_first_unlaid_character_index_glyph_index(zval *return_value, zval *handle);

/*@zep NS\NSLayoutManager firstUnlaidCharacterIndex(int handle) -> int */
zend_long ns_nslayoutmanager_first_unlaid_character_index(zval *handle);

/*@zep NS\NSLayoutManager firstUnlaidGlyphIndex(int handle) -> int */
zend_long ns_nslayoutmanager_first_unlaid_glyph_index(zval *handle);

/*@zep NS\NSLayoutManager textContainerForGlyphAtIndexEffectiveRange(int handle, int glyphIndex) -> array */
void ns_nslayoutmanager_text_container_for_glyph_at_index_effective_range(zval *return_value, zval *handle, zval *glyphIndex);

/*@zep NS\NSLayoutManager textContainerForGlyphAtIndexEffectiveRangeWithoutAdditionalLayout(int handle, int glyphIndex, bool flag) -> array */
void ns_nslayoutmanager_text_container_for_glyph_at_index_effective_range_without_additional_layout(zval *return_value, zval *handle, zval *glyphIndex, zval *flag);

/*@zep NS\NSLayoutManager usedRectForTextContainer(int handle, int container) -> array */
void ns_nslayoutmanager_used_rect_for_text_container(zval *return_value, zval *handle, zval *container);

/*@zep NS\NSLayoutManager lineFragmentRectForGlyphAtIndexEffectiveRange(int handle, int glyphIndex) -> array */
void ns_nslayoutmanager_line_fragment_rect_for_glyph_at_index_effective_range(zval *return_value, zval *handle, zval *glyphIndex);

/*@zep NS\NSLayoutManager lineFragmentRectForGlyphAtIndexEffectiveRangeWithoutAdditionalLayout(int handle, int glyphIndex, bool flag) -> array */
void ns_nslayoutmanager_line_fragment_rect_for_glyph_at_index_effective_range_without_additional_layout(zval *return_value, zval *handle, zval *glyphIndex, zval *flag);

/*@zep NS\NSLayoutManager lineFragmentUsedRectForGlyphAtIndexEffectiveRange(int handle, int glyphIndex) -> array */
void ns_nslayoutmanager_line_fragment_used_rect_for_glyph_at_index_effective_range(zval *return_value, zval *handle, zval *glyphIndex);

/*@zep NS\NSLayoutManager lineFragmentUsedRectForGlyphAtIndexEffectiveRangeWithoutAdditionalLayout(int handle, int glyphIndex, bool flag) -> array */
void ns_nslayoutmanager_line_fragment_used_rect_for_glyph_at_index_effective_range_without_additional_layout(zval *return_value, zval *handle, zval *glyphIndex, zval *flag);

/*@zep NS\NSLayoutManager extraLineFragmentRect(int handle) -> array */
void ns_nslayoutmanager_extra_line_fragment_rect(zval *return_value, zval *handle);

/*@zep NS\NSLayoutManager extraLineFragmentUsedRect(int handle) -> array */
void ns_nslayoutmanager_extra_line_fragment_used_rect(zval *return_value, zval *handle);

/*@zep NS\NSLayoutManager extraLineFragmentTextContainer(int handle) -> int */
zend_long ns_nslayoutmanager_extra_line_fragment_text_container(zval *handle);

/*@zep NS\NSLayoutManager locationForGlyphAtIndex(int handle, int glyphIndex) -> array */
void ns_nslayoutmanager_location_for_glyph_at_index(zval *return_value, zval *handle, zval *glyphIndex);

/*@zep NS\NSLayoutManager notShownAttributeForGlyphAtIndex(int handle, int glyphIndex) -> bool */
zend_long ns_nslayoutmanager_not_shown_attribute_for_glyph_at_index(zval *handle, zval *glyphIndex);

/*@zep NS\NSLayoutManager drawsOutsideLineFragmentForGlyphAtIndex(int handle, int glyphIndex) -> bool */
zend_long ns_nslayoutmanager_draws_outside_line_fragment_for_glyph_at_index(zval *handle, zval *glyphIndex);

/*@zep NS\NSLayoutManager attachmentSizeForGlyphAtIndex(int handle, int glyphIndex) -> array */
void ns_nslayoutmanager_attachment_size_for_glyph_at_index(zval *return_value, zval *handle, zval *glyphIndex);

/*@zep NS\NSLayoutManager truncatedGlyphRangeInLineFragmentForGlyphAtIndex(int handle, int glyphIndex) -> array */
void ns_nslayoutmanager_truncated_glyph_range_in_line_fragment_for_glyph_at_index(zval *return_value, zval *handle, zval *glyphIndex);

/* ---- More sophisticated queries ---- */

/*@zep NS\NSLayoutManager glyphRangeForCharacterRangeActualCharacterRange(int handle, int location, int length) -> array */
void ns_nslayoutmanager_glyph_range_for_character_range_actual_character_range(zval *return_value, zval *handle, zval *location, zval *length);

/*@zep NS\NSLayoutManager characterRangeForGlyphRangeActualGlyphRange(int handle, int location, int length) -> array */
void ns_nslayoutmanager_character_range_for_glyph_range_actual_glyph_range(zval *return_value, zval *handle, zval *location, zval *length);

/*@zep NS\NSLayoutManager glyphRangeForTextContainer(int handle, int container) -> array */
void ns_nslayoutmanager_glyph_range_for_text_container(zval *return_value, zval *handle, zval *container);

/*@zep NS\NSLayoutManager rangeOfNominallySpacedGlyphsContainingIndex(int handle, int glyphIndex) -> array */
void ns_nslayoutmanager_range_of_nominally_spaced_glyphs_containing_index(zval *return_value, zval *handle, zval *glyphIndex);

/*@zep NS\NSLayoutManager boundingRectForGlyphRangeInTextContainer(int handle, int location, int length, int container) -> array */
void ns_nslayoutmanager_bounding_rect_for_glyph_range_in_text_container(zval *return_value, zval *handle, zval *location, zval *length, zval *container);

/*@zep NS\NSLayoutManager glyphRangeForBoundingRectInTextContainer(int handle, double x, double y, double width, double height, int container) -> array */
void ns_nslayoutmanager_glyph_range_for_bounding_rect_in_text_container(zval *return_value, zval *handle, zval *x, zval *y, zval *width, zval *height, zval *container);

/*@zep NS\NSLayoutManager glyphRangeForBoundingRectWithoutAdditionalLayoutInTextContainer(int handle, double x, double y, double width, double height, int container) -> array */
void ns_nslayoutmanager_glyph_range_for_bounding_rect_without_additional_layout_in_text_container(zval *return_value, zval *handle, zval *x, zval *y, zval *width, zval *height, zval *container);

/*@zep NS\NSLayoutManager glyphIndexForPointInTextContainerFractionOfDistanceThroughGlyph(int handle, double x, double y, int container) -> array */
void ns_nslayoutmanager_glyph_index_for_point_in_text_container_fraction_of_distance_through_glyph(zval *return_value, zval *handle, zval *x, zval *y, zval *container);

/*@zep NS\NSLayoutManager glyphIndexForPointInTextContainer(int handle, double x, double y, int container) -> int */
zend_long ns_nslayoutmanager_glyph_index_for_point_in_text_container(zval *handle, zval *x, zval *y, zval *container);

/*@zep NS\NSLayoutManager fractionOfDistanceThroughGlyphForPointInTextContainer(int handle, double x, double y, int container) -> double */
double ns_nslayoutmanager_fraction_of_distance_through_glyph_for_point_in_text_container(zval *handle, zval *x, zval *y, zval *container);

/*@zep NS\NSLayoutManager characterIndexForPointInTextContainerFractionOfDistanceBetweenInsertionPoints(int handle, double x, double y, int container) -> array */
void ns_nslayoutmanager_character_index_for_point_in_text_container_fraction_of_distance_between_insertion_points(zval *return_value, zval *handle, zval *x, zval *y, zval *container);

/*@reserved NS\NSLayoutManager - (NSUInteger)getLineFragmentInsertionPointsForCharacterAtIndex:(NSUInteger)charIndex alternatePositions:(BOOL)aFlag inDisplayOrder:(BOOL)dFlag positions:(nullable CGFloat *)positions characterIndexes:(nullable NSUInteger *)charIndexes — C out-buffers */

/*@reserved NS\NSLayoutManager - (void)enumerateLineFragmentsForGlyphRange:(NSRange)glyphRange usingBlock:(void (^)(NSRect rect, NSRect usedRect, NSTextContainer *textContainer, NSRange glyphRange, BOOL *stop))block */

/*@reserved NS\NSLayoutManager - (void)enumerateEnclosingRectsForGlyphRange:(NSRange)glyphRange withinSelectedGlyphRange:(NSRange)selectedRange inTextContainer:(NSTextContainer *)textContainer usingBlock:(void (^)(NSRect rect, BOOL *stop))block */

/* ---- Drawing support ---- */

/*@zep NS\NSLayoutManager drawBackgroundForGlyphRangeAtPoint(int handle, int location, int length, double x, double y) -> void */
void ns_nslayoutmanager_draw_background_for_glyph_range_at_point(zval *handle, zval *location, zval *length, zval *x, zval *y);

/*@zep NS\NSLayoutManager drawGlyphsForGlyphRangeAtPoint(int handle, int location, int length, double x, double y) -> void */
void ns_nslayoutmanager_draw_glyphs_for_glyph_range_at_point(zval *handle, zval *location, zval *length, zval *x, zval *y);

/*@reserved NS\NSLayoutManager - (void)showCGGlyphs:(const CGGlyph *)glyphs positions:(const CGPoint *)positions count:(NSInteger)glyphCount font:(NSFont *)font textMatrix:(CGAffineTransform)textMatrix attributes:(NSDictionary<NSAttributedStringKey, id> *)attributes inContext:(CGContextRef)CGContext — C buffers, CGAffineTransform, CGContextRef */

/*@reserved NS\NSLayoutManager - (void)fillBackgroundRectArray:(const NSRect *)rectArray count:(NSUInteger)rectCount forCharacterRange:(NSRange)charRange color:(NSColor *)color — C rect buffer */

/*@zep NS\NSLayoutManager drawUnderlineForGlyphRangeUnderlineTypeBaselineOffsetLineFragmentRectLineFragmentGlyphRangeContainerOrigin(int handle, int location, int length, int underlineVal, double baselineOffset, double x, double y, double width, double height, int lineLocation, int lineLength, double originX, double originY) -> void */
void ns_nslayoutmanager_draw_underline_for_glyph_range_underline_type_baseline_offset_line_fragment_rect_line_fragment_glyph_range_container_origin(zval *handle, zval *location, zval *length, zval *underlineVal, zval *baselineOffset, zval *x, zval *y, zval *width, zval *height, zval *lineLocation, zval *lineLength, zval *originX, zval *originY);

/*@zep NS\NSLayoutManager underlineGlyphRangeUnderlineTypeLineFragmentRectLineFragmentGlyphRangeContainerOrigin(int handle, int location, int length, int underlineVal, double x, double y, double width, double height, int lineLocation, int lineLength, double originX, double originY) -> void */
void ns_nslayoutmanager_underline_glyph_range_underline_type_line_fragment_rect_line_fragment_glyph_range_container_origin(zval *handle, zval *location, zval *length, zval *underlineVal, zval *x, zval *y, zval *width, zval *height, zval *lineLocation, zval *lineLength, zval *originX, zval *originY);

/*@zep NS\NSLayoutManager drawStrikethroughForGlyphRangeStrikethroughTypeBaselineOffsetLineFragmentRectLineFragmentGlyphRangeContainerOrigin(int handle, int location, int length, int strikethroughVal, double baselineOffset, double x, double y, double width, double height, int lineLocation, int lineLength, double originX, double originY) -> void */
void ns_nslayoutmanager_draw_strikethrough_for_glyph_range_strikethrough_type_baseline_offset_line_fragment_rect_line_fragment_glyph_range_container_origin(zval *handle, zval *location, zval *length, zval *strikethroughVal, zval *baselineOffset, zval *x, zval *y, zval *width, zval *height, zval *lineLocation, zval *lineLength, zval *originX, zval *originY);

/*@zep NS\NSLayoutManager strikethroughGlyphRangeStrikethroughTypeLineFragmentRectLineFragmentGlyphRangeContainerOrigin(int handle, int location, int length, int strikethroughVal, double x, double y, double width, double height, int lineLocation, int lineLength, double originX, double originY) -> void */
void ns_nslayoutmanager_strikethrough_glyph_range_strikethrough_type_line_fragment_rect_line_fragment_glyph_range_container_origin(zval *handle, zval *location, zval *length, zval *strikethroughVal, zval *x, zval *y, zval *width, zval *height, zval *lineLocation, zval *lineLength, zval *originX, zval *originY);

/*@zep NS\NSLayoutManager showAttachmentCellInRectCharacterIndex(int handle, int cell, double x, double y, double width, double height, int attachmentIndex) -> void */
void ns_nslayoutmanager_show_attachment_cell_in_rect_character_index(zval *handle, zval *cell, zval *x, zval *y, zval *width, zval *height, zval *attachmentIndex);

/* ---- Block information ---- */

/*@zep NS\NSLayoutManager setLayoutRectForTextBlockGlyphRange(int handle, double x, double y, double width, double height, int block, int location, int length) -> void */
void ns_nslayoutmanager_set_layout_rect_for_text_block_glyph_range(zval *handle, zval *x, zval *y, zval *width, zval *height, zval *block, zval *location, zval *length);

/*@zep NS\NSLayoutManager setBoundsRectForTextBlockGlyphRange(int handle, double x, double y, double width, double height, int block, int location, int length) -> void */
void ns_nslayoutmanager_set_bounds_rect_for_text_block_glyph_range(zval *handle, zval *x, zval *y, zval *width, zval *height, zval *block, zval *location, zval *length);

/*@zep NS\NSLayoutManager layoutRectForTextBlockGlyphRange(int handle, int block, int location, int length) -> array */
void ns_nslayoutmanager_layout_rect_for_text_block_glyph_range(zval *return_value, zval *handle, zval *block, zval *location, zval *length);

/*@zep NS\NSLayoutManager boundsRectForTextBlockGlyphRange(int handle, int block, int location, int length) -> array */
void ns_nslayoutmanager_bounds_rect_for_text_block_glyph_range(zval *return_value, zval *handle, zval *block, zval *location, zval *length);

/*@zep NS\NSLayoutManager layoutRectForTextBlockAtIndexEffectiveRange(int handle, int block, int glyphIndex) -> array */
void ns_nslayoutmanager_layout_rect_for_text_block_at_index_effective_range(zval *return_value, zval *handle, zval *block, zval *glyphIndex);

/*@zep NS\NSLayoutManager boundsRectForTextBlockAtIndexEffectiveRange(int handle, int block, int glyphIndex) -> array */
void ns_nslayoutmanager_bounds_rect_for_text_block_at_index_effective_range(zval *return_value, zval *handle, zval *block, zval *glyphIndex);

/* ---- Temporary attribute support ---- */

/*@zep NS\NSLayoutManager temporaryAttributesAtCharacterIndexEffectiveRange(int handle, int charIndex) -> array */
void ns_nslayoutmanager_temporary_attributes_at_character_index_effective_range(zval *return_value, zval *handle, zval *charIndex);

/*@zep NS\NSLayoutManager setTemporaryAttributesForCharacterRange(int handle, var attrs, int location, int length) -> void */
void ns_nslayoutmanager_set_temporary_attributes_for_character_range(zval *handle, zval *attrs, zval *location, zval *length);

/*@zep NS\NSLayoutManager addTemporaryAttributesForCharacterRange(int handle, var attrs, int location, int length) -> void */
void ns_nslayoutmanager_add_temporary_attributes_for_character_range(zval *handle, zval *attrs, zval *location, zval *length);

/*@zep NS\NSLayoutManager removeTemporaryAttributeForCharacterRange(int handle, string attrName, int location, int length) -> void */
void ns_nslayoutmanager_remove_temporary_attribute_for_character_range(zval *handle, zval *attrName, zval *location, zval *length);

/*@zep NS\NSLayoutManager temporaryAttributeAtCharacterIndexEffectiveRange(int handle, string attrName, int location) -> array */
void ns_nslayoutmanager_temporary_attribute_at_character_index_effective_range(zval *return_value, zval *handle, zval *attrName, zval *location);

/*@zep NS\NSLayoutManager temporaryAttributeAtCharacterIndexLongestEffectiveRangeInRange(int handle, string attrName, int location, int rangeLimitLocation, int rangeLimitLength) -> array */
void ns_nslayoutmanager_temporary_attribute_at_character_index_longest_effective_range_in_range(zval *return_value, zval *handle, zval *attrName, zval *location, zval *rangeLimitLocation, zval *rangeLimitLength);

/*@zep NS\NSLayoutManager temporaryAttributesAtCharacterIndexLongestEffectiveRangeInRange(int handle, int location, int rangeLimitLocation, int rangeLimitLength) -> array */
void ns_nslayoutmanager_temporary_attributes_at_character_index_longest_effective_range_in_range(zval *return_value, zval *handle, zval *location, zval *rangeLimitLocation, zval *rangeLimitLength);

/*@zep NS\NSLayoutManager addTemporaryAttributeValueForCharacterRange(int handle, string attrName, int value, int location, int length) -> void */
void ns_nslayoutmanager_add_temporary_attribute_value_for_character_range(zval *handle, zval *attrName, zval *value, zval *location, zval *length);

/* ---- Font metrics ---- */

/*@zep NS\NSLayoutManager defaultLineHeightForFont(int handle, int theFont) -> double */
double ns_nslayoutmanager_default_line_height_for_font(zval *handle, zval *theFont);

/*@zep NS\NSLayoutManager defaultBaselineOffsetForFont(int handle, int theFont) -> double */
double ns_nslayoutmanager_default_baseline_offset_for_font(zval *handle, zval *theFont);

/* ---- NSTextViewSupport ---- */

/*@zep NS\NSLayoutManager rulerMarkersForTextViewParagraphStyleRuler(int handle, int view, int style, int ruler) -> array */
void ns_nslayoutmanager_ruler_markers_for_text_view_paragraph_style_ruler(zval *return_value, zval *handle, zval *view, zval *style, zval *ruler);

/*@zep NS\NSLayoutManager rulerAccessoryViewForTextViewParagraphStyleRulerEnabled(int handle, int view, int style, int ruler, bool isEnabled) -> int */
zend_long ns_nslayoutmanager_ruler_accessory_view_for_text_view_paragraph_style_ruler_enabled(zval *handle, zval *view, zval *style, zval *ruler, zval *isEnabled);

/*@zep NS\NSLayoutManager layoutManagerOwnsFirstResponderInWindow(int handle, int window) -> bool */
zend_long ns_nslayoutmanager_layout_manager_owns_first_responder_in_window(zval *handle, zval *window);

/*@zep NS\NSLayoutManager firstTextView(int handle) -> int */
zend_long ns_nslayoutmanager_first_text_view(zval *handle);

/*@zep NS\NSLayoutManager textViewForBeginningOfSelection(int handle) -> int */
zend_long ns_nslayoutmanager_text_view_for_beginning_of_selection(zval *handle);

/* ---- NSLayoutManagerDeprecated (soft-deprecated stay bound; API_DEPRECATED reserved) ---- */

/*@zep NS\NSLayoutManager glyphAtIndexIsValidIndex(int handle, int glyphIndex) -> array */
void ns_nslayoutmanager_glyph_at_index_is_valid_index(zval *return_value, zval *handle, zval *glyphIndex);

/*@zep NS\NSLayoutManager glyphAtIndex(int handle, int glyphIndex) -> int */
zend_long ns_nslayoutmanager_glyph_at_index(zval *handle, zval *glyphIndex);

/*@zep NS\NSLayoutManager rectArrayForCharacterRangeWithinSelectedCharacterRangeInTextContainerRectCount(int handle, int location, int length, int selLocation, int selLength, int container) -> array */
void ns_nslayoutmanager_rect_array_for_character_range_within_selected_character_range_in_text_container_rect_count(zval *return_value, zval *handle, zval *location, zval *length, zval *selLocation, zval *selLength, zval *container);

/*@zep NS\NSLayoutManager rectArrayForGlyphRangeWithinSelectedGlyphRangeInTextContainerRectCount(int handle, int location, int length, int selLocation, int selLength, int container) -> array */
void ns_nslayoutmanager_rect_array_for_glyph_range_within_selected_glyph_range_in_text_container_rect_count(zval *return_value, zval *handle, zval *location, zval *length, zval *selLocation, zval *selLength, zval *container);

/*@reserved NS\NSLayoutManager @property BOOL usesScreenFonts API_DEPRECATED("", macos(10.0,10.11)); — getter */
/*@reserved NS\NSLayoutManager @property BOOL usesScreenFonts API_DEPRECATED("", macos(10.0,10.11)); — setter */
/*@reserved NS\NSLayoutManager - (NSFont *)substituteFontForFont:(NSFont *)originalFont API_DEPRECATED("", macos(10.0,10.11)); */

/*@reserved NS\NSLayoutManager - (void)insertGlyphs:(const NSGlyph *)glyphs length:(NSUInteger)length forStartingGlyphAtIndex:(NSUInteger)glyphIndex characterIndex:(NSUInteger)charIndex API_DEPRECATED */
/*@reserved NS\NSLayoutManager - (void)insertGlyph:(NSGlyph)glyph atGlyphIndex:(NSUInteger)glyphIndex characterIndex:(NSUInteger)charIndex API_DEPRECATED */
/*@reserved NS\NSLayoutManager - (void)replaceGlyphAtIndex:(NSUInteger)glyphIndex withGlyph:(NSGlyph)newGlyph API_DEPRECATED */
/*@reserved NS\NSLayoutManager - (void)deleteGlyphsInRange:(NSRange)glyphRange API_DEPRECATED */
/*@reserved NS\NSLayoutManager - (void)setCharacterIndex:(NSUInteger)charIndex forGlyphAtIndex:(NSUInteger)glyphIndex API_DEPRECATED */
/*@reserved NS\NSLayoutManager - (void)setIntAttribute:(NSInteger)attributeTag value:(NSInteger)val forGlyphAtIndex:(NSUInteger)glyphIndex API_DEPRECATED */
/*@reserved NS\NSLayoutManager - (void)invalidateGlyphsOnLayoutInvalidationForGlyphRange:(NSRange)glyphRange API_DEPRECATED */

/*@reserved NS\NSLayoutManager - (NSInteger)intAttribute:(NSInteger)attributeTag forGlyphAtIndex:(NSUInteger)glyphIndex API_DEPRECATED */
/*@reserved NS\NSLayoutManager - (NSUInteger)getGlyphsInRange:(NSRange)glyphRange glyphs:(nullable NSGlyph *)glyphBuffer characterIndexes:(nullable NSUInteger *)charIndexBuffer glyphInscriptions:(nullable NSGlyphInscription *)inscribeBuffer elasticBits:(nullable BOOL *)elasticBuffer API_DEPRECATED */
/*@reserved NS\NSLayoutManager - (NSUInteger)getGlyphsInRange:(NSRange)glyphRange glyphs:(nullable NSGlyph *)glyphBuffer characterIndexes:(nullable NSUInteger *)charIndexBuffer glyphInscriptions:(nullable NSGlyphInscription *)inscribeBuffer elasticBits:(nullable BOOL *)elasticBuffer bidiLevels:(nullable unsigned char *)bidiLevelBuffer API_DEPRECATED */
/*@reserved NS\NSLayoutManager - (NSUInteger)getGlyphs:(nullable NSGlyph *)glyphArray range:(NSRange)glyphRange API_DEPRECATED */

/*@reserved NS\NSLayoutManager - (void)invalidateLayoutForCharacterRange:(NSRange)charRange isSoft:(BOOL)flag actualCharacterRange:(nullable NSRangePointer)actualCharRange API_DEPRECATED */
/*@reserved NS\NSLayoutManager - (void)textStorage:(NSTextStorage *)str edited:(NSTextStorageEditedOptions)editedMask range:(NSRange)newCharRange changeInLength:(NSInteger)delta invalidatedRange:(NSRange)invalidatedCharRange API_DEPRECATED */
/*@reserved NS\NSLayoutManager - (void)setLocations:(NSPointArray)locations startingGlyphIndexes:(NSUInteger *)glyphIndexes count:(NSUInteger)count forGlyphRange:(NSRange)glyphRange API_DEPRECATED */
/*@reserved NS\NSLayoutManager - (void)showPackedGlyphs:(char *)glyphs length:(NSUInteger)glyphLen glyphRange:(NSRange)glyphRange atPoint:(NSPoint)point font:(NSFont *)font color:(NSColor *)color printingAdjustment:(NSSize)printingAdjustment API_DEPRECATED */
/*@reserved NS\NSLayoutManager - (void)showCGGlyphs:(const CGGlyph *)glyphs positions:(const NSPoint *)positions count:(NSUInteger)glyphCount font:(NSFont *)font matrix:(NSAffineTransform *)textMatrix attributes:(NSDictionary<NSAttributedStringKey, id> *)attributes inContext:(NSGraphicsContext *)graphicsContext API_DEPRECATED */

/*@reserved NS\NSLayoutManager @property float hyphenationFactor API_DEPRECATED; — getter */
/*@reserved NS\NSLayoutManager @property float hyphenationFactor API_DEPRECATED; — setter */

/* ---- NSGlyphGeneration ---- */

/*@zep NS\NSLayoutManager glyphGenerator(int handle) -> int */
zend_long ns_nslayoutmanager_glyph_generator(zval *handle);
/*@zep NS\NSLayoutManager setGlyphGenerator(int handle, int glyphGenerator) -> void */
void ns_nslayoutmanager_set_glyph_generator(zval *handle, zval *glyphGenerator);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_LAYOUTMANAGER_H */
