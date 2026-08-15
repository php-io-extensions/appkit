#import <AppKit/AppKit.h>
#import "ns-atstypesetter.h"

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

static NSColor *ns_color_from_handle(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSColor class]] ? (NSColor *)obj : nil;
}

static NSATSTypesetter *ns_atstypesetter_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSATSTypesetter class]] ? (NSATSTypesetter *)obj : nil;
}

uintptr_t ns_atstypesetter_shared_typesetter(void)
{
    @autoreleasepool {
        return ns_retain_obj([NSATSTypesetter sharedTypesetter]);
    }
}

uintptr_t ns_atstypesetter_wrap(void *typesetter)
{
    if (!typesetter) {
        return 0;
    }
    @autoreleasepool {
        NSATSTypesetter *obj = (__bridge NSATSTypesetter *)typesetter;
        return [obj isKindOfClass:[NSATSTypesetter class]] ? ns_retain_obj(obj) : 0;
    }
}

void ns_atstypesetter_destroy(uintptr_t typesetter)
{
    ns_release_handle(typesetter);
}

void *ns_atstypesetter_nsatstypesetter(uintptr_t typesetter)
{
    NSATSTypesetter *obj = ns_atstypesetter_from(typesetter);
    return obj ? (__bridge void *)obj : NULL;
}
