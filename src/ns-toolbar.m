#import <AppKit/AppKit.h>
#import "ns-toolbar.h"
#import "ns-window.h"

static uintptr_t ns_toolbar_retain_obj(id object)
{
    return object ? (uintptr_t)(__bridge_retained void *)object : 0;
}

static id ns_toolbar_bridge_obj(uintptr_t handle)
{
    return handle ? (__bridge id)(void *)handle : nil;
}

static int ns_toolbar_copy_nsstring(NSString *text, char *out, int out_len)
{
    if (!out || out_len <= 0) {
        return 0;
    }
    if (!text) {
        out[0] = '\0';
        return 0;
    }
    return [text getCString:out maxLength:(NSUInteger)out_len encoding:NSUTF8StringEncoding] ? 1 : 0;
}

@interface NSPhpToolbar : NSObject <NSToolbarDelegate>
@property (nonatomic, strong) NSToolbar *toolbar;
@property (nonatomic, strong) NSMutableArray<NSString *> *identifiers;
@property (nonatomic, strong) NSMutableDictionary<NSString *, NSString *> *titles;
@property (nonatomic, strong) NSMutableDictionary<NSString *, NSString *> *actions;
@property (nonatomic, strong) NSString *pendingAction;
@end

@implementation NSPhpToolbar

- (NSArray<NSToolbarItemIdentifier> *)toolbarAllowedItemIdentifiers:(NSToolbar *)toolbar
{
    (void)toolbar;
    return [self.identifiers copy];
}

- (NSArray<NSToolbarItemIdentifier> *)toolbarDefaultItemIdentifiers:(NSToolbar *)toolbar
{
    (void)toolbar;
    return [self.identifiers copy];
}

- (NSToolbarItem *)toolbar:(NSToolbar *)toolbar itemForItemIdentifier:(NSToolbarItemIdentifier)itemIdentifier willBeInsertedIntoToolbar:(BOOL)flag
{
    (void)toolbar;
    (void)flag;
    NSToolbarItem *item = [[NSToolbarItem alloc] initWithItemIdentifier:itemIdentifier];
    [item setLabel:self.titles[itemIdentifier] ?: @""];
    [item setTarget:self];
    [item setAction:@selector(nsClicked:)];
    return item;
}

- (void)nsClicked:(NSToolbarItem *)sender
{
    NSString *action = self.actions[sender.itemIdentifier];
    self.pendingAction = action ?: @"";
}

@end

uintptr_t ns_toolbar_create(void)
{
    @autoreleasepool {
        static int serial = 1;
        NSPhpToolbar *box = [NSPhpToolbar new];
        box.identifiers = [NSMutableArray array];
        box.titles = [NSMutableDictionary dictionary];
        box.actions = [NSMutableDictionary dictionary];
        box.pendingAction = @"";
        NSString *ident = [NSString stringWithFormat:@"ns.toolbar.%d", serial++];
        box.toolbar = [[NSToolbar alloc] initWithIdentifier:ident];
        [box.toolbar setDelegate:box];
        [box.toolbar setDisplayMode:NSToolbarDisplayModeIconAndLabel];
        return ns_toolbar_retain_obj(box);
    }
}

void ns_toolbar_destroy(uintptr_t toolbar)
{
    if (!toolbar) {
        return;
    }
    @autoreleasepool {
        NSPhpToolbar *box = ns_toolbar_bridge_obj(toolbar);
        [box.toolbar setDelegate:nil];
    }
    CFRelease((void *)toolbar);
}

void ns_toolbar_add_item(uintptr_t toolbar, const char *title, const char *action_id)
{
    @autoreleasepool {
        NSPhpToolbar *box = ns_toolbar_bridge_obj(toolbar);
        if (!box) {
            return;
        }
        NSString *action = action_id ? [NSString stringWithUTF8String:action_id] : @"";
        NSString *ident = [NSString stringWithFormat:@"ns.item.%lu", (unsigned long)box.identifiers.count];
        [box.identifiers addObject:ident];
        box.titles[ident] = title ? [NSString stringWithUTF8String:title] : @"";
        box.actions[ident] = action;
        [box.toolbar insertItemWithItemIdentifier:ident atIndex:(NSInteger)box.identifiers.count - 1];
    }
}

int ns_toolbar_install(uintptr_t toolbar, uintptr_t window)
{
    void *nswindow = ns_window_nswindow(window);
    if (!nswindow) {
        return 0;
    }
    @autoreleasepool {
        NSPhpToolbar *box = ns_toolbar_bridge_obj(toolbar);
        if (!box) {
            return 0;
        }
        [(__bridge NSWindow *)nswindow setToolbar:box.toolbar];
        return 1;
    }
}

int ns_toolbar_poll_action(uintptr_t toolbar, char *out, int out_len)
{
    @autoreleasepool {
        NSPhpToolbar *box = ns_toolbar_bridge_obj(toolbar);
        if (!box || box.pendingAction.length == 0) {
            if (out && out_len > 0) {
                out[0] = '\0';
            }
            return 0;
        }
        int ok = ns_toolbar_copy_nsstring(box.pendingAction, out, out_len);
        box.pendingAction = @"";
        return ok;
    }
}
