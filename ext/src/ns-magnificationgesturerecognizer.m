#import <AppKit/AppKit.h>
#import "ns-magnificationgesturerecognizer.h"

static NSMagnificationGestureRecognizer *ns_magnificationgesturerecognizer_from(uintptr_t handle)
{
    void *obj = ns_gesturerecognizer_from_obj(handle);
    if (!obj) {
        return nil;
    }
    id idObj = (__bridge id)obj;
    return [idObj isKindOfClass:[NSMagnificationGestureRecognizer class]] ? (NSMagnificationGestureRecognizer *)idObj : nil;
}

uintptr_t ns_magnificationgesturerecognizer_create(void)
{
    @autoreleasepool {
        NSMagnificationGestureRecognizer *gr = [[NSMagnificationGestureRecognizer alloc] initWithTarget:nil action:NULL];
        return ns_gesturerecognizer_retain_obj((__bridge void *)gr);
    }
}

double ns_magnificationgesturerecognizer_magnification(uintptr_t recognizer)
{
    @autoreleasepool {
        NSMagnificationGestureRecognizer *obj = ns_magnificationgesturerecognizer_from(recognizer);
        return obj ? (double)obj.magnification : 0.0;
    }
}

void ns_magnificationgesturerecognizer_set_magnification(uintptr_t recognizer, double magnification)
{
    @autoreleasepool {
        NSMagnificationGestureRecognizer *obj = ns_magnificationgesturerecognizer_from(recognizer);
        if (obj) {
            obj.magnification = (CGFloat)magnification;
        }
    }
}
