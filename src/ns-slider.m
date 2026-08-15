#import <AppKit/AppKit.h>
#import "ns-slider.h"
#import "ns-view.h"

@interface NSPhpSlider : NSSlider
@property (nonatomic, assign) int pendingChange;
@end

@implementation NSPhpSlider

- (void)nsChanged:(id)sender
{
    (void)sender;
    self.pendingChange = 1;
}

@end

uintptr_t ns_slider_create(double x, double y, double width, double height, double min, double max)
{
    if (width <= 0) {
        width = 160;
    }
    if (height <= 0) {
        height = 24;
    }
    if (max <= min) {
        max = min + 1.0;
    }

    @autoreleasepool {
        NSRect rect = NSMakeRect((CGFloat)x, (CGFloat)y, (CGFloat)width, (CGFloat)height);
        NSPhpSlider *slider = [[NSPhpSlider alloc] initWithFrame:rect];
        [slider setMinValue:min];
        [slider setMaxValue:max];
        [slider setDoubleValue:min];
        [slider setTarget:slider];
        [slider setAction:@selector(nsChanged:)];
        return ns_view_wrap((__bridge void *)slider);
    }
}

void ns_slider_destroy(uintptr_t slider)
{
    ns_view_destroy(slider);
}

void ns_slider_set_value(uintptr_t slider, double value)
{
    void *ptr = ns_view_nsview(slider);
    if (!ptr) {
        return;
    }

    @autoreleasepool {
        NSView *view = (__bridge NSView *)ptr;
        if (![view isKindOfClass:[NSSlider class]]) {
            return;
        }
        [(NSSlider *)view setDoubleValue:value];
    }
}

double ns_slider_get_value(uintptr_t slider)
{
    void *ptr = ns_view_nsview(slider);
    if (!ptr) {
        return 0.0;
    }

    @autoreleasepool {
        NSView *view = (__bridge NSView *)ptr;
        if (![view isKindOfClass:[NSSlider class]]) {
            return 0.0;
        }
        return [(NSSlider *)view doubleValue];
    }
}

int ns_slider_poll_change(uintptr_t slider)
{
    void *ptr = ns_view_nsview(slider);
    if (!ptr) {
        return 0;
    }

    @autoreleasepool {
        NSView *view = (__bridge NSView *)ptr;
        if (![view isKindOfClass:[NSPhpSlider class]]) {
            return 0;
        }
        NSPhpSlider *typed = (NSPhpSlider *)view;
        if (typed.pendingChange != 1) {
            return 0;
        }
        typed.pendingChange = 0;
        return 1;
    }
}
