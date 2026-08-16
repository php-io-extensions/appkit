#import <AppKit/AppKit.h>
#import "ns-dictionarycontroller.h"
#import "ns-dictionary.h"

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

static NSDictionaryController *ns_dictionarycontroller_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSDictionaryController class]] ? (NSDictionaryController *)obj : nil;
}

uintptr_t ns_dictionarycontroller_create(void)
{
    @autoreleasepool {
        return ns_retain_obj([[NSDictionaryController alloc] init]);
    }
}

uintptr_t ns_dictionarycontroller_wrap(void *controller)
{
    if (!controller) {
        return 0;
    }
    @autoreleasepool {
        NSDictionaryController *obj = (__bridge NSDictionaryController *)controller;
        return [obj isKindOfClass:[NSDictionaryController class]] ? ns_retain_obj(obj) : 0;
    }
}

void ns_dictionarycontroller_destroy(uintptr_t controller)
{
    ns_release_handle(controller);
}

void *ns_dictionarycontroller_nsdictionarycontroller(uintptr_t controller)
{
    NSDictionaryController *obj = ns_dictionarycontroller_from(controller);
    return obj ? (__bridge void *)obj : NULL;
}

void ns_dictionarycontroller_discard_editing(uintptr_t controller)
{
    @autoreleasepool {
        NSDictionaryController *obj = ns_dictionarycontroller_from(controller);
        if (obj) {
            [obj discardEditing];
        }
    }
}

int ns_dictionarycontroller_commit_editing(uintptr_t controller)
{
    @autoreleasepool {
        NSDictionaryController *obj = ns_dictionarycontroller_from(controller);
        return obj && [obj commitEditing] ? 1 : 0;
    }
}

int ns_dictionarycontroller_is_editing(uintptr_t controller)
{
    @autoreleasepool {
        NSDictionaryController *obj = ns_dictionarycontroller_from(controller);
        return obj && obj.editing ? 1 : 0;
    }
}

void ns_dictionarycontroller_rearrange_objects(uintptr_t controller)
{
    @autoreleasepool {
        NSDictionaryController *obj = ns_dictionarycontroller_from(controller);
        if (obj) {
            [obj rearrangeObjects];
        }
    }
}

void ns_dictionarycontroller_set_automatically_rearranges_objects(uintptr_t controller, int value)
{
    @autoreleasepool {
        NSDictionaryController *obj = ns_dictionarycontroller_from(controller);
        if (obj) {
            obj.automaticallyRearrangesObjects = value ? YES : NO;
        }
    }
}

int ns_dictionarycontroller_automatically_rearranges_objects(uintptr_t controller)
{
    @autoreleasepool {
        NSDictionaryController *obj = ns_dictionarycontroller_from(controller);
        return obj && obj.automaticallyRearrangesObjects ? 1 : 0;
    }
}

int ns_dictionarycontroller_automatic_rearrangement_key_paths_count(uintptr_t controller)
{
    @autoreleasepool {
        NSDictionaryController *obj = ns_dictionarycontroller_from(controller);
        return obj && obj.automaticRearrangementKeyPaths ? (int)obj.automaticRearrangementKeyPaths.count : 0;
    }
}

int ns_dictionarycontroller_automatic_rearrangement_key_path_at(uintptr_t controller, int index, char *out, int out_len)
{
    @autoreleasepool {
        NSDictionaryController *obj = ns_dictionarycontroller_from(controller);
        if (!obj || !obj.automaticRearrangementKeyPaths || index < 0 || index >= (int)obj.automaticRearrangementKeyPaths.count) {
            return 0;
        }
        return ns_copy_nsstring(obj.automaticRearrangementKeyPaths[(NSUInteger)index], out, out_len);
    }
}

void ns_dictionarycontroller_did_change_arrangement_criteria(uintptr_t controller)
{
    @autoreleasepool {
        NSDictionaryController *obj = ns_dictionarycontroller_from(controller);
        if (obj) {
            [obj didChangeArrangementCriteria];
        }
    }
}

void ns_dictionarycontroller_set_clears_filter_predicate_on_insertion(uintptr_t controller, int value)
{
    @autoreleasepool {
        NSDictionaryController *obj = ns_dictionarycontroller_from(controller);
        if (obj) {
            obj.clearsFilterPredicateOnInsertion = value ? YES : NO;
        }
    }
}

int ns_dictionarycontroller_clears_filter_predicate_on_insertion(uintptr_t controller)
{
    @autoreleasepool {
        NSDictionaryController *obj = ns_dictionarycontroller_from(controller);
        return obj && obj.clearsFilterPredicateOnInsertion ? 1 : 0;
    }
}

int ns_dictionarycontroller_arranged_objects_count(uintptr_t controller)
{
    @autoreleasepool {
        NSDictionaryController *obj = ns_dictionarycontroller_from(controller);
        if (!obj) {
            return 0;
        }
        return (int)[obj.arrangedObjects count];
    }
}

void *ns_dictionarycontroller_arranged_object_at(uintptr_t controller, int index)
{
    @autoreleasepool {
        NSDictionaryController *obj = ns_dictionarycontroller_from(controller);
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

void ns_dictionarycontroller_set_avoids_empty_selection(uintptr_t controller, int value)
{
    @autoreleasepool {
        NSDictionaryController *obj = ns_dictionarycontroller_from(controller);
        if (obj) {
            obj.avoidsEmptySelection = value ? YES : NO;
        }
    }
}

int ns_dictionarycontroller_avoids_empty_selection(uintptr_t controller)
{
    @autoreleasepool {
        NSDictionaryController *obj = ns_dictionarycontroller_from(controller);
        return obj && obj.avoidsEmptySelection ? 1 : 0;
    }
}

void ns_dictionarycontroller_set_preserves_selection(uintptr_t controller, int value)
{
    @autoreleasepool {
        NSDictionaryController *obj = ns_dictionarycontroller_from(controller);
        if (obj) {
            obj.preservesSelection = value ? YES : NO;
        }
    }
}

int ns_dictionarycontroller_preserves_selection(uintptr_t controller)
{
    @autoreleasepool {
        NSDictionaryController *obj = ns_dictionarycontroller_from(controller);
        return obj && obj.preservesSelection ? 1 : 0;
    }
}

void ns_dictionarycontroller_set_selects_inserted_objects(uintptr_t controller, int value)
{
    @autoreleasepool {
        NSDictionaryController *obj = ns_dictionarycontroller_from(controller);
        if (obj) {
            obj.selectsInsertedObjects = value ? YES : NO;
        }
    }
}

int ns_dictionarycontroller_selects_inserted_objects(uintptr_t controller)
{
    @autoreleasepool {
        NSDictionaryController *obj = ns_dictionarycontroller_from(controller);
        return obj && obj.selectsInsertedObjects ? 1 : 0;
    }
}

void ns_dictionarycontroller_set_always_uses_multiple_values_marker(uintptr_t controller, int value)
{
    @autoreleasepool {
        NSDictionaryController *obj = ns_dictionarycontroller_from(controller);
        if (obj) {
            obj.alwaysUsesMultipleValuesMarker = value ? YES : NO;
        }
    }
}

int ns_dictionarycontroller_always_uses_multiple_values_marker(uintptr_t controller)
{
    @autoreleasepool {
        NSDictionaryController *obj = ns_dictionarycontroller_from(controller);
        return obj && obj.alwaysUsesMultipleValuesMarker ? 1 : 0;
    }
}

int ns_dictionarycontroller_set_selection_index(uintptr_t controller, int index)
{
    @autoreleasepool {
        NSDictionaryController *obj = ns_dictionarycontroller_from(controller);
        if (!obj || index < 0) {
            return 0;
        }
        return [obj setSelectionIndex:(NSUInteger)index] ? 1 : 0;
    }
}

int ns_dictionarycontroller_selection_index(uintptr_t controller)
{
    @autoreleasepool {
        NSDictionaryController *obj = ns_dictionarycontroller_from(controller);
        if (!obj) {
            return -1;
        }
        NSUInteger index = obj.selectionIndex;
        return index == NSNotFound ? -1 : (int)index;
    }
}

int ns_dictionarycontroller_set_selection_indexes(uintptr_t controller, const int *indexes, int count)
{
    @autoreleasepool {
        NSDictionaryController *obj = ns_dictionarycontroller_from(controller);
        if (!obj) {
            return 0;
        }
        return [obj setSelectionIndexes:ns_indexset_from_ints(indexes, count)] ? 1 : 0;
    }
}

int ns_dictionarycontroller_selection_indexes_count(uintptr_t controller)
{
    @autoreleasepool {
        NSDictionaryController *obj = ns_dictionarycontroller_from(controller);
        return obj ? (int)obj.selectionIndexes.count : 0;
    }
}

int ns_dictionarycontroller_selection_index_at_ordinal(uintptr_t controller, int ordinal)
{
    @autoreleasepool {
        NSDictionaryController *obj = ns_dictionarycontroller_from(controller);
        if (!obj || ordinal < 0) {
            return -1;
        }
        NSIndexSet *indexes = obj.selectionIndexes;
        if ((NSUInteger)ordinal >= indexes.count) {
            return -1;
        }
        NSUInteger idx = [indexes firstIndex];
        int i = 0;
        while (idx != NSNotFound) {
            if (i == ordinal) {
                return (int)idx;
            }
            idx = [indexes indexGreaterThanIndex:idx];
            i++;
        }
        return -1;
    }
}

int ns_dictionarycontroller_can_insert(uintptr_t controller)
{
    @autoreleasepool {
        NSDictionaryController *obj = ns_dictionarycontroller_from(controller);
        return obj && obj.canInsert ? 1 : 0;
    }
}

int ns_dictionarycontroller_can_select_next(uintptr_t controller)
{
    @autoreleasepool {
        NSDictionaryController *obj = ns_dictionarycontroller_from(controller);
        return obj && obj.canSelectNext ? 1 : 0;
    }
}

int ns_dictionarycontroller_can_select_previous(uintptr_t controller)
{
    @autoreleasepool {
        NSDictionaryController *obj = ns_dictionarycontroller_from(controller);
        return obj && obj.canSelectPrevious ? 1 : 0;
    }
}

void ns_dictionarycontroller_insert_object_at_arranged_object_index(uintptr_t controller, void *object, int index)
{
    @autoreleasepool {
        NSDictionaryController *obj = ns_dictionarycontroller_from(controller);
        if (obj && object && index >= 0) {
            [obj insertObject:(__bridge id)object atArrangedObjectIndex:(NSUInteger)index];
        }
    }
}

void ns_dictionarycontroller_remove_object_at_arranged_object_index(uintptr_t controller, int index)
{
    @autoreleasepool {
        NSDictionaryController *obj = ns_dictionarycontroller_from(controller);
        if (obj && index >= 0) {
            [obj removeObjectAtArrangedObjectIndex:(NSUInteger)index];
        }
    }
}

void ns_dictionarycontroller_add_object(uintptr_t controller, void *object)
{
    @autoreleasepool {
        NSDictionaryController *obj = ns_dictionarycontroller_from(controller);
        if (obj && object) {
            [obj addObject:(__bridge id)object];
        }
    }
}

void ns_dictionarycontroller_remove_object(uintptr_t controller, void *object)
{
    @autoreleasepool {
        NSDictionaryController *obj = ns_dictionarycontroller_from(controller);
        if (obj && object) {
            [obj removeObject:(__bridge id)object];
        }
    }
}

void ns_dictionarycontroller_set_content(uintptr_t controller, void *content)
{
    @autoreleasepool {
        NSDictionaryController *obj = ns_dictionarycontroller_from(controller);
        if (obj) {
            obj.content = content ? (__bridge id)content : nil;
        }
    }
}

void *ns_dictionarycontroller_content(uintptr_t controller)
{
    @autoreleasepool {
        NSDictionaryController *obj = ns_dictionarycontroller_from(controller);
        return obj && obj.content ? (__bridge void *)obj.content : NULL;
    }
}

void ns_dictionarycontroller_set_editable(uintptr_t controller, int value)
{
    @autoreleasepool {
        NSDictionaryController *obj = ns_dictionarycontroller_from(controller);
        if (obj) {
            obj.editable = value ? YES : NO;
        }
    }
}

int ns_dictionarycontroller_is_editable(uintptr_t controller)
{
    @autoreleasepool {
        NSDictionaryController *obj = ns_dictionarycontroller_from(controller);
        return obj && obj.isEditable ? 1 : 0;
    }
}

int ns_dictionarycontroller_can_add(uintptr_t controller)
{
    @autoreleasepool {
        NSDictionaryController *obj = ns_dictionarycontroller_from(controller);
        return obj && obj.canAdd ? 1 : 0;
    }
}

int ns_dictionarycontroller_can_remove(uintptr_t controller)
{
    @autoreleasepool {
        NSDictionaryController *obj = ns_dictionarycontroller_from(controller);
        return obj && obj.canRemove ? 1 : 0;
    }
}

void ns_dictionarycontroller_prepare_content(uintptr_t controller)
{
    @autoreleasepool {
        NSDictionaryController *obj = ns_dictionarycontroller_from(controller);
        if (obj) {
            [obj prepareContent];
        }
    }
}

void *ns_dictionarycontroller_new_object(uintptr_t controller)
{
    @autoreleasepool {
        NSDictionaryController *obj = ns_dictionarycontroller_from(controller);
        if (!obj) {
            return NULL;
        }
        NSDictionaryControllerKeyValuePair *created = [obj newObject];
        return created ? (__bridge void *)created : NULL;
    }
}

int ns_dictionarycontroller_selected_objects_count(uintptr_t controller)
{
    @autoreleasepool {
        NSDictionaryController *obj = ns_dictionarycontroller_from(controller);
        return obj ? (int)obj.selectedObjects.count : 0;
    }
}

void *ns_dictionarycontroller_selected_object_at(uintptr_t controller, int index)
{
    @autoreleasepool {
        NSDictionaryController *obj = ns_dictionarycontroller_from(controller);
        if (!obj || index < 0 || (NSUInteger)index >= obj.selectedObjects.count) {
            return NULL;
        }
        id item = obj.selectedObjects[(NSUInteger)index];
        return item ? (__bridge void *)item : NULL;
    }
}

void ns_dictionarycontroller_set_initial_key(uintptr_t controller, const char *key)
{
    @autoreleasepool {
        NSDictionaryController *obj = ns_dictionarycontroller_from(controller);
        if (obj) {
            obj.initialKey = key ? [NSString stringWithUTF8String:key] : nil;
        }
    }
}

int ns_dictionarycontroller_initial_key(uintptr_t controller, char *out, int out_len)
{
    @autoreleasepool {
        NSDictionaryController *obj = ns_dictionarycontroller_from(controller);
        return obj ? ns_copy_nsstring(obj.initialKey, out, out_len) : 0;
    }
}

void ns_dictionarycontroller_set_initial_value(uintptr_t controller, void *value)
{
    @autoreleasepool {
        NSDictionaryController *obj = ns_dictionarycontroller_from(controller);
        if (obj) {
            obj.initialValue = value ? (__bridge id)value : nil;
        }
    }
}

void *ns_dictionarycontroller_initial_value(uintptr_t controller)
{
    @autoreleasepool {
        NSDictionaryController *obj = ns_dictionarycontroller_from(controller);
        return obj && obj.initialValue ? (__bridge void *)obj.initialValue : NULL;
    }
}

void ns_dictionarycontroller_set_included_keys(uintptr_t controller, const char **items, int count)
{
    @autoreleasepool {
        NSDictionaryController *obj = ns_dictionarycontroller_from(controller);
        if (obj) {
            obj.includedKeys = ns_string_array_from_cstrings(items, count);
        }
    }
}

int ns_dictionarycontroller_included_keys_count(uintptr_t controller)
{
    @autoreleasepool {
        NSDictionaryController *obj = ns_dictionarycontroller_from(controller);
        return obj ? (int)obj.includedKeys.count : 0;
    }
}

int ns_dictionarycontroller_included_key_at(uintptr_t controller, int index, char *out, int out_len)
{
    @autoreleasepool {
        NSDictionaryController *obj = ns_dictionarycontroller_from(controller);
        if (!obj || index < 0 || (NSUInteger)index >= obj.includedKeys.count) {
            return 0;
        }
        return ns_copy_nsstring(obj.includedKeys[(NSUInteger)index], out, out_len);
    }
}

void ns_dictionarycontroller_set_excluded_keys(uintptr_t controller, const char **items, int count)
{
    @autoreleasepool {
        NSDictionaryController *obj = ns_dictionarycontroller_from(controller);
        if (obj) {
            obj.excludedKeys = ns_string_array_from_cstrings(items, count);
        }
    }
}

int ns_dictionarycontroller_excluded_keys_count(uintptr_t controller)
{
    @autoreleasepool {
        NSDictionaryController *obj = ns_dictionarycontroller_from(controller);
        return obj ? (int)obj.excludedKeys.count : 0;
    }
}

int ns_dictionarycontroller_excluded_key_at(uintptr_t controller, int index, char *out, int out_len)
{
    @autoreleasepool {
        NSDictionaryController *obj = ns_dictionarycontroller_from(controller);
        if (!obj || index < 0 || (NSUInteger)index >= obj.excludedKeys.count) {
            return 0;
        }
        return ns_copy_nsstring(obj.excludedKeys[(NSUInteger)index], out, out_len);
    }
}

void ns_dictionarycontroller_set_localized_key_dictionary(uintptr_t controller, uintptr_t dictionary)
{
    @autoreleasepool {
        NSDictionaryController *obj = ns_dictionarycontroller_from(controller);
        if (obj) {
            void *ptr = ns_dictionary_nsdictionary(dictionary);
            obj.localizedKeyDictionary = ptr ? (__bridge NSDictionary *)ptr : nil;
        }
    }
}

uintptr_t ns_dictionarycontroller_localized_key_dictionary(uintptr_t controller)
{
    @autoreleasepool {
        NSDictionaryController *obj = ns_dictionarycontroller_from(controller);
        if (!obj || !obj.localizedKeyDictionary) {
            return 0;
        }
        NSDictionary *copy = [obj.localizedKeyDictionary copy];
        return ns_dictionary_wrap((__bridge void *)copy);
    }
}

void ns_dictionarycontroller_set_localized_key_table(uintptr_t controller, const char *table)
{
    @autoreleasepool {
        NSDictionaryController *obj = ns_dictionarycontroller_from(controller);
        if (obj) {
            obj.localizedKeyTable = table ? [NSString stringWithUTF8String:table] : nil;
        }
    }
}

int ns_dictionarycontroller_localized_key_table(uintptr_t controller, char *out, int out_len)
{
    @autoreleasepool {
        NSDictionaryController *obj = ns_dictionarycontroller_from(controller);
        return obj ? ns_copy_nsstring(obj.localizedKeyTable, out, out_len) : 0;
    }
}
