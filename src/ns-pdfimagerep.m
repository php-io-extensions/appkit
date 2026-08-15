#import <AppKit/AppKit.h>
#import "ns-pdfimagerep.h"
#import "ns-imagerep.h"

static NSPDFImageRep *ns_pdfimagerep_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSPDFImageRep class]] ? (NSPDFImageRep *)obj : nil;
}

uintptr_t ns_pdfimagerep_wrap(void *rep)
{
    if (!rep) {
        return 0;
    }
    @autoreleasepool {
        NSPDFImageRep *obj = (__bridge NSPDFImageRep *)rep;
        return [obj isKindOfClass:[NSPDFImageRep class]] ? ns_imagerep_retain_obj((__bridge void *)obj) : 0;
    }
}

void ns_pdfimagerep_destroy(uintptr_t rep)
{
    ns_imagerep_destroy(rep);
}

void *ns_pdfimagerep_nspdfimagerep(uintptr_t rep)
{
    NSPDFImageRep *obj = ns_pdfimagerep_from(rep);
    return obj ? (__bridge void *)obj : NULL;
}

uintptr_t ns_pdfimagerep_with_data(const char *data, size_t length)
{
    @autoreleasepool {
        if (!data || length == 0) {
            return 0;
        }
        NSData *blob = [NSData dataWithBytes:data length:length];
        NSPDFImageRep *obj = [[NSPDFImageRep alloc] initWithData:blob];
        return ns_imagerep_retain_obj((__bridge void *)obj);
    }
}

int ns_pdfimagerep_get_bounds(uintptr_t rep, double *x, double *y, double *width, double *height)
{
    if (!x || !y || !width || !height) {
        return 0;
    }
    @autoreleasepool {
        NSPDFImageRep *obj = ns_pdfimagerep_from(rep);
        if (!obj) {
            return 0;
        }
        NSRect rect = obj.bounds;
        *x = (double)rect.origin.x;
        *y = (double)rect.origin.y;
        *width = (double)rect.size.width;
        *height = (double)rect.size.height;
        return 1;
    }
}

int ns_pdfimagerep_get_pdf_representation(uintptr_t rep, char **out, size_t *out_len)
{
    if (!out || !out_len) {
        return 0;
    }
    *out = NULL;
    *out_len = 0;
    @autoreleasepool {
        NSPDFImageRep *obj = ns_pdfimagerep_from(rep);
        NSData *data = obj.PDFRepresentation;
        if (!obj || !data || data.length == 0) {
            return 0;
        }
        char *copy = (char *)malloc(data.length);
        if (!copy) {
            return 0;
        }
        memcpy(copy, data.bytes, data.length);
        *out = copy;
        *out_len = data.length;
        return 1;
    }
}

void ns_pdfimagerep_free_buffer(char *buffer)
{
    if (buffer) {
        free(buffer);
    }
}

int ns_pdfimagerep_current_page(uintptr_t rep)
{
    @autoreleasepool {
        NSPDFImageRep *obj = ns_pdfimagerep_from(rep);
        return obj ? (int)obj.currentPage : 0;
    }
}

void ns_pdfimagerep_set_current_page(uintptr_t rep, int page)
{
    @autoreleasepool {
        NSPDFImageRep *obj = ns_pdfimagerep_from(rep);
        if (obj) {
            obj.currentPage = page;
        }
    }
}

int ns_pdfimagerep_page_count(uintptr_t rep)
{
    @autoreleasepool {
        NSPDFImageRep *obj = ns_pdfimagerep_from(rep);
        return obj ? (int)obj.pageCount : 0;
    }
}
