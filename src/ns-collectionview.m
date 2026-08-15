#import <AppKit/AppKit.h>
#import "ns-collectionview.h"
#import "ns-collectionviewlayout.h"
#import "ns-view.h"

@interface NSPhpCollectionItem : NSCollectionViewItem
@end

@implementation NSPhpCollectionItem
- (void)loadView
{
    NSTextField *label = [NSTextField labelWithString:@""];
    [label setAlignment:NSTextAlignmentCenter];
    self.textField = label;
    self.view = label;
}
@end

@interface NSPhpCollectionView : NSCollectionView <NSCollectionViewDataSource, NSCollectionViewDelegate>
@property (nonatomic, strong) NSMutableArray<NSString *> *items;
@property (nonatomic, assign) int pendingChange;
@end

@implementation NSPhpCollectionView

- (NSInteger)collectionView:(NSCollectionView *)collectionView numberOfItemsInSection:(NSInteger)section
{
    (void)collectionView;
    (void)section;
    return (NSInteger)self.items.count;
}

- (NSCollectionViewItem *)collectionView:(NSCollectionView *)collectionView itemForRepresentedObjectAtIndexPath:(NSIndexPath *)indexPath
{
    NSCollectionViewItem *item = [collectionView makeItemWithIdentifier:@"item" forIndexPath:indexPath];
    NSInteger index = [indexPath item];
    if (index >= 0 && (NSUInteger)index < self.items.count) {
        item.textField.stringValue = self.items[(NSUInteger)index];
    }
    return item;
}

- (void)collectionView:(NSCollectionView *)collectionView didSelectItemsAtIndexPaths:(NSSet<NSIndexPath *> *)indexPaths
{
    (void)collectionView;
    (void)indexPaths;
    self.pendingChange = 1;
}

@end

uintptr_t ns_collectionview_create(double x, double y, double width, double height)
{
    if (width <= 0) {
        width = 240;
    }
    if (height <= 0) {
        height = 160;
    }

    @autoreleasepool {
        NSRect rect = NSMakeRect((CGFloat)x, (CGFloat)y, (CGFloat)width, (CGFloat)height);
        NSCollectionViewFlowLayout *layout = [[NSCollectionViewFlowLayout alloc] init];
        layout.itemSize = NSMakeSize(96.0, 32.0);
        layout.minimumInteritemSpacing = 8.0;
        layout.minimumLineSpacing = 8.0;
        NSPhpCollectionView *collection = [[NSPhpCollectionView alloc] initWithFrame:rect];
        collection.items = [NSMutableArray array];
        [collection setCollectionViewLayout:layout];
        [collection registerClass:[NSPhpCollectionItem class] forItemWithIdentifier:@"item"];
        [collection setDataSource:collection];
        [collection setDelegate:collection];
        [collection setSelectable:YES];
        [collection setAllowsMultipleSelection:NO];
        return ns_view_wrap((__bridge void *)collection);
    }
}

void ns_collectionview_destroy(uintptr_t collection)
{
    ns_view_destroy(collection);
}

void ns_collectionview_clear(uintptr_t collection)
{
    void *ptr = ns_view_nsview(collection);
    if (!ptr) {
        return;
    }

    @autoreleasepool {
        NSView *view = (__bridge NSView *)ptr;
        if (![view isKindOfClass:[NSPhpCollectionView class]]) {
            return;
        }
        NSPhpCollectionView *typed = (NSPhpCollectionView *)view;
        [typed.items removeAllObjects];
        [typed reloadData];
    }
}

void ns_collectionview_add_item(uintptr_t collection, const char *title)
{
    void *ptr = ns_view_nsview(collection);
    if (!ptr) {
        return;
    }

    @autoreleasepool {
        NSView *view = (__bridge NSView *)ptr;
        if (![view isKindOfClass:[NSPhpCollectionView class]]) {
            return;
        }
        NSPhpCollectionView *typed = (NSPhpCollectionView *)view;
        [typed.items addObject:title ? [NSString stringWithUTF8String:title] : @""];
        [typed reloadData];
    }
}

int ns_collectionview_item_count(uintptr_t collection)
{
    void *ptr = ns_view_nsview(collection);
    if (!ptr) {
        return 0;
    }

    @autoreleasepool {
        NSView *view = (__bridge NSView *)ptr;
        if (![view isKindOfClass:[NSPhpCollectionView class]]) {
            return 0;
        }
        return (int)((NSPhpCollectionView *)view).items.count;
    }
}

int ns_collectionview_get_selected(uintptr_t collection)
{
    void *ptr = ns_view_nsview(collection);
    if (!ptr) {
        return -1;
    }

    @autoreleasepool {
        NSView *view = (__bridge NSView *)ptr;
        if (![view isKindOfClass:[NSCollectionView class]]) {
            return -1;
        }
        NSIndexPath *path = [[(NSCollectionView *)view selectionIndexPaths] anyObject];
        return path ? (int)[path item] : -1;
    }
}

void ns_collectionview_set_selected(uintptr_t collection, int index)
{
    void *ptr = ns_view_nsview(collection);
    if (!ptr) {
        return;
    }

    @autoreleasepool {
        NSView *view = (__bridge NSView *)ptr;
        if (![view isKindOfClass:[NSCollectionView class]]) {
            return;
        }
        NSCollectionView *typed = (NSCollectionView *)view;
        if (index < 0) {
            [typed deselectAll:nil];
            return;
        }
        NSIndexPath *path = [NSIndexPath indexPathForItem:index inSection:0];
        [typed setSelectionIndexPaths:[NSSet setWithObject:path]];
    }
}

int ns_collectionview_poll_change(uintptr_t collection)
{
    void *ptr = ns_view_nsview(collection);
    if (!ptr) {
        return 0;
    }

    @autoreleasepool {
        NSView *view = (__bridge NSView *)ptr;
        if (![view isKindOfClass:[NSPhpCollectionView class]]) {
            return 0;
        }
        NSPhpCollectionView *typed = (NSPhpCollectionView *)view;
        if (typed.pendingChange != 1) {
            return 0;
        }
        typed.pendingChange = 0;
        return 1;
    }
}

void ns_collectionview_set_layout(uintptr_t collection, uintptr_t layout)
{
    void *ptr = ns_view_nsview(collection);
    void *lay = ns_collectionviewlayout_nscollectionviewlayout(layout);
    if (!ptr || !lay) {
        return;
    }
    @autoreleasepool {
        NSView *view = (__bridge NSView *)ptr;
        if (![view isKindOfClass:[NSCollectionView class]]) {
            return;
        }
        [(NSCollectionView *)view setCollectionViewLayout:(__bridge NSCollectionViewLayout *)lay];
    }
}

uintptr_t ns_collectionview_get_layout(uintptr_t collection)
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
        NSCollectionViewLayout *layout = [(NSCollectionView *)view collectionViewLayout];
        return layout ? ns_collectionviewlayout_wrap((__bridge void *)layout) : 0;
    }
}
