#import <AppKit/AppKit.h>
#import "ns-button.h"
#import "ns-view.h"

@interface NSPhpButton : NSButton
@property (nonatomic, assign) int pendingClick;
@end

@implementation NSPhpButton

- (void)nsClicked:(id)sender
{
    (void)sender;
    self.pendingClick = 1;
}

@end

@interface NSPhpCheck : NSButton
@property (nonatomic, assign) int pendingClick;
@end

@implementation NSPhpCheck

- (void)nsClicked:(id)sender
{
    (void)sender;
    self.pendingClick = 1;
}

@end

@interface NSPhpRadio : NSButton
@property (nonatomic, assign) int pendingClick;
@end

@implementation NSPhpRadio

- (void)nsClicked:(id)sender
{
    (void)sender;
    self.pendingClick = 1;
}

@end

static uintptr_t ns_make_toggle_button(Class cls, NSButtonType type, double x, double y, double width, double height, const char *title)
{
    if (width <= 0) {
        width = 140;
    }
    if (height <= 0) {
        height = 24;
    }

    @autoreleasepool {
        NSRect rect = NSMakeRect((CGFloat)x, (CGFloat)y, (CGFloat)width, (CGFloat)height);
        NSButton *button = [[cls alloc] initWithFrame:rect];
        [button setButtonType:type];
        [button setTitle:title ? [NSString stringWithUTF8String:title] : @""];
        [button setTarget:button];
        [button setAction:@selector(nsClicked:)];
        return ns_view_wrap((__bridge void *)button);
    }
}

uintptr_t ns_button_create(double x, double y, double width, double height, const char *title)
{
    if (width <= 0) {
        width = 80;
    }
    if (height <= 0) {
        height = 32;
    }

    @autoreleasepool {
        NSRect rect = NSMakeRect((CGFloat)x, (CGFloat)y, (CGFloat)width, (CGFloat)height);
        NSPhpButton *button = [[NSPhpButton alloc] initWithFrame:rect];
        [button setButtonType:NSButtonTypeMomentaryPushIn];
        [button setBezelStyle:NSBezelStyleRounded];
        [button setTitle:title ? [NSString stringWithUTF8String:title] : @""];
        [button setTarget:button];
        [button setAction:@selector(nsClicked:)];
        return ns_view_wrap((__bridge void *)button);
    }
}

uintptr_t ns_button_create_checkbox(double x, double y, double width, double height, const char *title)
{
    return ns_make_toggle_button([NSPhpCheck class], NSButtonTypeSwitch, x, y, width, height, title);
}

uintptr_t ns_button_create_radio(double x, double y, double width, double height, const char *title)
{
    return ns_make_toggle_button([NSPhpRadio class], NSButtonTypeRadio, x, y, width, height, title);
}

void ns_button_destroy(uintptr_t button)
{
    ns_view_destroy(button);
}

void ns_button_set_title(uintptr_t button, const char *title)
{
    void *ptr = ns_view_nsview(button);
    if (!ptr) {
        return;
    }

    @autoreleasepool {
        NSView *view = (__bridge NSView *)ptr;
        if (![view isKindOfClass:[NSButton class]]) {
            return;
        }
        [(NSButton *)view setTitle:title ? [NSString stringWithUTF8String:title] : @""];
    }
}

void ns_button_set_checked(uintptr_t button, int checked)
{
    void *ptr = ns_view_nsview(button);
    if (!ptr) {
        return;
    }

    @autoreleasepool {
        NSView *view = (__bridge NSView *)ptr;
        if (![view isKindOfClass:[NSButton class]]) {
            return;
        }
        [(NSButton *)view setState:checked ? NSControlStateValueOn : NSControlStateValueOff];
    }
}

int ns_button_is_checked(uintptr_t button)
{
    void *ptr = ns_view_nsview(button);
    if (!ptr) {
        return 0;
    }

    @autoreleasepool {
        NSView *view = (__bridge NSView *)ptr;
        if (![view isKindOfClass:[NSButton class]]) {
            return 0;
        }
        return [(NSButton *)view state] == NSControlStateValueOn ? 1 : 0;
    }
}

void ns_button_set_selected(uintptr_t button, int selected)
{
    ns_button_set_checked(button, selected);
}

int ns_button_is_selected(uintptr_t button)
{
    return ns_button_is_checked(button);
}

int ns_button_poll_click(uintptr_t button)
{
    void *ptr = ns_view_nsview(button);
    if (!ptr) {
        return 0;
    }

    @autoreleasepool {
        NSView *view = (__bridge NSView *)ptr;
        if ([view isKindOfClass:[NSPhpButton class]]) {
            NSPhpButton *typed = (NSPhpButton *)view;
            if (typed.pendingClick != 1) {
                return 0;
            }
            typed.pendingClick = 0;
            return 1;
        }
        if ([view isKindOfClass:[NSPhpCheck class]]) {
            NSPhpCheck *typed = (NSPhpCheck *)view;
            if (typed.pendingClick != 1) {
                return 0;
            }
            typed.pendingClick = 0;
            return 1;
        }
        if ([view isKindOfClass:[NSPhpRadio class]]) {
            NSPhpRadio *typed = (NSPhpRadio *)view;
            if (typed.pendingClick != 1) {
                return 0;
            }
            typed.pendingClick = 0;
            return 1;
        }
        return 0;
    }
}
