#import <AppKit/AppKit.h>
#import "ns-securetextfieldcell.h"

static uintptr_t ns_securetextfieldcell_retain_obj(id object)
{
    return object ? (uintptr_t)(__bridge_retained void *)object : 0;
}

static NSSecureTextFieldCell *ns_securetextfieldcell_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSSecureTextFieldCell class]] ? (NSSecureTextFieldCell *)obj : nil;
}

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

uintptr_t ns_securetextfieldcell_create_text(const char *string)
{
    @autoreleasepool {
        NSString *title = string ? [NSString stringWithUTF8String:string] : @"";
        NSSecureTextFieldCell *cell = [[NSSecureTextFieldCell alloc] initTextCell:title];
        return ns_securetextfieldcell_retain_obj(cell);
    }
}

uintptr_t ns_securetextfieldcell_wrap(void *cell)
{
    if (!cell) {
        return 0;
    }
    @autoreleasepool {
        NSSecureTextFieldCell *obj = (__bridge NSSecureTextFieldCell *)cell;
        return [obj isKindOfClass:[NSSecureTextFieldCell class]] ? ns_securetextfieldcell_retain_obj(obj) : 0;
    }
}

void ns_securetextfieldcell_destroy(uintptr_t cell)
{
    if (!cell) {
        return;
    }
    CFRelease((void *)cell);
}

void *ns_securetextfieldcell_nssecuretextfieldcell(uintptr_t cell)
{
    NSSecureTextFieldCell *obj = ns_securetextfieldcell_from(cell);
    return obj ? (__bridge void *)obj : NULL;
}

void ns_securetextfieldcell_set_echos_bullets(uintptr_t cell, int echosBullets)
{
    @autoreleasepool {
        NSSecureTextFieldCell *obj = ns_securetextfieldcell_from(cell);
        if (obj) {
            obj.echosBullets = echosBullets ? YES : NO;
        }
    }
}

int ns_securetextfieldcell_echos_bullets(uintptr_t cell)
{
    @autoreleasepool {
        NSSecureTextFieldCell *obj = ns_securetextfieldcell_from(cell);
        return obj && obj.echosBullets ? 1 : 0;
    }
}

void ns_securetextfieldcell_set_string(uintptr_t cell, const char *value)
{
    @autoreleasepool {
        NSSecureTextFieldCell *obj = ns_securetextfieldcell_from(cell);
        if (obj) {
            obj.stringValue = value ? [NSString stringWithUTF8String:value] : @"";
        }
    }
}

int ns_securetextfieldcell_get_string(uintptr_t cell, char *out, int out_len)
{
    @autoreleasepool {
        NSSecureTextFieldCell *obj = ns_securetextfieldcell_from(cell);
        if (!obj) {
            return 0;
        }
        return ns_copy_nsstring(obj.stringValue, out, out_len);
    }
}

void ns_securetextfieldcell_set_placeholder_string(uintptr_t cell, const char *placeholder)
{
    @autoreleasepool {
        NSSecureTextFieldCell *obj = ns_securetextfieldcell_from(cell);
        if (obj) {
            obj.placeholderString = placeholder ? [NSString stringWithUTF8String:placeholder] : nil;
        }
    }
}

int ns_securetextfieldcell_get_placeholder_string(uintptr_t cell, char *out, int out_len)
{
    @autoreleasepool {
        NSSecureTextFieldCell *obj = ns_securetextfieldcell_from(cell);
        if (!obj) {
            return 0;
        }
        return ns_copy_nsstring(obj.placeholderString, out, out_len);
    }
}

void ns_securetextfieldcell_set_bezel_style(uintptr_t cell, int style)
{
    @autoreleasepool {
        NSSecureTextFieldCell *obj = ns_securetextfieldcell_from(cell);
        if (obj) {
            obj.bezelStyle = (NSTextFieldBezelStyle)style;
        }
    }
}

int ns_securetextfieldcell_get_bezel_style(uintptr_t cell)
{
    @autoreleasepool {
        NSSecureTextFieldCell *obj = ns_securetextfieldcell_from(cell);
        return obj ? (int)obj.bezelStyle : 0;
    }
}
