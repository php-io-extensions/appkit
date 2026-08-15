#import <AppKit/AppKit.h>
#import "ns-touch.h"
#import "ns-view.h"

static uintptr_t ns_touch_retain_obj(id object)
{
    return object ? (uintptr_t)(__bridge_retained void *)object : 0;
}

static NSTouch *ns_touch_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSTouch class]] ? (NSTouch *)obj : nil;
}

uintptr_t ns_touch_wrap(void *touch)
{
    if (!touch) {
        return 0;
    }
    @autoreleasepool {
        NSTouch *obj = (__bridge NSTouch *)touch;
        return [obj isKindOfClass:[NSTouch class]] ? ns_touch_retain_obj(obj) : 0;
    }
}

void ns_touch_destroy(uintptr_t touch)
{
    if (!touch) {
        return;
    }
    CFRelease((void *)touch);
}

void *ns_touch_nstouch(uintptr_t touch)
{
    NSTouch *obj = ns_touch_from(touch);
    return obj ? (__bridge void *)obj : NULL;
}

int ns_touch_phase(uintptr_t touch)
{
    @autoreleasepool {
        NSTouch *obj = ns_touch_from(touch);
        return obj ? (int)obj.phase : 0;
    }
}

int ns_touch_type(uintptr_t touch)
{
    @autoreleasepool {
        NSTouch *obj = ns_touch_from(touch);
        return obj ? (int)obj.type : 0;
    }
}

int ns_touch_is_resting(uintptr_t touch)
{
    @autoreleasepool {
        NSTouch *obj = ns_touch_from(touch);
        return obj && obj.resting ? 1 : 0;
    }
}

int ns_touch_normalized_position(uintptr_t touch, double *x, double *y)
{
    if (!x || !y) {
        return 0;
    }
    @autoreleasepool {
        NSTouch *obj = ns_touch_from(touch);
        if (!obj) {
            return 0;
        }
        NSPoint pt = obj.normalizedPosition;
        *x = (double)pt.x;
        *y = (double)pt.y;
        return 1;
    }
}

int ns_touch_device_size(uintptr_t touch, double *w, double *h)
{
    if (!w || !h) {
        return 0;
    }
    @autoreleasepool {
        NSTouch *obj = ns_touch_from(touch);
        if (!obj) {
            return 0;
        }
        NSSize size = obj.deviceSize;
        *w = (double)size.width;
        *h = (double)size.height;
        return 1;
    }
}

int ns_touch_location_in_view(uintptr_t touch, uintptr_t view, double *x, double *y)
{
    if (!x || !y) {
        return 0;
    }
    @autoreleasepool {
        NSTouch *obj = ns_touch_from(touch);
        if (!obj) {
            return 0;
        }
        NSView *nsview = nil;
        void *viewPtr = ns_view_nsview(view);
        if (viewPtr) {
            nsview = (__bridge NSView *)viewPtr;
        }
        NSPoint pt = [obj locationInView:nsview];
        *x = (double)pt.x;
        *y = (double)pt.y;
        return 1;
    }
}

int ns_touch_previous_location_in_view(uintptr_t touch, uintptr_t view, double *x, double *y)
{
    if (!x || !y) {
        return 0;
    }
    @autoreleasepool {
        NSTouch *obj = ns_touch_from(touch);
        if (!obj) {
            return 0;
        }
        NSView *nsview = nil;
        void *viewPtr = ns_view_nsview(view);
        if (viewPtr) {
            nsview = (__bridge NSView *)viewPtr;
        }
        NSPoint pt = [obj previousLocationInView:nsview];
        *x = (double)pt.x;
        *y = (double)pt.y;
        return 1;
    }
}
