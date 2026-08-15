#import <AppKit/AppKit.h>
#import "ns-tabviewitem.h"
#import "ns-viewcontroller.h"
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

static NSTabViewItem *ns_tabviewitem_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSTabViewItem class]] ? (NSTabViewItem *)obj : nil;
}

static NSViewController *ns_vc_from(uintptr_t handle)
{
    void *ptr = ns_viewcontroller_nsviewcontroller(handle);
    if (!ptr) {
        return nil;
    }
    id obj = (__bridge id)ptr;
    return [obj isKindOfClass:[NSViewController class]] ? (NSViewController *)obj : nil;
}

uintptr_t ns_tabviewitem_create(const char *identifier)
{
    @autoreleasepool {
        id ident = identifier ? [NSString stringWithUTF8String:identifier] : @"tab";
        return ns_retain_obj([[NSTabViewItem alloc] initWithIdentifier:ident]);
    }
}

uintptr_t ns_tabviewitem_create_with_view_controller(uintptr_t viewController)
{
    NSViewController *vc = ns_vc_from(viewController);
    if (!vc) {
        return 0;
    }
    @autoreleasepool {
        return ns_retain_obj([NSTabViewItem tabViewItemWithViewController:vc]);
    }
}

uintptr_t ns_tabviewitem_wrap(void *item)
{
    if (!item) {
        return 0;
    }
    @autoreleasepool {
        NSTabViewItem *obj = (__bridge NSTabViewItem *)item;
        return [obj isKindOfClass:[NSTabViewItem class]] ? ns_retain_obj(obj) : 0;
    }
}

void ns_tabviewitem_destroy(uintptr_t item)
{
    if (item) {
        CFRelease((void *)item);
    }
}

void *ns_tabviewitem_nstabviewitem(uintptr_t item)
{
    NSTabViewItem *obj = ns_tabviewitem_from(item);
    return obj ? (__bridge void *)obj : NULL;
}

void ns_tabviewitem_set_label(uintptr_t item, const char *label)
{
    @autoreleasepool {
        NSTabViewItem *obj = ns_tabviewitem_from(item);
        if (obj) {
            obj.label = label ? [NSString stringWithUTF8String:label] : @"";
        }
    }
}

int ns_tabviewitem_get_label(uintptr_t item, char *out, int out_len)
{
    @autoreleasepool {
        NSTabViewItem *obj = ns_tabviewitem_from(item);
        if (!obj) {
            return 0;
        }
        return ns_copy_nsstring(obj.label, out, out_len);
    }
}

void ns_tabviewitem_set_tool_tip(uintptr_t item, const char *tip)
{
    @autoreleasepool {
        NSTabViewItem *obj = ns_tabviewitem_from(item);
        if (obj) {
            obj.toolTip = tip ? [NSString stringWithUTF8String:tip] : nil;
        }
    }
}

int ns_tabviewitem_get_tool_tip(uintptr_t item, char *out, int out_len)
{
    @autoreleasepool {
        NSTabViewItem *obj = ns_tabviewitem_from(item);
        if (!obj) {
            return 0;
        }
        return ns_copy_nsstring(obj.toolTip, out, out_len);
    }
}

void ns_tabviewitem_set_view(uintptr_t item, uintptr_t view)
{
    void *ptr = ns_view_nsview(view);
    if (!ptr) {
        return;
    }
    @autoreleasepool {
        NSTabViewItem *obj = ns_tabviewitem_from(item);
        if (obj) {
            obj.view = (__bridge NSView *)ptr;
        }
    }
}

uintptr_t ns_tabviewitem_view(uintptr_t item)
{
    @autoreleasepool {
        NSTabViewItem *obj = ns_tabviewitem_from(item);
        NSView *view = obj ? obj.view : nil;
        return view ? ns_view_wrap((__bridge void *)view) : 0;
    }
}

void ns_tabviewitem_set_view_controller(uintptr_t item, uintptr_t viewController)
{
    NSViewController *vc = ns_vc_from(viewController);
    if (!vc) {
        return;
    }
    @autoreleasepool {
        NSTabViewItem *obj = ns_tabviewitem_from(item);
        if (obj) {
            obj.viewController = vc;
        }
    }
}

uintptr_t ns_tabviewitem_view_controller(uintptr_t item)
{
    @autoreleasepool {
        NSTabViewItem *obj = ns_tabviewitem_from(item);
        NSViewController *vc = obj ? obj.viewController : nil;
        return vc ? ns_viewcontroller_wrap((__bridge void *)vc) : 0;
    }
}

int ns_tabviewitem_get_tab_state(uintptr_t item)
{
    @autoreleasepool {
        NSTabViewItem *obj = ns_tabviewitem_from(item);
        return obj ? (int)obj.tabState : 1;
    }
}
