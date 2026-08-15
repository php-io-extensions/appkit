#import <AppKit/AppKit.h>
#import "ns-textparagraph.h"

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

static NSTextParagraph *ns_textparagraph_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSTextParagraph class]] ? (NSTextParagraph *)obj : nil;
}

uintptr_t ns_textparagraph_create(const char *string)
{
    @autoreleasepool {
        NSString *text = string ? [NSString stringWithUTF8String:string] : @"";
        NSAttributedString *as = [[NSAttributedString alloc] initWithString:text];
        return ns_retain_obj([[NSTextParagraph alloc] initWithAttributedString:as]);
    }
}

uintptr_t ns_textparagraph_wrap(void *paragraph)
{
    if (!paragraph) {
        return 0;
    }
    @autoreleasepool {
        NSTextParagraph *obj = (__bridge NSTextParagraph *)paragraph;
        return [obj isKindOfClass:[NSTextParagraph class]] ? ns_retain_obj(obj) : 0;
    }
}

void ns_textparagraph_destroy(uintptr_t paragraph)
{
    ns_release_handle(paragraph);
}

void *ns_textparagraph_nstextparagraph(uintptr_t paragraph)
{
    NSTextParagraph *obj = ns_textparagraph_from(paragraph);
    return obj ? (__bridge void *)obj : NULL;
}

int ns_textparagraph_get_attributed_string(uintptr_t paragraph, char *out, int out_len)
{
    @autoreleasepool {
        NSTextParagraph *obj = ns_textparagraph_from(paragraph);
        return ns_copy_nsstring(obj.attributedString.string, out, out_len);
    }
}

uintptr_t ns_textparagraph_paragraph_content_range_ptr(uintptr_t paragraph)
{
    @autoreleasepool {
        NSTextParagraph *obj = ns_textparagraph_from(paragraph);
        return obj && obj.paragraphContentRange ? (uintptr_t)(__bridge void *)obj.paragraphContentRange : 0;
    }
}

uintptr_t ns_textparagraph_paragraph_separator_range_ptr(uintptr_t paragraph)
{
    @autoreleasepool {
        NSTextParagraph *obj = ns_textparagraph_from(paragraph);
        return obj && obj.paragraphSeparatorRange ? (uintptr_t)(__bridge void *)obj.paragraphSeparatorRange : 0;
    }
}
