#import <AppKit/AppKit.h>
#import "ns-tableview.h"
#import "ns-view.h"

@interface NSPhpTableView : NSTableView <NSTableViewDataSource, NSTableViewDelegate>
@property (nonatomic, strong) NSMutableArray<NSString *> *rows;
@property (nonatomic, assign) int pendingChange;
@end

@implementation NSPhpTableView

- (NSInteger)numberOfRowsInTableView:(NSTableView *)tableView
{
    (void)tableView;
    return (NSInteger)self.rows.count;
}

- (id)tableView:(NSTableView *)tableView objectValueForTableColumn:(NSTableColumn *)tableColumn row:(NSInteger)row
{
    (void)tableView;
    (void)tableColumn;
    if (row < 0 || (NSUInteger)row >= self.rows.count) {
        return @"";
    }
    return self.rows[(NSUInteger)row];
}

- (void)tableViewSelectionDidChange:(NSNotification *)notification
{
    (void)notification;
    self.pendingChange = 1;
}

@end

uintptr_t ns_tableview_create(double x, double y, double width, double height)
{
    if (width <= 0) {
        width = 240;
    }
    if (height <= 0) {
        height = 160;
    }

    @autoreleasepool {
        NSRect rect = NSMakeRect((CGFloat)x, (CGFloat)y, (CGFloat)width, (CGFloat)height);
        NSPhpTableView *table = [[NSPhpTableView alloc] initWithFrame:rect];
        table.rows = [NSMutableArray array];
        NSTableColumn *column = [[NSTableColumn alloc] initWithIdentifier:@"col"];
        [column setTitle:@"Value"];
        [column setWidth:width - 16.0];
        [table addTableColumn:column];
        [table setHeaderView:nil];
        [table setDataSource:table];
        [table setDelegate:table];
        [table setAllowsEmptySelection:YES];
        return ns_view_wrap((__bridge void *)table);
    }
}

void ns_tableview_destroy(uintptr_t table)
{
    ns_view_destroy(table);
}

void ns_tableview_clear_rows(uintptr_t table)
{
    void *ptr = ns_view_nsview(table);
    if (!ptr) {
        return;
    }

    @autoreleasepool {
        NSView *view = (__bridge NSView *)ptr;
        if (![view isKindOfClass:[NSPhpTableView class]]) {
            return;
        }
        NSPhpTableView *typed = (NSPhpTableView *)view;
        [typed.rows removeAllObjects];
        [typed reloadData];
    }
}

void ns_tableview_add_row(uintptr_t table, const char *value)
{
    void *ptr = ns_view_nsview(table);
    if (!ptr) {
        return;
    }

    @autoreleasepool {
        NSView *view = (__bridge NSView *)ptr;
        if (![view isKindOfClass:[NSPhpTableView class]]) {
            return;
        }
        NSPhpTableView *typed = (NSPhpTableView *)view;
        [typed.rows addObject:value ? [NSString stringWithUTF8String:value] : @""];
        [typed reloadData];
    }
}

int ns_tableview_row_count(uintptr_t table)
{
    void *ptr = ns_view_nsview(table);
    if (!ptr) {
        return 0;
    }

    @autoreleasepool {
        NSView *view = (__bridge NSView *)ptr;
        if (![view isKindOfClass:[NSPhpTableView class]]) {
            return 0;
        }
        return (int)((NSPhpTableView *)view).rows.count;
    }
}

int ns_tableview_get_selected(uintptr_t table)
{
    void *ptr = ns_view_nsview(table);
    if (!ptr) {
        return -1;
    }

    @autoreleasepool {
        NSView *view = (__bridge NSView *)ptr;
        if (![view isKindOfClass:[NSTableView class]]) {
            return -1;
        }
        return (int)[(NSTableView *)view selectedRow];
    }
}

void ns_tableview_set_selected(uintptr_t table, int row)
{
    void *ptr = ns_view_nsview(table);
    if (!ptr) {
        return;
    }

    @autoreleasepool {
        NSView *view = (__bridge NSView *)ptr;
        if (![view isKindOfClass:[NSTableView class]]) {
            return;
        }
        if (row < 0) {
            [(NSTableView *)view deselectAll:nil];
            return;
        }
        [(NSTableView *)view selectRowIndexes:[NSIndexSet indexSetWithIndex:(NSUInteger)row] byExtendingSelection:NO];
    }
}

int ns_tableview_poll_change(uintptr_t table)
{
    void *ptr = ns_view_nsview(table);
    if (!ptr) {
        return 0;
    }

    @autoreleasepool {
        NSView *view = (__bridge NSView *)ptr;
        if (![view isKindOfClass:[NSPhpTableView class]]) {
            return 0;
        }
        NSPhpTableView *typed = (NSPhpTableView *)view;
        if (typed.pendingChange != 1) {
            return 0;
        }
        typed.pendingChange = 0;
        return 1;
    }
}
