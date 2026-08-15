#import <AppKit/AppKit.h>
#import "ns-screen.h"

static uintptr_t ns_screen_retain_obj(id object)
{
    return object ? (uintptr_t)(__bridge_retained void *)object : 0;
}

static NSScreen *ns_screen_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSScreen class]] ? (NSScreen *)obj : nil;
}

static int ns_screen_copy_rect(NSRect rect, double *x, double *y, double *w, double *h)
{
    if (!x || !y || !w || !h) {
        return 0;
    }
    *x = (double)rect.origin.x;
    *y = (double)rect.origin.y;
    *w = (double)rect.size.width;
    *h = (double)rect.size.height;
    return 1;
}

static int ns_screen_copy_nsstring(NSString *text, char *out, int out_len)
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

uintptr_t ns_screen_wrap(void *screen)
{
    if (!screen) {
        return 0;
    }
    @autoreleasepool {
        NSScreen *obj = (__bridge NSScreen *)screen;
        return [obj isKindOfClass:[NSScreen class]] ? ns_screen_retain_obj(obj) : 0;
    }
}

void ns_screen_destroy(uintptr_t screen)
{
    if (!screen) {
        return;
    }
    CFRelease((void *)screen);
}

void *ns_screen_nsscreen(uintptr_t screen)
{
    NSScreen *obj = ns_screen_from(screen);
    return obj ? (__bridge void *)obj : NULL;
}

uintptr_t ns_screen_main(void)
{
    @autoreleasepool {
        return ns_screen_retain_obj([NSScreen mainScreen]);
    }
}

uintptr_t ns_screen_deepest(void)
{
    @autoreleasepool {
        return ns_screen_retain_obj([NSScreen deepestScreen]);
    }
}

int ns_screen_screens_count(void)
{
    @autoreleasepool {
        return (int)[NSScreen screens].count;
    }
}

uintptr_t ns_screen_screens_at(int index)
{
    @autoreleasepool {
        NSArray<NSScreen *> *screens = [NSScreen screens];
        if (index < 0 || index >= (int)screens.count) {
            return 0;
        }
        return ns_screen_retain_obj(screens[(NSUInteger)index]);
    }
}

int ns_screen_screens_have_separate_spaces(void)
{
    @autoreleasepool {
        return [NSScreen screensHaveSeparateSpaces] ? 1 : 0;
    }
}

int ns_screen_frame(uintptr_t screen, double *x, double *y, double *w, double *h)
{
    @autoreleasepool {
        NSScreen *obj = ns_screen_from(screen);
        if (!obj) {
            return 0;
        }
        return ns_screen_copy_rect(obj.frame, x, y, w, h);
    }
}

int ns_screen_visible_frame(uintptr_t screen, double *x, double *y, double *w, double *h)
{
    @autoreleasepool {
        NSScreen *obj = ns_screen_from(screen);
        if (!obj) {
            return 0;
        }
        return ns_screen_copy_rect(obj.visibleFrame, x, y, w, h);
    }
}

double ns_screen_backing_scale_factor(uintptr_t screen)
{
    @autoreleasepool {
        NSScreen *obj = ns_screen_from(screen);
        return obj ? (double)obj.backingScaleFactor : 0.0;
    }
}

int ns_screen_localized_name(uintptr_t screen, char *out, int out_len)
{
    @autoreleasepool {
        NSScreen *obj = ns_screen_from(screen);
        if (!obj) {
            return 0;
        }
        return ns_screen_copy_nsstring(obj.localizedName, out, out_len);
    }
}

int ns_screen_depth(uintptr_t screen)
{
    @autoreleasepool {
        NSScreen *obj = ns_screen_from(screen);
        return obj ? (int)obj.depth : 0;
    }
}
