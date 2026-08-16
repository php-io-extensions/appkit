#import <AppKit/AppKit.h>
#import "ns-searchtoolbaritem.h"
#import "ns-toolbaritem.h"
#import "ns-view.h"

static uintptr_t ns_retain_obj(id object)
{
    return object ? (uintptr_t)(__bridge_retained void *)object : 0;
}

static NSSearchToolbarItem *ns_searchtoolbaritem_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSSearchToolbarItem class]] ? (NSSearchToolbarItem *)obj : nil;
}

static NSSearchField *ns_searchfield_from_handle(uintptr_t handle)
{
    void *ptr = ns_view_nsview(handle);
    if (!ptr) {
        return nil;
    }
    NSView *view = (__bridge NSView *)ptr;
    return [view isKindOfClass:[NSSearchField class]] ? (NSSearchField *)view : nil;
}

uintptr_t ns_searchtoolbaritem_create(const char *identifier)
{
    @autoreleasepool {
        if (@available(macOS 11.0, *)) {
            NSString *ident = identifier ? [NSString stringWithUTF8String:identifier] : @"ns.toolbar.search";
            return ns_retain_obj([[NSSearchToolbarItem alloc] initWithItemIdentifier:ident]);
        }
        return 0;
    }
}

uintptr_t ns_searchtoolbaritem_wrap(void *item)
{
    if (!item) {
        return 0;
    }
    @autoreleasepool {
        NSSearchToolbarItem *obj = (__bridge NSSearchToolbarItem *)item;
        return [obj isKindOfClass:[NSSearchToolbarItem class]] ? ns_retain_obj(obj) : 0;
    }
}

void ns_searchtoolbaritem_destroy(uintptr_t item)
{
    ns_toolbaritem_destroy(item);
}

void *ns_searchtoolbaritem_nssearchtoolbaritem(uintptr_t item)
{
    NSSearchToolbarItem *obj = ns_searchtoolbaritem_from(item);
    return obj ? (__bridge void *)obj : NULL;
}

void ns_searchtoolbaritem_set_search_field(uintptr_t item, uintptr_t searchField)
{
    @autoreleasepool {
        NSSearchToolbarItem *obj = ns_searchtoolbaritem_from(item);
        NSSearchField *field = ns_searchfield_from_handle(searchField);
        if (obj && field) {
            if (@available(macOS 11.0, *)) {
                obj.searchField = field;
            }
        }
    }
}

uintptr_t ns_searchtoolbaritem_get_search_field(uintptr_t item)
{
    @autoreleasepool {
        NSSearchToolbarItem *obj = ns_searchtoolbaritem_from(item);
        if (!obj) {
            return 0;
        }
        if (@available(macOS 11.0, *)) {
            return obj.searchField ? ns_view_wrap((__bridge void *)obj.searchField) : 0;
        }
        return 0;
    }
}

void ns_searchtoolbaritem_set_resigns_first_responder_with_cancel(uintptr_t item, int flag)
{
    @autoreleasepool {
        NSSearchToolbarItem *obj = ns_searchtoolbaritem_from(item);
        if (obj) {
            if (@available(macOS 11.0, *)) {
                obj.resignsFirstResponderWithCancel = flag ? YES : NO;
            }
        }
    }
}

int ns_searchtoolbaritem_resigns_first_responder_with_cancel(uintptr_t item)
{
    @autoreleasepool {
        NSSearchToolbarItem *obj = ns_searchtoolbaritem_from(item);
        if (!obj) {
            return 0;
        }
        if (@available(macOS 11.0, *)) {
            return obj.resignsFirstResponderWithCancel ? 1 : 0;
        }
        return 0;
    }
}

void ns_searchtoolbaritem_set_preferred_width_for_search_field(uintptr_t item, double width)
{
    @autoreleasepool {
        NSSearchToolbarItem *obj = ns_searchtoolbaritem_from(item);
        if (obj) {
            if (@available(macOS 11.0, *)) {
                obj.preferredWidthForSearchField = (CGFloat)width;
            }
        }
    }
}

double ns_searchtoolbaritem_preferred_width_for_search_field(uintptr_t item)
{
    @autoreleasepool {
        NSSearchToolbarItem *obj = ns_searchtoolbaritem_from(item);
        if (!obj) {
            return 0.0;
        }
        if (@available(macOS 11.0, *)) {
            return (double)obj.preferredWidthForSearchField;
        }
        return 0.0;
    }
}

void ns_searchtoolbaritem_begin_search_interaction(uintptr_t item)
{
    @autoreleasepool {
        NSSearchToolbarItem *obj = ns_searchtoolbaritem_from(item);
        if (obj) {
            if (@available(macOS 11.0, *)) {
                [obj beginSearchInteraction];
            }
        }
    }
}

void ns_searchtoolbaritem_end_search_interaction(uintptr_t item)
{
    @autoreleasepool {
        NSSearchToolbarItem *obj = ns_searchtoolbaritem_from(item);
        if (obj) {
            if (@available(macOS 11.0, *)) {
                [obj endSearchInteraction];
            }
        }
    }
}
