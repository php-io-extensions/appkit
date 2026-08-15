#import <AppKit/AppKit.h>
#import "ns-gridcell.h"
#import "ns-gridrow.h"
#import "ns-gridcolumn.h"
#import "ns-view.h"

static uintptr_t ns_retain_obj(id object)
{
    return object ? (uintptr_t)(__bridge_retained void *)object : 0;
}

static void ns_release_handle(uintptr_t handle)
{
    if (handle) {
        CFRelease((void *)handle);
    }
}

static NSGridCell *ns_gridcell_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSGridCell class]] ? (NSGridCell *)obj : nil;
}

uintptr_t ns_gridcell_wrap(void *cell)
{
    if (!cell) {
        return 0;
    }
    @autoreleasepool {
        NSGridCell *obj = (__bridge NSGridCell *)cell;
        return [obj isKindOfClass:[NSGridCell class]] ? ns_retain_obj(obj) : 0;
    }
}

void ns_gridcell_destroy(uintptr_t cell)
{
    ns_release_handle(cell);
}

void *ns_gridcell_nsgridcell(uintptr_t cell)
{
    NSGridCell *obj = ns_gridcell_from(cell);
    return obj ? (__bridge void *)obj : NULL;
}

void ns_gridcell_set_content_view(uintptr_t cell, uintptr_t view)
{
    void *ptr = ns_view_nsview(view);
    @autoreleasepool {
        NSGridCell *obj = ns_gridcell_from(cell);
        if (!obj) {
            return;
        }
        obj.contentView = ptr ? (__bridge NSView *)ptr : nil;
    }
}

uintptr_t ns_gridcell_content_view(uintptr_t cell)
{
    @autoreleasepool {
        NSGridCell *obj = ns_gridcell_from(cell);
        if (!obj || !obj.contentView) {
            return 0;
        }
        return ns_view_wrap((__bridge void *)obj.contentView);
    }
}

uintptr_t ns_gridcell_row(uintptr_t cell)
{
    @autoreleasepool {
        NSGridCell *obj = ns_gridcell_from(cell);
        if (!obj || !obj.row) {
            return 0;
        }
        return ns_gridrow_wrap((__bridge void *)obj.row);
    }
}

uintptr_t ns_gridcell_column(uintptr_t cell)
{
    @autoreleasepool {
        NSGridCell *obj = ns_gridcell_from(cell);
        if (!obj || !obj.column) {
            return 0;
        }
        return ns_gridcolumn_wrap((__bridge void *)obj.column);
    }
}

void ns_gridcell_set_x_placement(uintptr_t cell, int placement)
{
    @autoreleasepool {
        NSGridCell *obj = ns_gridcell_from(cell);
        if (obj) {
            obj.xPlacement = (NSGridCellPlacement)placement;
        }
    }
}

int ns_gridcell_get_x_placement(uintptr_t cell)
{
    @autoreleasepool {
        NSGridCell *obj = ns_gridcell_from(cell);
        return obj ? (int)obj.xPlacement : 0;
    }
}

void ns_gridcell_set_y_placement(uintptr_t cell, int placement)
{
    @autoreleasepool {
        NSGridCell *obj = ns_gridcell_from(cell);
        if (obj) {
            obj.yPlacement = (NSGridCellPlacement)placement;
        }
    }
}

int ns_gridcell_get_y_placement(uintptr_t cell)
{
    @autoreleasepool {
        NSGridCell *obj = ns_gridcell_from(cell);
        return obj ? (int)obj.yPlacement : 0;
    }
}

void ns_gridcell_set_row_alignment(uintptr_t cell, int alignment)
{
    @autoreleasepool {
        NSGridCell *obj = ns_gridcell_from(cell);
        if (obj) {
            obj.rowAlignment = (NSGridRowAlignment)alignment;
        }
    }
}

int ns_gridcell_get_row_alignment(uintptr_t cell)
{
    @autoreleasepool {
        NSGridCell *obj = ns_gridcell_from(cell);
        return obj ? (int)obj.rowAlignment : 0;
    }
}
