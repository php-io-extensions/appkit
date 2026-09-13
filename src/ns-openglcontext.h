#ifndef PHP_APPKIT_NS_OPENGLCONTEXT_H
#define PHP_APPKIT_NS_OPENGLCONTEXT_H

/*
 * Faithful 1:1 binding of NSOpenGLContext, declared in AppKit's NSOpenGL.h
 * (base interface + the same-file NSOpenGLPixelBuffer category). Every
 * member is bound except one: the header declares the drawable's view
 * twice — once as `@property (nullable, weak) NSView *view` (NSOpenGL.h:193)
 * and once as the standalone `- (void)setView:` (NSOpenGL.h:194). Two
 * declarations, two selectors, and the setter selector is the same
 * `setView:` either way, so it binds once (as the property setter) and the
 * duplicate declaration is reserved. Nothing is omitted.
 *
 * DEPRECATED CLASS, BOUND ON PURPOSE. The class carries
 * NS_OPENGL_CLASS_DEPRECATED (NSOpenGL.h:183) and several of its members
 * carry their own API_DEPRECATED — view/setView: among them, which is
 * precisely the pair that attaches GL to a window. Reserving deprecated
 * members here, as the house rule does inside live classes, would leave the
 * Mac with no windowed GL path at all. The exemption is declared by the
 * audit marker below and written up in .okf/binding-rules.md.
 *
 * MARSHALLING (see ns-openglpixelformat.h for the full note):
 * setValues:forParameter: takes `const GLint *vals` — a C array whose
 * element count is defined by the parameter (0, 1, 2 or 4), not by a
 * sentinel. It crosses as a PHP list of ints marshalled into a zeroed C
 * array for the duration of the one send. getValues:forParameter: writes
 * through the same kind of pointer and comes back as {vals: [4 ints]} from
 * a 4-slot zeroed buffer — 4 is the widest any NSOpenGLContextParameter
 * uses (NSOpenGLContextParameterSwapRectangle, NSOpenGL.h:176).
 *
 * CGLContextObj crosses as int pointer bits (0 = NULL), not a registry
 * handle: that is the currency ext-opengl's OpenGL\CGL\CGL speaks, so the
 * same context can be driven from either extension.
 *
 * NSOpenGLPixelBuffer is not a bound class (deprecated since 10.7 with no
 * remaining OS role — IOSurface replaced it); the category members that
 * take or return one still bind, because an object parameter is an untyped
 * int handle and a handle from anywhere is what they take.
 */

#include "php.h"

#ifdef __cplusplus
extern "C" {
#endif

/*@audit deprecated-class NS\NSOpenGLContext API_DEPRECATED since 10.14 but shipped and functional; the only OS path from an NSView to a GL drawable */

/* ---- NSOpenGLContext: creation ---- */

/*@zep NS\NSOpenGLContext initWithFormatShareContext(int format, int share) -> int */
zend_long ns_nsopenglcontext_init_with_format_share_context(zval *format, zval *share);

/*@zep NS\NSOpenGLContext initWithCGLContextObj(int context) -> int */
zend_long ns_nsopenglcontext_init_with_cgl_context_obj(zval *context);

/*@zep NS\NSOpenGLContext pixelFormat(int handle) -> int */
zend_long ns_nsopenglcontext_pixel_format(zval *handle);

/* ---- drawable management ---- */

/*@zep NS\NSOpenGLContext view(int handle) -> int */
zend_long ns_nsopenglcontext_view(zval *handle);
/*@zep NS\NSOpenGLContext setView(int handle, int view) -> void */
void ns_nsopenglcontext_set_view(zval *handle, zval *view);

/*@reserved NS\NSOpenGLContext - (void)setView:(nullable NSView *)view NS_SWIFT_UI_ACTOR API_DEPRECATED("Use NSOpenGLView to provide OpenGL content in a Cocoa app.", macos(10.0,10.14)); — second declaration of the `view` property's setter; bound once as that setter */

/*@zep NS\NSOpenGLContext setFullScreen(int handle) -> void */
void ns_nsopenglcontext_set_full_screen(zval *handle);

/*@zep NS\NSOpenGLContext setOffScreenWidthHeightRowbytes(int handle, int baseaddr, int width, int height, int rowbytes) -> void */
void ns_nsopenglcontext_set_off_screen_width_height_rowbytes(zval *handle, zval *baseaddr, zval *width, zval *height, zval *rowbytes);

/*@zep NS\NSOpenGLContext clearDrawable(int handle) -> void */
void ns_nsopenglcontext_clear_drawable(zval *handle);

/*@zep NS\NSOpenGLContext update(int handle) -> void */
void ns_nsopenglcontext_update(zval *handle);

/* ---- flush ---- */

/*@zep NS\NSOpenGLContext flushBuffer(int handle) -> void */
void ns_nsopenglcontext_flush_buffer(zval *handle);

/* ---- current context control ---- */

/*@zep NS\NSOpenGLContext makeCurrentContext(int handle) -> void */
void ns_nsopenglcontext_make_current_context(zval *handle);

/*@zep NS\NSOpenGLContext clearCurrentContext() -> void */
void ns_nsopenglcontext_clear_current_context(void);

/*@zep NS\NSOpenGLContext currentContext() -> int */
zend_long ns_nsopenglcontext_current_context(void);

/* ---- attribute copy ---- */

/*@zep NS\NSOpenGLContext copyAttributesFromContextWithMask(int handle, int context, int mask) -> void */
void ns_nsopenglcontext_copy_attributes_from_context_with_mask(zval *handle, zval *context, zval *mask);

/* ---- context parameters ---- */

/*@zep NS\NSOpenGLContext setValuesForParameter(int handle, array vals, int param) -> void */
void ns_nsopenglcontext_set_values_for_parameter(zval *handle, zval *vals, zval *param);

/*@zep NS\NSOpenGLContext getValuesForParameter(int handle, int param) -> array */
void ns_nsopenglcontext_get_values_for_parameter(zval *return_value, zval *handle, zval *param);

/* ---- virtual screens ---- */

/*@zep NS\NSOpenGLContext currentVirtualScreen(int handle) -> int */
zend_long ns_nsopenglcontext_current_virtual_screen(zval *handle);
/*@zep NS\NSOpenGLContext setCurrentVirtualScreen(int handle, int currentVirtualScreen) -> void */
void ns_nsopenglcontext_set_current_virtual_screen(zval *handle, zval *currentVirtualScreen);

/* ---- textures ---- */

/*@zep NS\NSOpenGLContext createTextureFromViewInternalFormat(int handle, int target, int view, int format) -> void */
void ns_nsopenglcontext_create_texture_from_view_internal_format(zval *handle, zval *target, zval *view, zval *format);

/*@zep NS\NSOpenGLContext CGLContextObj(int handle) -> int */
zend_long ns_nsopenglcontext_cgl_context_obj(zval *handle);

/* ---- NSOpenGLContext (NSOpenGLPixelBuffer) category ---- */

/*@zep NS\NSOpenGLContext setPixelBufferCubeMapFaceMipMapLevelCurrentVirtualScreen(int handle, int pixelBuffer, int face, int level, int screen) -> void */
void ns_nsopenglcontext_set_pixel_buffer_cube_map_face_mip_map_level_current_virtual_screen(zval *handle, zval *pixelBuffer, zval *face, zval *level, zval *screen);

/*@zep NS\NSOpenGLContext pixelBuffer(int handle) -> int */
zend_long ns_nsopenglcontext_pixel_buffer(zval *handle);

/*@zep NS\NSOpenGLContext pixelBufferCubeMapFace(int handle) -> int */
zend_long ns_nsopenglcontext_pixel_buffer_cube_map_face(zval *handle);

/*@zep NS\NSOpenGLContext pixelBufferMipMapLevel(int handle) -> int */
zend_long ns_nsopenglcontext_pixel_buffer_mip_map_level(zval *handle);

/*@zep NS\NSOpenGLContext setTextureImageToPixelBufferColorBuffer(int handle, int pixelBuffer, int source) -> void */
void ns_nsopenglcontext_set_texture_image_to_pixel_buffer_color_buffer(zval *handle, zval *pixelBuffer, zval *source);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_OPENGLCONTEXT_H */
