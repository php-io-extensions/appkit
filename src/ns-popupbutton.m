#import <AppKit/AppKit.h>
#import "ns-popupbutton.h"
#import "ns-view.h"

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

@interface NSPhpPopUp : NSPopUpButton
@property (nonatomic, assign) int pendingChange;
@end

@implementation NSPhpPopUp

- (void)nsChanged:(id)sender
{
    (void)sender;
    self.pendingChange = 1;
}

@end

uintptr_t ns_popupbutton_create(double x, double y, double width, double height)
{
    if (width <= 0) {
        width = 160;
    }
    if (height <= 0) {
        height = 24;
    }

    @autoreleasepool {
        NSRect rect = NSMakeRect((CGFloat)x, (CGFloat)y, (CGFloat)width, (CGFloat)height);
        NSPhpPopUp *popup = [[NSPhpPopUp alloc] initWithFrame:rect pullsDown:NO];
        [popup setTarget:popup];
        [popup setAction:@selector(nsChanged:)];
        return ns_view_wrap((__bridge void *)popup);
    }
}

void ns_popupbutton_destroy(uintptr_t popup)
{
    ns_view_destroy(popup);
}

void ns_popupbutton_add_item(uintptr_t popup, const char *title)
{
    void *ptr = ns_view_nsview(popup);
    if (!ptr) {
        return;
    }

    @autoreleasepool {
        NSView *view = (__bridge NSView *)ptr;
        if (![view isKindOfClass:[NSPopUpButton class]]) {
            return;
        }
        [(NSPopUpButton *)view addItemWithTitle:title ? [NSString stringWithUTF8String:title] : @""];
    }
}

void ns_popupbutton_remove_all(uintptr_t popup)
{
    void *ptr = ns_view_nsview(popup);
    if (!ptr) {
        return;
    }

    @autoreleasepool {
        NSView *view = (__bridge NSView *)ptr;
        if (![view isKindOfClass:[NSPopUpButton class]]) {
            return;
        }
        [(NSPopUpButton *)view removeAllItems];
    }
}

int ns_popupbutton_count(uintptr_t popup)
{
    void *ptr = ns_view_nsview(popup);
    if (!ptr) {
        return 0;
    }

    @autoreleasepool {
        NSView *view = (__bridge NSView *)ptr;
        if (![view isKindOfClass:[NSPopUpButton class]]) {
            return 0;
        }
        return (int)[(NSPopUpButton *)view numberOfItems];
    }
}

void ns_popupbutton_set_selected(uintptr_t popup, int index)
{
    void *ptr = ns_view_nsview(popup);
    if (!ptr) {
        return;
    }

    @autoreleasepool {
        NSView *view = (__bridge NSView *)ptr;
        if (![view isKindOfClass:[NSPopUpButton class]]) {
            return;
        }
        [(NSPopUpButton *)view selectItemAtIndex:index];
    }
}

int ns_popupbutton_get_selected(uintptr_t popup)
{
    void *ptr = ns_view_nsview(popup);
    if (!ptr) {
        return -1;
    }

    @autoreleasepool {
        NSView *view = (__bridge NSView *)ptr;
        if (![view isKindOfClass:[NSPopUpButton class]]) {
            return -1;
        }
        return (int)[(NSPopUpButton *)view indexOfSelectedItem];
    }
}

int ns_popupbutton_get_selected_title(uintptr_t popup, char *out, int out_len)
{
    void *ptr = ns_view_nsview(popup);
    if (!ptr) {
        return 0;
    }

    @autoreleasepool {
        NSView *view = (__bridge NSView *)ptr;
        if (![view isKindOfClass:[NSPopUpButton class]]) {
            return 0;
        }
        return ns_copy_nsstring([(NSPopUpButton *)view titleOfSelectedItem], out, out_len);
    }
}

int ns_popupbutton_poll_change(uintptr_t popup)
{
    void *ptr = ns_view_nsview(popup);
    if (!ptr) {
        return 0;
    }

    @autoreleasepool {
        NSView *view = (__bridge NSView *)ptr;
        if (![view isKindOfClass:[NSPhpPopUp class]]) {
            return 0;
        }
        NSPhpPopUp *typed = (NSPhpPopUp *)view;
        if (typed.pendingChange != 1) {
            return 0;
        }
        typed.pendingChange = 0;
        return 1;
    }
}
