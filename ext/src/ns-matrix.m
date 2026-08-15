#import <AppKit/AppKit.h>
#import "ns-matrix.h"
#import "ns-cell.h"
#import "ns-view.h"

static NSMatrix *ns_matrix_view(uintptr_t handle)
{
    void *ptr = ns_view_nsview(handle);
    if (!ptr) {
        return nil;
    }
    NSView *view = (__bridge NSView *)ptr;
    return [view isKindOfClass:[NSMatrix class]] ? (NSMatrix *)view : nil;
}


uintptr_t ns_matrix_create(double x, double y, double width, double height)
{
    if (width <= 0) {
        width = 120;
    }
    if (height <= 0) {
        height = 80;
    }
    @autoreleasepool {
        NSRect rect = NSMakeRect((CGFloat)x, (CGFloat)y, (CGFloat)width, (CGFloat)height);
        NSMatrix *obj = [[NSMatrix alloc] initWithFrame:rect];
        [obj setMode:NSRadioModeMatrix];
        return ns_view_wrap((__bridge void *)obj);
    }
}

void ns_matrix_destroy(uintptr_t handle)
{
    ns_view_destroy(handle);
}


void ns_matrix_set_mode(uintptr_t matrix, int mode)
{
    @autoreleasepool {
        NSMatrix *obj = ns_matrix_view(matrix);
        if (obj) {
            obj.mode = (NSMatrixMode)mode;
        }
    }
}

int ns_matrix_get_mode(uintptr_t matrix)
{
    @autoreleasepool {
        NSMatrix *obj = ns_matrix_view(matrix);
        return obj ? (int)obj.mode : 0;
    }
}

int ns_matrix_number_of_rows(uintptr_t matrix)
{
    @autoreleasepool {
        NSMatrix *obj = ns_matrix_view(matrix);
        return obj ? (int)obj.numberOfRows : 0;
    }
}

int ns_matrix_number_of_columns(uintptr_t matrix)
{
    @autoreleasepool {
        NSMatrix *obj = ns_matrix_view(matrix);
        return obj ? (int)obj.numberOfColumns : 0;
    }
}

void ns_matrix_add_row(uintptr_t matrix)
{
    @autoreleasepool {
        NSMatrix *obj = ns_matrix_view(matrix);
        if (obj) {
            [obj addRow];
        }
    }
}

void ns_matrix_add_column(uintptr_t matrix)
{
    @autoreleasepool {
        NSMatrix *obj = ns_matrix_view(matrix);
        if (obj) {
            [obj addColumn];
        }
    }
}

int ns_matrix_selected_row(uintptr_t matrix)
{
    @autoreleasepool {
        NSMatrix *obj = ns_matrix_view(matrix);
        return obj ? (int)obj.selectedRow : -1;
    }
}

int ns_matrix_selected_column(uintptr_t matrix)
{
    @autoreleasepool {
        NSMatrix *obj = ns_matrix_view(matrix);
        return obj ? (int)obj.selectedColumn : -1;
    }
}

void ns_matrix_select_cell_at(uintptr_t matrix, int row, int column)
{
    @autoreleasepool {
        NSMatrix *obj = ns_matrix_view(matrix);
        if (obj) {
            [obj selectCellAtRow:row column:column];
        }
    }
}

uintptr_t ns_matrix_cell_at(uintptr_t matrix, int row, int column)
{
    @autoreleasepool {
        NSMatrix *obj = ns_matrix_view(matrix);
        if (!obj) {
            return 0;
        }
        NSCell *cell = [obj cellAtRow:row column:column];
        return ns_cell_wrap((__bridge void *)cell);
    }
}
