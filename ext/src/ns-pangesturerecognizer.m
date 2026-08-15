#import <AppKit/AppKit.h>
#import "ns-pangesturerecognizer.h"
#import "ns-view.h"

static NSPanGestureRecognizer *ns_pangesturerecognizer_from(uintptr_t handle)
{
    void *obj = ns_gesturerecognizer_from_obj(handle);
    if (!obj) {
        return nil;
    }
    id idObj = (__bridge id)obj;
    return [idObj isKindOfClass:[NSPanGestureRecognizer class]] ? (NSPanGestureRecognizer *)idObj : nil;
}

uintptr_t ns_pangesturerecognizer_create(void)
{
    @autoreleasepool {
        NSPanGestureRecognizer *gr = [[NSPanGestureRecognizer alloc] initWithTarget:nil action:NULL];
        return ns_gesturerecognizer_retain_obj((__bridge void *)gr);
    }
}

void ns_pangesturerecognizer_set_button_mask(uintptr_t recognizer, unsigned mask)
{
    @autoreleasepool {
        NSPanGestureRecognizer *obj = ns_pangesturerecognizer_from(recognizer);
        if (obj) {
            obj.buttonMask = (NSUInteger)mask;
        }
    }
}

unsigned ns_pangesturerecognizer_button_mask(uintptr_t recognizer)
{
    @autoreleasepool {
        NSPanGestureRecognizer *obj = ns_pangesturerecognizer_from(recognizer);
        return obj ? (unsigned)obj.buttonMask : 0;
    }
}

int ns_pangesturerecognizer_translation_in_view(uintptr_t recognizer, uintptr_t view, double *x, double *y)
{
    if (!x || !y) {
        return 0;
    }
    @autoreleasepool {
        NSPanGestureRecognizer *obj = ns_pangesturerecognizer_from(recognizer);
        if (!obj) {
            return 0;
        }
        NSView *nsview = nil;
        void *viewPtr = ns_view_nsview(view);
        if (viewPtr) {
            nsview = (__bridge NSView *)viewPtr;
        }
        NSPoint pt = [obj translationInView:nsview];
        *x = (double)pt.x;
        *y = (double)pt.y;
        return 1;
    }
}

void ns_pangesturerecognizer_set_translation_in_view(uintptr_t recognizer, uintptr_t view, double x, double y)
{
    @autoreleasepool {
        NSPanGestureRecognizer *obj = ns_pangesturerecognizer_from(recognizer);
        if (!obj) {
            return;
        }
        NSView *nsview = nil;
        void *viewPtr = ns_view_nsview(view);
        if (viewPtr) {
            nsview = (__bridge NSView *)viewPtr;
        }
        [obj setTranslation:NSMakePoint((CGFloat)x, (CGFloat)y) inView:nsview];
    }
}

int ns_pangesturerecognizer_velocity_in_view(uintptr_t recognizer, uintptr_t view, double *x, double *y)
{
    if (!x || !y) {
        return 0;
    }
    @autoreleasepool {
        NSPanGestureRecognizer *obj = ns_pangesturerecognizer_from(recognizer);
        if (!obj) {
            return 0;
        }
        NSView *nsview = nil;
        void *viewPtr = ns_view_nsview(view);
        if (viewPtr) {
            nsview = (__bridge NSView *)viewPtr;
        }
        NSPoint pt = [obj velocityInView:nsview];
        *x = (double)pt.x;
        *y = (double)pt.y;
        return 1;
    }
}

void ns_pangesturerecognizer_set_number_of_touches_required(uintptr_t recognizer, int count)
{
    @autoreleasepool {
        NSPanGestureRecognizer *obj = ns_pangesturerecognizer_from(recognizer);
        if (obj) {
            obj.numberOfTouchesRequired = count;
        }
    }
}

int ns_pangesturerecognizer_number_of_touches_required(uintptr_t recognizer)
{
    @autoreleasepool {
        NSPanGestureRecognizer *obj = ns_pangesturerecognizer_from(recognizer);
        return obj ? (int)obj.numberOfTouchesRequired : 0;
    }
}
