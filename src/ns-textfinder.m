#import <AppKit/AppKit.h>
#import "ns-textfinder.h"

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

static NSTextFinder *ns_textfinder_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSTextFinder class]] ? (NSTextFinder *)obj : nil;
}

uintptr_t ns_textfinder_create(void)
{
    @autoreleasepool {
        return ns_retain_obj([[NSTextFinder alloc] init]);
    }
}

uintptr_t ns_textfinder_wrap(void *finder)
{
    if (!finder) {
        return 0;
    }
    @autoreleasepool {
        NSTextFinder *obj = (__bridge NSTextFinder *)finder;
        return [obj isKindOfClass:[NSTextFinder class]] ? ns_retain_obj(obj) : 0;
    }
}

void ns_textfinder_destroy(uintptr_t finder)
{
    ns_release_handle(finder);
}

void *ns_textfinder_nstextfinder(uintptr_t finder)
{
    NSTextFinder *obj = ns_textfinder_from(finder);
    return obj ? (__bridge void *)obj : NULL;
}

void ns_textfinder_perform_action(uintptr_t finder, int action)
{
    @autoreleasepool {
        NSTextFinder *obj = ns_textfinder_from(finder);
        if (obj) {
            [obj performAction:(NSTextFinderAction)action];
        }
    }
}

int ns_textfinder_validate_action(uintptr_t finder, int action)
{
    @autoreleasepool {
        NSTextFinder *obj = ns_textfinder_from(finder);
        return obj && [obj validateAction:(NSTextFinderAction)action] ? 1 : 0;
    }
}

void ns_textfinder_set_incremental_searching_enabled(uintptr_t finder, int flag)
{
    @autoreleasepool {
        NSTextFinder *obj = ns_textfinder_from(finder);
        if (obj) {
            obj.incrementalSearchingEnabled = flag ? YES : NO;
        }
    }
}

int ns_textfinder_incremental_searching_enabled(uintptr_t finder)
{
    @autoreleasepool {
        NSTextFinder *obj = ns_textfinder_from(finder);
        return obj && obj.incrementalSearchingEnabled ? 1 : 0;
    }
}

void ns_textfinder_set_find_indicator_needs_update(uintptr_t finder, int flag)
{
    @autoreleasepool {
        NSTextFinder *obj = ns_textfinder_from(finder);
        if (obj) {
            obj.findIndicatorNeedsUpdate = flag ? YES : NO;
        }
    }
}

int ns_textfinder_find_indicator_needs_update(uintptr_t finder)
{
    @autoreleasepool {
        NSTextFinder *obj = ns_textfinder_from(finder);
        return obj && obj.findIndicatorNeedsUpdate ? 1 : 0;
    }
}

void ns_textfinder_cancel_find_indicator(uintptr_t finder)
{
    @autoreleasepool {
        NSTextFinder *obj = ns_textfinder_from(finder);
        if (obj) {
            [obj cancelFindIndicator];
        }
    }
}

void ns_textfinder_note_client_string_will_change(uintptr_t finder)
{
    @autoreleasepool {
        NSTextFinder *obj = ns_textfinder_from(finder);
        if (obj) {
            [obj noteClientStringWillChange];
        }
    }
}
