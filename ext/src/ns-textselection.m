#import <AppKit/AppKit.h>
#import "ns-textselection.h"

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

static NSTextSelection *ns_textselection_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSTextSelection class]] ? (NSTextSelection *)obj : nil;
}

uintptr_t ns_textselection_create_with_location(uintptr_t ns_text_location_ptr, int affinity)
{
    @autoreleasepool {
        id<NSTextLocation> location = ns_text_location_ptr ? (__bridge id<NSTextLocation>)(void *)ns_text_location_ptr : nil;
        if (!location) {
            return 0;
        }
        return ns_retain_obj([[NSTextSelection alloc] initWithLocation:location affinity:(NSTextSelectionAffinity)affinity]);
    }
}

uintptr_t ns_textselection_wrap(void *selection)
{
    if (!selection) {
        return 0;
    }
    @autoreleasepool {
        NSTextSelection *obj = (__bridge NSTextSelection *)selection;
        return [obj isKindOfClass:[NSTextSelection class]] ? ns_retain_obj(obj) : 0;
    }
}

void ns_textselection_destroy(uintptr_t selection)
{
    ns_release_handle(selection);
}

void *ns_textselection_nstextselection(uintptr_t selection)
{
    NSTextSelection *obj = ns_textselection_from(selection);
    return obj ? (__bridge void *)obj : NULL;
}

int ns_textselection_get_granularity(uintptr_t selection)
{
    @autoreleasepool {
        NSTextSelection *obj = ns_textselection_from(selection);
        return obj ? (int)obj.granularity : 0;
    }
}

int ns_textselection_get_affinity(uintptr_t selection)
{
    @autoreleasepool {
        NSTextSelection *obj = ns_textselection_from(selection);
        return obj ? (int)obj.affinity : 0;
    }
}

int ns_textselection_is_transient(uintptr_t selection)
{
    @autoreleasepool {
        NSTextSelection *obj = ns_textselection_from(selection);
        return obj && obj.isTransient ? 1 : 0;
    }
}

int ns_textselection_text_ranges_count(uintptr_t selection)
{
    @autoreleasepool {
        NSTextSelection *obj = ns_textselection_from(selection);
        return obj ? (int)obj.textRanges.count : 0;
    }
}

double ns_textselection_anchor_position_offset(uintptr_t selection)
{
    @autoreleasepool {
        NSTextSelection *obj = ns_textselection_from(selection);
        return obj ? (double)obj.anchorPositionOffset : 0.0;
    }
}

void ns_textselection_set_anchor_position_offset(uintptr_t selection, double offset)
{
    @autoreleasepool {
        NSTextSelection *obj = ns_textselection_from(selection);
        if (obj) {
            obj.anchorPositionOffset = (CGFloat)offset;
        }
    }
}
