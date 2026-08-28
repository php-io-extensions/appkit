#ifndef PHP_APPKIT_NS_FONT_H
#define PHP_APPKIT_NS_FONT_H

/*
 * Faithful 1:1 binding of AppKit NSFont.h. Every member of the class
 * (base interface + same-file NSFont_Deprecated and NSFont_TextStyles
 * categories) is either bound or reserved. Nothing is omitted.
 * Adopted NSCopying / NSSecureCoding are not class members. The
 * NSFontIdentityMatrix constant, notification names, NSGlyph /
 * NSControlGlyph / NSNullGlyph, the NSFontRenderingMode and
 * NSMultibyteGlyphPacking typedefs, and NSConvertGlyphsToPackedGlyphs
 * are not class members. This header declares no initializer —
 * construction is the class factory methods (not alloc+init).
 * Inherited NSObject members stay on that class.
 *
 * Comment-only "soft deprecated" NSFont_Deprecated members stay
 * bound. Reserved: fontWithName:matrix: and the matrix property
 * (const CGFloat * / NS_RETURNS_INNER_POINTER) and the five bulk
 * glyph-metric methods (C glyph/rect/size/packed buffers).
 * NSFontWeight / NSFontWidth are CGFloat and cross as double.
 * NSControlSize / NSStringEncoding / NSGlyph / CGGlyph /
 * NSFontRenderingMode cross as int. Nullable familyName /
 * displayName cross as var. Font / descriptor / transform /
 * character-set / graphics-context / options-dictionary objects
 * cross as int handles (0 = nil). boundingRectForFont /
 * boundingRectForCGGlyph / boundingRectForGlyph are
 * {x, y, width, height}; maximumAdvancement /
 * advancementForCGGlyph / advancementForGlyph are {width, height}.
 * getter=isFixedPitch / isVertical emit as isFixedPitch / isVertical.
 */

#include "php.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ---- Factory ---- */

/*@zep NS\NSFont fontWithNameSize(string fontName, double fontSize) -> int */
zend_long ns_nsfont_font_with_name_size(zval *fontName, zval *fontSize);
/*@reserved NS\NSFont + (nullable NSFont *)fontWithName:(NSString *)fontName matrix:(const CGFloat *)fontMatrix — C font-matrix pointer */
/*@zep NS\NSFont fontWithDescriptorSize(int fontDescriptor, double fontSize) -> int */
zend_long ns_nsfont_font_with_descriptor_size(zval *fontDescriptor, zval *fontSize);
/*@zep NS\NSFont fontWithDescriptorTextTransform(int fontDescriptor, int textTransform) -> int */
zend_long ns_nsfont_font_with_descriptor_text_transform(zval *fontDescriptor, zval *textTransform);

/* ---- Meta Font ---- */

/*@zep NS\NSFont userFontOfSize(double fontSize) -> int */
zend_long ns_nsfont_user_font_of_size(zval *fontSize);
/*@zep NS\NSFont userFixedPitchFontOfSize(double fontSize) -> int */
zend_long ns_nsfont_user_fixed_pitch_font_of_size(zval *fontSize);
/*@zep NS\NSFont setUserFont(int font) -> void */
void ns_nsfont_set_user_font(zval *font);
/*@zep NS\NSFont setUserFixedPitchFont(int font) -> void */
void ns_nsfont_set_user_fixed_pitch_font(zval *font);

/*@zep NS\NSFont systemFontOfSize(double fontSize) -> int */
zend_long ns_nsfont_system_font_of_size(zval *fontSize);
/*@zep NS\NSFont boldSystemFontOfSize(double fontSize) -> int */
zend_long ns_nsfont_bold_system_font_of_size(zval *fontSize);
/*@zep NS\NSFont labelFontOfSize(double fontSize) -> int */
zend_long ns_nsfont_label_font_of_size(zval *fontSize);

/*@zep NS\NSFont titleBarFontOfSize(double fontSize) -> int */
zend_long ns_nsfont_title_bar_font_of_size(zval *fontSize);
/*@zep NS\NSFont menuFontOfSize(double fontSize) -> int */
zend_long ns_nsfont_menu_font_of_size(zval *fontSize);
/*@zep NS\NSFont menuBarFontOfSize(double fontSize) -> int */
zend_long ns_nsfont_menu_bar_font_of_size(zval *fontSize);
/*@zep NS\NSFont messageFontOfSize(double fontSize) -> int */
zend_long ns_nsfont_message_font_of_size(zval *fontSize);
/*@zep NS\NSFont paletteFontOfSize(double fontSize) -> int */
zend_long ns_nsfont_palette_font_of_size(zval *fontSize);
/*@zep NS\NSFont toolTipsFontOfSize(double fontSize) -> int */
zend_long ns_nsfont_tool_tips_font_of_size(zval *fontSize);
/*@zep NS\NSFont controlContentFontOfSize(double fontSize) -> int */
zend_long ns_nsfont_control_content_font_of_size(zval *fontSize);

/*@zep NS\NSFont systemFontOfSizeWeight(double fontSize, double weight) -> int */
zend_long ns_nsfont_system_font_of_size_weight(zval *fontSize, zval *weight);
/*@zep NS\NSFont monospacedDigitSystemFontOfSizeWeight(double fontSize, double weight) -> int */
zend_long ns_nsfont_monospaced_digit_system_font_of_size_weight(zval *fontSize, zval *weight);
/*@zep NS\NSFont systemFontOfSizeWeightWidth(double fontSize, double weight, double width) -> int */
zend_long ns_nsfont_system_font_of_size_weight_width(zval *fontSize, zval *weight, zval *width);
/*@zep NS\NSFont monospacedSystemFontOfSizeWeight(double fontSize, double weight) -> int */
zend_long ns_nsfont_monospaced_system_font_of_size_weight(zval *fontSize, zval *weight);

/*@zep NS\NSFont fontWithSize(int handle, double fontSize) -> int */
zend_long ns_nsfont_font_with_size(zval *handle, zval *fontSize);

/*@zep NS\NSFont systemFontSize() -> double */
double ns_nsfont_system_font_size(void);
/*@zep NS\NSFont smallSystemFontSize() -> double */
double ns_nsfont_small_system_font_size(void);
/*@zep NS\NSFont labelFontSize() -> double */
double ns_nsfont_label_font_size(void);

/*@zep NS\NSFont systemFontSizeForControlSize(int controlSize) -> double */
double ns_nsfont_system_font_size_for_control_size(zval *controlSize);

/* ---- Core font attribute ---- */

/*@zep NS\NSFont fontName(int handle) -> string */
void ns_nsfont_font_name(zval *return_value, zval *handle);
/*@zep NS\NSFont pointSize(int handle) -> double */
double ns_nsfont_point_size(zval *handle);
/*@reserved NS\NSFont @property (readonly) const CGFloat *matrix NS_RETURNS_INNER_POINTER — C font-matrix pointer */
/*@zep NS\NSFont familyName(int handle) -> var */
void ns_nsfont_family_name(zval *return_value, zval *handle);
/*@zep NS\NSFont displayName(int handle) -> var */
void ns_nsfont_display_name(zval *return_value, zval *handle);
/*@zep NS\NSFont fontDescriptor(int handle) -> int */
zend_long ns_nsfont_font_descriptor(zval *handle);
/*@zep NS\NSFont textTransform(int handle) -> int */
zend_long ns_nsfont_text_transform(zval *handle);

/* ---- Glyph coverage ---- */

/*@zep NS\NSFont numberOfGlyphs(int handle) -> int */
zend_long ns_nsfont_number_of_glyphs(zval *handle);
/*@zep NS\NSFont mostCompatibleStringEncoding(int handle) -> int */
zend_long ns_nsfont_most_compatible_string_encoding(zval *handle);
/*@zep NS\NSFont coveredCharacterSet(int handle) -> int */
zend_long ns_nsfont_covered_character_set(zval *handle);

/* ---- Font instance-wide metrics ---- */

/*@zep NS\NSFont boundingRectForFont(int handle) -> array */
void ns_nsfont_bounding_rect_for_font(zval *return_value, zval *handle);
/*@zep NS\NSFont maximumAdvancement(int handle) -> array */
void ns_nsfont_maximum_advancement(zval *return_value, zval *handle);

/*@zep NS\NSFont ascender(int handle) -> double */
double ns_nsfont_ascender(zval *handle);
/*@zep NS\NSFont descender(int handle) -> double */
double ns_nsfont_descender(zval *handle);
/*@zep NS\NSFont leading(int handle) -> double */
double ns_nsfont_leading(zval *handle);

/*@zep NS\NSFont underlinePosition(int handle) -> double */
double ns_nsfont_underline_position(zval *handle);
/*@zep NS\NSFont underlineThickness(int handle) -> double */
double ns_nsfont_underline_thickness(zval *handle);
/*@zep NS\NSFont italicAngle(int handle) -> double */
double ns_nsfont_italic_angle(zval *handle);
/*@zep NS\NSFont capHeight(int handle) -> double */
double ns_nsfont_cap_height(zval *handle);
/*@zep NS\NSFont xHeight(int handle) -> double */
double ns_nsfont_x_height(zval *handle);
/*@zep NS\NSFont isFixedPitch(int handle) -> bool */
zend_long ns_nsfont_is_fixed_pitch(zval *handle);

/* ---- Glyph metrics ---- */

/*@zep NS\NSFont boundingRectForCGGlyph(int handle, int glyph) -> array */
void ns_nsfont_bounding_rect_for_cg_glyph(zval *return_value, zval *handle, zval *glyph);
/*@zep NS\NSFont advancementForCGGlyph(int handle, int glyph) -> array */
void ns_nsfont_advancement_for_cg_glyph(zval *return_value, zval *handle, zval *glyph);

/*@reserved NS\NSFont - (void)getBoundingRects:(NSRectArray)bounds forCGGlyphs:(const CGGlyph *)glyphs count:(NSUInteger)glyphCount — C rect/glyph buffers */
/*@reserved NS\NSFont - (void)getAdvancements:(NSSizeArray)advancements forCGGlyphs:(const CGGlyph *)glyphs count:(NSUInteger)glyphCount — C size/glyph buffers */

/* ---- NSGraphicsContext-related ---- */

/*@zep NS\NSFont set(int handle) -> void */
void ns_nsfont_set(zval *handle);
/*@zep NS\NSFont setInContext(int handle, int graphicsContext) -> void */
void ns_nsfont_set_in_context(zval *handle, zval *graphicsContext);

/* ---- Vertical mode ---- */

/*@zep NS\NSFont verticalFont(int handle) -> int */
zend_long ns_nsfont_vertical_font(zval *handle);
/*@zep NS\NSFont isVertical(int handle) -> bool */
zend_long ns_nsfont_is_vertical(zval *handle);

/* ---- NSFont_Deprecated (soft-deprecated; no API_DEPRECATED macros) ---- */

/*@zep NS\NSFont glyphWithName(int handle, string name) -> int */
zend_long ns_nsfont_glyph_with_name(zval *handle, zval *name);
/*@zep NS\NSFont boundingRectForGlyph(int handle, int glyph) -> array */
void ns_nsfont_bounding_rect_for_glyph(zval *return_value, zval *handle, zval *glyph);
/*@zep NS\NSFont advancementForGlyph(int handle, int glyph) -> array */
void ns_nsfont_advancement_for_glyph(zval *return_value, zval *handle, zval *glyph);

/*@reserved NS\NSFont - (void)getBoundingRects:(NSRectArray)bounds forGlyphs:(const NSGlyph *)glyphs count:(NSUInteger)glyphCount — C rect/glyph buffers */
/*@reserved NS\NSFont - (void)getAdvancements:(NSSizeArray)advancements forGlyphs:(const NSGlyph *)glyphs count:(NSUInteger)glyphCount — C size/glyph buffers */
/*@reserved NS\NSFont - (void)getAdvancements:(NSSizeArray)advancements forPackedGlyphs:(const void *)packedGlyphs length:(NSUInteger)length — C size/packed-glyph buffers */

/*@zep NS\NSFont printerFont(int handle) -> int */
zend_long ns_nsfont_printer_font(zval *handle);
/*@zep NS\NSFont screenFont(int handle) -> int */
zend_long ns_nsfont_screen_font(zval *handle);
/*@zep NS\NSFont screenFontWithRenderingMode(int handle, int renderingMode) -> int */
zend_long ns_nsfont_screen_font_with_rendering_mode(zval *handle, zval *renderingMode);
/*@zep NS\NSFont renderingMode(int handle) -> int */
zend_long ns_nsfont_rendering_mode(zval *handle);

/* ---- NSFont_TextStyles ---- */

/*@zep NS\NSFont preferredFontForTextStyleOptions(string style, int options) -> int */
zend_long ns_nsfont_preferred_font_for_text_style_options(zval *style, zval *options);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_FONT_H */
