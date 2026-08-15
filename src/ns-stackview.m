#import <AppKit/AppKit.h>
#import "ns-stackview.h"
#import "ns-view.h"

uintptr_t ns_stackview_create(double x, double y, double width, double height, int vertical)
{
    if (width <= 0) {
        width = 200;
    }
    if (height <= 0) {
        height = 120;
    }

    @autoreleasepool {
        NSRect rect = NSMakeRect((CGFloat)x, (CGFloat)y, (CGFloat)width, (CGFloat)height);
        NSStackView *stack = [[NSStackView alloc] initWithFrame:rect];
        [stack setOrientation:vertical ? NSUserInterfaceLayoutOrientationVertical : NSUserInterfaceLayoutOrientationHorizontal];
        [stack setSpacing:8.0];
        [stack setAlignment:NSLayoutAttributeLeading];
        return ns_view_wrap((__bridge void *)stack);
    }
}

void ns_stackview_destroy(uintptr_t stack)
{
    ns_view_destroy(stack);
}

void ns_stackview_set_spacing(uintptr_t stack, double spacing)
{
    void *ptr = ns_view_nsview(stack);
    if (!ptr) {
        return;
    }

    @autoreleasepool {
        NSView *view = (__bridge NSView *)ptr;
        if (![view isKindOfClass:[NSStackView class]]) {
            return;
        }
        [(NSStackView *)view setSpacing:(CGFloat)spacing];
    }
}

void ns_stackview_add_arranged_subview(uintptr_t stack, uintptr_t child)
{
    void *parent = ns_view_nsview(stack);
    void *kid = ns_view_nsview(child);
    if (!parent || !kid) {
        return;
    }

    @autoreleasepool {
        NSView *view = (__bridge NSView *)parent;
        if (![view isKindOfClass:[NSStackView class]]) {
            return;
        }
        [(NSStackView *)view addArrangedSubview:(__bridge NSView *)kid];
    }
}
