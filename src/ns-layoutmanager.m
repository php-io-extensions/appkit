#include "ns-layoutmanager.h"
#include "ns-value.h"

static void lm_ret_range_key(zval *rv, const char *key, NSRange range)
{
    zval tmp;
    ns_ret_range(&tmp, range);
    add_assoc_zval(rv, key, &tmp);
}

static void lm_ret_handle_and_range(zval *rv, id obj, NSRange range, const char *rangeKey)
{
    array_init_size(rv, 2);
    add_assoc_long(rv, "result", ns_handle_for(obj));
    lm_ret_range_key(rv, rangeKey, range);
}

static void lm_ret_rect_and_range(zval *rv, NSRect rect, NSRange range, const char *rangeKey)
{
    ns_ret_rect(rv, rect);
    lm_ret_range_key(rv, rangeKey, range);
}

static void lm_ret_range_and_range(zval *rv, NSRange primary, NSRange extra, const char *extraKey)
{
    ns_ret_range(rv, primary);
    lm_ret_range_key(rv, extraKey, extra);
}

static void lm_ret_int_and_bool(zval *rv, zend_long result, BOOL flag, const char *flagKey)
{
    array_init_size(rv, 2);
    add_assoc_long(rv, "result", result);
    add_assoc_bool(rv, flagKey, flag);
}

static void lm_ret_int_and_double(zval *rv, zend_long result, double fraction, const char *fractionKey)
{
    array_init_size(rv, 2);
    add_assoc_long(rv, "result", result);
    add_assoc_double(rv, fractionKey, fraction);
}

static void lm_ret_rect_array(zval *rv, NSRectArray rects, NSUInteger rectCount)
{
    array_init(rv);
    if (rects == NULL) {
        return;
    }
    for (NSUInteger i = 0; i < rectCount; i++) {
        zval r;
        ns_ret_rect(&r, rects[i]);
        add_next_index_zval(rv, &r);
    }
}

/* ====================================================================== */
/* NSLayoutManager                                                        */
/* ====================================================================== */

zend_long ns_nslayoutmanager_init(void)
{
    @autoreleasepool {
        return ns_handle_for([[NSLayoutManager alloc] init]);
    }
}

zend_long ns_nslayoutmanager_text_storage(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSLayoutManager *lm = NS_ARG_AS(NSLayoutManager, handle);
        h = ns_handle_for(lm != nil ? [lm textStorage] : nil);
    }
    return h;
}

void ns_nslayoutmanager_set_text_storage(zval *handle, zval *textStorage)
{
    @autoreleasepool {
        NSLayoutManager *lm = NS_ARG_AS(NSLayoutManager, handle);
        if (lm == nil) return;
        [lm setTextStorage:NS_ARG_AS(NSTextStorage, textStorage)];
    }
}

void ns_nslayoutmanager_replace_text_storage(zval *handle, zval *newTextStorage)
{
    @autoreleasepool {
        NSLayoutManager *lm = NS_ARG_AS(NSLayoutManager, handle);
        if (lm == nil) return;
        [lm replaceTextStorage:NS_ARG_AS(NSTextStorage, newTextStorage)];
    }
}

void ns_nslayoutmanager_text_containers(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSLayoutManager *lm = NS_ARG_AS(NSLayoutManager, handle);
        ns_ret_object_array(return_value, lm != nil ? [lm textContainers] : nil);
    }
}

void ns_nslayoutmanager_add_text_container(zval *handle, zval *container)
{
    @autoreleasepool {
        NSLayoutManager *lm = NS_ARG_AS(NSLayoutManager, handle);
        if (lm == nil) return;
        [lm addTextContainer:NS_ARG_AS(NSTextContainer, container)];
    }
}

void ns_nslayoutmanager_insert_text_container_at_index(zval *handle, zval *container, zval *index)
{
    @autoreleasepool {
        NSLayoutManager *lm = NS_ARG_AS(NSLayoutManager, handle);
        if (lm == nil) return;
        [lm insertTextContainer:NS_ARG_AS(NSTextContainer, container) atIndex:(NSUInteger) ns_arg_long(index)];
    }
}

void ns_nslayoutmanager_remove_text_container_at_index(zval *handle, zval *index)
{
    @autoreleasepool {
        NSLayoutManager *lm = NS_ARG_AS(NSLayoutManager, handle);
        if (lm == nil) return;
        [lm removeTextContainerAtIndex:(NSUInteger) ns_arg_long(index)];
    }
}

void ns_nslayoutmanager_text_container_changed_geometry(zval *handle, zval *container)
{
    @autoreleasepool {
        NSLayoutManager *lm = NS_ARG_AS(NSLayoutManager, handle);
        if (lm == nil) return;
        [lm textContainerChangedGeometry:NS_ARG_AS(NSTextContainer, container)];
    }
}

void ns_nslayoutmanager_text_container_changed_text_view(zval *handle, zval *container)
{
    @autoreleasepool {
        NSLayoutManager *lm = NS_ARG_AS(NSLayoutManager, handle);
        if (lm == nil) return;
        [lm textContainerChangedTextView:NS_ARG_AS(NSTextContainer, container)];
    }
}

zend_long ns_nslayoutmanager_delegate(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSLayoutManager *lm = NS_ARG_AS(NSLayoutManager, handle);
        h = ns_handle_for(lm != nil ? [lm delegate] : nil);
    }
    return h;
}

void ns_nslayoutmanager_set_delegate(zval *handle, zval *delegate)
{
    @autoreleasepool {
        NSLayoutManager *lm = NS_ARG_AS(NSLayoutManager, handle);
        if (lm == nil) return;
        [lm setDelegate:ns_arg_object(delegate)];
    }
}

zend_long ns_nslayoutmanager_shows_invisible_characters(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSLayoutManager *lm = NS_ARG_AS(NSLayoutManager, handle);
        r = (lm != nil && [lm showsInvisibleCharacters]) ? 1 : 0;
    }
    return r;
}

void ns_nslayoutmanager_set_shows_invisible_characters(zval *handle, zval *showsInvisibleCharacters)
{
    @autoreleasepool {
        NSLayoutManager *lm = NS_ARG_AS(NSLayoutManager, handle);
        if (lm == nil) return;
        [lm setShowsInvisibleCharacters:ns_arg_bool(showsInvisibleCharacters)];
    }
}

zend_long ns_nslayoutmanager_shows_control_characters(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSLayoutManager *lm = NS_ARG_AS(NSLayoutManager, handle);
        r = (lm != nil && [lm showsControlCharacters]) ? 1 : 0;
    }
    return r;
}

void ns_nslayoutmanager_set_shows_control_characters(zval *handle, zval *showsControlCharacters)
{
    @autoreleasepool {
        NSLayoutManager *lm = NS_ARG_AS(NSLayoutManager, handle);
        if (lm == nil) return;
        [lm setShowsControlCharacters:ns_arg_bool(showsControlCharacters)];
    }
}

zend_long ns_nslayoutmanager_uses_default_hyphenation(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSLayoutManager *lm = NS_ARG_AS(NSLayoutManager, handle);
        r = (lm != nil && [lm usesDefaultHyphenation]) ? 1 : 0;
    }
    return r;
}

void ns_nslayoutmanager_set_uses_default_hyphenation(zval *handle, zval *usesDefaultHyphenation)
{
    @autoreleasepool {
        NSLayoutManager *lm = NS_ARG_AS(NSLayoutManager, handle);
        if (lm == nil) return;
        [lm setUsesDefaultHyphenation:ns_arg_bool(usesDefaultHyphenation)];
    }
}

zend_long ns_nslayoutmanager_uses_font_leading(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSLayoutManager *lm = NS_ARG_AS(NSLayoutManager, handle);
        r = (lm != nil && [lm usesFontLeading]) ? 1 : 0;
    }
    return r;
}

void ns_nslayoutmanager_set_uses_font_leading(zval *handle, zval *usesFontLeading)
{
    @autoreleasepool {
        NSLayoutManager *lm = NS_ARG_AS(NSLayoutManager, handle);
        if (lm == nil) return;
        [lm setUsesFontLeading:ns_arg_bool(usesFontLeading)];
    }
}

zend_long ns_nslayoutmanager_allows_non_contiguous_layout(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSLayoutManager *lm = NS_ARG_AS(NSLayoutManager, handle);
        r = (lm != nil && [lm allowsNonContiguousLayout]) ? 1 : 0;
    }
    return r;
}

void ns_nslayoutmanager_set_allows_non_contiguous_layout(zval *handle, zval *allowsNonContiguousLayout)
{
    @autoreleasepool {
        NSLayoutManager *lm = NS_ARG_AS(NSLayoutManager, handle);
        if (lm == nil) return;
        [lm setAllowsNonContiguousLayout:ns_arg_bool(allowsNonContiguousLayout)];
    }
}

zend_long ns_nslayoutmanager_has_non_contiguous_layout(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSLayoutManager *lm = NS_ARG_AS(NSLayoutManager, handle);
        r = (lm != nil && [lm hasNonContiguousLayout]) ? 1 : 0;
    }
    return r;
}

zend_long ns_nslayoutmanager_limits_layout_for_suspicious_contents(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSLayoutManager *lm = NS_ARG_AS(NSLayoutManager, handle);
        r = (lm != nil && [lm limitsLayoutForSuspiciousContents]) ? 1 : 0;
    }
    return r;
}

void ns_nslayoutmanager_set_limits_layout_for_suspicious_contents(zval *handle, zval *limitsLayoutForSuspiciousContents)
{
    @autoreleasepool {
        NSLayoutManager *lm = NS_ARG_AS(NSLayoutManager, handle);
        if (lm == nil) return;
        [lm setLimitsLayoutForSuspiciousContents:ns_arg_bool(limitsLayoutForSuspiciousContents)];
    }
}

zend_long ns_nslayoutmanager_background_layout_enabled(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSLayoutManager *lm = NS_ARG_AS(NSLayoutManager, handle);
        r = (lm != nil && [lm backgroundLayoutEnabled]) ? 1 : 0;
    }
    return r;
}

void ns_nslayoutmanager_set_background_layout_enabled(zval *handle, zval *backgroundLayoutEnabled)
{
    @autoreleasepool {
        NSLayoutManager *lm = NS_ARG_AS(NSLayoutManager, handle);
        if (lm == nil) return;
        [lm setBackgroundLayoutEnabled:ns_arg_bool(backgroundLayoutEnabled)];
    }
}

zend_long ns_nslayoutmanager_default_attachment_scaling(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSLayoutManager *lm = NS_ARG_AS(NSLayoutManager, handle);
        r = lm != nil ? (zend_long) [lm defaultAttachmentScaling] : 0;
    }
    return r;
}

void ns_nslayoutmanager_set_default_attachment_scaling(zval *handle, zval *defaultAttachmentScaling)
{
    @autoreleasepool {
        NSLayoutManager *lm = NS_ARG_AS(NSLayoutManager, handle);
        if (lm == nil) return;
        [lm setDefaultAttachmentScaling:(NSImageScaling) ns_arg_long(defaultAttachmentScaling)];
    }
}

zend_long ns_nslayoutmanager_typesetter(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSLayoutManager *lm = NS_ARG_AS(NSLayoutManager, handle);
        h = ns_handle_for(lm != nil ? [lm typesetter] : nil);
    }
    return h;
}

void ns_nslayoutmanager_set_typesetter(zval *handle, zval *typesetter)
{
    @autoreleasepool {
        NSLayoutManager *lm = NS_ARG_AS(NSLayoutManager, handle);
        if (lm == nil) return;
        [lm setTypesetter:NS_ARG_AS(NSTypesetter, typesetter)];
    }
}

zend_long ns_nslayoutmanager_typesetter_behavior(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSLayoutManager *lm = NS_ARG_AS(NSLayoutManager, handle);
        r = lm != nil ? (zend_long) [lm typesetterBehavior] : 0;
    }
    return r;
}

void ns_nslayoutmanager_set_typesetter_behavior(zval *handle, zval *typesetterBehavior)
{
    @autoreleasepool {
        NSLayoutManager *lm = NS_ARG_AS(NSLayoutManager, handle);
        if (lm == nil) return;
        [lm setTypesetterBehavior:(NSTypesetterBehavior) ns_arg_long(typesetterBehavior)];
    }
}

void ns_nslayoutmanager_invalidate_glyphs_for_character_range_change_in_length_actual_character_range(zval *return_value, zval *handle, zval *location, zval *length, zval *delta)
{
    @autoreleasepool {
        NSLayoutManager *lm = NS_ARG_AS(NSLayoutManager, handle);
        NSRange actual = NSMakeRange(0, 0);
        if (lm != nil) {
            [lm invalidateGlyphsForCharacterRange:ns_arg_range(location, length)
                                   changeInLength:(NSInteger) ns_arg_long(delta)
                             actualCharacterRange:&actual];
        }
        ns_ret_range(return_value, actual);
    }
}

void ns_nslayoutmanager_invalidate_layout_for_character_range_actual_character_range(zval *return_value, zval *handle, zval *location, zval *length)
{
    @autoreleasepool {
        NSLayoutManager *lm = NS_ARG_AS(NSLayoutManager, handle);
        NSRange actual = NSMakeRange(0, 0);
        if (lm != nil) {
            [lm invalidateLayoutForCharacterRange:ns_arg_range(location, length) actualCharacterRange:&actual];
        }
        ns_ret_range(return_value, actual);
    }
}

void ns_nslayoutmanager_invalidate_display_for_character_range(zval *handle, zval *location, zval *length)
{
    @autoreleasepool {
        NSLayoutManager *lm = NS_ARG_AS(NSLayoutManager, handle);
        if (lm == nil) return;
        [lm invalidateDisplayForCharacterRange:ns_arg_range(location, length)];
    }
}

void ns_nslayoutmanager_invalidate_display_for_glyph_range(zval *handle, zval *location, zval *length)
{
    @autoreleasepool {
        NSLayoutManager *lm = NS_ARG_AS(NSLayoutManager, handle);
        if (lm == nil) return;
        [lm invalidateDisplayForGlyphRange:ns_arg_range(location, length)];
    }
}

void ns_nslayoutmanager_process_editing_for_text_storage_edited_range_change_in_length_invalidated_range(zval *handle, zval *textStorage, zval *editMask, zval *location, zval *length, zval *delta, zval *invalidatedLocation, zval *invalidatedLength)
{
    @autoreleasepool {
        NSLayoutManager *lm = NS_ARG_AS(NSLayoutManager, handle);
        if (lm == nil) return;
        [lm processEditingForTextStorage:NS_ARG_AS(NSTextStorage, textStorage)
                                  edited:(NSTextStorageEditActions) ns_arg_long(editMask)
                                   range:ns_arg_range(location, length)
                          changeInLength:(NSInteger) ns_arg_long(delta)
                        invalidatedRange:ns_arg_range(invalidatedLocation, invalidatedLength)];
    }
}

void ns_nslayoutmanager_ensure_glyphs_for_character_range(zval *handle, zval *location, zval *length)
{
    @autoreleasepool {
        NSLayoutManager *lm = NS_ARG_AS(NSLayoutManager, handle);
        if (lm == nil) return;
        [lm ensureGlyphsForCharacterRange:ns_arg_range(location, length)];
    }
}

void ns_nslayoutmanager_ensure_glyphs_for_glyph_range(zval *handle, zval *location, zval *length)
{
    @autoreleasepool {
        NSLayoutManager *lm = NS_ARG_AS(NSLayoutManager, handle);
        if (lm == nil) return;
        [lm ensureGlyphsForGlyphRange:ns_arg_range(location, length)];
    }
}

void ns_nslayoutmanager_ensure_layout_for_character_range(zval *handle, zval *location, zval *length)
{
    @autoreleasepool {
        NSLayoutManager *lm = NS_ARG_AS(NSLayoutManager, handle);
        if (lm == nil) return;
        [lm ensureLayoutForCharacterRange:ns_arg_range(location, length)];
    }
}

void ns_nslayoutmanager_ensure_layout_for_glyph_range(zval *handle, zval *location, zval *length)
{
    @autoreleasepool {
        NSLayoutManager *lm = NS_ARG_AS(NSLayoutManager, handle);
        if (lm == nil) return;
        [lm ensureLayoutForGlyphRange:ns_arg_range(location, length)];
    }
}

void ns_nslayoutmanager_ensure_layout_for_text_container(zval *handle, zval *container)
{
    @autoreleasepool {
        NSLayoutManager *lm = NS_ARG_AS(NSLayoutManager, handle);
        if (lm == nil) return;
        [lm ensureLayoutForTextContainer:NS_ARG_AS(NSTextContainer, container)];
    }
}

void ns_nslayoutmanager_ensure_layout_for_bounding_rect_in_text_container(zval *handle, zval *x, zval *y, zval *width, zval *height, zval *container)
{
    @autoreleasepool {
        NSLayoutManager *lm = NS_ARG_AS(NSLayoutManager, handle);
        if (lm == nil) return;
        [lm ensureLayoutForBoundingRect:ns_arg_rect(x, y, width, height) inTextContainer:NS_ARG_AS(NSTextContainer, container)];
    }
}

zend_long ns_nslayoutmanager_number_of_glyphs(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSLayoutManager *lm = NS_ARG_AS(NSLayoutManager, handle);
        r = lm != nil ? (zend_long) [lm numberOfGlyphs] : 0;
    }
    return r;
}

void ns_nslayoutmanager_cg_glyph_at_index_is_valid_index(zval *return_value, zval *handle, zval *glyphIndex)
{
    @autoreleasepool {
        NSLayoutManager *lm = NS_ARG_AS(NSLayoutManager, handle);
        BOOL isValid = NO;
        CGGlyph glyph = 0;
        if (lm != nil) {
            glyph = [lm CGGlyphAtIndex:(NSUInteger) ns_arg_long(glyphIndex) isValidIndex:&isValid];
        }
        lm_ret_int_and_bool(return_value, (zend_long) glyph, isValid, "isValidIndex");
    }
}

zend_long ns_nslayoutmanager_cg_glyph_at_index(zval *handle, zval *glyphIndex)
{
    zend_long r = 0;
    @autoreleasepool {
        NSLayoutManager *lm = NS_ARG_AS(NSLayoutManager, handle);
        r = lm != nil ? (zend_long) [lm CGGlyphAtIndex:(NSUInteger) ns_arg_long(glyphIndex)] : 0;
    }
    return r;
}

zend_long ns_nslayoutmanager_is_valid_glyph_index(zval *handle, zval *glyphIndex)
{
    zend_long r = 0;
    @autoreleasepool {
        NSLayoutManager *lm = NS_ARG_AS(NSLayoutManager, handle);
        r = (lm != nil && [lm isValidGlyphIndex:(NSUInteger) ns_arg_long(glyphIndex)]) ? 1 : 0;
    }
    return r;
}

zend_long ns_nslayoutmanager_property_for_glyph_at_index(zval *handle, zval *glyphIndex)
{
    zend_long r = 0;
    @autoreleasepool {
        NSLayoutManager *lm = NS_ARG_AS(NSLayoutManager, handle);
        r = lm != nil ? (zend_long) [lm propertyForGlyphAtIndex:(NSUInteger) ns_arg_long(glyphIndex)] : 0;
    }
    return r;
}

zend_long ns_nslayoutmanager_character_index_for_glyph_at_index(zval *handle, zval *glyphIndex)
{
    zend_long r = 0;
    @autoreleasepool {
        NSLayoutManager *lm = NS_ARG_AS(NSLayoutManager, handle);
        r = lm != nil ? (zend_long) [lm characterIndexForGlyphAtIndex:(NSUInteger) ns_arg_long(glyphIndex)] : 0;
    }
    return r;
}

zend_long ns_nslayoutmanager_glyph_index_for_character_at_index(zval *handle, zval *charIndex)
{
    zend_long r = 0;
    @autoreleasepool {
        NSLayoutManager *lm = NS_ARG_AS(NSLayoutManager, handle);
        r = lm != nil ? (zend_long) [lm glyphIndexForCharacterAtIndex:(NSUInteger) ns_arg_long(charIndex)] : 0;
    }
    return r;
}

void ns_nslayoutmanager_set_text_container_for_glyph_range(zval *handle, zval *container, zval *location, zval *length)
{
    @autoreleasepool {
        NSLayoutManager *lm = NS_ARG_AS(NSLayoutManager, handle);
        if (lm == nil) return;
        [lm setTextContainer:NS_ARG_AS(NSTextContainer, container) forGlyphRange:ns_arg_range(location, length)];
    }
}

void ns_nslayoutmanager_set_line_fragment_rect_for_glyph_range_used_rect(zval *handle, zval *x, zval *y, zval *width, zval *height, zval *location, zval *length, zval *usedX, zval *usedY, zval *usedWidth, zval *usedHeight)
{
    @autoreleasepool {
        NSLayoutManager *lm = NS_ARG_AS(NSLayoutManager, handle);
        if (lm == nil) return;
        [lm setLineFragmentRect:ns_arg_rect(x, y, width, height)
                  forGlyphRange:ns_arg_range(location, length)
                       usedRect:ns_arg_rect(usedX, usedY, usedWidth, usedHeight)];
    }
}

void ns_nslayoutmanager_set_extra_line_fragment_rect_used_rect_text_container(zval *handle, zval *x, zval *y, zval *width, zval *height, zval *usedX, zval *usedY, zval *usedWidth, zval *usedHeight, zval *container)
{
    @autoreleasepool {
        NSLayoutManager *lm = NS_ARG_AS(NSLayoutManager, handle);
        if (lm == nil) return;
        [lm setExtraLineFragmentRect:ns_arg_rect(x, y, width, height)
                            usedRect:ns_arg_rect(usedX, usedY, usedWidth, usedHeight)
                       textContainer:NS_ARG_AS(NSTextContainer, container)];
    }
}

void ns_nslayoutmanager_set_location_for_start_of_glyph_range(zval *handle, zval *x, zval *y, zval *location, zval *length)
{
    @autoreleasepool {
        NSLayoutManager *lm = NS_ARG_AS(NSLayoutManager, handle);
        if (lm == nil) return;
        [lm setLocation:ns_arg_point(x, y) forStartOfGlyphRange:ns_arg_range(location, length)];
    }
}

void ns_nslayoutmanager_set_not_shown_attribute_for_glyph_at_index(zval *handle, zval *flag, zval *glyphIndex)
{
    @autoreleasepool {
        NSLayoutManager *lm = NS_ARG_AS(NSLayoutManager, handle);
        if (lm == nil) return;
        [lm setNotShownAttribute:ns_arg_bool(flag) forGlyphAtIndex:(NSUInteger) ns_arg_long(glyphIndex)];
    }
}

void ns_nslayoutmanager_set_draws_outside_line_fragment_for_glyph_at_index(zval *handle, zval *flag, zval *glyphIndex)
{
    @autoreleasepool {
        NSLayoutManager *lm = NS_ARG_AS(NSLayoutManager, handle);
        if (lm == nil) return;
        [lm setDrawsOutsideLineFragment:ns_arg_bool(flag) forGlyphAtIndex:(NSUInteger) ns_arg_long(glyphIndex)];
    }
}

void ns_nslayoutmanager_set_attachment_size_for_glyph_range(zval *handle, zval *width, zval *height, zval *location, zval *length)
{
    @autoreleasepool {
        NSLayoutManager *lm = NS_ARG_AS(NSLayoutManager, handle);
        if (lm == nil) return;
        [lm setAttachmentSize:ns_arg_size(width, height) forGlyphRange:ns_arg_range(location, length)];
    }
}

void ns_nslayoutmanager_get_first_unlaid_character_index_glyph_index(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSLayoutManager *lm = NS_ARG_AS(NSLayoutManager, handle);
        NSUInteger charIndex = 0;
        NSUInteger glyphIndex = 0;
        if (lm != nil) {
            [lm getFirstUnlaidCharacterIndex:&charIndex glyphIndex:&glyphIndex];
        }
        array_init_size(return_value, 2);
        add_assoc_long(return_value, "charIndex", (zend_long) charIndex);
        add_assoc_long(return_value, "glyphIndex", (zend_long) glyphIndex);
    }
}

zend_long ns_nslayoutmanager_first_unlaid_character_index(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSLayoutManager *lm = NS_ARG_AS(NSLayoutManager, handle);
        r = lm != nil ? (zend_long) [lm firstUnlaidCharacterIndex] : 0;
    }
    return r;
}

zend_long ns_nslayoutmanager_first_unlaid_glyph_index(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSLayoutManager *lm = NS_ARG_AS(NSLayoutManager, handle);
        r = lm != nil ? (zend_long) [lm firstUnlaidGlyphIndex] : 0;
    }
    return r;
}

void ns_nslayoutmanager_text_container_for_glyph_at_index_effective_range(zval *return_value, zval *handle, zval *glyphIndex)
{
    @autoreleasepool {
        NSLayoutManager *lm = NS_ARG_AS(NSLayoutManager, handle);
        NSRange effective = NSMakeRange(0, 0);
        NSTextContainer *container = nil;
        if (lm != nil) {
            container = [lm textContainerForGlyphAtIndex:(NSUInteger) ns_arg_long(glyphIndex) effectiveRange:&effective];
        }
        lm_ret_handle_and_range(return_value, container, effective, "effectiveGlyphRange");
    }
}

void ns_nslayoutmanager_text_container_for_glyph_at_index_effective_range_without_additional_layout(zval *return_value, zval *handle, zval *glyphIndex, zval *flag)
{
    @autoreleasepool {
        NSLayoutManager *lm = NS_ARG_AS(NSLayoutManager, handle);
        NSRange effective = NSMakeRange(0, 0);
        NSTextContainer *container = nil;
        if (lm != nil) {
            container = [lm textContainerForGlyphAtIndex:(NSUInteger) ns_arg_long(glyphIndex)
                                          effectiveRange:&effective
                                  withoutAdditionalLayout:ns_arg_bool(flag)];
        }
        lm_ret_handle_and_range(return_value, container, effective, "effectiveGlyphRange");
    }
}

void ns_nslayoutmanager_used_rect_for_text_container(zval *return_value, zval *handle, zval *container)
{
    @autoreleasepool {
        NSLayoutManager *lm = NS_ARG_AS(NSLayoutManager, handle);
        ns_ret_rect(return_value, lm != nil ? [lm usedRectForTextContainer:NS_ARG_AS(NSTextContainer, container)] : NSZeroRect);
    }
}

void ns_nslayoutmanager_line_fragment_rect_for_glyph_at_index_effective_range(zval *return_value, zval *handle, zval *glyphIndex)
{
    @autoreleasepool {
        NSLayoutManager *lm = NS_ARG_AS(NSLayoutManager, handle);
        NSRange effective = NSMakeRange(0, 0);
        NSRect rect = NSZeroRect;
        if (lm != nil) {
            rect = [lm lineFragmentRectForGlyphAtIndex:(NSUInteger) ns_arg_long(glyphIndex) effectiveRange:&effective];
        }
        lm_ret_rect_and_range(return_value, rect, effective, "effectiveGlyphRange");
    }
}

void ns_nslayoutmanager_line_fragment_rect_for_glyph_at_index_effective_range_without_additional_layout(zval *return_value, zval *handle, zval *glyphIndex, zval *flag)
{
    @autoreleasepool {
        NSLayoutManager *lm = NS_ARG_AS(NSLayoutManager, handle);
        NSRange effective = NSMakeRange(0, 0);
        NSRect rect = NSZeroRect;
        if (lm != nil) {
            rect = [lm lineFragmentRectForGlyphAtIndex:(NSUInteger) ns_arg_long(glyphIndex)
                                        effectiveRange:&effective
                                withoutAdditionalLayout:ns_arg_bool(flag)];
        }
        lm_ret_rect_and_range(return_value, rect, effective, "effectiveGlyphRange");
    }
}

void ns_nslayoutmanager_line_fragment_used_rect_for_glyph_at_index_effective_range(zval *return_value, zval *handle, zval *glyphIndex)
{
    @autoreleasepool {
        NSLayoutManager *lm = NS_ARG_AS(NSLayoutManager, handle);
        NSRange effective = NSMakeRange(0, 0);
        NSRect rect = NSZeroRect;
        if (lm != nil) {
            rect = [lm lineFragmentUsedRectForGlyphAtIndex:(NSUInteger) ns_arg_long(glyphIndex) effectiveRange:&effective];
        }
        lm_ret_rect_and_range(return_value, rect, effective, "effectiveGlyphRange");
    }
}

void ns_nslayoutmanager_line_fragment_used_rect_for_glyph_at_index_effective_range_without_additional_layout(zval *return_value, zval *handle, zval *glyphIndex, zval *flag)
{
    @autoreleasepool {
        NSLayoutManager *lm = NS_ARG_AS(NSLayoutManager, handle);
        NSRange effective = NSMakeRange(0, 0);
        NSRect rect = NSZeroRect;
        if (lm != nil) {
            rect = [lm lineFragmentUsedRectForGlyphAtIndex:(NSUInteger) ns_arg_long(glyphIndex)
                                            effectiveRange:&effective
                                    withoutAdditionalLayout:ns_arg_bool(flag)];
        }
        lm_ret_rect_and_range(return_value, rect, effective, "effectiveGlyphRange");
    }
}

void ns_nslayoutmanager_extra_line_fragment_rect(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSLayoutManager *lm = NS_ARG_AS(NSLayoutManager, handle);
        ns_ret_rect(return_value, lm != nil ? [lm extraLineFragmentRect] : NSZeroRect);
    }
}

void ns_nslayoutmanager_extra_line_fragment_used_rect(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSLayoutManager *lm = NS_ARG_AS(NSLayoutManager, handle);
        ns_ret_rect(return_value, lm != nil ? [lm extraLineFragmentUsedRect] : NSZeroRect);
    }
}

zend_long ns_nslayoutmanager_extra_line_fragment_text_container(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSLayoutManager *lm = NS_ARG_AS(NSLayoutManager, handle);
        h = ns_handle_for(lm != nil ? [lm extraLineFragmentTextContainer] : nil);
    }
    return h;
}

void ns_nslayoutmanager_location_for_glyph_at_index(zval *return_value, zval *handle, zval *glyphIndex)
{
    @autoreleasepool {
        NSLayoutManager *lm = NS_ARG_AS(NSLayoutManager, handle);
        ns_ret_point(return_value, lm != nil ? [lm locationForGlyphAtIndex:(NSUInteger) ns_arg_long(glyphIndex)] : NSZeroPoint);
    }
}

zend_long ns_nslayoutmanager_not_shown_attribute_for_glyph_at_index(zval *handle, zval *glyphIndex)
{
    zend_long r = 0;
    @autoreleasepool {
        NSLayoutManager *lm = NS_ARG_AS(NSLayoutManager, handle);
        r = (lm != nil && [lm notShownAttributeForGlyphAtIndex:(NSUInteger) ns_arg_long(glyphIndex)]) ? 1 : 0;
    }
    return r;
}

zend_long ns_nslayoutmanager_draws_outside_line_fragment_for_glyph_at_index(zval *handle, zval *glyphIndex)
{
    zend_long r = 0;
    @autoreleasepool {
        NSLayoutManager *lm = NS_ARG_AS(NSLayoutManager, handle);
        r = (lm != nil && [lm drawsOutsideLineFragmentForGlyphAtIndex:(NSUInteger) ns_arg_long(glyphIndex)]) ? 1 : 0;
    }
    return r;
}

void ns_nslayoutmanager_attachment_size_for_glyph_at_index(zval *return_value, zval *handle, zval *glyphIndex)
{
    @autoreleasepool {
        NSLayoutManager *lm = NS_ARG_AS(NSLayoutManager, handle);
        ns_ret_size(return_value, lm != nil ? [lm attachmentSizeForGlyphAtIndex:(NSUInteger) ns_arg_long(glyphIndex)] : NSZeroSize);
    }
}

void ns_nslayoutmanager_truncated_glyph_range_in_line_fragment_for_glyph_at_index(zval *return_value, zval *handle, zval *glyphIndex)
{
    @autoreleasepool {
        NSLayoutManager *lm = NS_ARG_AS(NSLayoutManager, handle);
        ns_ret_range(return_value, lm != nil ? [lm truncatedGlyphRangeInLineFragmentForGlyphAtIndex:(NSUInteger) ns_arg_long(glyphIndex)] : NSMakeRange(0, 0));
    }
}

void ns_nslayoutmanager_glyph_range_for_character_range_actual_character_range(zval *return_value, zval *handle, zval *location, zval *length)
{
    @autoreleasepool {
        NSLayoutManager *lm = NS_ARG_AS(NSLayoutManager, handle);
        NSRange actual = NSMakeRange(0, 0);
        NSRange glyphs = NSMakeRange(0, 0);
        if (lm != nil) {
            glyphs = [lm glyphRangeForCharacterRange:ns_arg_range(location, length) actualCharacterRange:&actual];
        }
        lm_ret_range_and_range(return_value, glyphs, actual, "actualCharacterRange");
    }
}

void ns_nslayoutmanager_character_range_for_glyph_range_actual_glyph_range(zval *return_value, zval *handle, zval *location, zval *length)
{
    @autoreleasepool {
        NSLayoutManager *lm = NS_ARG_AS(NSLayoutManager, handle);
        NSRange actual = NSMakeRange(0, 0);
        NSRange chars = NSMakeRange(0, 0);
        if (lm != nil) {
            chars = [lm characterRangeForGlyphRange:ns_arg_range(location, length) actualGlyphRange:&actual];
        }
        lm_ret_range_and_range(return_value, chars, actual, "actualGlyphRange");
    }
}

void ns_nslayoutmanager_glyph_range_for_text_container(zval *return_value, zval *handle, zval *container)
{
    @autoreleasepool {
        NSLayoutManager *lm = NS_ARG_AS(NSLayoutManager, handle);
        ns_ret_range(return_value, lm != nil ? [lm glyphRangeForTextContainer:NS_ARG_AS(NSTextContainer, container)] : NSMakeRange(0, 0));
    }
}

void ns_nslayoutmanager_range_of_nominally_spaced_glyphs_containing_index(zval *return_value, zval *handle, zval *glyphIndex)
{
    @autoreleasepool {
        NSLayoutManager *lm = NS_ARG_AS(NSLayoutManager, handle);
        ns_ret_range(return_value, lm != nil ? [lm rangeOfNominallySpacedGlyphsContainingIndex:(NSUInteger) ns_arg_long(glyphIndex)] : NSMakeRange(0, 0));
    }
}

void ns_nslayoutmanager_bounding_rect_for_glyph_range_in_text_container(zval *return_value, zval *handle, zval *location, zval *length, zval *container)
{
    @autoreleasepool {
        NSLayoutManager *lm = NS_ARG_AS(NSLayoutManager, handle);
        ns_ret_rect(return_value, lm != nil ? [lm boundingRectForGlyphRange:ns_arg_range(location, length) inTextContainer:NS_ARG_AS(NSTextContainer, container)] : NSZeroRect);
    }
}

void ns_nslayoutmanager_glyph_range_for_bounding_rect_in_text_container(zval *return_value, zval *handle, zval *x, zval *y, zval *width, zval *height, zval *container)
{
    @autoreleasepool {
        NSLayoutManager *lm = NS_ARG_AS(NSLayoutManager, handle);
        ns_ret_range(return_value, lm != nil ? [lm glyphRangeForBoundingRect:ns_arg_rect(x, y, width, height) inTextContainer:NS_ARG_AS(NSTextContainer, container)] : NSMakeRange(0, 0));
    }
}

void ns_nslayoutmanager_glyph_range_for_bounding_rect_without_additional_layout_in_text_container(zval *return_value, zval *handle, zval *x, zval *y, zval *width, zval *height, zval *container)
{
    @autoreleasepool {
        NSLayoutManager *lm = NS_ARG_AS(NSLayoutManager, handle);
        ns_ret_range(return_value, lm != nil ? [lm glyphRangeForBoundingRectWithoutAdditionalLayout:ns_arg_rect(x, y, width, height) inTextContainer:NS_ARG_AS(NSTextContainer, container)] : NSMakeRange(0, 0));
    }
}

void ns_nslayoutmanager_glyph_index_for_point_in_text_container_fraction_of_distance_through_glyph(zval *return_value, zval *handle, zval *x, zval *y, zval *container)
{
    @autoreleasepool {
        NSLayoutManager *lm = NS_ARG_AS(NSLayoutManager, handle);
        CGFloat fraction = 0.0;
        NSUInteger index = 0;
        if (lm != nil) {
            index = [lm glyphIndexForPoint:ns_arg_point(x, y)
                           inTextContainer:NS_ARG_AS(NSTextContainer, container)
          fractionOfDistanceThroughGlyph:&fraction];
        }
        lm_ret_int_and_double(return_value, (zend_long) index, (double) fraction, "partialFraction");
    }
}

zend_long ns_nslayoutmanager_glyph_index_for_point_in_text_container(zval *handle, zval *x, zval *y, zval *container)
{
    zend_long r = 0;
    @autoreleasepool {
        NSLayoutManager *lm = NS_ARG_AS(NSLayoutManager, handle);
        r = lm != nil ? (zend_long) [lm glyphIndexForPoint:ns_arg_point(x, y) inTextContainer:NS_ARG_AS(NSTextContainer, container)] : 0;
    }
    return r;
}

double ns_nslayoutmanager_fraction_of_distance_through_glyph_for_point_in_text_container(zval *handle, zval *x, zval *y, zval *container)
{
    double r = 0.0;
    @autoreleasepool {
        NSLayoutManager *lm = NS_ARG_AS(NSLayoutManager, handle);
        r = lm != nil ? (double) [lm fractionOfDistanceThroughGlyphForPoint:ns_arg_point(x, y) inTextContainer:NS_ARG_AS(NSTextContainer, container)] : 0.0;
    }
    return r;
}

void ns_nslayoutmanager_character_index_for_point_in_text_container_fraction_of_distance_between_insertion_points(zval *return_value, zval *handle, zval *x, zval *y, zval *container)
{
    @autoreleasepool {
        NSLayoutManager *lm = NS_ARG_AS(NSLayoutManager, handle);
        CGFloat fraction = 0.0;
        NSUInteger index = 0;
        if (lm != nil) {
            index = [lm characterIndexForPoint:ns_arg_point(x, y)
                               inTextContainer:NS_ARG_AS(NSTextContainer, container)
   fractionOfDistanceBetweenInsertionPoints:&fraction];
        }
        lm_ret_int_and_double(return_value, (zend_long) index, (double) fraction, "partialFraction");
    }
}

void ns_nslayoutmanager_draw_background_for_glyph_range_at_point(zval *handle, zval *location, zval *length, zval *x, zval *y)
{
    @autoreleasepool {
        NSLayoutManager *lm = NS_ARG_AS(NSLayoutManager, handle);
        if (lm == nil) return;
        [lm drawBackgroundForGlyphRange:ns_arg_range(location, length) atPoint:ns_arg_point(x, y)];
    }
}

void ns_nslayoutmanager_draw_glyphs_for_glyph_range_at_point(zval *handle, zval *location, zval *length, zval *x, zval *y)
{
    @autoreleasepool {
        NSLayoutManager *lm = NS_ARG_AS(NSLayoutManager, handle);
        if (lm == nil) return;
        [lm drawGlyphsForGlyphRange:ns_arg_range(location, length) atPoint:ns_arg_point(x, y)];
    }
}

void ns_nslayoutmanager_draw_underline_for_glyph_range_underline_type_baseline_offset_line_fragment_rect_line_fragment_glyph_range_container_origin(zval *handle, zval *location, zval *length, zval *underlineVal, zval *baselineOffset, zval *x, zval *y, zval *width, zval *height, zval *lineLocation, zval *lineLength, zval *originX, zval *originY)
{
    @autoreleasepool {
        NSLayoutManager *lm = NS_ARG_AS(NSLayoutManager, handle);
        if (lm == nil) return;
        [lm drawUnderlineForGlyphRange:ns_arg_range(location, length)
                         underlineType:(NSUnderlineStyle) ns_arg_long(underlineVal)
                        baselineOffset:ns_arg_double(baselineOffset)
                      lineFragmentRect:ns_arg_rect(x, y, width, height)
                 lineFragmentGlyphRange:ns_arg_range(lineLocation, lineLength)
                       containerOrigin:ns_arg_point(originX, originY)];
    }
}

void ns_nslayoutmanager_underline_glyph_range_underline_type_line_fragment_rect_line_fragment_glyph_range_container_origin(zval *handle, zval *location, zval *length, zval *underlineVal, zval *x, zval *y, zval *width, zval *height, zval *lineLocation, zval *lineLength, zval *originX, zval *originY)
{
    @autoreleasepool {
        NSLayoutManager *lm = NS_ARG_AS(NSLayoutManager, handle);
        if (lm == nil) return;
        [lm underlineGlyphRange:ns_arg_range(location, length)
                  underlineType:(NSUnderlineStyle) ns_arg_long(underlineVal)
               lineFragmentRect:ns_arg_rect(x, y, width, height)
          lineFragmentGlyphRange:ns_arg_range(lineLocation, lineLength)
                containerOrigin:ns_arg_point(originX, originY)];
    }
}

void ns_nslayoutmanager_draw_strikethrough_for_glyph_range_strikethrough_type_baseline_offset_line_fragment_rect_line_fragment_glyph_range_container_origin(zval *handle, zval *location, zval *length, zval *strikethroughVal, zval *baselineOffset, zval *x, zval *y, zval *width, zval *height, zval *lineLocation, zval *lineLength, zval *originX, zval *originY)
{
    @autoreleasepool {
        NSLayoutManager *lm = NS_ARG_AS(NSLayoutManager, handle);
        if (lm == nil) return;
        [lm drawStrikethroughForGlyphRange:ns_arg_range(location, length)
                         strikethroughType:(NSUnderlineStyle) ns_arg_long(strikethroughVal)
                            baselineOffset:ns_arg_double(baselineOffset)
                          lineFragmentRect:ns_arg_rect(x, y, width, height)
                     lineFragmentGlyphRange:ns_arg_range(lineLocation, lineLength)
                           containerOrigin:ns_arg_point(originX, originY)];
    }
}

void ns_nslayoutmanager_strikethrough_glyph_range_strikethrough_type_line_fragment_rect_line_fragment_glyph_range_container_origin(zval *handle, zval *location, zval *length, zval *strikethroughVal, zval *x, zval *y, zval *width, zval *height, zval *lineLocation, zval *lineLength, zval *originX, zval *originY)
{
    @autoreleasepool {
        NSLayoutManager *lm = NS_ARG_AS(NSLayoutManager, handle);
        if (lm == nil) return;
        [lm strikethroughGlyphRange:ns_arg_range(location, length)
                  strikethroughType:(NSUnderlineStyle) ns_arg_long(strikethroughVal)
                   lineFragmentRect:ns_arg_rect(x, y, width, height)
              lineFragmentGlyphRange:ns_arg_range(lineLocation, lineLength)
                    containerOrigin:ns_arg_point(originX, originY)];
    }
}

void ns_nslayoutmanager_show_attachment_cell_in_rect_character_index(zval *handle, zval *cell, zval *x, zval *y, zval *width, zval *height, zval *attachmentIndex)
{
    @autoreleasepool {
        NSLayoutManager *lm = NS_ARG_AS(NSLayoutManager, handle);
        if (lm == nil) return;
        [lm showAttachmentCell:NS_ARG_AS(NSCell, cell) inRect:ns_arg_rect(x, y, width, height) characterIndex:(NSUInteger) ns_arg_long(attachmentIndex)];
    }
}

void ns_nslayoutmanager_set_layout_rect_for_text_block_glyph_range(zval *handle, zval *x, zval *y, zval *width, zval *height, zval *block, zval *location, zval *length)
{
    @autoreleasepool {
        NSLayoutManager *lm = NS_ARG_AS(NSLayoutManager, handle);
        if (lm == nil) return;
        [lm setLayoutRect:ns_arg_rect(x, y, width, height) forTextBlock:NS_ARG_AS(NSTextBlock, block) glyphRange:ns_arg_range(location, length)];
    }
}

void ns_nslayoutmanager_set_bounds_rect_for_text_block_glyph_range(zval *handle, zval *x, zval *y, zval *width, zval *height, zval *block, zval *location, zval *length)
{
    @autoreleasepool {
        NSLayoutManager *lm = NS_ARG_AS(NSLayoutManager, handle);
        if (lm == nil) return;
        [lm setBoundsRect:ns_arg_rect(x, y, width, height) forTextBlock:NS_ARG_AS(NSTextBlock, block) glyphRange:ns_arg_range(location, length)];
    }
}

void ns_nslayoutmanager_layout_rect_for_text_block_glyph_range(zval *return_value, zval *handle, zval *block, zval *location, zval *length)
{
    @autoreleasepool {
        NSLayoutManager *lm = NS_ARG_AS(NSLayoutManager, handle);
        ns_ret_rect(return_value, lm != nil ? [lm layoutRectForTextBlock:NS_ARG_AS(NSTextBlock, block) glyphRange:ns_arg_range(location, length)] : NSZeroRect);
    }
}

void ns_nslayoutmanager_bounds_rect_for_text_block_glyph_range(zval *return_value, zval *handle, zval *block, zval *location, zval *length)
{
    @autoreleasepool {
        NSLayoutManager *lm = NS_ARG_AS(NSLayoutManager, handle);
        ns_ret_rect(return_value, lm != nil ? [lm boundsRectForTextBlock:NS_ARG_AS(NSTextBlock, block) glyphRange:ns_arg_range(location, length)] : NSZeroRect);
    }
}

void ns_nslayoutmanager_layout_rect_for_text_block_at_index_effective_range(zval *return_value, zval *handle, zval *block, zval *glyphIndex)
{
    @autoreleasepool {
        NSLayoutManager *lm = NS_ARG_AS(NSLayoutManager, handle);
        NSRange effective = NSMakeRange(0, 0);
        NSRect rect = NSZeroRect;
        if (lm != nil) {
            rect = [lm layoutRectForTextBlock:NS_ARG_AS(NSTextBlock, block)
                                      atIndex:(NSUInteger) ns_arg_long(glyphIndex)
                               effectiveRange:&effective];
        }
        lm_ret_rect_and_range(return_value, rect, effective, "effectiveGlyphRange");
    }
}

void ns_nslayoutmanager_bounds_rect_for_text_block_at_index_effective_range(zval *return_value, zval *handle, zval *block, zval *glyphIndex)
{
    @autoreleasepool {
        NSLayoutManager *lm = NS_ARG_AS(NSLayoutManager, handle);
        NSRange effective = NSMakeRange(0, 0);
        NSRect rect = NSZeroRect;
        if (lm != nil) {
            rect = [lm boundsRectForTextBlock:NS_ARG_AS(NSTextBlock, block)
                                      atIndex:(NSUInteger) ns_arg_long(glyphIndex)
                               effectiveRange:&effective];
        }
        lm_ret_rect_and_range(return_value, rect, effective, "effectiveGlyphRange");
    }
}

void ns_nslayoutmanager_temporary_attributes_at_character_index_effective_range(zval *return_value, zval *handle, zval *charIndex)
{
    @autoreleasepool {
        NSLayoutManager *lm = NS_ARG_AS(NSLayoutManager, handle);
        NSRange effective = NSMakeRange(0, 0);
        NSDictionary *attrs = nil;
        if (lm != nil) {
            attrs = [lm temporaryAttributesAtCharacterIndex:(NSUInteger) ns_arg_long(charIndex) effectiveRange:&effective];
        }
        lm_ret_handle_and_range(return_value, attrs, effective, "effectiveCharRange");
    }
}

void ns_nslayoutmanager_set_temporary_attributes_for_character_range(zval *handle, zval *attrs, zval *location, zval *length)
{
    @autoreleasepool {
        NSLayoutManager *lm = NS_ARG_AS(NSLayoutManager, handle);
        if (lm == nil) return;
        [lm setTemporaryAttributes:ns_arg_dictionary(attrs) forCharacterRange:ns_arg_range(location, length)];
    }
}

void ns_nslayoutmanager_add_temporary_attributes_for_character_range(zval *handle, zval *attrs, zval *location, zval *length)
{
    @autoreleasepool {
        NSLayoutManager *lm = NS_ARG_AS(NSLayoutManager, handle);
        if (lm == nil) return;
        [lm addTemporaryAttributes:ns_arg_dictionary(attrs) forCharacterRange:ns_arg_range(location, length)];
    }
}

void ns_nslayoutmanager_remove_temporary_attribute_for_character_range(zval *handle, zval *attrName, zval *location, zval *length)
{
    @autoreleasepool {
        NSLayoutManager *lm = NS_ARG_AS(NSLayoutManager, handle);
        if (lm == nil) return;
        [lm removeTemporaryAttribute:ns_arg_string(attrName) forCharacterRange:ns_arg_range(location, length)];
    }
}

void ns_nslayoutmanager_temporary_attribute_at_character_index_effective_range(zval *return_value, zval *handle, zval *attrName, zval *location)
{
    @autoreleasepool {
        NSLayoutManager *lm = NS_ARG_AS(NSLayoutManager, handle);
        NSRange range = NSMakeRange(0, 0);
        id value = nil;
        if (lm != nil) {
            value = [lm temporaryAttribute:ns_arg_string(attrName) atCharacterIndex:(NSUInteger) ns_arg_long(location) effectiveRange:&range];
        }
        lm_ret_handle_and_range(return_value, value, range, "range");
    }
}

void ns_nslayoutmanager_temporary_attribute_at_character_index_longest_effective_range_in_range(zval *return_value, zval *handle, zval *attrName, zval *location, zval *rangeLimitLocation, zval *rangeLimitLength)
{
    @autoreleasepool {
        NSLayoutManager *lm = NS_ARG_AS(NSLayoutManager, handle);
        NSRange range = NSMakeRange(0, 0);
        id value = nil;
        if (lm != nil) {
            value = [lm temporaryAttribute:ns_arg_string(attrName)
                         atCharacterIndex:(NSUInteger) ns_arg_long(location)
                    longestEffectiveRange:&range
                                  inRange:ns_arg_range(rangeLimitLocation, rangeLimitLength)];
        }
        lm_ret_handle_and_range(return_value, value, range, "range");
    }
}

void ns_nslayoutmanager_temporary_attributes_at_character_index_longest_effective_range_in_range(zval *return_value, zval *handle, zval *location, zval *rangeLimitLocation, zval *rangeLimitLength)
{
    @autoreleasepool {
        NSLayoutManager *lm = NS_ARG_AS(NSLayoutManager, handle);
        NSRange range = NSMakeRange(0, 0);
        NSDictionary *attrs = nil;
        if (lm != nil) {
            attrs = [lm temporaryAttributesAtCharacterIndex:(NSUInteger) ns_arg_long(location)
                                      longestEffectiveRange:&range
                                                    inRange:ns_arg_range(rangeLimitLocation, rangeLimitLength)];
        }
        lm_ret_handle_and_range(return_value, attrs, range, "range");
    }
}

void ns_nslayoutmanager_add_temporary_attribute_value_for_character_range(zval *handle, zval *attrName, zval *value, zval *location, zval *length)
{
    @autoreleasepool {
        NSLayoutManager *lm = NS_ARG_AS(NSLayoutManager, handle);
        if (lm == nil) return;
        [lm addTemporaryAttribute:ns_arg_string(attrName) value:ns_arg_object(value) forCharacterRange:ns_arg_range(location, length)];
    }
}

double ns_nslayoutmanager_default_line_height_for_font(zval *handle, zval *theFont)
{
    double r = 0.0;
    @autoreleasepool {
        NSLayoutManager *lm = NS_ARG_AS(NSLayoutManager, handle);
        r = lm != nil ? (double) [lm defaultLineHeightForFont:NS_ARG_AS(NSFont, theFont)] : 0.0;
    }
    return r;
}

double ns_nslayoutmanager_default_baseline_offset_for_font(zval *handle, zval *theFont)
{
    double r = 0.0;
    @autoreleasepool {
        NSLayoutManager *lm = NS_ARG_AS(NSLayoutManager, handle);
        r = lm != nil ? (double) [lm defaultBaselineOffsetForFont:NS_ARG_AS(NSFont, theFont)] : 0.0;
    }
    return r;
}

void ns_nslayoutmanager_ruler_markers_for_text_view_paragraph_style_ruler(zval *return_value, zval *handle, zval *view, zval *style, zval *ruler)
{
    @autoreleasepool {
        NSLayoutManager *lm = NS_ARG_AS(NSLayoutManager, handle);
        ns_ret_object_array(return_value, lm != nil ? [lm rulerMarkersForTextView:NS_ARG_AS(NSTextView, view) paragraphStyle:NS_ARG_AS(NSParagraphStyle, style) ruler:NS_ARG_AS(NSRulerView, ruler)] : nil);
    }
}

zend_long ns_nslayoutmanager_ruler_accessory_view_for_text_view_paragraph_style_ruler_enabled(zval *handle, zval *view, zval *style, zval *ruler, zval *isEnabled)
{
    zend_long h = 0;
    @autoreleasepool {
        NSLayoutManager *lm = NS_ARG_AS(NSLayoutManager, handle);
        h = ns_handle_for(lm != nil ? [lm rulerAccessoryViewForTextView:NS_ARG_AS(NSTextView, view) paragraphStyle:NS_ARG_AS(NSParagraphStyle, style) ruler:NS_ARG_AS(NSRulerView, ruler) enabled:ns_arg_bool(isEnabled)] : nil);
    }
    return h;
}

zend_long ns_nslayoutmanager_layout_manager_owns_first_responder_in_window(zval *handle, zval *window)
{
    zend_long r = 0;
    @autoreleasepool {
        NSLayoutManager *lm = NS_ARG_AS(NSLayoutManager, handle);
        r = (lm != nil && [lm layoutManagerOwnsFirstResponderInWindow:NS_ARG_AS(NSWindow, window)]) ? 1 : 0;
    }
    return r;
}

zend_long ns_nslayoutmanager_first_text_view(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSLayoutManager *lm = NS_ARG_AS(NSLayoutManager, handle);
        h = ns_handle_for(lm != nil ? [lm firstTextView] : nil);
    }
    return h;
}

zend_long ns_nslayoutmanager_text_view_for_beginning_of_selection(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSLayoutManager *lm = NS_ARG_AS(NSLayoutManager, handle);
        h = ns_handle_for(lm != nil ? [lm textViewForBeginningOfSelection] : nil);
    }
    return h;
}

void ns_nslayoutmanager_glyph_at_index_is_valid_index(zval *return_value, zval *handle, zval *glyphIndex)
{
    @autoreleasepool {
        NSLayoutManager *lm = NS_ARG_AS(NSLayoutManager, handle);
        BOOL isValid = NO;
        NSGlyph glyph = 0;
        if (lm != nil) {
            glyph = [lm glyphAtIndex:(NSUInteger) ns_arg_long(glyphIndex) isValidIndex:&isValid];
        }
        lm_ret_int_and_bool(return_value, (zend_long) glyph, isValid, "isValidIndex");
    }
}

zend_long ns_nslayoutmanager_glyph_at_index(zval *handle, zval *glyphIndex)
{
    zend_long r = 0;
    @autoreleasepool {
        NSLayoutManager *lm = NS_ARG_AS(NSLayoutManager, handle);
        r = lm != nil ? (zend_long) [lm glyphAtIndex:(NSUInteger) ns_arg_long(glyphIndex)] : 0;
    }
    return r;
}

void ns_nslayoutmanager_rect_array_for_character_range_within_selected_character_range_in_text_container_rect_count(zval *return_value, zval *handle, zval *location, zval *length, zval *selLocation, zval *selLength, zval *container)
{
    @autoreleasepool {
        NSLayoutManager *lm = NS_ARG_AS(NSLayoutManager, handle);
        NSUInteger rectCount = 0;
        NSRectArray rects = NULL;
        if (lm != nil) {
            rects = [lm rectArrayForCharacterRange:ns_arg_range(location, length)
                    withinSelectedCharacterRange:ns_arg_range(selLocation, selLength)
                                 inTextContainer:NS_ARG_AS(NSTextContainer, container)
                                       rectCount:&rectCount];
        }
        lm_ret_rect_array(return_value, rects, rectCount);
    }
}

void ns_nslayoutmanager_rect_array_for_glyph_range_within_selected_glyph_range_in_text_container_rect_count(zval *return_value, zval *handle, zval *location, zval *length, zval *selLocation, zval *selLength, zval *container)
{
    @autoreleasepool {
        NSLayoutManager *lm = NS_ARG_AS(NSLayoutManager, handle);
        NSUInteger rectCount = 0;
        NSRectArray rects = NULL;
        if (lm != nil) {
            rects = [lm rectArrayForGlyphRange:ns_arg_range(location, length)
                    withinSelectedGlyphRange:ns_arg_range(selLocation, selLength)
                             inTextContainer:NS_ARG_AS(NSTextContainer, container)
                                   rectCount:&rectCount];
        }
        lm_ret_rect_array(return_value, rects, rectCount);
    }
}

zend_long ns_nslayoutmanager_glyph_generator(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSLayoutManager *lm = NS_ARG_AS(NSLayoutManager, handle);
        h = ns_handle_for(lm != nil ? [lm glyphGenerator] : nil);
    }
    return h;
}

void ns_nslayoutmanager_set_glyph_generator(zval *handle, zval *glyphGenerator)
{
    @autoreleasepool {
        NSLayoutManager *lm = NS_ARG_AS(NSLayoutManager, handle);
        if (lm == nil) return;
        [lm setGlyphGenerator:NS_ARG_AS(NSGlyphGenerator, glyphGenerator)];
    }
}
