#include "ns-openglview.h"
#include "ns-value.h"

/* ====================================================================== */
/* NSOpenGLView                                                           */
/* ====================================================================== */

zend_long ns_nsopenglview_default_pixel_format(void)
{
    zend_long r = 0;
    @autoreleasepool {
        r = ns_handle_for([NSOpenGLView defaultPixelFormat]);
    }
    return r;
}

zend_long ns_nsopenglview_init_with_frame_pixel_format(zval *x, zval *y, zval *width, zval *height, zval *format)
{
    zend_long r = 0;
    @autoreleasepool {
        NSOpenGLPixelFormat *pf = NS_ARG_AS(NSOpenGLPixelFormat, format);
        r = ns_handle_for([[NSOpenGLView alloc] initWithFrame:ns_arg_rect(x, y, width, height) pixelFormat:pf]);
    }
    return r;
}

zend_long ns_nsopenglview_open_gl_context(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSOpenGLView *v = NS_ARG_AS(NSOpenGLView, handle);
        r = v != nil ? ns_handle_for([v openGLContext]) : 0;
    }
    return r;
}

void ns_nsopenglview_set_open_gl_context(zval *handle, zval *openGLContext)
{
    @autoreleasepool {
        NSOpenGLView *v = NS_ARG_AS(NSOpenGLView, handle);
        if (v == nil) return;
        [v setOpenGLContext:NS_ARG_AS(NSOpenGLContext, openGLContext)];
    }
}

void ns_nsopenglview_clear_gl_context(zval *handle)
{
    @autoreleasepool {
        NSOpenGLView *v = NS_ARG_AS(NSOpenGLView, handle);
        if (v == nil) return;
        [v clearGLContext];
    }
}

void ns_nsopenglview_update(zval *handle)
{
    @autoreleasepool {
        NSOpenGLView *v = NS_ARG_AS(NSOpenGLView, handle);
        if (v == nil) return;
        [v update];
    }
}

void ns_nsopenglview_reshape(zval *handle)
{
    @autoreleasepool {
        NSOpenGLView *v = NS_ARG_AS(NSOpenGLView, handle);
        if (v == nil) return;
        [v reshape];
    }
}

zend_long ns_nsopenglview_pixel_format(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSOpenGLView *v = NS_ARG_AS(NSOpenGLView, handle);
        r = v != nil ? ns_handle_for([v pixelFormat]) : 0;
    }
    return r;
}

void ns_nsopenglview_set_pixel_format(zval *handle, zval *pixelFormat)
{
    @autoreleasepool {
        NSOpenGLView *v = NS_ARG_AS(NSOpenGLView, handle);
        if (v == nil) return;
        [v setPixelFormat:NS_ARG_AS(NSOpenGLPixelFormat, pixelFormat)];
    }
}

void ns_nsopenglview_prepare_open_gl(zval *handle)
{
    @autoreleasepool {
        NSOpenGLView *v = NS_ARG_AS(NSOpenGLView, handle);
        if (v == nil) return;
        [v prepareOpenGL];
    }
}

zend_long ns_nsopenglview_wants_best_resolution_open_gl_surface(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSOpenGLView *v = NS_ARG_AS(NSOpenGLView, handle);
        r = (v != nil && [v wantsBestResolutionOpenGLSurface]) ? 1 : 0;
    }
    return r;
}

void ns_nsopenglview_set_wants_best_resolution_open_gl_surface(zval *handle, zval *wantsBestResolutionOpenGLSurface)
{
    @autoreleasepool {
        NSOpenGLView *v = NS_ARG_AS(NSOpenGLView, handle);
        if (v == nil) return;
        [v setWantsBestResolutionOpenGLSurface:ns_arg_bool(wantsBestResolutionOpenGLSurface)];
    }
}

zend_long ns_nsopenglview_wants_extended_dynamic_range_open_gl_surface(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSOpenGLView *v = NS_ARG_AS(NSOpenGLView, handle);
        r = (v != nil && [v wantsExtendedDynamicRangeOpenGLSurface]) ? 1 : 0;
    }
    return r;
}

void ns_nsopenglview_set_wants_extended_dynamic_range_open_gl_surface(zval *handle, zval *wantsExtendedDynamicRangeOpenGLSurface)
{
    @autoreleasepool {
        NSOpenGLView *v = NS_ARG_AS(NSOpenGLView, handle);
        if (v == nil) return;
        [v setWantsExtendedDynamicRangeOpenGLSurface:ns_arg_bool(wantsExtendedDynamicRangeOpenGLSurface)];
    }
}
