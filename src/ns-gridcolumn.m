#import <AppKit/AppKit.h>
#import "ns-gridcolumn.h"
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

static NSGridColumn *ns_gridcolumn_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSGridColumn class]] ? (NSGridColumn *)obj : nil;
}

uintptr_t ns_gridcolumn_wrap(void *column)
{
    if (!column) {
        return 0;
    }
    @autoreleasepool {
        NSGridColumn *obj = (__bridge NSGridColumn *)column;
        return [obj isKindOfClass:[NSGridColumn class]] ? ns_retain_obj(obj) : 0;
    }
}

void ns_gridcolumn_destroy(uintptr_t column)
{
    ns_release_handle(column);
}

void *ns_gridcolumn_nsgridcolumn(uintptr_t column)
{
    NSGridColumn *obj = ns_gridcolumn_from(column);
    return obj ? (__bridge void *)obj : NULL;
}

int ns_gridcolumn_number_of_cells(uintptr_t column)
{
    @autoreleasepool {
        NSGridColumn *obj = ns_gridcolumn_from(column);
        return obj ? (int)obj.numberOfCells : 0;
    }
}

uintptr_t ns_gridcolumn_cell_at(uintptr_t column, int index)
{
    @autoreleasepool {
        NSGridColumn *obj = ns_gridcolumn_from(column);
        if (!obj || index < 0 || index >= (int)obj.numberOfCells) {
            return 0;
        }
        return ns_gridcell_wrap((__bridge void *)[obj cellAtIndex:index]);
    }
}

void ns_gridcolumn_set_x_placement(uintptr_t column, int placement)
{
    @autoreleasepool {
        NSGridColumn *obj = ns_gridcolumn_from(column);
        if (obj) {
            obj.xPlacement = (NSGridCellPlacement)placement;
        }
    }
}

int ns_gridcolumn_get_x_placement(uintptr_t column)
{
    @autoreleasepool {
        NSGridColumn *obj = ns_gridcolumn_from(column);
        return obj ? (int)obj.xPlacement : 0;
    }
}

void ns_gridcolumn_set_width(uintptr_t column, double width)
{
    @autoreleasepool {
        NSGridColumn *obj = ns_gridcolumn_from(column);
        if (obj) {
            obj.width = (CGFloat)width;
        }
    }
}

double ns_gridcolumn_get_width(uintptr_t column)
{
    @autoreleasepool {
        NSGridColumn *obj = ns_gridcolumn_from(column);
        return obj ? (double)obj.width : 0.0;
    }
}

void ns_gridcolumn_set_leading_padding(uintptr_t column, double padding)
{
    @autoreleasepool {
        NSGridColumn *obj = ns_gridcolumn_from(column);
        if (obj) {
            obj.leadingPadding = (CGFloat)padding;
        }
    }
}

double ns_gridcolumn_get_leading_padding(uintptr_t column)
{
    @autoreleasepool {
        NSGridColumn *obj = ns_gridcolumn_from(column);
        return obj ? (double)obj.leadingPadding : 0.0;
    }
}

void ns_gridcolumn_set_trailing_padding(uintptr_t column, double padding)
{
    @autoreleasepool {
        NSGridColumn *obj = ns_gridcolumn_from(column);
        if (obj) {
            obj.trailingPadding = (CGFloat)padding;
        }
    }
}

double ns_gridcolumn_get_trailing_padding(uintptr_t column)
{
    @autoreleasepool {
        NSGridColumn *obj = ns_gridcolumn_from(column);
        return obj ? (double)obj.trailingPadding : 0.0;
    }
}

void ns_gridcolumn_set_hidden(uintptr_t column, int flag)
{
    @autoreleasepool {
        NSGridColumn *obj = ns_gridcolumn_from(column);
        if (obj) {
            obj.hidden = flag ? YES : NO;
        }
    }
}

int ns_gridcolumn_is_hidden(uintptr_t column)
{
    @autoreleasepool {
        NSGridColumn *obj = ns_gridcolumn_from(column);
        return obj && obj.hidden ? 1 : 0;
    }
}

void ns_gridcolumn_merge_cells(uintptr_t column, int start, int length)
{
    @autoreleasepool {
        NSGridColumn *obj = ns_gridcolumn_from(column);
        if (!obj || start < 0 || length <= 0) {
            return;
        }
        [obj mergeCellsInRange:NSMakeRange((NSUInteger)start, (NSUInteger)length)];
    }
}
