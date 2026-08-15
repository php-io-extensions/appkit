#import <AppKit/AppKit.h>
#import "ns-switch.h"
#import "ns-view.h"

@interface NSPhpSwitch : NSSwitch
@property (nonatomic, assign) int pendingChange;
@end

@implementation NSPhpSwitch

- (void)nsChanged:(id)sender
{
    (void)sender;
    self.pendingChange = 1;
}

@end

uintptr_t ns_switch_create(double x, double y, double width, double height)
{
    if (width <= 0) {
        width = 40;
    }
    if (height <= 0) {
        height = 24;
    }

    @autoreleasepool {
        NSRect rect = NSMakeRect((CGFloat)x, (CGFloat)y, (CGFloat)width, (CGFloat)height);
        NSPhpSwitch *toggle = [[NSPhpSwitch alloc] initWithFrame:rect];
        [toggle setTarget:toggle];
        [toggle setAction:@selector(nsChanged:)];
        return ns_view_wrap((__bridge void *)toggle);
    }
}

void ns_switch_destroy(uintptr_t toggle)
{
    ns_view_destroy(toggle);
}

void ns_switch_set_on(uintptr_t toggle, int on)
{
    void *ptr = ns_view_nsview(toggle);
    if (!ptr) {
        return;
    }

    @autoreleasepool {
        NSView *view = (__bridge NSView *)ptr;
        if (![view isKindOfClass:[NSSwitch class]]) {
            return;
        }
        [(NSSwitch *)view setState:on ? NSControlStateValueOn : NSControlStateValueOff];
    }
}

int ns_switch_is_on(uintptr_t toggle)
{
    void *ptr = ns_view_nsview(toggle);
    if (!ptr) {
        return 0;
    }

    @autoreleasepool {
        NSView *view = (__bridge NSView *)ptr;
        if (![view isKindOfClass:[NSSwitch class]]) {
            return 0;
        }
        return [(NSSwitch *)view state] == NSControlStateValueOn ? 1 : 0;
    }
}

int ns_switch_poll_change(uintptr_t toggle)
{
    void *ptr = ns_view_nsview(toggle);
    if (!ptr) {
        return 0;
    }

    @autoreleasepool {
        NSView *view = (__bridge NSView *)ptr;
        if (![view isKindOfClass:[NSPhpSwitch class]]) {
            return 0;
        }
        NSPhpSwitch *typed = (NSPhpSwitch *)view;
        if (typed.pendingChange != 1) {
            return 0;
        }
        typed.pendingChange = 0;
        return 1;
    }
}
