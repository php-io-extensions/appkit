#import <AppKit/AppKit.h>
#import "ns-textcheckingcontroller.h"
#import "ns-dictionary.h"

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

static NSTextCheckingController *ns_textcheckingcontroller_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSTextCheckingController class]] ? (NSTextCheckingController *)obj : nil;
}

uintptr_t ns_textcheckingcontroller_create_with_client(void *client)
{
    if (!client) {
        return 0;
    }
    @autoreleasepool {
        id <NSTextCheckingClient> typed = (__bridge id <NSTextCheckingClient>)client;
        return ns_retain_obj([[NSTextCheckingController alloc] initWithClient:typed]);
    }
}

uintptr_t ns_textcheckingcontroller_wrap(void *controller)
{
    if (!controller) {
        return 0;
    }
    @autoreleasepool {
        NSTextCheckingController *obj = (__bridge NSTextCheckingController *)controller;
        return [obj isKindOfClass:[NSTextCheckingController class]] ? ns_retain_obj(obj) : 0;
    }
}

void ns_textcheckingcontroller_destroy(uintptr_t controller)
{
    ns_release_handle(controller);
}

void *ns_textcheckingcontroller_nstextcheckingcontroller(uintptr_t controller)
{
    NSTextCheckingController *obj = ns_textcheckingcontroller_from(controller);
    return obj ? (__bridge void *)obj : NULL;
}

void *ns_textcheckingcontroller_client(uintptr_t controller)
{
    @autoreleasepool {
        NSTextCheckingController *obj = ns_textcheckingcontroller_from(controller);
        return obj && obj.client ? (__bridge void *)obj.client : NULL;
    }
}

void ns_textcheckingcontroller_invalidate(uintptr_t controller)
{
    @autoreleasepool {
        NSTextCheckingController *obj = ns_textcheckingcontroller_from(controller);
        if (obj) {
            [obj invalidate];
        }
    }
}

void ns_textcheckingcontroller_did_change_text_in_range(uintptr_t controller, int location, int length)
{
    @autoreleasepool {
        NSTextCheckingController *obj = ns_textcheckingcontroller_from(controller);
        if (obj) {
            [obj didChangeTextInRange:NSMakeRange((NSUInteger)location, (NSUInteger)length)];
        }
    }
}

void ns_textcheckingcontroller_inserted_text_in_range(uintptr_t controller, int location, int length)
{
    @autoreleasepool {
        NSTextCheckingController *obj = ns_textcheckingcontroller_from(controller);
        if (obj) {
            [obj insertedTextInRange:NSMakeRange((NSUInteger)location, (NSUInteger)length)];
        }
    }
}

void ns_textcheckingcontroller_did_change_selected_range(uintptr_t controller)
{
    @autoreleasepool {
        NSTextCheckingController *obj = ns_textcheckingcontroller_from(controller);
        if (obj) {
            [obj didChangeSelectedRange];
        }
    }
}

void ns_textcheckingcontroller_consider_text_checking_for_range(uintptr_t controller, int location, int length)
{
    @autoreleasepool {
        NSTextCheckingController *obj = ns_textcheckingcontroller_from(controller);
        if (obj) {
            [obj considerTextCheckingForRange:NSMakeRange((NSUInteger)location, (NSUInteger)length)];
        }
    }
}

void ns_textcheckingcontroller_check_text_in_range(uintptr_t controller, int location, int length, unsigned long long types, uintptr_t options)
{
    @autoreleasepool {
        NSTextCheckingController *obj = ns_textcheckingcontroller_from(controller);
        if (obj) {
            NSDictionary *opts = (__bridge NSDictionary *)ns_dictionary_nsdictionary(options);
            [obj checkTextInRange:NSMakeRange((NSUInteger)location, (NSUInteger)length) types:(NSTextCheckingTypes)types options:opts];
        }
    }
}

void ns_textcheckingcontroller_check_text_in_selection(uintptr_t controller)
{
    @autoreleasepool {
        NSTextCheckingController *obj = ns_textcheckingcontroller_from(controller);
        if (obj) {
            [obj checkTextInSelection:nil];
        }
    }
}

void ns_textcheckingcontroller_check_text_in_document(uintptr_t controller)
{
    @autoreleasepool {
        NSTextCheckingController *obj = ns_textcheckingcontroller_from(controller);
        if (obj) {
            [obj checkTextInDocument:nil];
        }
    }
}

void ns_textcheckingcontroller_order_front_substitutions_panel(uintptr_t controller)
{
    @autoreleasepool {
        NSTextCheckingController *obj = ns_textcheckingcontroller_from(controller);
        if (obj) {
            [obj orderFrontSubstitutionsPanel:nil];
        }
    }
}

void ns_textcheckingcontroller_check_spelling(uintptr_t controller)
{
    @autoreleasepool {
        NSTextCheckingController *obj = ns_textcheckingcontroller_from(controller);
        if (obj) {
            [obj checkSpelling:nil];
        }
    }
}

void ns_textcheckingcontroller_show_guess_panel(uintptr_t controller)
{
    @autoreleasepool {
        NSTextCheckingController *obj = ns_textcheckingcontroller_from(controller);
        if (obj) {
            [obj showGuessPanel:nil];
        }
    }
}

void ns_textcheckingcontroller_change_spelling(uintptr_t controller)
{
    @autoreleasepool {
        NSTextCheckingController *obj = ns_textcheckingcontroller_from(controller);
        if (obj) {
            [obj changeSpelling:nil];
        }
    }
}

void ns_textcheckingcontroller_ignore_spelling(uintptr_t controller)
{
    @autoreleasepool {
        NSTextCheckingController *obj = ns_textcheckingcontroller_from(controller);
        if (obj) {
            [obj ignoreSpelling:nil];
        }
    }
}

void ns_textcheckingcontroller_update_candidates(uintptr_t controller)
{
    @autoreleasepool {
        NSTextCheckingController *obj = ns_textcheckingcontroller_from(controller);
        if (obj) {
            [obj updateCandidates];
        }
    }
}

int ns_textcheckingcontroller_valid_annotations_count(uintptr_t controller)
{
    @autoreleasepool {
        NSTextCheckingController *obj = ns_textcheckingcontroller_from(controller);
        return obj ? (int)obj.validAnnotations.count : 0;
    }
}

int ns_textcheckingcontroller_valid_annotation_at(uintptr_t controller, int index, char *out, int out_len)
{
    @autoreleasepool {
        NSTextCheckingController *obj = ns_textcheckingcontroller_from(controller);
        if (!obj || index < 0 || index >= (int)obj.validAnnotations.count) {
            return 0;
        }
        return ns_copy_nsstring(obj.validAnnotations[(NSUInteger)index], out, out_len);
    }
}

void ns_textcheckingcontroller_set_spell_checker_document_tag(uintptr_t controller, int tag)
{
    @autoreleasepool {
        NSTextCheckingController *obj = ns_textcheckingcontroller_from(controller);
        if (obj) {
            obj.spellCheckerDocumentTag = (NSInteger)tag;
        }
    }
}

int ns_textcheckingcontroller_get_spell_checker_document_tag(uintptr_t controller)
{
    @autoreleasepool {
        NSTextCheckingController *obj = ns_textcheckingcontroller_from(controller);
        return obj ? (int)obj.spellCheckerDocumentTag : 0;
    }
}

uintptr_t ns_textcheckingcontroller_menu_at_index(uintptr_t controller, int location, int clicked_on_selection, int *effective_location, int *effective_length)
{
    @autoreleasepool {
        NSTextCheckingController *obj = ns_textcheckingcontroller_from(controller);
        if (!obj) {
            return 0;
        }
        NSRange effectiveRange = NSMakeRange(0, 0);
        NSMenu *menu = [obj menuAtIndex:(NSUInteger)location clickedOnSelection:clicked_on_selection ? YES : NO effectiveRange:&effectiveRange];
        if (effective_location) {
            *effective_location = (int)effectiveRange.location;
        }
        if (effective_length) {
            *effective_length = (int)effectiveRange.length;
        }
        return menu ? ns_retain_obj(menu) : 0;
    }
}
