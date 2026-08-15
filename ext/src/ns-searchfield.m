#import <AppKit/AppKit.h>
#import "ns-searchfield.h"
#import "ns-view.h"

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

@interface NSPhpSearchField : NSSearchField <NSSearchFieldDelegate>
@property (nonatomic, assign) int pendingChange;
@end

@implementation NSPhpSearchField
- (void)controlTextDidChange:(NSNotification *)notification
{
    (void)notification;
    self.pendingChange = 1;
}
@end

static NSSearchField *ns_searchfield_view(uintptr_t field)
{
    void *ptr = ns_view_nsview(field);
    if (!ptr) {
        return nil;
    }
    NSView *view = (__bridge NSView *)ptr;
    return [view isKindOfClass:[NSSearchField class]] ? (NSSearchField *)view : nil;
}

uintptr_t ns_searchfield_create(double x, double y, double width, double height, const char *value)
{
    if (width <= 0) {
        width = 160;
    }
    if (height <= 0) {
        height = 24;
    }
    @autoreleasepool {
        NSRect rect = NSMakeRect((CGFloat)x, (CGFloat)y, (CGFloat)width, (CGFloat)height);
        NSPhpSearchField *field = [[NSPhpSearchField alloc] initWithFrame:rect];
        [field setDelegate:field];
        [field setStringValue:value ? [NSString stringWithUTF8String:value] : @""];
        return ns_view_wrap((__bridge void *)field);
    }
}

void ns_searchfield_destroy(uintptr_t field)
{
    ns_view_destroy(field);
}

void ns_searchfield_set_string(uintptr_t field, const char *value)
{
    @autoreleasepool {
        NSSearchField *obj = ns_searchfield_view(field);
        if (obj) {
            [obj setStringValue:value ? [NSString stringWithUTF8String:value] : @""];
        }
    }
}

int ns_searchfield_get_string(uintptr_t field, char *out, int out_len)
{
    @autoreleasepool {
        NSSearchField *obj = ns_searchfield_view(field);
        return obj ? ns_copy_nsstring(obj.stringValue, out, out_len) : 0;
    }
}

void ns_searchfield_set_recent_searches(uintptr_t field, const char **items, int count)
{
    @autoreleasepool {
        NSSearchField *obj = ns_searchfield_view(field);
        if (!obj) {
            return;
        }
        NSMutableArray<NSString *> *list = [NSMutableArray array];
        int i;
        for (i = 0; i < count; i++) {
            if (items && items[i]) {
                [list addObject:[NSString stringWithUTF8String:items[i]]];
            }
        }
        obj.recentSearches = list;
    }
}

int ns_searchfield_recent_searches_count(uintptr_t field)
{
    @autoreleasepool {
        NSSearchField *obj = ns_searchfield_view(field);
        return obj ? (int)obj.recentSearches.count : 0;
    }
}

int ns_searchfield_recent_search_at(uintptr_t field, int index, char *out, int out_len)
{
    @autoreleasepool {
        NSSearchField *obj = ns_searchfield_view(field);
        if (!obj || index < 0 || index >= (int)obj.recentSearches.count) {
            return 0;
        }
        return ns_copy_nsstring(obj.recentSearches[(NSUInteger)index], out, out_len);
    }
}

void ns_searchfield_set_recents_autosave_name(uintptr_t field, const char *name)
{
    @autoreleasepool {
        NSSearchField *obj = ns_searchfield_view(field);
        if (obj) {
            obj.recentsAutosaveName = name ? [NSString stringWithUTF8String:name] : nil;
        }
    }
}

int ns_searchfield_get_recents_autosave_name(uintptr_t field, char *out, int out_len)
{
    @autoreleasepool {
        NSSearchField *obj = ns_searchfield_view(field);
        return obj ? ns_copy_nsstring(obj.recentsAutosaveName, out, out_len) : 0;
    }
}

void ns_searchfield_set_sends_whole_search_string(uintptr_t field, int flag)
{
    @autoreleasepool {
        NSSearchField *obj = ns_searchfield_view(field);
        if (obj) {
            obj.sendsWholeSearchString = flag ? YES : NO;
        }
    }
}

int ns_searchfield_sends_whole_search_string(uintptr_t field)
{
    @autoreleasepool {
        NSSearchField *obj = ns_searchfield_view(field);
        return obj && obj.sendsWholeSearchString ? 1 : 0;
    }
}

void ns_searchfield_set_maximum_recents(uintptr_t field, int maximum)
{
    @autoreleasepool {
        NSSearchField *obj = ns_searchfield_view(field);
        if (obj) {
            obj.maximumRecents = (NSInteger)maximum;
        }
    }
}

int ns_searchfield_maximum_recents(uintptr_t field)
{
    @autoreleasepool {
        NSSearchField *obj = ns_searchfield_view(field);
        return obj ? (int)obj.maximumRecents : 0;
    }
}

void ns_searchfield_set_sends_search_string_immediately(uintptr_t field, int flag)
{
    @autoreleasepool {
        NSSearchField *obj = ns_searchfield_view(field);
        if (obj) {
            obj.sendsSearchStringImmediately = flag ? YES : NO;
        }
    }
}

int ns_searchfield_sends_search_string_immediately(uintptr_t field)
{
    @autoreleasepool {
        NSSearchField *obj = ns_searchfield_view(field);
        return obj && obj.sendsSearchStringImmediately ? 1 : 0;
    }
}

int ns_searchfield_poll_change(uintptr_t field)
{
    void *ptr = ns_view_nsview(field);
    if (!ptr) {
        return 0;
    }
    @autoreleasepool {
        NSView *view = (__bridge NSView *)ptr;
        if (![view isKindOfClass:[NSPhpSearchField class]]) {
            return 0;
        }
        NSPhpSearchField *typed = (NSPhpSearchField *)view;
        if (typed.pendingChange != 1) {
            return 0;
        }
        typed.pendingChange = 0;
        return 1;
    }
}
