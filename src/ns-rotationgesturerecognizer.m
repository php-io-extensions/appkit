#import <AppKit/AppKit.h>
#import "ns-rotationgesturerecognizer.h"

static NSRotationGestureRecognizer *ns_rotationgesturerecognizer_from(uintptr_t handle)
{
    void *obj = ns_gesturerecognizer_from_obj(handle);
    if (!obj) {
        return nil;
    }
    id idObj = (__bridge id)obj;
    return [idObj isKindOfClass:[NSRotationGestureRecognizer class]] ? (NSRotationGestureRecognizer *)idObj : nil;
}

uintptr_t ns_rotationgesturerecognizer_create(void)
{
    @autoreleasepool {
        NSRotationGestureRecognizer *gr = [[NSRotationGestureRecognizer alloc] initWithTarget:nil action:NULL];
        return ns_gesturerecognizer_retain_obj((__bridge void *)gr);
    }
}

double ns_rotationgesturerecognizer_rotation(uintptr_t recognizer)
{
    @autoreleasepool {
        NSRotationGestureRecognizer *obj = ns_rotationgesturerecognizer_from(recognizer);
        return obj ? (double)obj.rotation : 0.0;
    }
}

double ns_rotationgesturerecognizer_rotation_in_degrees(uintptr_t recognizer)
{
    @autoreleasepool {
        NSRotationGestureRecognizer *obj = ns_rotationgesturerecognizer_from(recognizer);
        return obj ? (double)obj.rotationInDegrees : 0.0;
    }
}

void ns_rotationgesturerecognizer_set_rotation(uintptr_t recognizer, double radians)
{
    @autoreleasepool {
        NSRotationGestureRecognizer *obj = ns_rotationgesturerecognizer_from(recognizer);
        if (obj) {
            obj.rotation = (CGFloat)radians;
        }
    }
}
