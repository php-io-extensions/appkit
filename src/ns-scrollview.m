#import <AppKit/AppKit.h>
#import "ns-scrollview.h"
#import "ns-view.h"

uintptr_t ns_scrollview_create(double x, double y, double width, double height)
{
    if (width <= 0) {
        width = 240;
    }
    if (height <= 0) {
        height = 160;
    }

    @autoreleasepool {
        NSRect rect = NSMakeRect((CGFloat)x, (CGFloat)y, (CGFloat)width, (CGFloat)height);
        NSScrollView *scroll = [[NSScrollView alloc] initWithFrame:rect];
        [scroll setHasVerticalScroller:YES];
        [scroll setHasHorizontalScroller:YES];
        [scroll setBorderType:NSBezelBorder];
        return ns_view_wrap((__bridge void *)scroll);
    }
}

void ns_scrollview_destroy(uintptr_t scroll)
{
    ns_view_destroy(scroll);
}

void ns_scrollview_set_document_view(uintptr_t scroll, uintptr_t child)
{
    void *parent = ns_view_nsview(scroll);
    void *kid = ns_view_nsview(child);
    if (!parent || !kid) {
        return;
    }

    @autoreleasepool {
        NSView *view = (__bridge NSView *)parent;
        if (![view isKindOfClass:[NSScrollView class]]) {
            return;
        }
        [(NSScrollView *)view setDocumentView:(__bridge NSView *)kid];
    }
}
