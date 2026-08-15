#import <AppKit/AppKit.h>
#import "ns-fontpanel.h"
#import "ns-font.h"

static uintptr_t ns_fontpanel_retain_obj(id object)
{
    return object ? (uintptr_t)(__bridge_retained void *)object : 0;
}

static NSFontPanel *ns_fontpanel_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSFontPanel class]] ? (NSFontPanel *)obj : nil;
}

uintptr_t ns_fontpanel_wrap(void *panel)
{
    if (!panel) {
        return 0;
    }
    @autoreleasepool {
        NSFontPanel *obj = (__bridge NSFontPanel *)panel;
        return [obj isKindOfClass:[NSFontPanel class]] ? ns_fontpanel_retain_obj(obj) : 0;
    }
}

uintptr_t ns_fontpanel_shared(void)
{
    @autoreleasepool {
        return ns_fontpanel_retain_obj([NSFontPanel sharedFontPanel]);
    }
}

void ns_fontpanel_destroy(uintptr_t panel)
{
    if (!panel) {
        return;
    }
    CFRelease((void *)panel);
}

void *ns_fontpanel_nsfontpanel(uintptr_t panel)
{
    NSFontPanel *obj = ns_fontpanel_from(panel);
    return obj ? (__bridge void *)obj : NULL;
}

int ns_fontpanel_shared_exists(void)
{
    @autoreleasepool {
        return [NSFontPanel sharedFontPanelExists] ? 1 : 0;
    }
}

void ns_fontpanel_set_panel_font(uintptr_t panel, uintptr_t font, int is_multiple)
{
    @autoreleasepool {
        NSFontPanel *obj = ns_fontpanel_from(panel);
        NSFont *fontObj = (__bridge NSFont *)(void *)ns_font_nsfont(font);
        if (obj && fontObj) {
            [obj setPanelFont:fontObj isMultiple:is_multiple ? YES : NO];
        }
    }
}

uintptr_t ns_fontpanel_panel_convert_font(uintptr_t panel, uintptr_t font)
{
    @autoreleasepool {
        NSFontPanel *obj = ns_fontpanel_from(panel);
        NSFont *fontObj = (__bridge NSFont *)(void *)ns_font_nsfont(font);
        return (obj && fontObj) ? ns_font_wrap((__bridge void *)[obj panelConvertFont:fontObj]) : 0;
    }
}

int ns_fontpanel_works_when_modal(uintptr_t panel)
{
    @autoreleasepool {
        NSFontPanel *obj = ns_fontpanel_from(panel);
        return obj && obj.worksWhenModal ? 1 : 0;
    }
}

void ns_fontpanel_set_works_when_modal(uintptr_t panel, int works)
{
    @autoreleasepool {
        NSFontPanel *obj = ns_fontpanel_from(panel);
        if (obj) {
            obj.worksWhenModal = works ? YES : NO;
        }
    }
}

int ns_fontpanel_is_enabled(uintptr_t panel)
{
    @autoreleasepool {
        NSFontPanel *obj = ns_fontpanel_from(panel);
        return obj && obj.enabled ? 1 : 0;
    }
}

void ns_fontpanel_set_enabled(uintptr_t panel, int enabled)
{
    @autoreleasepool {
        NSFontPanel *obj = ns_fontpanel_from(panel);
        if (obj) {
            obj.enabled = enabled ? YES : NO;
        }
    }
}

void ns_fontpanel_reload_default_font_families(uintptr_t panel)
{
    @autoreleasepool {
        NSFontPanel *obj = ns_fontpanel_from(panel);
        if (obj) {
            [obj reloadDefaultFontFamilies];
        }
    }
}

void ns_fontpanel_order_front(uintptr_t panel)
{
    @autoreleasepool {
        NSFontPanel *obj = ns_fontpanel_from(panel);
        if (obj) {
            [obj orderFront:nil];
        }
    }
}
