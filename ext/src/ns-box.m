#import <AppKit/AppKit.h>
#import "ns-box.h"
#import "ns-view.h"

uintptr_t ns_box_create(double x, double y, double width, double height, const char *title)
{
    if (width <= 0) {
        width = 200;
    }
    if (height <= 0) {
        height = 120;
    }

    @autoreleasepool {
        NSRect rect = NSMakeRect((CGFloat)x, (CGFloat)y, (CGFloat)width, (CGFloat)height);
        NSBox *box = [[NSBox alloc] initWithFrame:rect];
        [box setTitle:title ? [NSString stringWithUTF8String:title] : @""];
        return ns_view_wrap((__bridge void *)box);
    }
}

void ns_box_destroy(uintptr_t box)
{
    ns_view_destroy(box);
}

void ns_box_set_title(uintptr_t box, const char *title)
{
    void *ptr = ns_view_nsview(box);
    if (!ptr) {
        return;
    }

    @autoreleasepool {
        NSView *view = (__bridge NSView *)ptr;
        if (![view isKindOfClass:[NSBox class]]) {
            return;
        }
        [(NSBox *)view setTitle:title ? [NSString stringWithUTF8String:title] : @""];
    }
}

void ns_box_add_subview(uintptr_t box, uintptr_t child)
{
    void *parent = ns_view_nsview(box);
    void *kid = ns_view_nsview(child);
    if (!parent || !kid) {
        return;
    }

    @autoreleasepool {
        NSView *view = (__bridge NSView *)parent;
        if (![view isKindOfClass:[NSBox class]]) {
            return;
        }
        [[(NSBox *)view contentView] addSubview:(__bridge NSView *)kid];
    }
}
