#import <AppKit/AppKit.h>
#import "ns-textlist.h"

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

static NSTextList *ns_textlist_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSTextList class]] ? (NSTextList *)obj : nil;
}

uintptr_t ns_textlist_create(const char *marker_format, int options, int starting_item_number)
{
    @autoreleasepool {
        NSString *format = marker_format ? [NSString stringWithUTF8String:marker_format] : @"{decimal}.";
        NSTextList *list = [[NSTextList alloc] initWithMarkerFormat:format options:(NSUInteger)options startingItemNumber:(NSInteger)starting_item_number];
        return ns_retain_obj(list);
    }
}

uintptr_t ns_textlist_wrap(void *list)
{
    if (!list) {
        return 0;
    }
    @autoreleasepool {
        NSTextList *obj = (__bridge NSTextList *)list;
        return [obj isKindOfClass:[NSTextList class]] ? ns_retain_obj(obj) : 0;
    }
}

void ns_textlist_destroy(uintptr_t list)
{
    ns_release_handle(list);
}

void *ns_textlist_nstextlist(uintptr_t list)
{
    NSTextList *obj = ns_textlist_from(list);
    return obj ? (__bridge void *)obj : NULL;
}

int ns_textlist_marker_for_item_number(uintptr_t list, int item_number, char *out, int out_len)
{
    @autoreleasepool {
        NSTextList *obj = ns_textlist_from(list);
        if (!obj) {
            return 0;
        }
        return ns_copy_nsstring([obj markerForItemNumber:(NSInteger)item_number], out, out_len);
    }
}

int ns_textlist_is_ordered(uintptr_t list)
{
    @autoreleasepool {
        NSTextList *obj = ns_textlist_from(list);
        return obj && obj.isOrdered ? 1 : 0;
    }
}

void ns_textlist_set_starting_item_number(uintptr_t list, int number)
{
    @autoreleasepool {
        NSTextList *obj = ns_textlist_from(list);
        if (obj) {
            obj.startingItemNumber = (NSInteger)number;
        }
    }
}

int ns_textlist_get_starting_item_number(uintptr_t list)
{
    @autoreleasepool {
        NSTextList *obj = ns_textlist_from(list);
        return obj ? (int)obj.startingItemNumber : 0;
    }
}

int ns_textlist_get_marker_format(uintptr_t list, char *out, int out_len)
{
    @autoreleasepool {
        NSTextList *obj = ns_textlist_from(list);
        return obj ? ns_copy_nsstring(obj.markerFormat, out, out_len) : 0;
    }
}
