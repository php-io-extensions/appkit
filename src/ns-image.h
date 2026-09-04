#ifndef PHP_APPKIT_NS_IMAGE_H
#define PHP_APPKIT_NS_IMAGE_H

/*
 * Faithful 1:1 binding of AppKit NSImage.h. Every member of NSImage
 * (base interface + same-file Deprecated category) is either bound or
 * reserved. Nothing is omitted. NSImageSymbolConfiguration is the
 * same-file companion class and binds here (it has no header of its
 * own). NSBundle(NSBundleImageExtension) binds on NSBundle, not here.
 * NSImageDelegate and the empty NSImage() protocol extensions are not
 * class members. NSImageName constants are not class members.
 *
 * The audit blanks preprocessor lines, so both sides of the
 * Mac-Catalyst init/new/alloc block and the C++/Swift isTemplate
 * branches are counted. Live construction is init / initWithSize /
 * initWithContentsOfFile / initWithContentsOfURL /
 * initByReferencingFile / initByReferencingURL / initWithPasteboard /
 * initWithCGImage (each alloc+init glue). new / alloc / allocWithZone:
 * are reserved (Zephir reserved word, construction via init*, NSZone).
 * The C property (getter=isTemplate) is bound; the C++/Swift
 * duplicates are reserved so the member count matches.
 *
 * NSCoder, NSData, blocks, API_DEPRECATED (including
 * API_TO_BE_DEPRECATED), and CGImageForProposedRect:context:hints:
 * (CGImageRef plus nullable NSRect * inout) are reserved. CGImageRef
 * on initWithCGImage:size: is an input pointer and crosses as int
 * bits (0 = NULL), not a registry handle. Nullable NSString name /
 * accessibilityDescription cross as var. NSURL, NSBundle, NSPasteboard,
 * NSDictionary hints, NSImageRep, NSColor, NSLocale, and
 * NSImageSymbolConfiguration cross as handles. representations is
 * handles; imageTypes / imageUnfilteredTypes are strings.
 */

#include "php.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ---- Initialization ---- */

/*@zep NS\NSImage init() -> int */
zend_long ns_nsimage_init(void);
/*@reserved NS\NSImage + (instancetype)new API_UNAVAILABLE(ios); */
/*@reserved NS\NSImage + (instancetype)allocWithZone:(nullable NSZone *)zone API_UNAVAILABLE(ios); */
/*@reserved NS\NSImage + (instancetype)alloc API_UNAVAILABLE(ios); */

/*@zep NS\NSImage imageNamed(string name) -> int */
zend_long ns_nsimage_image_named(zval *name);
/*@zep NS\NSImage imageWithSystemSymbolNameAccessibilityDescription(string name, var description) -> int */
zend_long ns_nsimage_image_with_system_symbol_name_accessibility_description(zval *name, zval *description);
/*@zep NS\NSImage imageWithSystemSymbolNameVariableValueAccessibilityDescription(string name, double value, var description) -> int */
zend_long ns_nsimage_image_with_system_symbol_name_variable_value_accessibility_description(zval *name, zval *value, zval *description);
/*@zep NS\NSImage imageWithSymbolNameVariableValue(string name, double value) -> int */
zend_long ns_nsimage_image_with_symbol_name_variable_value(zval *name, zval *value);
/*@zep NS\NSImage imageWithSymbolNameBundleVariableValue(string name, int bundle, double value) -> int */
zend_long ns_nsimage_image_with_symbol_name_bundle_variable_value(zval *name, zval *bundle, zval *value);

/*@zep NS\NSImage initWithSize(double width, double height) -> int */
zend_long ns_nsimage_init_with_size(zval *width, zval *height);
/*@reserved NS\NSImage - (instancetype)initWithCoder:(NSCoder *)coder NS_DESIGNATED_INITIALIZER; */
/*@reserved NS\NSImage - (nullable instancetype)initWithData:(NSData *)data; */
/*@zep NS\NSImage initWithContentsOfFile(string fileName) -> int */
zend_long ns_nsimage_init_with_contents_of_file(zval *fileName);
/*@zep NS\NSImage initWithContentsOfURL(int url) -> int */
zend_long ns_nsimage_init_with_contents_of_url(zval *url);
/*@zep NS\NSImage initByReferencingFile(string fileName) -> int */
zend_long ns_nsimage_init_by_referencing_file(zval *fileName);
/*@zep NS\NSImage initByReferencingURL(int url) -> int */
zend_long ns_nsimage_init_by_referencing_url(zval *url);
/*@zep NS\NSImage initWithPasteboard(int pasteboard) -> int */
zend_long ns_nsimage_init_with_pasteboard(zval *pasteboard);
/*@reserved NS\NSImage - (nullable instancetype)initWithDataIgnoringOrientation:(NSData *)data API_AVAILABLE(macos(10.6)); */
/*@reserved NS\NSImage + (instancetype)imageWithSize:flipped:drawingHandler: — block */

/* ---- Properties and Methods ---- */

/*@zep NS\NSImage size(int handle) -> array */
void ns_nsimage_size(zval *return_value, zval *handle);
/*@zep NS\NSImage setSize(int handle, double width, double height) -> void */
void ns_nsimage_set_size(zval *handle, zval *width, zval *height);

/*@zep NS\NSImage setName(int handle, var name) -> bool */
zend_long ns_nsimage_set_name(zval *handle, zval *name);
/*@zep NS\NSImage name(int handle) -> var */
void ns_nsimage_name(zval *return_value, zval *handle);

/*@zep NS\NSImage backgroundColor(int handle) -> int */
zend_long ns_nsimage_background_color(zval *handle);
/*@zep NS\NSImage setBackgroundColor(int handle, int backgroundColor) -> void */
void ns_nsimage_set_background_color(zval *handle, zval *backgroundColor);

/*@zep NS\NSImage usesEPSOnResolutionMismatch(int handle) -> bool */
zend_long ns_nsimage_uses_eps_on_resolution_mismatch(zval *handle);
/*@zep NS\NSImage setUsesEPSOnResolutionMismatch(int handle, bool flag) -> void */
void ns_nsimage_set_uses_eps_on_resolution_mismatch(zval *handle, zval *flag);

/*@zep NS\NSImage prefersColorMatch(int handle) -> bool */
zend_long ns_nsimage_prefers_color_match(zval *handle);
/*@zep NS\NSImage setPrefersColorMatch(int handle, bool flag) -> void */
void ns_nsimage_set_prefers_color_match(zval *handle, zval *flag);

/*@zep NS\NSImage matchesOnMultipleResolution(int handle) -> bool */
zend_long ns_nsimage_matches_on_multiple_resolution(zval *handle);
/*@zep NS\NSImage setMatchesOnMultipleResolution(int handle, bool flag) -> void */
void ns_nsimage_set_matches_on_multiple_resolution(zval *handle, zval *flag);

/*@zep NS\NSImage matchesOnlyOnBestFittingAxis(int handle) -> bool */
zend_long ns_nsimage_matches_only_on_best_fitting_axis(zval *handle);
/*@zep NS\NSImage setMatchesOnlyOnBestFittingAxis(int handle, bool flag) -> void */
void ns_nsimage_set_matches_only_on_best_fitting_axis(zval *handle, zval *flag);

/*@zep NS\NSImage drawAtPointFromRectOperationFraction(int handle, double x, double y, double fromX, double fromY, double fromWidth, double fromHeight, int op, double delta) -> void */
void ns_nsimage_draw_at_point_from_rect_operation_fraction(zval *handle, zval *x, zval *y, zval *fromX, zval *fromY, zval *fromWidth, zval *fromHeight, zval *op, zval *delta);
/*@zep NS\NSImage drawInRectFromRectOperationFraction(int handle, double x, double y, double width, double height, double fromX, double fromY, double fromWidth, double fromHeight, int op, double delta) -> void */
void ns_nsimage_draw_in_rect_from_rect_operation_fraction(zval *handle, zval *x, zval *y, zval *width, zval *height, zval *fromX, zval *fromY, zval *fromWidth, zval *fromHeight, zval *op, zval *delta);
/*@zep NS\NSImage drawInRectFromRectOperationFractionRespectFlippedHints(int handle, double x, double y, double width, double height, double fromX, double fromY, double fromWidth, double fromHeight, int op, double requestedAlpha, bool respectFlipped, var hints) -> void */
void ns_nsimage_draw_in_rect_from_rect_operation_fraction_respect_flipped_hints(zval *handle, zval *x, zval *y, zval *width, zval *height, zval *fromX, zval *fromY, zval *fromWidth, zval *fromHeight, zval *op, zval *requestedAlpha, zval *respectFlipped, zval *hints);
/*@zep NS\NSImage drawRepresentationInRect(int handle, int imageRep, double x, double y, double width, double height) -> bool */
zend_long ns_nsimage_draw_representation_in_rect(zval *handle, zval *imageRep, zval *x, zval *y, zval *width, zval *height);
/*@zep NS\NSImage drawInRect(int handle, double x, double y, double width, double height) -> void */
void ns_nsimage_draw_in_rect(zval *handle, zval *x, zval *y, zval *width, zval *height);

/*@zep NS\NSImage recache(int handle) -> void */
void ns_nsimage_recache(zval *handle);

/*@reserved NS\NSImage @property (nullable, readonly, strong) NSData *TIFFRepresentation — getter */
/*@reserved NS\NSImage - (nullable NSData *)TIFFRepresentationUsingCompression:(NSTIFFCompression)comp factor:(float)factor; */

/*@zep NS\NSImage representations(int handle) -> array */
void ns_nsimage_representations(zval *return_value, zval *handle);
/*@zep NS\NSImage addRepresentations(int handle, array imageReps) -> void */
void ns_nsimage_add_representations(zval *handle, zval *imageReps);
/*@zep NS\NSImage addRepresentation(int handle, int imageRep) -> void */
void ns_nsimage_add_representation(zval *handle, zval *imageRep);
/*@zep NS\NSImage removeRepresentation(int handle, int imageRep) -> void */
void ns_nsimage_remove_representation(zval *handle, zval *imageRep);

/*@zep NS\NSImage isValid(int handle) -> bool */
zend_long ns_nsimage_is_valid(zval *handle);

/*@zep NS\NSImage delegate(int handle) -> int */
zend_long ns_nsimage_delegate(zval *handle);
/*@zep NS\NSImage setDelegate(int handle, int delegate) -> void */
void ns_nsimage_set_delegate(zval *handle, zval *delegate);

/*@zep NS\NSImage imageTypes() -> array */
void ns_nsimage_image_types(zval *return_value);
/*@zep NS\NSImage imageUnfilteredTypes() -> array */
void ns_nsimage_image_unfiltered_types(zval *return_value);

/*@zep NS\NSImage canInitWithPasteboard(int pasteboard) -> bool */
zend_long ns_nsimage_can_init_with_pasteboard(zval *pasteboard);

/*@zep NS\NSImage cacheMode(int handle) -> int */
zend_long ns_nsimage_cache_mode(zval *handle);
/*@zep NS\NSImage setCacheMode(int handle, int cacheMode) -> void */
void ns_nsimage_set_cache_mode(zval *handle, zval *cacheMode);

/*@zep NS\NSImage alignmentRect(int handle) -> array */
void ns_nsimage_alignment_rect(zval *return_value, zval *handle);
/*@zep NS\NSImage setAlignmentRect(int handle, double x, double y, double width, double height) -> void */
void ns_nsimage_set_alignment_rect(zval *handle, zval *x, zval *y, zval *width, zval *height);

/*@reserved NS\NSImage @property (getter=isTemplate, setter=setTemplate:) BOOL _template — C++/Swift duplicate getter */
/*@reserved NS\NSImage @property (getter=isTemplate, setter=setTemplate:) BOOL _template — C++/Swift duplicate setter */
/*@reserved NS\NSImage - (BOOL)isTemplate — C++ duplicate of the property getter */
/*@reserved NS\NSImage - (void)setTemplate:(BOOL)isTemplate — C++ duplicate of the property setter */
/*@zep NS\NSImage isTemplate(int handle) -> bool */
zend_long ns_nsimage_is_template(zval *handle);
/*@zep NS\NSImage setTemplate(int handle, bool flag) -> void */
void ns_nsimage_set_template(zval *handle, zval *flag);

/*@zep NS\NSImage accessibilityDescription(int handle) -> var */
void ns_nsimage_accessibility_description(zval *return_value, zval *handle);
/*@zep NS\NSImage setAccessibilityDescription(int handle, var accessibilityDescription) -> void */
void ns_nsimage_set_accessibility_description(zval *handle, zval *accessibilityDescription);

/*@zep NS\NSImage initWithCGImageSize(int cgImage, double width, double height) -> int */
zend_long ns_nsimage_init_with_cgimage_size(zval *cgImage, zval *width, zval *height);
/*@reserved NS\NSImage - (nullable CGImageRef)CGImageForProposedRect:(nullable NSRect *)proposedDestRect context:(nullable NSGraphicsContext *)referenceContext hints:(nullable NSDictionary<NSImageHintKey, id> *)hints — CGImageRef plus NSRect * inout */

/*@zep NS\NSImage bestRepresentationForRectContextHints(int handle, double x, double y, double width, double height, int context, var hints) -> int */
zend_long ns_nsimage_best_representation_for_rect_context_hints(zval *handle, zval *x, zval *y, zval *width, zval *height, zval *context, zval *hints);
/*@zep NS\NSImage hitTestRectWithImageDestinationRectContextHintsFlipped(int handle, double testX, double testY, double testWidth, double testHeight, double destX, double destY, double destWidth, double destHeight, int context, var hints, bool flipped) -> bool */
zend_long ns_nsimage_hit_test_rect_with_image_destination_rect_context_hints_flipped(zval *handle, zval *testX, zval *testY, zval *testWidth, zval *testHeight, zval *destX, zval *destY, zval *destWidth, zval *destHeight, zval *context, zval *hints, zval *flipped);

/*@zep NS\NSImage recommendedLayerContentsScale(int handle, double preferredContentsScale) -> double */
double ns_nsimage_recommended_layer_contents_scale(zval *handle, zval *preferredContentsScale);
/*@zep NS\NSImage layerContentsForContentsScale(int handle, double layerContentsScale) -> int */
zend_long ns_nsimage_layer_contents_for_contents_scale(zval *handle, zval *layerContentsScale);

/*@zep NS\NSImage capInsets(int handle) -> array */
void ns_nsimage_cap_insets(zval *return_value, zval *handle);
/*@zep NS\NSImage setCapInsets(int handle, double top, double left, double bottom, double right) -> void */
void ns_nsimage_set_cap_insets(zval *handle, zval *top, zval *left, zval *bottom, zval *right);

/*@zep NS\NSImage resizingMode(int handle) -> int */
zend_long ns_nsimage_resizing_mode(zval *handle);
/*@zep NS\NSImage setResizingMode(int handle, int resizingMode) -> void */
void ns_nsimage_set_resizing_mode(zval *handle, zval *resizingMode);

/*@zep NS\NSImage imageWithSymbolConfiguration(int handle, int configuration) -> int */
zend_long ns_nsimage_image_with_symbol_configuration(zval *handle, zval *configuration);
/*@zep NS\NSImage symbolConfiguration(int handle) -> int */
zend_long ns_nsimage_symbol_configuration(zval *handle);

/*@zep NS\NSImage imageWithLocale(int handle, int locale) -> int */
zend_long ns_nsimage_image_with_locale(zval *handle, zval *locale);
/*@zep NS\NSImage locale(int handle) -> int */
zend_long ns_nsimage_locale(zval *handle);

/* ---- NSImage (Deprecated) ---- */

/*@reserved NS\NSImage + (NSArray<NSString *> *)imageUnfilteredFileTypes API_DEPRECATED */
/*@reserved NS\NSImage + (NSArray<NSPasteboardType> *)imageUnfilteredPasteboardTypes API_DEPRECATED */
/*@reserved NS\NSImage + (NSArray<NSString *> *)imageFileTypes API_DEPRECATED */
/*@reserved NS\NSImage + (NSArray<NSPasteboardType> *)imagePasteboardTypes API_DEPRECATED */
/*@reserved NS\NSImage - (instancetype)initWithIconRef:(IconRef)iconRef API_DEPRECATED */
/*@reserved NS\NSImage - (null_unspecified NSImageRep *)bestRepresentationForDevice:(null_unspecified NSDictionary *)deviceDescription API_DEPRECATED */
/*@reserved NS\NSImage - (void)lockFocus API_DEPRECATED */
/*@reserved NS\NSImage - (void)lockFocusFlipped:(BOOL)flipped API_DEPRECATED */
/*@reserved NS\NSImage - (void)unlockFocus API_DEPRECATED */
/*@reserved NS\NSImage - (void)setFlipped:(BOOL)flag API_DEPRECATED */
/*@reserved NS\NSImage - (BOOL)isFlipped API_DEPRECATED */
/*@reserved NS\NSImage - (void)setScalesWhenResized:(BOOL)flag API_DEPRECATED */
/*@reserved NS\NSImage - (BOOL)scalesWhenResized API_DEPRECATED */
/*@reserved NS\NSImage - (void)setDataRetained:(BOOL)flag API_DEPRECATED */
/*@reserved NS\NSImage - (BOOL)isDataRetained API_DEPRECATED */
/*@reserved NS\NSImage - (void)setCachedSeparately:(BOOL)flag API_DEPRECATED */
/*@reserved NS\NSImage - (BOOL)isCachedSeparately API_DEPRECATED */
/*@reserved NS\NSImage - (void)setCacheDepthMatchesImageDepth:(BOOL)flag API_DEPRECATED */
/*@reserved NS\NSImage - (BOOL)cacheDepthMatchesImageDepth API_DEPRECATED */
/*@reserved NS\NSImage - (void)dissolveToPoint:(NSPoint)point fraction:(CGFloat)fraction API_DEPRECATED */
/*@reserved NS\NSImage - (void)dissolveToPoint:(NSPoint)point fromRect:(NSRect)rect fraction:(CGFloat)fraction API_DEPRECATED */
/*@reserved NS\NSImage - (void)compositeToPoint:(NSPoint)point operation:(NSCompositingOperation)operation API_DEPRECATED */
/*@reserved NS\NSImage - (void)compositeToPoint:(NSPoint)point fromRect:(NSRect)rect operation:(NSCompositingOperation)operation API_DEPRECATED */
/*@reserved NS\NSImage - (void)compositeToPoint:(NSPoint)point operation:(NSCompositingOperation)operation fraction:(CGFloat)fraction API_DEPRECATED */
/*@reserved NS\NSImage - (void)compositeToPoint:(NSPoint)point fromRect:(NSRect)rect operation:(NSCompositingOperation)operation fraction:(CGFloat)fraction API_DEPRECATED */
/*@reserved NS\NSImage - (void)lockFocusOnRepresentation:(null_unspecified NSImageRep *)imageRepresentation API_DEPRECATED */
/*@reserved NS\NSImage - (void)cancelIncrementalLoad API_DEPRECATED */

/* ---- NSImageSymbolConfiguration (companion; no header of its own) ---- */

/*@zep NS\NSImageSymbolConfiguration configurationWithPointSizeWeightScale(double pointSize, double weight, int scale) -> int */
zend_long ns_nsimagesymbolconfiguration_configuration_with_point_size_weight_scale(zval *pointSize, zval *weight, zval *scale);
/*@zep NS\NSImageSymbolConfiguration configurationWithPointSizeWeight(double pointSize, double weight) -> int */
zend_long ns_nsimagesymbolconfiguration_configuration_with_point_size_weight(zval *pointSize, zval *weight);
/*@zep NS\NSImageSymbolConfiguration configurationWithTextStyleScale(string style, int scale) -> int */
zend_long ns_nsimagesymbolconfiguration_configuration_with_text_style_scale(zval *style, zval *scale);
/*@zep NS\NSImageSymbolConfiguration configurationWithTextStyle(string style) -> int */
zend_long ns_nsimagesymbolconfiguration_configuration_with_text_style(zval *style);
/*@zep NS\NSImageSymbolConfiguration configurationWithScale(int scale) -> int */
zend_long ns_nsimagesymbolconfiguration_configuration_with_scale(zval *scale);

/*@zep NS\NSImageSymbolConfiguration configurationPreferringMonochrome() -> int */
zend_long ns_nsimagesymbolconfiguration_configuration_preferring_monochrome(void);
/*@zep NS\NSImageSymbolConfiguration configurationPreferringHierarchical() -> int */
zend_long ns_nsimagesymbolconfiguration_configuration_preferring_hierarchical(void);
/*@zep NS\NSImageSymbolConfiguration configurationWithHierarchicalColor(int hierarchicalColor) -> int */
zend_long ns_nsimagesymbolconfiguration_configuration_with_hierarchical_color(zval *hierarchicalColor);
/*@zep NS\NSImageSymbolConfiguration configurationWithPaletteColors(array paletteColors) -> int */
zend_long ns_nsimagesymbolconfiguration_configuration_with_palette_colors(zval *paletteColors);
/*@zep NS\NSImageSymbolConfiguration configurationPreferringMulticolor() -> int */
zend_long ns_nsimagesymbolconfiguration_configuration_preferring_multicolor(void);

/*@zep NS\NSImageSymbolConfiguration configurationByApplyingConfiguration(int handle, int configuration) -> int */
zend_long ns_nsimagesymbolconfiguration_configuration_by_applying_configuration(zval *handle, zval *configuration);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_IMAGE_H */
