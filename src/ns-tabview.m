#import <AppKit/AppKit.h>
#import "ns-tabview.h"
#import "ns-view.h"

uintptr_t ns_tabview_create(double x, double y, double width, double height)
{
    if (width <= 0) {
        width = 320;
    }
    if (height <= 0) {
        height = 200;
    }

    @autoreleasepool {
        NSRect rect = NSMakeRect((CGFloat)x, (CGFloat)y, (CGFloat)width, (CGFloat)height);
        NSTabView *tabs = [[NSTabView alloc] initWithFrame:rect];
        return ns_view_wrap((__bridge void *)tabs);
    }
}

void ns_tabview_destroy(uintptr_t tabs)
{
    ns_view_destroy(tabs);
}

void ns_tabview_add_tab(uintptr_t tabs, const char *title, uintptr_t child)
{
    void *parent = ns_view_nsview(tabs);
    void *kid = ns_view_nsview(child);
    if (!parent || !kid) {
        return;
    }

    @autoreleasepool {
        NSView *view = (__bridge NSView *)parent;
        if (![view isKindOfClass:[NSTabView class]]) {
            return;
        }
        NSString *label = title ? [NSString stringWithUTF8String:title] : @"";
        NSTabViewItem *item = [[NSTabViewItem alloc] initWithIdentifier:label];
        [item setLabel:label];
        [item setView:(__bridge NSView *)kid];
        [(NSTabView *)view addTabViewItem:item];
    }
}

int ns_tabview_get_selected(uintptr_t tabs)
{
    void *ptr = ns_view_nsview(tabs);
    if (!ptr) {
        return -1;
    }

    @autoreleasepool {
        NSView *view = (__bridge NSView *)ptr;
        if (![view isKindOfClass:[NSTabView class]]) {
            return -1;
        }
        return (int)[(NSTabView *)view indexOfTabViewItem:[(NSTabView *)view selectedTabViewItem]];
    }
}

void ns_tabview_set_selected(uintptr_t tabs, int index)
{
    void *ptr = ns_view_nsview(tabs);
    if (!ptr) {
        return;
    }

    @autoreleasepool {
        NSView *view = (__bridge NSView *)ptr;
        if (![view isKindOfClass:[NSTabView class]]) {
            return;
        }
        [(NSTabView *)view selectTabViewItemAtIndex:index];
    }
}
