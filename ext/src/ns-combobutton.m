#import <AppKit/AppKit.h>
#import "ns-combobutton.h"
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

static NSComboButton *ns_combobutton_view(uintptr_t button)
{
    void *ptr = ns_view_nsview(button);
    if (!ptr) {
        return nil;
    }
    NSView *view = (__bridge NSView *)ptr;
    return [view isKindOfClass:[NSComboButton class]] ? (NSComboButton *)view : nil;
}

uintptr_t ns_combobutton_create_with_title(double x, double y, double width, double height, const char *title, uintptr_t menu)
{
    if (width <= 0) {
        width = 120;
    }
    if (height <= 0) {
        height = 24;
    }
    @autoreleasepool {
        NSRect rect = NSMakeRect((CGFloat)x, (CGFloat)y, (CGFloat)width, (CGFloat)height);
        NSComboButton *button = [[NSComboButton alloc] initWithFrame:rect];
        button.title = title ? [NSString stringWithUTF8String:title] : @"";
        button.menu = ns_menu_from_handle(menu);
        return ns_view_wrap((__bridge void *)button);
    }
}

void ns_combobutton_destroy(uintptr_t button)
{
    ns_view_destroy(button);
}

void ns_combobutton_set_title(uintptr_t button, const char *title)
{
    @autoreleasepool {
        NSComboButton *obj = ns_combobutton_view(button);
        if (obj) {
            obj.title = title ? [NSString stringWithUTF8String:title] : @"";
        }
    }
}

int ns_combobutton_get_title(uintptr_t button, char *out, int out_len)
{
    @autoreleasepool {
        NSComboButton *obj = ns_combobutton_view(button);
        return obj ? ns_copy_nsstring(obj.title, out, out_len) : 0;
    }
}

void ns_combobutton_set_image(uintptr_t button, uintptr_t image)
{
    @autoreleasepool {
        NSComboButton *obj = ns_combobutton_view(button);
        if (obj) {
            obj.image = (__bridge NSImage *)ns_image_nsimage(image);
        }
    }
}

void ns_combobutton_set_menu(uintptr_t button, uintptr_t menu)
{
    @autoreleasepool {
        NSComboButton *obj = ns_combobutton_view(button);
        if (obj) {
            obj.menu = ns_menu_from_handle(menu);
        }
    }
}

uintptr_t ns_combobutton_get_menu(uintptr_t button)
{
    @autoreleasepool {
        NSComboButton *obj = ns_combobutton_view(button);
        return obj && obj.menu ? ns_retain_obj(obj.menu) : 0;
    }
}

void ns_combobutton_set_style(uintptr_t button, int style)
{
    @autoreleasepool {
        NSComboButton *obj = ns_combobutton_view(button);
        if (obj) {
            obj.style = (NSComboButtonStyle)style;
        }
    }
}

int ns_combobutton_get_style(uintptr_t button)
{
    @autoreleasepool {
        NSComboButton *obj = ns_combobutton_view(button);
        return obj ? (int)obj.style : 0;
    }
}
