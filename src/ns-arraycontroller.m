#import <AppKit/AppKit.h>
#import "ns-arraycontroller.h"

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

static NSArrayController *ns_arraycontroller_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSArrayController class]] ? (NSArrayController *)obj : nil;
}

static NSIndexSet *ns_indexset_from_ints(const int *indexes, int count)
{
    NSMutableIndexSet *set = [NSMutableIndexSet indexSet];
    if (!indexes || count <= 0) {
        return set;
    }
    for (int i = 0; i < count; i++) {
        if (indexes[i] >= 0) {
            [set addIndex:(NSUInteger)indexes[i]];
        }
    }
    return set;
}

static NSArray<NSString *> *ns_string_array_from_cstrings(const char **paths, int count)
{
    if (!paths || count <= 0) {
        return @[];
    }
    NSMutableArray<NSString *> *arr = [NSMutableArray arrayWithCapacity:(NSUInteger)count];
    for (int i = 0; i < count; i++) {
        if (paths[i]) {
            [arr addObject:[NSString stringWithUTF8String:paths[i]]];
        }
    }
    return arr;
}

uintptr_t ns_arraycontroller_create(void)
{
    @autoreleasepool {
        return ns_retain_obj([[NSArrayController alloc] init]);
    }
}

uintptr_t ns_arraycontroller_wrap(void *controller)
{
    if (!controller) {
        return 0;
    }
    @autoreleasepool {
        NSArrayController *obj = (__bridge NSArrayController *)controller;
        return [obj isKindOfClass:[NSArrayController class]] ? ns_retain_obj(obj) : 0;
    }
}

void ns_arraycontroller_destroy(uintptr_t controller)
{
    ns_release_handle(controller);
}

void *ns_arraycontroller_nsarraycontroller(uintptr_t controller)
{
    NSArrayController *obj = ns_arraycontroller_from(controller);
    return obj ? (__bridge void *)obj : NULL;
}

void ns_arraycontroller_discard_editing(uintptr_t controller)
{
    @autoreleasepool {
        NSArrayController *obj = ns_arraycontroller_from(controller);
        if (obj) {
            [obj discardEditing];
        }
    }
}

int ns_arraycontroller_commit_editing(uintptr_t controller)
{
    @autoreleasepool {
        NSArrayController *obj = ns_arraycontroller_from(controller);
        return obj && [obj commitEditing] ? 1 : 0;
    }
}

int ns_arraycontroller_is_editing(uintptr_t controller)
{
    @autoreleasepool {
        NSArrayController *obj = ns_arraycontroller_from(controller);
        return obj && obj.editing ? 1 : 0;
    }
}

void ns_arraycontroller_set_content(uintptr_t controller, void *content)
{
    @autoreleasepool {
        NSArrayController *obj = ns_arraycontroller_from(controller);
        if (obj) {
            obj.content = content ? (__bridge id)content : nil;
        }
    }
}

void *ns_arraycontroller_content(uintptr_t controller)
{
    @autoreleasepool {
        NSArrayController *obj = ns_arraycontroller_from(controller);
        return obj && obj.content ? (__bridge void *)obj.content : NULL;
    }
}

void ns_arraycontroller_set_editable(uintptr_t controller, int value)
{
    @autoreleasepool {
        NSArrayController *obj = ns_arraycontroller_from(controller);
        if (obj) {
            obj.editable = value ? YES : NO;
        }
    }
}

int ns_arraycontroller_is_editable(uintptr_t controller)
{
    @autoreleasepool {
        NSArrayController *obj = ns_arraycontroller_from(controller);
        return obj && obj.isEditable ? 1 : 0;
    }
}

int ns_arraycontroller_can_add(uintptr_t controller)
{
    @autoreleasepool {
        NSArrayController *obj = ns_arraycontroller_from(controller);
        return obj && obj.canAdd ? 1 : 0;
    }
}

int ns_arraycontroller_can_remove(uintptr_t controller)
{
    @autoreleasepool {
        NSArrayController *obj = ns_arraycontroller_from(controller);
        return obj && obj.canRemove ? 1 : 0;
    }
}

void ns_arraycontroller_prepare_content(uintptr_t controller)
{
    @autoreleasepool {
        NSArrayController *obj = ns_arraycontroller_from(controller);
        if (obj) {
            [obj prepareContent];
        }
    }
}

void *ns_arraycontroller_new_object(uintptr_t controller)
{
    @autoreleasepool {
        NSArrayController *obj = ns_arraycontroller_from(controller);
        if (!obj) {
            return NULL;
        }
        id created = [obj newObject];
        return created ? (__bridge void *)created : NULL;
    }
}

int ns_arraycontroller_selected_objects_count(uintptr_t controller)
{
    @autoreleasepool {
        NSArrayController *obj = ns_arraycontroller_from(controller);
        return obj ? (int)obj.selectedObjects.count : 0;
    }
}

void *ns_arraycontroller_selected_object_at(uintptr_t controller, int index)
{
    @autoreleasepool {
        NSArrayController *obj = ns_arraycontroller_from(controller);
        if (!obj || index < 0 || (NSUInteger)index >= obj.selectedObjects.count) {
            return NULL;
        }
        id item = obj.selectedObjects[(NSUInteger)index];
        return item ? (__bridge void *)item : NULL;
    }
}

void ns_arraycontroller_rearrange_objects(uintptr_t controller)
{
    @autoreleasepool {
        NSArrayController *obj = ns_arraycontroller_from(controller);
        if (obj) {
            [obj rearrangeObjects];
        }
    }
}

void ns_arraycontroller_set_automatically_rearranges_objects(uintptr_t controller, int value)
{
    @autoreleasepool {
        NSArrayController *obj = ns_arraycontroller_from(controller);
        if (obj) {
            obj.automaticallyRearrangesObjects = value ? YES : NO;
        }
    }
}

int ns_arraycontroller_automatically_rearranges_objects(uintptr_t controller)
{
    @autoreleasepool {
        NSArrayController *obj = ns_arraycontroller_from(controller);
        return obj && obj.automaticallyRearrangesObjects ? 1 : 0;
    }
}

int ns_arraycontroller_automatic_rearrangement_key_paths_count(uintptr_t controller)
{
    @autoreleasepool {
        NSArrayController *obj = ns_arraycontroller_from(controller);
        return obj && obj.automaticRearrangementKeyPaths ? (int)obj.automaticRearrangementKeyPaths.count : 0;
    }
}

int ns_arraycontroller_automatic_rearrangement_key_path_at(uintptr_t controller, int index, char *out, int out_len)
{
    @autoreleasepool {
        NSArrayController *obj = ns_arraycontroller_from(controller);
        if (!obj || !obj.automaticRearrangementKeyPaths || index < 0 || index >= (int)obj.automaticRearrangementKeyPaths.count) {
            return 0;
        }
        return ns_copy_nsstring(obj.automaticRearrangementKeyPaths[(NSUInteger)index], out, out_len);
    }
}

void ns_arraycontroller_did_change_arrangement_criteria(uintptr_t controller)
{
    @autoreleasepool {
        NSArrayController *obj = ns_arraycontroller_from(controller);
        if (obj) {
            [obj didChangeArrangementCriteria];
        }
    }
}

void ns_arraycontroller_set_clears_filter_predicate_on_insertion(uintptr_t controller, int value)
{
    @autoreleasepool {
        NSArrayController *obj = ns_arraycontroller_from(controller);
        if (obj) {
            obj.clearsFilterPredicateOnInsertion = value ? YES : NO;
        }
    }
}

int ns_arraycontroller_clears_filter_predicate_on_insertion(uintptr_t controller)
{
    @autoreleasepool {
        NSArrayController *obj = ns_arraycontroller_from(controller);
        return obj && obj.clearsFilterPredicateOnInsertion ? 1 : 0;
    }
}

int ns_arraycontroller_arranged_objects_count(uintptr_t controller)
{
    @autoreleasepool {
        NSArrayController *obj = ns_arraycontroller_from(controller);
        if (!obj) {
            return 0;
        }
        return (int)[obj.arrangedObjects count];
    }
}

void *ns_arraycontroller_arranged_object_at(uintptr_t controller, int index)
{
    @autoreleasepool {
        NSArrayController *obj = ns_arraycontroller_from(controller);
        if (!obj || index < 0) {
            return NULL;
        }
        id arranged = obj.arrangedObjects;
        if ((NSUInteger)index >= [arranged count]) {
            return NULL;
        }
        id item = [arranged objectAtIndex:(NSUInteger)index];
        return item ? (__bridge void *)item : NULL;
    }
}

void ns_arraycontroller_set_avoids_empty_selection(uintptr_t controller, int value)
{
    @autoreleasepool {
        NSArrayController *obj = ns_arraycontroller_from(controller);
        if (obj) {
            obj.avoidsEmptySelection = value ? YES : NO;
        }
    }
}

int ns_arraycontroller_avoids_empty_selection(uintptr_t controller)
{
    @autoreleasepool {
        NSArrayController *obj = ns_arraycontroller_from(controller);
        return obj && obj.avoidsEmptySelection ? 1 : 0;
    }
}

void ns_arraycontroller_set_preserves_selection(uintptr_t controller, int value)
{
    @autoreleasepool {
        NSArrayController *obj = ns_arraycontroller_from(controller);
        if (obj) {
            obj.preservesSelection = value ? YES : NO;
        }
    }
}

int ns_arraycontroller_preserves_selection(uintptr_t controller)
{
    @autoreleasepool {
        NSArrayController *obj = ns_arraycontroller_from(controller);
        return obj && obj.preservesSelection ? 1 : 0;
    }
}

void ns_arraycontroller_set_selects_inserted_objects(uintptr_t controller, int value)
{
    @autoreleasepool {
        NSArrayController *obj = ns_arraycontroller_from(controller);
        if (obj) {
            obj.selectsInsertedObjects = value ? YES : NO;
        }
    }
}

int ns_arraycontroller_selects_inserted_objects(uintptr_t controller)
{
    @autoreleasepool {
        NSArrayController *obj = ns_arraycontroller_from(controller);
        return obj && obj.selectsInsertedObjects ? 1 : 0;
    }
}

void ns_arraycontroller_set_always_uses_multiple_values_marker(uintptr_t controller, int value)
{
    @autoreleasepool {
        NSArrayController *obj = ns_arraycontroller_from(controller);
        if (obj) {
            obj.alwaysUsesMultipleValuesMarker = value ? YES : NO;
        }
    }
}

int ns_arraycontroller_always_uses_multiple_values_marker(uintptr_t controller)
{
    @autoreleasepool {
        NSArrayController *obj = ns_arraycontroller_from(controller);
        return obj && obj.alwaysUsesMultipleValuesMarker ? 1 : 0;
    }
}

int ns_arraycontroller_set_selection_index(uintptr_t controller, int index)
{
    @autoreleasepool {
        NSArrayController *obj = ns_arraycontroller_from(controller);
        if (!obj || index < 0) {
            return 0;
        }
        return [obj setSelectionIndex:(NSUInteger)index] ? 1 : 0;
    }
}

int ns_arraycontroller_selection_index(uintptr_t controller)
{
    @autoreleasepool {
        NSArrayController *obj = ns_arraycontroller_from(controller);
        if (!obj) {
            return -1;
        }
        NSUInteger index = obj.selectionIndex;
        return index == NSNotFound ? -1 : (int)index;
    }
}

int ns_arraycontroller_set_selection_indexes(uintptr_t controller, const int *indexes, int count)
{
    @autoreleasepool {
        NSArrayController *obj = ns_arraycontroller_from(controller);
        if (!obj) {
            return 0;
        }
        return [obj setSelectionIndexes:ns_indexset_from_ints(indexes, count)] ? 1 : 0;
    }
}

int ns_arraycontroller_selection_indexes_count(uintptr_t controller)
{
    @autoreleasepool {
        NSArrayController *obj = ns_arraycontroller_from(controller);
        return obj && obj.selectionIndexes ? (int)obj.selectionIndexes.count : 0;
    }
}

int ns_arraycontroller_selection_index_at_ordinal(uintptr_t controller, int ordinal)
{
    @autoreleasepool {
        NSArrayController *obj = ns_arraycontroller_from(controller);
        if (!obj || !obj.selectionIndexes || ordinal < 0 || (NSUInteger)ordinal >= obj.selectionIndexes.count) {
            return -1;
        }
        __block int i = 0;
        __block int found = -1;
        [obj.selectionIndexes enumerateIndexesUsingBlock:^(NSUInteger idx, BOOL *stop) {
            if (i == ordinal) {
                found = (int)idx;
                *stop = YES;
            }
            i++;
        }];
        return found;
    }
}

int ns_arraycontroller_can_insert(uintptr_t controller)
{
    @autoreleasepool {
        NSArrayController *obj = ns_arraycontroller_from(controller);
        return obj && obj.canInsert ? 1 : 0;
    }
}

int ns_arraycontroller_can_select_next(uintptr_t controller)
{
    @autoreleasepool {
        NSArrayController *obj = ns_arraycontroller_from(controller);
        return obj && obj.canSelectNext ? 1 : 0;
    }
}

int ns_arraycontroller_can_select_previous(uintptr_t controller)
{
    @autoreleasepool {
        NSArrayController *obj = ns_arraycontroller_from(controller);
        return obj && obj.canSelectPrevious ? 1 : 0;
    }
}

void ns_arraycontroller_insert_object_at_arranged_object_index(uintptr_t controller, void *object, int index)
{
    @autoreleasepool {
        NSArrayController *obj = ns_arraycontroller_from(controller);
        if (obj && object && index >= 0) {
            [obj insertObject:(__bridge id)object atArrangedObjectIndex:(NSUInteger)index];
        }
    }
}

void ns_arraycontroller_remove_object_at_arranged_object_index(uintptr_t controller, int index)
{
    @autoreleasepool {
        NSArrayController *obj = ns_arraycontroller_from(controller);
        if (obj && index >= 0) {
            [obj removeObjectAtArrangedObjectIndex:(NSUInteger)index];
        }
    }
}

void ns_arraycontroller_add_object(uintptr_t controller, void *object)
{
    @autoreleasepool {
        NSArrayController *obj = ns_arraycontroller_from(controller);
        if (obj && object) {
            [obj addObject:(__bridge id)object];
        }
    }
}

void ns_arraycontroller_remove_object(uintptr_t controller, void *object)
{
    @autoreleasepool {
        NSArrayController *obj = ns_arraycontroller_from(controller);
        if (obj && object) {
            [obj removeObject:(__bridge id)object];
        }
    }
}
