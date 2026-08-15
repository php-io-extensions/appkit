#import <AppKit/AppKit.h>
#import "ns-gridview.h"
#import "ns-gridrow.h"
#import "ns-gridcolumn.h"
#import "ns-gridcell.h"
#import "ns-view.h"

static void ns_gridview_ensure(NSGridView *grid, int row, int column)
{
    if (row < 0) {
        row = 0;
    }
    if (column < 0) {
        column = 0;
    }
    while ((int)grid.numberOfRows <= row) {
        NSMutableArray<NSView *> *views = [NSMutableArray array];
        NSInteger cols = grid.numberOfColumns > 0 ? grid.numberOfColumns : 1;
        for (NSInteger i = 0; i < cols; i++) {
            [views addObject:[[NSView alloc] initWithFrame:NSZeroRect]];
        }
        [grid addRowWithViews:views];
    }
    while ((int)grid.numberOfColumns <= column) {
        NSMutableArray<NSView *> *views = [NSMutableArray array];
        for (NSInteger i = 0; i < grid.numberOfRows; i++) {
            [views addObject:[[NSView alloc] initWithFrame:NSZeroRect]];
        }
        [grid addColumnWithViews:views];
    }
}

uintptr_t ns_gridview_create(double x, double y, double width, double height)
{
    if (width <= 0) {
        width = 240;
    }
    if (height <= 0) {
        height = 160;
    }

    @autoreleasepool {
        NSRect rect = NSMakeRect((CGFloat)x, (CGFloat)y, (CGFloat)width, (CGFloat)height);
        NSView *placeholder = [[NSView alloc] initWithFrame:NSZeroRect];
        NSGridView *grid = [NSGridView gridViewWithViews:@[ @[ placeholder ] ]];
        [grid setFrame:rect];
        [grid setRowSpacing:8.0];
        [grid setColumnSpacing:8.0];
        return ns_view_wrap((__bridge void *)grid);
    }
}

void ns_gridview_destroy(uintptr_t grid)
{
    ns_view_destroy(grid);
}

void ns_gridview_add_view(uintptr_t grid, uintptr_t child, int row, int column)
{
    void *parent = ns_view_nsview(grid);
    void *kid = ns_view_nsview(child);
    if (!parent || !kid) {
        return;
    }

    @autoreleasepool {
        NSView *view = (__bridge NSView *)parent;
        if (![view isKindOfClass:[NSGridView class]]) {
            return;
        }
        NSGridView *typed = (NSGridView *)view;
        ns_gridview_ensure(typed, row, column);
        [[typed cellAtColumnIndex:column rowIndex:row] setContentView:(__bridge NSView *)kid];
    }
}

void ns_gridview_set_row_spacing(uintptr_t grid, double spacing)
{
    void *ptr = ns_view_nsview(grid);
    if (!ptr) {
        return;
    }

    @autoreleasepool {
        NSView *view = (__bridge NSView *)ptr;
        if (![view isKindOfClass:[NSGridView class]]) {
            return;
        }
        [(NSGridView *)view setRowSpacing:(CGFloat)spacing];
    }
}

void ns_gridview_set_column_spacing(uintptr_t grid, double spacing)
{
    void *ptr = ns_view_nsview(grid);
    if (!ptr) {
        return;
    }

    @autoreleasepool {
        NSView *view = (__bridge NSView *)ptr;
        if (![view isKindOfClass:[NSGridView class]]) {
            return;
        }
        [(NSGridView *)view setColumnSpacing:(CGFloat)spacing];
    }
}

int ns_gridview_number_of_rows(uintptr_t grid)
{
    void *ptr = ns_view_nsview(grid);
    if (!ptr) {
        return 0;
    }
    @autoreleasepool {
        NSView *view = (__bridge NSView *)ptr;
        if (![view isKindOfClass:[NSGridView class]]) {
            return 0;
        }
        return (int)[(NSGridView *)view numberOfRows];
    }
}

int ns_gridview_number_of_columns(uintptr_t grid)
{
    void *ptr = ns_view_nsview(grid);
    if (!ptr) {
        return 0;
    }
    @autoreleasepool {
        NSView *view = (__bridge NSView *)ptr;
        if (![view isKindOfClass:[NSGridView class]]) {
            return 0;
        }
        return (int)[(NSGridView *)view numberOfColumns];
    }
}

uintptr_t ns_gridview_row_at(uintptr_t grid, int index)
{
    void *ptr = ns_view_nsview(grid);
    if (!ptr || index < 0) {
        return 0;
    }
    @autoreleasepool {
        NSView *view = (__bridge NSView *)ptr;
        if (![view isKindOfClass:[NSGridView class]]) {
            return 0;
        }
        NSGridView *typed = (NSGridView *)view;
        if (index >= (int)typed.numberOfRows) {
            return 0;
        }
        return ns_gridrow_wrap((__bridge void *)[typed rowAtIndex:index]);
    }
}

uintptr_t ns_gridview_column_at(uintptr_t grid, int index)
{
    void *ptr = ns_view_nsview(grid);
    if (!ptr || index < 0) {
        return 0;
    }
    @autoreleasepool {
        NSView *view = (__bridge NSView *)ptr;
        if (![view isKindOfClass:[NSGridView class]]) {
            return 0;
        }
        NSGridView *typed = (NSGridView *)view;
        if (index >= (int)typed.numberOfColumns) {
            return 0;
        }
        return ns_gridcolumn_wrap((__bridge void *)[typed columnAtIndex:index]);
    }
}

uintptr_t ns_gridview_cell_at(uintptr_t grid, int column, int row)
{
    void *ptr = ns_view_nsview(grid);
    if (!ptr || column < 0 || row < 0) {
        return 0;
    }
    @autoreleasepool {
        NSView *view = (__bridge NSView *)ptr;
        if (![view isKindOfClass:[NSGridView class]]) {
            return 0;
        }
        NSGridView *typed = (NSGridView *)view;
        if (column >= (int)typed.numberOfColumns || row >= (int)typed.numberOfRows) {
            return 0;
        }
        return ns_gridcell_wrap((__bridge void *)[typed cellAtColumnIndex:column rowIndex:row]);
    }
}

double ns_gridview_size_for_content(void)
{
    return (double)NSGridViewSizeForContent;
}
