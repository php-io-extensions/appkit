#import <AppKit/AppKit.h>
#import "ns-imagerep.h"

uintptr_t ns_imagerep_retain_obj(void *object)
{
    if (!object) {
        return 0;
    }
    id obj = (__bridge id)object;
    return (uintptr_t)(__bridge_retained void *)obj;
}

static NSImageRep *ns_imagerep_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSImageRep class]] ? (NSImageRep *)obj : nil;
}

static int ns_imagerep_copy_nsstring(NSString *text, char *out, int out_len)
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

uintptr_t ns_imagerep_wrap(void *rep)
{
    if (!rep) {
        return 0;
    }
    @autoreleasepool {
        NSImageRep *obj = (__bridge NSImageRep *)rep;
        return [obj isKindOfClass:[NSImageRep class]] ? ns_imagerep_retain_obj((__bridge void *)obj) : 0;
    }
}

void ns_imagerep_destroy(uintptr_t rep)
{
    if (!rep) {
        return;
    }
    CFRelease((void *)rep);
}

void *ns_imagerep_nsimagerep(uintptr_t rep)
{
    NSImageRep *obj = ns_imagerep_from(rep);
    return obj ? (__bridge void *)obj : NULL;
}

uintptr_t ns_imagerep_rep_with_contents_of_file(const char *path)
{
    @autoreleasepool {
        if (!path || path[0] == '\0') {
            return 0;
        }
        NSImageRep *obj = [NSImageRep imageRepWithContentsOfFile:[NSString stringWithUTF8String:path]];
        return ns_imagerep_retain_obj((__bridge void *)obj);
    }
}

int ns_imagerep_get_size(uintptr_t rep, double *width, double *height)
{
    if (!width || !height) {
        return 0;
    }
    @autoreleasepool {
        NSImageRep *obj = ns_imagerep_from(rep);
        if (!obj) {
            return 0;
        }
        *width = (double)obj.size.width;
        *height = (double)obj.size.height;
        return 1;
    }
}

void ns_imagerep_set_size(uintptr_t rep, double width, double height)
{
    @autoreleasepool {
        NSImageRep *obj = ns_imagerep_from(rep);
        if (obj) {
            obj.size = NSMakeSize((CGFloat)width, (CGFloat)height);
        }
    }
}

int ns_imagerep_has_alpha(uintptr_t rep)
{
    @autoreleasepool {
        NSImageRep *obj = ns_imagerep_from(rep);
        return obj && obj.alpha ? 1 : 0;
    }
}

int ns_imagerep_is_opaque(uintptr_t rep)
{
    @autoreleasepool {
        NSImageRep *obj = ns_imagerep_from(rep);
        return obj && obj.opaque ? 1 : 0;
    }
}

int ns_imagerep_pixels_wide(uintptr_t rep)
{
    @autoreleasepool {
        NSImageRep *obj = ns_imagerep_from(rep);
        return obj ? (int)obj.pixelsWide : 0;
    }
}

int ns_imagerep_pixels_high(uintptr_t rep)
{
    @autoreleasepool {
        NSImageRep *obj = ns_imagerep_from(rep);
        return obj ? (int)obj.pixelsHigh : 0;
    }
}

int ns_imagerep_bits_per_sample(uintptr_t rep)
{
    @autoreleasepool {
        NSImageRep *obj = ns_imagerep_from(rep);
        return obj ? (int)obj.bitsPerSample : 0;
    }
}

int ns_imagerep_layout_direction(uintptr_t rep)
{
    @autoreleasepool {
        NSImageRep *obj = ns_imagerep_from(rep);
        return obj ? (int)obj.layoutDirection : NSImageLayoutDirectionUnspecified;
    }
}

void ns_imagerep_set_layout_direction(uintptr_t rep, int direction)
{
    @autoreleasepool {
        NSImageRep *obj = ns_imagerep_from(rep);
        if (obj) {
            obj.layoutDirection = (NSImageLayoutDirection)direction;
        }
    }
}

int ns_imagerep_draw(uintptr_t rep)
{
    @autoreleasepool {
        NSImageRep *obj = ns_imagerep_from(rep);
        return obj && [obj draw] ? 1 : 0;
    }
}

int ns_imagerep_draw_at_point(uintptr_t rep, double x, double y)
{
    @autoreleasepool {
        NSImageRep *obj = ns_imagerep_from(rep);
        return obj && [obj drawAtPoint:NSMakePoint((CGFloat)x, (CGFloat)y)] ? 1 : 0;
    }
}

int ns_imagerep_draw_in_rect(uintptr_t rep, double x, double y, double width, double height)
{
    @autoreleasepool {
        NSImageRep *obj = ns_imagerep_from(rep);
        return obj && [obj drawInRect:NSMakeRect((CGFloat)x, (CGFloat)y, (CGFloat)width, (CGFloat)height)] ? 1 : 0;
    }
}

int ns_imagerep_image_type_count(void)
{
    @autoreleasepool {
        return (int)NSImageRep.imageTypes.count;
    }
}

int ns_imagerep_image_type_at(int index, char *out, int out_len)
{
    @autoreleasepool {
        NSArray<NSString *> *types = NSImageRep.imageTypes;
        if (index < 0 || index >= (int)types.count) {
            return 0;
        }
        return ns_imagerep_copy_nsstring(types[(NSUInteger)index], out, out_len);
    }
}
