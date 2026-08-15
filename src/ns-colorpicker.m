#import <AppKit/AppKit.h>
#import "ns-colorpicker.h"
#import "ns-colorpanel.h"
#import "ns-colorlist.h"

static uintptr_t ns_colorpicker_retain_obj(id object)
{
    return object ? (uintptr_t)(__bridge_retained void *)object : 0;
}

static NSColorPicker *ns_colorpicker_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSColorPicker class]] ? (NSColorPicker *)obj : nil;
}

static int ns_colorpicker_copy_nsstring(NSString *text, char *out, int out_len)
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

uintptr_t ns_colorpicker_wrap(void *picker)
{
    if (!picker) {
        return 0;
    }
    @autoreleasepool {
        NSColorPicker *obj = (__bridge NSColorPicker *)picker;
        return [obj isKindOfClass:[NSColorPicker class]] ? ns_colorpicker_retain_obj(obj) : 0;
    }
}

void ns_colorpicker_destroy(uintptr_t picker)
{
    if (!picker) {
        return;
    }
    CFRelease((void *)picker);
}

void *ns_colorpicker_nscolorpicker(uintptr_t picker)
{
    NSColorPicker *obj = ns_colorpicker_from(picker);
    return obj ? (__bridge void *)obj : NULL;
}

uintptr_t ns_colorpicker_create(unsigned mask, uintptr_t panel)
{
    @autoreleasepool {
        void *panelPtr = ns_colorpanel_nscolorpanel(panel);
        NSColorPanel *colorPanel = panelPtr ? (__bridge NSColorPanel *)panelPtr : [NSColorPanel sharedColorPanel];
        NSColorPicker *obj = [[NSColorPicker alloc] initWithPickerMask:(NSUInteger)mask colorPanel:colorPanel];
        return ns_colorpicker_retain_obj(obj);
    }
}

uintptr_t ns_colorpicker_color_panel(uintptr_t picker)
{
    @autoreleasepool {
        NSColorPicker *obj = ns_colorpicker_from(picker);
        if (!obj || !obj.colorPanel) {
            return 0;
        }
        return (uintptr_t)(__bridge_retained void *)obj.colorPanel;
    }
}

int ns_colorpicker_button_tool_tip(uintptr_t picker, char *out, int out_len)
{
    @autoreleasepool {
        NSColorPicker *obj = ns_colorpicker_from(picker);
        if (!obj) {
            return 0;
        }
        return ns_colorpicker_copy_nsstring(obj.buttonToolTip, out, out_len);
    }
}

int ns_colorpicker_min_content_size(uintptr_t picker, double *width, double *height)
{
    if (!width || !height) {
        return 0;
    }
    @autoreleasepool {
        NSColorPicker *obj = ns_colorpicker_from(picker);
        if (!obj) {
            return 0;
        }
        NSSize size = obj.minContentSize;
        *width = (double)size.width;
        *height = (double)size.height;
        return 1;
    }
}

void ns_colorpicker_set_mode(uintptr_t picker, int mode)
{
    @autoreleasepool {
        NSColorPicker *obj = ns_colorpicker_from(picker);
        if (obj) {
            [obj setMode:(NSColorPanelMode)mode];
        }
    }
}

void ns_colorpicker_attach_color_list(uintptr_t picker, uintptr_t list)
{
    @autoreleasepool {
        NSColorPicker *obj = ns_colorpicker_from(picker);
        NSColorList *colorList = (__bridge NSColorList *)(void *)ns_colorlist_nscolorlist(list);
        if (obj && colorList) {
            [obj attachColorList:colorList];
        }
    }
}

void ns_colorpicker_detach_color_list(uintptr_t picker, uintptr_t list)
{
    @autoreleasepool {
        NSColorPicker *obj = ns_colorpicker_from(picker);
        NSColorList *colorList = (__bridge NSColorList *)(void *)ns_colorlist_nscolorlist(list);
        if (obj && colorList) {
            [obj detachColorList:colorList];
        }
    }
}
