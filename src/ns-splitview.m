#import <AppKit/AppKit.h>
#import "ns-splitview.h"
#import "ns-view.h"

uintptr_t ns_splitview_create(double x, double y, double width, double height, int vertical)
{
    if (width <= 0) {
        width = 320;
    }
    if (height <= 0) {
        height = 200;
    }

    @autoreleasepool {
        NSRect rect = NSMakeRect((CGFloat)x, (CGFloat)y, (CGFloat)width, (CGFloat)height);
        NSSplitView *split = [[NSSplitView alloc] initWithFrame:rect];
        [split setVertical:vertical ? YES : NO];
        [split setDividerStyle:NSSplitViewDividerStyleThin];
        return ns_view_wrap((__bridge void *)split);
    }
}

void ns_splitview_destroy(uintptr_t split)
{
    ns_view_destroy(split);
}

void ns_splitview_add_subview(uintptr_t split, uintptr_t child)
{
    void *parent = ns_view_nsview(split);
    void *kid = ns_view_nsview(child);
    if (!parent || !kid) {
        return;
    }

    @autoreleasepool {
        NSView *view = (__bridge NSView *)parent;
        if (![view isKindOfClass:[NSSplitView class]]) {
            return;
        }
        [view addSubview:(__bridge NSView *)kid];
    }
}
