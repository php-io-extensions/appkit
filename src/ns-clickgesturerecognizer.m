#import <AppKit/AppKit.h>
#import "ns-clickgesturerecognizer.h"

static NSClickGestureRecognizer *ns_clickgesturerecognizer_from(uintptr_t handle)
{
    void *obj = ns_gesturerecognizer_from_obj(handle);
    if (!obj) {
        return nil;
    }
    id idObj = (__bridge id)obj;
    return [idObj isKindOfClass:[NSClickGestureRecognizer class]] ? (NSClickGestureRecognizer *)idObj : nil;
}

uintptr_t ns_clickgesturerecognizer_create(void)
{
    @autoreleasepool {
        NSClickGestureRecognizer *gr = [[NSClickGestureRecognizer alloc] initWithTarget:nil action:NULL];
        return ns_gesturerecognizer_retain_obj((__bridge void *)gr);
    }
}

void ns_clickgesturerecognizer_set_button_mask(uintptr_t recognizer, unsigned mask)
{
    @autoreleasepool {
        NSClickGestureRecognizer *obj = ns_clickgesturerecognizer_from(recognizer);
        if (obj) {
            obj.buttonMask = (NSUInteger)mask;
        }
    }
}

unsigned ns_clickgesturerecognizer_button_mask(uintptr_t recognizer)
{
    @autoreleasepool {
        NSClickGestureRecognizer *obj = ns_clickgesturerecognizer_from(recognizer);
        return obj ? (unsigned)obj.buttonMask : 0;
    }
}

void ns_clickgesturerecognizer_set_number_of_clicks_required(uintptr_t recognizer, int count)
{
    @autoreleasepool {
        NSClickGestureRecognizer *obj = ns_clickgesturerecognizer_from(recognizer);
        if (obj) {
            obj.numberOfClicksRequired = count;
        }
    }
}

int ns_clickgesturerecognizer_number_of_clicks_required(uintptr_t recognizer)
{
    @autoreleasepool {
        NSClickGestureRecognizer *obj = ns_clickgesturerecognizer_from(recognizer);
        return obj ? (int)obj.numberOfClicksRequired : 0;
    }
}

void ns_clickgesturerecognizer_set_number_of_touches_required(uintptr_t recognizer, int count)
{
    @autoreleasepool {
        NSClickGestureRecognizer *obj = ns_clickgesturerecognizer_from(recognizer);
        if (obj) {
            obj.numberOfTouchesRequired = count;
        }
    }
}

int ns_clickgesturerecognizer_number_of_touches_required(uintptr_t recognizer)
{
    @autoreleasepool {
        NSClickGestureRecognizer *obj = ns_clickgesturerecognizer_from(recognizer);
        return obj ? (int)obj.numberOfTouchesRequired : 0;
    }
}
