#import <AppKit/AppKit.h>
#import "ns-responder.h"

static uintptr_t ns_responder_retain_obj(id object)
{
    return object ? (uintptr_t)(__bridge_retained void *)object : 0;
}

static id ns_responder_bridge_obj(uintptr_t handle)
{
    return handle ? (__bridge id)(void *)handle : nil;
}

static NSResponder *ns_responder_from(uintptr_t handle)
{
    id obj = ns_responder_bridge_obj(handle);
    return [obj isKindOfClass:[NSResponder class]] ? (NSResponder *)obj : nil;
}

uintptr_t ns_responder_wrap(void *responder)
{
    if (!responder) {
        return 0;
    }
    @autoreleasepool {
        NSResponder *obj = (__bridge NSResponder *)responder;
        return ns_responder_retain_obj(obj);
    }
}

void ns_responder_destroy(uintptr_t responder)
{
    if (!responder) {
        return;
    }
    CFRelease((void *)responder);
}

void *ns_responder_nsresponder(uintptr_t responder)
{
    NSResponder *obj = ns_responder_from(responder);
    return obj ? (__bridge void *)obj : NULL;
}

int ns_responder_accepts_first_responder(uintptr_t responder)
{
    @autoreleasepool {
        NSResponder *obj = ns_responder_from(responder);
        return obj && obj.acceptsFirstResponder ? 1 : 0;
    }
}

int ns_responder_become_first_responder(uintptr_t responder)
{
    @autoreleasepool {
        NSResponder *obj = ns_responder_from(responder);
        return obj && [obj becomeFirstResponder] ? 1 : 0;
    }
}

int ns_responder_resign_first_responder(uintptr_t responder)
{
    @autoreleasepool {
        NSResponder *obj = ns_responder_from(responder);
        return obj && [obj resignFirstResponder] ? 1 : 0;
    }
}

void *ns_responder_next_responder(uintptr_t responder)
{
    @autoreleasepool {
        NSResponder *obj = ns_responder_from(responder);
        NSResponder *next = obj ? obj.nextResponder : nil;
        return next ? (__bridge void *)next : NULL;
    }
}
