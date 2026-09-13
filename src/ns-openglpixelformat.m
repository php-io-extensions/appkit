#include "ns-openglpixelformat.h"
#include "ns-value.h"

/* ====================================================================== */
/* NSOpenGLPixelFormat                                                    */
/* ====================================================================== */

zend_long ns_nsopenglpixelformat_init_with_cgl_pixel_format_obj(zval *format)
{
    zend_long r = 0;
    @autoreleasepool {
        CGLPixelFormatObj pf = (CGLPixelFormatObj) (uintptr_t) ns_arg_long(format);
        r = ns_handle_for([[NSOpenGLPixelFormat alloc] initWithCGLPixelFormatObj:pf]);
    }
    return r;
}

zend_long ns_nsopenglpixelformat_init_with_attributes(zval *attribs)
{
    zend_long r = 0;
    @autoreleasepool {
        NSOpenGLPixelFormatAttribute list[NS_C_ARRAY_MAX];
        ns_arg_uint32_zarray(attribs, (uint32_t *) list, NS_C_ARRAY_MAX);
        r = ns_handle_for([[NSOpenGLPixelFormat alloc] initWithAttributes:list]);
    }
    return r;
}

void ns_nsopenglpixelformat_get_values_for_attribute_for_virtual_screen(zval *return_value, zval *handle, zval *attrib, zval *screen)
{
    GLint vals[4] = {0, 0, 0, 0};
    @autoreleasepool {
        NSOpenGLPixelFormat *pf = NS_ARG_AS(NSOpenGLPixelFormat, handle);
        if (pf != nil) {
            [pf getValues:vals
             forAttribute:(NSOpenGLPixelFormatAttribute) ns_arg_long(attrib)
         forVirtualScreen:(GLint) ns_arg_long(screen)];
        }
    }
    array_init_size(return_value, 1);
    zval list;
    ns_ret_int32_array(&list, (const int32_t *) vals, 4);
    add_assoc_zval(return_value, "vals", &list);
}

zend_long ns_nsopenglpixelformat_number_of_virtual_screens(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSOpenGLPixelFormat *pf = NS_ARG_AS(NSOpenGLPixelFormat, handle);
        r = pf != nil ? (zend_long) [pf numberOfVirtualScreens] : 0;
    }
    return r;
}

zend_long ns_nsopenglpixelformat_cgl_pixel_format_obj(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSOpenGLPixelFormat *pf = NS_ARG_AS(NSOpenGLPixelFormat, handle);
        r = pf != nil ? (zend_long) (uintptr_t) [pf CGLPixelFormatObj] : 0;
    }
    return r;
}
