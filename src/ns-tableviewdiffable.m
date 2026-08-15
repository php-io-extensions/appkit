#import <AppKit/AppKit.h>
#import "ns-tableviewdiffable.h"
#import "ns-view.h"

static int ns_copy_nsstring(NSString *text, char *out, int out_len)
{
    if (!out || out_len <= 0) {
        return 0;
    }
    if (!text) {
        out[0] = '\0';
        return 1;
    }
    return [text getCString:out maxLength:(NSUInteger)out_len encoding:NSUTF8StringEncoding] ? 1 : 0;
}


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


@interface NSPhpTableDiffableBox : NSObject
@property (nonatomic, strong) NSTableViewDiffableDataSource *source;
@property (nonatomic, strong) NSMutableDictionary<NSString *, NSString *> *titles;
@end

@implementation NSPhpTableDiffableBox
@end

static NSPhpTableDiffableBox *ns_tableviewdiffable_box(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSPhpTableDiffableBox class]] ? (NSPhpTableDiffableBox *)obj : nil;
}

uintptr_t ns_tableviewdiffable_create(uintptr_t table)
{
    void *ptr = ns_view_nsview(table);
    if (!ptr) {
        return 0;
    }
    @autoreleasepool {
        NSView *view = (__bridge NSView *)ptr;
        if (![view isKindOfClass:[NSTableView class]]) {
            return 0;
        }
        NSTableView *tv = (NSTableView *)view;
        NSPhpTableDiffableBox *box = [NSPhpTableDiffableBox new];
        box.titles = [NSMutableDictionary dictionary];
        box.source = [[NSTableViewDiffableDataSource alloc] initWithTableView:tv
            cellProvider:^NSView * _Nonnull(NSTableView *tableView, NSTableColumn *column, NSInteger row, id itemId) {
                (void)column;
                (void)row;
                NSString *ident = @"php.diffable.cell";
                NSTableCellView *cell = [tableView makeViewWithIdentifier:ident owner:nil];
                if (!cell) {
                    cell = [[NSTableCellView alloc] initWithFrame:NSMakeRect(0, 0, 120, 20)];
                    cell.identifier = ident;
                    NSTextField *field = [NSTextField labelWithString:@""];
                    field.frame = cell.bounds;
                    field.autoresizingMask = NSViewWidthSizable | NSViewHeightSizable;
                    cell.textField = field;
                    [cell addSubview:field];
                }
                NSString *key = [itemId description];
                NSString *title = box.titles[key];
                cell.textField.stringValue = title ?: key;
                return cell;
            }];
        return ns_retain_obj(box);
    }
}

void ns_tableviewdiffable_destroy(uintptr_t source)
{
    ns_release_handle(source);
}

void ns_tableviewdiffable_set_item_title(uintptr_t source, const char *item_id, const char *title)
{
    @autoreleasepool {
        NSPhpTableDiffableBox *box = ns_tableviewdiffable_box(source);
        if (!box || !item_id) {
            return;
        }
        NSString *key = [NSString stringWithUTF8String:item_id];
        box.titles[key] = title ? [NSString stringWithUTF8String:title] : @"";
    }
}

void ns_tableviewdiffable_apply(uintptr_t source, const char *section_id, const char **item_ids, int item_count, int animating)
{
    @autoreleasepool {
        NSPhpTableDiffableBox *box = ns_tableviewdiffable_box(source);
        if (!box || !box.source) {
            return;
        }
        NSString *section = section_id ? [NSString stringWithUTF8String:section_id] : @"main";
        NSMutableArray<NSString *> *items = [NSMutableArray array];
        if (item_ids && item_count > 0) {
            for (int i = 0; i < item_count; i++) {
                if (item_ids[i]) {
                    [items addObject:[NSString stringWithUTF8String:item_ids[i]]];
                }
            }
        }
        NSDiffableDataSourceSnapshot *snap = [[NSDiffableDataSourceSnapshot alloc] init];
        [snap appendSectionsWithIdentifiers:@[section]];
        [snap appendItemsWithIdentifiers:items intoSectionWithIdentifier:section];
        [box.source applySnapshot:snap animatingDifferences:animating ? YES : NO];
    }
}

int ns_tableviewdiffable_item_count(uintptr_t source)
{
    @autoreleasepool {
        NSPhpTableDiffableBox *box = ns_tableviewdiffable_box(source);
        if (!box || !box.source) {
            return 0;
        }
        return (int)[box.source snapshot].numberOfItems;
    }
}

int ns_tableviewdiffable_item_id_at(uintptr_t source, int index, char *out, int out_len)
{
    @autoreleasepool {
        NSPhpTableDiffableBox *box = ns_tableviewdiffable_box(source);
        if (!box || !box.source || index < 0) {
            return 0;
        }
        NSArray *ids = [[box.source snapshot] itemIdentifiers];
        if (index >= (int)ids.count) {
            return 0;
        }
        return ns_copy_nsstring([ids[(NSUInteger)index] description], out, out_len);
    }
}
