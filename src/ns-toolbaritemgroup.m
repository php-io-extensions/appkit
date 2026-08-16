#import <AppKit/AppKit.h>
#import "ns-toolbaritemgroup.h"
#import "ns-toolbaritem.h"

static uintptr_t ns_retain_obj(id object)
{
    return object ? (uintptr_t)(__bridge_retained void *)object : 0;
}

static NSToolbarItemGroup *ns_toolbaritemgroup_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSToolbarItemGroup class]] ? (NSToolbarItemGroup *)obj : nil;
}

static NSArray<NSString *> *ns_strings_from_c(const char **items, int count)
{
    NSMutableArray<NSString *> *list = [NSMutableArray array];
    int i;
    for (i = 0; i < count; i++) {
        if (items && items[i]) {
            [list addObject:[NSString stringWithUTF8String:items[i]]];
        }
    }
    return list;
}

uintptr_t ns_toolbaritemgroup_create(const char *identifier)
{
    @autoreleasepool {
        NSString *ident = identifier ? [NSString stringWithUTF8String:identifier] : @"ns.toolbar.group";
        return ns_retain_obj([[NSToolbarItemGroup alloc] initWithItemIdentifier:ident]);
    }
}

uintptr_t ns_toolbaritemgroup_group_with_titles(const char *identifier, const char **titles, int title_count, int selection_mode, const char **labels, int label_count)
{
    @autoreleasepool {
        if (@available(macOS 10.15, *)) {
            NSString *ident = identifier ? [NSString stringWithUTF8String:identifier] : @"ns.toolbar.group";
            NSArray<NSString *> *titleList = ns_strings_from_c(titles, title_count);
            NSArray<NSString *> *labelList = label_count > 0 ? ns_strings_from_c(labels, label_count) : nil;
            NSToolbarItemGroup *group = [NSToolbarItemGroup groupWithItemIdentifier:ident
                                                                           titles:titleList
                                                                    selectionMode:(NSToolbarItemGroupSelectionMode)selection_mode
                                                                           labels:labelList
                                                                           target:nil
                                                                           action:NULL];
            return group ? ns_retain_obj(group) : 0;
        }
        return 0;
    }
}

uintptr_t ns_toolbaritemgroup_wrap(void *item)
{
    if (!item) {
        return 0;
    }
    @autoreleasepool {
        NSToolbarItemGroup *obj = (__bridge NSToolbarItemGroup *)item;
        return [obj isKindOfClass:[NSToolbarItemGroup class]] ? ns_retain_obj(obj) : 0;
    }
}

void ns_toolbaritemgroup_destroy(uintptr_t item)
{
    ns_toolbaritem_destroy(item);
}

void *ns_toolbaritemgroup_nstoolbaritemgroup(uintptr_t item)
{
    NSToolbarItemGroup *obj = ns_toolbaritemgroup_from(item);
    return obj ? (__bridge void *)obj : NULL;
}

void ns_toolbaritemgroup_set_subitems(uintptr_t item, const uintptr_t *handles, int count)
{
    @autoreleasepool {
        NSToolbarItemGroup *obj = ns_toolbaritemgroup_from(item);
        if (!obj) {
            return;
        }
        NSMutableArray<NSToolbarItem *> *list = [NSMutableArray array];
        int i;
        for (i = 0; i < count; i++) {
            void *ptr = ns_toolbaritem_nstoolbaritem(handles[i]);
            NSToolbarItem *sub = ptr ? (__bridge NSToolbarItem *)ptr : nil;
            if (sub) {
                [list addObject:sub];
            }
        }
        obj.subitems = list;
    }
}

int ns_toolbaritemgroup_subitems_count(uintptr_t item)
{
    @autoreleasepool {
        NSToolbarItemGroup *obj = ns_toolbaritemgroup_from(item);
        return obj ? (int)obj.subitems.count : 0;
    }
}

uintptr_t ns_toolbaritemgroup_subitem_at(uintptr_t item, int index)
{
    @autoreleasepool {
        NSToolbarItemGroup *obj = ns_toolbaritemgroup_from(item);
        if (!obj || index < 0 || index >= (int)obj.subitems.count) {
            return 0;
        }
        return ns_retain_obj(obj.subitems[(NSUInteger)index]);
    }
}

void ns_toolbaritemgroup_set_control_representation(uintptr_t item, int representation)
{
    @autoreleasepool {
        NSToolbarItemGroup *obj = ns_toolbaritemgroup_from(item);
        if (obj) {
            if (@available(macOS 10.15, *)) {
                obj.controlRepresentation = (NSToolbarItemGroupControlRepresentation)representation;
            }
        }
    }
}

int ns_toolbaritemgroup_get_control_representation(uintptr_t item)
{
    @autoreleasepool {
        NSToolbarItemGroup *obj = ns_toolbaritemgroup_from(item);
        if (!obj) {
            return 0;
        }
        if (@available(macOS 10.15, *)) {
            return (int)obj.controlRepresentation;
        }
        return 0;
    }
}

void ns_toolbaritemgroup_set_selection_mode(uintptr_t item, int mode)
{
    @autoreleasepool {
        NSToolbarItemGroup *obj = ns_toolbaritemgroup_from(item);
        if (obj) {
            if (@available(macOS 10.15, *)) {
                obj.selectionMode = (NSToolbarItemGroupSelectionMode)mode;
            }
        }
    }
}

int ns_toolbaritemgroup_get_selection_mode(uintptr_t item)
{
    @autoreleasepool {
        NSToolbarItemGroup *obj = ns_toolbaritemgroup_from(item);
        if (!obj) {
            return 0;
        }
        if (@available(macOS 10.15, *)) {
            return (int)obj.selectionMode;
        }
        return 0;
    }
}

void ns_toolbaritemgroup_set_selected_index(uintptr_t item, int index)
{
    @autoreleasepool {
        NSToolbarItemGroup *obj = ns_toolbaritemgroup_from(item);
        if (obj) {
            if (@available(macOS 10.15, *)) {
                obj.selectedIndex = index;
            }
        }
    }
}

int ns_toolbaritemgroup_get_selected_index(uintptr_t item)
{
    @autoreleasepool {
        NSToolbarItemGroup *obj = ns_toolbaritemgroup_from(item);
        if (!obj) {
            return -1;
        }
        if (@available(macOS 10.15, *)) {
            return (int)obj.selectedIndex;
        }
        return -1;
    }
}

void ns_toolbaritemgroup_set_selected_at_index(uintptr_t item, int index, int flag)
{
    @autoreleasepool {
        NSToolbarItemGroup *obj = ns_toolbaritemgroup_from(item);
        if (obj) {
            if (@available(macOS 10.15, *)) {
                [obj setSelected:flag ? YES : NO atIndex:index];
            }
        }
    }
}

int ns_toolbaritemgroup_is_selected_at_index(uintptr_t item, int index)
{
    @autoreleasepool {
        NSToolbarItemGroup *obj = ns_toolbaritemgroup_from(item);
        if (!obj) {
            return 0;
        }
        if (@available(macOS 10.15, *)) {
            return [obj isSelectedAtIndex:index] ? 1 : 0;
        }
        return 0;
    }
}
