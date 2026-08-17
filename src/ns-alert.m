#import <AppKit/AppKit.h>
#import "ns-alert.h"
#import "ns-window.h"

@interface NSPhpAlert : NSAlert
@property (nonatomic, assign) int pendingResponse;
@end

@implementation NSPhpAlert
@end

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
        NSPhpAlert *alert = [[NSPhpAlert alloc] init];
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

void ns_alert_begin_sheet(uintptr_t alert, uintptr_t window)
{
    @autoreleasepool {
        NSAlert *obj = ns_alert_bridge_obj(alert);
        void *winPtr = ns_window_nswindow(window);
        if (!obj || !winPtr) {
            return;
        }

        NSWindow *win = (__bridge NSWindow *)winPtr;
        if ([obj isKindOfClass:[NSPhpAlert class]]) {
            ((NSPhpAlert *)obj).pendingResponse = 0;
        }

        [obj beginSheetModalForWindow:win completionHandler:^(NSModalResponse returnCode) {
            if ([obj isKindOfClass:[NSPhpAlert class]]) {
                ((NSPhpAlert *)obj).pendingResponse = (int)returnCode;
            }
        }];
    }
}

int ns_alert_poll_response(uintptr_t alert)
{
    @autoreleasepool {
        NSAlert *obj = ns_alert_bridge_obj(alert);
        if (!obj || ![obj isKindOfClass:[NSPhpAlert class]]) {
            return 0;
        }

        NSPhpAlert *typed = (NSPhpAlert *)obj;
        if (typed.pendingResponse == 0) {
            return 0;
        }

        int response = typed.pendingResponse;
        typed.pendingResponse = 0;
        return response;
    }
}
