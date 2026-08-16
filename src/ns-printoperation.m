#import <AppKit/AppKit.h>
#import "ns-printoperation.h"
#import "ns-printinfo.h"
#import "ns-printpanel.h"
#import "ns-view.h"
#import "ns-window.h"

static uintptr_t ns_printoperation_retain_obj(id object)
{
    return object ? (uintptr_t)(__bridge_retained void *)object : 0;
}

static NSPrintOperation *ns_printoperation_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSPrintOperation class]] ? (NSPrintOperation *)obj : nil;
}

static int ns_printoperation_copy_nsstring(NSString *text, char *out, int out_len)
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

static NSView *ns_printoperation_view_from(uintptr_t view)
{
    return (__bridge NSView *)ns_view_nsview(view);
}

static NSPrintInfo *ns_printoperation_printinfo_from(uintptr_t printInfo)
{
    return (__bridge NSPrintInfo *)ns_printinfo_nsprintinfo(printInfo);
}

uintptr_t ns_printoperation_wrap(void *operation)
{
    if (!operation) {
        return 0;
    }
    @autoreleasepool {
        NSPrintOperation *obj = (__bridge NSPrintOperation *)operation;
        return [obj isKindOfClass:[NSPrintOperation class]] ? ns_printoperation_retain_obj(obj) : 0;
    }
}

void ns_printoperation_destroy(uintptr_t operation)
{
    if (!operation) {
        return;
    }
    CFRelease((void *)operation);
}

void *ns_printoperation_nsprintoperation(uintptr_t operation)
{
    NSPrintOperation *obj = ns_printoperation_from(operation);
    return obj ? (__bridge void *)obj : NULL;
}

uintptr_t ns_printoperation_with_view(uintptr_t view)
{
    @autoreleasepool {
        NSView *viewObj = ns_printoperation_view_from(view);
        if (!viewObj) {
            return 0;
        }
        return ns_printoperation_retain_obj([NSPrintOperation printOperationWithView:viewObj]);
    }
}

uintptr_t ns_printoperation_with_view_print_info(uintptr_t view, uintptr_t printInfo)
{
    @autoreleasepool {
        NSView *viewObj = ns_printoperation_view_from(view);
        NSPrintInfo *infoObj = ns_printoperation_printinfo_from(printInfo);
        if (!viewObj || !infoObj) {
            return 0;
        }
        return ns_printoperation_retain_obj([NSPrintOperation printOperationWithView:viewObj printInfo:infoObj]);
    }
}

uintptr_t ns_printoperation_pdf_with_view_rect_path(uintptr_t view, double x, double y, double width, double height, const char *path, uintptr_t printInfo)
{
    @autoreleasepool {
        NSView *viewObj = ns_printoperation_view_from(view);
        NSPrintInfo *infoObj = ns_printoperation_printinfo_from(printInfo);
        if (!viewObj || !infoObj || !path || path[0] == '\0') {
            return 0;
        }
        NSRect rect = NSMakeRect(x, y, width, height);
        NSPrintOperation *op = [NSPrintOperation PDFOperationWithView:viewObj
                                                           insideRect:rect
                                                               toPath:[NSString stringWithUTF8String:path]
                                                            printInfo:infoObj];
        return op ? ns_printoperation_retain_obj(op) : 0;
    }
}

uintptr_t ns_printoperation_eps_with_view_rect_path(uintptr_t view, double x, double y, double width, double height, const char *path, uintptr_t printInfo)
{
    @autoreleasepool {
        NSView *viewObj = ns_printoperation_view_from(view);
        NSPrintInfo *infoObj = ns_printoperation_printinfo_from(printInfo);
        if (!viewObj || !infoObj || !path || path[0] == '\0') {
            return 0;
        }
        NSRect rect = NSMakeRect(x, y, width, height);
        NSPrintOperation *op = [NSPrintOperation EPSOperationWithView:viewObj
                                                           insideRect:rect
                                                               toPath:[NSString stringWithUTF8String:path]
                                                            printInfo:infoObj];
        return op ? ns_printoperation_retain_obj(op) : 0;
    }
}

uintptr_t ns_printoperation_current_operation(void)
{
    @autoreleasepool {
        NSPrintOperation *op = [NSPrintOperation currentOperation];
        return op ? ns_printoperation_retain_obj(op) : 0;
    }
}

void ns_printoperation_set_current_operation(uintptr_t operation)
{
    @autoreleasepool {
        NSPrintOperation *obj = ns_printoperation_from(operation);
        [NSPrintOperation setCurrentOperation:obj];
    }
}

int ns_printoperation_is_copying_operation(uintptr_t operation)
{
    @autoreleasepool {
        NSPrintOperation *obj = ns_printoperation_from(operation);
        return obj && obj.copyingOperation ? 1 : 0;
    }
}

int ns_printoperation_preferred_rendering_quality(uintptr_t operation)
{
    @autoreleasepool {
        NSPrintOperation *obj = ns_printoperation_from(operation);
        return obj ? (int)obj.preferredRenderingQuality : 0;
    }
}

int ns_printoperation_job_title(uintptr_t operation, char *out, int out_len)
{
    @autoreleasepool {
        NSPrintOperation *obj = ns_printoperation_from(operation);
        return obj ? ns_printoperation_copy_nsstring(obj.jobTitle, out, out_len) : 0;
    }
}

void ns_printoperation_set_job_title(uintptr_t operation, const char *title)
{
    @autoreleasepool {
        NSPrintOperation *obj = ns_printoperation_from(operation);
        if (obj) {
            if (title && title[0] != '\0') {
                obj.jobTitle = [NSString stringWithUTF8String:title];
            } else {
                obj.jobTitle = nil;
            }
        }
    }
}

int ns_printoperation_shows_print_panel(uintptr_t operation)
{
    @autoreleasepool {
        NSPrintOperation *obj = ns_printoperation_from(operation);
        return obj && obj.showsPrintPanel ? 1 : 0;
    }
}

void ns_printoperation_set_shows_print_panel(uintptr_t operation, int shows)
{
    @autoreleasepool {
        NSPrintOperation *obj = ns_printoperation_from(operation);
        if (obj) {
            obj.showsPrintPanel = shows ? YES : NO;
        }
    }
}

int ns_printoperation_shows_progress_panel(uintptr_t operation)
{
    @autoreleasepool {
        NSPrintOperation *obj = ns_printoperation_from(operation);
        return obj && obj.showsProgressPanel ? 1 : 0;
    }
}

void ns_printoperation_set_shows_progress_panel(uintptr_t operation, int shows)
{
    @autoreleasepool {
        NSPrintOperation *obj = ns_printoperation_from(operation);
        if (obj) {
            obj.showsProgressPanel = shows ? YES : NO;
        }
    }
}

uintptr_t ns_printoperation_print_panel(uintptr_t operation)
{
    @autoreleasepool {
        NSPrintOperation *obj = ns_printoperation_from(operation);
        return obj && obj.printPanel ? ns_printpanel_wrap((__bridge void *)obj.printPanel) : 0;
    }
}

void ns_printoperation_set_print_panel(uintptr_t operation, uintptr_t panel)
{
    @autoreleasepool {
        NSPrintOperation *obj = ns_printoperation_from(operation);
        NSPrintPanel *panelObj = (__bridge NSPrintPanel *)ns_printpanel_nsprintpanel(panel);
        if (obj && panelObj) {
            obj.printPanel = panelObj;
        }
    }
}

int ns_printoperation_page_order(uintptr_t operation)
{
    @autoreleasepool {
        NSPrintOperation *obj = ns_printoperation_from(operation);
        return obj ? (int)obj.pageOrder : 0;
    }
}

void ns_printoperation_set_page_order(uintptr_t operation, int page_order)
{
    @autoreleasepool {
        NSPrintOperation *obj = ns_printoperation_from(operation);
        if (obj) {
            obj.pageOrder = (NSPrintingPageOrder)page_order;
        }
    }
}

int ns_printoperation_run_operation(uintptr_t operation)
{
    @autoreleasepool {
        NSPrintOperation *obj = ns_printoperation_from(operation);
        if (!obj) {
            return 0;
        }
        return [obj runOperation] ? 1 : 0;
    }
}

int ns_printoperation_run_operation_modal_for_window(uintptr_t operation, uintptr_t window)
{
    @autoreleasepool {
        NSPrintOperation *obj = ns_printoperation_from(operation);
        NSWindow *windowObj = (__bridge NSWindow *)ns_window_nswindow(window);
        if (!obj || !windowObj) {
            return 0;
        }
        [obj runOperationModalForWindow:windowObj delegate:nil didRunSelector:NULL contextInfo:NULL];
        return 1;
    }
}

void *ns_printoperation_view(uintptr_t operation)
{
    @autoreleasepool {
        NSPrintOperation *obj = ns_printoperation_from(operation);
        return obj && obj.view ? (__bridge void *)obj.view : NULL;
    }
}

uintptr_t ns_printoperation_print_info(uintptr_t operation)
{
    @autoreleasepool {
        NSPrintOperation *obj = ns_printoperation_from(operation);
        return obj && obj.printInfo ? ns_printinfo_wrap((__bridge void *)obj.printInfo) : 0;
    }
}

void ns_printoperation_set_print_info(uintptr_t operation, uintptr_t printInfo)
{
    @autoreleasepool {
        NSPrintOperation *obj = ns_printoperation_from(operation);
        NSPrintInfo *infoObj = ns_printoperation_printinfo_from(printInfo);
        if (obj && infoObj) {
            obj.printInfo = infoObj;
        }
    }
}

int ns_printoperation_page_range(uintptr_t operation, long *location, long *length)
{
    @autoreleasepool {
        NSPrintOperation *obj = ns_printoperation_from(operation);
        if (!obj || !location || !length) {
            return 0;
        }
        NSRange range = obj.pageRange;
        *location = (long)range.location;
        *length = (long)range.length;
        return 1;
    }
}

int ns_printoperation_current_page(uintptr_t operation)
{
    @autoreleasepool {
        NSPrintOperation *obj = ns_printoperation_from(operation);
        return obj ? (int)obj.currentPage : 0;
    }
}
