#import <AppKit/AppKit.h>
#import "ns-pathcontrol.h"
#import "ns-view.h"

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

@interface NSPhpPathControl : NSPathControl
@property (nonatomic, assign) int pendingChange;
@end

@implementation NSPhpPathControl

- (void)nsChanged:(id)sender
{
    (void)sender;
    self.pendingChange = 1;
}

@end

static NSPathControl *ns_pathcontrol_view(uintptr_t handle)
{
    void *ptr = ns_view_nsview(handle);
    if (!ptr) {
        return nil;
    }
    NSView *view = (__bridge NSView *)ptr;
    return [view isKindOfClass:[NSPathControl class]] ? (NSPathControl *)view : nil;
}

uintptr_t ns_pathcontrol_create(double x, double y, double width, double height)
{
    if (width <= 0) {
        width = 240;
    }
    if (height <= 0) {
        height = 24;
    }

    @autoreleasepool {
        NSRect rect = NSMakeRect((CGFloat)x, (CGFloat)y, (CGFloat)width, (CGFloat)height);
        NSPhpPathControl *control = [[NSPhpPathControl alloc] initWithFrame:rect];
        [control setTarget:control];
        [control setAction:@selector(nsChanged:)];
        return ns_view_wrap((__bridge void *)control);
    }
}

void ns_pathcontrol_destroy(uintptr_t control)
{
    ns_view_destroy(control);
}

void ns_pathcontrol_set_url_path(uintptr_t control, const char *path)
{
    @autoreleasepool {
        NSPathControl *obj = ns_pathcontrol_view(control);
        if (obj) {
            obj.URL = ns_url_from_path(path);
        }
    }
}

int ns_pathcontrol_get_url_path(uintptr_t control, char *out, int out_len)
{
    @autoreleasepool {
        NSPathControl *obj = ns_pathcontrol_view(control);
        return obj ? ns_copy_url_path(obj.URL, out, out_len) : 0;
    }
}

void ns_pathcontrol_set_path_style(uintptr_t control, int style)
{
    @autoreleasepool {
        NSPathControl *obj = ns_pathcontrol_view(control);
        if (obj) {
            obj.pathStyle = (NSPathStyle)style;
        }
    }
}

int ns_pathcontrol_get_path_style(uintptr_t control)
{
    @autoreleasepool {
        NSPathControl *obj = ns_pathcontrol_view(control);
        return obj ? (int)obj.pathStyle : 0;
    }
}

void ns_pathcontrol_set_editable(uintptr_t control, int flag)
{
    @autoreleasepool {
        NSPathControl *obj = ns_pathcontrol_view(control);
        if (obj) {
            obj.editable = flag ? YES : NO;
        }
    }
}

int ns_pathcontrol_is_editable(uintptr_t control)
{
    @autoreleasepool {
        NSPathControl *obj = ns_pathcontrol_view(control);
        return obj && obj.editable ? 1 : 0;
    }
}

void ns_pathcontrol_set_placeholder_string(uintptr_t control, const char *placeholder)
{
    @autoreleasepool {
        NSPathControl *obj = ns_pathcontrol_view(control);
        if (obj) {
            obj.placeholderString = placeholder ? [NSString stringWithUTF8String:placeholder] : nil;
        }
    }
}

int ns_pathcontrol_get_placeholder_string(uintptr_t control, char *out, int out_len)
{
    @autoreleasepool {
        NSPathControl *obj = ns_pathcontrol_view(control);
        return obj ? ns_copy_nsstring(obj.placeholderString, out, out_len) : 0;
    }
}

void ns_pathcontrol_set_background_color(uintptr_t control, uintptr_t color)
{
    @autoreleasepool {
        NSPathControl *obj = ns_pathcontrol_view(control);
        if (obj) {
            obj.backgroundColor = ns_color_from_handle(color);
        }
    }
}

void ns_pathcontrol_set_allowed_types(uintptr_t control, const char **items, int count)
{
    @autoreleasepool {
        NSPathControl *obj = ns_pathcontrol_view(control);
        if (obj) {
            obj.allowedTypes = ns_allowed_types_from_items(items, count);
        }
    }
}

int ns_pathcontrol_poll_change(uintptr_t control)
{
    void *ptr = ns_view_nsview(control);
    if (!ptr) {
        return 0;
    }

    @autoreleasepool {
        NSView *view = (__bridge NSView *)ptr;
        if (![view isKindOfClass:[NSPhpPathControl class]]) {
            return 0;
        }
        NSPhpPathControl *typed = (NSPhpPathControl *)view;
        if (typed.pendingChange != 1) {
            return 0;
        }
        typed.pendingChange = 0;
        return 1;
    }
}
