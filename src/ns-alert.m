#import <AppKit/AppKit.h>
#import "ns-alert.h"

static uintptr_t ns_alert_retain_obj(id object)
{
    return object ? (uintptr_t)(__bridge_retained void *)object : 0;
}

static id ns_alert_bridge_obj(uintptr_t handle)
{
    return handle ? (__bridge id)(void *)handle : nil;
}

uintptr_t ns_alert_create(void)
{
    @autoreleasepool {
        NSAlert *alert = [[NSAlert alloc] init];
        [alert setAlertStyle:NSAlertStyleInformational];
        return ns_alert_retain_obj(alert);
    }
}

void ns_alert_destroy(uintptr_t alert)
{
    if (!alert) {
        return;
    }
    CFRelease((void *)alert);
}

void ns_alert_set_message(uintptr_t alert, const char *text)
{
    @autoreleasepool {
        NSAlert *obj = ns_alert_bridge_obj(alert);
        if (!obj) {
            return;
        }
        [obj setMessageText:text ? [NSString stringWithUTF8String:text] : @""];
    }
}

void ns_alert_set_info(uintptr_t alert, const char *text)
{
    @autoreleasepool {
        NSAlert *obj = ns_alert_bridge_obj(alert);
        if (!obj) {
            return;
        }
        [obj setInformativeText:text ? [NSString stringWithUTF8String:text] : @""];
    }
}

void ns_alert_add_button(uintptr_t alert, const char *title)
{
    @autoreleasepool {
        NSAlert *obj = ns_alert_bridge_obj(alert);
        if (!obj) {
            return;
        }
        [obj addButtonWithTitle:title ? [NSString stringWithUTF8String:title] : @""];
    }
}

int ns_alert_run_modal(uintptr_t alert)
{
    @autoreleasepool {
        NSAlert *obj = ns_alert_bridge_obj(alert);
        if (!obj) {
            return 0;
        }
        return (int)[obj runModal];
    }
}
