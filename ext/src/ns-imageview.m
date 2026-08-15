#import <AppKit/AppKit.h>
#import "ns-imageview.h"
#import "ns-view.h"

uintptr_t ns_imageview_create(double x, double y, double width, double height)
{
    if (width <= 0) {
        width = 64;
    }
    if (height <= 0) {
        height = 64;
    }

    @autoreleasepool {
        NSRect rect = NSMakeRect((CGFloat)x, (CGFloat)y, (CGFloat)width, (CGFloat)height);
        NSImageView *view = [[NSImageView alloc] initWithFrame:rect];
        [view setImageScaling:NSImageScaleProportionallyUpOrDown];
        return ns_view_wrap((__bridge void *)view);
    }
}

void ns_imageview_destroy(uintptr_t view)
{
    ns_view_destroy(view);
}

int ns_imageview_set_path(uintptr_t view, const char *path)
{
    void *ptr = ns_view_nsview(view);
    if (!ptr || !path) {
        return 0;
    }

    @autoreleasepool {
        NSView *nsview = (__bridge NSView *)ptr;
        if (![nsview isKindOfClass:[NSImageView class]]) {
            return 0;
        }
        NSImage *image = [[NSImage alloc] initWithContentsOfFile:[NSString stringWithUTF8String:path]];
        if (!image) {
            return 0;
        }
        [(NSImageView *)nsview setImage:image];
        return 1;
    }
}
