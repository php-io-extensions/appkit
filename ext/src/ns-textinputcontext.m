#import <AppKit/AppKit.h>
#import "ns-textinputcontext.h"

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

static NSTextInputContext *ns_textinputcontext_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSTextInputContext class]] ? (NSTextInputContext *)obj : nil;
}

uintptr_t ns_textinputcontext_current(void)
{
    @autoreleasepool {
        NSTextInputContext *ctx = [NSTextInputContext currentInputContext];
        return ctx ? ns_retain_obj(ctx) : 0;
    }
}

uintptr_t ns_textinputcontext_create(void *client)
{
    if (!client) {
        return 0;
    }
    @autoreleasepool {
        id <NSTextInputClient> inputClient = (__bridge id <NSTextInputClient>)client;
        return ns_retain_obj([[NSTextInputContext alloc] initWithClient:inputClient]);
    }
}

uintptr_t ns_textinputcontext_wrap(void *context)
{
    if (!context) {
        return 0;
    }
    @autoreleasepool {
        NSTextInputContext *obj = (__bridge NSTextInputContext *)context;
        return [obj isKindOfClass:[NSTextInputContext class]] ? ns_retain_obj(obj) : 0;
    }
}

void ns_textinputcontext_destroy(uintptr_t context)
{
    ns_release_handle(context);
}

void *ns_textinputcontext_nstextinputcontext(uintptr_t context)
{
    NSTextInputContext *obj = ns_textinputcontext_from(context);
    return obj ? (__bridge void *)obj : NULL;
}

void *ns_textinputcontext_client(uintptr_t context)
{
    @autoreleasepool {
        NSTextInputContext *obj = ns_textinputcontext_from(context);
        return obj ? (__bridge void *)obj.client : NULL;
    }
}

void ns_textinputcontext_set_accepts_glyph_info(uintptr_t context, int flag)
{
    @autoreleasepool {
        NSTextInputContext *obj = ns_textinputcontext_from(context);
        if (obj) {
            obj.acceptsGlyphInfo = flag ? YES : NO;
        }
    }
}

int ns_textinputcontext_accepts_glyph_info(uintptr_t context)
{
    @autoreleasepool {
        NSTextInputContext *obj = ns_textinputcontext_from(context);
        return obj && obj.acceptsGlyphInfo ? 1 : 0;
    }
}

void ns_textinputcontext_activate(uintptr_t context)
{
    @autoreleasepool {
        NSTextInputContext *obj = ns_textinputcontext_from(context);
        if (obj) {
            [obj activate];
        }
    }
}

void ns_textinputcontext_deactivate(uintptr_t context)
{
    @autoreleasepool {
        NSTextInputContext *obj = ns_textinputcontext_from(context);
        if (obj) {
            [obj deactivate];
        }
    }
}

int ns_textinputcontext_handle_event(uintptr_t context, void *nsevent)
{
    @autoreleasepool {
        NSTextInputContext *obj = ns_textinputcontext_from(context);
        NSEvent *event = (__bridge NSEvent *)nsevent;
        return obj && event && [obj handleEvent:event] ? 1 : 0;
    }
}

void ns_textinputcontext_discard_marked_text(uintptr_t context)
{
    @autoreleasepool {
        NSTextInputContext *obj = ns_textinputcontext_from(context);
        if (obj) {
            [obj discardMarkedText];
        }
    }
}

void ns_textinputcontext_invalidate_character_coordinates(uintptr_t context)
{
    @autoreleasepool {
        NSTextInputContext *obj = ns_textinputcontext_from(context);
        if (obj) {
            [obj invalidateCharacterCoordinates];
        }
    }
}
