#import <AppKit/AppKit.h>
#import "ns-outlineview.h"
#import "ns-view.h"

@interface NSPhpOutlineNode : NSObject
@property (nonatomic, assign) int itemId;
@property (nonatomic, strong) NSString *title;
@property (nonatomic, weak) NSPhpOutlineNode *parent;
@property (nonatomic, strong) NSMutableArray<NSPhpOutlineNode *> *children;
@end

@implementation NSPhpOutlineNode
@end

@interface NSPhpOutlineView : NSOutlineView <NSOutlineViewDataSource, NSOutlineViewDelegate>
@property (nonatomic, strong) NSMutableArray<NSPhpOutlineNode *> *roots;
@property (nonatomic, strong) NSMutableArray<NSPhpOutlineNode *> *all;
@property (nonatomic, assign) int nextId;
@property (nonatomic, assign) int pendingChange;
@end

@implementation NSPhpOutlineView

- (NSPhpOutlineNode *)nsNodeById:(int)itemId
{
    for (NSPhpOutlineNode *node in self.all) {
        if (node.itemId == itemId) {
            return node;
        }
    }
    return nil;
}

- (NSInteger)outlineView:(NSOutlineView *)outlineView numberOfChildrenOfItem:(id)item
{
    (void)outlineView;
    if (!item) {
        return (NSInteger)self.roots.count;
    }
    return (NSInteger)((NSPhpOutlineNode *)item).children.count;
}

- (id)outlineView:(NSOutlineView *)outlineView child:(NSInteger)index ofItem:(id)item
{
    (void)outlineView;
    NSArray<NSPhpOutlineNode *> *list = item ? ((NSPhpOutlineNode *)item).children : self.roots;
    if (index < 0 || (NSUInteger)index >= list.count) {
        return nil;
    }
    return list[(NSUInteger)index];
}

- (BOOL)outlineView:(NSOutlineView *)outlineView isItemExpandable:(id)item
{
    (void)outlineView;
    return ((NSPhpOutlineNode *)item).children.count > 0;
}

- (id)outlineView:(NSOutlineView *)outlineView objectValueForTableColumn:(NSTableColumn *)tableColumn byItem:(id)item
{
    (void)outlineView;
    (void)tableColumn;
    return ((NSPhpOutlineNode *)item).title ?: @"";
}

- (void)outlineViewSelectionDidChange:(NSNotification *)notification
{
    (void)notification;
    self.pendingChange = 1;
}

@end

uintptr_t ns_outlineview_create(double x, double y, double width, double height)
{
    if (width <= 0) {
        width = 240;
    }
    if (height <= 0) {
        height = 160;
    }

    @autoreleasepool {
        NSRect rect = NSMakeRect((CGFloat)x, (CGFloat)y, (CGFloat)width, (CGFloat)height);
        NSPhpOutlineView *outline = [[NSPhpOutlineView alloc] initWithFrame:rect];
        outline.roots = [NSMutableArray array];
        outline.all = [NSMutableArray array];
        outline.nextId = 1;
        NSTableColumn *column = [[NSTableColumn alloc] initWithIdentifier:@"col"];
        [column setTitle:@"Value"];
        [column setWidth:width - 16.0];
        [outline addTableColumn:column];
        [outline setOutlineTableColumn:column];
        [outline setHeaderView:nil];
        [outline setDataSource:outline];
        [outline setDelegate:outline];
        [outline setAllowsEmptySelection:YES];
        return ns_view_wrap((__bridge void *)outline);
    }
}

void ns_outlineview_destroy(uintptr_t outline)
{
    ns_view_destroy(outline);
}

void ns_outlineview_clear(uintptr_t outline)
{
    void *ptr = ns_view_nsview(outline);
    if (!ptr) {
        return;
    }

    @autoreleasepool {
        NSView *view = (__bridge NSView *)ptr;
        if (![view isKindOfClass:[NSPhpOutlineView class]]) {
            return;
        }
        NSPhpOutlineView *typed = (NSPhpOutlineView *)view;
        [typed.roots removeAllObjects];
        [typed.all removeAllObjects];
        typed.nextId = 1;
        [typed reloadData];
    }
}

int ns_outlineview_add_root(uintptr_t outline, const char *title)
{
    return ns_outlineview_add_child(outline, 0, title);
}

int ns_outlineview_add_child(uintptr_t outline, int parent_id, const char *title)
{
    void *ptr = ns_view_nsview(outline);
    if (!ptr) {
        return 0;
    }

    @autoreleasepool {
        NSView *view = (__bridge NSView *)ptr;
        if (![view isKindOfClass:[NSPhpOutlineView class]]) {
            return 0;
        }
        NSPhpOutlineView *typed = (NSPhpOutlineView *)view;
        NSPhpOutlineNode *parent = nil;
        if (parent_id > 0) {
            parent = [typed nsNodeById:parent_id];
            if (!parent) {
                return 0;
            }
        }
        NSPhpOutlineNode *node = [NSPhpOutlineNode new];
        node.itemId = typed.nextId++;
        node.title = title ? [NSString stringWithUTF8String:title] : @"";
        node.parent = parent;
        node.children = [NSMutableArray array];
        [typed.all addObject:node];
        if (parent) {
            [parent.children addObject:node];
        } else {
            [typed.roots addObject:node];
        }
        [typed reloadData];
        if (parent) {
            [typed expandItem:parent];
        }
        return node.itemId;
    }
}

int ns_outlineview_item_count(uintptr_t outline)
{
    void *ptr = ns_view_nsview(outline);
    if (!ptr) {
        return 0;
    }

    @autoreleasepool {
        NSView *view = (__bridge NSView *)ptr;
        if (![view isKindOfClass:[NSPhpOutlineView class]]) {
            return 0;
        }
        return (int)((NSPhpOutlineView *)view).all.count;
    }
}

int ns_outlineview_get_selected(uintptr_t outline)
{
    void *ptr = ns_view_nsview(outline);
    if (!ptr) {
        return 0;
    }

    @autoreleasepool {
        NSView *view = (__bridge NSView *)ptr;
        if (![view isKindOfClass:[NSPhpOutlineView class]]) {
            return 0;
        }
        NSPhpOutlineView *typed = (NSPhpOutlineView *)view;
        id item = [typed itemAtRow:[typed selectedRow]];
        if (![item isKindOfClass:[NSPhpOutlineNode class]]) {
            return 0;
        }
        return ((NSPhpOutlineNode *)item).itemId;
    }
}

void ns_outlineview_set_selected(uintptr_t outline, int item_id)
{
    void *ptr = ns_view_nsview(outline);
    if (!ptr) {
        return;
    }

    @autoreleasepool {
        NSView *view = (__bridge NSView *)ptr;
        if (![view isKindOfClass:[NSPhpOutlineView class]]) {
            return;
        }
        NSPhpOutlineView *typed = (NSPhpOutlineView *)view;
        if (item_id <= 0) {
            [typed deselectAll:nil];
            return;
        }
        NSPhpOutlineNode *node = [typed nsNodeById:item_id];
        if (!node) {
            return;
        }
        NSInteger row = [typed rowForItem:node];
        if (row < 0) {
            return;
        }
        [typed selectRowIndexes:[NSIndexSet indexSetWithIndex:(NSUInteger)row] byExtendingSelection:NO];
    }
}

int ns_outlineview_poll_change(uintptr_t outline)
{
    void *ptr = ns_view_nsview(outline);
    if (!ptr) {
        return 0;
    }

    @autoreleasepool {
        NSView *view = (__bridge NSView *)ptr;
        if (![view isKindOfClass:[NSPhpOutlineView class]]) {
            return 0;
        }
        NSPhpOutlineView *typed = (NSPhpOutlineView *)view;
        if (typed.pendingChange != 1) {
            return 0;
        }
        typed.pendingChange = 0;
        return 1;
    }
}
