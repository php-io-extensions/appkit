#import <AppKit/AppKit.h>
#import "ns-gesturerecognizer.h"
#import "ns-view.h"

uintptr_t ns_gesturerecognizer_retain_obj(void *object)
{
    id obj = (__bridge id)object;
    return obj ? (uintptr_t)(__bridge_retained void *)obj : 0;
}

void *ns_gesturerecognizer_from_obj(uintptr_t handle)
{
    if (!handle) {
        return NULL;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSGestureRecognizer class]] ? (void *)handle : NULL;
}

static NSGestureRecognizer *ns_gesturerecognizer_from(uintptr_t handle)
{
    void *obj = ns_gesturerecognizer_from_obj(handle);
    return obj ? (__bridge NSGestureRecognizer *)(void *)obj : nil;
}

uintptr_t ns_gesturerecognizer_create(void)
{
    @autoreleasepool {
        NSGestureRecognizer *gr = [[NSGestureRecognizer alloc] initWithTarget:nil action:NULL];
        return ns_gesturerecognizer_retain_obj((__bridge void *)gr);
    }
}

uintptr_t ns_gesturerecognizer_wrap(void *recognizer)
{
    if (!recognizer) {
        return 0;
    }
    @autoreleasepool {
        NSGestureRecognizer *obj = (__bridge NSGestureRecognizer *)recognizer;
        return [obj isKindOfClass:[NSGestureRecognizer class]] ? ns_gesturerecognizer_retain_obj((__bridge void *)obj) : 0;
    }
}

void ns_gesturerecognizer_destroy(uintptr_t recognizer)
{
    if (!recognizer) {
        return;
    }
    CFRelease((void *)recognizer);
}

void *ns_gesturerecognizer_nsgesturerecognizer(uintptr_t recognizer)
{
    NSGestureRecognizer *obj = ns_gesturerecognizer_from(recognizer);
    return obj ? (__bridge void *)obj : NULL;
}

void ns_gesturerecognizer_set_enabled(uintptr_t recognizer, int enabled)
{
    @autoreleasepool {
        NSGestureRecognizer *obj = ns_gesturerecognizer_from(recognizer);
        if (obj) {
            obj.enabled = enabled ? YES : NO;
        }
    }
}

int ns_gesturerecognizer_is_enabled(uintptr_t recognizer)
{
    @autoreleasepool {
        NSGestureRecognizer *obj = ns_gesturerecognizer_from(recognizer);
        return obj && obj.enabled ? 1 : 0;
    }
}

int ns_gesturerecognizer_state(uintptr_t recognizer)
{
    @autoreleasepool {
        NSGestureRecognizer *obj = ns_gesturerecognizer_from(recognizer);
        return obj ? (int)obj.state : 0;
    }
}

int ns_gesturerecognizer_add_to_view(uintptr_t recognizer, uintptr_t view)
{
    @autoreleasepool {
        NSGestureRecognizer *obj = ns_gesturerecognizer_from(recognizer);
        void *nsview = ns_view_nsview(view);
        if (!obj || !nsview) {
            return 0;
        }
        [(NSView *)(__bridge NSView *)nsview addGestureRecognizer:obj];
        return 1;
    }
}

void ns_gesturerecognizer_remove_from_view(uintptr_t recognizer, uintptr_t view)
{
    @autoreleasepool {
        NSGestureRecognizer *obj = ns_gesturerecognizer_from(recognizer);
        void *nsview = ns_view_nsview(view);
        if (!obj || !nsview) {
            return;
        }
        [(NSView *)(__bridge NSView *)nsview removeGestureRecognizer:obj];
    }
}

int ns_gesturerecognizer_location_in_view(uintptr_t recognizer, uintptr_t view, double *x, double *y)
{
    if (!x || !y) {
        return 0;
    }
    @autoreleasepool {
        NSGestureRecognizer *obj = ns_gesturerecognizer_from(recognizer);
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
