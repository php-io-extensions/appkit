#import <AppKit/AppKit.h>
#import "ns-statusbarbutton.h"
#import "ns-statusitem.h"
#import "ns-view.h"
#import "ns-image.h"

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


static NSStatusBarButton *ns_statusbarbutton_view(uintptr_t handle)
{
    void *ptr = ns_view_nsview(handle);
    if (!ptr) {
        return nil;
    }
    NSView *view = (__bridge NSView *)ptr;
    return [view isKindOfClass:[NSStatusBarButton class]] ? (NSStatusBarButton *)view : nil;
}


uintptr_t ns_statusbarbutton_wrap(void *button)
{
    if (!button) {
        return 0;
    }
    @autoreleasepool {
        NSView *view = (__bridge NSView *)button;
        if (![view isKindOfClass:[NSStatusBarButton class]]) {
            return 0;
        }
        return ns_view_wrap(button);
    }
}

uintptr_t ns_statusbarbutton_from_status_item(uintptr_t item)
{
    return ns_statusitem_button(item);
}

void ns_statusbarbutton_destroy(uintptr_t button)
{
    ns_view_destroy(button);
}

void ns_statusbarbutton_set_title(uintptr_t button, const char *title)
{
    @autoreleasepool {
        NSStatusBarButton *obj = ns_statusbarbutton_view(button);
        if (obj) {
            obj.title = title ? [NSString stringWithUTF8String:title] : @"";
        }
    }
}

int ns_statusbarbutton_get_title(uintptr_t button, char *out, int out_len)
{
    @autoreleasepool {
        NSStatusBarButton *obj = ns_statusbarbutton_view(button);
        if (!obj) {
            return 0;
        }
        return ns_copy_nsstring(obj.title, out, out_len);
    }
}

void ns_statusbarbutton_set_appears_disabled(uintptr_t button, int flag)
{
    @autoreleasepool {
        NSStatusBarButton *obj = ns_statusbarbutton_view(button);
        if (obj) {
            obj.appearsDisabled = flag ? YES : NO;
        }
    }
}

int ns_statusbarbutton_appears_disabled(uintptr_t button)
{
    @autoreleasepool {
        NSStatusBarButton *obj = ns_statusbarbutton_view(button);
        return obj && obj.appearsDisabled ? 1 : 0;
    }
}

void ns_statusbarbutton_set_image(uintptr_t button, uintptr_t image)
{
    void *ptr = ns_image_nsimage(image);
    @autoreleasepool {
        NSStatusBarButton *obj = ns_statusbarbutton_view(button);
        if (obj) {
            obj.image = ptr ? (__bridge NSImage *)ptr : nil;
        }
    }
}
