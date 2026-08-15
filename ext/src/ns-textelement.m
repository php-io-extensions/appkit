#import <AppKit/AppKit.h>
#import "ns-textelement.h"
#import "ns-textcontentmanager.h"

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

static NSTextElement *ns_textelement_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSTextElement class]] ? (NSTextElement *)obj : nil;
}

uintptr_t ns_textelement_wrap(void *element)
{
    if (!element) {
        return 0;
    }
    @autoreleasepool {
        NSTextElement *obj = (__bridge NSTextElement *)element;
        return [obj isKindOfClass:[NSTextElement class]] ? ns_retain_obj(obj) : 0;
    }
}

void ns_textelement_destroy(uintptr_t element)
{
    ns_release_handle(element);
}

void *ns_textelement_nstextelement(uintptr_t element)
{
    NSTextElement *obj = ns_textelement_from(element);
    return obj ? (__bridge void *)obj : NULL;
}

int ns_textelement_is_represented_element(uintptr_t element)
{
    @autoreleasepool {
        NSTextElement *obj = ns_textelement_from(element);
        return obj && obj.isRepresentedElement ? 1 : 0;
    }
}

int ns_textelement_child_elements_count(uintptr_t element)
{
    @autoreleasepool {
        NSTextElement *obj = ns_textelement_from(element);
        return obj ? (int)obj.childElements.count : 0;
    }
}

uintptr_t ns_textelement_element_range_ptr(uintptr_t element)
{
    @autoreleasepool {
        NSTextElement *obj = ns_textelement_from(element);
        return obj && obj.elementRange ? (uintptr_t)(__bridge void *)obj.elementRange : 0;
    }
}

uintptr_t ns_textelement_text_content_manager(uintptr_t element)
{
    @autoreleasepool {
        NSTextElement *obj = ns_textelement_from(element);
        return obj && obj.textContentManager ? ns_textcontentmanager_wrap((__bridge void *)obj.textContentManager) : 0;
    }
}
