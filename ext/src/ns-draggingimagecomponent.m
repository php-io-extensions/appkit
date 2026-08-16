#import <AppKit/AppKit.h>
#import "ns-draggingimagecomponent.h"

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

static NSDraggingImageComponent *ns_draggingimagecomponent_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSDraggingImageComponent class]] ? (NSDraggingImageComponent *)obj : nil;
}

uintptr_t ns_draggingimagecomponent_with_key(const char *key)
{
    @autoreleasepool {
        if (!key) {
            return 0;
        }
        NSDraggingImageComponent *component = [NSDraggingImageComponent draggingImageComponentWithKey:[NSString stringWithUTF8String:key]];
        return component ? ns_retain_obj(component) : 0;
    }
}

uintptr_t ns_draggingimagecomponent_wrap(void *component)
{
    if (!component) {
        return 0;
    }
    @autoreleasepool {
        NSDraggingImageComponent *obj = (__bridge NSDraggingImageComponent *)component;
        return [obj isKindOfClass:[NSDraggingImageComponent class]] ? ns_retain_obj(obj) : 0;
    }
}

void ns_draggingimagecomponent_destroy(uintptr_t component)
{
    ns_release_handle(component);
}

void *ns_draggingimagecomponent_nsdraggingimagecomponent(uintptr_t component)
{
    NSDraggingImageComponent *obj = ns_draggingimagecomponent_from(component);
    return obj ? (__bridge void *)obj : NULL;
}

int ns_draggingimagecomponent_key(uintptr_t component, char *out, int out_len)
{
    @autoreleasepool {
        NSDraggingImageComponent *obj = ns_draggingimagecomponent_from(component);
        return ns_copy_nsstring(obj.key, out, out_len);
    }
}

void ns_draggingimagecomponent_set_key(uintptr_t component, const char *key)
{
    @autoreleasepool {
        NSDraggingImageComponent *obj = ns_draggingimagecomponent_from(component);
        if (obj && key) {
            obj.key = [NSString stringWithUTF8String:key];
        }
    }
}

void ns_draggingimagecomponent_set_contents(uintptr_t component, void *contents)
{
    @autoreleasepool {
        NSDraggingImageComponent *obj = ns_draggingimagecomponent_from(component);
        if (obj) {
            obj.contents = contents ? (__bridge id)contents : nil;
        }
    }
}

void *ns_draggingimagecomponent_contents(uintptr_t component)
{
    NSDraggingImageComponent *obj = ns_draggingimagecomponent_from(component);
    return obj && obj.contents ? (__bridge void *)obj.contents : NULL;
}

void ns_draggingimagecomponent_get_frame(uintptr_t component, double *x, double *y, double *w, double *h)
{
    @autoreleasepool {
        NSDraggingImageComponent *obj = ns_draggingimagecomponent_from(component);
        if (!obj) {
            if (x) {
                *x = 0;
            }
            if (y) {
                *y = 0;
            }
            if (w) {
                *w = 0;
            }
            if (h) {
                *h = 0;
            }
            return;
        }
        NSRect frame = obj.frame;
        if (x) {
            *x = (double)frame.origin.x;
        }
        if (y) {
            *y = (double)frame.origin.y;
        }
        if (w) {
            *w = (double)frame.size.width;
        }
        if (h) {
            *h = (double)frame.size.height;
        }
    }
}

void ns_draggingimagecomponent_set_frame(uintptr_t component, double x, double y, double w, double h)
{
    @autoreleasepool {
        NSDraggingImageComponent *obj = ns_draggingimagecomponent_from(component);
        if (obj) {
            obj.frame = NSMakeRect((CGFloat)x, (CGFloat)y, (CGFloat)w, (CGFloat)h);
        }
    }
}
