#import <AppKit/AppKit.h>
#import "ns-textstorage.h"
#import "ns-layoutmanager.h"

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

static NSTextStorage *ns_textstorage_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSTextStorage class]] ? (NSTextStorage *)obj : nil;
}

uintptr_t ns_textstorage_create(const char *string)
{
    @autoreleasepool {
        NSString *text = string ? [NSString stringWithUTF8String:string] : @"";
        return ns_retain_obj([[NSTextStorage alloc] initWithString:text]);
    }
}

uintptr_t ns_textstorage_wrap(void *storage)
{
    if (!storage) {
        return 0;
    }
    @autoreleasepool {
        NSTextStorage *obj = (__bridge NSTextStorage *)storage;
        return [obj isKindOfClass:[NSTextStorage class]] ? ns_retain_obj(obj) : 0;
    }
}

void ns_textstorage_destroy(uintptr_t storage)
{
    ns_release_handle(storage);
}

void *ns_textstorage_nstextstorage(uintptr_t storage)
{
    NSTextStorage *obj = ns_textstorage_from(storage);
    return obj ? (__bridge void *)obj : NULL;
}

void ns_textstorage_set_string(uintptr_t storage, const char *value)
{
    @autoreleasepool {
        NSTextStorage *obj = ns_textstorage_from(storage);
        if (obj) {
            [obj replaceCharactersInRange:NSMakeRange(0, obj.length) withString:value ? [NSString stringWithUTF8String:value] : @""];
        }
    }
}

int ns_textstorage_get_string(uintptr_t storage, char *out, int out_len)
{
    @autoreleasepool {
        NSTextStorage *obj = ns_textstorage_from(storage);
        if (!obj) {
            return 0;
        }
        return ns_copy_nsstring(obj.string, out, out_len);
    }
}

void ns_textstorage_add_layout_manager(uintptr_t storage, uintptr_t manager)
{
    @autoreleasepool {
        NSTextStorage *obj = ns_textstorage_from(storage);
        NSLayoutManager *lm = (__bridge NSLayoutManager *)ns_layoutmanager_nslayoutmanager(manager);
        if (obj && lm) {
            [obj addLayoutManager:lm];
        }
    }
}

void ns_textstorage_remove_layout_manager(uintptr_t storage, uintptr_t manager)
{
    @autoreleasepool {
        NSTextStorage *obj = ns_textstorage_from(storage);
        NSLayoutManager *lm = (__bridge NSLayoutManager *)ns_layoutmanager_nslayoutmanager(manager);
        if (obj && lm) {
            [obj removeLayoutManager:lm];
        }
    }
}

int ns_textstorage_layout_managers_count(uintptr_t storage)
{
    @autoreleasepool {
        NSTextStorage *obj = ns_textstorage_from(storage);
        return obj ? (int)obj.layoutManagers.count : 0;
    }
}

int ns_textstorage_edited_mask(uintptr_t storage)
{
    @autoreleasepool {
        NSTextStorage *obj = ns_textstorage_from(storage);
        return obj ? (int)obj.editedMask : 0;
    }
}

void ns_textstorage_get_edited_range(uintptr_t storage, int *location, int *length)
{
    if (location) {
        *location = 0;
    }
    if (length) {
        *length = 0;
    }
    @autoreleasepool {
        NSTextStorage *obj = ns_textstorage_from(storage);
        if (!obj) {
            return;
        }
        if (location) {
            *location = (int)obj.editedRange.location;
        }
        if (length) {
            *length = (int)obj.editedRange.length;
        }
    }
}

int ns_textstorage_change_in_length(uintptr_t storage)
{
    @autoreleasepool {
        NSTextStorage *obj = ns_textstorage_from(storage);
        return obj ? (int)obj.changeInLength : 0;
    }
}

void ns_textstorage_begin_editing(uintptr_t storage)
{
    @autoreleasepool {
        NSTextStorage *obj = ns_textstorage_from(storage);
        if (obj) {
            [obj beginEditing];
        }
    }
}

void ns_textstorage_end_editing(uintptr_t storage)
{
    @autoreleasepool {
        NSTextStorage *obj = ns_textstorage_from(storage);
        if (obj) {
            [obj endEditing];
        }
    }
}

void ns_textstorage_process_editing(uintptr_t storage)
{
    @autoreleasepool {
        NSTextStorage *obj = ns_textstorage_from(storage);
        if (obj) {
            [obj processEditing];
        }
    }
}

void ns_textstorage_set_fixes_attributes_lazily(uintptr_t storage, int flag)
{
    (void)storage;
    (void)flag;
}

int ns_textstorage_fixes_attributes_lazily(uintptr_t storage)
{
    @autoreleasepool {
        NSTextStorage *obj = ns_textstorage_from(storage);
        return obj && obj.fixesAttributesLazily ? 1 : 0;
    }
}
