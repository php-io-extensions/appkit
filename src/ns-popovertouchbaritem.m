#import <AppKit/AppKit.h>
#import "ns-popovertouchbaritem.h"
#import "ns-touchbar.h"
#import "ns-touchbaritem.h"
#import "ns-image.h"

static NSPopoverTouchBarItem *ns_popovertouchbaritem_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSPopoverTouchBarItem class]] ? (NSPopoverTouchBarItem *)obj : nil;
}

uintptr_t ns_popovertouchbaritem_create(const char *identifier)
{
    @autoreleasepool {
        if (@available(macOS 10.12.2, *)) {
            NSString *ident = identifier ? [NSString stringWithUTF8String:identifier] : @"ns.touchbar.popover";
            return ns_retain_obj([[NSPopoverTouchBarItem alloc] initWithIdentifier:ident]);
        }
        return 0;
    }
}

uintptr_t ns_popovertouchbaritem_wrap(void *item)
{
    if (!item) {
        return 0;
    }
    @autoreleasepool {
        NSPopoverTouchBarItem *obj = (__bridge NSPopoverTouchBarItem *)item;
        return [obj isKindOfClass:[NSPopoverTouchBarItem class]] ? ns_retain_obj(obj) : 0;
    }
}

void ns_popovertouchbaritem_destroy(uintptr_t item)
{
    ns_touchbaritem_destroy(item);
}

void *ns_popovertouchbaritem_nspopovertouchbaritem(uintptr_t item)
{
    NSPopoverTouchBarItem *obj = ns_popovertouchbaritem_from(item);
    return obj ? (__bridge void *)obj : NULL;
}

void ns_popovertouchbaritem_set_popover_touchbar(uintptr_t item, uintptr_t bar)
{
    @autoreleasepool {
        NSPopoverTouchBarItem *obj = ns_popovertouchbaritem_from(item);
        NSTouchBar *touchBar = (__bridge NSTouchBar *)ns_touchbar_nstouchbar(bar);
        if (obj && touchBar) {
            obj.popoverTouchBar = touchBar;
        }
    }
}

uintptr_t ns_popovertouchbaritem_get_popover_touchbar(uintptr_t item)
{
    @autoreleasepool {
        NSPopoverTouchBarItem *obj = ns_popovertouchbaritem_from(item);
        return obj && obj.popoverTouchBar ? ns_touchbar_wrap((__bridge void *)obj.popoverTouchBar) : 0;
    }
}

void ns_popovertouchbaritem_set_press_and_hold_touchbar(uintptr_t item, uintptr_t bar)
{
    @autoreleasepool {
        NSPopoverTouchBarItem *obj = ns_popovertouchbaritem_from(item);
        NSTouchBar *touchBar = (__bridge NSTouchBar *)ns_touchbar_nstouchbar(bar);
        if (obj && touchBar) {
            obj.pressAndHoldTouchBar = touchBar;
        }
    }
}

uintptr_t ns_popovertouchbaritem_get_press_and_hold_touchbar(uintptr_t item)
{
    @autoreleasepool {
        NSPopoverTouchBarItem *obj = ns_popovertouchbaritem_from(item);
        return obj && obj.pressAndHoldTouchBar ? ns_touchbar_wrap((__bridge void *)obj.pressAndHoldTouchBar) : 0;
    }
}

void ns_popovertouchbaritem_set_customization_label(uintptr_t item, const char *label)
{
    @autoreleasepool {
        NSPopoverTouchBarItem *obj = ns_popovertouchbaritem_from(item);
        if (obj) {
            obj.customizationLabel = label ? [NSString stringWithUTF8String:label] : @"";
        }
    }
}

int ns_popovertouchbaritem_get_customization_label(uintptr_t item, char *out, int out_len)
{
    @autoreleasepool {
        NSPopoverTouchBarItem *obj = ns_popovertouchbaritem_from(item);
        return obj ? ns_copy_nsstring(obj.customizationLabel, out, out_len) : 0;
    }
}

void ns_popovertouchbaritem_set_collapsed_representation_label(uintptr_t item, const char *label)
{
    @autoreleasepool {
        NSPopoverTouchBarItem *obj = ns_popovertouchbaritem_from(item);
        if (obj) {
            obj.collapsedRepresentationLabel = label ? [NSString stringWithUTF8String:label] : @"";
        }
    }
}

int ns_popovertouchbaritem_get_collapsed_representation_label(uintptr_t item, char *out, int out_len)
{
    @autoreleasepool {
        NSPopoverTouchBarItem *obj = ns_popovertouchbaritem_from(item);
        return obj ? ns_copy_nsstring(obj.collapsedRepresentationLabel, out, out_len) : 0;
    }
}

void ns_popovertouchbaritem_set_collapsed_representation_image(uintptr_t item, uintptr_t image)
{
    @autoreleasepool {
        NSPopoverTouchBarItem *obj = ns_popovertouchbaritem_from(item);
        void *img = ns_image_nsimage(image);
        if (obj && img) {
            obj.collapsedRepresentationImage = (__bridge NSImage *)img;
        }
    }
}

void ns_popovertouchbaritem_set_shows_close_button(uintptr_t item, int flag)
{
    @autoreleasepool {
        NSPopoverTouchBarItem *obj = ns_popovertouchbaritem_from(item);
        if (obj) {
            obj.showsCloseButton = flag ? YES : NO;
        }
    }
}

int ns_popovertouchbaritem_shows_close_button(uintptr_t item)
{
    @autoreleasepool {
        NSPopoverTouchBarItem *obj = ns_popovertouchbaritem_from(item);
        return obj && obj.showsCloseButton ? 1 : 0;
    }
}

void ns_popovertouchbaritem_show_popover(uintptr_t item)
{
    @autoreleasepool {
        NSPopoverTouchBarItem *obj = ns_popovertouchbaritem_from(item);
        if (obj) {
            [obj showPopover:nil];
        }
    }
}

void ns_popovertouchbaritem_dismiss_popover(uintptr_t item)
{
    @autoreleasepool {
        NSPopoverTouchBarItem *obj = ns_popovertouchbaritem_from(item);
        if (obj) {
            [obj dismissPopover:nil];
        }
    }
}
