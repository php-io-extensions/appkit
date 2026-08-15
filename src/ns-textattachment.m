#import <AppKit/AppKit.h>
#import "ns-textattachment.h"
#import "ns-image.h"

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

static NSTextAttachment *ns_textattachment_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSTextAttachment class]] ? (NSTextAttachment *)obj : nil;
}

uintptr_t ns_textattachment_create(void)
{
    @autoreleasepool {
        return ns_retain_obj([[NSTextAttachment alloc] init]);
    }
}

uintptr_t ns_textattachment_create_with_data(const char *data, size_t length, const char *file_type)
{
    @autoreleasepool {
        NSData *payload = (data && length > 0) ? [NSData dataWithBytes:data length:length] : [NSData data];
        NSString *uti = file_type ? [NSString stringWithUTF8String:file_type] : nil;
        return ns_retain_obj([[NSTextAttachment alloc] initWithData:payload ofType:uti]);
    }
}

uintptr_t ns_textattachment_wrap(void *attachment)
{
    if (!attachment) {
        return 0;
    }
    @autoreleasepool {
        NSTextAttachment *obj = (__bridge NSTextAttachment *)attachment;
        return [obj isKindOfClass:[NSTextAttachment class]] ? ns_retain_obj(obj) : 0;
    }
}

void ns_textattachment_destroy(uintptr_t attachment)
{
    ns_release_handle(attachment);
}

void *ns_textattachment_nstextattachment(uintptr_t attachment)
{
    NSTextAttachment *obj = ns_textattachment_from(attachment);
    return obj ? (__bridge void *)obj : NULL;
}

void ns_textattachment_set_file_type(uintptr_t attachment, const char *file_type)
{
    @autoreleasepool {
        NSTextAttachment *obj = ns_textattachment_from(attachment);
        if (obj) {
            obj.fileType = file_type ? [NSString stringWithUTF8String:file_type] : nil;
        }
    }
}

int ns_textattachment_get_file_type(uintptr_t attachment, char *out, int out_len)
{
    @autoreleasepool {
        NSTextAttachment *obj = ns_textattachment_from(attachment);
        return obj ? ns_copy_nsstring(obj.fileType, out, out_len) : 0;
    }
}

void ns_textattachment_set_image(uintptr_t attachment, uintptr_t image)
{
    @autoreleasepool {
        NSTextAttachment *obj = ns_textattachment_from(attachment);
        if (obj) {
            obj.image = (__bridge NSImage *)ns_image_nsimage(image);
        }
    }
}

uintptr_t ns_textattachment_get_image(uintptr_t attachment)
{
    @autoreleasepool {
        NSTextAttachment *obj = ns_textattachment_from(attachment);
        return obj && obj.image ? ns_image_wrap((__bridge void *)obj.image) : 0;
    }
}

void ns_textattachment_set_bounds(uintptr_t attachment, double x, double y, double width, double height)
{
    @autoreleasepool {
        NSTextAttachment *obj = ns_textattachment_from(attachment);
        if (obj) {
            obj.bounds = NSMakeRect((CGFloat)x, (CGFloat)y, (CGFloat)width, (CGFloat)height);
        }
    }
}

void ns_textattachment_get_bounds(uintptr_t attachment, double *x, double *y, double *width, double *height)
{
    if (x) {
        *x = 0;
    }
    if (y) {
        *y = 0;
    }
    if (width) {
        *width = 0;
    }
    if (height) {
        *height = 0;
    }
    @autoreleasepool {
        NSTextAttachment *obj = ns_textattachment_from(attachment);
        if (!obj) {
            return;
        }
        if (x) {
            *x = obj.bounds.origin.x;
        }
        if (y) {
            *y = obj.bounds.origin.y;
        }
        if (width) {
            *width = obj.bounds.size.width;
        }
        if (height) {
            *height = obj.bounds.size.height;
        }
    }
}

void ns_textattachment_set_attachment_cell(uintptr_t attachment, uintptr_t cell)
{
    @autoreleasepool {
        NSTextAttachment *obj = ns_textattachment_from(attachment);
        if (!obj) {
            return;
        }
        id cellObj = cell ? (__bridge id)(void *)cell : nil;
        if (cellObj && [cellObj conformsToProtocol:@protocol(NSTextAttachmentCell)]) {
            obj.attachmentCell = cellObj;
        } else {
            obj.attachmentCell = nil;
        }
    }
}

uintptr_t ns_textattachment_get_attachment_cell(uintptr_t attachment)
{
    @autoreleasepool {
        NSTextAttachment *obj = ns_textattachment_from(attachment);
        return obj && obj.attachmentCell ? ns_retain_obj(obj.attachmentCell) : 0;
    }
}

void ns_textattachment_set_line_layout_padding(uintptr_t attachment, double padding)
{
    @autoreleasepool {
        NSTextAttachment *obj = ns_textattachment_from(attachment);
        if (obj) {
            obj.lineLayoutPadding = (CGFloat)padding;
        }
    }
}

double ns_textattachment_get_line_layout_padding(uintptr_t attachment)
{
    @autoreleasepool {
        NSTextAttachment *obj = ns_textattachment_from(attachment);
        return obj ? obj.lineLayoutPadding : 0.0;
    }
}
