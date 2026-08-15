#import <AppKit/AppKit.h>
#import "ns-textattachmentcell.h"
#import "ns-textattachment.h"

static int ns_copy_nsstring(NSString *text, char *out, int out_len)
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

static uintptr_t ns_retain_obj(id object)
{
    return object ? (uintptr_t)(__bridge_retained void *)object : 0;
}

static void ns_release_handle(uintptr_t handle)
{
    if (handle) {
        CFRelease((void *)handle);
    }
}

static NSTextAttachmentCell *ns_textattachmentcell_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSTextAttachmentCell class]] ? (NSTextAttachmentCell *)obj : nil;
}

uintptr_t ns_textattachmentcell_create(void)
{
    @autoreleasepool {
        return ns_retain_obj([[NSTextAttachmentCell alloc] init]);
    }
}

uintptr_t ns_textattachmentcell_wrap(void *cell)
{
    if (!cell) {
        return 0;
    }
    @autoreleasepool {
        NSTextAttachmentCell *obj = (__bridge NSTextAttachmentCell *)cell;
        return [obj isKindOfClass:[NSTextAttachmentCell class]] ? ns_retain_obj(obj) : 0;
    }
}

void ns_textattachmentcell_destroy(uintptr_t cell)
{
    ns_release_handle(cell);
}

void *ns_textattachmentcell_nstextattachmentcell(uintptr_t cell)
{
    NSTextAttachmentCell *obj = ns_textattachmentcell_from(cell);
    return obj ? (__bridge void *)obj : NULL;
}

void ns_textattachmentcell_set_attachment(uintptr_t cell, uintptr_t attachment)
{
    @autoreleasepool {
        NSTextAttachmentCell *obj = ns_textattachmentcell_from(cell);
        NSTextAttachment *att = (__bridge NSTextAttachment *)ns_textattachment_nstextattachment(attachment);
        if (obj) {
            obj.attachment = att;
        }
    }
}

uintptr_t ns_textattachmentcell_get_attachment(uintptr_t cell)
{
    @autoreleasepool {
        NSTextAttachmentCell *obj = ns_textattachmentcell_from(cell);
        return obj && obj.attachment ? ns_textattachment_wrap((__bridge void *)obj.attachment) : 0;
    }
}

void ns_textattachmentcell_cell_size(uintptr_t cell, double *width, double *height)
{
    if (width) {
        *width = 0;
    }
    if (height) {
        *height = 0;
    }
    @autoreleasepool {
        NSTextAttachmentCell *obj = ns_textattachmentcell_from(cell);
        if (!obj) {
            return;
        }
        NSSize size = [obj cellSize];
        if (width) {
            *width = size.width;
        }
        if (height) {
            *height = size.height;
        }
    }
}

void ns_textattachmentcell_cell_baseline_offset(uintptr_t cell, double *x, double *y)
{
    if (x) {
        *x = 0;
    }
    if (y) {
        *y = 0;
    }
    @autoreleasepool {
        NSTextAttachmentCell *obj = ns_textattachmentcell_from(cell);
        if (!obj) {
            return;
        }
        NSPoint point = [obj cellBaselineOffset];
        if (x) {
            *x = point.x;
        }
        if (y) {
            *y = point.y;
        }
    }
}
