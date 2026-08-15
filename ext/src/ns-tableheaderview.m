#import <AppKit/AppKit.h>
#import "ns-tableheaderview.h"
#import "ns-view.h"

static NSTableHeaderView *ns_tableheaderview_view(uintptr_t handle)
{
    void *ptr = ns_view_nsview(handle);
    if (!ptr) {
        return nil;
    }
    NSView *view = (__bridge NSView *)ptr;
    return [view isKindOfClass:[NSTableHeaderView class]] ? (NSTableHeaderView *)view : nil;
}


uintptr_t ns_tableheaderview_create(double x, double y, double width, double height)
{
    if (width <= 0) {
        width = 200;
    }
    if (height <= 0) {
        height = 23;
    }
    @autoreleasepool {
        NSRect rect = NSMakeRect((CGFloat)x, (CGFloat)y, (CGFloat)width, (CGFloat)height);
        NSTableHeaderView *obj = [[NSTableHeaderView alloc] initWithFrame:rect];
        
        return ns_view_wrap((__bridge void *)obj);
    }
}

void ns_tableheaderview_destroy(uintptr_t handle)
{
    ns_view_destroy(handle);
}


uintptr_t ns_tableheaderview_wrap(void *view)
{
    if (!view) {
        return 0;
    }
    @autoreleasepool {
        NSView *obj = (__bridge NSView *)view;
        if (![obj isKindOfClass:[NSTableHeaderView class]]) {
            return 0;
        }
        return ns_view_wrap(view);
    }
}

void ns_tableheaderview_set_table_view(uintptr_t header, uintptr_t table)
{
    void *ptr = ns_view_nsview(table);
    @autoreleasepool {
        NSTableHeaderView *obj = ns_tableheaderview_view(header);
        if (!obj) {
            return;
        }
        NSView *tv = ptr ? (__bridge NSView *)ptr : nil;
        obj.tableView = [tv isKindOfClass:[NSTableView class]] ? (NSTableView *)tv : nil;
    }
}

uintptr_t ns_tableheaderview_table_view(uintptr_t header)
{
    @autoreleasepool {
        NSTableHeaderView *obj = ns_tableheaderview_view(header);
        if (!obj || !obj.tableView) {
            return 0;
        }
        return ns_view_wrap((__bridge void *)obj.tableView);
    }
}

double ns_tableheaderview_header_height(uintptr_t header)
{
    @autoreleasepool {
        NSTableHeaderView *obj = ns_tableheaderview_view(header);
        return obj ? (double)NSHeight(obj.frame) : 0.0;
    }
}
