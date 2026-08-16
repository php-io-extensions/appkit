#import <AppKit/AppKit.h>
#import "ns-treecontroller.h"
#include <stdlib.h>

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

static NSTreeController *ns_treecontroller_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSTreeController class]] ? (NSTreeController *)obj : nil;
}

static NSIndexPath *ns_indexpath_from_ints(const int *indexes, int count)
{
    if (!indexes || count <= 0) {
        return nil;
    }
    NSUInteger *buf = (NSUInteger *)malloc((size_t)count * sizeof(NSUInteger));
    if (!buf) {
        return nil;
    }
    for (int i = 0; i < count; i++) {
        buf[i] = (NSUInteger)indexes[i];
    }
    NSIndexPath *path = [NSIndexPath indexPathWithIndexes:buf length:(NSUInteger)count];
    free(buf);
    return path;
}

uintptr_t ns_treecontroller_create(void)
{
    @autoreleasepool {
        return ns_retain_obj([[NSTreeController alloc] init]);
    }
}

uintptr_t ns_treecontroller_wrap(void *controller)
{
    if (!controller) {
        return 0;
    }
    @autoreleasepool {
        NSTreeController *obj = (__bridge NSTreeController *)controller;
        return [obj isKindOfClass:[NSTreeController class]] ? ns_retain_obj(obj) : 0;
    }
}

void ns_treecontroller_destroy(uintptr_t controller)
{
    ns_release_handle(controller);
}

void *ns_treecontroller_nstreecontroller(uintptr_t controller)
{
    NSTreeController *obj = ns_treecontroller_from(controller);
    return obj ? (__bridge void *)obj : NULL;
}

void ns_treecontroller_discard_editing(uintptr_t controller)
{
    @autoreleasepool {
        NSTreeController *obj = ns_treecontroller_from(controller);
        if (obj) {
            [obj discardEditing];
        }
    }
}

int ns_treecontroller_commit_editing(uintptr_t controller)
{
    @autoreleasepool {
        NSTreeController *obj = ns_treecontroller_from(controller);
        return obj && [obj commitEditing] ? 1 : 0;
    }
}

int ns_treecontroller_is_editing(uintptr_t controller)
{
    @autoreleasepool {
        NSTreeController *obj = ns_treecontroller_from(controller);
        return obj && obj.editing ? 1 : 0;
    }
}

void ns_treecontroller_rearrange_objects(uintptr_t controller)
{
    @autoreleasepool {
        NSTreeController *obj = ns_treecontroller_from(controller);
        if (obj) {
            [obj rearrangeObjects];
        }
    }
}

void *ns_treecontroller_arranged_objects_root_node(uintptr_t controller)
{
    @autoreleasepool {
        NSTreeController *obj = ns_treecontroller_from(controller);
        id root = obj ? obj.arrangedObjects : nil;
        return [root isKindOfClass:[NSTreeNode class]] ? (__bridge void *)root : NULL;
    }
}

void ns_treecontroller_set_children_key_path(uintptr_t controller, const char *path)
{
    @autoreleasepool {
        NSTreeController *obj = ns_treecontroller_from(controller);
        if (obj) {
            obj.childrenKeyPath = path ? [NSString stringWithUTF8String:path] : nil;
        }
    }
}

int ns_treecontroller_children_key_path(uintptr_t controller, char *out, int out_len)
{
    @autoreleasepool {
        NSTreeController *obj = ns_treecontroller_from(controller);
        if (!obj) {
            return 0;
        }
        return ns_copy_nsstring(obj.childrenKeyPath, out, out_len);
    }
}

void ns_treecontroller_set_count_key_path(uintptr_t controller, const char *path)
{
    @autoreleasepool {
        NSTreeController *obj = ns_treecontroller_from(controller);
        if (obj) {
            obj.countKeyPath = path ? [NSString stringWithUTF8String:path] : nil;
        }
    }
}

int ns_treecontroller_count_key_path(uintptr_t controller, char *out, int out_len)
{
    @autoreleasepool {
        NSTreeController *obj = ns_treecontroller_from(controller);
        if (!obj) {
            return 0;
        }
        return ns_copy_nsstring(obj.countKeyPath, out, out_len);
    }
}

void ns_treecontroller_set_leaf_key_path(uintptr_t controller, const char *path)
{
    @autoreleasepool {
        NSTreeController *obj = ns_treecontroller_from(controller);
        if (obj) {
            obj.leafKeyPath = path ? [NSString stringWithUTF8String:path] : nil;
        }
    }
}

int ns_treecontroller_leaf_key_path(uintptr_t controller, char *out, int out_len)
{
    @autoreleasepool {
        NSTreeController *obj = ns_treecontroller_from(controller);
        if (!obj) {
            return 0;
        }
        return ns_copy_nsstring(obj.leafKeyPath, out, out_len);
    }
}

void ns_treecontroller_set_content(uintptr_t controller, void *content)
{
    @autoreleasepool {
        NSTreeController *obj = ns_treecontroller_from(controller);
        if (obj) {
            obj.content = content ? (__bridge id)content : nil;
        }
    }
}

void *ns_treecontroller_content(uintptr_t controller)
{
    @autoreleasepool {
        NSTreeController *obj = ns_treecontroller_from(controller);
        return obj && obj.content ? (__bridge void *)obj.content : NULL;
    }
}

int ns_treecontroller_can_insert(uintptr_t controller)
{
    @autoreleasepool {
        NSTreeController *obj = ns_treecontroller_from(controller);
        return obj && obj.canInsert ? 1 : 0;
    }
}

int ns_treecontroller_can_insert_child(uintptr_t controller)
{
    @autoreleasepool {
        NSTreeController *obj = ns_treecontroller_from(controller);
        return obj && obj.canInsertChild ? 1 : 0;
    }
}

int ns_treecontroller_can_add_child(uintptr_t controller)
{
    @autoreleasepool {
        NSTreeController *obj = ns_treecontroller_from(controller);
        return obj && obj.canAddChild ? 1 : 0;
    }
}

void ns_treecontroller_set_avoids_empty_selection(uintptr_t controller, int value)
{
    @autoreleasepool {
        NSTreeController *obj = ns_treecontroller_from(controller);
        if (obj) {
            obj.avoidsEmptySelection = value ? YES : NO;
        }
    }
}

int ns_treecontroller_avoids_empty_selection(uintptr_t controller)
{
    @autoreleasepool {
        NSTreeController *obj = ns_treecontroller_from(controller);
        return obj && obj.avoidsEmptySelection ? 1 : 0;
    }
}

void ns_treecontroller_set_preserves_selection(uintptr_t controller, int value)
{
    @autoreleasepool {
        NSTreeController *obj = ns_treecontroller_from(controller);
        if (obj) {
            obj.preservesSelection = value ? YES : NO;
        }
    }
}

int ns_treecontroller_preserves_selection(uintptr_t controller)
{
    @autoreleasepool {
        NSTreeController *obj = ns_treecontroller_from(controller);
        return obj && obj.preservesSelection ? 1 : 0;
    }
}

void ns_treecontroller_set_selects_inserted_objects(uintptr_t controller, int value)
{
    @autoreleasepool {
        NSTreeController *obj = ns_treecontroller_from(controller);
        if (obj) {
            obj.selectsInsertedObjects = value ? YES : NO;
        }
    }
}

int ns_treecontroller_selects_inserted_objects(uintptr_t controller)
{
    @autoreleasepool {
        NSTreeController *obj = ns_treecontroller_from(controller);
        return obj && obj.selectsInsertedObjects ? 1 : 0;
    }
}

void ns_treecontroller_set_always_uses_multiple_values_marker(uintptr_t controller, int value)
{
    @autoreleasepool {
        NSTreeController *obj = ns_treecontroller_from(controller);
        if (obj) {
            obj.alwaysUsesMultipleValuesMarker = value ? YES : NO;
        }
    }
}

int ns_treecontroller_always_uses_multiple_values_marker(uintptr_t controller)
{
    @autoreleasepool {
        NSTreeController *obj = ns_treecontroller_from(controller);
        return obj && obj.alwaysUsesMultipleValuesMarker ? 1 : 0;
    }
}

int ns_treecontroller_selected_objects_count(uintptr_t controller)
{
    @autoreleasepool {
        NSTreeController *obj = ns_treecontroller_from(controller);
        return obj ? (int)obj.selectedObjects.count : 0;
    }
}

void *ns_treecontroller_selected_object_at(uintptr_t controller, int index)
{
    @autoreleasepool {
        NSTreeController *obj = ns_treecontroller_from(controller);
        if (!obj || index < 0 || (NSUInteger)index >= obj.selectedObjects.count) {
            return NULL;
        }
        id item = obj.selectedObjects[(NSUInteger)index];
        return item ? (__bridge void *)item : NULL;
    }
}

int ns_treecontroller_selected_nodes_count(uintptr_t controller)
{
    @autoreleasepool {
        NSTreeController *obj = ns_treecontroller_from(controller);
        return obj ? (int)obj.selectedNodes.count : 0;
    }
}

void *ns_treecontroller_selected_node_at(uintptr_t controller, int index)
{
    @autoreleasepool {
        NSTreeController *obj = ns_treecontroller_from(controller);
        if (!obj || index < 0 || (NSUInteger)index >= obj.selectedNodes.count) {
            return NULL;
        }
        NSTreeNode *node = obj.selectedNodes[(NSUInteger)index];
        return [node isKindOfClass:[NSTreeNode class]] ? (__bridge void *)node : NULL;
    }
}

int ns_treecontroller_set_selection_index_path(uintptr_t controller, const int *indexes, int count)
{
    @autoreleasepool {
        NSTreeController *obj = ns_treecontroller_from(controller);
        if (!obj) {
            return 0;
        }
        NSIndexPath *path = ns_indexpath_from_ints(indexes, count);
        return [obj setSelectionIndexPath:path] ? 1 : 0;
    }
}

int ns_treecontroller_selection_index_path_length(uintptr_t controller)
{
    @autoreleasepool {
        NSTreeController *obj = ns_treecontroller_from(controller);
        return obj && obj.selectionIndexPath ? (int)obj.selectionIndexPath.length : 0;
    }
}

int ns_treecontroller_selection_index_path_component_at(uintptr_t controller, int index)
{
    @autoreleasepool {
        NSTreeController *obj = ns_treecontroller_from(controller);
        if (!obj || !obj.selectionIndexPath || index < 0 || (NSUInteger)index >= obj.selectionIndexPath.length) {
            return -1;
        }
        return (int)[obj.selectionIndexPath indexAtPosition:(NSUInteger)index];
    }
}

void ns_treecontroller_insert_object_at_arranged_object_index_path(uintptr_t controller, void *object, const int *indexes, int count)
{
    @autoreleasepool {
        NSTreeController *obj = ns_treecontroller_from(controller);
        NSIndexPath *path = ns_indexpath_from_ints(indexes, count);
        if (obj && object && path) {
            [obj insertObject:(__bridge id)object atArrangedObjectIndexPath:path];
        }
    }
}

void ns_treecontroller_remove_object_at_arranged_object_index_path(uintptr_t controller, const int *indexes, int count)
{
    @autoreleasepool {
        NSTreeController *obj = ns_treecontroller_from(controller);
        NSIndexPath *path = ns_indexpath_from_ints(indexes, count);
        if (obj && path) {
            [obj removeObjectAtArrangedObjectIndexPath:path];
        }
    }
}
