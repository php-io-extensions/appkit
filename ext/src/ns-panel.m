#import <AppKit/AppKit.h>
#import "ns-panel.h"
#import "ns-view.h"
#import "ns-app.h"

@interface NSPhpPanelDelegate : NSObject <NSWindowDelegate>
@property (nonatomic, assign) void *boxPtr;
@end

typedef struct {
    void *panel;
    void *delegate;
    uintptr_t content_view;
    int closed;
} ns_panel_box;

@implementation NSPhpPanelDelegate
- (BOOL)windowShouldClose:(NSWindow *)sender
{
    (void)sender;
    ns_panel_box *box = (ns_panel_box *)self.boxPtr;
    if (box) {
        box->closed = 1;
    }
    return YES;
}
@end

static inline ns_panel_box *ns_panel_box_from(uintptr_t handle)
{
    return handle ? (ns_panel_box *)handle : NULL;
}

static inline void *ns_panel_retain_obj(id object)
{
    return object ? (__bridge_retained void *)object : NULL;
}

static inline void ns_panel_release_obj(void **slot)
{
    if (slot && *slot) {
        CFRelease(*slot);
        *slot = NULL;
    }
}

uintptr_t ns_panel_create(const char *title, int width, int height)
{
    if (!ns_app_init()) {
        return 0;
    }
    if (width <= 0) {
        width = 400;
    }
    if (height <= 0) {
        height = 300;
    }

    @autoreleasepool {
        NSRect rect = NSMakeRect(0, 0, (CGFloat)width, (CGFloat)height);
        NSUInteger style = NSWindowStyleMaskTitled
            | NSWindowStyleMaskClosable
            | NSWindowStyleMaskUtilityWindow
            | NSWindowStyleMaskResizable;

        NSPanel *panel = [[NSPanel alloc] initWithContentRect:rect
                                                    styleMask:style
                                                      backing:NSBackingStoreBuffered
                                                        defer:NO];
        NSString *nsTitle = title ? [NSString stringWithUTF8String:title] : @"Panel";
        [panel setTitle:nsTitle];
        [panel setReleasedWhenClosed:NO];
        [panel setFloatingPanel:YES];
        [panel setBecomesKeyOnlyIfNeeded:YES];

        ns_panel_box *box = calloc(1, sizeof(ns_panel_box));
        if (!box) {
            return 0;
        }

        NSPhpPanelDelegate *delegate = [NSPhpPanelDelegate new];
        delegate.boxPtr = box;
        [panel setDelegate:delegate];

        box->panel = ns_panel_retain_obj(panel);
        box->delegate = ns_panel_retain_obj(delegate);
        box->content_view = 0;
        box->closed = 0;

        return (uintptr_t)box;
    }
}

void ns_panel_destroy(uintptr_t panel)
{
    ns_panel_box *box = ns_panel_box_from(panel);
    if (!box) {
        return;
    }

    @autoreleasepool {
        if (box->panel) {
            NSPanel *p = (__bridge NSPanel *)box->panel;
            [p setDelegate:nil];
            [p close];
        }
        box->content_view = 0;
        ns_panel_release_obj(&box->delegate);
        ns_panel_release_obj(&box->panel);
    }
    free(box);
}

void ns_panel_set_title(uintptr_t panel, const char *title)
{
    ns_panel_box *box = ns_panel_box_from(panel);
    if (!box || !box->panel) {
        return;
    }
    @autoreleasepool {
        NSPanel *p = (__bridge NSPanel *)box->panel;
        NSString *nsTitle = title ? [NSString stringWithUTF8String:title] : @"";
        [p setTitle:nsTitle];
    }
}

void ns_panel_show(uintptr_t panel)
{
    ns_panel_box *box = ns_panel_box_from(panel);
    if (!box || !box->panel) {
        return;
    }
    NSPanel *p = (__bridge NSPanel *)box->panel;
    [p makeKeyAndOrderFront:nil];
}

void ns_panel_hide(uintptr_t panel)
{
    ns_panel_box *box = ns_panel_box_from(panel);
    if (!box || !box->panel) {
        return;
    }
    NSPanel *p = (__bridge NSPanel *)box->panel;
    [p orderOut:nil];
}

void ns_panel_center(uintptr_t panel)
{
    ns_panel_box *box = ns_panel_box_from(panel);
    if (!box || !box->panel) {
        return;
    }
    NSPanel *p = (__bridge NSPanel *)box->panel;
    [p center];
}

int ns_panel_should_close(uintptr_t panel)
{
    ns_panel_box *box = ns_panel_box_from(panel);
    if (!box) {
        return 1;
    }
    return box->closed ? 1 : 0;
}

int ns_panel_get_width(uintptr_t panel)
{
    ns_panel_box *box = ns_panel_box_from(panel);
    if (!box || !box->panel) {
        return 0;
    }
    NSPanel *p = (__bridge NSPanel *)box->panel;
    return (int)lround(p.contentView.bounds.size.width);
}

int ns_panel_get_height(uintptr_t panel)
{
    ns_panel_box *box = ns_panel_box_from(panel);
    if (!box || !box->panel) {
        return 0;
    }
    NSPanel *p = (__bridge NSPanel *)box->panel;
    return (int)lround(p.contentView.bounds.size.height);
}

uintptr_t ns_panel_content_view(uintptr_t panel)
{
    ns_panel_box *box = ns_panel_box_from(panel);
    if (!box || !box->panel) {
        return 0;
    }
    if (box->content_view) {
        return box->content_view;
    }

    NSPanel *p = (__bridge NSPanel *)box->panel;
    NSView *content = p.contentView;
    box->content_view = ns_view_wrap((__bridge void *)content);
    return box->content_view;
}

int ns_panel_set_content_view(uintptr_t panel, uintptr_t view)
{
    ns_panel_box *box = ns_panel_box_from(panel);
    void *nsview = ns_view_nsview(view);
    if (!box || !box->panel || !nsview) {
        return 0;
    }

    @autoreleasepool {
        NSPanel *p = (__bridge NSPanel *)box->panel;
        [p setContentView:(__bridge NSView *)nsview];
        box->content_view = view;
        return 1;
    }
}

int ns_panel_make_first_responder(uintptr_t panel, uintptr_t view)
{
    ns_panel_box *box = ns_panel_box_from(panel);
    void *nsview = ns_view_nsview(view);
    if (!box || !box->panel || !nsview) {
        return 0;
    }

    @autoreleasepool {
        NSPanel *p = (__bridge NSPanel *)box->panel;
        return [p makeFirstResponder:(__bridge NSView *)nsview] ? 1 : 0;
    }
}

int ns_panel_screen_to_content(uintptr_t panel, double screen_x, double screen_y, double *out_x, double *out_y)
{
    if (!out_x || !out_y) {
        return 0;
    }

    ns_panel_box *box = ns_panel_box_from(panel);
    if (!box || !box->panel) {
        return 0;
    }

    @autoreleasepool {
        NSPanel *p = (__bridge NSPanel *)box->panel;
        NSView *view = p.contentView;
        if (!view) {
            return 0;
        }
        NSPoint screenPt = NSMakePoint((CGFloat)screen_x, (CGFloat)screen_y);
        NSRect screenRect = NSMakeRect(screenPt.x, screenPt.y, 0, 0);
        NSRect windowRect = [p convertRectFromScreen:screenRect];
        NSPoint local = [view convertPoint:windowRect.origin fromView:nil];
        *out_x = (double)local.x;
        *out_y = (double)local.y;
        return 1;
    }
}

void ns_panel_set_floating_panel(uintptr_t panel, int floating)
{
    ns_panel_box *box = ns_panel_box_from(panel);
    if (!box || !box->panel) {
        return;
    }
    @autoreleasepool {
        NSPanel *p = (__bridge NSPanel *)box->panel;
        [p setFloatingPanel:floating ? YES : NO];
    }
}

int ns_panel_is_floating_panel(uintptr_t panel)
{
    ns_panel_box *box = ns_panel_box_from(panel);
    if (!box || !box->panel) {
        return 0;
    }
    @autoreleasepool {
        NSPanel *p = (__bridge NSPanel *)box->panel;
        return p.floatingPanel ? 1 : 0;
    }
}

void ns_panel_set_becomes_key_only_if_needed(uintptr_t panel, int flag)
{
    ns_panel_box *box = ns_panel_box_from(panel);
    if (!box || !box->panel) {
        return;
    }
    @autoreleasepool {
        NSPanel *p = (__bridge NSPanel *)box->panel;
        [p setBecomesKeyOnlyIfNeeded:flag ? YES : NO];
    }
}

int ns_panel_becomes_key_only_if_needed(uintptr_t panel)
{
    ns_panel_box *box = ns_panel_box_from(panel);
    if (!box || !box->panel) {
        return 0;
    }
    @autoreleasepool {
        NSPanel *p = (__bridge NSPanel *)box->panel;
        return p.becomesKeyOnlyIfNeeded ? 1 : 0;
    }
}

void ns_panel_set_works_when_modal(uintptr_t panel, int flag)
{
    ns_panel_box *box = ns_panel_box_from(panel);
    if (!box || !box->panel) {
        return;
    }
    @autoreleasepool {
        NSPanel *p = (__bridge NSPanel *)box->panel;
        [p setWorksWhenModal:flag ? YES : NO];
    }
}

int ns_panel_works_when_modal(uintptr_t panel)
{
    ns_panel_box *box = ns_panel_box_from(panel);
    if (!box || !box->panel) {
        return 0;
    }
    @autoreleasepool {
        NSPanel *p = (__bridge NSPanel *)box->panel;
        return p.worksWhenModal ? 1 : 0;
    }
}

void *ns_panel_nspanel(uintptr_t panel)
{
    ns_panel_box *box = ns_panel_box_from(panel);
    return (box && box->panel) ? box->panel : NULL;
}
