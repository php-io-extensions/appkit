#import <AppKit/AppKit.h>
#import "ns-securetextfield.h"
#import "ns-textfield.h"
#import "ns-view.h"

@interface NSPhpSecureTextField : NSSecureTextField <NSTextFieldDelegate>
@property (nonatomic, assign) int pendingChange;
@end

@implementation NSPhpSecureTextField
- (void)controlTextDidChange:(NSNotification *)notification
{
    (void)notification;
    self.pendingChange = 1;
}
@end

uintptr_t ns_securetextfield_create(double x, double y, double width, double height, const char *value)
{
    if (width <= 0) {
        width = 160;
    }
    if (height <= 0) {
        height = 24;
    }
    @autoreleasepool {
        NSRect rect = NSMakeRect((CGFloat)x, (CGFloat)y, (CGFloat)width, (CGFloat)height);
        NSPhpSecureTextField *field = [[NSPhpSecureTextField alloc] initWithFrame:rect];
        [field setDelegate:field];
        [field setStringValue:value ? [NSString stringWithUTF8String:value] : @""];
        return ns_view_wrap((__bridge void *)field);
    }
}

void ns_securetextfield_destroy(uintptr_t field)
{
    ns_view_destroy(field);
}

void ns_securetextfield_set_string(uintptr_t field, const char *value)
{
    ns_textfield_set_string(field, value);
}

int ns_securetextfield_get_string(uintptr_t field, char *out, int out_len)
{
    return ns_textfield_get_string(field, out, out_len);
}

int ns_securetextfield_poll_change(uintptr_t field)
{
    void *ptr = ns_view_nsview(field);
    if (!ptr) {
        return 0;
    }
    @autoreleasepool {
        NSView *view = (__bridge NSView *)ptr;
        if (![view isKindOfClass:[NSPhpSecureTextField class]]) {
            return 0;
        }
        NSPhpSecureTextField *typed = (NSPhpSecureTextField *)view;
        if (typed.pendingChange != 1) {
            return 0;
        }
        typed.pendingChange = 0;
        return 1;
    }
}
