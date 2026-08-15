#import <AppKit/AppKit.h>
#import "ns-statusitem.h"
#import "ns-view.h"

static uintptr_t ns_statusitem_retain_obj(id object)
{
    return object ? (uintptr_t)(__bridge_retained void *)object : 0;
}

static id ns_statusitem_bridge_obj(uintptr_t handle)
{
    return handle ? (__bridge id)(void *)handle : nil;
}

@interface NSPhpStatusItem : NSObject
@property (nonatomic, strong) NSStatusItem *item;
@property (nonatomic, assign) int pendingClick;
@end

@implementation NSPhpStatusItem
- (void)nsClicked:(id)sender
{
    (void)sender;
    self.pendingClick = 1;
}
@end

uintptr_t ns_statusitem_create(const char *title)
{
    @autoreleasepool {
        NSPhpStatusItem *box = [NSPhpStatusItem new];
        box.item = [[NSStatusBar systemStatusBar] statusItemWithLength:NSVariableStatusItemLength];
        box.item.button.title = title ? [NSString stringWithUTF8String:title] : @"";
        box.item.button.target = box;
        box.item.button.action = @selector(nsClicked:);
        return ns_statusitem_retain_obj(box);
    }
}

uintptr_t ns_statusitem_wrap_native(void *item)
{
    if (!item) {
        return 0;
    }
    @autoreleasepool {
        NSStatusItem *native = (__bridge NSStatusItem *)item;
        if (![native isKindOfClass:[NSStatusItem class]]) {
            return 0;
        }
        NSPhpStatusItem *box = [NSPhpStatusItem new];
        box.item = native;
        box.item.button.target = box;
        box.item.button.action = @selector(nsClicked:);
        return ns_statusitem_retain_obj(box);
    }
}

void *ns_statusitem_nsstatusitem(uintptr_t item)
{
    if (!item) {
        return NULL;
    }
    @autoreleasepool {
        NSPhpStatusItem *box = ns_statusitem_bridge_obj(item);
        return box && box.item ? (__bridge void *)box.item : NULL;
    }
}

void ns_statusitem_destroy(uintptr_t item)
{
    if (!item) {
        return;
    }
    @autoreleasepool {
        NSPhpStatusItem *box = ns_statusitem_bridge_obj(item);
        if (box.item) {
            [[NSStatusBar systemStatusBar] removeStatusItem:box.item];
            box.item = nil;
        }
    }
    CFRelease((void *)item);
}

void ns_statusitem_set_title(uintptr_t item, const char *title)
{
    @autoreleasepool {
        NSPhpStatusItem *box = ns_statusitem_bridge_obj(item);
        if (!box) {
            return;
        }
        box.item.button.title = title ? [NSString stringWithUTF8String:title] : @"";
    }
}

int ns_statusitem_poll_click(uintptr_t item)
{
    @autoreleasepool {
        NSPhpStatusItem *box = ns_statusitem_bridge_obj(item);
        if (!box || box.pendingClick != 1) {
            return 0;
        }
        box.pendingClick = 0;
        return 1;
    }
}

uintptr_t ns_statusitem_button(uintptr_t item)
{
    @autoreleasepool {
        NSPhpStatusItem *box = ns_statusitem_bridge_obj(item);
        if (!box || !box.item || !box.item.button) {
            return 0;
        }
        return ns_view_wrap((__bridge void *)box.item.button);
    }
}
