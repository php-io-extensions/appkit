#import <AppKit/AppKit.h>
#import "ns-pressgesturerecognizer.h"

static NSPressGestureRecognizer *ns_pressgesturerecognizer_from(uintptr_t handle)
{
    void *obj = ns_gesturerecognizer_from_obj(handle);
    if (!obj) {
        return nil;
    }
    id idObj = (__bridge id)obj;
    return [idObj isKindOfClass:[NSPressGestureRecognizer class]] ? (NSPressGestureRecognizer *)idObj : nil;
}

uintptr_t ns_pressgesturerecognizer_create(void)
{
    @autoreleasepool {
        NSPressGestureRecognizer *gr = [[NSPressGestureRecognizer alloc] initWithTarget:nil action:NULL];
        return ns_gesturerecognizer_retain_obj((__bridge void *)gr);
    }
}

void ns_pressgesturerecognizer_set_button_mask(uintptr_t recognizer, unsigned mask)
{
    @autoreleasepool {
        NSPressGestureRecognizer *obj = ns_pressgesturerecognizer_from(recognizer);
        if (obj) {
            obj.buttonMask = (NSUInteger)mask;
        }
    }
}

unsigned ns_pressgesturerecognizer_button_mask(uintptr_t recognizer)
{
    @autoreleasepool {
        NSPressGestureRecognizer *obj = ns_pressgesturerecognizer_from(recognizer);
        return obj ? (unsigned)obj.buttonMask : 0;
    }
}

void ns_pressgesturerecognizer_set_minimum_press_duration(uintptr_t recognizer, double seconds)
{
    @autoreleasepool {
        NSPressGestureRecognizer *obj = ns_pressgesturerecognizer_from(recognizer);
        if (obj) {
            obj.minimumPressDuration = (NSTimeInterval)seconds;
        }
    }
}

double ns_pressgesturerecognizer_minimum_press_duration(uintptr_t recognizer)
{
    @autoreleasepool {
        NSPressGestureRecognizer *obj = ns_pressgesturerecognizer_from(recognizer);
        return obj ? (double)obj.minimumPressDuration : 0.0;
    }
}

void ns_pressgesturerecognizer_set_allowable_movement(uintptr_t recognizer, double points)
{
    @autoreleasepool {
        NSPressGestureRecognizer *obj = ns_pressgesturerecognizer_from(recognizer);
        if (obj) {
            obj.allowableMovement = (CGFloat)points;
        }
    }
}

double ns_pressgesturerecognizer_allowable_movement(uintptr_t recognizer)
{
    @autoreleasepool {
        NSPressGestureRecognizer *obj = ns_pressgesturerecognizer_from(recognizer);
        return obj ? (double)obj.allowableMovement : 0.0;
    }
}

void ns_pressgesturerecognizer_set_number_of_touches_required(uintptr_t recognizer, int count)
{
    @autoreleasepool {
        NSPressGestureRecognizer *obj = ns_pressgesturerecognizer_from(recognizer);
        if (obj) {
            obj.numberOfTouchesRequired = count;
        }
    }
}

int ns_pressgesturerecognizer_number_of_touches_required(uintptr_t recognizer)
{
    @autoreleasepool {
        NSPressGestureRecognizer *obj = ns_pressgesturerecognizer_from(recognizer);
        return obj ? (int)obj.numberOfTouchesRequired : 0;
    }
}
