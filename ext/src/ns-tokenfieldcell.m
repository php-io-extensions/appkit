#import <AppKit/AppKit.h>
#import "ns-tokenfieldcell.h"

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

static NSTokenFieldCell *ns_tokenfieldcell_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSTokenFieldCell class]] ? (NSTokenFieldCell *)obj : nil;
}

uintptr_t ns_tokenfieldcell_create_text(const char *string)
{
    @autoreleasepool {
        NSString *title = string ? [NSString stringWithUTF8String:string] : @"";
        return ns_retain_obj([[NSTokenFieldCell alloc] initTextCell:title]);
    }
}

uintptr_t ns_tokenfieldcell_wrap(void *cell)
{
    if (!cell) {
        return 0;
    }
    @autoreleasepool {
        NSTokenFieldCell *obj = (__bridge NSTokenFieldCell *)cell;
        return [obj isKindOfClass:[NSTokenFieldCell class]] ? ns_retain_obj(obj) : 0;
    }
}

void ns_tokenfieldcell_destroy(uintptr_t cell)
{
    ns_release_handle(cell);
}

void *ns_tokenfieldcell_nstokenfieldcell(uintptr_t cell)
{
    NSTokenFieldCell *obj = ns_tokenfieldcell_from(cell);
    return obj ? (__bridge void *)obj : NULL;
}

void ns_tokenfieldcell_set_string(uintptr_t cell, const char *value)
{
    @autoreleasepool {
        NSTokenFieldCell *obj = ns_tokenfieldcell_from(cell);
        if (obj) {
            obj.stringValue = value ? [NSString stringWithUTF8String:value] : @"";
        }
    }
}

int ns_tokenfieldcell_get_string(uintptr_t cell, char *out, int out_len)
{
    @autoreleasepool {
        NSTokenFieldCell *obj = ns_tokenfieldcell_from(cell);
        return obj ? ns_copy_nsstring(obj.stringValue, out, out_len) : 0;
    }
}

void ns_tokenfieldcell_set_token_style(uintptr_t cell, int style)
{
    @autoreleasepool {
        NSTokenFieldCell *obj = ns_tokenfieldcell_from(cell);
        if (obj) {
            obj.tokenStyle = (NSTokenStyle)style;
        }
    }
}

int ns_tokenfieldcell_get_token_style(uintptr_t cell)
{
    @autoreleasepool {
        NSTokenFieldCell *obj = ns_tokenfieldcell_from(cell);
        return obj ? (int)obj.tokenStyle : 0;
    }
}

void ns_tokenfieldcell_set_completion_delay(uintptr_t cell, double delay)
{
    @autoreleasepool {
        NSTokenFieldCell *obj = ns_tokenfieldcell_from(cell);
        if (obj) {
            obj.completionDelay = delay;
        }
    }
}

double ns_tokenfieldcell_get_completion_delay(uintptr_t cell)
{
    @autoreleasepool {
        NSTokenFieldCell *obj = ns_tokenfieldcell_from(cell);
        return obj ? obj.completionDelay : 0.0;
    }
}

double ns_tokenfieldcell_default_completion_delay(void)
{
    return [NSTokenFieldCell defaultCompletionDelay];
}
