#import <AppKit/AppKit.h>
#import "ns-colorlist.h"
#import "ns-color.h"

static uintptr_t ns_colorlist_retain_obj(id object)
{
    return object ? (uintptr_t)(__bridge_retained void *)object : 0;
}

static NSColorList *ns_colorlist_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSColorList class]] ? (NSColorList *)obj : nil;
}

static int ns_colorlist_copy_nsstring(NSString *text, char *out, int out_len)
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

uintptr_t ns_colorlist_wrap(void *list)
{
    if (!list) {
        return 0;
    }
    @autoreleasepool {
        NSColorList *obj = (__bridge NSColorList *)list;
        return [obj isKindOfClass:[NSColorList class]] ? ns_colorlist_retain_obj(obj) : 0;
    }
}

void ns_colorlist_destroy(uintptr_t list)
{
    if (!list) {
        return;
    }
    CFRelease((void *)list);
}

void *ns_colorlist_nscolorlist(uintptr_t list)
{
    NSColorList *obj = ns_colorlist_from(list);
    return obj ? (__bridge void *)obj : NULL;
}

int ns_colorlist_available_count(void)
{
    @autoreleasepool {
        return (int)[NSColorList availableColorLists].count;
    }
}

uintptr_t ns_colorlist_available_at(int index)
{
    @autoreleasepool {
        NSArray<NSColorList *> *lists = [NSColorList availableColorLists];
        if (index < 0 || index >= (int)lists.count) {
            return 0;
        }
        return ns_colorlist_retain_obj(lists[(NSUInteger)index]);
    }
}

uintptr_t ns_colorlist_named(const char *name)
{
    @autoreleasepool {
        if (!name || name[0] == '\0') {
            return 0;
        }
        return ns_colorlist_retain_obj([NSColorList colorListNamed:[NSString stringWithUTF8String:name]]);
    }
}

uintptr_t ns_colorlist_create(const char *name)
{
    @autoreleasepool {
        NSString *listName = name ? [NSString stringWithUTF8String:name] : @"";
        return ns_colorlist_retain_obj([[NSColorList alloc] initWithName:listName]);
    }
}

uintptr_t ns_colorlist_create_from_file(const char *name, const char *path)
{
    @autoreleasepool {
        NSString *listName = name ? [NSString stringWithUTF8String:name] : @"";
        NSString *filePath = path ? [NSString stringWithUTF8String:path] : nil;
        return ns_colorlist_retain_obj([[NSColorList alloc] initWithName:listName fromFile:filePath]);
    }
}

int ns_colorlist_name(uintptr_t list, char *out, int out_len)
{
    @autoreleasepool {
        NSColorList *obj = ns_colorlist_from(list);
        if (!obj) {
            return 0;
        }
        return ns_colorlist_copy_nsstring(obj.name, out, out_len);
    }
}

int ns_colorlist_is_editable(uintptr_t list)
{
    @autoreleasepool {
        NSColorList *obj = ns_colorlist_from(list);
        return obj && obj.editable ? 1 : 0;
    }
}

void ns_colorlist_set_color(uintptr_t list, uintptr_t color, const char *key)
{
    @autoreleasepool {
        NSColorList *obj = ns_colorlist_from(list);
        void *colorPtr = ns_color_nscolor(color);
        NSColor *nsColor = colorPtr ? (__bridge NSColor *)colorPtr : nil;
        if (!obj || !nsColor || !key || key[0] == '\0') {
            return;
        }
        [obj setColor:nsColor forKey:[NSString stringWithUTF8String:key]];
    }
}

void ns_colorlist_insert_color(uintptr_t list, uintptr_t color, const char *key, int index)
{
    @autoreleasepool {
        NSColorList *obj = ns_colorlist_from(list);
        void *colorPtr = ns_color_nscolor(color);
        NSColor *nsColor = colorPtr ? (__bridge NSColor *)colorPtr : nil;
        if (!obj || !nsColor || !key || key[0] == '\0' || index < 0) {
            return;
        }
        [obj insertColor:nsColor key:[NSString stringWithUTF8String:key] atIndex:(NSUInteger)index];
    }
}

void ns_colorlist_remove_color_with_key(uintptr_t list, const char *key)
{
    @autoreleasepool {
        NSColorList *obj = ns_colorlist_from(list);
        if (!obj || !key || key[0] == '\0') {
            return;
        }
        [obj removeColorWithKey:[NSString stringWithUTF8String:key]];
    }
}

uintptr_t ns_colorlist_color_with_key(uintptr_t list, const char *key)
{
    @autoreleasepool {
        NSColorList *obj = ns_colorlist_from(list);
        if (!obj || !key || key[0] == '\0') {
            return 0;
        }
        return ns_color_wrap((__bridge void *)[obj colorWithKey:[NSString stringWithUTF8String:key]]);
    }
}

int ns_colorlist_all_keys_count(uintptr_t list)
{
    @autoreleasepool {
        NSColorList *obj = ns_colorlist_from(list);
        return obj ? (int)obj.allKeys.count : 0;
    }
}

int ns_colorlist_all_key_at(uintptr_t list, int index, char *out, int out_len)
{
    @autoreleasepool {
        NSColorList *obj = ns_colorlist_from(list);
        if (!obj || index < 0 || index >= (int)obj.allKeys.count) {
            return 0;
        }
        return ns_colorlist_copy_nsstring(obj.allKeys[(NSUInteger)index], out, out_len);
    }
}

int ns_colorlist_write_to_url(uintptr_t list, const char *url)
{
    @autoreleasepool {
        NSColorList *obj = ns_colorlist_from(list);
        if (!obj) {
            return 0;
        }
        NSURL *target = nil;
        if (url && url[0] != '\0') {
            target = [NSURL URLWithString:[NSString stringWithUTF8String:url]];
            if (!target) {
                target = [NSURL fileURLWithPath:[NSString stringWithUTF8String:url]];
            }
        }
        NSError *error = nil;
        return [obj writeToURL:target error:&error] ? 1 : 0;
    }
}

void ns_colorlist_remove_file(uintptr_t list)
{
    @autoreleasepool {
        NSColorList *obj = ns_colorlist_from(list);
        if (obj) {
            [obj removeFile];
        }
    }
}
