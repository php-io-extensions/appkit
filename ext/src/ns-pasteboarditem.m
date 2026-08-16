#import <AppKit/AppKit.h>
#import "ns-pasteboarditem.h"

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

static NSPasteboardItem *ns_pasteboarditem_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSPasteboardItem class]] ? (NSPasteboardItem *)obj : nil;
}

uintptr_t ns_pasteboarditem_create(void)
{
    @autoreleasepool {
        return ns_retain_obj([[NSPasteboardItem alloc] init]);
    }
}

uintptr_t ns_pasteboarditem_wrap(void *item)
{
    if (!item) {
        return 0;
    }
    @autoreleasepool {
        NSPasteboardItem *obj = (__bridge NSPasteboardItem *)item;
        return [obj isKindOfClass:[NSPasteboardItem class]] ? ns_retain_obj(obj) : 0;
    }
}

void ns_pasteboarditem_destroy(uintptr_t item)
{
    ns_release_handle(item);
}

void *ns_pasteboarditem_nspasteboarditem(uintptr_t item)
{
    NSPasteboardItem *obj = ns_pasteboarditem_from(item);
    return obj ? (__bridge void *)obj : NULL;
}

int ns_pasteboarditem_types_count(uintptr_t item)
{
    @autoreleasepool {
        NSPasteboardItem *obj = ns_pasteboarditem_from(item);
        return obj && obj.types ? (int)obj.types.count : 0;
    }
}

int ns_pasteboarditem_type_at(uintptr_t item, int index, char *out, int out_len)
{
    @autoreleasepool {
        NSPasteboardItem *obj = ns_pasteboarditem_from(item);
        if (!obj || !obj.types || index < 0 || index >= (int)obj.types.count) {
            return 0;
        }
        return ns_copy_nsstring(obj.types[(NSUInteger)index], out, out_len);
    }
}

int ns_pasteboarditem_available_type_from_array(uintptr_t item, const char **types, int count, char *out, int out_len)
{
    @autoreleasepool {
        NSPasteboardItem *obj = ns_pasteboarditem_from(item);
        if (!obj || !types || count <= 0) {
            return 0;
        }
        NSMutableArray *typeArray = [NSMutableArray arrayWithCapacity:(NSUInteger)count];
        int i;
        for (i = 0; i < count; i++) {
            if (types[i]) {
                [typeArray addObject:[NSString stringWithUTF8String:types[i]]];
            }
        }
        NSPasteboardType found = [obj availableTypeFromArray:typeArray];
        return ns_copy_nsstring(found, out, out_len);
    }
}

int ns_pasteboarditem_set_string(uintptr_t item, const char *string, const char *type)
{
    @autoreleasepool {
        NSPasteboardItem *obj = ns_pasteboarditem_from(item);
        if (!obj || !type || !string) {
            return 0;
        }
        return [obj setString:[NSString stringWithUTF8String:string]
                      forType:[NSString stringWithUTF8String:type]] ? 1 : 0;
    }
}

int ns_pasteboarditem_string_for_type(uintptr_t item, const char *type, char *out, int out_len)
{
    @autoreleasepool {
        NSPasteboardItem *obj = ns_pasteboarditem_from(item);
        if (!obj || !type) {
            return 0;
        }
        NSString *value = [obj stringForType:[NSString stringWithUTF8String:type]];
        return ns_copy_nsstring(value, out, out_len);
    }
}
