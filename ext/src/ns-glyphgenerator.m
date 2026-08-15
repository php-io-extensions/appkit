#import <AppKit/AppKit.h>
#import "ns-glyphgenerator.h"

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

static NSGlyphGenerator *ns_glyphgenerator_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSGlyphGenerator class]] ? (NSGlyphGenerator *)obj : nil;
}

uintptr_t ns_glyphgenerator_shared_glyph_generator(void)
{
    @autoreleasepool {
        return ns_retain_obj([NSGlyphGenerator sharedGlyphGenerator]);
    }
}

uintptr_t ns_glyphgenerator_wrap(void *generator)
{
    if (!generator) {
        return 0;
    }
    @autoreleasepool {
        NSGlyphGenerator *obj = (__bridge NSGlyphGenerator *)generator;
        return [obj isKindOfClass:[NSGlyphGenerator class]] ? ns_retain_obj(obj) : 0;
    }
}

void ns_glyphgenerator_destroy(uintptr_t generator)
{
    ns_release_handle(generator);
}

void *ns_glyphgenerator_nsglyphgenerator(uintptr_t generator)
{
    NSGlyphGenerator *obj = ns_glyphgenerator_from(generator);
    return obj ? (__bridge void *)obj : NULL;
}
