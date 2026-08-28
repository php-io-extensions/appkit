#include "ns-colorwell.h"
#include "ns-value.h"

/* ====================================================================== */
/* NSColorWell                                                            */
/* ====================================================================== */

zend_long ns_nscolorwell_init_with_frame(zval *x, zval *y, zval *width, zval *height)
{
    @autoreleasepool {
        return ns_handle_for([[NSColorWell alloc] initWithFrame:ns_arg_rect(x, y, width, height)]);
    }
}

zend_long ns_nscolorwell_color_well_with_style(zval *style)
{
    zend_long h = 0;
    @autoreleasepool {
        h = ns_handle_for([NSColorWell colorWellWithStyle:(NSColorWellStyle) ns_arg_long(style)]);
    }
    return h;
}

void ns_nscolorwell_deactivate(zval *handle)
{
    @autoreleasepool {
        NSColorWell *w = NS_ARG_AS(NSColorWell, handle);
        if (w == nil) return;
        [w deactivate];
    }
}

void ns_nscolorwell_activate(zval *handle, zval *exclusive)
{
    @autoreleasepool {
        NSColorWell *w = NS_ARG_AS(NSColorWell, handle);
        if (w == nil) return;
        [w activate:ns_arg_bool(exclusive)];
    }
}

zend_long ns_nscolorwell_is_active(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSColorWell *w = NS_ARG_AS(NSColorWell, handle);
        r = (w != nil && [w isActive]) ? 1 : 0;
    }
    return r;
}

void ns_nscolorwell_draw_well_inside(zval *handle, zval *x, zval *y, zval *width, zval *height)
{
    @autoreleasepool {
        NSColorWell *w = NS_ARG_AS(NSColorWell, handle);
        if (w == nil) return;
        [w drawWellInside:ns_arg_rect(x, y, width, height)];
    }
}

void ns_nscolorwell_take_color_from(zval *handle, zval *sender)
{
    @autoreleasepool {
        NSColorWell *w = NS_ARG_AS(NSColorWell, handle);
        if (w == nil) return;
        [w takeColorFrom:ns_arg_object(sender)];
    }
}

zend_long ns_nscolorwell_color(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSColorWell *w = NS_ARG_AS(NSColorWell, handle);
        h = ns_handle_for(w != nil ? [w color] : nil);
    }
    return h;
}

void ns_nscolorwell_set_color(zval *handle, zval *color)
{
    @autoreleasepool {
        NSColorWell *w = NS_ARG_AS(NSColorWell, handle);
        if (w == nil) return;
        [w setColor:NS_ARG_AS(NSColor, color)];
    }
}

zend_long ns_nscolorwell_color_well_style(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSColorWell *w = NS_ARG_AS(NSColorWell, handle);
        r = w != nil ? (zend_long) [w colorWellStyle] : 0;
    }
    return r;
}

void ns_nscolorwell_set_color_well_style(zval *handle, zval *colorWellStyle)
{
    @autoreleasepool {
        NSColorWell *w = NS_ARG_AS(NSColorWell, handle);
        if (w == nil) return;
        [w setColorWellStyle:(NSColorWellStyle) ns_arg_long(colorWellStyle)];
    }
}

zend_long ns_nscolorwell_image(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSColorWell *w = NS_ARG_AS(NSColorWell, handle);
        h = ns_handle_for(w != nil ? [w image] : nil);
    }
    return h;
}

void ns_nscolorwell_set_image(zval *handle, zval *image)
{
    @autoreleasepool {
        NSColorWell *w = NS_ARG_AS(NSColorWell, handle);
        if (w == nil) return;
        [w setImage:NS_ARG_AS(NSImage, image)];
    }
}

zend_long ns_nscolorwell_pulldown_target(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSColorWell *w = NS_ARG_AS(NSColorWell, handle);
        h = ns_handle_for(w != nil ? [w pulldownTarget] : nil);
    }
    return h;
}

void ns_nscolorwell_set_pulldown_target(zval *handle, zval *pulldownTarget)
{
    @autoreleasepool {
        NSColorWell *w = NS_ARG_AS(NSColorWell, handle);
        if (w == nil) return;
        [w setPulldownTarget:ns_arg_object(pulldownTarget)];
    }
}

void ns_nscolorwell_pulldown_action(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSColorWell *w = NS_ARG_AS(NSColorWell, handle);
        ns_ret_sel(return_value, w != nil ? [w pulldownAction] : NULL);
    }
}

void ns_nscolorwell_set_pulldown_action(zval *handle, zval *pulldownAction)
{
    @autoreleasepool {
        NSColorWell *w = NS_ARG_AS(NSColorWell, handle);
        if (w == nil) return;
        [w setPulldownAction:ns_arg_sel(pulldownAction)];
    }
}

zend_long ns_nscolorwell_supports_alpha(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSColorWell *w = NS_ARG_AS(NSColorWell, handle);
        r = (w != nil && [w supportsAlpha]) ? 1 : 0;
    }
    return r;
}

void ns_nscolorwell_set_supports_alpha(zval *handle, zval *supportsAlpha)
{
    @autoreleasepool {
        NSColorWell *w = NS_ARG_AS(NSColorWell, handle);
        if (w == nil) return;
        [w setSupportsAlpha:ns_arg_bool(supportsAlpha)];
    }
}
