#import <AppKit/AppKit.h>
#import "ns-pathcell.h"

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

static NSArray<NSString *> *ns_allowed_types_from_items(const char **items, int count)
{
    NSMutableArray<NSString *> *types = [NSMutableArray array];
    if (!items || count <= 0) {
        return types;
    }
    for (int i = 0; i < count; i++) {
        if (!items[i] || items[i][0] == '\0') {
            continue;
        }
        NSString *ident = [NSString stringWithUTF8String:items[i]];
        if (ident) {
            [types addObject:ident];
        }
    }
    return types;
}

static NSPathCell *ns_pathcell_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSPathCell class]] ? (NSPathCell *)obj : nil;
}

uintptr_t ns_pathcell_create_text(const char *string)
{
    @autoreleasepool {
        NSString *title = string ? [NSString stringWithUTF8String:string] : @"";
        return ns_retain_obj([[NSPathCell alloc] initTextCell:title]);
    }
}

uintptr_t ns_pathcell_wrap(void *cell)
{
    if (!cell) {
        return 0;
    }
    @autoreleasepool {
        NSPathCell *obj = (__bridge NSPathCell *)cell;
        return [obj isKindOfClass:[NSPathCell class]] ? ns_retain_obj(obj) : 0;
    }
}

void ns_pathcell_destroy(uintptr_t cell)
{
    ns_release_handle(cell);
}

void *ns_pathcell_nspathcell(uintptr_t cell)
{
    NSPathCell *obj = ns_pathcell_from(cell);
    return obj ? (__bridge void *)obj : NULL;
}

void ns_pathcell_set_title(uintptr_t cell, const char *title)
{
    @autoreleasepool {
        NSPathCell *obj = ns_pathcell_from(cell);
        if (obj) {
            obj.title = title ? [NSString stringWithUTF8String:title] : @"";
        }
    }
}

int ns_pathcell_get_title(uintptr_t cell, char *out, int out_len)
{
    @autoreleasepool {
        NSPathCell *obj = ns_pathcell_from(cell);
        return obj ? ns_copy_nsstring(obj.title, out, out_len) : 0;
    }
}

void ns_pathcell_set_state(uintptr_t cell, int state)
{
    @autoreleasepool {
        NSPathCell *obj = ns_pathcell_from(cell);
        if (obj) {
            obj.state = (NSControlStateValue)state;
        }
    }
}

int ns_pathcell_get_state(uintptr_t cell)
{
    @autoreleasepool {
        NSPathCell *obj = ns_pathcell_from(cell);
        return obj ? (int)obj.state : 0;
    }
}

void ns_pathcell_set_enabled(uintptr_t cell, int enabled)
{
    @autoreleasepool {
        NSPathCell *obj = ns_pathcell_from(cell);
        if (obj) {
            obj.enabled = enabled ? YES : NO;
        }
    }
}

int ns_pathcell_is_enabled(uintptr_t cell)
{
    @autoreleasepool {
        NSPathCell *obj = ns_pathcell_from(cell);
        return obj && obj.enabled ? 1 : 0;
    }
}

void ns_pathcell_set_tag(uintptr_t cell, int tag)
{
    @autoreleasepool {
        NSPathCell *obj = ns_pathcell_from(cell);
        if (obj) {
            obj.tag = tag;
        }
    }
}

int ns_pathcell_get_tag(uintptr_t cell)
{
    @autoreleasepool {
        NSPathCell *obj = ns_pathcell_from(cell);
        return obj ? (int)obj.tag : 0;
    }
}

void ns_pathcell_set_path_style(uintptr_t cell, int style)
{
    @autoreleasepool {
        NSPathCell *obj = ns_pathcell_from(cell);
        if (obj) {
            obj.pathStyle = (NSPathStyle)style;
        }
    }
}

int ns_pathcell_get_path_style(uintptr_t cell)
{
    @autoreleasepool {
        NSPathCell *obj = ns_pathcell_from(cell);
        return obj ? (int)obj.pathStyle : 0;
    }
}

void ns_pathcell_set_url_path(uintptr_t cell, const char *path)
{
    @autoreleasepool {
        NSPathCell *obj = ns_pathcell_from(cell);
        if (obj) {
            obj.URL = ns_url_from_path(path);
        }
    }
}

int ns_pathcell_get_url_path(uintptr_t cell, char *out, int out_len)
{
    @autoreleasepool {
        NSPathCell *obj = ns_pathcell_from(cell);
        return obj ? ns_copy_url_path(obj.URL, out, out_len) : 0;
    }
}

void ns_pathcell_set_placeholder_string(uintptr_t cell, const char *placeholder)
{
    @autoreleasepool {
        NSPathCell *obj = ns_pathcell_from(cell);
        if (obj) {
            obj.placeholderString = placeholder ? [NSString stringWithUTF8String:placeholder] : nil;
        }
    }
}

int ns_pathcell_get_placeholder_string(uintptr_t cell, char *out, int out_len)
{
    @autoreleasepool {
        NSPathCell *obj = ns_pathcell_from(cell);
        return obj ? ns_copy_nsstring(obj.placeholderString, out, out_len) : 0;
    }
}

void ns_pathcell_set_background_color(uintptr_t cell, uintptr_t color)
{
    @autoreleasepool {
        NSPathCell *obj = ns_pathcell_from(cell);
        if (obj) {
            obj.backgroundColor = ns_color_from_handle(color);
        }
    }
}

void ns_pathcell_set_allowed_types(uintptr_t cell, const char **items, int count)
{
    @autoreleasepool {
        NSPathCell *obj = ns_pathcell_from(cell);
        if (obj) {
            obj.allowedTypes = ns_allowed_types_from_items(items, count);
        }
    }
}

int ns_pathcell_path_component_count(uintptr_t cell)
{
    @autoreleasepool {
        NSPathCell *obj = ns_pathcell_from(cell);
        return obj ? (int)obj.pathComponentCells.count : 0;
    }
}
