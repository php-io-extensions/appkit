#import <AppKit/AppKit.h>
#import <objc/runtime.h>
#import <string.h>
#import <stdlib.h>
#import "ns-protocol.h"
#import "ns-app.h"

#include "ns-protocol-names.h"

typedef struct ns_protocol_event {
    char protocol[128];
    char selector[256];
    uintptr_t sender;
    long long arg0;
    char arg1[4096];
    struct ns_protocol_event *next;
} ns_protocol_event;

static ns_protocol_event *ns_protocol_head = NULL;
static ns_protocol_event *ns_protocol_tail = NULL;
static const void *kNSPhpProtocolBridgeKey = &kNSPhpProtocolBridgeKey;

void ns_protocol_enqueue(const char *protocol, const char *selector, uintptr_t sender, long long arg0, const char *arg1)
{
    ns_protocol_event *ev = calloc(1, sizeof(ns_protocol_event));
    if (!ev) {
        return;
    }
    if (protocol) {
        strncpy(ev->protocol, protocol, sizeof(ev->protocol) - 1);
    }
    if (selector) {
        strncpy(ev->selector, selector, sizeof(ev->selector) - 1);
    }
    ev->sender = sender;
    ev->arg0 = arg0;
    if (arg1) {
        strncpy(ev->arg1, arg1, sizeof(ev->arg1) - 1);
    }
    if (ns_protocol_tail) {
        ns_protocol_tail->next = ev;
        ns_protocol_tail = ev;
    } else {
        ns_protocol_head = ns_protocol_tail = ev;
    }
}

@interface NSPhpProtocolBridge : NSObject <NSApplicationDelegate, NSWindowDelegate, NSTableViewDelegate, NSOutlineViewDelegate, NSCollectionViewDelegate, NSMenuDelegate, NSToolbarDelegate, NSTextViewDelegate, NSControlTextEditingDelegate, NSGestureRecognizerDelegate, NSDraggingSource, NSDraggingDestination, NSTouchBarProvider>
@property (nonatomic, copy) NSString *protocolName;
@property (nonatomic, weak) id target;
@end

@implementation NSPhpProtocolBridge

- (void)ns_php_note:(NSString *)sel sender:(id)sender arg0:(long long)arg0 arg1:(NSString *)arg1
{
    ns_protocol_enqueue(self.protocolName.UTF8String ?: "NSProtocol",
                        sel.UTF8String,
                        (uintptr_t)(__bridge void *)sender,
                        arg0,
                        arg1.UTF8String);
}

- (void)applicationWillFinishLaunching:(NSNotification *)notification
{
    [self ns_php_note:@"applicationWillFinishLaunching:" sender:notification.object arg0:0 arg1:nil];
}
- (void)applicationDidFinishLaunching:(NSNotification *)notification
{
    [self ns_php_note:@"applicationDidFinishLaunching:" sender:notification.object arg0:0 arg1:nil];
}
- (void)applicationWillBecomeActive:(NSNotification *)notification
{
    [self ns_php_note:@"applicationWillBecomeActive:" sender:notification.object arg0:0 arg1:nil];
}
- (void)applicationDidBecomeActive:(NSNotification *)notification
{
    [self ns_php_note:@"applicationDidBecomeActive:" sender:notification.object arg0:0 arg1:nil];
}
- (void)applicationWillResignActive:(NSNotification *)notification
{
    [self ns_php_note:@"applicationWillResignActive:" sender:notification.object arg0:0 arg1:nil];
}
- (void)applicationDidResignActive:(NSNotification *)notification
{
    [self ns_php_note:@"applicationDidResignActive:" sender:notification.object arg0:0 arg1:nil];
}
- (NSApplicationTerminateReply)applicationShouldTerminate:(NSApplication *)sender
{
    [self ns_php_note:@"applicationShouldTerminate:" sender:sender arg0:0 arg1:nil];
    return NSTerminateCancel;
}
- (void)windowDidBecomeKey:(NSNotification *)notification
{
    [self ns_php_note:@"windowDidBecomeKey:" sender:notification.object arg0:0 arg1:nil];
}
- (void)windowDidResignKey:(NSNotification *)notification
{
    [self ns_php_note:@"windowDidResignKey:" sender:notification.object arg0:0 arg1:nil];
}
- (void)windowDidResize:(NSNotification *)notification
{
    [self ns_php_note:@"windowDidResize:" sender:notification.object arg0:0 arg1:nil];
}
- (void)windowWillClose:(NSNotification *)notification
{
    [self ns_php_note:@"windowWillClose:" sender:notification.object arg0:0 arg1:nil];
}
- (BOOL)windowShouldClose:(NSWindow *)sender
{
    [self ns_php_note:@"windowShouldClose:" sender:sender arg0:0 arg1:nil];
    return YES;
}
- (void)tableViewSelectionDidChange:(NSNotification *)notification
{
    [self ns_php_note:@"tableViewSelectionDidChange:" sender:notification.object arg0:0 arg1:nil];
}
- (void)outlineViewSelectionDidChange:(NSNotification *)notification
{
    [self ns_php_note:@"outlineViewSelectionDidChange:" sender:notification.object arg0:0 arg1:nil];
}
- (void)collectionView:(NSCollectionView *)collectionView didSelectItemsAtIndexPaths:(NSSet<NSIndexPath *> *)indexPaths
{
    [self ns_php_note:@"collectionView:didSelectItemsAtIndexPaths:" sender:collectionView arg0:(long long)indexPaths.count arg1:nil];
}
- (void)menuWillOpen:(NSMenu *)menu
{
    [self ns_php_note:@"menuWillOpen:" sender:menu arg0:0 arg1:nil];
}
- (void)menuDidClose:(NSMenu *)menu
{
    [self ns_php_note:@"menuDidClose:" sender:menu arg0:0 arg1:nil];
}
- (NSArray<NSToolbarItemIdentifier> *)toolbarAllowedItemIdentifiers:(NSToolbar *)toolbar
{
    [self ns_php_note:@"toolbarAllowedItemIdentifiers:" sender:toolbar arg0:0 arg1:nil];
    return @[];
}
- (NSArray<NSToolbarItemIdentifier> *)toolbarDefaultItemIdentifiers:(NSToolbar *)toolbar
{
    [self ns_php_note:@"toolbarDefaultItemIdentifiers:" sender:toolbar arg0:0 arg1:nil];
    return @[];
}
- (NSToolbarItem *)toolbar:(NSToolbar *)toolbar itemForItemIdentifier:(NSToolbarItemIdentifier)itemIdentifier willBeInsertedIntoToolbar:(BOOL)flag
{
    [self ns_php_note:@"toolbar:itemForItemIdentifier:willBeInsertedIntoToolbar:" sender:toolbar arg0:flag ? 1 : 0 arg1:itemIdentifier];
    return nil;
}
- (void)textDidChange:(NSNotification *)notification
{
    [self ns_php_note:@"textDidChange:" sender:notification.object arg0:0 arg1:nil];
}
- (BOOL)control:(NSControl *)control textShouldEndEditing:(NSText *)fieldEditor
{
    [self ns_php_note:@"control:textShouldEndEditing:" sender:control arg0:0 arg1:nil];
    return YES;
}
- (BOOL)gestureRecognizerShouldBegin:(NSGestureRecognizer *)gestureRecognizer
{
    [self ns_php_note:@"gestureRecognizerShouldBegin:" sender:gestureRecognizer arg0:0 arg1:nil];
    return YES;
}
- (NSDragOperation)draggingSession:(NSDraggingSession *)session sourceOperationMaskForDraggingContext:(NSDraggingContext)context
{
    [self ns_php_note:@"draggingSession:sourceOperationMaskForDraggingContext:" sender:session arg0:(long long)context arg1:nil];
    return NSDragOperationCopy;
}
- (NSDragOperation)draggingEntered:(id<NSDraggingInfo>)sender
{
    [self ns_php_note:@"draggingEntered:" sender:nil arg0:0 arg1:nil];
    return NSDragOperationCopy;
}
- (BOOL)performDragOperation:(id<NSDraggingInfo>)sender
{
    [self ns_php_note:@"performDragOperation:" sender:nil arg0:0 arg1:nil];
    return YES;
}
- (NSTouchBar *)touchBar
{
    [self ns_php_note:@"touchBar" sender:self.target arg0:0 arg1:nil];
    return nil;
}

@end

static id ns_object_from_handle(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    void *shared = ns_app_shared();
    if (shared && handle == (uintptr_t)shared) {
        return NSApp;
    }
    id obj = (__bridge id)(void *)handle;
    if ([obj isKindOfClass:[NSObject class]]) {
        return obj;
    }
    return nil;
}

int ns_protocol_attach(uintptr_t object, const char *protocol_name)
{
    @autoreleasepool {
        if (!protocol_name) {
            return 0;
        }
        id target = ns_object_from_handle(object);
        if (!target) {
            target = NSApp;
        }
        NSPhpProtocolBridge *bridge = [NSPhpProtocolBridge new];
        bridge.protocolName = [NSString stringWithUTF8String:protocol_name];
        bridge.target = target;
        objc_setAssociatedObject(target, kNSPhpProtocolBridgeKey, bridge, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        if ([target respondsToSelector:@selector(setDelegate:)]) {
            [(id)target setDelegate:bridge];
        }
        return 1;
    }
}

int ns_protocol_poll(const char *protocol_filter, char *protocol_out, int protocol_len, char *selector_out, int selector_len, uintptr_t *sender, long long *arg0, char *arg1_out, int arg1_len)
{
    ns_protocol_event **link = &ns_protocol_head;
    ns_protocol_event *prev_tail_check = NULL;
    (void)prev_tail_check;
    while (*link) {
        ns_protocol_event *ev = *link;
        if (!protocol_filter || protocol_filter[0] == '\0' || strcmp(ev->protocol, protocol_filter) == 0) {
            *link = ev->next;
            if (ns_protocol_head == NULL) {
                ns_protocol_tail = NULL;
            } else if (ev == ns_protocol_tail) {
                ns_protocol_event *p = ns_protocol_head;
                while (p && p->next) {
                    p = p->next;
                }
                ns_protocol_tail = p;
            }
            if (protocol_out && protocol_len > 0) {
                strncpy(protocol_out, ev->protocol, (size_t)protocol_len - 1);
                protocol_out[protocol_len - 1] = '\0';
            }
            if (selector_out && selector_len > 0) {
                strncpy(selector_out, ev->selector, (size_t)selector_len - 1);
                selector_out[selector_len - 1] = '\0';
            }
            if (sender) {
                *sender = ev->sender;
            }
            if (arg0) {
                *arg0 = ev->arg0;
            }
            if (arg1_out && arg1_len > 0) {
                strncpy(arg1_out, ev->arg1, (size_t)arg1_len - 1);
                arg1_out[arg1_len - 1] = '\0';
            }
            free(ev);
            return 1;
        }
        link = &ev->next;
    }
    if (!ns_protocol_head) {
        ns_protocol_tail = NULL;
    }
    return 0;
}

int ns_protocol_known_count(void)
{
    return ns_protocol_known_n;
}

int ns_protocol_known_at(int index, char *out, int out_len)
{
    if (!out || out_len <= 0 || index < 0 || index >= ns_protocol_known_n) {
        return 0;
    }
    strncpy(out, ns_protocol_known[index], (size_t)out_len - 1);
    out[out_len - 1] = '\0';
    return 1;
}
