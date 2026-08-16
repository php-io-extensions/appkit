#import <AppKit/AppKit.h>
#import "ns-helpmanager.h"

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

static NSHelpManager *ns_helpmanager_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSHelpManager class]] ? (NSHelpManager *)obj : nil;
}

uintptr_t ns_helpmanager_shared(void)
{
    @autoreleasepool {
        return ns_retain_obj([NSHelpManager sharedHelpManager]);
    }
}

void ns_helpmanager_destroy(uintptr_t manager)
{
    ns_release_handle(manager);
}

void *ns_helpmanager_nshelpmanager(uintptr_t manager)
{
    NSHelpManager *obj = ns_helpmanager_from(manager);
    return obj ? (__bridge void *)obj : NULL;
}

int ns_helpmanager_is_context_help_mode_active(void)
{
    @autoreleasepool {
        return [NSHelpManager isContextHelpModeActive] ? 1 : 0;
    }
}

void ns_helpmanager_set_context_help_mode_active(int active)
{
    @autoreleasepool {
        [NSHelpManager setContextHelpModeActive:active ? YES : NO];
    }
}

void ns_helpmanager_set_context_help_for_object(uintptr_t object_ptr, const char *help_text)
{
    if (!object_ptr) {
        return;
    }
    @autoreleasepool {
        id object = (__bridge id)(void *)object_ptr;
        NSAttributedString *attr = help_text ? [[NSAttributedString alloc] initWithString:[NSString stringWithUTF8String:help_text]] : nil;
        [[NSHelpManager sharedHelpManager] setContextHelp:attr forObject:object];
    }
}

void ns_helpmanager_remove_context_help_for_object(uintptr_t object_ptr)
{
    if (!object_ptr) {
        return;
    }
    @autoreleasepool {
        id object = (__bridge id)(void *)object_ptr;
        [[NSHelpManager sharedHelpManager] removeContextHelpForObject:object];
    }
}

int ns_helpmanager_context_help_for_object(uintptr_t object_ptr, char *out, int out_len)
{
    if (!object_ptr) {
        return 0;
    }
    @autoreleasepool {
        id object = (__bridge id)(void *)object_ptr;
        NSAttributedString *attr = [[NSHelpManager sharedHelpManager] contextHelpForObject:object];
        return ns_copy_nsstring(attr.string, out, out_len);
    }
}

int ns_helpmanager_show_context_help_for_object(uintptr_t object_ptr, double x, double y)
{
    if (!object_ptr) {
        return 0;
    }
    @autoreleasepool {
        id object = (__bridge id)(void *)object_ptr;
        return [[NSHelpManager sharedHelpManager] showContextHelpForObject:object locationHint:NSMakePoint((CGFloat)x, (CGFloat)y)] ? 1 : 0;
    }
}

void ns_helpmanager_open_help_anchor(const char *anchor, const char *book)
{
    @autoreleasepool {
        if (!anchor) {
            return;
        }
        NSString *bookName = (book && book[0] != '\0') ? [NSString stringWithUTF8String:book] : nil;
        [[NSHelpManager sharedHelpManager] openHelpAnchor:[NSString stringWithUTF8String:anchor] inBook:bookName];
    }
}

void ns_helpmanager_find_string(const char *query, const char *book)
{
    @autoreleasepool {
        if (!query) {
            return;
        }
        NSString *bookName = (book && book[0] != '\0') ? [NSString stringWithUTF8String:book] : nil;
        [[NSHelpManager sharedHelpManager] findString:[NSString stringWithUTF8String:query] inBook:bookName];
    }
}

int ns_helpmanager_register_books_in_bundle_path(const char *bundle_path)
{
    @autoreleasepool {
        NSBundle *bundle = nil;
        if (bundle_path && bundle_path[0] != '\0') {
            bundle = [NSBundle bundleWithPath:[NSString stringWithUTF8String:bundle_path]];
        } else {
            bundle = [NSBundle mainBundle];
        }
        if (!bundle) {
            return 0;
        }
        return [[NSHelpManager sharedHelpManager] registerBooksInBundle:bundle] ? 1 : 0;
    }
}
