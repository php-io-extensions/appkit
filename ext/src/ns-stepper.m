#import <AppKit/AppKit.h>
#import "ns-stepper.h"
#import "ns-view.h"

@interface NSPhpStepper : NSStepper
@property (nonatomic, assign) int pendingChange;
@end

@implementation NSPhpStepper

- (void)nsChanged:(id)sender
{
    (void)sender;
    self.pendingChange = 1;
}

@end

uintptr_t ns_stepper_create(double x, double y, double width, double height, double min, double max)
{
    if (width <= 0) {
        width = 20;
    }
    if (height <= 0) {
        height = 24;
    }
    if (max <= min) {
        max = min + 1.0;
    }

    @autoreleasepool {
        NSRect rect = NSMakeRect((CGFloat)x, (CGFloat)y, (CGFloat)width, (CGFloat)height);
        NSPhpStepper *stepper = [[NSPhpStepper alloc] initWithFrame:rect];
        [stepper setMinValue:min];
        [stepper setMaxValue:max];
        [stepper setIncrement:1.0];
        [stepper setDoubleValue:min];
        [stepper setTarget:stepper];
        [stepper setAction:@selector(nsChanged:)];
        return ns_view_wrap((__bridge void *)stepper);
    }
}

void ns_stepper_destroy(uintptr_t stepper)
{
    ns_view_destroy(stepper);
}

void ns_stepper_set_value(uintptr_t stepper, double value)
{
    void *ptr = ns_view_nsview(stepper);
    if (!ptr) {
        return;
    }

    @autoreleasepool {
        NSView *view = (__bridge NSView *)ptr;
        if (![view isKindOfClass:[NSStepper class]]) {
            return;
        }
        [(NSStepper *)view setDoubleValue:value];
    }
}

double ns_stepper_get_value(uintptr_t stepper)
{
    void *ptr = ns_view_nsview(stepper);
    if (!ptr) {
        return 0.0;
    }

    @autoreleasepool {
        NSView *view = (__bridge NSView *)ptr;
        if (![view isKindOfClass:[NSStepper class]]) {
            return 0.0;
        }
        return [(NSStepper *)view doubleValue];
    }
}

int ns_stepper_poll_change(uintptr_t stepper)
{
    void *ptr = ns_view_nsview(stepper);
    if (!ptr) {
        return 0;
    }

    @autoreleasepool {
        NSView *view = (__bridge NSView *)ptr;
        if (![view isKindOfClass:[NSPhpStepper class]]) {
            return 0;
        }
        NSPhpStepper *typed = (NSPhpStepper *)view;
        if (typed.pendingChange != 1) {
            return 0;
        }
        typed.pendingChange = 0;
        return 1;
    }
}
