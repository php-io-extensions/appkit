#ifndef PHP_APPKIT_NS_IMAGEREP_H
#define PHP_APPKIT_NS_IMAGEREP_H

/*
 * Faithful 1:1 binding of AppKit NSImageRep.h. Every member of the
 * class (the single base interface; no same-file categories) is
 * either bound or reserved. Nothing is omitted. The NSCopying /
 * NSCoding protocols are not class members. Notification names
 * (NSImageRepRegistryDidChangeNotification and the obsolete
 * NSImageRepRegistryChangedNotification alias), the
 * NSImageRepMatchesDevice enum constant, the NSImageLayoutDirection
 * typedef, and NSImageHintKey are not class members. No same-file
 * companion class. Live construction is init (alloc+init glue).
 * Inherited NSObject members stay on that class. Class, NSCoder,
 * NSData, API_DEPRECATED, and CGImageForProposedRect:context:hints:
 * (CGImageRef plus nullable NSRect * inout) are reserved. NSURL /
 * NSPasteboard / NSDictionary hints / NSGraphicsContext cross as
 * handles. imageRepsWithContentsOfFile: / URL / pasteboard are
 * handles; imageTypes / imageUnfilteredTypes are strings.
 * NSColorSpaceName crosses as string. NSImageLayoutDirection and
 * NSCompositingOperation / NSInteger pixel metrics cross as int.
 */

#include "php.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ---- Initialization ---- */

/*@zep NS\NSImageRep init() -> int */
zend_long ns_nsimagerep_init(void);
/*@reserved NS\NSImageRep - (nullable instancetype)initWithCoder:(NSCoder *)coder NS_DESIGNATED_INITIALIZER; */

/* ---- Drawing ---- */

/*@zep NS\NSImageRep draw(int handle) -> bool */
zend_long ns_nsimagerep_draw(zval *handle);
/*@zep NS\NSImageRep drawAtPoint(int handle, double x, double y) -> bool */
zend_long ns_nsimagerep_draw_at_point(zval *handle, zval *x, zval *y);
/*@zep NS\NSImageRep drawInRect(int handle, double x, double y, double width, double height) -> bool */
zend_long ns_nsimagerep_draw_in_rect(zval *handle, zval *x, zval *y, zval *width, zval *height);
/*@zep NS\NSImageRep drawInRectFromRectOperationFractionRespectFlippedHints(int handle, double x, double y, double width, double height, double fromX, double fromY, double fromWidth, double fromHeight, int op, double requestedAlpha, bool respectFlipped, int hints) -> bool */
zend_long ns_nsimagerep_draw_in_rect_from_rect_operation_fraction_respect_flipped_hints(zval *handle, zval *x, zval *y, zval *width, zval *height, zval *fromX, zval *fromY, zval *fromWidth, zval *fromHeight, zval *op, zval *requestedAlpha, zval *respectFlipped, zval *hints);

/* ---- Image info ---- */

/*@zep NS\NSImageRep size(int handle) -> array */
void ns_nsimagerep_size(zval *return_value, zval *handle);
/*@zep NS\NSImageRep setSize(int handle, double width, double height) -> void */
void ns_nsimagerep_set_size(zval *handle, zval *width, zval *height);

/*@zep NS\NSImageRep hasAlpha(int handle) -> bool */
zend_long ns_nsimagerep_has_alpha(zval *handle);
/*@zep NS\NSImageRep setAlpha(int handle, bool flag) -> void */
void ns_nsimagerep_set_alpha(zval *handle, zval *flag);

/*@zep NS\NSImageRep isOpaque(int handle) -> bool */
zend_long ns_nsimagerep_is_opaque(zval *handle);
/*@zep NS\NSImageRep setOpaque(int handle, bool flag) -> void */
void ns_nsimagerep_set_opaque(zval *handle, zval *flag);

/*@zep NS\NSImageRep colorSpaceName(int handle) -> string */
void ns_nsimagerep_color_space_name(zval *return_value, zval *handle);
/*@zep NS\NSImageRep setColorSpaceName(int handle, string colorSpaceName) -> void */
void ns_nsimagerep_set_color_space_name(zval *handle, zval *colorSpaceName);

/*@zep NS\NSImageRep bitsPerSample(int handle) -> int */
zend_long ns_nsimagerep_bits_per_sample(zval *handle);
/*@zep NS\NSImageRep setBitsPerSample(int handle, int bitsPerSample) -> void */
void ns_nsimagerep_set_bits_per_sample(zval *handle, zval *bitsPerSample);

/*@zep NS\NSImageRep pixelsWide(int handle) -> int */
zend_long ns_nsimagerep_pixels_wide(zval *handle);
/*@zep NS\NSImageRep setPixelsWide(int handle, int pixelsWide) -> void */
void ns_nsimagerep_set_pixels_wide(zval *handle, zval *pixelsWide);

/*@zep NS\NSImageRep pixelsHigh(int handle) -> int */
zend_long ns_nsimagerep_pixels_high(zval *handle);
/*@zep NS\NSImageRep setPixelsHigh(int handle, int pixelsHigh) -> void */
void ns_nsimagerep_set_pixels_high(zval *handle, zval *pixelsHigh);

/*@zep NS\NSImageRep layoutDirection(int handle) -> int */
zend_long ns_nsimagerep_layout_direction(zval *handle);
/*@zep NS\NSImageRep setLayoutDirection(int handle, int layoutDirection) -> void */
void ns_nsimagerep_set_layout_direction(zval *handle, zval *layoutDirection);

/* ---- Registry / Class (Class is not bound) ---- */

/*@reserved NS\NSImageRep + (void)registerImageRepClass:(Class)imageRepClass; */
/*@reserved NS\NSImageRep + (void)unregisterImageRepClass:(Class)imageRepClass; */
/*@reserved NS\NSImageRep @property (class, readonly, copy) NSArray<Class> *registeredImageRepClasses — Class */
/*@reserved NS\NSImageRep + (nullable Class)imageRepClassForFileType:(NSString *)type API_DEPRECATED */
/*@reserved NS\NSImageRep + (nullable Class)imageRepClassForPasteboardType:(NSPasteboardType)type API_DEPRECATED */
/*@reserved NS\NSImageRep + (nullable Class)imageRepClassForType:(NSString *)type; */
/*@reserved NS\NSImageRep + (nullable Class)imageRepClassForData:(NSData *)data; */

/*@reserved NS\NSImageRep + (BOOL)canInitWithData:(NSData *)data; */

/*@reserved NS\NSImageRep + (NSArray<NSString *> *)imageUnfilteredFileTypes API_DEPRECATED */
/*@reserved NS\NSImageRep + (NSArray<NSPasteboardType> *)imageUnfilteredPasteboardTypes API_DEPRECATED */
/*@reserved NS\NSImageRep + (NSArray<NSString *> *)imageFileTypes API_DEPRECATED */
/*@reserved NS\NSImageRep + (NSArray<NSPasteboardType> *)imagePasteboardTypes API_DEPRECATED */

/*@zep NS\NSImageRep imageUnfilteredTypes() -> array */
void ns_nsimagerep_image_unfiltered_types(zval *return_value);
/*@zep NS\NSImageRep imageTypes() -> array */
void ns_nsimagerep_image_types(zval *return_value);

/*@zep NS\NSImageRep canInitWithPasteboard(int pasteboard) -> bool */
zend_long ns_nsimagerep_can_init_with_pasteboard(zval *pasteboard);

/*@zep NS\NSImageRep imageRepsWithContentsOfFile(string fileName) -> array */
void ns_nsimagerep_image_reps_with_contents_of_file(zval *return_value, zval *fileName);
/*@zep NS\NSImageRep imageRepWithContentsOfFile(string fileName) -> int */
zend_long ns_nsimagerep_image_rep_with_contents_of_file(zval *fileName);
/*@zep NS\NSImageRep imageRepsWithContentsOfURL(int url) -> array */
void ns_nsimagerep_image_reps_with_contents_of_url(zval *return_value, zval *url);
/*@zep NS\NSImageRep imageRepWithContentsOfURL(int url) -> int */
zend_long ns_nsimagerep_image_rep_with_contents_of_url(zval *url);
/*@zep NS\NSImageRep imageRepsWithPasteboard(int pasteboard) -> array */
void ns_nsimagerep_image_reps_with_pasteboard(zval *return_value, zval *pasteboard);
/*@zep NS\NSImageRep imageRepWithPasteboard(int pasteboard) -> int */
zend_long ns_nsimagerep_image_rep_with_pasteboard(zval *pasteboard);

/*@reserved NS\NSImageRep - (nullable CGImageRef)CGImageForProposedRect:(nullable NSRect *)proposedDestRect context:(nullable NSGraphicsContext *)context hints:(nullable NSDictionary<NSImageHintKey, id> *)hints — CGImageRef plus NSRect * inout */

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_IMAGEREP_H */
