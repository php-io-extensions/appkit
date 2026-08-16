#import <AppKit/AppKit.h>
#import "ns-layoutguide.h"
#import "ns-layoutanchor.h"
#import "ns-view.h"

static int ns_copy_nsstring(NSString *text, char *out, int out_len)
{
    if (!out || out_len <= 0) {
        return 0;
    }
    if (!text) {
        out[0] = '\0';
        return 1;
    }
    return [text getCString:out maxLength:(NSUInteger)out_len encoding:NSUTF8StringEncoding] ? 1 : 0;
}

static uintptr_t ns_retain_obj(id object)
{
    return object ? (uintptr_t)(__bridge_retained void *)object : 0;
}

static void ns_release_handle(uintptr_t handle)
{
    if (handle) {
        CFRelease((void *)handle);
    }
}

static id ns_bridge_obj(uintptr_t handle)
{
    return handle ? (__bridge id)(void *)handle : nil;
}

static NSLayoutGuide *ns_layoutguide_from(uintptr_t handle)
{
    id obj = ns_bridge_obj(handle);
    return [obj isKindOfClass:[NSLayoutGuide class]] ? (NSLayoutGuide *)obj : nil;
}

uintptr_t ns_layoutguide_create(void)
{
    @autoreleasepool {
        return ns_retain_obj([[NSLayoutGuide alloc] init]);
    }
}

uintptr_t ns_layoutguide_wrap(void *guide)
{
    if (!guide) {
        return 0;
    }
    @autoreleasepool {
        NSLayoutGuide *obj = (__bridge NSLayoutGuide *)guide;
        return [obj isKindOfClass:[NSLayoutGuide class]] ? ns_retain_obj(obj) : 0;
    }
}

void ns_layoutguide_destroy(uintptr_t guide)
{
    ns_release_handle(guide);
}

void *ns_layoutguide_nslayoutguide(uintptr_t guide)
{
    NSLayoutGuide *obj = ns_layoutguide_from(guide);
    return obj ? (__bridge void *)obj : NULL;
}

void ns_layoutguide_frame(uintptr_t guide, double *x, double *y, double *width, double *height)
{
    @autoreleasepool {
        NSLayoutGuide *obj = ns_layoutguide_from(guide);
        if (!obj) {
            if (x) *x = 0.0;
            if (y) *y = 0.0;
            if (width) *width = 0.0;
            if (height) *height = 0.0;
            return;
        }
        NSRect frame = obj.frame;
        if (x) *x = (double)frame.origin.x;
        if (y) *y = (double)frame.origin.y;
        if (width) *width = (double)frame.size.width;
        if (height) *height = (double)frame.size.height;
    }
}

void ns_layoutguide_set_identifier(uintptr_t guide, const char *identifier)
{
    @autoreleasepool {
        NSLayoutGuide *obj = ns_layoutguide_from(guide);
        if (!obj) {
            return;
        }
        obj.identifier = identifier ? [NSString stringWithUTF8String:identifier] : nil;
    }
}

int ns_layoutguide_identifier(uintptr_t guide, char *out, int out_len)
{
    @autoreleasepool {
        NSLayoutGuide *obj = ns_layoutguide_from(guide);
        return ns_copy_nsstring(obj.identifier, out, out_len);
    }
}

uintptr_t ns_layoutguide_owning_view(uintptr_t guide)
{
    @autoreleasepool {
        NSLayoutGuide *obj = ns_layoutguide_from(guide);
        return obj && obj.owningView ? ns_view_wrap((__bridge void *)obj.owningView) : 0;
    }
}

void ns_layoutguide_add_to_view(uintptr_t guide, uintptr_t view)
{
    @autoreleasepool {
        NSLayoutGuide *obj = ns_layoutguide_from(guide);
        void *native = ns_view_nsview(view);
        NSView *v = native ? (__bridge NSView *)native : nil;
        if (obj && v) {
            [v addLayoutGuide:obj];
        }
    }
}

void ns_layoutguide_remove_from_view(uintptr_t guide, uintptr_t view)
{
    @autoreleasepool {
        NSLayoutGuide *obj = ns_layoutguide_from(guide);
        void *native = ns_view_nsview(view);
        NSView *v = native ? (__bridge NSView *)native : nil;
        if (obj && v) {
            [v removeLayoutGuide:obj];
        }
    }
}

#define NS_GUIDE_ANCHOR(fn, prop) \
uintptr_t fn(uintptr_t guide) \
{ \
    @autoreleasepool { \
        NSLayoutGuide *obj = ns_layoutguide_from(guide); \
        return obj ? ns_layoutanchor_wrap((__bridge void *)obj.prop) : 0; \
    } \
}

NS_GUIDE_ANCHOR(ns_layoutguide_leading_anchor, leadingAnchor)
NS_GUIDE_ANCHOR(ns_layoutguide_trailing_anchor, trailingAnchor)
NS_GUIDE_ANCHOR(ns_layoutguide_left_anchor, leftAnchor)
NS_GUIDE_ANCHOR(ns_layoutguide_right_anchor, rightAnchor)
NS_GUIDE_ANCHOR(ns_layoutguide_top_anchor, topAnchor)
NS_GUIDE_ANCHOR(ns_layoutguide_bottom_anchor, bottomAnchor)
NS_GUIDE_ANCHOR(ns_layoutguide_width_anchor, widthAnchor)
NS_GUIDE_ANCHOR(ns_layoutguide_height_anchor, heightAnchor)
NS_GUIDE_ANCHOR(ns_layoutguide_center_x_anchor, centerXAnchor)
NS_GUIDE_ANCHOR(ns_layoutguide_center_y_anchor, centerYAnchor)

int ns_layoutguide_has_ambiguous_layout(uintptr_t guide)
{
    @autoreleasepool {
        NSLayoutGuide *obj = ns_layoutguide_from(guide);
        return obj && obj.hasAmbiguousLayout ? 1 : 0;
    }
}
