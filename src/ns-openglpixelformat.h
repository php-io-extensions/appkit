#ifndef PHP_APPKIT_NS_OPENGLPIXELFORMAT_H
#define PHP_APPKIT_NS_OPENGLPIXELFORMAT_H

/*
 * Faithful 1:1 binding of NSOpenGLPixelFormat, declared in AppKit's
 * NSOpenGL.h. Every member of the class is either bound or kept as a
 * commented reserved signature; nothing is omitted. The three NSData
 * members (initWithData:, attributes, setAttributes:) are reserved for the
 * ordinary NSData reason, not for deprecation.
 *
 * DEPRECATED CLASS, BOUND ON PURPOSE. The whole class carries
 * NS_OPENGL_CLASS_DEPRECATED (NSOpenGL.h:114) — API_DEPRECATED since
 * macOS 10.14 — yet it ships and works, and it is the only way to describe
 * a windowed OpenGL surface on this OS. The house rule reserves deprecated
 * members; applied to a class deprecated in its entirety it would leave no
 * windowed GL path at all. The exemption is declared by the audit marker
 * below and written up in .okf/binding-rules.md: a class deprecated in its
 * entirety that remains the only OS path for a feature is bound, marked and
 * audited normally; deprecated members inside otherwise-live classes stay
 * reserved.
 *
 * MARSHALLING: initWithAttributes: takes a
 * `const NSOpenGLPixelFormatAttribute *` — a C array of uint32 terminated
 * by 0, not an object and not an NSArray. It crosses as a PHP list of ints
 * marshalled into a C array for the duration of the one send
 * (ns_arg_uint32_zarray in ns-value.h). The binding always writes the
 * terminating 0 the ABI requires. That is marshalling of the parameter's
 * own C representation, not composition.
 *
 * getValues:forAttribute:forVirtualScreen: writes through a `GLint *` the
 * caller owns. Out-params cross as an assoc array keyed by the ObjC
 * parameter name; the binding provides a 4-slot zeroed buffer (the widest
 * any NSOpenGL attribute or parameter uses) and returns all four slots as
 * {vals: [int, int, int, int]}. Every NSOpenGLPFA* attribute is
 * single-valued, so vals[0] is the answer and the rest read 0.
 *
 * CGLPixelFormatObj crosses as int pointer bits (0 = NULL), not a registry
 * handle — the same crossing CALayer's CGColorRef uses, and the one
 * ext-opengl's OpenGL\CGL\CGL speaks.
 */

#include "php.h"

#ifdef __cplusplus
extern "C" {
#endif

/*@audit deprecated-class NS\NSOpenGLPixelFormat API_DEPRECATED since 10.14 but shipped and functional; the only OS path to a windowed GL pixel format */

/* ---- NSOpenGLPixelFormat ---- */

/*@zep NS\NSOpenGLPixelFormat initWithCGLPixelFormatObj(int format) -> int */
zend_long ns_nsopenglpixelformat_init_with_cgl_pixel_format_obj(zval *format);

/*@zep NS\NSOpenGLPixelFormat initWithAttributes(array attribs) -> int */
zend_long ns_nsopenglpixelformat_init_with_attributes(zval *attribs);

/*@reserved NS\NSOpenGLPixelFormat - (nullable id)initWithData:(null_unspecified NSData*)attribs API_DEPRECATED("Use -initWithAttributes: instead", macos(10.0,10.6)); — NSData */

/*@reserved NS\NSOpenGLPixelFormat - (null_unspecified NSData*)attributes API_DEPRECATED("", macos(10.0,10.6)); — NSData */
/*@reserved NS\NSOpenGLPixelFormat - (void)setAttributes:(null_unspecified NSData*)attribs API_DEPRECATED("", macos(10.0,10.6)); — NSData */

/*@zep NS\NSOpenGLPixelFormat getValuesForAttributeForVirtualScreen(int handle, int attrib, int screen) -> array */
void ns_nsopenglpixelformat_get_values_for_attribute_for_virtual_screen(zval *return_value, zval *handle, zval *attrib, zval *screen);

/*@zep NS\NSOpenGLPixelFormat numberOfVirtualScreens(int handle) -> int */
zend_long ns_nsopenglpixelformat_number_of_virtual_screens(zval *handle);

/*@zep NS\NSOpenGLPixelFormat CGLPixelFormatObj(int handle) -> int */
zend_long ns_nsopenglpixelformat_cgl_pixel_format_obj(zval *handle);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_OPENGLPIXELFORMAT_H */
