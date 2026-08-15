#import <AppKit/AppKit.h>
#import "ns-popupbuttoncell.h"

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

static NSPopUpButtonCell *ns_popupbuttoncell_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSPopUpButtonCell class]] ? (NSPopUpButtonCell *)obj : nil;
}

uintptr_t ns_popupbuttoncell_create_text(const char *string, int pulls_down)
{
    @autoreleasepool {
        NSString *title = string ? [NSString stringWithUTF8String:string] : @"";
        return ns_retain_obj([[NSPopUpButtonCell alloc] initTextCell:title pullsDown:pulls_down ? YES : NO]);
    }
}

uintptr_t ns_popupbuttoncell_wrap(void *cell)
{
    if (!cell) {
        return 0;
    }
    @autoreleasepool {
        NSPopUpButtonCell *obj = (__bridge NSPopUpButtonCell *)cell;
        return [obj isKindOfClass:[NSPopUpButtonCell class]] ? ns_retain_obj(obj) : 0;
    }
}

void ns_popupbuttoncell_destroy(uintptr_t cell)
{
    ns_release_handle(cell);
}

void *ns_popupbuttoncell_nspopupbuttoncell(uintptr_t cell)
{
    NSPopUpButtonCell *obj = ns_popupbuttoncell_from(cell);
    return obj ? (__bridge void *)obj : NULL;
}

void ns_popupbuttoncell_set_title(uintptr_t cell, const char *title)
{
    @autoreleasepool {
        NSPopUpButtonCell *obj = ns_popupbuttoncell_from(cell);
        if (obj) {
            obj.title = title ? [NSString stringWithUTF8String:title] : @"";
        }
    }
}

int ns_popupbuttoncell_get_title(uintptr_t cell, char *out, int out_len)
{
    @autoreleasepool {
        NSPopUpButtonCell *obj = ns_popupbuttoncell_from(cell);
        return obj ? ns_copy_nsstring(obj.title, out, out_len) : 0;
    }
}

void ns_popupbuttoncell_set_menu(uintptr_t cell, uintptr_t menu)
{
    @autoreleasepool {
        NSPopUpButtonCell *obj = ns_popupbuttoncell_from(cell);
        if (obj) {
            obj.menu = ns_menu_from_handle(menu);
        }
    }
}

uintptr_t ns_popupbuttoncell_get_menu(uintptr_t cell)
{
    @autoreleasepool {
        NSPopUpButtonCell *obj = ns_popupbuttoncell_from(cell);
        return obj && obj.menu ? ns_retain_obj(obj.menu) : 0;
    }
}

void ns_popupbuttoncell_set_pulls_down(uintptr_t cell, int flag)
{
    @autoreleasepool {
        NSPopUpButtonCell *obj = ns_popupbuttoncell_from(cell);
        if (obj) {
            obj.pullsDown = flag ? YES : NO;
        }
    }
}

int ns_popupbuttoncell_pulls_down(uintptr_t cell)
{
    @autoreleasepool {
        NSPopUpButtonCell *obj = ns_popupbuttoncell_from(cell);
        return obj && obj.pullsDown ? 1 : 0;
    }
}

void ns_popupbuttoncell_set_autoenables_items(uintptr_t cell, int flag)
{
    @autoreleasepool {
        NSPopUpButtonCell *obj = ns_popupbuttoncell_from(cell);
        if (obj) {
            obj.autoenablesItems = flag ? YES : NO;
        }
    }
}

int ns_popupbuttoncell_autoenables_items(uintptr_t cell)
{
    @autoreleasepool {
        NSPopUpButtonCell *obj = ns_popupbuttoncell_from(cell);
        return obj && obj.autoenablesItems ? 1 : 0;
    }
}

void ns_popupbuttoncell_set_uses_item_from_menu(uintptr_t cell, int flag)
{
    @autoreleasepool {
        NSPopUpButtonCell *obj = ns_popupbuttoncell_from(cell);
        if (obj) {
            obj.usesItemFromMenu = flag ? YES : NO;
        }
    }
}

int ns_popupbuttoncell_uses_item_from_menu(uintptr_t cell)
{
    @autoreleasepool {
        NSPopUpButtonCell *obj = ns_popupbuttoncell_from(cell);
        return obj && obj.usesItemFromMenu ? 1 : 0;
    }
}

void ns_popupbuttoncell_set_alters_state_of_selected_item(uintptr_t cell, int flag)
{
    @autoreleasepool {
        NSPopUpButtonCell *obj = ns_popupbuttoncell_from(cell);
        if (obj) {
            obj.altersStateOfSelectedItem = flag ? YES : NO;
        }
    }
}

int ns_popupbuttoncell_alters_state_of_selected_item(uintptr_t cell)
{
    @autoreleasepool {
        NSPopUpButtonCell *obj = ns_popupbuttoncell_from(cell);
        return obj && obj.altersStateOfSelectedItem ? 1 : 0;
    }
}

void ns_popupbuttoncell_add_item_with_title(uintptr_t cell, const char *title)
{
    @autoreleasepool {
        NSPopUpButtonCell *obj = ns_popupbuttoncell_from(cell);
        if (obj) {
            [obj addItemWithTitle:title ? [NSString stringWithUTF8String:title] : @""];
        }
    }
}

void ns_popupbuttoncell_remove_all_items(uintptr_t cell)
{
    @autoreleasepool {
        NSPopUpButtonCell *obj = ns_popupbuttoncell_from(cell);
        if (obj) {
            [obj removeAllItems];
        }
    }
}

int ns_popupbuttoncell_number_of_items(uintptr_t cell)
{
    @autoreleasepool {
        NSPopUpButtonCell *obj = ns_popupbuttoncell_from(cell);
        return obj ? (int)obj.numberOfItems : 0;
    }
}

void ns_popupbuttoncell_select_item_at_index(uintptr_t cell, int index)
{
    @autoreleasepool {
        NSPopUpButtonCell *obj = ns_popupbuttoncell_from(cell);
        if (obj) {
            [obj selectItemAtIndex:index];
        }
    }
}

int ns_popupbuttoncell_index_of_selected_item(uintptr_t cell)
{
    @autoreleasepool {
        NSPopUpButtonCell *obj = ns_popupbuttoncell_from(cell);
        return obj ? (int)obj.indexOfSelectedItem : -1;
    }
}

int ns_popupbuttoncell_title_of_selected_item(uintptr_t cell, char *out, int out_len)
{
    @autoreleasepool {
        NSPopUpButtonCell *obj = ns_popupbuttoncell_from(cell);
        return obj ? ns_copy_nsstring(obj.titleOfSelectedItem, out, out_len) : 0;
    }
}

void ns_popupbuttoncell_set_arrow_position(uintptr_t cell, int position)
{
    @autoreleasepool {
        NSPopUpButtonCell *obj = ns_popupbuttoncell_from(cell);
        if (obj) {
            obj.arrowPosition = (NSPopUpArrowPosition)position;
        }
    }
}

int ns_popupbuttoncell_get_arrow_position(uintptr_t cell)
{
    @autoreleasepool {
        NSPopUpButtonCell *obj = ns_popupbuttoncell_from(cell);
        return obj ? (int)obj.arrowPosition : 0;
    }
}
