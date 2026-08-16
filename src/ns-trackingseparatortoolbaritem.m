#import <AppKit/AppKit.h>
#import "ns-trackingseparatortoolbaritem.h"
#import "ns-toolbaritem.h"
#import "ns-view.h"

static uintptr_t ns_retain_obj(id object)
{
    return object ? (uintptr_t)(__bridge_retained void *)object : 0;
}

static NSTrackingSeparatorToolbarItem *ns_trackingseparatortoolbaritem_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSTrackingSeparatorToolbarItem class]] ? (NSTrackingSeparatorToolbarItem *)obj : nil;
}

static NSSplitView *ns_splitview_from_handle(uintptr_t handle)
{
    void *ptr = ns_view_nsview(handle);
    if (!ptr) {
        return nil;
    }
    NSView *view = (__bridge NSView *)ptr;
    return [view isKindOfClass:[NSSplitView class]] ? (NSSplitView *)view : nil;
}

uintptr_t ns_trackingseparatortoolbaritem_create(const char *identifier)
{
    @autoreleasepool {
        if (@available(macOS 11.0, *)) {
            NSString *ident = identifier ? [NSString stringWithUTF8String:identifier] : @"ns.toolbar.tracking.separator";
            return ns_retain_obj([[NSTrackingSeparatorToolbarItem alloc] initWithItemIdentifier:ident]);
        }
        return 0;
    }
}

uintptr_t ns_trackingseparatortoolbaritem_tracking_separator(const char *identifier, uintptr_t splitView, int dividerIndex)
{
    @autoreleasepool {
        if (@available(macOS 11.0, *)) {
            NSString *ident = identifier ? [NSString stringWithUTF8String:identifier] : @"ns.toolbar.tracking.separator";
            NSSplitView *split = ns_splitview_from_handle(splitView);
            if (!split) {
                return 0;
            }
            NSTrackingSeparatorToolbarItem *item = [NSTrackingSeparatorToolbarItem trackingSeparatorToolbarItemWithIdentifier:ident
                                                                                                                    splitView:split
                                                                                                               dividerIndex:dividerIndex];
            return item ? ns_retain_obj(item) : 0;
        }
        return 0;
    }
}

uintptr_t ns_trackingseparatortoolbaritem_wrap(void *item)
{
    if (!item) {
        return 0;
    }
    @autoreleasepool {
        NSTrackingSeparatorToolbarItem *obj = (__bridge NSTrackingSeparatorToolbarItem *)item;
        return [obj isKindOfClass:[NSTrackingSeparatorToolbarItem class]] ? ns_retain_obj(obj) : 0;
    }
}

void ns_trackingseparatortoolbaritem_destroy(uintptr_t item)
{
    ns_toolbaritem_destroy(item);
}

void *ns_trackingseparatortoolbaritem_nstrackingseparatortoolbaritem(uintptr_t item)
{
    NSTrackingSeparatorToolbarItem *obj = ns_trackingseparatortoolbaritem_from(item);
    return obj ? (__bridge void *)obj : NULL;
}

void ns_trackingseparatortoolbaritem_set_split_view(uintptr_t item, uintptr_t splitView)
{
    @autoreleasepool {
        NSTrackingSeparatorToolbarItem *obj = ns_trackingseparatortoolbaritem_from(item);
        NSSplitView *split = ns_splitview_from_handle(splitView);
        if (obj && split) {
            if (@available(macOS 11.0, *)) {
                obj.splitView = split;
            }
        }
    }
}

uintptr_t ns_trackingseparatortoolbaritem_get_split_view(uintptr_t item)
{
    @autoreleasepool {
        NSTrackingSeparatorToolbarItem *obj = ns_trackingseparatortoolbaritem_from(item);
        if (!obj) {
            return 0;
        }
        if (@available(macOS 11.0, *)) {
            return obj.splitView ? ns_view_wrap((__bridge void *)obj.splitView) : 0;
        }
        return 0;
    }
}

void ns_trackingseparatortoolbaritem_set_divider_index(uintptr_t item, int dividerIndex)
{
    @autoreleasepool {
        NSTrackingSeparatorToolbarItem *obj = ns_trackingseparatortoolbaritem_from(item);
        if (obj) {
            if (@available(macOS 11.0, *)) {
                obj.dividerIndex = dividerIndex;
            }
        }
    }
}

int ns_trackingseparatortoolbaritem_get_divider_index(uintptr_t item)
{
    @autoreleasepool {
        NSTrackingSeparatorToolbarItem *obj = ns_trackingseparatortoolbaritem_from(item);
        if (!obj) {
            return 0;
        }
        if (@available(macOS 11.0, *)) {
            return (int)obj.dividerIndex;
        }
        return 0;
    }
}
