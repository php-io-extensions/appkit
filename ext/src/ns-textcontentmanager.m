#import <AppKit/AppKit.h>
#import "ns-textcontentmanager.h"
#import "ns-textlayoutmanager.h"

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

static NSTextContentManager *ns_textcontentmanager_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSTextContentManager class]] ? (NSTextContentManager *)obj : nil;
}

uintptr_t ns_textcontentmanager_create(void)
{
    @autoreleasepool {
        return ns_retain_obj([[NSTextContentManager alloc] init]);
    }
}

uintptr_t ns_textcontentmanager_wrap(void *manager)
{
    if (!manager) {
        return 0;
    }
    @autoreleasepool {
        NSTextContentManager *obj = (__bridge NSTextContentManager *)manager;
        return [obj isKindOfClass:[NSTextContentManager class]] ? ns_retain_obj(obj) : 0;
    }
}

void ns_textcontentmanager_destroy(uintptr_t manager)
{
    ns_release_handle(manager);
}

void *ns_textcontentmanager_nstextcontentmanager(uintptr_t manager)
{
    NSTextContentManager *obj = ns_textcontentmanager_from(manager);
    return obj ? (__bridge void *)obj : NULL;
}

void ns_textcontentmanager_add_text_layout_manager(uintptr_t manager, uintptr_t layout_manager)
{
    @autoreleasepool {
        NSTextContentManager *obj = ns_textcontentmanager_from(manager);
        NSTextLayoutManager *lm = (__bridge NSTextLayoutManager *)ns_textlayoutmanager_nstextlayoutmanager(layout_manager);
        if (obj && lm) {
            [obj addTextLayoutManager:lm];
        }
    }
}

void ns_textcontentmanager_remove_text_layout_manager(uintptr_t manager, uintptr_t layout_manager)
{
    @autoreleasepool {
        NSTextContentManager *obj = ns_textcontentmanager_from(manager);
        NSTextLayoutManager *lm = (__bridge NSTextLayoutManager *)ns_textlayoutmanager_nstextlayoutmanager(layout_manager);
        if (obj && lm) {
            [obj removeTextLayoutManager:lm];
        }
    }
}

int ns_textcontentmanager_text_layout_managers_count(uintptr_t manager)
{
    @autoreleasepool {
        NSTextContentManager *obj = ns_textcontentmanager_from(manager);
        return obj ? (int)obj.textLayoutManagers.count : 0;
    }
}

int ns_textcontentmanager_has_editing_transaction(uintptr_t manager)
{
    @autoreleasepool {
        NSTextContentManager *obj = ns_textcontentmanager_from(manager);
        return obj && obj.hasEditingTransaction ? 1 : 0;
    }
}

int ns_textcontentmanager_automatically_synchronizes_text_layout_managers(uintptr_t manager)
{
    @autoreleasepool {
        NSTextContentManager *obj = ns_textcontentmanager_from(manager);
        return obj && obj.automaticallySynchronizesTextLayoutManagers ? 1 : 0;
    }
}

void ns_textcontentmanager_set_automatically_synchronizes_text_layout_managers(uintptr_t manager, int flag)
{
    @autoreleasepool {
        NSTextContentManager *obj = ns_textcontentmanager_from(manager);
        if (obj) {
            obj.automaticallySynchronizesTextLayoutManagers = flag ? YES : NO;
        }
    }
}

int ns_textcontentmanager_automatically_synchronizes_to_backing_store(uintptr_t manager)
{
    @autoreleasepool {
        NSTextContentManager *obj = ns_textcontentmanager_from(manager);
        return obj && obj.automaticallySynchronizesToBackingStore ? 1 : 0;
    }
}

void ns_textcontentmanager_set_automatically_synchronizes_to_backing_store(uintptr_t manager, int flag)
{
    @autoreleasepool {
        NSTextContentManager *obj = ns_textcontentmanager_from(manager);
        if (obj) {
            obj.automaticallySynchronizesToBackingStore = flag ? YES : NO;
        }
    }
}

uintptr_t ns_textcontentmanager_document_range_ptr(uintptr_t manager)
{
    @autoreleasepool {
        NSTextContentManager *obj = ns_textcontentmanager_from(manager);
        return obj && obj.documentRange ? (uintptr_t)(__bridge void *)obj.documentRange : 0;
    }
}
