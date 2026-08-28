#include "ns-visualeffectview.h"
#include "ns-value.h"

/* ====================================================================== */
/* NSVisualEffectView                                                     */
/* ====================================================================== */

zend_long ns_nsvisualeffectview_init_with_frame(zval *x, zval *y, zval *width, zval *height)
{
    @autoreleasepool {
        return ns_handle_for([[NSVisualEffectView alloc] initWithFrame:ns_arg_rect(x, y, width, height)]);
    }
}

zend_long ns_nsvisualeffectview_material(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSVisualEffectView *v = NS_ARG_AS(NSVisualEffectView, handle);
        r = v != nil ? (zend_long) [v material] : 0;
    }
    return r;
}

void ns_nsvisualeffectview_set_material(zval *handle, zval *material)
{
    @autoreleasepool {
        NSVisualEffectView *v = NS_ARG_AS(NSVisualEffectView, handle);
        if (v == nil) return;
        [v setMaterial:(NSVisualEffectMaterial) ns_arg_long(material)];
    }
}

zend_long ns_nsvisualeffectview_interior_background_style(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSVisualEffectView *v = NS_ARG_AS(NSVisualEffectView, handle);
        r = v != nil ? (zend_long) [v interiorBackgroundStyle] : 0;
    }
    return r;
}

zend_long ns_nsvisualeffectview_blending_mode(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSVisualEffectView *v = NS_ARG_AS(NSVisualEffectView, handle);
        r = v != nil ? (zend_long) [v blendingMode] : 0;
    }
    return r;
}

void ns_nsvisualeffectview_set_blending_mode(zval *handle, zval *blendingMode)
{
    @autoreleasepool {
        NSVisualEffectView *v = NS_ARG_AS(NSVisualEffectView, handle);
        if (v == nil) return;
        [v setBlendingMode:(NSVisualEffectBlendingMode) ns_arg_long(blendingMode)];
    }
}

zend_long ns_nsvisualeffectview_state(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSVisualEffectView *v = NS_ARG_AS(NSVisualEffectView, handle);
        r = v != nil ? (zend_long) [v state] : 0;
    }
    return r;
}

void ns_nsvisualeffectview_set_state(zval *handle, zval *state)
{
    @autoreleasepool {
        NSVisualEffectView *v = NS_ARG_AS(NSVisualEffectView, handle);
        if (v == nil) return;
        [v setState:(NSVisualEffectState) ns_arg_long(state)];
    }
}

zend_long ns_nsvisualeffectview_mask_image(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSVisualEffectView *v = NS_ARG_AS(NSVisualEffectView, handle);
        h = ns_handle_for(v != nil ? [v maskImage] : nil);
    }
    return h;
}

void ns_nsvisualeffectview_set_mask_image(zval *handle, zval *maskImage)
{
    @autoreleasepool {
        NSVisualEffectView *v = NS_ARG_AS(NSVisualEffectView, handle);
        if (v == nil) return;
        [v setMaskImage:NS_ARG_AS(NSImage, maskImage)];
    }
}

zend_long ns_nsvisualeffectview_is_emphasized(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSVisualEffectView *v = NS_ARG_AS(NSVisualEffectView, handle);
        r = (v != nil && [v isEmphasized]) ? 1 : 0;
    }
    return r;
}

void ns_nsvisualeffectview_set_emphasized(zval *handle, zval *emphasized)
{
    @autoreleasepool {
        NSVisualEffectView *v = NS_ARG_AS(NSVisualEffectView, handle);
        if (v == nil) return;
        [v setEmphasized:ns_arg_bool(emphasized)];
    }
}

void ns_nsvisualeffectview_view_did_move_to_window(zval *handle)
{
    @autoreleasepool {
        NSVisualEffectView *v = NS_ARG_AS(NSVisualEffectView, handle);
        if (v == nil) return;
        [v viewDidMoveToWindow];
    }
}

void ns_nsvisualeffectview_view_will_move_to_window(zval *handle, zval *newWindow)
{
    @autoreleasepool {
        NSVisualEffectView *v = NS_ARG_AS(NSVisualEffectView, handle);
        if (v == nil) return;
        [v viewWillMoveToWindow:NS_ARG_AS(NSWindow, newWindow)];
    }
}
