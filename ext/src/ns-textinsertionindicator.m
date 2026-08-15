#import <AppKit/AppKit.h>
#import "ns-textinsertionindicator.h"
#import "ns-view.h"
#import "ns-color.h"

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

static NSMenu *ns_menu_from_handle(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSMenu class]] ? (NSMenu *)obj : nil;
}

static NSColor *ns_color_from_handle(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSColor class]] ? (NSColor *)obj : nil;
}

static NSImage *ns_image_from_handle(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSImage class]] ? (NSImage *)obj : nil;
}

static NSTextInsertionIndicator *ns_textinsertionindicator_view(uintptr_t handle)
{
    void *ptr = ns_view_nsview(handle);
    if (!ptr) {
        return nil;
    }
    NSView *view = (__bridge NSView *)ptr;
    return [view isKindOfClass:[NSTextInsertionIndicator class]] ? (NSTextInsertionIndicator *)view : nil;
}

uintptr_t ns_textinsertionindicator_create(double x, double y, double width, double height)
{
    if (width <= 0) {
        width = 2;
    }
    if (height <= 0) {
        height = 18;
    }
    @autoreleasepool {
        NSRect rect = NSMakeRect((CGFloat)x, (CGFloat)y, (CGFloat)width, (CGFloat)height);
        NSTextInsertionIndicator *indicator = [[NSTextInsertionIndicator alloc] initWithFrame:rect];
        return ns_view_wrap((__bridge void *)indicator);
    }
}

uintptr_t ns_textinsertionindicator_wrap(void *indicator)
{
    if (!indicator) {
        return 0;
    }
    @autoreleasepool {
        NSTextInsertionIndicator *obj = (__bridge NSTextInsertionIndicator *)indicator;
        return [obj isKindOfClass:[NSTextInsertionIndicator class]] ? ns_view_wrap(indicator) : 0;
    }
}

void ns_textinsertionindicator_destroy(uintptr_t indicator)
{
    ns_view_destroy(indicator);
}

void *ns_textinsertionindicator_nstextinsertionindicator(uintptr_t indicator)
{
    NSTextInsertionIndicator *obj = ns_textinsertionindicator_view(indicator);
    return obj ? (__bridge void *)obj : NULL;
}

void ns_textinsertionindicator_set_display_mode(uintptr_t indicator, int mode)
{
    @autoreleasepool {
        NSTextInsertionIndicator *obj = ns_textinsertionindicator_view(indicator);
        if (obj) {
            obj.displayMode = (NSTextInsertionIndicatorDisplayMode)mode;
        }
    }
}

int ns_textinsertionindicator_get_display_mode(uintptr_t indicator)
{
    @autoreleasepool {
        NSTextInsertionIndicator *obj = ns_textinsertionindicator_view(indicator);
        return obj ? (int)obj.displayMode : 0;
    }
}

void ns_textinsertionindicator_set_color(uintptr_t indicator, uintptr_t color)
{
    @autoreleasepool {
        NSTextInsertionIndicator *obj = ns_textinsertionindicator_view(indicator);
        if (obj) {
            obj.color = ns_color_from_handle(color);
        }
    }
}

uintptr_t ns_textinsertionindicator_get_color(uintptr_t indicator)
{
    @autoreleasepool {
        NSTextInsertionIndicator *obj = ns_textinsertionindicator_view(indicator);
        return obj && obj.color ? ns_retain_obj(obj.color) : 0;
    }
}

void ns_textinsertionindicator_set_automatic_mode_options(uintptr_t indicator, int options)
{
    @autoreleasepool {
        NSTextInsertionIndicator *obj = ns_textinsertionindicator_view(indicator);
        if (obj) {
            obj.automaticModeOptions = (NSTextInsertionIndicatorAutomaticModeOptions)options;
        }
    }
}

int ns_textinsertionindicator_get_automatic_mode_options(uintptr_t indicator)
{
    @autoreleasepool {
        NSTextInsertionIndicator *obj = ns_textinsertionindicator_view(indicator);
        return obj ? (int)obj.automaticModeOptions : 0;
    }
}

void ns_textinsertionindicator_set_effects_view_inserter_parent(uintptr_t indicator, uintptr_t parent_view)
{
    @autoreleasepool {
        NSTextInsertionIndicator *obj = ns_textinsertionindicator_view(indicator);
        if (!obj) {
            return;
        }
        if (!parent_view) {
            obj.effectsViewInserter = nil;
            return;
        }
        void *ptr = ns_view_nsview(parent_view);
        if (!ptr) {
            obj.effectsViewInserter = nil;
            return;
        }
        NSView *parent = (__bridge NSView *)ptr;
        obj.effectsViewInserter = ^(NSView *view) {
            if (view && parent) {
                [parent addSubview:view];
            }
        };
    }
}

void ns_textinsertionindicator_clear_effects_view_inserter(uintptr_t indicator)
{
    ns_textinsertionindicator_set_effects_view_inserter_parent(indicator, 0);
}

int ns_textinsertionindicator_has_effects_view_inserter(uintptr_t indicator)
{
    @autoreleasepool {
        NSTextInsertionIndicator *obj = ns_textinsertionindicator_view(indicator);
        return obj && obj.effectsViewInserter != nil ? 1 : 0;
    }
}
