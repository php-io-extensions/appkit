#import <AppKit/AppKit.h>
#import "ns-textview.h"
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

@interface NSPhpTextView : NSTextView <NSTextViewDelegate>
@property (nonatomic, assign) int pendingChange;
@end

@implementation NSPhpTextView
- (void)textDidChange:(NSNotification *)notification
{
    (void)notification;
    self.pendingChange = 1;
}
@end

uintptr_t ns_textview_create(double x, double y, double width, double height, const char *value)
{
    if (width <= 0) {
        width = 240;
    }
    if (height <= 0) {
        height = 80;
    }
    @autoreleasepool {
        NSRect rect = NSMakeRect((CGFloat)x, (CGFloat)y, (CGFloat)width, (CGFloat)height);
        NSPhpTextView *view = [[NSPhpTextView alloc] initWithFrame:rect];
        [view setDelegate:view];
        [view setRichText:NO];
        [view setString:value ? [NSString stringWithUTF8String:value] : @""];
        return ns_view_wrap((__bridge void *)view);
    }
}

void ns_textview_destroy(uintptr_t view)
{
    ns_view_destroy(view);
}

void ns_textview_set_string(uintptr_t view, const char *value)
{
    void *ptr = ns_view_nsview(view);
    if (!ptr) {
        return;
    }
    @autoreleasepool {
        NSView *nsview = (__bridge NSView *)ptr;
        if (![nsview isKindOfClass:[NSTextView class]]) {
            return;
        }
        [(NSTextView *)nsview setString:value ? [NSString stringWithUTF8String:value] : @""];
    }
}

int ns_textview_get_string(uintptr_t view, char *out, int out_len)
{
    void *ptr = ns_view_nsview(view);
    if (!ptr) {
        return 0;
    }
    @autoreleasepool {
        NSView *nsview = (__bridge NSView *)ptr;
        if (![nsview isKindOfClass:[NSTextView class]]) {
            return 0;
        }
        return ns_copy_nsstring([(NSTextView *)nsview string], out, out_len);
    }
}

int ns_textview_poll_change(uintptr_t view)
{
    void *ptr = ns_view_nsview(view);
    if (!ptr) {
        return 0;
    }
    @autoreleasepool {
        NSView *nsview = (__bridge NSView *)ptr;
        if (![nsview isKindOfClass:[NSPhpTextView class]]) {
            return 0;
        }
        NSPhpTextView *typed = (NSPhpTextView *)nsview;
        if (typed.pendingChange != 1) {
            return 0;
        }
        typed.pendingChange = 0;
        return 1;
    }
}
