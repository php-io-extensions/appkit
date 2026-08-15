#import <AppKit/AppKit.h>
#import "ns-tablerowview.h"
#import "ns-view.h"

static NSTableRowView *ns_tablerowview_view(uintptr_t handle)
{
    void *ptr = ns_view_nsview(handle);
    if (!ptr) {
        return nil;
    }
    NSView *view = (__bridge NSView *)ptr;
    return [view isKindOfClass:[NSTableRowView class]] ? (NSTableRowView *)view : nil;
}


uintptr_t ns_tablerowview_create(double x, double y, double width, double height)
{
    if (width <= 0) {
        width = 200;
    }
    if (height <= 0) {
        height = 24;
    }
    @autoreleasepool {
        NSRect rect = NSMakeRect((CGFloat)x, (CGFloat)y, (CGFloat)width, (CGFloat)height);
        NSTableRowView *obj = [[NSTableRowView alloc] initWithFrame:rect];
        
        return ns_view_wrap((__bridge void *)obj);
    }
}

void ns_tablerowview_destroy(uintptr_t handle)
{
    ns_view_destroy(handle);
}


uintptr_t ns_tablerowview_wrap(void *view)
{
    if (!view) {
        return 0;
    }
    @autoreleasepool {
        NSView *obj = (__bridge NSView *)view;
        if (![obj isKindOfClass:[NSTableRowView class]]) {
            return 0;
        }
        return ns_view_wrap(view);
    }
}

void ns_tablerowview_set_emphasized(uintptr_t row, int flag)
{
    @autoreleasepool {
        NSTableRowView *obj = ns_tablerowview_view(row);
        if (obj) {
            obj.emphasized = flag ? YES : NO;
        }
    }
}

int ns_tablerowview_is_emphasized(uintptr_t row)
{
    @autoreleasepool {
        NSTableRowView *obj = ns_tablerowview_view(row);
        return obj && obj.emphasized ? 1 : 0;
    }
}

void ns_tablerowview_set_selected(uintptr_t row, int flag)
{
    @autoreleasepool {
        NSTableRowView *obj = ns_tablerowview_view(row);
        if (obj) {
            obj.selected = flag ? YES : NO;
        }
    }
}

int ns_tablerowview_is_selected(uintptr_t row)
{
    @autoreleasepool {
        NSTableRowView *obj = ns_tablerowview_view(row);
        return obj && obj.selected ? 1 : 0;
    }
}

void ns_tablerowview_set_group_row_style(uintptr_t row, int flag)
{
    @autoreleasepool {
        NSTableRowView *obj = ns_tablerowview_view(row);
        if (obj) {
            obj.groupRowStyle = flag ? YES : NO;
        }
    }
}

int ns_tablerowview_is_group_row_style(uintptr_t row)
{
    @autoreleasepool {
        NSTableRowView *obj = ns_tablerowview_view(row);
        return obj && obj.groupRowStyle ? 1 : 0;
    }
}

void ns_tablerowview_set_floating(uintptr_t row, int flag)
{
    @autoreleasepool {
        NSTableRowView *obj = ns_tablerowview_view(row);
        if (obj) {
            obj.floating = flag ? YES : NO;
        }
    }
}

int ns_tablerowview_is_floating(uintptr_t row)
{
    @autoreleasepool {
        NSTableRowView *obj = ns_tablerowview_view(row);
        return obj && obj.floating ? 1 : 0;
    }
}

int ns_tablerowview_interior_background_style(uintptr_t row)
{
    @autoreleasepool {
        NSTableRowView *obj = ns_tablerowview_view(row);
        return obj ? (int)obj.interiorBackgroundStyle : 0;
    }
}
