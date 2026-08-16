#import <AppKit/AppKit.h>
#import "ns-printinfo.h"
#import "ns-printer.h"

static uintptr_t ns_printinfo_retain_obj(id object)
{
    return object ? (uintptr_t)(__bridge_retained void *)object : 0;
}

static NSPrintInfo *ns_printinfo_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSPrintInfo class]] ? (NSPrintInfo *)obj : nil;
}

static int ns_printinfo_copy_nsstring(NSString *text, char *out, int out_len)
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

static NSPaperOrientation ns_printinfo_orientation_from_int(int orientation)
{
    return orientation == 1 ? NSPaperOrientationLandscape : NSPaperOrientationPortrait;
}

static NSPrintingPaginationMode ns_printinfo_pagination_from_int(int mode)
{
    switch (mode) {
        case 1:
            return NSPrintingPaginationModeFit;
        case 2:
            return NSPrintingPaginationModeClip;
        case 0:
        default:
            return NSPrintingPaginationModeAutomatic;
    }
}

uintptr_t ns_printinfo_wrap(void *printInfo)
{
    if (!printInfo) {
        return 0;
    }
    @autoreleasepool {
        NSPrintInfo *obj = (__bridge NSPrintInfo *)printInfo;
        return [obj isKindOfClass:[NSPrintInfo class]] ? ns_printinfo_retain_obj(obj) : 0;
    }
}

void ns_printinfo_destroy(uintptr_t printInfo)
{
    if (!printInfo) {
        return;
    }
    CFRelease((void *)printInfo);
}

void *ns_printinfo_nsprintinfo(uintptr_t printInfo)
{
    NSPrintInfo *obj = ns_printinfo_from(printInfo);
    return obj ? (__bridge void *)obj : NULL;
}

uintptr_t ns_printinfo_create(void)
{
    @autoreleasepool {
        return ns_printinfo_retain_obj([[NSPrintInfo alloc] init]);
    }
}

uintptr_t ns_printinfo_shared(void)
{
    @autoreleasepool {
        return ns_printinfo_retain_obj([NSPrintInfo sharedPrintInfo]);
    }
}

void ns_printinfo_set_shared(void *printInfo)
{
    @autoreleasepool {
        NSPrintInfo *info = printInfo ? (__bridge NSPrintInfo *)printInfo : nil;
        if (info && [info isKindOfClass:[NSPrintInfo class]]) {
            [NSPrintInfo setSharedPrintInfo:info];
        }
    }
}

void *ns_printinfo_default_printer(void)
{
    @autoreleasepool {
        NSPrinter *printer = [NSPrintInfo defaultPrinter];
        return printer ? (__bridge void *)printer : NULL;
    }
}

int ns_printinfo_paper_name(uintptr_t printInfo, char *out, int out_len)
{
    @autoreleasepool {
        NSPrintInfo *obj = ns_printinfo_from(printInfo);
        return obj ? ns_printinfo_copy_nsstring(obj.paperName, out, out_len) : 0;
    }
}

void ns_printinfo_set_paper_name(uintptr_t printInfo, const char *name)
{
    @autoreleasepool {
        NSPrintInfo *obj = ns_printinfo_from(printInfo);
        if (obj && name) {
            obj.paperName = [NSString stringWithUTF8String:name];
        }
    }
}

int ns_printinfo_paper_size(uintptr_t printInfo, double *width, double *height)
{
    @autoreleasepool {
        NSPrintInfo *obj = ns_printinfo_from(printInfo);
        if (!obj || !width || !height) {
            return 0;
        }
        NSSize size = obj.paperSize;
        *width = size.width;
        *height = size.height;
        return 1;
    }
}

void ns_printinfo_set_paper_size(uintptr_t printInfo, double width, double height)
{
    @autoreleasepool {
        NSPrintInfo *obj = ns_printinfo_from(printInfo);
        if (obj) {
            obj.paperSize = NSMakeSize(width, height);
        }
    }
}

int ns_printinfo_orientation(uintptr_t printInfo)
{
    @autoreleasepool {
        NSPrintInfo *obj = ns_printinfo_from(printInfo);
        return obj ? (int)obj.orientation : 0;
    }
}

void ns_printinfo_set_orientation(uintptr_t printInfo, int orientation)
{
    @autoreleasepool {
        NSPrintInfo *obj = ns_printinfo_from(printInfo);
        if (obj) {
            obj.orientation = ns_printinfo_orientation_from_int(orientation);
        }
    }
}

double ns_printinfo_scaling_factor(uintptr_t printInfo)
{
    @autoreleasepool {
        NSPrintInfo *obj = ns_printinfo_from(printInfo);
        return obj ? obj.scalingFactor : 0.0;
    }
}

void ns_printinfo_set_scaling_factor(uintptr_t printInfo, double factor)
{
    @autoreleasepool {
        NSPrintInfo *obj = ns_printinfo_from(printInfo);
        if (obj) {
            obj.scalingFactor = factor;
        }
    }
}

double ns_printinfo_left_margin(uintptr_t printInfo)
{
    @autoreleasepool {
        NSPrintInfo *obj = ns_printinfo_from(printInfo);
        return obj ? obj.leftMargin : 0.0;
    }
}

void ns_printinfo_set_left_margin(uintptr_t printInfo, double value)
{
    @autoreleasepool {
        NSPrintInfo *obj = ns_printinfo_from(printInfo);
        if (obj) {
            obj.leftMargin = value;
        }
    }
}

double ns_printinfo_right_margin(uintptr_t printInfo)
{
    @autoreleasepool {
        NSPrintInfo *obj = ns_printinfo_from(printInfo);
        return obj ? obj.rightMargin : 0.0;
    }
}

void ns_printinfo_set_right_margin(uintptr_t printInfo, double value)
{
    @autoreleasepool {
        NSPrintInfo *obj = ns_printinfo_from(printInfo);
        if (obj) {
            obj.rightMargin = value;
        }
    }
}

double ns_printinfo_top_margin(uintptr_t printInfo)
{
    @autoreleasepool {
        NSPrintInfo *obj = ns_printinfo_from(printInfo);
        return obj ? obj.topMargin : 0.0;
    }
}

void ns_printinfo_set_top_margin(uintptr_t printInfo, double value)
{
    @autoreleasepool {
        NSPrintInfo *obj = ns_printinfo_from(printInfo);
        if (obj) {
            obj.topMargin = value;
        }
    }
}

double ns_printinfo_bottom_margin(uintptr_t printInfo)
{
    @autoreleasepool {
        NSPrintInfo *obj = ns_printinfo_from(printInfo);
        return obj ? obj.bottomMargin : 0.0;
    }
}

void ns_printinfo_set_bottom_margin(uintptr_t printInfo, double value)
{
    @autoreleasepool {
        NSPrintInfo *obj = ns_printinfo_from(printInfo);
        if (obj) {
            obj.bottomMargin = value;
        }
    }
}

int ns_printinfo_is_horizontally_centered(uintptr_t printInfo)
{
    @autoreleasepool {
        NSPrintInfo *obj = ns_printinfo_from(printInfo);
        return obj && obj.horizontallyCentered ? 1 : 0;
    }
}

void ns_printinfo_set_horizontally_centered(uintptr_t printInfo, int centered)
{
    @autoreleasepool {
        NSPrintInfo *obj = ns_printinfo_from(printInfo);
        if (obj) {
            obj.horizontallyCentered = centered ? YES : NO;
        }
    }
}

int ns_printinfo_is_vertically_centered(uintptr_t printInfo)
{
    @autoreleasepool {
        NSPrintInfo *obj = ns_printinfo_from(printInfo);
        return obj && obj.verticallyCentered ? 1 : 0;
    }
}

void ns_printinfo_set_vertically_centered(uintptr_t printInfo, int centered)
{
    @autoreleasepool {
        NSPrintInfo *obj = ns_printinfo_from(printInfo);
        if (obj) {
            obj.verticallyCentered = centered ? YES : NO;
        }
    }
}

int ns_printinfo_horizontal_pagination(uintptr_t printInfo)
{
    @autoreleasepool {
        NSPrintInfo *obj = ns_printinfo_from(printInfo);
        return obj ? (int)obj.horizontalPagination : 0;
    }
}

void ns_printinfo_set_horizontal_pagination(uintptr_t printInfo, int mode)
{
    @autoreleasepool {
        NSPrintInfo *obj = ns_printinfo_from(printInfo);
        if (obj) {
            obj.horizontalPagination = ns_printinfo_pagination_from_int(mode);
        }
    }
}

int ns_printinfo_vertical_pagination(uintptr_t printInfo)
{
    @autoreleasepool {
        NSPrintInfo *obj = ns_printinfo_from(printInfo);
        return obj ? (int)obj.verticalPagination : 0;
    }
}

void ns_printinfo_set_vertical_pagination(uintptr_t printInfo, int mode)
{
    @autoreleasepool {
        NSPrintInfo *obj = ns_printinfo_from(printInfo);
        if (obj) {
            obj.verticalPagination = ns_printinfo_pagination_from_int(mode);
        }
    }
}

int ns_printinfo_job_disposition(uintptr_t printInfo, char *out, int out_len)
{
    @autoreleasepool {
        NSPrintInfo *obj = ns_printinfo_from(printInfo);
        return obj ? ns_printinfo_copy_nsstring(obj.jobDisposition, out, out_len) : 0;
    }
}

void ns_printinfo_set_job_disposition(uintptr_t printInfo, const char *disposition)
{
    @autoreleasepool {
        NSPrintInfo *obj = ns_printinfo_from(printInfo);
        if (obj && disposition) {
            obj.jobDisposition = [NSString stringWithUTF8String:disposition];
        }
    }
}

uintptr_t ns_printinfo_printer(uintptr_t printInfo)
{
    @autoreleasepool {
        NSPrintInfo *obj = ns_printinfo_from(printInfo);
        return obj && obj.printer ? ns_printer_wrap((__bridge void *)obj.printer) : 0;
    }
}

void ns_printinfo_set_printer(uintptr_t printInfo, uintptr_t printer)
{
    @autoreleasepool {
        NSPrintInfo *obj = ns_printinfo_from(printInfo);
        NSPrinter *printerObj = (__bridge NSPrinter *)ns_printer_nsprinter(printer);
        if (obj && printerObj) {
            obj.printer = printerObj;
        }
    }
}

void ns_printinfo_set_up_print_operation_default_values(uintptr_t printInfo)
{
    @autoreleasepool {
        NSPrintInfo *obj = ns_printinfo_from(printInfo);
        if (obj) {
            [obj setUpPrintOperationDefaultValues];
        }
    }
}

int ns_printinfo_imageable_page_bounds(uintptr_t printInfo, double *x, double *y, double *width, double *height)
{
    @autoreleasepool {
        NSPrintInfo *obj = ns_printinfo_from(printInfo);
        if (!obj || !x || !y || !width || !height) {
            return 0;
        }
        NSRect rect = obj.imageablePageBounds;
        *x = rect.origin.x;
        *y = rect.origin.y;
        *width = rect.size.width;
        *height = rect.size.height;
        return 1;
    }
}

int ns_printinfo_localized_paper_name(uintptr_t printInfo, char *out, int out_len)
{
    @autoreleasepool {
        NSPrintInfo *obj = ns_printinfo_from(printInfo);
        return obj ? ns_printinfo_copy_nsstring(obj.localizedPaperName, out, out_len) : 0;
    }
}

int ns_printinfo_is_selection_only(uintptr_t printInfo)
{
    @autoreleasepool {
        NSPrintInfo *obj = ns_printinfo_from(printInfo);
        return obj && obj.selectionOnly ? 1 : 0;
    }
}

void ns_printinfo_set_selection_only(uintptr_t printInfo, int selection_only)
{
    @autoreleasepool {
        NSPrintInfo *obj = ns_printinfo_from(printInfo);
        if (obj) {
            obj.selectionOnly = selection_only ? YES : NO;
        }
    }
}
