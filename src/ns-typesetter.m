#import <AppKit/AppKit.h>
#import "ns-typesetter.h"

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

static NSTypesetter *ns_typesetter_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSTypesetter class]] ? (NSTypesetter *)obj : nil;
}

uintptr_t ns_typesetter_shared_system_typesetter(void)
{
    @autoreleasepool {
        return ns_retain_obj([NSTypesetter sharedSystemTypesetter]);
    }
}

uintptr_t ns_typesetter_shared_system_typesetter_for_behavior(int behavior)
{
    @autoreleasepool {
        return ns_retain_obj([NSTypesetter sharedSystemTypesetterForBehavior:(NSTypesetterBehavior)behavior]);
    }
}

int ns_typesetter_default_typesetter_behavior(void)
{
    @autoreleasepool {
        return (int)[NSTypesetter defaultTypesetterBehavior];
    }
}

uintptr_t ns_typesetter_wrap(void *typesetter)
{
    if (!typesetter) {
        return 0;
    }
    @autoreleasepool {
        NSTypesetter *obj = (__bridge NSTypesetter *)typesetter;
        return [obj isKindOfClass:[NSTypesetter class]] ? ns_retain_obj(obj) : 0;
    }
}

void ns_typesetter_destroy(uintptr_t typesetter)
{
    ns_release_handle(typesetter);
}

void *ns_typesetter_nstypesetter(uintptr_t typesetter)
{
    NSTypesetter *obj = ns_typesetter_from(typesetter);
    return obj ? (__bridge void *)obj : NULL;
}

int ns_typesetter_uses_font_leading(uintptr_t typesetter)
{
    @autoreleasepool {
        NSTypesetter *obj = ns_typesetter_from(typesetter);
        return obj && obj.usesFontLeading ? 1 : 0;
    }
}

void ns_typesetter_set_uses_font_leading(uintptr_t typesetter, int flag)
{
    @autoreleasepool {
        NSTypesetter *obj = ns_typesetter_from(typesetter);
        if (obj) {
            obj.usesFontLeading = flag ? YES : NO;
        }
    }
}

int ns_typesetter_typesetter_behavior(uintptr_t typesetter)
{
    @autoreleasepool {
        NSTypesetter *obj = ns_typesetter_from(typesetter);
        return obj ? (int)obj.typesetterBehavior : 0;
    }
}

void ns_typesetter_set_typesetter_behavior(uintptr_t typesetter, int behavior)
{
    @autoreleasepool {
        NSTypesetter *obj = ns_typesetter_from(typesetter);
        if (obj) {
            obj.typesetterBehavior = (NSTypesetterBehavior)behavior;
        }
    }
}

float ns_typesetter_hyphenation_factor(uintptr_t typesetter)
{
    @autoreleasepool {
        NSTypesetter *obj = ns_typesetter_from(typesetter);
        return obj ? obj.hyphenationFactor : 0.0f;
    }
}

void ns_typesetter_set_hyphenation_factor(uintptr_t typesetter, float factor)
{
    @autoreleasepool {
        NSTypesetter *obj = ns_typesetter_from(typesetter);
        if (obj) {
            obj.hyphenationFactor = factor;
        }
    }
}

double ns_typesetter_line_fragment_padding(uintptr_t typesetter)
{
    @autoreleasepool {
        NSTypesetter *obj = ns_typesetter_from(typesetter);
        return obj ? (double)obj.lineFragmentPadding : 0.0;
    }
}

void ns_typesetter_set_line_fragment_padding(uintptr_t typesetter, double padding)
{
    @autoreleasepool {
        NSTypesetter *obj = ns_typesetter_from(typesetter);
        if (obj) {
            obj.lineFragmentPadding = (CGFloat)padding;
        }
    }
}

int ns_typesetter_bidi_processing_enabled(uintptr_t typesetter)
{
    @autoreleasepool {
        NSTypesetter *obj = ns_typesetter_from(typesetter);
        return obj && obj.bidiProcessingEnabled ? 1 : 0;
    }
}

void ns_typesetter_set_bidi_processing_enabled(uintptr_t typesetter, int flag)
{
    @autoreleasepool {
        NSTypesetter *obj = ns_typesetter_from(typesetter);
        if (obj) {
            obj.bidiProcessingEnabled = flag ? YES : NO;
        }
    }
}
