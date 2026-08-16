#import <AppKit/AppKit.h>
#import <CoreData/CoreData.h>
#import "ns-persistentdocument.h"

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

static NSURL *ns_url_from_cstr(const char *url)
{
    if (!url) {
        return nil;
    }
    NSString *str = [NSString stringWithUTF8String:url];
    NSURL *parsed = [NSURL URLWithString:str];
    return parsed ? parsed : [NSURL fileURLWithPath:str];
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

static NSPersistentDocument *ns_persistentdocument_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSPersistentDocument class]] ? (NSPersistentDocument *)obj : nil;
}

uintptr_t ns_persistentdocument_create(void)
{
    @autoreleasepool {
        return ns_retain_obj([[NSPersistentDocument alloc] init]);
    }
}

uintptr_t ns_persistentdocument_wrap(void *document)
{
    if (!document) {
        return 0;
    }
    @autoreleasepool {
        NSPersistentDocument *obj = (__bridge NSPersistentDocument *)document;
        return [obj isKindOfClass:[NSPersistentDocument class]] ? ns_retain_obj(obj) : 0;
    }
}

void ns_persistentdocument_destroy(uintptr_t document)
{
    ns_release_handle(document);
}

void *ns_persistentdocument_nspersistentdocument(uintptr_t document)
{
    NSPersistentDocument *obj = ns_persistentdocument_from(document);
    return obj ? (__bridge void *)obj : NULL;
}

void *ns_persistentdocument_managed_object_context(uintptr_t document)
{
    @autoreleasepool {
        NSPersistentDocument *obj = ns_persistentdocument_from(document);
        return obj && obj.managedObjectContext ? (__bridge void *)obj.managedObjectContext : NULL;
    }
}

void *ns_persistentdocument_managed_object_model(uintptr_t document)
{
    @autoreleasepool {
        NSPersistentDocument *obj = ns_persistentdocument_from(document);
        return obj && obj.managedObjectModel ? (__bridge void *)obj.managedObjectModel : NULL;
    }
}

int ns_persistentdocument_persistent_store_type_for_file_type(uintptr_t document, const char *file_type, char *out, int out_len)
{
    @autoreleasepool {
        NSPersistentDocument *obj = ns_persistentdocument_from(document);
        if (!obj || !file_type) {
            return 0;
        }
        return ns_copy_nsstring([obj persistentStoreTypeForFileType:[NSString stringWithUTF8String:file_type]], out, out_len);
    }
}

int ns_persistentdocument_read_from_url(uintptr_t document, const char *url, const char *type_name)
{
    @autoreleasepool {
        NSPersistentDocument *obj = ns_persistentdocument_from(document);
        if (!obj || !url || !type_name) {
            return 0;
        }
        NSURL *file = ns_url_from_cstr(url);
        if (!file) {
            return 0;
        }
        NSError *error = nil;
        return [obj readFromURL:file ofType:[NSString stringWithUTF8String:type_name] error:&error] ? 1 : 0;
    }
}

int ns_persistentdocument_write_to_url(uintptr_t document, const char *url, const char *type_name, unsigned save_operation, const char *original_url)
{
    @autoreleasepool {
        NSPersistentDocument *obj = ns_persistentdocument_from(document);
        if (!obj || !url || !type_name) {
            return 0;
        }
        NSURL *file = ns_url_from_cstr(url);
        if (!file) {
            return 0;
        }
        NSURL *original = original_url ? ns_url_from_cstr(original_url) : nil;
        NSError *error = nil;
        return [obj writeToURL:file
                        ofType:[NSString stringWithUTF8String:type_name]
              forSaveOperation:(NSSaveOperationType)save_operation
         originalContentsURL:original
                         error:&error] ? 1 : 0;
    }
}

int ns_persistentdocument_revert_to_contents_of_url(uintptr_t document, const char *url, const char *type_name)
{
    @autoreleasepool {
        NSPersistentDocument *obj = ns_persistentdocument_from(document);
        if (!obj || !url || !type_name) {
            return 0;
        }
        NSURL *file = ns_url_from_cstr(url);
        if (!file) {
            return 0;
        }
        NSError *error = nil;
        return [obj revertToContentsOfURL:file ofType:[NSString stringWithUTF8String:type_name] error:&error] ? 1 : 0;
    }
}
