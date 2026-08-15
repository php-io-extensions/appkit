#import <AppKit/AppKit.h>
#import "ns-textcontentstorage.h"
#import "ns-textelement.h"

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

static NSColor *ns_color_from_handle(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSColor class]] ? (NSColor *)obj : nil;
}

static NSTextContentStorage *ns_textcontentstorage_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSTextContentStorage class]] ? (NSTextContentStorage *)obj : nil;
}

uintptr_t ns_textcontentstorage_create(void)
{
    @autoreleasepool {
        return ns_retain_obj([[NSTextContentStorage alloc] init]);
    }
}

uintptr_t ns_textcontentstorage_wrap(void *storage)
{
    if (!storage) {
        return 0;
    }
    @autoreleasepool {
        NSTextContentStorage *obj = (__bridge NSTextContentStorage *)storage;
        return [obj isKindOfClass:[NSTextContentStorage class]] ? ns_retain_obj(obj) : 0;
    }
}

void ns_textcontentstorage_destroy(uintptr_t storage)
{
    ns_release_handle(storage);
}

void *ns_textcontentstorage_nstextcontentstorage(uintptr_t storage)
{
    NSTextContentStorage *obj = ns_textcontentstorage_from(storage);
    return obj ? (__bridge void *)obj : NULL;
}

int ns_textcontentstorage_get_attributed_string(uintptr_t storage, char *out, int out_len)
{
    @autoreleasepool {
        NSTextContentStorage *obj = ns_textcontentstorage_from(storage);
        return ns_copy_nsstring(obj.attributedString.string, out, out_len);
    }
}

void ns_textcontentstorage_set_attributed_string(uintptr_t storage, const char *string)
{
    @autoreleasepool {
        NSTextContentStorage *obj = ns_textcontentstorage_from(storage);
        if (obj) {
            NSString *text = string ? [NSString stringWithUTF8String:string] : @"";
            obj.attributedString = [[NSAttributedString alloc] initWithString:text];
        }
    }
}

uintptr_t ns_textcontentstorage_text_element_for_attributed_string(uintptr_t storage, const char *string)
{
    @autoreleasepool {
        NSTextContentStorage *obj = ns_textcontentstorage_from(storage);
        if (!obj) {
            return 0;
        }
        NSString *text = string ? [NSString stringWithUTF8String:string] : @"";
        NSAttributedString *as = [[NSAttributedString alloc] initWithString:text];
        return ns_retain_obj([obj textElementForAttributedString:as]);
    }
}

int ns_textcontentstorage_attributed_string_for_text_element(uintptr_t storage, uintptr_t element, char *out, int out_len)
{
    @autoreleasepool {
        NSTextContentStorage *obj = ns_textcontentstorage_from(storage);
        NSTextElement *el = (__bridge NSTextElement *)ns_textelement_nstextelement(element);
        if (!obj || !el) {
            return ns_copy_nsstring(nil, out, out_len);
        }
        return ns_copy_nsstring([obj attributedStringForTextElement:el].string, out, out_len);
    }
}
