#import <AppKit/AppKit.h>
#import "ns-segmentedcontrol.h"
#import "ns-view.h"

@interface NSPhpSegmented : NSSegmentedControl
@property (nonatomic, assign) int pendingChange;
@end

@implementation NSPhpSegmented

- (void)nsChanged:(id)sender
{
    (void)sender;
    self.pendingChange = 1;
}

@end

uintptr_t ns_segmentedcontrol_create(double x, double y, double width, double height, int count)
{
    if (width <= 0) {
        width = 200;
    }
    if (height <= 0) {
        height = 24;
    }
    if (count < 1) {
        count = 1;
    }

    @autoreleasepool {
        NSRect rect = NSMakeRect((CGFloat)x, (CGFloat)y, (CGFloat)width, (CGFloat)height);
        NSPhpSegmented *control = [[NSPhpSegmented alloc] initWithFrame:rect];
        [control setSegmentCount:count];
        [control setTrackingMode:NSSegmentSwitchTrackingSelectOne];
        [control setSelectedSegment:0];
        [control setTarget:control];
        [control setAction:@selector(nsChanged:)];
        return ns_view_wrap((__bridge void *)control);
    }
}

void ns_segmentedcontrol_destroy(uintptr_t control)
{
    ns_view_destroy(control);
}

void ns_segmentedcontrol_set_label(uintptr_t control, int index, const char *title)
{
    void *ptr = ns_view_nsview(control);
    if (!ptr) {
        return;
    }

    @autoreleasepool {
        NSView *view = (__bridge NSView *)ptr;
        if (![view isKindOfClass:[NSSegmentedControl class]]) {
            return;
        }
        [(NSSegmentedControl *)view setLabel:title ? [NSString stringWithUTF8String:title] : @"" forSegment:index];
    }
}

void ns_segmentedcontrol_set_selected(uintptr_t control, int index)
{
    void *ptr = ns_view_nsview(control);
    if (!ptr) {
        return;
    }

    @autoreleasepool {
        NSView *view = (__bridge NSView *)ptr;
        if (![view isKindOfClass:[NSSegmentedControl class]]) {
            return;
        }
        [(NSSegmentedControl *)view setSelectedSegment:index];
    }
}

int ns_segmentedcontrol_get_selected(uintptr_t control)
{
    void *ptr = ns_view_nsview(control);
    if (!ptr) {
        return -1;
    }

    @autoreleasepool {
        NSView *view = (__bridge NSView *)ptr;
        if (![view isKindOfClass:[NSSegmentedControl class]]) {
            return -1;
        }
        return (int)[(NSSegmentedControl *)view selectedSegment];
    }
}

int ns_segmentedcontrol_poll_change(uintptr_t control)
{
    void *ptr = ns_view_nsview(control);
    if (!ptr) {
        return 0;
    }

    @autoreleasepool {
        NSView *view = (__bridge NSView *)ptr;
        if (![view isKindOfClass:[NSPhpSegmented class]]) {
            return 0;
        }
        NSPhpSegmented *typed = (NSPhpSegmented *)view;
        if (typed.pendingChange != 1) {
            return 0;
        }
        typed.pendingChange = 0;
        return 1;
    }
}
