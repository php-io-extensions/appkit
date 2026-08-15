#import <AppKit/AppKit.h>
#import "ns-textfield.h"
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

@interface NSPhpTextField : NSTextField <NSTextFieldDelegate>
@property (nonatomic, assign) int pendingChange;
@end

@implementation NSPhpTextField
- (void)controlTextDidChange:(NSNotification *)notification
{
    (void)notification;
    self.pendingChange = 1;
}
@end

uintptr_t ns_textfield_create(double x, double y, double width, double height, const char *value)
{
    if (width <= 0) {
        width = 160;
    }
    if (height <= 0) {
        height = 24;
    }
    @autoreleasepool {
        NSRect rect = NSMakeRect((CGFloat)x, (CGFloat)y, (CGFloat)width, (CGFloat)height);
        NSPhpTextField *field = [[NSPhpTextField alloc] initWithFrame:rect];
        [field setDelegate:field];
        [field setStringValue:value ? [NSString stringWithUTF8String:value] : @""];
        return ns_view_wrap((__bridge void *)field);
    }
}

void ns_textfield_destroy(uintptr_t field)
{
    ns_view_destroy(field);
}

void ns_textfield_set_string(uintptr_t field, const char *value)
{
    void *ptr = ns_view_nsview(field);
    if (!ptr) {
        return;
    }
    @autoreleasepool {
        NSView *view = (__bridge NSView *)ptr;
        if (![view isKindOfClass:[NSTextField class]]) {
            return;
        }
        [(NSTextField *)view setStringValue:value ? [NSString stringWithUTF8String:value] : @""];
    }
}

int ns_textfield_get_string(uintptr_t field, char *out, int out_len)
{
    void *ptr = ns_view_nsview(field);
    if (!ptr) {
        return 0;
    }
    @autoreleasepool {
        NSView *view = (__bridge NSView *)ptr;
        if (![view isKindOfClass:[NSTextField class]]) {
            return 0;
        }
        return ns_copy_nsstring([(NSTextField *)view stringValue], out, out_len);
    }
}

void ns_textfield_set_editable(uintptr_t field, int editable)
{
    void *ptr = ns_view_nsview(field);
    if (!ptr) {
        return;
    }
    @autoreleasepool {
        NSView *view = (__bridge NSView *)ptr;
        if (![view isKindOfClass:[NSTextField class]]) {
            return;
        }
        [(NSTextField *)view setEditable:editable ? YES : NO];
        [(NSTextField *)view setSelectable:YES];
    }
}

int ns_textfield_poll_change(uintptr_t field)
{
    void *ptr = ns_view_nsview(field);
    if (!ptr) {
        return 0;
    }
    @autoreleasepool {
        NSView *view = (__bridge NSView *)ptr;
        if (![view isKindOfClass:[NSPhpTextField class]]) {
            return 0;
        }
        NSPhpTextField *typed = (NSPhpTextField *)view;
        if (typed.pendingChange != 1) {
            return 0;
        }
        typed.pendingChange = 0;
        return 1;
    }
}

uintptr_t ns_label_create(double x, double y, double width, double height, const char *value)
{
    if (width <= 0) {
        width = 120;
    }
    if (height <= 0) {
        height = 20;
    }
    @autoreleasepool {
        NSRect rect = NSMakeRect((CGFloat)x, (CGFloat)y, (CGFloat)width, (CGFloat)height);
        NSTextField *label = [[NSTextField alloc] initWithFrame:rect];
        [label setStringValue:value ? [NSString stringWithUTF8String:value] : @""];
        [label setBezeled:NO];
        [label setDrawsBackground:NO];
        [label setEditable:NO];
        [label setSelectable:NO];
        return ns_view_wrap((__bridge void *)label);
    }
}

void ns_label_destroy(uintptr_t label)
{
    ns_view_destroy(label);
}

void ns_label_set_string(uintptr_t label, const char *value)
{
    ns_textfield_set_string(label, value);
}

int ns_label_get_string(uintptr_t label, char *out, int out_len)
{
    return ns_textfield_get_string(label, out, out_len);
}
