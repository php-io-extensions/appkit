#import <AppKit/AppKit.h>
#import "ns-collectionviewdiffable.h"
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

@interface NSPhpCollectionDiffableItem : NSCollectionViewItem
@end

@implementation NSPhpCollectionDiffableItem
- (void)loadView
{
    NSTextField *label = [NSTextField labelWithString:@""];
    [label setAlignment:NSTextAlignmentCenter];
    self.textField = label;
    self.view = label;
}
@end

@interface NSPhpCollectionDiffableBox : NSObject
@property (nonatomic, strong) NSCollectionViewDiffableDataSource *source;
@property (nonatomic, strong) NSMutableDictionary<NSString *, NSString *> *titles;
@end

@implementation NSPhpCollectionDiffableBox
@end

static NSPhpCollectionDiffableBox *ns_collectionviewdiffable_box(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSPhpCollectionDiffableBox class]] ? (NSPhpCollectionDiffableBox *)obj : nil;
}

uintptr_t ns_collectionviewdiffable_create(uintptr_t collection)
{
    void *ptr = ns_view_nsview(collection);
    if (!ptr) {
        return 0;
    }
    @autoreleasepool {
        NSView *view = (__bridge NSView *)ptr;
        if (![view isKindOfClass:[NSCollectionView class]]) {
            return 0;
        }
        NSCollectionView *cv = (NSCollectionView *)view;
        [cv registerClass:[NSPhpCollectionDiffableItem class] forItemWithIdentifier:@"php.diffable.item"];
        NSPhpCollectionDiffableBox *box = [NSPhpCollectionDiffableBox new];
        box.titles = [NSMutableDictionary dictionary];
        box.source = [[NSCollectionViewDiffableDataSource alloc] initWithCollectionView:cv
            itemProvider:^NSCollectionViewItem * _Nullable(NSCollectionView *collectionView, NSIndexPath *indexPath, id itemId) {
                NSCollectionViewItem *item = [collectionView makeItemWithIdentifier:@"php.diffable.item" forIndexPath:indexPath];
                NSString *key = [itemId description];
                NSString *title = box.titles[key];
                if (item.textField) {
                    item.textField.stringValue = title ?: key;
                }
                return item;
            }];
        return ns_retain_obj(box);
    }
}

void ns_collectionviewdiffable_destroy(uintptr_t source)
{
    ns_release_handle(source);
}

void ns_collectionviewdiffable_set_item_title(uintptr_t source, const char *item_id, const char *title)
{
    @autoreleasepool {
        NSPhpCollectionDiffableBox *box = ns_collectionviewdiffable_box(source);
        if (!box || !item_id) {
            return;
        }
        NSString *key = [NSString stringWithUTF8String:item_id];
        box.titles[key] = title ? [NSString stringWithUTF8String:title] : @"";
    }
}

void ns_collectionviewdiffable_apply(uintptr_t source, const char *section_id, const char **item_ids, int item_count, int animating)
{
    @autoreleasepool {
        NSPhpCollectionDiffableBox *box = ns_collectionviewdiffable_box(source);
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

int ns_collectionviewdiffable_item_count(uintptr_t source)
{
    @autoreleasepool {
        NSPhpCollectionDiffableBox *box = ns_collectionviewdiffable_box(source);
        if (!box || !box.source) {
            return 0;
        }
        return (int)[box.source snapshot].numberOfItems;
    }
}

int ns_collectionviewdiffable_item_id_at(uintptr_t source, int index, char *out, int out_len)
{
    @autoreleasepool {
        NSPhpCollectionDiffableBox *box = ns_collectionviewdiffable_box(source);
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
