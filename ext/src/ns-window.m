#import <AppKit/AppKit.h>
#import "ns-window.h"
#import "ns-view.h"
#import "ns-app.h"
#import "ns-protocol.h"
#import "ns-windowtab.h"
#import "ns-windowtabgroup.h"
#import "ns-titlebaraccessoryviewcontroller.h"

@interface NSPhpWindowDelegate : NSObject <NSWindowDelegate>
@property (nonatomic, assign) void *boxPtr;
@end

typedef struct {
    void *window;
    void *delegate;
    uintptr_t content_view;
    int closed;
} ns_window_box;

@implementation NSPhpWindowDelegate
- (BOOL)windowShouldClose:(NSWindow *)sender
{
    ns_window_box *box = (ns_window_box *)self.boxPtr;
    if (box) {
        box->closed = 1;
    }
    ns_protocol_enqueue("NSWindowDelegate", "windowShouldClose:", (uintptr_t)(__bridge void *)sender, 0, NULL);
    return YES;
}

- (void)windowDidResize:(NSNotification *)notification
{
    ns_window_box *box = (ns_window_box *)self.boxPtr;
    ns_protocol_enqueue("NSWindowDelegate", "windowDidResize:", (uintptr_t)(__bridge void *)notification.object, 0, NULL);
    if (box) {
        ns_window_php_invoke_did_resize((uintptr_t)box);
    }
}

- (void)windowDidBecomeKey:(NSNotification *)notification
{
    ns_protocol_enqueue("NSWindowDelegate", "windowDidBecomeKey:", (uintptr_t)(__bridge void *)notification.object, 0, NULL);
}

- (void)windowWillClose:(NSNotification *)notification
{
    ns_protocol_enqueue("NSWindowDelegate", "windowWillClose:", (uintptr_t)(__bridge void *)notification.object, 0, NULL);
}
@end

static inline ns_window_box *ns_window_box_from(uintptr_t handle)
{
    return handle ? (ns_window_box *)handle : NULL;
}

static inline void *ns_win_retain_obj(id object)
{
    return object ? (__bridge_retained void *)object : NULL;
}

static inline void ns_win_release_obj(void **slot)
{
    if (slot && *slot) {
        CFRelease(*slot);
        *slot = NULL;
    }
}

uintptr_t ns_window_create(const char *title, int width, int height)
{
    if (!ns_app_init()) {
        return 0;
    }
    if (width <= 0) {
        width = 800;
    }
    if (height <= 0) {
        height = 600;
    }

    @autoreleasepool {
        NSRect rect = NSMakeRect(0, 0, (CGFloat)width, (CGFloat)height);
        NSUInteger style = NSWindowStyleMaskTitled
            | NSWindowStyleMaskClosable
            | NSWindowStyleMaskMiniaturizable
            | NSWindowStyleMaskResizable;

        NSWindow *window = [[NSWindow alloc] initWithContentRect:rect
                                                      styleMask:style
                                                        backing:NSBackingStoreBuffered
                                                          defer:NO];
        NSString *nsTitle = title ? [NSString stringWithUTF8String:title] : @"AppKit";
        [window setTitle:nsTitle];
        [window setReleasedWhenClosed:NO];

        ns_window_box *box = calloc(1, sizeof(ns_window_box));
        if (!box) {
            return 0;
        }

        NSPhpWindowDelegate *delegate = [NSPhpWindowDelegate new];
        delegate.boxPtr = box;
        [window setDelegate:delegate];

        box->window = ns_win_retain_obj(window);
        box->delegate = ns_win_retain_obj(delegate);
        box->content_view = 0;
        box->closed = 0;

        return (uintptr_t)box;
    }
}

void ns_window_destroy(uintptr_t window)
{
    ns_window_box *box = ns_window_box_from(window);
    if (!box) {
        return;
    }

    @autoreleasepool {
        if (box->window) {
            NSWindow *win = (__bridge NSWindow *)box->window;
            [win setDelegate:nil];
            [win close];
        }
        box->content_view = 0;
        ns_window_php_clear_did_resize((uintptr_t)box);
        ns_win_release_obj(&box->delegate);
        ns_win_release_obj(&box->window);
    }
    free(box);
}

void ns_window_set_title(uintptr_t window, const char *title)
{
    ns_window_box *box = ns_window_box_from(window);
    if (!box || !box->window) {
        return;
    }
    @autoreleasepool {
        NSWindow *win = (__bridge NSWindow *)box->window;
        NSString *nsTitle = title ? [NSString stringWithUTF8String:title] : @"";
        [win setTitle:nsTitle];
    }
}

void ns_window_show(uintptr_t window)
{
    ns_window_box *box = ns_window_box_from(window);
    if (!box || !box->window) {
        return;
    }
    NSWindow *win = (__bridge NSWindow *)box->window;
    [win makeKeyAndOrderFront:nil];
}

void ns_window_hide(uintptr_t window)
{
    ns_window_box *box = ns_window_box_from(window);
    if (!box || !box->window) {
        return;
    }
    NSWindow *win = (__bridge NSWindow *)box->window;
    [win orderOut:nil];
}

void ns_window_center(uintptr_t window)
{
    ns_window_box *box = ns_window_box_from(window);
    if (!box || !box->window) {
        return;
    }
    NSWindow *win = (__bridge NSWindow *)box->window;
    [win center];
}

int ns_window_should_close(uintptr_t window)
{
    ns_window_box *box = ns_window_box_from(window);
    if (!box) {
        return 1;
    }
    return box->closed ? 1 : 0;
}

int ns_window_get_width(uintptr_t window)
{
    ns_window_box *box = ns_window_box_from(window);
    if (!box || !box->window) {
        return 0;
    }
    NSWindow *win = (__bridge NSWindow *)box->window;
    return (int)lround(win.contentView.bounds.size.width);
}

int ns_window_get_height(uintptr_t window)
{
    ns_window_box *box = ns_window_box_from(window);
    if (!box || !box->window) {
        return 0;
    }
    NSWindow *win = (__bridge NSWindow *)box->window;
    return (int)lround(win.contentView.bounds.size.height);
}

uintptr_t ns_window_content_view(uintptr_t window)
{
    ns_window_box *box = ns_window_box_from(window);
    if (!box || !box->window) {
        return 0;
    }
    if (box->content_view) {
        return box->content_view;
    }

    NSWindow *win = (__bridge NSWindow *)box->window;
    NSView *content = win.contentView;
    box->content_view = ns_view_wrap((__bridge void *)content);
    return box->content_view;
}

int ns_window_set_content_view(uintptr_t window, uintptr_t view)
{
    ns_window_box *box = ns_window_box_from(window);
    void *nsview = ns_view_nsview(view);
    if (!box || !box->window || !nsview) {
        return 0;
    }

    @autoreleasepool {
        NSWindow *win = (__bridge NSWindow *)box->window;
        [win setContentView:(__bridge NSView *)nsview];
        box->content_view = view;
        return 1;
    }
}

int ns_window_make_first_responder(uintptr_t window, uintptr_t view)
{
    ns_window_box *box = ns_window_box_from(window);
    void *nsview = ns_view_nsview(view);
    if (!box || !box->window || !nsview) {
        return 0;
    }

    @autoreleasepool {
        NSWindow *win = (__bridge NSWindow *)box->window;
        return [win makeFirstResponder:(__bridge NSView *)nsview] ? 1 : 0;
    }
}

int ns_window_screen_to_content(uintptr_t window, double screen_x, double screen_y, double *out_x, double *out_y)
{
    if (!out_x || !out_y) {
        return 0;
    }

    ns_window_box *box = ns_window_box_from(window);
    if (!box || !box->window) {
        return 0;
    }

    @autoreleasepool {
        NSWindow *win = (__bridge NSWindow *)box->window;
        NSView *view = win.contentView;
        if (!view) {
            return 0;
        }
        NSPoint screenPt = NSMakePoint((CGFloat)screen_x, (CGFloat)screen_y);
        NSRect screenRect = NSMakeRect(screenPt.x, screenPt.y, 0, 0);
        NSRect windowRect = [win convertRectFromScreen:screenRect];
        NSPoint local = [view convertPoint:windowRect.origin fromView:nil];
        *out_x = (double)local.x;
        *out_y = (double)local.y;
        return 1;
    }
}

void *ns_window_nswindow(uintptr_t window)
{
    ns_window_box *box = ns_window_box_from(window);
    return (box && box->window) ? box->window : NULL;
}

uintptr_t ns_window_tab(uintptr_t window)
{
    ns_window_box *box = ns_window_box_from(window);
    if (!box || !box->window) {
        return 0;
    }
    @autoreleasepool {
        NSWindow *win = (__bridge NSWindow *)box->window;
        return ns_windowtab_wrap((__bridge void *)win.tab);
    }
}

uintptr_t ns_window_tab_group(uintptr_t window)
{
    ns_window_box *box = ns_window_box_from(window);
    if (!box || !box->window) {
        return 0;
    }
    @autoreleasepool {
        NSWindow *win = (__bridge NSWindow *)box->window;
        return win.tabGroup ? ns_windowtabgroup_wrap((__bridge void *)win.tabGroup) : 0;
    }
}

void ns_window_add_titlebar_accessory(uintptr_t window, uintptr_t controller)
{
    ns_window_box *box = ns_window_box_from(window);
    void *ptr = ns_titlebaraccessoryviewcontroller_nstitlebaraccessoryviewcontroller(controller);
    if (!box || !box->window || !ptr) {
        return;
    }
    @autoreleasepool {
        NSWindow *win = (__bridge NSWindow *)box->window;
        [win addTitlebarAccessoryViewController:(__bridge NSTitlebarAccessoryViewController *)ptr];
    }
}
