#import <AppKit/AppKit.h>
#import "ns-pathcomponentcell.h"

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

static NSMenu *ns_menu_from_handle(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSMenu class]] ? (NSMenu *)obj : nil;
}

static NSColor *ns_color_from_handle(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSColor class]] ? (NSColor *)obj : nil;
}

static NSImage *ns_image_from_handle(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSImage class]] ? (NSImage *)obj : nil;
}

static NSURL *ns_url_from_path(const char *path)
{
    if (!path || path[0] == '\0') {
        return nil;
    }
    NSString *text = [NSString stringWithUTF8String:path];
    if (!text) {
        return nil;
    }
    if ([text containsString:@"://"]) {
        NSURL *url = [NSURL URLWithString:text];
        return url ? url : [NSURL fileURLWithPath:text];
    }
    return [NSURL fileURLWithPath:text];
}

static int ns_copy_url_path(NSURL *url, char *out, int out_len)
{
    if (!url) {
        return ns_copy_nsstring(@"", out, out_len);
    }
    if (url.isFileURL) {
        return ns_copy_nsstring(url.path, out, out_len);
    }
    return ns_copy_nsstring(url.absoluteString, out, out_len);
}

static NSPathComponentCell *ns_pathcomponentcell_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSPathComponentCell class]] ? (NSPathComponentCell *)obj : nil;
}

uintptr_t ns_pathcomponentcell_create_text(const char *string)
{
    @autoreleasepool {
        NSString *title = string ? [NSString stringWithUTF8String:string] : @"";
        return ns_retain_obj([[NSPathComponentCell alloc] initTextCell:title]);
    }
}

uintptr_t ns_pathcomponentcell_wrap(void *cell)
{
    if (!cell) {
        return 0;
    }
    @autoreleasepool {
        NSPathComponentCell *obj = (__bridge NSPathComponentCell *)cell;
        return [obj isKindOfClass:[NSPathComponentCell class]] ? ns_retain_obj(obj) : 0;
    }
}

void ns_pathcomponentcell_destroy(uintptr_t cell)
{
    ns_release_handle(cell);
}

void *ns_pathcomponentcell_nspathcomponentcell(uintptr_t cell)
{
    NSPathComponentCell *obj = ns_pathcomponentcell_from(cell);
    return obj ? (__bridge void *)obj : NULL;
}

void ns_pathcomponentcell_set_title(uintptr_t cell, const char *title)
{
    @autoreleasepool {
        NSPathComponentCell *obj = ns_pathcomponentcell_from(cell);
        if (obj) {
            obj.title = title ? [NSString stringWithUTF8String:title] : @"";
        }
    }
}

int ns_pathcomponentcell_get_title(uintptr_t cell, char *out, int out_len)
{
    @autoreleasepool {
        NSPathComponentCell *obj = ns_pathcomponentcell_from(cell);
        return obj ? ns_copy_nsstring(obj.title, out, out_len) : 0;
    }
}

void ns_pathcomponentcell_set_string_value(uintptr_t cell, const char *value)
{
    @autoreleasepool {
        NSPathComponentCell *obj = ns_pathcomponentcell_from(cell);
        if (obj) {
            obj.stringValue = value ? [NSString stringWithUTF8String:value] : @"";
        }
    }
}

int ns_pathcomponentcell_get_string_value(uintptr_t cell, char *out, int out_len)
{
    @autoreleasepool {
        NSPathComponentCell *obj = ns_pathcomponentcell_from(cell);
        return obj ? ns_copy_nsstring(obj.stringValue, out, out_len) : 0;
    }
}

void ns_pathcomponentcell_set_image(uintptr_t cell, uintptr_t image)
{
    @autoreleasepool {
        NSPathComponentCell *obj = ns_pathcomponentcell_from(cell);
        if (obj) {
            obj.image = ns_image_from_handle(image);
        }
    }
}

uintptr_t ns_pathcomponentcell_get_image(uintptr_t cell)
{
    @autoreleasepool {
        NSPathComponentCell *obj = ns_pathcomponentcell_from(cell);
        return obj && obj.image ? ns_retain_obj(obj.image) : 0;
    }
}

void ns_pathcomponentcell_set_url_path(uintptr_t cell, const char *path)
{
    @autoreleasepool {
        NSPathComponentCell *obj = ns_pathcomponentcell_from(cell);
        if (obj) {
            obj.URL = ns_url_from_path(path);
        }
    }
}

int ns_pathcomponentcell_get_url_path(uintptr_t cell, char *out, int out_len)
{
    @autoreleasepool {
        NSPathComponentCell *obj = ns_pathcomponentcell_from(cell);
        return obj ? ns_copy_url_path(obj.URL, out, out_len) : 0;
    }
}
