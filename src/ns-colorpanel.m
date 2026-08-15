#import <AppKit/AppKit.h>
#import "ns-colorpanel.h"
#import "ns-colorlist.h"

static NSColorPanel *ns_colorpanel_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSColorPanel class]] ? (NSColorPanel *)obj : nil;
}

static NSColor *ns_colorpanel_srgb_from(NSColorPanel *panel)
{
    if (!panel || !panel.color) {
        return nil;
    }
    return [panel.color colorUsingColorSpace:[NSColorSpace sRGBColorSpace]];
}

uintptr_t ns_colorpanel_shared(void)
{
    @autoreleasepool {
        return (uintptr_t)(__bridge_retained void *)[NSColorPanel sharedColorPanel];
    }
}

void ns_colorpanel_destroy(uintptr_t panel)
{
    if (!panel) {
        return;
    }
    CFRelease((void *)panel);
}

void *ns_colorpanel_nscolorpanel(uintptr_t panel)
{
    NSColorPanel *obj = ns_colorpanel_from(panel);
    return obj ? (__bridge void *)obj : NULL;
}

int ns_colorpanel_shared_exists(void)
{
    @autoreleasepool {
        return [NSColorPanel sharedColorPanelExists] ? 1 : 0;
    }
}

void ns_colorpanel_set_picker_mask(unsigned mask)
{
    @autoreleasepool {
        [NSColorPanel setPickerMask:(NSColorPanelOptions)mask];
    }
}

void ns_colorpanel_set_picker_mode(int mode)
{
    @autoreleasepool {
        [NSColorPanel setPickerMode:(NSColorPanelMode)mode];
    }
}

void ns_colorpanel_order_front(void)
{
    @autoreleasepool {
        [[NSColorPanel sharedColorPanel] orderFront:nil];
    }
}

int ns_colorpanel_mode(uintptr_t panel)
{
    @autoreleasepool {
        NSColorPanel *obj = ns_colorpanel_from(panel);
        return obj ? (int)obj.mode : (int)NSColorPanelModeNone;
    }
}

void ns_colorpanel_set_mode(uintptr_t panel, int mode)
{
    @autoreleasepool {
        NSColorPanel *obj = ns_colorpanel_from(panel);
        if (obj) {
            obj.mode = (NSColorPanelMode)mode;
        }
    }
}

int ns_colorpanel_shows_alpha(uintptr_t panel)
{
    @autoreleasepool {
        NSColorPanel *obj = ns_colorpanel_from(panel);
        return obj && obj.showsAlpha ? 1 : 0;
    }
}

void ns_colorpanel_set_shows_alpha(uintptr_t panel, int shows)
{
    @autoreleasepool {
        NSColorPanel *obj = ns_colorpanel_from(panel);
        if (obj) {
            obj.showsAlpha = shows ? YES : NO;
        }
    }
}

int ns_colorpanel_is_continuous(uintptr_t panel)
{
    @autoreleasepool {
        NSColorPanel *obj = ns_colorpanel_from(panel);
        return obj && obj.continuous ? 1 : 0;
    }
}

void ns_colorpanel_set_continuous(uintptr_t panel, int continuous)
{
    @autoreleasepool {
        NSColorPanel *obj = ns_colorpanel_from(panel);
        if (obj) {
            obj.continuous = continuous ? YES : NO;
        }
    }
}

int ns_colorpanel_set_color_rgba(uintptr_t panel, int r, int g, int b, int a)
{
    @autoreleasepool {
        NSColorPanel *obj = ns_colorpanel_from(panel);
        if (!obj) {
            return 0;
        }
        obj.color = [NSColor colorWithRed:((CGFloat)r) / 255.0
                                    green:((CGFloat)g) / 255.0
                                     blue:((CGFloat)b) / 255.0
                                    alpha:((CGFloat)a) / 255.0];
        return 1;
    }
}

int ns_colorpanel_get_color_rgba(uintptr_t panel, int *r, int *g, int *b, int *a)
{
    if (!r || !g || !b || !a) {
        return 0;
    }
    @autoreleasepool {
        NSColor *color = ns_colorpanel_srgb_from(ns_colorpanel_from(panel));
        if (!color) {
            return 0;
        }
        *r = (int)(color.redComponent * 255.0 + 0.5);
        *g = (int)(color.greenComponent * 255.0 + 0.5);
        *b = (int)(color.blueComponent * 255.0 + 0.5);
        *a = (int)(color.alphaComponent * 255.0 + 0.5);
        return 1;
    }
}

double ns_colorpanel_alpha(uintptr_t panel)
{
    @autoreleasepool {
        NSColorPanel *obj = ns_colorpanel_from(panel);
        return obj ? (double)obj.alpha : 0.0;
    }
}

void ns_colorpanel_attach_color_list(uintptr_t panel, uintptr_t list)
{
    @autoreleasepool {
        NSColorPanel *obj = ns_colorpanel_from(panel);
        NSColorList *colorList = (__bridge NSColorList *)(void *)ns_colorlist_nscolorlist(list);
        if (obj && colorList) {
            [obj attachColorList:colorList];
        }
    }
}

void ns_colorpanel_detach_color_list(uintptr_t panel, uintptr_t list)
{
    @autoreleasepool {
        NSColorPanel *obj = ns_colorpanel_from(panel);
        NSColorList *colorList = (__bridge NSColorList *)(void *)ns_colorlist_nscolorlist(list);
        if (obj && colorList) {
            [obj detachColorList:colorList];
        }
    }
}
