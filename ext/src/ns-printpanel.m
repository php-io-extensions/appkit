#import <AppKit/AppKit.h>
#import "ns-printpanel.h"
#import "ns-printinfo.h"
#import "ns-viewcontroller.h"

static uintptr_t ns_printpanel_retain_obj(id object)
{
    return object ? (uintptr_t)(__bridge_retained void *)object : 0;
}

static NSPrintPanel *ns_printpanel_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSPrintPanel class]] ? (NSPrintPanel *)obj : nil;
}

static int ns_printpanel_copy_nsstring(NSString *text, char *out, int out_len)
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

uintptr_t ns_printpanel_wrap(void *panel)
{
    if (!panel) {
        return 0;
    }
    @autoreleasepool {
        NSPrintPanel *obj = (__bridge NSPrintPanel *)panel;
        return [obj isKindOfClass:[NSPrintPanel class]] ? ns_printpanel_retain_obj(obj) : 0;
    }
}

void ns_printpanel_destroy(uintptr_t panel)
{
    if (!panel) {
        return;
    }
    CFRelease((void *)panel);
}

void *ns_printpanel_nsprintpanel(uintptr_t panel)
{
    NSPrintPanel *obj = ns_printpanel_from(panel);
    return obj ? (__bridge void *)obj : NULL;
}

uintptr_t ns_printpanel_print_panel(void)
{
    @autoreleasepool {
        return ns_printpanel_retain_obj([NSPrintPanel printPanel]);
    }
}

unsigned ns_printpanel_options(uintptr_t panel)
{
    @autoreleasepool {
        NSPrintPanel *obj = ns_printpanel_from(panel);
        return obj ? (unsigned)obj.options : 0;
    }
}

void ns_printpanel_set_options(uintptr_t panel, unsigned options)
{
    @autoreleasepool {
        NSPrintPanel *obj = ns_printpanel_from(panel);
        if (obj) {
            obj.options = (NSPrintPanelOptions)options;
        }
    }
}

int ns_printpanel_default_button_title(uintptr_t panel, char *out, int out_len)
{
    @autoreleasepool {
        NSPrintPanel *obj = ns_printpanel_from(panel);
        return obj ? ns_printpanel_copy_nsstring(obj.defaultButtonTitle, out, out_len) : 0;
    }
}

void ns_printpanel_set_default_button_title(uintptr_t panel, const char *title)
{
    @autoreleasepool {
        NSPrintPanel *obj = ns_printpanel_from(panel);
        if (obj) {
            if (title && title[0] != '\0') {
                [obj setDefaultButtonTitle:[NSString stringWithUTF8String:title]];
            } else {
                [obj setDefaultButtonTitle:nil];
            }
        }
    }
}

int ns_printpanel_help_anchor(uintptr_t panel, char *out, int out_len)
{
    @autoreleasepool {
        NSPrintPanel *obj = ns_printpanel_from(panel);
        return obj ? ns_printpanel_copy_nsstring(obj.helpAnchor, out, out_len) : 0;
    }
}

void ns_printpanel_set_help_anchor(uintptr_t panel, const char *anchor)
{
    @autoreleasepool {
        NSPrintPanel *obj = ns_printpanel_from(panel);
        if (obj) {
            if (anchor && anchor[0] != '\0') {
                obj.helpAnchor = [NSString stringWithUTF8String:anchor];
            } else {
                obj.helpAnchor = nil;
            }
        }
    }
}

int ns_printpanel_job_style_hint(uintptr_t panel, char *out, int out_len)
{
    @autoreleasepool {
        NSPrintPanel *obj = ns_printpanel_from(panel);
        return obj ? ns_printpanel_copy_nsstring(obj.jobStyleHint, out, out_len) : 0;
    }
}

void ns_printpanel_set_job_style_hint(uintptr_t panel, const char *hint)
{
    @autoreleasepool {
        NSPrintPanel *obj = ns_printpanel_from(panel);
        if (obj) {
            if (hint && hint[0] != '\0') {
                obj.jobStyleHint = [NSString stringWithUTF8String:hint];
            } else {
                obj.jobStyleHint = nil;
            }
        }
    }
}

int ns_printpanel_run_modal(uintptr_t panel)
{
    @autoreleasepool {
        NSPrintPanel *obj = ns_printpanel_from(panel);
        if (!obj) {
            return 0;
        }
        return (int)[obj runModal];
    }
}

int ns_printpanel_run_modal_with_print_info(uintptr_t panel, void *printInfo)
{
    @autoreleasepool {
        NSPrintPanel *obj = ns_printpanel_from(panel);
        if (!obj) {
            return 0;
        }
        NSPrintInfo *info = printInfo ? (__bridge NSPrintInfo *)printInfo : [NSPrintInfo sharedPrintInfo];
        return (int)[obj runModalWithPrintInfo:info];
    }
}

void *ns_printpanel_print_info(uintptr_t panel)
{
    @autoreleasepool {
        NSPrintPanel *obj = ns_printpanel_from(panel);
        return obj && obj.printInfo ? (__bridge void *)obj.printInfo : NULL;
    }
}

void ns_printpanel_add_accessory_controller(uintptr_t panel, uintptr_t controller)
{
    @autoreleasepool {
        NSPrintPanel *obj = ns_printpanel_from(panel);
        NSViewController *vc = (__bridge NSViewController *)ns_viewcontroller_nsviewcontroller(controller);
        if (obj && vc) {
            [obj addAccessoryController:vc];
        }
    }
}

void ns_printpanel_remove_accessory_controller(uintptr_t panel, uintptr_t controller)
{
    @autoreleasepool {
        NSPrintPanel *obj = ns_printpanel_from(panel);
        NSViewController *vc = (__bridge NSViewController *)ns_viewcontroller_nsviewcontroller(controller);
        if (obj && vc) {
            [obj removeAccessoryController:vc];
        }
    }
}

int ns_printpanel_accessory_controller_count(uintptr_t panel)
{
    @autoreleasepool {
        NSPrintPanel *obj = ns_printpanel_from(panel);
        return obj ? (int)obj.accessoryControllers.count : 0;
    }
}
