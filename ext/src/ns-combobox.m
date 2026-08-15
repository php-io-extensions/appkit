#import <AppKit/AppKit.h>
#import "ns-combobox.h"
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

@interface NSPhpCombo : NSComboBox
@property (nonatomic, assign) int pendingChange;
@end

@implementation NSPhpCombo

- (void)nsChanged:(id)sender
{
    (void)sender;
    self.pendingChange = 1;
}

@end

uintptr_t ns_combobox_create(double x, double y, double width, double height)
{
    if (width <= 0) {
        width = 160;
    }
    if (height <= 0) {
        height = 26;
    }

    @autoreleasepool {
        NSRect rect = NSMakeRect((CGFloat)x, (CGFloat)y, (CGFloat)width, (CGFloat)height);
        NSPhpCombo *combo = [[NSPhpCombo alloc] initWithFrame:rect];
        [combo setUsesDataSource:NO];
        [combo setTarget:combo];
        [combo setAction:@selector(nsChanged:)];
        return ns_view_wrap((__bridge void *)combo);
    }
}

void ns_combobox_destroy(uintptr_t combo)
{
    ns_view_destroy(combo);
}

void ns_combobox_add_item(uintptr_t combo, const char *title)
{
    void *ptr = ns_view_nsview(combo);
    if (!ptr) {
        return;
    }

    @autoreleasepool {
        NSView *view = (__bridge NSView *)ptr;
        if (![view isKindOfClass:[NSComboBox class]]) {
            return;
        }
        [(NSComboBox *)view addItemWithObjectValue:title ? [NSString stringWithUTF8String:title] : @""];
    }
}

void ns_combobox_remove_all(uintptr_t combo)
{
    void *ptr = ns_view_nsview(combo);
    if (!ptr) {
        return;
    }

    @autoreleasepool {
        NSView *view = (__bridge NSView *)ptr;
        if (![view isKindOfClass:[NSComboBox class]]) {
            return;
        }
        [(NSComboBox *)view removeAllItems];
    }
}

void ns_combobox_set_string(uintptr_t combo, const char *value)
{
    void *ptr = ns_view_nsview(combo);
    if (!ptr) {
        return;
    }

    @autoreleasepool {
        NSView *view = (__bridge NSView *)ptr;
        if (![view isKindOfClass:[NSComboBox class]]) {
            return;
        }
        [(NSComboBox *)view setStringValue:value ? [NSString stringWithUTF8String:value] : @""];
    }
}

int ns_combobox_get_string(uintptr_t combo, char *out, int out_len)
{
    void *ptr = ns_view_nsview(combo);
    if (!ptr) {
        return 0;
    }

    @autoreleasepool {
        NSView *view = (__bridge NSView *)ptr;
        if (![view isKindOfClass:[NSComboBox class]]) {
            return 0;
        }
        return ns_copy_nsstring([(NSComboBox *)view stringValue], out, out_len);
    }
}

int ns_combobox_poll_change(uintptr_t combo)
{
    void *ptr = ns_view_nsview(combo);
    if (!ptr) {
        return 0;
    }

    @autoreleasepool {
        NSView *view = (__bridge NSView *)ptr;
        if (![view isKindOfClass:[NSPhpCombo class]]) {
            return 0;
        }
        NSPhpCombo *typed = (NSPhpCombo *)view;
        if (typed.pendingChange != 1) {
            return 0;
        }
        typed.pendingChange = 0;
        return 1;
    }
}
