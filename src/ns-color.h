#ifndef PHP_APPKIT_NS_COLOR_H
#define PHP_APPKIT_NS_COLOR_H

/*
 * Faithful 1:1 binding of AppKit NSColor.h. Every member of the class
 * (base interface + same-file NSDeprecated and NSQuartzCoreAdditions
 * categories) is either bound or reserved. Nothing is omitted.
 * Adopted NSCopying / NSSecureCoding / NSPasteboardReading /
 * NSPasteboardWriting are not class members. Same-file categories on
 * other classes (CIColor(NSAppKitAdditions),
 * NSCoder(NSAppKitColorExtensions)) bind on those classes, not here.
 * The NSColorType / NSColorSystemEffect typedefs, the
 * NSAppKitVersionNumberWithPatternColorLeakFix constant, and
 * NSSystemColorsDidChangeNotification are not class members.
 *
 * Live construction is init (alloc+init glue) plus the class factory
 * methods. Inherited NSObject members stay on that class.
 * Comment-only "soft deprecated" calibrated factories stay bound.
 *
 * Reserved: initWithCoder: (NSCoder); colorWithColorSpace:components:count:
 * and getComponents: (C component buffers);
 * colorWithName:dynamicProvider: (block); colorForControlTint: and
 * the ignoresAlpha class property (API_DEPRECATED) and the entire
 * NSDeprecated category. CGColorRef crosses as int pointer bits
 * (0 = NULL), never a registry handle: colorWithCGColor: takes bits,
 * and the CGColor getter answers bits valid only while the NSColor
 * lives (NS_RETURNS_INNER_POINTER) — hold the colour, not the bits.
 * CIColor on colorWithCIColor: crosses as a handle.
 *
 * NSColorType / NSColorSystemEffect / NSControlTint cross as int.
 * CGFloat components cross as double. Nullable factory / conversion
 * results cross as int handles (0 = nil). Catalog / localized name
 * components are non-null NSString (string). alternatingContentBackgroundColors
 * is handles. NSColorSpace / NSImage / NSBundle / NSPasteboard /
 * CIColor objects cross as handles. drawSwatchInRect: follows the
 * NSRect convention. Scalar out-params on getRed:green:blue:alpha:
 * / getHue:saturation:brightness:alpha: / getWhite:alpha: /
 * getCyan:magenta:yellow:black:alpha: fold into an assoc array
 * whose keys are the ObjC parameter names.
 */

#include "php.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ---- Construction ---- */

/*@zep NS\NSColor init() -> int */
zend_long ns_nscolor_init(void);
/*@reserved NS\NSColor - (nullable instancetype)initWithCoder:(NSCoder *)coder — NSCoder */

/* ---- Component factories ---- */

/*@reserved NS\NSColor + (NSColor *)colorWithColorSpace:(NSColorSpace *)space components:(const CGFloat *)components count:(NSInteger)numberOfComponents — C component buffer */
/*@zep NS\NSColor colorWithSRGBRedGreenBlueAlpha(double red, double green, double blue, double alpha) -> int */
zend_long ns_nscolor_color_with_srgb_red_green_blue_alpha(zval *red, zval *green, zval *blue, zval *alpha);
/*@zep NS\NSColor colorWithGenericGamma22WhiteAlpha(double white, double alpha) -> int */
zend_long ns_nscolor_color_with_generic_gamma22_white_alpha(zval *white, zval *alpha);
/*@zep NS\NSColor colorWithDisplayP3RedGreenBlueAlpha(double red, double green, double blue, double alpha) -> int */
zend_long ns_nscolor_color_with_display_p3_red_green_blue_alpha(zval *red, zval *green, zval *blue, zval *alpha);

/*@zep NS\NSColor colorWithWhiteAlpha(double white, double alpha) -> int */
zend_long ns_nscolor_color_with_white_alpha(zval *white, zval *alpha);
/*@zep NS\NSColor colorWithRedGreenBlueAlpha(double red, double green, double blue, double alpha) -> int */
zend_long ns_nscolor_color_with_red_green_blue_alpha(zval *red, zval *green, zval *blue, zval *alpha);
/*@zep NS\NSColor colorWithHueSaturationBrightnessAlpha(double hue, double saturation, double brightness, double alpha) -> int */
zend_long ns_nscolor_color_with_hue_saturation_brightness_alpha(zval *hue, zval *saturation, zval *brightness, zval *alpha);

/*@zep NS\NSColor colorWithColorSpaceHueSaturationBrightnessAlpha(int space, double hue, double saturation, double brightness, double alpha) -> int */
zend_long ns_nscolor_color_with_color_space_hue_saturation_brightness_alpha(zval *space, zval *hue, zval *saturation, zval *brightness, zval *alpha);

/* ---- Catalog ---- */

/*@zep NS\NSColor colorWithCatalogNameColorName(string listName, string colorName) -> int */
zend_long ns_nscolor_color_with_catalog_name_color_name(zval *listName, zval *colorName);
/*@zep NS\NSColor colorNamedBundle(string name, int bundle) -> int */
zend_long ns_nscolor_color_named_bundle(zval *name, zval *bundle);
/*@zep NS\NSColor colorNamed(string name) -> int */
zend_long ns_nscolor_color_named(zval *name);
/*@reserved NS\NSColor + (NSColor *)colorWithName:(nullable NSColorName)colorName dynamicProvider:(NSColor * (^)(NSAppearance *))dynamicProvider — block */

/* ---- Device / calibrated / pattern ---- */

/*@zep NS\NSColor colorWithDeviceWhiteAlpha(double white, double alpha) -> int */
zend_long ns_nscolor_color_with_device_white_alpha(zval *white, zval *alpha);
/*@zep NS\NSColor colorWithDeviceRedGreenBlueAlpha(double red, double green, double blue, double alpha) -> int */
zend_long ns_nscolor_color_with_device_red_green_blue_alpha(zval *red, zval *green, zval *blue, zval *alpha);
/*@zep NS\NSColor colorWithDeviceHueSaturationBrightnessAlpha(double hue, double saturation, double brightness, double alpha) -> int */
zend_long ns_nscolor_color_with_device_hue_saturation_brightness_alpha(zval *hue, zval *saturation, zval *brightness, zval *alpha);
/*@zep NS\NSColor colorWithDeviceCyanMagentaYellowBlackAlpha(double cyan, double magenta, double yellow, double black, double alpha) -> int */
zend_long ns_nscolor_color_with_device_cyan_magenta_yellow_black_alpha(zval *cyan, zval *magenta, zval *yellow, zval *black, zval *alpha);

/*@zep NS\NSColor colorWithCalibratedWhiteAlpha(double white, double alpha) -> int */
zend_long ns_nscolor_color_with_calibrated_white_alpha(zval *white, zval *alpha);
/*@zep NS\NSColor colorWithCalibratedRedGreenBlueAlpha(double red, double green, double blue, double alpha) -> int */
zend_long ns_nscolor_color_with_calibrated_red_green_blue_alpha(zval *red, zval *green, zval *blue, zval *alpha);
/*@zep NS\NSColor colorWithCalibratedHueSaturationBrightnessAlpha(double hue, double saturation, double brightness, double alpha) -> int */
zend_long ns_nscolor_color_with_calibrated_hue_saturation_brightness_alpha(zval *hue, zval *saturation, zval *brightness, zval *alpha);

/*@zep NS\NSColor colorWithPatternImage(int image) -> int */
zend_long ns_nscolor_color_with_pattern_image(zval *image);

/* ---- Type / conversion ---- */

/*@zep NS\NSColor type(int handle) -> int */
zend_long ns_nscolor_type(zval *handle);
/*@zep NS\NSColor colorUsingType(int handle, int type) -> int */
zend_long ns_nscolor_color_using_type(zval *handle, zval *type);
/*@zep NS\NSColor colorUsingColorSpace(int handle, int space) -> int */
zend_long ns_nscolor_color_using_color_space(zval *handle, zval *space);

/* ---- Convenience colors ---- */

/*@zep NS\NSColor blackColor() -> int */
zend_long ns_nscolor_black_color(void);
/*@zep NS\NSColor darkGrayColor() -> int */
zend_long ns_nscolor_dark_gray_color(void);
/*@zep NS\NSColor lightGrayColor() -> int */
zend_long ns_nscolor_light_gray_color(void);
/*@zep NS\NSColor whiteColor() -> int */
zend_long ns_nscolor_white_color(void);
/*@zep NS\NSColor grayColor() -> int */
zend_long ns_nscolor_gray_color(void);
/*@zep NS\NSColor redColor() -> int */
zend_long ns_nscolor_red_color(void);
/*@zep NS\NSColor greenColor() -> int */
zend_long ns_nscolor_green_color(void);
/*@zep NS\NSColor blueColor() -> int */
zend_long ns_nscolor_blue_color(void);
/*@zep NS\NSColor cyanColor() -> int */
zend_long ns_nscolor_cyan_color(void);
/*@zep NS\NSColor yellowColor() -> int */
zend_long ns_nscolor_yellow_color(void);
/*@zep NS\NSColor magentaColor() -> int */
zend_long ns_nscolor_magenta_color(void);
/*@zep NS\NSColor orangeColor() -> int */
zend_long ns_nscolor_orange_color(void);
/*@zep NS\NSColor purpleColor() -> int */
zend_long ns_nscolor_purple_color(void);
/*@zep NS\NSColor brownColor() -> int */
zend_long ns_nscolor_brown_color(void);
/*@zep NS\NSColor clearColor() -> int */
zend_long ns_nscolor_clear_color(void);

/* ---- Semantic system colors: foreground ---- */

/*@zep NS\NSColor labelColor() -> int */
zend_long ns_nscolor_label_color(void);
/*@zep NS\NSColor secondaryLabelColor() -> int */
zend_long ns_nscolor_secondary_label_color(void);
/*@zep NS\NSColor tertiaryLabelColor() -> int */
zend_long ns_nscolor_tertiary_label_color(void);
/*@zep NS\NSColor quaternaryLabelColor() -> int */
zend_long ns_nscolor_quaternary_label_color(void);
/*@zep NS\NSColor quinaryLabelColor() -> int */
zend_long ns_nscolor_quinary_label_color(void);
/*@zep NS\NSColor linkColor() -> int */
zend_long ns_nscolor_link_color(void);
/*@zep NS\NSColor placeholderTextColor() -> int */
zend_long ns_nscolor_placeholder_text_color(void);
/*@zep NS\NSColor windowFrameTextColor() -> int */
zend_long ns_nscolor_window_frame_text_color(void);
/*@zep NS\NSColor selectedMenuItemTextColor() -> int */
zend_long ns_nscolor_selected_menu_item_text_color(void);
/*@zep NS\NSColor alternateSelectedControlTextColor() -> int */
zend_long ns_nscolor_alternate_selected_control_text_color(void);
/*@zep NS\NSColor headerTextColor() -> int */
zend_long ns_nscolor_header_text_color(void);
/*@zep NS\NSColor separatorColor() -> int */
zend_long ns_nscolor_separator_color(void);
/*@zep NS\NSColor gridColor() -> int */
zend_long ns_nscolor_grid_color(void);

/* ---- Semantic system colors: background ---- */

/*@zep NS\NSColor windowBackgroundColor() -> int */
zend_long ns_nscolor_window_background_color(void);
/*@zep NS\NSColor underPageBackgroundColor() -> int */
zend_long ns_nscolor_under_page_background_color(void);
/*@zep NS\NSColor controlBackgroundColor() -> int */
zend_long ns_nscolor_control_background_color(void);
/*@zep NS\NSColor selectedContentBackgroundColor() -> int */
zend_long ns_nscolor_selected_content_background_color(void);
/*@zep NS\NSColor unemphasizedSelectedContentBackgroundColor() -> int */
zend_long ns_nscolor_unemphasized_selected_content_background_color(void);
/*@zep NS\NSColor alternatingContentBackgroundColors() -> array */
void ns_nscolor_alternating_content_background_colors(zval *return_value);
/*@zep NS\NSColor findHighlightColor() -> int */
zend_long ns_nscolor_find_highlight_color(void);

/* ---- Semantic system colors: text ---- */

/*@zep NS\NSColor textColor() -> int */
zend_long ns_nscolor_text_color(void);
/*@zep NS\NSColor textBackgroundColor() -> int */
zend_long ns_nscolor_text_background_color(void);
/*@zep NS\NSColor textInsertionPointColor() -> int */
zend_long ns_nscolor_text_insertion_point_color(void);
/*@zep NS\NSColor selectedTextColor() -> int */
zend_long ns_nscolor_selected_text_color(void);
/*@zep NS\NSColor selectedTextBackgroundColor() -> int */
zend_long ns_nscolor_selected_text_background_color(void);
/*@zep NS\NSColor unemphasizedSelectedTextBackgroundColor() -> int */
zend_long ns_nscolor_unemphasized_selected_text_background_color(void);
/*@zep NS\NSColor unemphasizedSelectedTextColor() -> int */
zend_long ns_nscolor_unemphasized_selected_text_color(void);

/* ---- Semantic system colors: control ---- */

/*@zep NS\NSColor controlColor() -> int */
zend_long ns_nscolor_control_color(void);
/*@zep NS\NSColor controlTextColor() -> int */
zend_long ns_nscolor_control_text_color(void);
/*@zep NS\NSColor selectedControlColor() -> int */
zend_long ns_nscolor_selected_control_color(void);
/*@zep NS\NSColor selectedControlTextColor() -> int */
zend_long ns_nscolor_selected_control_text_color(void);
/*@zep NS\NSColor disabledControlTextColor() -> int */
zend_long ns_nscolor_disabled_control_text_color(void);
/*@zep NS\NSColor keyboardFocusIndicatorColor() -> int */
zend_long ns_nscolor_keyboard_focus_indicator_color(void);
/*@zep NS\NSColor scrubberTexturedBackgroundColor() -> int */
zend_long ns_nscolor_scrubber_textured_background_color(void);

/* ---- System / fill / accent ---- */

/*@zep NS\NSColor systemRedColor() -> int */
zend_long ns_nscolor_system_red_color(void);
/*@zep NS\NSColor systemGreenColor() -> int */
zend_long ns_nscolor_system_green_color(void);
/*@zep NS\NSColor systemBlueColor() -> int */
zend_long ns_nscolor_system_blue_color(void);
/*@zep NS\NSColor systemOrangeColor() -> int */
zend_long ns_nscolor_system_orange_color(void);
/*@zep NS\NSColor systemYellowColor() -> int */
zend_long ns_nscolor_system_yellow_color(void);
/*@zep NS\NSColor systemBrownColor() -> int */
zend_long ns_nscolor_system_brown_color(void);
/*@zep NS\NSColor systemPinkColor() -> int */
zend_long ns_nscolor_system_pink_color(void);
/*@zep NS\NSColor systemPurpleColor() -> int */
zend_long ns_nscolor_system_purple_color(void);
/*@zep NS\NSColor systemGrayColor() -> int */
zend_long ns_nscolor_system_gray_color(void);
/*@zep NS\NSColor systemTealColor() -> int */
zend_long ns_nscolor_system_teal_color(void);
/*@zep NS\NSColor systemIndigoColor() -> int */
zend_long ns_nscolor_system_indigo_color(void);
/*@zep NS\NSColor systemMintColor() -> int */
zend_long ns_nscolor_system_mint_color(void);
/*@zep NS\NSColor systemCyanColor() -> int */
zend_long ns_nscolor_system_cyan_color(void);
/*@zep NS\NSColor systemFillColor() -> int */
zend_long ns_nscolor_system_fill_color(void);
/*@zep NS\NSColor secondarySystemFillColor() -> int */
zend_long ns_nscolor_secondary_system_fill_color(void);
/*@zep NS\NSColor tertiarySystemFillColor() -> int */
zend_long ns_nscolor_tertiary_system_fill_color(void);
/*@zep NS\NSColor quaternarySystemFillColor() -> int */
zend_long ns_nscolor_quaternary_system_fill_color(void);
/*@zep NS\NSColor quinarySystemFillColor() -> int */
zend_long ns_nscolor_quinary_system_fill_color(void);
/*@zep NS\NSColor controlAccentColor() -> int */
zend_long ns_nscolor_control_accent_color(void);
/*@zep NS\NSColor currentControlTint() -> int */
zend_long ns_nscolor_current_control_tint(void);
/*@reserved NS\NSColor + (NSColor *)colorForControlTint:(NSControlTint)controlTint — API_DEPRECATED */

/* ---- Highlight / shadow / effect ---- */

/*@zep NS\NSColor highlightColor() -> int */
zend_long ns_nscolor_highlight_color(void);
/*@zep NS\NSColor shadowColor() -> int */
zend_long ns_nscolor_shadow_color(void);
/*@zep NS\NSColor highlightWithLevel(int handle, double val) -> int */
zend_long ns_nscolor_highlight_with_level(zval *handle, zval *val);
/*@zep NS\NSColor shadowWithLevel(int handle, double val) -> int */
zend_long ns_nscolor_shadow_with_level(zval *handle, zval *val);
/*@zep NS\NSColor colorWithSystemEffect(int handle, int systemEffect) -> int */
zend_long ns_nscolor_color_with_system_effect(zval *handle, zval *systemEffect);

/* ---- Current drawing color ---- */

/*@zep NS\NSColor set(int handle) -> void */
void ns_nscolor_set(zval *handle);
/*@zep NS\NSColor setFill(int handle) -> void */
void ns_nscolor_set_fill(zval *handle);
/*@zep NS\NSColor setStroke(int handle) -> void */
void ns_nscolor_set_stroke(zval *handle);

/* ---- Blend / alpha ---- */

/*@zep NS\NSColor blendedColorWithFractionOfColor(int handle, double fraction, int color) -> int */
zend_long ns_nscolor_blended_color_with_fraction_of_color(zval *handle, zval *fraction, zval *color);
/*@zep NS\NSColor colorWithAlphaComponent(int handle, double alpha) -> int */
zend_long ns_nscolor_color_with_alpha_component(zval *handle, zval *alpha);

/* ---- Catalog components ---- */

/*@zep NS\NSColor catalogNameComponent(int handle) -> string */
void ns_nscolor_catalog_name_component(zval *return_value, zval *handle);
/*@zep NS\NSColor colorNameComponent(int handle) -> string */
void ns_nscolor_color_name_component(zval *return_value, zval *handle);
/*@zep NS\NSColor localizedCatalogNameComponent(int handle) -> string */
void ns_nscolor_localized_catalog_name_component(zval *return_value, zval *handle);
/*@zep NS\NSColor localizedColorNameComponent(int handle) -> string */
void ns_nscolor_localized_color_name_component(zval *return_value, zval *handle);

/* ---- RGB / HSB / gray / CMYK components ---- */

/*@zep NS\NSColor redComponent(int handle) -> double */
double ns_nscolor_red_component(zval *handle);
/*@zep NS\NSColor greenComponent(int handle) -> double */
double ns_nscolor_green_component(zval *handle);
/*@zep NS\NSColor blueComponent(int handle) -> double */
double ns_nscolor_blue_component(zval *handle);
/*@zep NS\NSColor getRedGreenBlueAlpha(int handle) -> array */
void ns_nscolor_get_red_green_blue_alpha(zval *return_value, zval *handle);

/*@zep NS\NSColor hueComponent(int handle) -> double */
double ns_nscolor_hue_component(zval *handle);
/*@zep NS\NSColor saturationComponent(int handle) -> double */
double ns_nscolor_saturation_component(zval *handle);
/*@zep NS\NSColor brightnessComponent(int handle) -> double */
double ns_nscolor_brightness_component(zval *handle);
/*@zep NS\NSColor getHueSaturationBrightnessAlpha(int handle) -> array */
void ns_nscolor_get_hue_saturation_brightness_alpha(zval *return_value, zval *handle);

/*@zep NS\NSColor whiteComponent(int handle) -> double */
double ns_nscolor_white_component(zval *handle);
/*@zep NS\NSColor getWhiteAlpha(int handle) -> array */
void ns_nscolor_get_white_alpha(zval *return_value, zval *handle);

/*@zep NS\NSColor cyanComponent(int handle) -> double */
double ns_nscolor_cyan_component(zval *handle);
/*@zep NS\NSColor magentaComponent(int handle) -> double */
double ns_nscolor_magenta_component(zval *handle);
/*@zep NS\NSColor yellowComponent(int handle) -> double */
double ns_nscolor_yellow_component(zval *handle);
/*@zep NS\NSColor blackComponent(int handle) -> double */
double ns_nscolor_black_component(zval *handle);
/*@zep NS\NSColor getCyanMagentaYellowBlackAlpha(int handle) -> array */
void ns_nscolor_get_cyan_magenta_yellow_black_alpha(zval *return_value, zval *handle);

/*@zep NS\NSColor colorSpace(int handle) -> int */
zend_long ns_nscolor_color_space(zval *handle);
/*@zep NS\NSColor numberOfComponents(int handle) -> int */
zend_long ns_nscolor_number_of_components(zval *handle);
/*@reserved NS\NSColor - (void)getComponents:(CGFloat *)components — C component buffer */

/*@zep NS\NSColor patternImage(int handle) -> int */
zend_long ns_nscolor_pattern_image(zval *handle);
/*@zep NS\NSColor alphaComponent(int handle) -> double */
double ns_nscolor_alpha_component(zval *handle);

/* ---- Pasteboard / swatch / CG / alpha flag ---- */

/*@zep NS\NSColor colorFromPasteboard(int pasteBoard) -> int */
zend_long ns_nscolor_color_from_pasteboard(zval *pasteBoard);
/*@zep NS\NSColor writeToPasteboard(int handle, int pasteBoard) -> void */
void ns_nscolor_write_to_pasteboard(zval *handle, zval *pasteBoard);
/*@zep NS\NSColor drawSwatchInRect(int handle, double x, double y, double width, double height) -> void */
void ns_nscolor_draw_swatch_in_rect(zval *handle, zval *x, zval *y, zval *width, zval *height);

/*@zep NS\NSColor colorWithCGColor(int cgColor) -> int */
zend_long ns_nscolor_color_with_cg_color(zval *cgColor);

/*@reserved NS\NSColor @property (class) BOOL ignoresAlpha — getter API_DEPRECATED */
/*@reserved NS\NSColor @property (class) BOOL ignoresAlpha — setter API_DEPRECATED */

/* ---- NSDeprecated ---- */

/*@reserved NS\NSColor @property (class, strong, readonly) NSColor *controlHighlightColor — API_DEPRECATED */
/*@reserved NS\NSColor @property (class, strong, readonly) NSColor *controlLightHighlightColor — API_DEPRECATED */
/*@reserved NS\NSColor @property (class, strong, readonly) NSColor *controlShadowColor — API_DEPRECATED */
/*@reserved NS\NSColor @property (class, strong, readonly) NSColor *controlDarkShadowColor — API_DEPRECATED */
/*@reserved NS\NSColor @property (class, strong, readonly) NSColor *scrollBarColor — API_DEPRECATED */
/*@reserved NS\NSColor @property (class, strong, readonly) NSColor *knobColor — API_DEPRECATED */
/*@reserved NS\NSColor @property (class, strong, readonly) NSColor *selectedKnobColor — API_DEPRECATED */
/*@reserved NS\NSColor @property (class, strong, readonly) NSColor *windowFrameColor — API_DEPRECATED */
/*@reserved NS\NSColor @property (class, strong, readonly) NSColor *selectedMenuItemColor — API_DEPRECATED */
/*@reserved NS\NSColor @property (class, strong, readonly) NSColor *headerColor — API_DEPRECATED */
/*@reserved NS\NSColor @property (class, strong, readonly) NSColor *secondarySelectedControlColor — API_DEPRECATED */
/*@reserved NS\NSColor @property (class, strong, readonly) NSColor *alternateSelectedControlColor — API_DEPRECATED */
/*@reserved NS\NSColor @property (class, strong, readonly) NSColor *controlAlternatingRowBackgroundColors — API_DEPRECATED */
/*@reserved NS\NSColor @property (readonly, copy) NSColorSpaceName colorSpaceName — API_DEPRECATED */
/*@reserved NS\NSColor - (nullable NSColor *)colorUsingColorSpaceName:(nullable NSColorSpaceName)name device:(nullable NSDictionary *)deviceDescription — API_DEPRECATED */
/*@reserved NS\NSColor - (nullable NSColor *)colorUsingColorSpaceName:(NSColorSpaceName)name — API_DEPRECATED */

/* ---- NSQuartzCoreAdditions ---- */

/*@zep NS\NSColor colorWithCIColor(int color) -> int */
zend_long ns_nscolor_color_with_ci_color(zval *color);

/*@zep NS\NSColor CGColor(int handle) -> int */
zend_long ns_nscolor_cg_color(zval *handle);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_COLOR_H */
