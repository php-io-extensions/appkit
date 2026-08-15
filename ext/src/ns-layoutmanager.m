#import <AppKit/AppKit.h>
#import "ns-layoutmanager.h"
#import "ns-textcontainer.h"
#import "ns-textstorage.h"
#import "ns-font.h"

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

static NSLayoutManager *ns_layoutmanager_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSLayoutManager class]] ? (NSLayoutManager *)obj : nil;
}

uintptr_t ns_layoutmanager_create(void)
{
    @autoreleasepool {
        return ns_retain_obj([[NSLayoutManager alloc] init]);
    }
}

uintptr_t ns_layoutmanager_wrap(void *manager)
{
    if (!manager) {
        return 0;
    }
    @autoreleasepool {
        NSLayoutManager *obj = (__bridge NSLayoutManager *)manager;
        return [obj isKindOfClass:[NSLayoutManager class]] ? ns_retain_obj(obj) : 0;
    }
}

void ns_layoutmanager_destroy(uintptr_t manager)
{
    ns_release_handle(manager);
}

void *ns_layoutmanager_nslayoutmanager(uintptr_t manager)
{
    NSLayoutManager *obj = ns_layoutmanager_from(manager);
    return obj ? (__bridge void *)obj : NULL;
}

void ns_layoutmanager_replace_text_storage(uintptr_t manager, uintptr_t storage)
{
    @autoreleasepool {
        NSLayoutManager *lm = ns_layoutmanager_from(manager);
        NSTextStorage *ts = (__bridge NSTextStorage *)ns_textstorage_nstextstorage(storage);
        if (lm && ts) {
            [lm replaceTextStorage:ts];
        }
    }
}

void ns_layoutmanager_add_text_container(uintptr_t manager, uintptr_t container)
{
    @autoreleasepool {
        NSLayoutManager *lm = ns_layoutmanager_from(manager);
        NSTextContainer *tc = (__bridge NSTextContainer *)ns_textcontainer_nstextcontainer(container);
        if (lm && tc) {
            [lm addTextContainer:tc];
        }
    }
}

void ns_layoutmanager_remove_text_container_at_index(uintptr_t manager, int index)
{
    @autoreleasepool {
        NSLayoutManager *lm = ns_layoutmanager_from(manager);
        if (lm) {
            [lm removeTextContainerAtIndex:(NSUInteger)index];
        }
    }
}

int ns_layoutmanager_text_containers_count(uintptr_t manager)
{
    @autoreleasepool {
        NSLayoutManager *lm = ns_layoutmanager_from(manager);
        return lm ? (int)lm.textContainers.count : 0;
    }
}

void ns_layoutmanager_text_container_changed_geometry(uintptr_t manager, uintptr_t container)
{
    @autoreleasepool {
        NSLayoutManager *lm = ns_layoutmanager_from(manager);
        NSTextContainer *tc = (__bridge NSTextContainer *)ns_textcontainer_nstextcontainer(container);
        if (lm && tc) {
            [lm textContainerChangedGeometry:tc];
        }
    }
}

void ns_layoutmanager_set_shows_invisible_characters(uintptr_t manager, int flag)
{
    @autoreleasepool {
        NSLayoutManager *lm = ns_layoutmanager_from(manager);
        if (lm) {
            lm.showsInvisibleCharacters = flag ? YES : NO;
        }
    }
}

int ns_layoutmanager_shows_invisible_characters(uintptr_t manager)
{
    @autoreleasepool {
        NSLayoutManager *lm = ns_layoutmanager_from(manager);
        return lm && lm.showsInvisibleCharacters ? 1 : 0;
    }
}

void ns_layoutmanager_set_shows_control_characters(uintptr_t manager, int flag)
{
    @autoreleasepool {
        NSLayoutManager *lm = ns_layoutmanager_from(manager);
        if (lm) {
            lm.showsControlCharacters = flag ? YES : NO;
        }
    }
}

int ns_layoutmanager_shows_control_characters(uintptr_t manager)
{
    @autoreleasepool {
        NSLayoutManager *lm = ns_layoutmanager_from(manager);
        return lm && lm.showsControlCharacters ? 1 : 0;
    }
}

void ns_layoutmanager_set_uses_default_hyphenation(uintptr_t manager, int flag)
{
    @autoreleasepool {
        NSLayoutManager *lm = ns_layoutmanager_from(manager);
        if (lm) {
            lm.usesDefaultHyphenation = flag ? YES : NO;
        }
    }
}

int ns_layoutmanager_uses_default_hyphenation(uintptr_t manager)
{
    @autoreleasepool {
        NSLayoutManager *lm = ns_layoutmanager_from(manager);
        return lm && lm.usesDefaultHyphenation ? 1 : 0;
    }
}

void ns_layoutmanager_set_default_font(uintptr_t manager, uintptr_t font)
{
    (void)manager;
    (void)font;
}

uintptr_t ns_layoutmanager_default_font(uintptr_t manager)
{
    (void)manager;
    return 0;
}
