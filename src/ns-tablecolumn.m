#import <AppKit/AppKit.h>
#import "ns-tablecolumn.h"

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

static NSTableColumn *ns_tablecolumn_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSTableColumn class]] ? (NSTableColumn *)obj : nil;
}

uintptr_t ns_tablecolumn_create(const char *identifier)
{
    @autoreleasepool {
        NSString *ident = identifier ? [NSString stringWithUTF8String:identifier] : @"column";
        return ns_retain_obj([[NSTableColumn alloc] initWithIdentifier:ident]);
    }
}

uintptr_t ns_tablecolumn_wrap(void *column)
{
    if (!column) {
        return 0;
    }
    @autoreleasepool {
        NSTableColumn *obj = (__bridge NSTableColumn *)column;
        return [obj isKindOfClass:[NSTableColumn class]] ? ns_retain_obj(obj) : 0;
    }
}

void ns_tablecolumn_destroy(uintptr_t column)
{
    ns_release_handle(column);
}

void *ns_tablecolumn_nstablecolumn(uintptr_t column)
{
    NSTableColumn *obj = ns_tablecolumn_from(column);
    return obj ? (__bridge void *)obj : NULL;
}

void ns_tablecolumn_set_identifier(uintptr_t column, const char *identifier)
{
    @autoreleasepool {
        NSTableColumn *obj = ns_tablecolumn_from(column);
        if (obj) {
            obj.identifier = identifier ? [NSString stringWithUTF8String:identifier] : @"";
        }
    }
}

int ns_tablecolumn_get_identifier(uintptr_t column, char *out, int out_len)
{
    @autoreleasepool {
        NSTableColumn *obj = ns_tablecolumn_from(column);
        if (!obj) {
            return 0;
        }
        return ns_copy_nsstring(obj.identifier, out, out_len);
    }
}

void ns_tablecolumn_set_title(uintptr_t column, const char *title)
{
    @autoreleasepool {
        NSTableColumn *obj = ns_tablecolumn_from(column);
        if (obj) {
            obj.title = title ? [NSString stringWithUTF8String:title] : @"";
        }
    }
}

int ns_tablecolumn_get_title(uintptr_t column, char *out, int out_len)
{
    @autoreleasepool {
        NSTableColumn *obj = ns_tablecolumn_from(column);
        if (!obj) {
            return 0;
        }
        return ns_copy_nsstring(obj.title, out, out_len);
    }
}

void ns_tablecolumn_set_width(uintptr_t column, double width)
{
    @autoreleasepool {
        NSTableColumn *obj = ns_tablecolumn_from(column);
        if (obj) {
            obj.width = (CGFloat)width;
        }
    }
}

double ns_tablecolumn_get_width(uintptr_t column)
{
    @autoreleasepool {
        NSTableColumn *obj = ns_tablecolumn_from(column);
        return obj ? (double)obj.width : 0.0;
    }
}

void ns_tablecolumn_set_min_width(uintptr_t column, double width)
{
    @autoreleasepool {
        NSTableColumn *obj = ns_tablecolumn_from(column);
        if (obj) {
            obj.minWidth = (CGFloat)width;
        }
    }
}

double ns_tablecolumn_get_min_width(uintptr_t column)
{
    @autoreleasepool {
        NSTableColumn *obj = ns_tablecolumn_from(column);
        return obj ? (double)obj.minWidth : 0.0;
    }
}

void ns_tablecolumn_set_max_width(uintptr_t column, double width)
{
    @autoreleasepool {
        NSTableColumn *obj = ns_tablecolumn_from(column);
        if (obj) {
            obj.maxWidth = (CGFloat)width;
        }
    }
}

double ns_tablecolumn_get_max_width(uintptr_t column)
{
    @autoreleasepool {
        NSTableColumn *obj = ns_tablecolumn_from(column);
        return obj ? (double)obj.maxWidth : 0.0;
    }
}

void ns_tablecolumn_set_hidden(uintptr_t column, int flag)
{
    @autoreleasepool {
        NSTableColumn *obj = ns_tablecolumn_from(column);
        if (obj) {
            obj.hidden = flag ? YES : NO;
        }
    }
}

int ns_tablecolumn_is_hidden(uintptr_t column)
{
    @autoreleasepool {
        NSTableColumn *obj = ns_tablecolumn_from(column);
        return obj && obj.hidden ? 1 : 0;
    }
}

void ns_tablecolumn_set_editable(uintptr_t column, int flag)
{
    @autoreleasepool {
        NSTableColumn *obj = ns_tablecolumn_from(column);
        if (obj) {
            obj.editable = flag ? YES : NO;
        }
    }
}

int ns_tablecolumn_is_editable(uintptr_t column)
{
    @autoreleasepool {
        NSTableColumn *obj = ns_tablecolumn_from(column);
        return obj && obj.editable ? 1 : 0;
    }
}

void ns_tablecolumn_set_resizing_mask(uintptr_t column, int mask)
{
    @autoreleasepool {
        NSTableColumn *obj = ns_tablecolumn_from(column);
        if (obj) {
            obj.resizingMask = (NSTableColumnResizingOptions)mask;
        }
    }
}

int ns_tablecolumn_get_resizing_mask(uintptr_t column)
{
    @autoreleasepool {
        NSTableColumn *obj = ns_tablecolumn_from(column);
        return obj ? (int)obj.resizingMask : 0;
    }
}
