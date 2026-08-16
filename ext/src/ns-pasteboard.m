#import <AppKit/AppKit.h>
#import "ns-pasteboard.h"
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

static NSPasteboard *ns_pasteboard_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSPasteboard class]] ? (NSPasteboard *)obj : nil;
}

uintptr_t ns_pasteboard_general(void)
{
    @autoreleasepool {
        return ns_retain_obj([NSPasteboard generalPasteboard]);
    }
}

uintptr_t ns_pasteboard_with_name(const char *name)
{
    @autoreleasepool {
        if (!name) {
            return 0;
        }
        NSPasteboard *board = [NSPasteboard pasteboardWithName:[NSString stringWithUTF8String:name]];
        return board ? ns_retain_obj(board) : 0;
    }
}

uintptr_t ns_pasteboard_with_unique_name(void)
{
    @autoreleasepool {
        return ns_retain_obj([NSPasteboard pasteboardWithUniqueName]);
    }
}

uintptr_t ns_pasteboard_wrap(void *pasteboard)
{
    if (!pasteboard) {
        return 0;
    }
    @autoreleasepool {
        NSPasteboard *obj = (__bridge NSPasteboard *)pasteboard;
        return [obj isKindOfClass:[NSPasteboard class]] ? ns_retain_obj(obj) : 0;
    }
}

void ns_pasteboard_destroy(uintptr_t pasteboard)
{
    ns_release_handle(pasteboard);
}

void *ns_pasteboard_nspasteboard(uintptr_t pasteboard)
{
    NSPasteboard *obj = ns_pasteboard_from(pasteboard);
    return obj ? (__bridge void *)obj : NULL;
}

int ns_pasteboard_name(uintptr_t pasteboard, char *out, int out_len)
{
    @autoreleasepool {
        NSPasteboard *obj = ns_pasteboard_from(pasteboard);
        return ns_copy_nsstring(obj.name, out, out_len);
    }
}

long long ns_pasteboard_change_count(uintptr_t pasteboard)
{
    @autoreleasepool {
        NSPasteboard *obj = ns_pasteboard_from(pasteboard);
        return obj ? (long long)obj.changeCount : 0;
    }
}

long long ns_pasteboard_clear_contents(uintptr_t pasteboard)
{
    @autoreleasepool {
        NSPasteboard *obj = ns_pasteboard_from(pasteboard);
        return obj ? (long long)[obj clearContents] : 0;
    }
}

int ns_pasteboard_write_strings(uintptr_t pasteboard, const char **items, int count, const char *type)
{
    @autoreleasepool {
        NSPasteboard *obj = ns_pasteboard_from(pasteboard);
        if (!obj || !type) {
            return 0;
        }
        NSPasteboardType pbType = [NSString stringWithUTF8String:type];
        NSMutableArray *objects = [NSMutableArray arrayWithCapacity:(NSUInteger)count];
        int i;
        for (i = 0; i < count; i++) {
            if (items && items[i]) {
                [objects addObject:[NSString stringWithUTF8String:items[i]]];
            }
        }
        if (objects.count == 0) {
            return 0;
        }
        [obj clearContents];
        if (objects.count == 1) {
            return [obj setString:objects[0] forType:pbType] ? 1 : 0;
        }
        return [obj writeObjects:objects] ? 1 : 0;
    }
}

int ns_pasteboard_string_for_type(uintptr_t pasteboard, const char *type, char *out, int out_len)
{
    @autoreleasepool {
        NSPasteboard *obj = ns_pasteboard_from(pasteboard);
        if (!obj || !type) {
            return 0;
        }
        NSString *value = [obj stringForType:[NSString stringWithUTF8String:type]];
        return ns_copy_nsstring(value, out, out_len);
    }
}

int ns_pasteboard_set_string(uintptr_t pasteboard, const char *string, const char *type)
{
    @autoreleasepool {
        NSPasteboard *obj = ns_pasteboard_from(pasteboard);
        if (!obj || !type || !string) {
            return 0;
        }
        return [obj setString:[NSString stringWithUTF8String:string]
                      forType:[NSString stringWithUTF8String:type]] ? 1 : 0;
    }
}

int ns_pasteboard_types_count(uintptr_t pasteboard)
{
    @autoreleasepool {
        NSPasteboard *obj = ns_pasteboard_from(pasteboard);
        return obj && obj.types ? (int)obj.types.count : 0;
    }
}

int ns_pasteboard_type_at(uintptr_t pasteboard, int index, char *out, int out_len)
{
    @autoreleasepool {
        NSPasteboard *obj = ns_pasteboard_from(pasteboard);
        if (!obj || !obj.types || index < 0 || index >= (int)obj.types.count) {
            return 0;
        }
        return ns_copy_nsstring(obj.types[(NSUInteger)index], out, out_len);
    }
}

int ns_pasteboard_can_read_types(uintptr_t pasteboard, const char **types, int count)
{
    @autoreleasepool {
        NSPasteboard *obj = ns_pasteboard_from(pasteboard);
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
        return [obj canReadItemWithDataConformingToTypes:typeArray] ? 1 : 0;
    }
}

int ns_pasteboard_items_count(uintptr_t pasteboard)
{
    @autoreleasepool {
        NSPasteboard *obj = ns_pasteboard_from(pasteboard);
        return obj && obj.pasteboardItems ? (int)obj.pasteboardItems.count : 0;
    }
}

uintptr_t ns_pasteboard_item_at(uintptr_t pasteboard, int index)
{
    @autoreleasepool {
        NSPasteboard *obj = ns_pasteboard_from(pasteboard);
        if (!obj || !obj.pasteboardItems || index < 0 || index >= (int)obj.pasteboardItems.count) {
            return 0;
        }
        return ns_pasteboarditem_wrap((__bridge void *)obj.pasteboardItems[(NSUInteger)index]);
    }
}

int ns_pasteboard_access_behavior(uintptr_t pasteboard)
{
    @autoreleasepool {
        NSPasteboard *obj = ns_pasteboard_from(pasteboard);
        if (!obj) {
            return 0;
        }
        if (@available(macOS 15.4, *)) {
            return (int)obj.accessBehavior;
        }
        return 0;
    }
}
