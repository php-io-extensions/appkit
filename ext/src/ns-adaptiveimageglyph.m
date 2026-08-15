#import <AppKit/AppKit.h>
#import <UniformTypeIdentifiers/UniformTypeIdentifiers.h>
#import "ns-adaptiveimageglyph.h"

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

static NSAdaptiveImageGlyph *ns_adaptiveimageglyph_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSAdaptiveImageGlyph class]] ? (NSAdaptiveImageGlyph *)obj : nil;
}

uintptr_t ns_adaptiveimageglyph_create_with_image_content(const char *data, size_t length)
{
    @autoreleasepool {
        NSData *payload = (data && length > 0) ? [NSData dataWithBytes:data length:length] : [NSData data];
        return ns_retain_obj([[NSAdaptiveImageGlyph alloc] initWithImageContent:payload]);
    }
}

uintptr_t ns_adaptiveimageglyph_wrap(void *glyph)
{
    if (!glyph) {
        return 0;
    }
    @autoreleasepool {
        NSAdaptiveImageGlyph *obj = (__bridge NSAdaptiveImageGlyph *)glyph;
        return [obj isKindOfClass:[NSAdaptiveImageGlyph class]] ? ns_retain_obj(obj) : 0;
    }
}

void ns_adaptiveimageglyph_destroy(uintptr_t glyph)
{
    ns_release_handle(glyph);
}

void *ns_adaptiveimageglyph_nsadaptiveimageglyph(uintptr_t glyph)
{
    NSAdaptiveImageGlyph *obj = ns_adaptiveimageglyph_from(glyph);
    return obj ? (__bridge void *)obj : NULL;
}

int ns_adaptiveimageglyph_content_identifier(uintptr_t glyph, char *out, int out_len)
{
    @autoreleasepool {
        NSAdaptiveImageGlyph *obj = ns_adaptiveimageglyph_from(glyph);
        return ns_copy_nsstring(obj.contentIdentifier, out, out_len);
    }
}

int ns_adaptiveimageglyph_content_description(uintptr_t glyph, char *out, int out_len)
{
    @autoreleasepool {
        NSAdaptiveImageGlyph *obj = ns_adaptiveimageglyph_from(glyph);
        return ns_copy_nsstring(obj.contentDescription, out, out_len);
    }
}

int ns_adaptiveimageglyph_content_type_identifier(uintptr_t glyph, char *out, int out_len)
{
    @autoreleasepool {
        NSString *identifier = [NSAdaptiveImageGlyph contentType].identifier;
        return ns_copy_nsstring(identifier, out, out_len);
    }
}
