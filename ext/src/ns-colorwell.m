#import <AppKit/AppKit.h>
#import "ns-colorwell.h"
#import "ns-view.h"

@interface NSPhpColorWell : NSColorWell
@property (nonatomic, assign) int pendingChange;
@end

@implementation NSPhpColorWell

- (void)nsChanged:(id)sender
{
    (void)sender;
    self.pendingChange = 1;
}

@end

uintptr_t ns_colorwell_create(double x, double y, double width, double height)
{
    if (width <= 0) {
        width = 44;
    }
    if (height <= 0) {
        height = 24;
    }

    @autoreleasepool {
        NSRect rect = NSMakeRect((CGFloat)x, (CGFloat)y, (CGFloat)width, (CGFloat)height);
        NSPhpColorWell *well = [[NSPhpColorWell alloc] initWithFrame:rect];
        [well setColor:[NSColor colorWithRed:0.12 green:0.25 blue:0.50 alpha:1.0]];
        [well setTarget:well];
        [well setAction:@selector(nsChanged:)];
        return ns_view_wrap((__bridge void *)well);
    }
}

void ns_colorwell_destroy(uintptr_t well)
{
    ns_view_destroy(well);
}

void ns_colorwell_set_rgba(uintptr_t well, int r, int g, int b, int a)
{
    void *ptr = ns_view_nsview(well);
    if (!ptr) {
        return;
    }

    @autoreleasepool {
        NSView *view = (__bridge NSView *)ptr;
        if (![view isKindOfClass:[NSColorWell class]]) {
            return;
        }
        [(NSColorWell *)view setColor:[NSColor colorWithRed:((CGFloat)r) / 255.0
                                                     green:((CGFloat)g) / 255.0
                                                      blue:((CGFloat)b) / 255.0
                                                     alpha:((CGFloat)a) / 255.0]];
    }
}

int ns_colorwell_get_rgba(uintptr_t well, int *r, int *g, int *b, int *a)
{
    void *ptr = ns_view_nsview(well);
    if (!ptr || !r || !g || !b || !a) {
        return 0;
    }

    @autoreleasepool {
        NSView *view = (__bridge NSView *)ptr;
        if (![view isKindOfClass:[NSColorWell class]]) {
            return 0;
        }
        NSColor *color = [[(NSColorWell *)view color] colorUsingColorSpace:NSColorSpace.sRGBColorSpace];
        if (!color) {
            return 0;
        }
        *r = (int)(color.redComponent * 255.0 + 0.5);
        *g = (int)(color.greenComponent * 255.0 + 0.5);
        *b = (int)(color.blueComponent * 255.0 + 0.5);
        *a = (int)(color.alphaComponent * 255.0 + 0.5);
        return 1;
    }
}

int ns_colorwell_poll_change(uintptr_t well)
{
    void *ptr = ns_view_nsview(well);
    if (!ptr) {
        return 0;
    }

    @autoreleasepool {
        NSView *view = (__bridge NSView *)ptr;
        if (![view isKindOfClass:[NSPhpColorWell class]]) {
            return 0;
        }
        NSPhpColorWell *typed = (NSPhpColorWell *)view;
        if (typed.pendingChange != 1) {
            return 0;
        }
        typed.pendingChange = 0;
        return 1;
    }
}
