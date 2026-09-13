#include "ns-openglcontext.h"
#include "ns-value.h"

/* ====================================================================== */
/* NSOpenGLContext                                                        */
/* ====================================================================== */

zend_long ns_nsopenglcontext_init_with_format_share_context(zval *format, zval *share)
{
    zend_long r = 0;
    @autoreleasepool {
        NSOpenGLPixelFormat *pf = NS_ARG_AS(NSOpenGLPixelFormat, format);
        NSOpenGLContext *sh = NS_ARG_AS(NSOpenGLContext, share);
        r = ns_handle_for([[NSOpenGLContext alloc] initWithFormat:pf shareContext:sh]);
    }
    return r;
}

zend_long ns_nsopenglcontext_init_with_cgl_context_obj(zval *context)
{
    zend_long r = 0;
    @autoreleasepool {
        CGLContextObj cgl = (CGLContextObj) (uintptr_t) ns_arg_long(context);
        r = ns_handle_for([[NSOpenGLContext alloc] initWithCGLContextObj:cgl]);
    }
    return r;
}

zend_long ns_nsopenglcontext_pixel_format(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSOpenGLContext *c = NS_ARG_AS(NSOpenGLContext, handle);
        r = c != nil ? ns_handle_for([c pixelFormat]) : 0;
    }
    return r;
}

zend_long ns_nsopenglcontext_view(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSOpenGLContext *c = NS_ARG_AS(NSOpenGLContext, handle);
        r = c != nil ? ns_handle_for([c view]) : 0;
    }
    return r;
}

void ns_nsopenglcontext_set_view(zval *handle, zval *view)
{
    @autoreleasepool {
        NSOpenGLContext *c = NS_ARG_AS(NSOpenGLContext, handle);
        if (c == nil) return;
        [c setView:NS_ARG_AS(NSView, view)];
    }
}

void ns_nsopenglcontext_set_full_screen(zval *handle)
{
    @autoreleasepool {
        NSOpenGLContext *c = NS_ARG_AS(NSOpenGLContext, handle);
        if (c == nil) return;
        [c setFullScreen];
    }
}

void ns_nsopenglcontext_set_off_screen_width_height_rowbytes(zval *handle, zval *baseaddr, zval *width, zval *height, zval *rowbytes)
{
    @autoreleasepool {
        NSOpenGLContext *c = NS_ARG_AS(NSOpenGLContext, handle);
        if (c == nil) return;
        [c setOffScreen:(void *) (uintptr_t) ns_arg_long(baseaddr)
                  width:(GLsizei) ns_arg_long(width)
                 height:(GLsizei) ns_arg_long(height)
               rowbytes:(GLint) ns_arg_long(rowbytes)];
    }
}

void ns_nsopenglcontext_clear_drawable(zval *handle)
{
    @autoreleasepool {
        NSOpenGLContext *c = NS_ARG_AS(NSOpenGLContext, handle);
        if (c == nil) return;
        [c clearDrawable];
    }
}

void ns_nsopenglcontext_update(zval *handle)
{
    @autoreleasepool {
        NSOpenGLContext *c = NS_ARG_AS(NSOpenGLContext, handle);
        if (c == nil) return;
        [c update];
    }
}

void ns_nsopenglcontext_flush_buffer(zval *handle)
{
    @autoreleasepool {
        NSOpenGLContext *c = NS_ARG_AS(NSOpenGLContext, handle);
        if (c == nil) return;
        [c flushBuffer];
    }
}

void ns_nsopenglcontext_make_current_context(zval *handle)
{
    @autoreleasepool {
        NSOpenGLContext *c = NS_ARG_AS(NSOpenGLContext, handle);
        if (c == nil) return;
        [c makeCurrentContext];
    }
}

void ns_nsopenglcontext_clear_current_context(void)
{
    @autoreleasepool {
        [NSOpenGLContext clearCurrentContext];
    }
}

zend_long ns_nsopenglcontext_current_context(void)
{
    zend_long r = 0;
    @autoreleasepool {
        r = ns_handle_for([NSOpenGLContext currentContext]);
    }
    return r;
}

void ns_nsopenglcontext_copy_attributes_from_context_with_mask(zval *handle, zval *context, zval *mask)
{
    @autoreleasepool {
        NSOpenGLContext *c = NS_ARG_AS(NSOpenGLContext, handle);
        if (c == nil) return;
        [c copyAttributesFromContext:NS_ARG_AS(NSOpenGLContext, context)
                            withMask:(GLbitfield) ns_arg_long(mask)];
    }
}

void ns_nsopenglcontext_set_values_for_parameter(zval *handle, zval *vals, zval *param)
{
    @autoreleasepool {
        NSOpenGLContext *c = NS_ARG_AS(NSOpenGLContext, handle);
        if (c == nil) return;
        GLint list[NS_C_ARRAY_MAX];
        ns_arg_int32_array(vals, (int32_t *) list, NS_C_ARRAY_MAX);
        [c setValues:list forParameter:(NSOpenGLContextParameter) ns_arg_long(param)];
    }
}

void ns_nsopenglcontext_get_values_for_parameter(zval *return_value, zval *handle, zval *param)
{
    GLint vals[4] = {0, 0, 0, 0};
    @autoreleasepool {
        NSOpenGLContext *c = NS_ARG_AS(NSOpenGLContext, handle);
        if (c != nil) {
            [c getValues:vals forParameter:(NSOpenGLContextParameter) ns_arg_long(param)];
        }
    }
    array_init_size(return_value, 1);
    zval list;
    ns_ret_int32_array(&list, (const int32_t *) vals, 4);
    add_assoc_zval(return_value, "vals", &list);
}

zend_long ns_nsopenglcontext_current_virtual_screen(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSOpenGLContext *c = NS_ARG_AS(NSOpenGLContext, handle);
        r = c != nil ? (zend_long) [c currentVirtualScreen] : 0;
    }
    return r;
}

void ns_nsopenglcontext_set_current_virtual_screen(zval *handle, zval *currentVirtualScreen)
{
    @autoreleasepool {
        NSOpenGLContext *c = NS_ARG_AS(NSOpenGLContext, handle);
        if (c == nil) return;
        [c setCurrentVirtualScreen:(GLint) ns_arg_long(currentVirtualScreen)];
    }
}

void ns_nsopenglcontext_create_texture_from_view_internal_format(zval *handle, zval *target, zval *view, zval *format)
{
    @autoreleasepool {
        NSOpenGLContext *c = NS_ARG_AS(NSOpenGLContext, handle);
        if (c == nil) return;
        [c createTexture:(GLenum) ns_arg_long(target)
                fromView:NS_ARG_AS(NSView, view)
          internalFormat:(GLenum) ns_arg_long(format)];
    }
}

zend_long ns_nsopenglcontext_cgl_context_obj(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSOpenGLContext *c = NS_ARG_AS(NSOpenGLContext, handle);
        r = c != nil ? (zend_long) (uintptr_t) [c CGLContextObj] : 0;
    }
    return r;
}

/* ---- NSOpenGLContext (NSOpenGLPixelBuffer) ---- */

void ns_nsopenglcontext_set_pixel_buffer_cube_map_face_mip_map_level_current_virtual_screen(zval *handle, zval *pixelBuffer, zval *face, zval *level, zval *screen)
{
    @autoreleasepool {
        NSOpenGLContext *c = NS_ARG_AS(NSOpenGLContext, handle);
        if (c == nil) return;
        [c setPixelBuffer:NS_ARG_AS(NSOpenGLPixelBuffer, pixelBuffer)
              cubeMapFace:(GLenum) ns_arg_long(face)
              mipMapLevel:(GLint) ns_arg_long(level)
     currentVirtualScreen:(GLint) ns_arg_long(screen)];
    }
}

zend_long ns_nsopenglcontext_pixel_buffer(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSOpenGLContext *c = NS_ARG_AS(NSOpenGLContext, handle);
        r = c != nil ? ns_handle_for([c pixelBuffer]) : 0;
    }
    return r;
}

zend_long ns_nsopenglcontext_pixel_buffer_cube_map_face(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSOpenGLContext *c = NS_ARG_AS(NSOpenGLContext, handle);
        r = c != nil ? (zend_long) [c pixelBufferCubeMapFace] : 0;
    }
    return r;
}

zend_long ns_nsopenglcontext_pixel_buffer_mip_map_level(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSOpenGLContext *c = NS_ARG_AS(NSOpenGLContext, handle);
        r = c != nil ? (zend_long) [c pixelBufferMipMapLevel] : 0;
    }
    return r;
}

void ns_nsopenglcontext_set_texture_image_to_pixel_buffer_color_buffer(zval *handle, zval *pixelBuffer, zval *source)
{
    @autoreleasepool {
        NSOpenGLContext *c = NS_ARG_AS(NSOpenGLContext, handle);
        if (c == nil) return;
        [c setTextureImageToPixelBuffer:NS_ARG_AS(NSOpenGLPixelBuffer, pixelBuffer)
                            colorBuffer:(GLenum) ns_arg_long(source)];
    }
}
