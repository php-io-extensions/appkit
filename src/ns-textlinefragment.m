#import <AppKit/AppKit.h>
#import "ns-textlinefragment.h"

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

static NSTextLineFragment *ns_textlinefragment_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSTextLineFragment class]] ? (NSTextLineFragment *)obj : nil;
}

uintptr_t ns_textlinefragment_create_with_string(const char *string, int location, int length)
{
    @autoreleasepool {
        NSString *text = string ? [NSString stringWithUTF8String:string] : @"";
        NSAttributedString *as = [[NSAttributedString alloc] initWithString:text];
        NSRange range = NSMakeRange((NSUInteger)MAX(location, 0), (NSUInteger)MAX(length, 0));
        if (NSMaxRange(range) > as.length) {
            range = NSMakeRange(0, as.length);
        }
        return ns_retain_obj([[NSTextLineFragment alloc] initWithAttributedString:as range:range]);
    }
}

uintptr_t ns_textlinefragment_wrap(void *fragment)
{
    if (!fragment) {
        return 0;
    }
    @autoreleasepool {
        NSTextLineFragment *obj = (__bridge NSTextLineFragment *)fragment;
        return [obj isKindOfClass:[NSTextLineFragment class]] ? ns_retain_obj(obj) : 0;
    }
}

void ns_textlinefragment_destroy(uintptr_t fragment)
{
    ns_release_handle(fragment);
}

void *ns_textlinefragment_nstextlinefragment(uintptr_t fragment)
{
    NSTextLineFragment *obj = ns_textlinefragment_from(fragment);
    return obj ? (__bridge void *)obj : NULL;
}

void ns_textlinefragment_character_range(uintptr_t fragment, int *location, int *length)
{
    if (location) {
        *location = 0;
    }
    if (length) {
        *length = 0;
    }
    @autoreleasepool {
        NSTextLineFragment *obj = ns_textlinefragment_from(fragment);
        if (!obj) {
            return;
        }
        NSRange range = obj.characterRange;
        if (location) {
            *location = (int)range.location;
        }
        if (length) {
            *length = (int)range.length;
        }
    }
}

void ns_textlinefragment_typographic_bounds(uintptr_t fragment, double *x, double *y, double *w, double *h)
{
    @autoreleasepool {
        NSTextLineFragment *obj = ns_textlinefragment_from(fragment);
        CGRect bounds = obj ? obj.typographicBounds : CGRectZero;
        if (x) {
            *x = (double)bounds.origin.x;
        }
        if (y) {
            *y = (double)bounds.origin.y;
        }
        if (w) {
            *w = (double)bounds.size.width;
        }
        if (h) {
            *h = (double)bounds.size.height;
        }
    }
}

void ns_textlinefragment_glyph_origin(uintptr_t fragment, double *x, double *y)
{
    if (x) {
        *x = 0.0;
    }
    if (y) {
        *y = 0.0;
    }
    @autoreleasepool {
        NSTextLineFragment *obj = ns_textlinefragment_from(fragment);
        if (!obj) {
            return;
        }
        CGPoint origin = obj.glyphOrigin;
        if (x) {
            *x = (double)origin.x;
        }
        if (y) {
            *y = (double)origin.y;
        }
    }
}
