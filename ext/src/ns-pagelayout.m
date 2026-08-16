#import <AppKit/AppKit.h>
#import "ns-pagelayout.h"
#import "ns-viewcontroller.h"

static NSPageLayout *ns_pagelayout_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSPageLayout class]] ? (NSPageLayout *)obj : nil;
}

uintptr_t ns_pagelayout_page_layout(void)
{
    @autoreleasepool {
        return (uintptr_t)(__bridge_retained void *)[NSPageLayout pageLayout];
    }
}

void ns_pagelayout_destroy(uintptr_t layout)
{
    if (!layout) {
        return;
    }
    CFRelease((void *)layout);
}

void *ns_pagelayout_nspagelayout(uintptr_t layout)
{
    NSPageLayout *obj = ns_pagelayout_from(layout);
    return obj ? (__bridge void *)obj : NULL;
}

int ns_pagelayout_run_modal(uintptr_t layout)
{
    @autoreleasepool {
        NSPageLayout *obj = ns_pagelayout_from(layout);
        if (!obj) {
            return 0;
        }
        return (int)[obj runModal];
    }
}

int ns_pagelayout_run_modal_with_print_info(uintptr_t layout, void *printInfo)
{
    @autoreleasepool {
        NSPageLayout *obj = ns_pagelayout_from(layout);
        if (!obj) {
            return 0;
        }
        NSPrintInfo *info = printInfo ? (__bridge NSPrintInfo *)printInfo : [NSPrintInfo sharedPrintInfo];
        return (int)[obj runModalWithPrintInfo:info];
    }
}

void *ns_pagelayout_print_info(uintptr_t layout)
{
    @autoreleasepool {
        NSPageLayout *obj = ns_pagelayout_from(layout);
        return obj && obj.printInfo ? (__bridge void *)obj.printInfo : NULL;
    }
}

void ns_pagelayout_add_accessory_controller(uintptr_t layout, uintptr_t controller)
{
    @autoreleasepool {
        NSPageLayout *obj = ns_pagelayout_from(layout);
        NSViewController *vc = (__bridge NSViewController *)ns_viewcontroller_nsviewcontroller(controller);
        if (obj && vc) {
            [obj addAccessoryController:vc];
        }
    }
}

void ns_pagelayout_remove_accessory_controller(uintptr_t layout, uintptr_t controller)
{
    @autoreleasepool {
        NSPageLayout *obj = ns_pagelayout_from(layout);
        NSViewController *vc = (__bridge NSViewController *)ns_viewcontroller_nsviewcontroller(controller);
        if (obj && vc) {
            [obj removeAccessoryController:vc];
        }
    }
}

int ns_pagelayout_accessory_controller_count(uintptr_t layout)
{
    @autoreleasepool {
        NSPageLayout *obj = ns_pagelayout_from(layout);
        return obj ? (int)obj.accessoryControllers.count : 0;
    }
}
