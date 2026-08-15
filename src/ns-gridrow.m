#import <AppKit/AppKit.h>
#import "ns-gridrow.h"
#import "ns-gridcell.h"

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

static NSGridRow *ns_gridrow_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSGridRow class]] ? (NSGridRow *)obj : nil;
}

uintptr_t ns_gridrow_wrap(void *row)
{
    if (!row) {
        return 0;
    }
    @autoreleasepool {
        NSGridRow *obj = (__bridge NSGridRow *)row;
        return [obj isKindOfClass:[NSGridRow class]] ? ns_retain_obj(obj) : 0;
    }
}

void ns_gridrow_destroy(uintptr_t row)
{
    ns_release_handle(row);
}

void *ns_gridrow_nsgridrow(uintptr_t row)
{
    NSGridRow *obj = ns_gridrow_from(row);
    return obj ? (__bridge void *)obj : NULL;
}

int ns_gridrow_number_of_cells(uintptr_t row)
{
    @autoreleasepool {
        NSGridRow *obj = ns_gridrow_from(row);
        return obj ? (int)obj.numberOfCells : 0;
    }
}

uintptr_t ns_gridrow_cell_at(uintptr_t row, int index)
{
    @autoreleasepool {
        NSGridRow *obj = ns_gridrow_from(row);
        if (!obj || index < 0 || index >= (int)obj.numberOfCells) {
            return 0;
        }
        return ns_gridcell_wrap((__bridge void *)[obj cellAtIndex:index]);
    }
}

void ns_gridrow_set_y_placement(uintptr_t row, int placement)
{
    @autoreleasepool {
        NSGridRow *obj = ns_gridrow_from(row);
        if (obj) {
            obj.yPlacement = (NSGridCellPlacement)placement;
        }
    }
}

int ns_gridrow_get_y_placement(uintptr_t row)
{
    @autoreleasepool {
        NSGridRow *obj = ns_gridrow_from(row);
        return obj ? (int)obj.yPlacement : 0;
    }
}

void ns_gridrow_set_row_alignment(uintptr_t row, int alignment)
{
    @autoreleasepool {
        NSGridRow *obj = ns_gridrow_from(row);
        if (obj) {
            obj.rowAlignment = (NSGridRowAlignment)alignment;
        }
    }
}

int ns_gridrow_get_row_alignment(uintptr_t row)
{
    @autoreleasepool {
        NSGridRow *obj = ns_gridrow_from(row);
        return obj ? (int)obj.rowAlignment : 0;
    }
}

void ns_gridrow_set_height(uintptr_t row, double height)
{
    @autoreleasepool {
        NSGridRow *obj = ns_gridrow_from(row);
        if (obj) {
            obj.height = (CGFloat)height;
        }
    }
}

double ns_gridrow_get_height(uintptr_t row)
{
    @autoreleasepool {
        NSGridRow *obj = ns_gridrow_from(row);
        return obj ? (double)obj.height : 0.0;
    }
}

void ns_gridrow_set_top_padding(uintptr_t row, double padding)
{
    @autoreleasepool {
        NSGridRow *obj = ns_gridrow_from(row);
        if (obj) {
            obj.topPadding = (CGFloat)padding;
        }
    }
}

double ns_gridrow_get_top_padding(uintptr_t row)
{
    @autoreleasepool {
        NSGridRow *obj = ns_gridrow_from(row);
        return obj ? (double)obj.topPadding : 0.0;
    }
}

void ns_gridrow_set_bottom_padding(uintptr_t row, double padding)
{
    @autoreleasepool {
        NSGridRow *obj = ns_gridrow_from(row);
        if (obj) {
            obj.bottomPadding = (CGFloat)padding;
        }
    }
}

double ns_gridrow_get_bottom_padding(uintptr_t row)
{
    @autoreleasepool {
        NSGridRow *obj = ns_gridrow_from(row);
        return obj ? (double)obj.bottomPadding : 0.0;
    }
}

void ns_gridrow_set_hidden(uintptr_t row, int flag)
{
    @autoreleasepool {
        NSGridRow *obj = ns_gridrow_from(row);
        if (obj) {
            obj.hidden = flag ? YES : NO;
        }
    }
}

int ns_gridrow_is_hidden(uintptr_t row)
{
    @autoreleasepool {
        NSGridRow *obj = ns_gridrow_from(row);
        return obj && obj.hidden ? 1 : 0;
    }
}

void ns_gridrow_merge_cells(uintptr_t row, int start, int length)
{
    @autoreleasepool {
        NSGridRow *obj = ns_gridrow_from(row);
        if (!obj || start < 0 || length <= 0) {
            return;
        }
        [obj mergeCellsInRange:NSMakeRange((NSUInteger)start, (NSUInteger)length)];
    }
}
