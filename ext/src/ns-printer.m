#import <AppKit/AppKit.h>
#import "ns-printer.h"

static uintptr_t ns_printer_retain_obj(id object)
{
    return object ? (uintptr_t)(__bridge_retained void *)object : 0;
}

static NSPrinter *ns_printer_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSPrinter class]] ? (NSPrinter *)obj : nil;
}

static int ns_printer_copy_nsstring(NSString *text, char *out, int out_len)
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

uintptr_t ns_printer_wrap(void *printer)
{
    if (!printer) {
        return 0;
    }
    @autoreleasepool {
        NSPrinter *obj = (__bridge NSPrinter *)printer;
        return [obj isKindOfClass:[NSPrinter class]] ? ns_printer_retain_obj(obj) : 0;
    }
}

void ns_printer_destroy(uintptr_t printer)
{
    if (!printer) {
        return;
    }
    CFRelease((void *)printer);
}

void *ns_printer_nsprinter(uintptr_t printer)
{
    NSPrinter *obj = ns_printer_from(printer);
    return obj ? (__bridge void *)obj : NULL;
}

int ns_printer_names_count(void)
{
    @autoreleasepool {
        return (int)[NSPrinter printerNames].count;
    }
}

int ns_printer_names_at(int index, char *out, int out_len)
{
    @autoreleasepool {
        NSArray<NSString *> *names = [NSPrinter printerNames];
        if (index < 0 || index >= (int)names.count) {
            return 0;
        }
        return ns_printer_copy_nsstring(names[(NSUInteger)index], out, out_len);
    }
}

int ns_printer_types_count(void)
{
    @autoreleasepool {
        return (int)[NSPrinter printerTypes].count;
    }
}

int ns_printer_types_at(int index, char *out, int out_len)
{
    @autoreleasepool {
        NSArray<NSString *> *types = [NSPrinter printerTypes];
        if (index < 0 || index >= (int)types.count) {
            return 0;
        }
        return ns_printer_copy_nsstring(types[(NSUInteger)index], out, out_len);
    }
}

uintptr_t ns_printer_with_name(const char *name)
{
    @autoreleasepool {
        if (!name || name[0] == '\0') {
            return 0;
        }
        NSPrinter *printer = [NSPrinter printerWithName:[NSString stringWithUTF8String:name]];
        return printer ? ns_printer_retain_obj(printer) : 0;
    }
}

uintptr_t ns_printer_with_type(const char *type)
{
    @autoreleasepool {
        if (!type || type[0] == '\0') {
            return 0;
        }
        NSPrinter *printer = [NSPrinter printerWithType:[NSString stringWithUTF8String:type]];
        return printer ? ns_printer_retain_obj(printer) : 0;
    }
}

int ns_printer_name(uintptr_t printer, char *out, int out_len)
{
    @autoreleasepool {
        NSPrinter *obj = ns_printer_from(printer);
        return obj ? ns_printer_copy_nsstring(obj.name, out, out_len) : 0;
    }
}

int ns_printer_type(uintptr_t printer, char *out, int out_len)
{
    @autoreleasepool {
        NSPrinter *obj = ns_printer_from(printer);
        return obj ? ns_printer_copy_nsstring(obj.type, out, out_len) : 0;
    }
}

int ns_printer_language_level(uintptr_t printer)
{
    @autoreleasepool {
        NSPrinter *obj = ns_printer_from(printer);
        return obj ? (int)obj.languageLevel : 0;
    }
}

int ns_printer_page_size_for_paper(uintptr_t printer, const char *paper_name, double *width, double *height)
{
    @autoreleasepool {
        NSPrinter *obj = ns_printer_from(printer);
        if (!obj || !paper_name || !width || !height) {
            return 0;
        }
        NSSize size = [obj pageSizeForPaper:[NSString stringWithUTF8String:paper_name]];
        if (NSEqualSizes(size, NSZeroSize)) {
            return 0;
        }
        *width = size.width;
        *height = size.height;
        return 1;
    }
}

int ns_printer_device_is_printer(uintptr_t printer)
{
    @autoreleasepool {
        NSPrinter *obj = ns_printer_from(printer);
        if (!obj) {
            return 0;
        }
        id value = obj.deviceDescription[NSDeviceIsPrinter];
        return value ? ([value boolValue] ? 1 : 0) : 0;
    }
}
