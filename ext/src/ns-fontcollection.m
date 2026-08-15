#import <AppKit/AppKit.h>
#import "ns-fontcollection.h"
#import "ns-fontdescriptor.h"

static uintptr_t ns_fontcollection_retain_obj(id object)
{
    return object ? (uintptr_t)(__bridge_retained void *)object : 0;
}

static NSFontCollection *ns_fontcollection_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSFontCollection class]] ? (NSFontCollection *)obj : nil;
}

static NSMutableFontCollection *ns_fontcollection_mutable_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSMutableFontCollection class]] ? (NSMutableFontCollection *)obj : nil;
}

static int ns_fontcollection_copy_nsstring(NSString *text, char *out, int out_len)
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

static NSArray<NSFontDescriptor *> *ns_fontcollection_descriptor_array(uintptr_t descriptor)
{
    NSFontDescriptor *desc = (__bridge NSFontDescriptor *)(void *)ns_fontdescriptor_nsfontdescriptor(descriptor);
    return desc ? @[desc] : nil;
}

uintptr_t ns_fontcollection_wrap(void *collection)
{
    if (!collection) {
        return 0;
    }
    @autoreleasepool {
        NSFontCollection *obj = (__bridge NSFontCollection *)collection;
        return [obj isKindOfClass:[NSFontCollection class]] ? ns_fontcollection_retain_obj(obj) : 0;
    }
}

void ns_fontcollection_destroy(uintptr_t collection)
{
    if (!collection) {
        return;
    }
    CFRelease((void *)collection);
}

void *ns_fontcollection_nsfontcollection(uintptr_t collection)
{
    NSFontCollection *obj = ns_fontcollection_from(collection);
    return obj ? (__bridge void *)obj : NULL;
}

uintptr_t ns_fontcollection_with_descriptor(uintptr_t descriptor)
{
    @autoreleasepool {
        NSArray<NSFontDescriptor *> *descriptors = ns_fontcollection_descriptor_array(descriptor);
        if (!descriptors) {
            return 0;
        }
        return ns_fontcollection_retain_obj([NSFontCollection fontCollectionWithDescriptors:descriptors]);
    }
}

uintptr_t ns_fontcollection_with_all_available(void)
{
    @autoreleasepool {
        return ns_fontcollection_retain_obj([NSFontCollection fontCollectionWithAllAvailableDescriptors]);
    }
}

uintptr_t ns_fontcollection_with_name(const char *name)
{
    @autoreleasepool {
        if (!name || name[0] == '\0') {
            return 0;
        }
        return ns_fontcollection_retain_obj([NSFontCollection fontCollectionWithName:[NSString stringWithUTF8String:name]]);
    }
}

uintptr_t ns_fontcollection_with_name_visibility(const char *name, unsigned visibility)
{
    @autoreleasepool {
        if (!name || name[0] == '\0') {
            return 0;
        }
        return ns_fontcollection_retain_obj(
            [NSFontCollection fontCollectionWithName:[NSString stringWithUTF8String:name]
                                          visibility:(NSFontCollectionVisibility)visibility]);
    }
}

int ns_fontcollection_show(uintptr_t collection, const char *name, unsigned visibility)
{
    @autoreleasepool {
        NSFontCollection *obj = ns_fontcollection_from(collection);
        if (!obj || !name || name[0] == '\0') {
            return 0;
        }
        return [NSFontCollection showFontCollection:obj
                                           withName:[NSString stringWithUTF8String:name]
                                         visibility:(NSFontCollectionVisibility)visibility
                                              error:nil] ? 1 : 0;
    }
}

int ns_fontcollection_hide(const char *name, unsigned visibility)
{
    @autoreleasepool {
        if (!name || name[0] == '\0') {
            return 0;
        }
        return [NSFontCollection hideFontCollectionWithName:[NSString stringWithUTF8String:name]
                                                 visibility:(NSFontCollectionVisibility)visibility
                                                      error:nil] ? 1 : 0;
    }
}

int ns_fontcollection_rename(const char *old_name, unsigned visibility, const char *new_name)
{
    @autoreleasepool {
        if (!old_name || old_name[0] == '\0' || !new_name || new_name[0] == '\0') {
            return 0;
        }
        return [NSFontCollection renameFontCollectionWithName:[NSString stringWithUTF8String:old_name]
                                                   visibility:(NSFontCollectionVisibility)visibility
                                                       toName:[NSString stringWithUTF8String:new_name]
                                                        error:nil] ? 1 : 0;
    }
}

int ns_fontcollection_all_names_count(void)
{
    @autoreleasepool {
        return (int)[NSFontCollection allFontCollectionNames].count;
    }
}

int ns_fontcollection_all_name_at(int index, char *out, int out_len)
{
    @autoreleasepool {
        NSArray<NSFontCollectionName> *names = [NSFontCollection allFontCollectionNames];
        if (index < 0 || (NSUInteger)index >= names.count) {
            return 0;
        }
        return ns_fontcollection_copy_nsstring(names[(NSUInteger)index], out, out_len);
    }
}

int ns_fontcollection_query_descriptors_count(uintptr_t collection)
{
    @autoreleasepool {
        NSFontCollection *obj = ns_fontcollection_from(collection);
        return obj ? (int)obj.queryDescriptors.count : 0;
    }
}

uintptr_t ns_fontcollection_query_descriptor_at(uintptr_t collection, int index)
{
    @autoreleasepool {
        NSFontCollection *obj = ns_fontcollection_from(collection);
        if (!obj || index < 0 || (NSUInteger)index >= obj.queryDescriptors.count) {
            return 0;
        }
        return ns_fontdescriptor_wrap((__bridge void *)obj.queryDescriptors[(NSUInteger)index]);
    }
}

int ns_fontcollection_exclusion_descriptors_count(uintptr_t collection)
{
    @autoreleasepool {
        NSFontCollection *obj = ns_fontcollection_from(collection);
        return obj ? (int)obj.exclusionDescriptors.count : 0;
    }
}

uintptr_t ns_fontcollection_exclusion_descriptor_at(uintptr_t collection, int index)
{
    @autoreleasepool {
        NSFontCollection *obj = ns_fontcollection_from(collection);
        if (!obj || index < 0 || (NSUInteger)index >= obj.exclusionDescriptors.count) {
            return 0;
        }
        return ns_fontdescriptor_wrap((__bridge void *)obj.exclusionDescriptors[(NSUInteger)index]);
    }
}

int ns_fontcollection_matching_descriptors_count(uintptr_t collection)
{
    @autoreleasepool {
        NSFontCollection *obj = ns_fontcollection_from(collection);
        return obj ? (int)obj.matchingDescriptors.count : 0;
    }
}

uintptr_t ns_fontcollection_matching_descriptor_at(uintptr_t collection, int index)
{
    @autoreleasepool {
        NSFontCollection *obj = ns_fontcollection_from(collection);
        if (!obj || index < 0 || (NSUInteger)index >= obj.matchingDescriptors.count) {
            return 0;
        }
        return ns_fontdescriptor_wrap((__bridge void *)obj.matchingDescriptors[(NSUInteger)index]);
    }
}

int ns_fontcollection_matching_descriptors_for_family_count(uintptr_t collection, const char *family)
{
    @autoreleasepool {
        NSFontCollection *obj = ns_fontcollection_from(collection);
        if (!obj || !family || family[0] == '\0') {
            return 0;
        }
        return (int)[obj matchingDescriptorsForFamily:[NSString stringWithUTF8String:family]].count;
    }
}

uintptr_t ns_fontcollection_matching_descriptor_for_family_at(uintptr_t collection, const char *family, int index)
{
    @autoreleasepool {
        NSFontCollection *obj = ns_fontcollection_from(collection);
        if (!obj || !family || family[0] == '\0' || index < 0) {
            return 0;
        }
        NSArray<NSFontDescriptor *> *descriptors = [obj matchingDescriptorsForFamily:[NSString stringWithUTF8String:family]];
        if ((NSUInteger)index >= descriptors.count) {
            return 0;
        }
        return ns_fontdescriptor_wrap((__bridge void *)descriptors[(NSUInteger)index]);
    }
}

uintptr_t ns_fontcollection_mutable_with_descriptor(uintptr_t descriptor)
{
    @autoreleasepool {
        NSArray<NSFontDescriptor *> *descriptors = ns_fontcollection_descriptor_array(descriptor);
        if (!descriptors) {
            return 0;
        }
        return ns_fontcollection_retain_obj([NSMutableFontCollection fontCollectionWithDescriptors:descriptors]);
    }
}

uintptr_t ns_fontcollection_mutable_with_all_available(void)
{
    @autoreleasepool {
        return ns_fontcollection_retain_obj([NSMutableFontCollection fontCollectionWithAllAvailableDescriptors]);
    }
}

uintptr_t ns_fontcollection_mutable_with_name(const char *name)
{
    @autoreleasepool {
        if (!name || name[0] == '\0') {
            return 0;
        }
        return ns_fontcollection_retain_obj([NSMutableFontCollection fontCollectionWithName:[NSString stringWithUTF8String:name]]);
    }
}

uintptr_t ns_fontcollection_mutable_with_name_visibility(const char *name, unsigned visibility)
{
    @autoreleasepool {
        if (!name || name[0] == '\0') {
            return 0;
        }
        return ns_fontcollection_retain_obj(
            [NSMutableFontCollection fontCollectionWithName:[NSString stringWithUTF8String:name]
                                                 visibility:(NSFontCollectionVisibility)visibility]);
    }
}

void ns_fontcollection_add_query_for_descriptor(uintptr_t collection, uintptr_t descriptor)
{
    @autoreleasepool {
        NSMutableFontCollection *obj = ns_fontcollection_mutable_from(collection);
        NSArray<NSFontDescriptor *> *descriptors = ns_fontcollection_descriptor_array(descriptor);
        if (obj && descriptors) {
            [obj addQueryForDescriptors:descriptors];
        }
    }
}

void ns_fontcollection_remove_query_for_descriptor(uintptr_t collection, uintptr_t descriptor)
{
    @autoreleasepool {
        NSMutableFontCollection *obj = ns_fontcollection_mutable_from(collection);
        NSArray<NSFontDescriptor *> *descriptors = ns_fontcollection_descriptor_array(descriptor);
        if (obj && descriptors) {
            [obj removeQueryForDescriptors:descriptors];
        }
    }
}
