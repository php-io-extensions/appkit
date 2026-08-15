#import <AppKit/AppKit.h>
#import "ns-tablecellview.h"
#import "ns-view.h"
#import "ns-image.h"

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


static NSTableCellView *ns_tablecellview_view(uintptr_t handle)
{
    void *ptr = ns_view_nsview(handle);
    if (!ptr) {
        return nil;
    }
    NSView *view = (__bridge NSView *)ptr;
    return [view isKindOfClass:[NSTableCellView class]] ? (NSTableCellView *)view : nil;
}


uintptr_t ns_tablecellview_create(double x, double y, double width, double height)
{
    if (width <= 0) {
        width = 160;
    }
    if (height <= 0) {
        height = 24;
    }
    @autoreleasepool {
        NSRect rect = NSMakeRect((CGFloat)x, (CGFloat)y, (CGFloat)width, (CGFloat)height);
        NSTableCellView *obj = [[NSTableCellView alloc] initWithFrame:rect];
        NSTextField *field = [NSTextField labelWithString:@""];
        field.frame = obj.bounds;
        field.autoresizingMask = NSViewWidthSizable | NSViewHeightSizable;
        obj.textField = field;
        [obj addSubview:field];
        return ns_view_wrap((__bridge void *)obj);
    }
}

uintptr_t ns_tablecellview_wrap(void *view)
{
    if (!view) {
        return 0;
    }
    @autoreleasepool {
        NSView *obj = (__bridge NSView *)view;
        if (![obj isKindOfClass:[NSTableCellView class]]) {
            return 0;
        }
        return ns_view_wrap(view);
    }
}

void ns_tablecellview_destroy(uintptr_t cell)
{
    ns_view_destroy(cell);
}

void ns_tablecellview_set_text(uintptr_t cell, const char *text)
{
    @autoreleasepool {
        NSTableCellView *obj = ns_tablecellview_view(cell);
        if (obj && obj.textField) {
            obj.textField.stringValue = text ? [NSString stringWithUTF8String:text] : @"";
        }
    }
}

int ns_tablecellview_get_text(uintptr_t cell, char *out, int out_len)
{
    @autoreleasepool {
        NSTableCellView *obj = ns_tablecellview_view(cell);
        if (!obj || !obj.textField) {
            return 0;
        }
        return ns_copy_nsstring(obj.textField.stringValue, out, out_len);
    }
}

void ns_tablecellview_set_image(uintptr_t cell, uintptr_t image)
{
    void *ptr = ns_image_nsimage(image);
    @autoreleasepool {
        NSTableCellView *obj = ns_tablecellview_view(cell);
        if (obj && obj.imageView) {
            obj.imageView.image = ptr ? (__bridge NSImage *)ptr : nil;
        }
    }
}

uintptr_t ns_tablecellview_text_field(uintptr_t cell)
{
    @autoreleasepool {
        NSTableCellView *obj = ns_tablecellview_view(cell);
        if (!obj || !obj.textField) {
            return 0;
        }
        return ns_view_wrap((__bridge void *)obj.textField);
    }
}

uintptr_t ns_tablecellview_image_view(uintptr_t cell)
{
    @autoreleasepool {
        NSTableCellView *obj = ns_tablecellview_view(cell);
        if (!obj || !obj.imageView) {
            return 0;
        }
        return ns_view_wrap((__bridge void *)obj.imageView);
    }
}
