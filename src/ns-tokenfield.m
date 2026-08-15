#import <AppKit/AppKit.h>
#import "ns-tokenfield.h"
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

static uintptr_t ns_retain_obj(id object)
{
    return object ? (uintptr_t)(__bridge_retained void *)object : 0;
}

static void ns_release_handle(uintptr_t handle)
{
    if (handle) {
        CFRelease((void *)handle);
    }
}

static NSMenu *ns_menu_from_handle(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSMenu class]] ? (NSMenu *)obj : nil;
}

@interface NSPhpTokenField : NSTokenField <NSTokenFieldDelegate>
@property (nonatomic, assign) int pendingChange;
@end

@implementation NSPhpTokenField
- (void)controlTextDidChange:(NSNotification *)notification
{
    (void)notification;
    self.pendingChange = 1;
}
@end

static NSTokenField *ns_tokenfield_view(uintptr_t field)
{
    void *ptr = ns_view_nsview(field);
    if (!ptr) {
        return nil;
    }
    NSView *view = (__bridge NSView *)ptr;
    return [view isKindOfClass:[NSTokenField class]] ? (NSTokenField *)view : nil;
}

uintptr_t ns_tokenfield_create(double x, double y, double width, double height, const char *value)
{
    if (width <= 0) {
        width = 160;
    }
    if (height <= 0) {
        height = 24;
    }
    @autoreleasepool {
        NSRect rect = NSMakeRect((CGFloat)x, (CGFloat)y, (CGFloat)width, (CGFloat)height);
        NSPhpTokenField *field = [[NSPhpTokenField alloc] initWithFrame:rect];
        [field setDelegate:field];
        [field setStringValue:value ? [NSString stringWithUTF8String:value] : @""];
        return ns_view_wrap((__bridge void *)field);
    }
}

void ns_tokenfield_destroy(uintptr_t field)
{
    ns_view_destroy(field);
}

void ns_tokenfield_set_string(uintptr_t field, const char *value)
{
    @autoreleasepool {
        NSTokenField *obj = ns_tokenfield_view(field);
        if (obj) {
            [obj setStringValue:value ? [NSString stringWithUTF8String:value] : @""];
        }
    }
}

int ns_tokenfield_get_string(uintptr_t field, char *out, int out_len)
{
    @autoreleasepool {
        NSTokenField *obj = ns_tokenfield_view(field);
        return obj ? ns_copy_nsstring(obj.stringValue, out, out_len) : 0;
    }
}

void ns_tokenfield_set_token_style(uintptr_t field, int style)
{
    @autoreleasepool {
        NSTokenField *obj = ns_tokenfield_view(field);
        if (obj) {
            obj.tokenStyle = (NSTokenStyle)style;
        }
    }
}

int ns_tokenfield_get_token_style(uintptr_t field)
{
    @autoreleasepool {
        NSTokenField *obj = ns_tokenfield_view(field);
        return obj ? (int)obj.tokenStyle : 0;
    }
}

void ns_tokenfield_set_completion_delay(uintptr_t field, double delay)
{
    @autoreleasepool {
        NSTokenField *obj = ns_tokenfield_view(field);
        if (obj) {
            obj.completionDelay = delay;
        }
    }
}

double ns_tokenfield_get_completion_delay(uintptr_t field)
{
    @autoreleasepool {
        NSTokenField *obj = ns_tokenfield_view(field);
        return obj ? obj.completionDelay : 0.0;
    }
}

double ns_tokenfield_default_completion_delay(void)
{
    return [NSTokenField defaultCompletionDelay];
}

int ns_tokenfield_poll_change(uintptr_t field)
{
    void *ptr = ns_view_nsview(field);
    if (!ptr) {
        return 0;
    }
    @autoreleasepool {
        NSView *view = (__bridge NSView *)ptr;
        if (![view isKindOfClass:[NSPhpTokenField class]]) {
            return 0;
        }
        NSPhpTokenField *typed = (NSPhpTokenField *)view;
        if (typed.pendingChange != 1) {
            return 0;
        }
        typed.pendingChange = 0;
        return 1;
    }
}
