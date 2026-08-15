#import <AppKit/AppKit.h>
#import "ns-visualeffectview.h"
#import "ns-view.h"

static NSVisualEffectView *ns_visualeffectview_from(uintptr_t handle)
{
    void *ptr = ns_view_nsview(handle);
    if (!ptr) {
        return nil;
    }
    NSView *view = (__bridge NSView *)ptr;
    return [view isKindOfClass:[NSVisualEffectView class]] ? (NSVisualEffectView *)view : nil;
}

uintptr_t ns_visualeffectview_create(double x, double y, double width, double height)
{
    if (width <= 0) {
        width = 240;
    }
    if (height <= 0) {
        height = 160;
    }
    @autoreleasepool {
        NSRect rect = NSMakeRect((CGFloat)x, (CGFloat)y, (CGFloat)width, (CGFloat)height);
        NSVisualEffectView *effect = [[NSVisualEffectView alloc] initWithFrame:rect];
        effect.material = NSVisualEffectMaterialSidebar;
        effect.blendingMode = NSVisualEffectBlendingModeBehindWindow;
        return ns_view_wrap((__bridge void *)effect);
    }
}

uintptr_t ns_visualeffectview_wrap(void *view)
{
    if (!view) {
        return 0;
    }
    @autoreleasepool {
        NSVisualEffectView *obj = (__bridge NSVisualEffectView *)view;
        return [obj isKindOfClass:[NSVisualEffectView class]] ? ns_view_wrap(view) : 0;
    }
}

void ns_visualeffectview_destroy(uintptr_t view)
{
    ns_view_destroy(view);
}

void *ns_visualeffectview_nsvisualeffectview(uintptr_t view)
{
    NSVisualEffectView *obj = ns_visualeffectview_from(view);
    return obj ? (__bridge void *)obj : NULL;
}

void ns_visualeffectview_set_material(uintptr_t view, int material)
{
    @autoreleasepool {
        NSVisualEffectView *obj = ns_visualeffectview_from(view);
        if (obj) {
            obj.material = (NSVisualEffectMaterial)material;
        }
    }
}

int ns_visualeffectview_get_material(uintptr_t view)
{
    @autoreleasepool {
        NSVisualEffectView *obj = ns_visualeffectview_from(view);
        return obj ? (int)obj.material : 0;
    }
}

void ns_visualeffectview_set_blending_mode(uintptr_t view, int mode)
{
    @autoreleasepool {
        NSVisualEffectView *obj = ns_visualeffectview_from(view);
        if (obj) {
            obj.blendingMode = (NSVisualEffectBlendingMode)mode;
        }
    }
}

int ns_visualeffectview_get_blending_mode(uintptr_t view)
{
    @autoreleasepool {
        NSVisualEffectView *obj = ns_visualeffectview_from(view);
        return obj ? (int)obj.blendingMode : 0;
    }
}

void ns_visualeffectview_set_state(uintptr_t view, int state)
{
    @autoreleasepool {
        NSVisualEffectView *obj = ns_visualeffectview_from(view);
        if (obj) {
            obj.state = (NSVisualEffectState)state;
        }
    }
}

int ns_visualeffectview_get_state(uintptr_t view)
{
    @autoreleasepool {
        NSVisualEffectView *obj = ns_visualeffectview_from(view);
        return obj ? (int)obj.state : 0;
    }
}

void ns_visualeffectview_set_emphasized(uintptr_t view, int flag)
{
    @autoreleasepool {
        NSVisualEffectView *obj = ns_visualeffectview_from(view);
        if (obj) {
            obj.emphasized = flag ? YES : NO;
        }
    }
}

int ns_visualeffectview_is_emphasized(uintptr_t view)
{
    @autoreleasepool {
        NSVisualEffectView *obj = ns_visualeffectview_from(view);
        return obj && obj.emphasized ? 1 : 0;
    }
}

int ns_visualeffectview_interior_background_style(uintptr_t view)
{
    @autoreleasepool {
        NSVisualEffectView *obj = ns_visualeffectview_from(view);
        return obj ? (int)obj.interiorBackgroundStyle : 0;
    }
}
