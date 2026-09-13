#ifndef PHP_APPKIT_NS_OPENGLVIEW_H
#define PHP_APPKIT_NS_OPENGLVIEW_H

/*
 * Faithful 1:1 binding of AppKit NSOpenGLView.h. Every member of the class
 * is bound; nothing is reserved and nothing is omitted. The two NSView
 * categories in the same header (NSOpenGLSurfaceResolution,
 * NSExtendedDynamicRange) add their members to NSView, not to this class,
 * and are audited against NSView.h with the rest of that class.
 *
 * DEPRECATED CLASS, BOUND ON PURPOSE. NSOpenGLView carries
 * NS_OPENGL_CLASS_DEPRECATED (NSOpenGLView.h:17) — API_DEPRECATED since
 * macOS 10.14, replacement MTKView — yet it ships and works, and with
 * NSOpenGLContext it is the only OS path that puts OpenGL into an NSWindow.
 * The exemption is declared by the audit marker below and written up in
 * .okf/binding-rules.md.
 *
 * The class is a concrete NSView subclass that declares its own
 * initializer, so it needs no synthesized construction glue; inherited
 * NSView and NSResponder members stay bound on those classes and work
 * through an untyped handle.
 */

#include "php.h"

#ifdef __cplusplus
extern "C" {
#endif

/*@audit deprecated-class NS\NSOpenGLView API_DEPRECATED since 10.14 but shipped and functional; with NSOpenGLContext the only OS path from an NSWindow to OpenGL */

/* ---- NSOpenGLView ---- */

/*@zep NS\NSOpenGLView defaultPixelFormat() -> int */
zend_long ns_nsopenglview_default_pixel_format(void);

/*@zep NS\NSOpenGLView initWithFramePixelFormat(double x, double y, double width, double height, int format) -> int */
zend_long ns_nsopenglview_init_with_frame_pixel_format(zval *x, zval *y, zval *width, zval *height, zval *format);

/*@zep NS\NSOpenGLView openGLContext(int handle) -> int */
zend_long ns_nsopenglview_open_gl_context(zval *handle);
/*@zep NS\NSOpenGLView setOpenGLContext(int handle, int openGLContext) -> void */
void ns_nsopenglview_set_open_gl_context(zval *handle, zval *openGLContext);

/*@zep NS\NSOpenGLView clearGLContext(int handle) -> void */
void ns_nsopenglview_clear_gl_context(zval *handle);

/*@zep NS\NSOpenGLView update(int handle) -> void */
void ns_nsopenglview_update(zval *handle);

/*@zep NS\NSOpenGLView reshape(int handle) -> void */
void ns_nsopenglview_reshape(zval *handle);

/*@zep NS\NSOpenGLView pixelFormat(int handle) -> int */
zend_long ns_nsopenglview_pixel_format(zval *handle);
/*@zep NS\NSOpenGLView setPixelFormat(int handle, int pixelFormat) -> void */
void ns_nsopenglview_set_pixel_format(zval *handle, zval *pixelFormat);

/*@zep NS\NSOpenGLView prepareOpenGL(int handle) -> void */
void ns_nsopenglview_prepare_open_gl(zval *handle);

/*@zep NS\NSOpenGLView wantsBestResolutionOpenGLSurface(int handle) -> bool */
zend_long ns_nsopenglview_wants_best_resolution_open_gl_surface(zval *handle);
/*@zep NS\NSOpenGLView setWantsBestResolutionOpenGLSurface(int handle, bool wantsBestResolutionOpenGLSurface) -> void */
void ns_nsopenglview_set_wants_best_resolution_open_gl_surface(zval *handle, zval *wantsBestResolutionOpenGLSurface);

/*@zep NS\NSOpenGLView wantsExtendedDynamicRangeOpenGLSurface(int handle) -> bool */
zend_long ns_nsopenglview_wants_extended_dynamic_range_open_gl_surface(zval *handle);
/*@zep NS\NSOpenGLView setWantsExtendedDynamicRangeOpenGLSurface(int handle, bool wantsExtendedDynamicRangeOpenGLSurface) -> void */
void ns_nsopenglview_set_wants_extended_dynamic_range_open_gl_surface(zval *handle, zval *wantsExtendedDynamicRangeOpenGLSurface);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_OPENGLVIEW_H */
