#import <AppKit/AppKit.h>
#import "ns-shadow.h"
#import "ns-color.h"

static uintptr_t ns_shadow_retain_obj(id object)
{
    return object ? (uintptr_t)(__bridge_retained void *)object : 0;
}

static NSShadow *ns_shadow_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSShadow class]] ? (NSShadow *)obj : nil;
}

uintptr_t ns_shadow_create(void)
{
    @autoreleasepool {
        return ns_shadow_retain_obj([[NSShadow alloc] init]);
    }
}

uintptr_t ns_shadow_wrap(void *shadow)
{
    if (!shadow) {
        return 0;
    }
    @autoreleasepool {
        NSShadow *obj = (__bridge NSShadow *)shadow;
        return [obj isKindOfClass:[NSShadow class]] ? ns_shadow_retain_obj(obj) : 0;
    }
}

void ns_shadow_destroy(uintptr_t shadow)
{
    if (!shadow) {
        return;
    }
    CFRelease((void *)shadow);
}

void *ns_shadow_nsshadow(uintptr_t shadow)
{
    NSShadow *obj = ns_shadow_from(shadow);
    return obj ? (__bridge void *)obj : NULL;
}

void ns_shadow_set_offset(uintptr_t shadow, double width, double height)
{
    @autoreleasepool {
        NSShadow *obj = ns_shadow_from(shadow);
        if (obj) {
            obj.shadowOffset = NSMakeSize((CGFloat)width, (CGFloat)height);
        }
    }
}

void ns_shadow_get_offset(uintptr_t shadow, double *width, double *height)
{
    if (!width || !height) {
        return;
    }
    @autoreleasepool {
        NSShadow *obj = ns_shadow_from(shadow);
        if (!obj) {
            *width = 0.0;
            *height = 0.0;
            return;
        }
        *width = (double)obj.shadowOffset.width;
        *height = (double)obj.shadowOffset.height;
    }
}

void ns_shadow_set_blur_radius(uintptr_t shadow, double radius)
{
    @autoreleasepool {
        NSShadow *obj = ns_shadow_from(shadow);
        if (obj) {
            obj.shadowBlurRadius = (CGFloat)radius;
        }
    }
}

double ns_shadow_get_blur_radius(uintptr_t shadow)
{
    @autoreleasepool {
        NSShadow *obj = ns_shadow_from(shadow);
        return obj ? (double)obj.shadowBlurRadius : 0.0;
    }
}

void ns_shadow_set_color(uintptr_t shadow, uintptr_t color)
{
    @autoreleasepool {
        NSShadow *obj = ns_shadow_from(shadow);
        NSColor *nsColor = (__bridge NSColor *)ns_color_nscolor(color);
        if (obj) {
            obj.shadowColor = nsColor;
        }
    }
}

uintptr_t ns_shadow_get_color(uintptr_t shadow)
{
    @autoreleasepool {
        NSShadow *obj = ns_shadow_from(shadow);
        if (!obj || !obj.shadowColor) {
            return 0;
        }
        return ns_color_wrap((__bridge void *)obj.shadowColor);
    }
}

void ns_shadow_set(uintptr_t shadow)
{
    @autoreleasepool {
        NSShadow *obj = ns_shadow_from(shadow);
        if (obj) {
            [obj set];
        }
    }
}
