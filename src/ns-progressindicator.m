#import <AppKit/AppKit.h>
#import "ns-progressindicator.h"
#import "ns-view.h"

uintptr_t ns_progressindicator_create(double x, double y, double width, double height)
{
    if (width <= 0) {
        width = 160;
    }
    if (height <= 0) {
        height = 16;
    }

    @autoreleasepool {
        NSRect rect = NSMakeRect((CGFloat)x, (CGFloat)y, (CGFloat)width, (CGFloat)height);
        NSProgressIndicator *bar = [[NSProgressIndicator alloc] initWithFrame:rect];
        [bar setStyle:NSProgressIndicatorStyleBar];
        [bar setIndeterminate:NO];
        [bar setMinValue:0.0];
        [bar setMaxValue:100.0];
        [bar setDoubleValue:0.0];
        return ns_view_wrap((__bridge void *)bar);
    }
}

void ns_progressindicator_destroy(uintptr_t bar)
{
    ns_view_destroy(bar);
}

void ns_progressindicator_set_indeterminate(uintptr_t bar, int on)
{
    void *ptr = ns_view_nsview(bar);
    if (!ptr) {
        return;
    }

    @autoreleasepool {
        NSView *view = (__bridge NSView *)ptr;
        if (![view isKindOfClass:[NSProgressIndicator class]]) {
            return;
        }
        [(NSProgressIndicator *)view setIndeterminate:on ? YES : NO];
    }
}

void ns_progressindicator_set_min(uintptr_t bar, double min)
{
    void *ptr = ns_view_nsview(bar);
    if (!ptr) {
        return;
    }

    @autoreleasepool {
        NSView *view = (__bridge NSView *)ptr;
        if (![view isKindOfClass:[NSProgressIndicator class]]) {
            return;
        }
        [(NSProgressIndicator *)view setMinValue:min];
    }
}

void ns_progressindicator_set_max(uintptr_t bar, double max)
{
    void *ptr = ns_view_nsview(bar);
    if (!ptr) {
        return;
    }

    @autoreleasepool {
        NSView *view = (__bridge NSView *)ptr;
        if (![view isKindOfClass:[NSProgressIndicator class]]) {
            return;
        }
        [(NSProgressIndicator *)view setMaxValue:max];
    }
}

void ns_progressindicator_set_value(uintptr_t bar, double value)
{
    void *ptr = ns_view_nsview(bar);
    if (!ptr) {
        return;
    }

    @autoreleasepool {
        NSView *view = (__bridge NSView *)ptr;
        if (![view isKindOfClass:[NSProgressIndicator class]]) {
            return;
        }
        [(NSProgressIndicator *)view setDoubleValue:value];
    }
}

double ns_progressindicator_get_value(uintptr_t bar)
{
    void *ptr = ns_view_nsview(bar);
    if (!ptr) {
        return 0.0;
    }

    @autoreleasepool {
        NSView *view = (__bridge NSView *)ptr;
        if (![view isKindOfClass:[NSProgressIndicator class]]) {
            return 0.0;
        }
        return [(NSProgressIndicator *)view doubleValue];
    }
}

void ns_progressindicator_start(uintptr_t bar)
{
    void *ptr = ns_view_nsview(bar);
    if (!ptr) {
        return;
    }

    @autoreleasepool {
        NSView *view = (__bridge NSView *)ptr;
        if (![view isKindOfClass:[NSProgressIndicator class]]) {
            return;
        }
        [(NSProgressIndicator *)view startAnimation:nil];
    }
}

void ns_progressindicator_stop(uintptr_t bar)
{
    void *ptr = ns_view_nsview(bar);
    if (!ptr) {
        return;
    }

    @autoreleasepool {
        NSView *view = (__bridge NSView *)ptr;
        if (![view isKindOfClass:[NSProgressIndicator class]]) {
            return;
        }
        [(NSProgressIndicator *)view stopAnimation:nil];
    }
}
