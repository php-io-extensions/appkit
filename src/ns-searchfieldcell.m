#import <AppKit/AppKit.h>
#import "ns-searchfieldcell.h"

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

static NSSearchFieldCell *ns_searchfieldcell_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSSearchFieldCell class]] ? (NSSearchFieldCell *)obj : nil;
}

uintptr_t ns_searchfieldcell_create_text(const char *string)
{
    @autoreleasepool {
        NSString *title = string ? [NSString stringWithUTF8String:string] : @"";
        return ns_retain_obj([[NSSearchFieldCell alloc] initTextCell:title]);
    }
}

uintptr_t ns_searchfieldcell_wrap(void *cell)
{
    if (!cell) {
        return 0;
    }
    @autoreleasepool {
        NSSearchFieldCell *obj = (__bridge NSSearchFieldCell *)cell;
        return [obj isKindOfClass:[NSSearchFieldCell class]] ? ns_retain_obj(obj) : 0;
    }
}

void ns_searchfieldcell_destroy(uintptr_t cell)
{
    ns_release_handle(cell);
}

void *ns_searchfieldcell_nssearchfieldcell(uintptr_t cell)
{
    NSSearchFieldCell *obj = ns_searchfieldcell_from(cell);
    return obj ? (__bridge void *)obj : NULL;
}

void ns_searchfieldcell_set_title(uintptr_t cell, const char *title)
{
    @autoreleasepool {
        NSSearchFieldCell *obj = ns_searchfieldcell_from(cell);
        if (obj) {
            obj.title = title ? [NSString stringWithUTF8String:title] : @"";
        }
    }
}

int ns_searchfieldcell_get_title(uintptr_t cell, char *out, int out_len)
{
    @autoreleasepool {
        NSSearchFieldCell *obj = ns_searchfieldcell_from(cell);
        return obj ? ns_copy_nsstring(obj.title, out, out_len) : 0;
    }
}

void ns_searchfieldcell_set_string(uintptr_t cell, const char *value)
{
    @autoreleasepool {
        NSSearchFieldCell *obj = ns_searchfieldcell_from(cell);
        if (obj) {
            obj.stringValue = value ? [NSString stringWithUTF8String:value] : @"";
        }
    }
}

int ns_searchfieldcell_get_string(uintptr_t cell, char *out, int out_len)
{
    @autoreleasepool {
        NSSearchFieldCell *obj = ns_searchfieldcell_from(cell);
        return obj ? ns_copy_nsstring(obj.stringValue, out, out_len) : 0;
    }
}

void ns_searchfieldcell_set_placeholder_string(uintptr_t cell, const char *placeholder)
{
    @autoreleasepool {
        NSSearchFieldCell *obj = ns_searchfieldcell_from(cell);
        if (obj) {
            obj.placeholderString = placeholder ? [NSString stringWithUTF8String:placeholder] : nil;
        }
    }
}

int ns_searchfieldcell_get_placeholder_string(uintptr_t cell, char *out, int out_len)
{
    @autoreleasepool {
        NSSearchFieldCell *obj = ns_searchfieldcell_from(cell);
        return obj ? ns_copy_nsstring(obj.placeholderString, out, out_len) : 0;
    }
}

void ns_searchfieldcell_set_recent_searches(uintptr_t cell, const char **items, int count)
{
    @autoreleasepool {
        NSSearchFieldCell *obj = ns_searchfieldcell_from(cell);
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

int ns_searchfieldcell_recent_searches_count(uintptr_t cell)
{
    @autoreleasepool {
        NSSearchFieldCell *obj = ns_searchfieldcell_from(cell);
        return obj ? (int)obj.recentSearches.count : 0;
    }
}

int ns_searchfieldcell_recent_search_at(uintptr_t cell, int index, char *out, int out_len)
{
    @autoreleasepool {
        NSSearchFieldCell *obj = ns_searchfieldcell_from(cell);
        if (!obj || index < 0 || index >= (int)obj.recentSearches.count) {
            return 0;
        }
        return ns_copy_nsstring(obj.recentSearches[(NSUInteger)index], out, out_len);
    }
}

void ns_searchfieldcell_set_recents_autosave_name(uintptr_t cell, const char *name)
{
    @autoreleasepool {
        NSSearchFieldCell *obj = ns_searchfieldcell_from(cell);
        if (obj) {
            obj.recentsAutosaveName = name ? [NSString stringWithUTF8String:name] : nil;
        }
    }
}

int ns_searchfieldcell_get_recents_autosave_name(uintptr_t cell, char *out, int out_len)
{
    @autoreleasepool {
        NSSearchFieldCell *obj = ns_searchfieldcell_from(cell);
        return obj ? ns_copy_nsstring(obj.recentsAutosaveName, out, out_len) : 0;
    }
}

void ns_searchfieldcell_set_sends_whole_search_string(uintptr_t cell, int flag)
{
    @autoreleasepool {
        NSSearchFieldCell *obj = ns_searchfieldcell_from(cell);
        if (obj) {
            obj.sendsWholeSearchString = flag ? YES : NO;
        }
    }
}

int ns_searchfieldcell_sends_whole_search_string(uintptr_t cell)
{
    @autoreleasepool {
        NSSearchFieldCell *obj = ns_searchfieldcell_from(cell);
        return obj && obj.sendsWholeSearchString ? 1 : 0;
    }
}

void ns_searchfieldcell_set_maximum_recents(uintptr_t cell, int maximum)
{
    @autoreleasepool {
        NSSearchFieldCell *obj = ns_searchfieldcell_from(cell);
        if (obj) {
            obj.maximumRecents = (NSInteger)maximum;
        }
    }
}

int ns_searchfieldcell_maximum_recents(uintptr_t cell)
{
    @autoreleasepool {
        NSSearchFieldCell *obj = ns_searchfieldcell_from(cell);
        return obj ? (int)obj.maximumRecents : 0;
    }
}

void ns_searchfieldcell_set_sends_search_string_immediately(uintptr_t cell, int flag)
{
    @autoreleasepool {
        NSSearchFieldCell *obj = ns_searchfieldcell_from(cell);
        if (obj) {
            obj.sendsSearchStringImmediately = flag ? YES : NO;
        }
    }
}

int ns_searchfieldcell_sends_search_string_immediately(uintptr_t cell)
{
    @autoreleasepool {
        NSSearchFieldCell *obj = ns_searchfieldcell_from(cell);
        return obj && obj.sendsSearchStringImmediately ? 1 : 0;
    }
}

uintptr_t ns_searchfieldcell_search_button_cell(uintptr_t cell)
{
    @autoreleasepool {
        NSSearchFieldCell *obj = ns_searchfieldcell_from(cell);
        return obj && obj.searchButtonCell ? ns_retain_obj(obj.searchButtonCell) : 0;
    }
}

uintptr_t ns_searchfieldcell_cancel_button_cell(uintptr_t cell)
{
    @autoreleasepool {
        NSSearchFieldCell *obj = ns_searchfieldcell_from(cell);
        return obj && obj.cancelButtonCell ? ns_retain_obj(obj.cancelButtonCell) : 0;
    }
}

void ns_searchfieldcell_reset_search_button_cell(uintptr_t cell)
{
    @autoreleasepool {
        NSSearchFieldCell *obj = ns_searchfieldcell_from(cell);
        if (obj) {
            [obj resetSearchButtonCell];
        }
    }
}

void ns_searchfieldcell_reset_cancel_button_cell(uintptr_t cell)
{
    @autoreleasepool {
        NSSearchFieldCell *obj = ns_searchfieldcell_from(cell);
        if (obj) {
            [obj resetCancelButtonCell];
        }
    }
}

void ns_searchfieldcell_set_search_menu_template(uintptr_t cell, uintptr_t menu)
{
    @autoreleasepool {
        NSSearchFieldCell *obj = ns_searchfieldcell_from(cell);
        if (obj) {
            obj.searchMenuTemplate = ns_menu_from_handle(menu);
        }
    }
}

uintptr_t ns_searchfieldcell_search_menu_template(uintptr_t cell)
{
    @autoreleasepool {
        NSSearchFieldCell *obj = ns_searchfieldcell_from(cell);
        return obj && obj.searchMenuTemplate ? ns_retain_obj(obj.searchMenuTemplate) : 0;
    }
}
